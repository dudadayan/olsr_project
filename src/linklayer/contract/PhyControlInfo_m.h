//
// Generated file, do not edit! Created by opp_msgc 4.3 from linklayer/contract/PhyControlInfo.msg.
//

#ifndef _PHYCONTROLINFO_M_H_
#define _PHYCONTROLINFO_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0403
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
#include "INETDefs.h"
// }}



/**
 * Enum generated from <tt>linklayer/contract/PhyControlInfo.msg</tt> by opp_msgc.
 * <pre>
 * enum PhyCommandCode
 * {
 * 
 *     PHY_C_CONFIGURERADIO = 1;
 *     PHY_C_CHANGETRANSMITTERPOWER = 2;
 * }
 * </pre>
 */
enum PhyCommandCode {
    PHY_C_CONFIGURERADIO = 1,
    PHY_C_CHANGETRANSMITTERPOWER = 2
};

/**
 * Class generated from <tt>linklayer/contract/PhyControlInfo.msg</tt> by opp_msgc.
 * <pre>
 * class PhyControlInfo
 * {
 *     int channelNumber = -1; 
 *     double bitrate = -1; 
 *     bool  adativeSensitivity=false;
 *     double transmitterPower=-1; 
 * }
 * </pre>
 */
class PhyControlInfo : public ::cObject
{
  protected:
    int channelNumber_var;
    double bitrate_var;
    bool adativeSensitivity_var;
    double transmitterPower_var;

  private:
    void copy(const PhyControlInfo& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const PhyControlInfo&);

  public:
    PhyControlInfo();
    PhyControlInfo(const PhyControlInfo& other);
    virtual ~PhyControlInfo();
    PhyControlInfo& operator=(const PhyControlInfo& other);
    virtual PhyControlInfo *dup() const {return new PhyControlInfo(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getChannelNumber() const;
    virtual void setChannelNumber(int channelNumber);
    virtual double getBitrate() const;
    virtual void setBitrate(double bitrate);
    virtual bool getAdativeSensitivity() const;
    virtual void setAdativeSensitivity(bool adativeSensitivity);
    virtual double getTransmitterPower() const;
    virtual void setTransmitterPower(double transmitterPower);
};

inline void doPacking(cCommBuffer *b, PhyControlInfo& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, PhyControlInfo& obj) {obj.parsimUnpack(b);}


#endif // _PHYCONTROLINFO_M_H_
