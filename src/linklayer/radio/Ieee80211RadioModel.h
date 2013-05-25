//
// Copyright (C) 2006 Andras Varga, Levente Meszaros
// Based on the Mobility Framework's SnrEval by Marc Loebbers
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//

#ifndef IEEE80211RADIOMODEL_H
#define IEEE80211RADIOMODEL_H

#include "IRadioModel.h"
#include "BerParseFile.h"
/**
 * Radio model for IEEE 802.11. The implementation is largely based on the
 * Mobility Framework's SnrEval80211 and Decider80211 modules.
 * See the NED file for more info.
 */
class INET_API Ieee80211RadioModel : public IRadioModel
{
  protected:
    double snirThreshold;
    BerParseFile *parseTable;

  public:
    virtual void initializeFrom(cModule *radioModule);

    virtual double calculateDuration(AirFrame *airframe);

    virtual bool isReceivedCorrectly(AirFrame *airframe, const SnrList& receivedList);
    ~Ieee80211RadioModel()
    {
        if (parseTable)
            delete parseTable;
    }
    // used by the Airtime Link Metric computation
    virtual bool haveTestFrame() {return false;}
    virtual double calculateDurationTestFrame(AirFrame *airframe) {return 0;}
    virtual double getTestFrameError(double snirMin, double bitrate) {return 0;}
    virtual int    getTestFrameSize() {return 0;}

  protected:
    // utility
    virtual bool isPacketOK(double snirMin, int lengthMPDU, double bitrate);
    // utility
    virtual double dB2fraction(double dB);
};

#endif

