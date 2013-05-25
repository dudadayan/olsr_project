//
// Copyright (C) 2008 Alfonso Ariza
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//

#include "InterfaceTableAccess.h"
#include "Ieee80211Etx.h"
#include "Ieee80211Frame_m.h"
#include "Radio80211aControlInfo_m.h"

Define_Module(Ieee80211Etx);

void Ieee80211Etx::initialize(int stage)
{
    if (stage==2)
    {
        etxTimer = new cMessage("etxTimer");
        ettTimer = new cMessage("etxTimer");
        etxInterval = par("ETXInterval");
        ettInterval = par("ETTInterval");
        etxMeasureInterval = par("ETXMeasureInterval");
        etxSize = par("ETXSize");
        ettSize1 = par("ETTSize1");
        ettSize2 = par("ETTSize2");
        maxLive = par("TimeToLive");
        powerWindow = par("powerWindow");
        powerWindowTime = par("powerWindowTime");
        NotificationBoard *nb = NotificationBoardAccess().get();
        nb->subscribe(this, NF_LINK_BREAK);
        nb->subscribe(this, NF_LINK_FULL_PROMISCUOUS);
        IInterfaceTable *inet_ift = InterfaceTableAccess ().get();
        for (int i = 0; i < inet_ift->getNumInterfaces(); i++)
        {
            InterfaceEntry * ie = inet_ift->getInterface(i);
            if (ie->getMacAddress()==myAddress)
                ie->setEstimateCostProcess(par("Index"),this);
        }
        if (etxSize>0 && etxInterval>0)
            scheduleAt(simTime()+par("jitter")+etxInterval,etxTimer);
        if (ettInterval>0 && ettSize1>0 && ettSize2>0)
            scheduleAt(simTime()+par("jitter")+ettInterval,ettTimer);
    }
}


Ieee80211Etx::~Ieee80211Etx()
{
    while (!neighbors.empty())
    {
        delete neighbors.begin()->second;
        neighbors.erase(neighbors.begin());
    }
    cancelAndDelete(etxTimer);
    cancelAndDelete(ettTimer);
}

void Ieee80211Etx::handleMessage(cMessage *msg)
{
    if (msg->isSelfMessage())
    {
        // process timers
        EV << "Timer expired: " << msg << "\n";
        handleTimer(msg);
        return;
    }
    if (dynamic_cast<MACETXPacket *>(msg))
    {
        handleEtxMessage(dynamic_cast<MACETXPacket *>(msg));
    }
    else if (dynamic_cast<MACBwPacket *>(msg))
    {
        handleBwMessage(dynamic_cast<MACBwPacket *>(msg));
    }
}

void Ieee80211Etx::handleTimer(cMessage *msg)
{
    if (msg == etxTimer)
    {
        MACETXPacket *pkt = new MACETXPacket();
        pkt->setBitLength(etxSize);
        pkt->setSource(myAddress);
        pkt->setDest(MACAddress::BROADCAST_ADDRESS);
        for (NeighborsMap::iterator it= neighbors.begin(); it!= neighbors.end();)
        {
            if (simTime()-it->second->getTime()>maxLive)
            {
                NeighborsMap::iterator itAux = it;
                it++;
                delete itAux->second;
                neighbors.erase(itAux);
                continue;
            }
            it++;
        }
        pkt->setNeighborsArraySize(neighbors.size());
        pkt->setRecPacketsArraySize(neighbors.size());
        int i = 0;
        for (NeighborsMap::iterator it= neighbors.begin(); it!= neighbors.end(); it++)
        {
            pkt->setNeighbors(i,it->second->getAddress());
            pkt->setRecPackets(i,it->second->timeVector.size());
            i++;
        }
        send(pkt,"toMac");
        scheduleAt(simTime()+par("jitter")+etxInterval,etxTimer);
    }
    else if (msg == ettTimer)
    {
        for (NeighborsMap::iterator it= neighbors.begin(); it!= neighbors.end();)
        {
            if (simTime()-it->second->getTime()>maxLive)
            {
                NeighborsMap::iterator itAux = it;
                it++;
                neighbors.erase(itAux);
                continue;
            }
            MACBwPacket *pkt1 = new MACBwPacket();
            MACBwPacket *pkt2 = new MACBwPacket();
            pkt1->setSource(myAddress);
            pkt2->setSource(myAddress);
            pkt1->setBitLength(ettSize1);
            pkt2->setBitLength(ettSize2);
            pkt1->setDest(it->second->getAddress());
            pkt2->setDest(it->second->getAddress());
            it->second->setEttTime(simTime());
            pkt1->setType(0);
            pkt2->setType(0);
            double ranVal = uniform(0,0.1);
            sendDelayed(pkt1,ranVal,"toMac");
            sendDelayed(pkt2,ranVal,"toMac");
            it++;
        }
        scheduleAt(simTime()+par("jitter")+ettInterval,ettTimer);
    }
}

double Ieee80211Etx::getEtx(const MACAddress &add)
{
    NeighborsMap::iterator it = neighbors.find(add);
    MacEtxNeighbor *neig;
    if (it==neighbors.end())
    {
        return -1;
    }
    else
    {
        neig = it->second;
        int expectedPk = etxMeasureInterval/etxInterval;
        while (!neig->timeVector.empty() && (simTime()-neig->timeVector.front() >  etxMeasureInterval))
            neig->timeVector.erase(neig->timeVector.begin());
        int pkRec = neig->timeVector.size();
        double pr = pkRec/expectedPk;
        double ps = neig->getPackets()/expectedPk;
        if (pr>1) pr=1;
        if (ps>1) ps=1;
        if (ps ==0 || pr==0)
            return 1e100;
        return 1/(ps*pr);
    }
}

double Ieee80211Etx::getEtt(const MACAddress &add)
{
    if (ettInterval<=0 || ettSize1 <=0 || ettSize2<=0)
	    return -1;
    NeighborsMap::iterator it = neighbors.find(add);
    MacEtxNeighbor *neig;
    if (it==neighbors.end())
    {
        return -1;
    }
    else
    {
        neig = it->second;
        if (neig->timeETT.empty())
            return -1;
        int expectedPk = etxMeasureInterval/etxInterval;
        while (!neig->timeVector.empty() && (simTime()-neig->timeVector.front() >  etxMeasureInterval))
            neig->timeVector.erase(neig->timeVector.begin());
        int pkRec = neig->timeVector.size();
        double pr = pkRec/expectedPk;
        double ps = neig->getPackets()/expectedPk;
        if (pr>1) pr=1;
        if (ps>1) ps=1;
        if (ps ==0 || pr==0)
            return 1e100;
        double etx =  1/(ps*pr);
        simtime_t minTime = 100.0;
        for (unsigned int i =0; i<neig->timeETT.size(); i++)
            if (minTime>neig->timeETT[i])
                minTime=neig->timeETT[i];
        double bw= ettSize2/minTime;
        return etx*(etxSize/bw);
    }
}

double Ieee80211Etx::getPrec(const MACAddress &add)
{
    NeighborsMap::iterator it = neighbors.find(add);
    MacEtxNeighbor *neig;
    if (it==neighbors.end())
    {
        return 0;
    }
    else
    {
        neig = it->second;
        if (neig->signalToNoiseAndSignal.empty())
            return 0;

        double sum=0;
        std::vector<SNRDataTime>::iterator itNeig;

        for (itNeig = neig->signalToNoiseAndSignal.begin();itNeig!=neig->signalToNoiseAndSignal.end();)
        {
            if ((simTime()- itNeig->snrTime)>powerWindowTime)
            {
                std::vector<SNRDataTime>::iterator itAux =itNeig+1;
                neig->signalToNoiseAndSignal.erase(itNeig);
                itNeig = itAux;
                continue;
            }
            sum += itNeig->signalPower;
            itNeig++;
        }
        return sum/neig->signalToNoiseAndSignal.size();
    }
}

double Ieee80211Etx::getSignalToNoise(const MACAddress &add)
{
    NeighborsMap::iterator it = neighbors.find(add);
    MacEtxNeighbor *neig;
    if (it==neighbors.end())
    {
        return 0;
    }
    else
    {
        neig = it->second;
        if (neig->signalToNoiseAndSignal.empty())
            return 0;

        double sum=0;
        std::vector<SNRDataTime>::iterator itNeig;

        for (itNeig = neig->signalToNoiseAndSignal.begin();itNeig!=neig->signalToNoiseAndSignal.end();)
        {
            if ((simTime()- itNeig->snrTime)>powerWindowTime)
            {
                std::vector<SNRDataTime>::iterator itAux =itNeig+1;
                neig->signalToNoiseAndSignal.erase(itNeig);
                itNeig = itAux;
                continue;
            }
            sum += itNeig->snrData;
            itNeig++;
        }
        return sum/neig->signalToNoiseAndSignal.size();
    }
}

double Ieee80211Etx::getPacketErrorToNeigh(const MACAddress &add)
{
    NeighborsMap::iterator it = neighbors.find(add);
    MacEtxNeighbor *neig;
    if (it==neighbors.end())
    {
        return -1;
    }
    else
    {
        neig = it->second;
        int expectedPk = etxMeasureInterval/etxInterval;
        while (!neig->timeVector.empty() && (simTime()-neig->timeVector.front() >  etxMeasureInterval))
            neig->timeVector.erase(neig->timeVector.begin());
        double ps = neig->getPackets()/expectedPk;
        if (ps>1) ps=1;
        return 1-ps;
    }
}

double Ieee80211Etx::getPacketErrorFromNeigh(const MACAddress &add)
{
    NeighborsMap::iterator it = neighbors.find(add);
    MacEtxNeighbor *neig;
    if (it==neighbors.end())
    {
        return -1;
    }
    else
    {
        neig = it->second;
        int expectedPk = etxMeasureInterval/etxInterval;
        while (!neig->timeVector.empty() && (simTime()-neig->timeVector.front() >  etxMeasureInterval))
            neig->timeVector.erase(neig->timeVector.begin());
        int pkRec = neig->timeVector.size();
        double pr = pkRec/expectedPk;
        if (pr>1) pr=1;
        return 1-pr;
    }
}

void Ieee80211Etx::handleEtxMessage(MACETXPacket *msg)
{
    NeighborsMap::iterator it = neighbors.find(msg->getSource());
    MacEtxNeighbor *neig;
    if (it==neighbors.end())
    {
        neig = new MacEtxNeighbor;
        neig->setAddress(msg->getSource());
        neighbors[msg->getSource()]=neig;
    }
    else
        neig = it->second;
    while (!neig->timeVector.empty() && (simTime()-neig->timeVector.front() >  etxMeasureInterval))
        neig->timeVector.erase(neig->timeVector.begin());

    neig->timeVector.push_back(simTime());
    neig->setTime(simTime());
    neig->setPackets(0);
    neig->setNumFailures(0);
    for (unsigned int i = 0; i<msg->getNeighborsArraySize(); i++)
    {
        if (myAddress==msg->getNeighbors(i))
        {
            neig->setPackets(msg->getRecPackets(i));
            break;
        }
    }
    delete msg;
}

void Ieee80211Etx::handleBwMessage(MACBwPacket *msg)
{
    NeighborsMap::iterator it = neighbors.find(msg->getSource());
    MacEtxNeighbor *neig=NULL;
    if (it!=neighbors.end())
    {
        neig = it->second;
        neig->setNumFailures(0);
    }

    if (!msg->getType())
    {
        if (msg->getByteLength()==ettSize1)
        {
            prevAddress = msg->getSource();
            prevTime = simTime();
            delete msg;
        }
        else if (msg->getByteLength()==ettSize2)
        {
            if (prevAddress == msg->getSource())
            {
                msg->setTime(simTime()-prevTime);
                msg->setType(1);
                msg->setDest(msg->getSource());
                msg->setByteLength(ettSize1);
                msg->setSource(myAddress);
                send(msg,"toMac");
            }
            else
                prevAddress = MACAddress::UNSPECIFIED_ADDRESS;

        }
        return;
    }

    if (!neig)
    {
        neig = new MacEtxNeighbor;
        neig->setAddress(msg->getSource());
        neighbors[msg->getSource()]=neig;
    }

    if (msg->getByteLength()==ettSize1)
    {
        if (neig->timeETT.size()> (unsigned int)ettWindow)
            neig->timeETT.erase(neig->timeETT.begin());
        neig->timeETT.push_back(msg->getTime());
    }
}

void Ieee80211Etx::getNeighbors(std::vector<MACAddress> & add)
{
    Enter_Method_Silent();
    add.clear();
    for (NeighborsMap::iterator it = neighbors.begin();it != neighbors.end(); it++)
    {
        add.push_back(it->second->getAddress());
    }
    return;
}

void Ieee80211Etx::receiveChangeNotification(int category, const cPolymorphic *details)
{
    Enter_Method("Ieee80211Etx llf");
    if (details==NULL)
        return;
    Ieee80211TwoAddressFrame *frame  = dynamic_cast<Ieee80211TwoAddressFrame *>(const_cast<cPolymorphic*> (details));
    if (frame==NULL)
        return;
    MACAddress add = frame->getTransmitterAddress();
    if (category == NF_LINK_BREAK)
    {
        NeighborsMap::iterator it = neighbors.find(frame->getReceiverAddress());
        if (it!=neighbors.end())
        {
            it->second->setNumFailures(it->second->getNumFailures()+1);
            if (it->second->getNumFailures()>1)
            {
                delete it->second;
                neighbors.erase(it);
            }
        }
    }
    else if (category == NF_LINK_FULL_PROMISCUOUS)
    {
        NeighborsMap::iterator it = neighbors.find(frame->getTransmitterAddress());
        if (it!=neighbors.end())
            it->second->setNumFailures(0);
        if (!dynamic_cast<Ieee80211DataFrame *>(frame)) // we use only data frames
            return;
        if (powerWindow>0)
        {
            Radio80211aControlInfo * cinfo = dynamic_cast<Radio80211aControlInfo *> (frame->getControlInfo());
            if (cinfo)
            {
                if (it==neighbors.end())
                {
                    // insert new element
                    MacEtxNeighbor *neig = new MacEtxNeighbor;
                    neig->setAddress(frame->getTransmitterAddress());
                    neighbors.insert(std::pair<MACAddress, MacEtxNeighbor*>(frame->getTransmitterAddress(),neig));
                    it = neighbors.find(frame->getTransmitterAddress());
                }
                if (!it->second->signalToNoiseAndSignal.empty())
                {
                    while ((int)it->second->signalToNoiseAndSignal.size()>powerWindow-1)
                        it->second->signalToNoiseAndSignal.erase(it->second->signalToNoiseAndSignal.begin());
                    while (simTime() - it->second->signalToNoiseAndSignal.front().snrTime>powerWindowTime && !it->second->signalToNoiseAndSignal.empty())
                        it->second->signalToNoiseAndSignal.erase(it->second->signalToNoiseAndSignal.begin());
                }

                SNRDataTime snrDataTime;
                snrDataTime.signalPower=cinfo->getRecPow();
                snrDataTime.snrData = cinfo->getSnr();
                snrDataTime.snrTime = simTime();
                snrDataTime.testFrameDuration=cinfo->getTestFrameDuration();
                snrDataTime.testFrameError =cinfo->getTestFrameError();
                snrDataTime.airtimeMetric=cinfo->getAirtimeMetric();
                if (snrDataTime.airtimeMetric)
                	snrDataTime.airtimeValue = (uint32_t)ceil((snrDataTime.testFrameDuration/10.24e-6)/(1-snrDataTime.testFrameError));
                else
                	snrDataTime.airtimeValue = 0xFFFFFFF;
                it->second->signalToNoiseAndSignal.push_back(snrDataTime);
                if (snrDataTime.airtimeMetric)
                {
                	// found the best
                	uint32_t cost = 0xFFFFFFFF;
                	for (unsigned int i = 0; i < it->second->signalToNoiseAndSignal.size(); i++)
                	{
                		if (it->second->signalToNoiseAndSignal[i].airtimeMetric && cost > it->second->signalToNoiseAndSignal[i].airtimeValue)
                			cost = it->second->signalToNoiseAndSignal[i].airtimeValue;
                	}
                	it->second->setAirtimeMetric(cost);
                }
                else
                	it->second->setAirtimeMetric(0xFFFFFFF);
            }
        }
    }
}


uint32_t Ieee80211Etx::getAirtimeMetric(const MACAddress &addr)
{
    NeighborsMap::iterator it = neighbors.find(addr);
    if (it!=neighbors.end())
    {
        while (!it->second->signalToNoiseAndSignal.empty() && (simTime() - it->second->signalToNoiseAndSignal.front().snrTime > powerWindowTime))
            it->second->signalToNoiseAndSignal.erase(it->second->signalToNoiseAndSignal.begin());
        if (it->second->signalToNoiseAndSignal.empty() && (simTime()-it->second->getTime()>maxLive))
        {
            neighbors.erase(it);
            return 0xFFFFFFF;
        }
        else if (it->second->signalToNoiseAndSignal.empty())
             return 0xFFFFFFF;
        else
             return it->second->getAirtimeMetric();
    }
    else
        return 0xFFFFFFF;
}

void Ieee80211Etx::getAirtimeMetricNeighbors(std::vector<MACAddress> &addr,std::vector<uint32_t> &cost)
{
	addr.clear();
	cost.clear();
	for (NeighborsMap::iterator it =neighbors.begin();it!=neighbors.end();)
	{
        while (simTime() - it->second->signalToNoiseAndSignal.front().snrTime>powerWindowTime)
            it->second->signalToNoiseAndSignal.erase(it->second->signalToNoiseAndSignal.begin());
        if (it->second->signalToNoiseAndSignal.empty() && (simTime()-it->second->getTime()>maxLive))
        {
            NeighborsMap::iterator itAux = it;
            it++;
            neighbors.erase(itAux);
        }
        else if (it->second->signalToNoiseAndSignal.empty())
        {
            it++;
        }
        else if (it->second->signalToNoiseAndSignal.empty())
        {
            addr.push_back(it->first);
            cost.push_back(it->second->getAirtimeMetric());
            it++;
        }
	}
}
