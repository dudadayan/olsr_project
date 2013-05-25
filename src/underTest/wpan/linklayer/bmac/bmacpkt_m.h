//
// Generated file, do not edit! Created by opp_msgc 4.3 from underTest/wpan/linklayer/bmac/bmacpkt.msg.
//

#ifndef _BMACPKT_M_H_
#define _BMACPKT_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0403
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif



/**
 * Class generated from <tt>underTest/wpan/linklayer/bmac/bmacpkt.msg</tt> by opp_msgc.
 * <pre>
 * packet BmacPkt {
 *     int packetType;   
 *     uint64_t destAddr; 
 *     uint64_t srcAddr;  
 *     
 *     long sequenceId; 
 * }
 * </pre>
 */
class BmacPkt : public ::cPacket
{
  protected:
    int packetType_var;
    uint64_t destAddr_var;
    uint64_t srcAddr_var;
    long sequenceId_var;

  private:
    void copy(const BmacPkt& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const BmacPkt&);

  public:
    BmacPkt(const char *name=NULL, int kind=0);
    BmacPkt(const BmacPkt& other);
    virtual ~BmacPkt();
    BmacPkt& operator=(const BmacPkt& other);
    virtual BmacPkt *dup() const {return new BmacPkt(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getPacketType() const;
    virtual void setPacketType(int packetType);
    virtual uint64_t getDestAddr() const;
    virtual void setDestAddr(uint64_t destAddr);
    virtual uint64_t getSrcAddr() const;
    virtual void setSrcAddr(uint64_t srcAddr);
    virtual long getSequenceId() const;
    virtual void setSequenceId(long sequenceId);
};

inline void doPacking(cCommBuffer *b, BmacPkt& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, BmacPkt& obj) {obj.parsimUnpack(b);}


#endif // _BMACPKT_M_H_