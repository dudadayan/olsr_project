//
// Generated file, do not edit! Created by opp_msgc 4.3 from networklayer/ipv4/ControlManetRouting.msg.
//

#ifndef _CONTROLMANETROUTING_M_H_
#define _CONTROLMANETROUTING_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0403
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
#include "uint128.h"
// }}



/**
 * Enum generated from <tt>networklayer/ipv4/ControlManetRouting.msg</tt> by opp_msgc.
 * <pre>
 * enum ManetControlType
 * {
 * 
 *     MANET_ROUTE_NO_OPTION = 0;
 *     MANET_ROUTE_UPDATE = 1;
 *     MANET_ROUTE_NOROUTE = 2;
 * }
 * </pre>
 */
enum ManetControlType {
    MANET_ROUTE_NO_OPTION = 0,
    MANET_ROUTE_UPDATE = 1,
    MANET_ROUTE_NOROUTE = 2
};

/**
 * Class generated from <tt>networklayer/ipv4/ControlManetRouting.msg</tt> by opp_msgc.
 * <pre>
 * packet ControlManetRouting
 * {
 *     Uint128 srcAddress;
 *     Uint128 destAddress;
 *     int optionCode enum(ManetControlType) = MANET_ROUTE_NO_OPTION;
 * }
 * </pre>
 */
class ControlManetRouting : public ::cPacket
{
  protected:
    Uint128 srcAddress_var;
    Uint128 destAddress_var;
    int optionCode_var;

  private:
    void copy(const ControlManetRouting& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ControlManetRouting&);

  public:
    ControlManetRouting(const char *name=NULL, int kind=0);
    ControlManetRouting(const ControlManetRouting& other);
    virtual ~ControlManetRouting();
    ControlManetRouting& operator=(const ControlManetRouting& other);
    virtual ControlManetRouting *dup() const {return new ControlManetRouting(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual Uint128& getSrcAddress();
    virtual const Uint128& getSrcAddress() const {return const_cast<ControlManetRouting*>(this)->getSrcAddress();}
    virtual void setSrcAddress(const Uint128& srcAddress);
    virtual Uint128& getDestAddress();
    virtual const Uint128& getDestAddress() const {return const_cast<ControlManetRouting*>(this)->getDestAddress();}
    virtual void setDestAddress(const Uint128& destAddress);
    virtual int getOptionCode() const;
    virtual void setOptionCode(int optionCode);
};

inline void doPacking(cCommBuffer *b, ControlManetRouting& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ControlManetRouting& obj) {obj.parsimUnpack(b);}


#endif // _CONTROLMANETROUTING_M_H_
