//
// Copyright (C) 2001-2006  Sergio Andreozzi
// Copyright (C) 2009 A. Ariza Universidad de M�laga
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

/***************************************************************************

 ***************************************************************************/


#ifndef __INET_WEIGHTED_FAIR_QUEUE_H
#define __INET_WEIGHTED_FAIR_QUEUE_H
#include <omnetpp.h>
#include <vector>
#include <queue>
#include "PassiveQueueBase.h"
#include "IQoSClassifier.h"


class INET_API WeightedFairQueue : public PassiveQueueBase
{
  protected:
    class SubQueueData
    {
      public:
        double finish_t;// for WFQ
        double queueMaxRate;
        double queueWeight;
        unsigned int B;            // set of active queues in the GPS reference system
        // B[]!=0 queue is active, ==0 queue is inactive

        std::queue <double> time;

        double wq;    // queue weight
        double minth; // minimum threshold for avg queue length
        double maxth; // maximum threshold for avg queue length
        double maxp;  // maximum value for pb
        double pkrate; // number of packets expected to arrive per second (used for f())

        // state (see NED file and paper for meaning of RED variables)
        double avg;       // average queue size
        simtime_t q_time; // start of the queue idle time
        int count;        // packets since last marked packet
        int numEarlyDrops;

        SubQueueData()
        {
            finish_t=0;
            queueMaxRate=0;
            queueWeight=0;
            B=0;
            avg =0;
            q_time=0; // start of the queue idle time
            count=0;        // packets since last marked packet
            numEarlyDrops=0;
        }

    };

  protected:
    int frameCapacity;
    std::vector<SubQueueData> subqueueData;
    std::vector <cQueue>      queueArray;
    int numQueues;
    IQoSClassifier *classifier;
    cGate *outGate;
    bool useRed;

//  cSubQueue *diffserv_queue;
    double bandwidth; // total link bandwidth
    double  virt_time, last_vt_update, sum ;
    bool GPS_idle;
    double safe_limit;

    bool RedTest(cMessage *msg,int queueIndex);

  public:
    WeightedFairQueue ()
    {
        bandwidth=1e6;
        virt_time = last_vt_update = sum = 0;
        GPS_idle = true;
        numQueues=0;
        safe_limit = 0.001;
    }
    // Omnet methods
    ~WeightedFairQueue()
    {
        {
            subqueueData.clear();
            for (int i=0; i<numQueues; i++)
            {
                while (queueArray[i].length()>0)
                {
                    delete queueArray[i].pop();
                }
            }
            queueArray.clear();
        }
    }

    virtual void setBandwidth(double val)
    {
        bandwidth = val;

    }
    virtual double getBandwidth()
    {
        return bandwidth;
    }

    virtual void setQueueWeight(int i, double val)
    {
        if (i>=numQueues)
            opp_error ("nun queue error");
        subqueueData[i].queueWeight=val;


    }
    virtual double getQueueWeight(int i)
    {
        if (i>=numQueues)
            opp_error ("nun queue error");
        return subqueueData[i].queueWeight;

    }
  protected:
    virtual void initialize();
    /**
     * Redefined from PassiveQueueBase.
     */
    virtual bool enqueue(cMessage *msg);

    /**
     * Redefined from PassiveQueueBase.
     */
    virtual cMessage *dequeue();

    /**
     * Redefined from PassiveQueueBase.
     */
    virtual void sendOut(cMessage *msg);
};
#endif

