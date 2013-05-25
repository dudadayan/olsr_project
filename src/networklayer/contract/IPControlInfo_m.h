//
// Generated file, do not edit! Created by opp_msgc 4.3 from networklayer/contract/IPControlInfo.msg.
//

#ifndef _IPCONTROLINFO_M_H_
#define _IPCONTROLINFO_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0403
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
#include "IPAddress.h"
#include "IPProtocolId_m.h"
#include "MACAddress.h"
// }}



/**
 * Class generated from <tt>networklayer/contract/IPControlInfo.msg</tt> by opp_msgc.
 * <pre>
 * class IPControlInfo
 * {
 *     @customize(true);
 *     IPAddress destAddr;   
 *     IPAddress srcAddr;    
 *     int interfaceId = -1; 
 *                           
 *     short protocol enum(IPProtocolId);  
 *     unsigned char diffServCodePoint;  
 *     short timeToLive;     
 *     bool dontFragment;    
 * 
 *     IPAddress nextHopAddr; 
 *     bool moreFragments;    
 *     MACAddress macSrc;  
 *     MACAddress macDest; 
 * 
 * }
 * </pre>
 *
 * IPControlInfo_Base is only useful if it gets subclassed, and IPControlInfo is derived from it.
 * The minimum code to be written for IPControlInfo is the following:
 *
 * <pre>
 * class IPControlInfo : public IPControlInfo_Base
 * {
 *   private:
 *     void copy(const IPControlInfo& other) { ... }

 *   public:
 *     IPControlInfo() : IPControlInfo_Base() {}
 *     IPControlInfo(const IPControlInfo& other) : IPControlInfo_Base(other) {copy(other);}
 *     IPControlInfo& operator=(const IPControlInfo& other) {if (this==&other) return *this; IPControlInfo_Base::operator=(other); copy(other); return *this;}
 *     virtual IPControlInfo *dup() const {return new IPControlInfo(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from IPControlInfo_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(IPControlInfo);
 * </pre>
 */
class IPControlInfo_Base : public ::cObject
{
  protected:
    IPAddress destAddr_var;
    IPAddress srcAddr_var;
    int interfaceId_var;
    short protocol_var;
    unsigned char diffServCodePoint_var;
    short timeToLive_var;
    bool dontFragment_var;
    IPAddress nextHopAddr_var;
    bool moreFragments_var;
    MACAddress macSrc_var;
    MACAddress macDest_var;

  private:
    void copy(const IPControlInfo_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPControlInfo_Base&);
    // make constructors protected to avoid instantiation
    IPControlInfo_Base();
    IPControlInfo_Base(const IPControlInfo_Base& other);
    // make assignment operator protected to force the user override it
    IPControlInfo_Base& operator=(const IPControlInfo_Base& other);

  public:
    virtual ~IPControlInfo_Base();
    virtual IPControlInfo_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class IPControlInfo");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPAddress& getDestAddr();
    virtual const IPAddress& getDestAddr() const {return const_cast<IPControlInfo_Base*>(this)->getDestAddr();}
    virtual void setDestAddr(const IPAddress& destAddr);
    virtual IPAddress& getSrcAddr();
    virtual const IPAddress& getSrcAddr() const {return const_cast<IPControlInfo_Base*>(this)->getSrcAddr();}
    virtual void setSrcAddr(const IPAddress& srcAddr);
    virtual int getInterfaceId() const;
    virtual void setInterfaceId(int interfaceId);
    virtual short getProtocol() const;
    virtual void setProtocol(short protocol);
    virtual unsigned char getDiffServCodePoint() const;
    virtual void setDiffServCodePoint(unsigned char diffServCodePoint);
    virtual short getTimeToLive() const;
    virtual void setTimeToLive(short timeToLive);
    virtual bool getDontFragment() const;
    virtual void setDontFragment(bool dontFragment);
    virtual IPAddress& getNextHopAddr();
    virtual const IPAddress& getNextHopAddr() const {return const_cast<IPControlInfo_Base*>(this)->getNextHopAddr();}
    virtual void setNextHopAddr(const IPAddress& nextHopAddr);
    virtual bool getMoreFragments() const;
    virtual void setMoreFragments(bool moreFragments);
    virtual MACAddress& getMacSrc();
    virtual const MACAddress& getMacSrc() const {return const_cast<IPControlInfo_Base*>(this)->getMacSrc();}
    virtual void setMacSrc(const MACAddress& macSrc);
    virtual MACAddress& getMacDest();
    virtual const MACAddress& getMacDest() const {return const_cast<IPControlInfo_Base*>(this)->getMacDest();}
    virtual void setMacDest(const MACAddress& macDest);
};

/**
 * Class generated from <tt>networklayer/contract/IPControlInfo.msg</tt> by opp_msgc.
 * <pre>
 * class IPRoutingDecision
 * {
 *     int interfaceId = -1; 
 *     IPAddress nextHopAddr;
 * }
 * </pre>
 */
class IPRoutingDecision : public ::cObject
{
  protected:
    int interfaceId_var;
    IPAddress nextHopAddr_var;

  private:
    void copy(const IPRoutingDecision& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPRoutingDecision&);

  public:
    IPRoutingDecision();
    IPRoutingDecision(const IPRoutingDecision& other);
    virtual ~IPRoutingDecision();
    IPRoutingDecision& operator=(const IPRoutingDecision& other);
    virtual IPRoutingDecision *dup() const {return new IPRoutingDecision(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getInterfaceId() const;
    virtual void setInterfaceId(int interfaceId);
    virtual IPAddress& getNextHopAddr();
    virtual const IPAddress& getNextHopAddr() const {return const_cast<IPRoutingDecision*>(this)->getNextHopAddr();}
    virtual void setNextHopAddr(const IPAddress& nextHopAddr);
};

inline void doPacking(cCommBuffer *b, IPRoutingDecision& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, IPRoutingDecision& obj) {obj.parsimUnpack(b);}


#endif // _IPCONTROLINFO_M_H_