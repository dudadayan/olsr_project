//
// Generated file, do not edit! Created by opp_msgc 4.3 from linklayer/ieee80211/mac/Ieee80211Frame.msg.
//

#ifndef _IEEE80211FRAME_M_H_
#define _IEEE80211FRAME_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0403
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
#include "MACAddress.h"
// }}



/**
 * Enum generated from <tt>linklayer/ieee80211/mac/Ieee80211Frame.msg</tt> by opp_msgc.
 * <pre>
 * enum Ieee80211FrameType
 * {
 * 
 *     
 *     ST_ASSOCIATIONREQUEST = 0x00;
 *     ST_ASSOCIATIONRESPONSE = 0x01;
 *     ST_REASSOCIATIONREQUEST = 0x02;
 *     ST_REASSOCIATIONRESPONSE = 0x03;
 *     ST_PROBEREQUEST = 0x04;
 *     ST_PROBERESPONSE = 0x05;
 *     ST_BEACON = 0x08;
 *     ST_ATIM = 0x09;
 *     ST_DISASSOCIATION = 0x0a;
 *     ST_AUTHENTICATION = 0x0b;
 *     ST_DEAUTHENTICATION = 0x0c;
 *     ST_ACTION = 0x0d;
 *     ST_NOACKACTION = 0x0e;
 * 
 *     
 *     ST_PSPOLL = 0x1a;
 *     ST_RTS = 0x1b;
 *     ST_CTS = 0x1c;
 *     ST_ACK = 0x1d;
 *     ST_BLOCKACK_REQ = 0x18;
 *     ST_BLOCKACK     = 0x19;
 * 
 *     
 *     ST_DATA = 0x20;
 *     
 *     ST_LBMS_REQUEST = 0x30;
 *     ST_LBMS_REPORT = 0x31;
 * }
 * </pre>
 */
enum Ieee80211FrameType {
    ST_ASSOCIATIONREQUEST = 0x00,
    ST_ASSOCIATIONRESPONSE = 0x01,
    ST_REASSOCIATIONREQUEST = 0x02,
    ST_REASSOCIATIONRESPONSE = 0x03,
    ST_PROBEREQUEST = 0x04,
    ST_PROBERESPONSE = 0x05,
    ST_BEACON = 0x08,
    ST_ATIM = 0x09,
    ST_DISASSOCIATION = 0x0a,
    ST_AUTHENTICATION = 0x0b,
    ST_DEAUTHENTICATION = 0x0c,
    ST_ACTION = 0x0d,
    ST_NOACKACTION = 0x0e,
    ST_PSPOLL = 0x1a,
    ST_RTS = 0x1b,
    ST_CTS = 0x1c,
    ST_ACK = 0x1d,
    ST_BLOCKACK_REQ = 0x18,
    ST_BLOCKACK = 0x19,
    ST_DATA = 0x20,
    ST_LBMS_REQUEST = 0x30,
    ST_LBMS_REPORT = 0x31
};

/**
 * Class generated from <tt>linklayer/ieee80211/mac/Ieee80211Frame.msg</tt> by opp_msgc.
 * <pre>
 * packet Ieee80211Frame
 * {
 *     byteLength = 14;
 *     short type enum(Ieee80211FrameType); 
 *     bool toDS;
 *     bool fromDS;
 *     bool retry;
 *     bool moreFragments;
 *     simtime_t duration = -1; 
 *     short AID = -1;          
 *     MACAddress receiverAddress; 
 *     simtime_t MACArrive;
 * }
 * </pre>
 */
class Ieee80211Frame : public ::cPacket
{
  protected:
    short type_var;
    bool toDS_var;
    bool fromDS_var;
    bool retry_var;
    bool moreFragments_var;
    simtime_t duration_var;
    short AID_var;
    MACAddress receiverAddress_var;
    simtime_t MACArrive_var;

  private:
    void copy(const Ieee80211Frame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211Frame&);

  public:
    Ieee80211Frame(const char *name=NULL, int kind=0);
    Ieee80211Frame(const Ieee80211Frame& other);
    virtual ~Ieee80211Frame();
    Ieee80211Frame& operator=(const Ieee80211Frame& other);
    virtual Ieee80211Frame *dup() const {return new Ieee80211Frame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual short getType() const;
    virtual void setType(short type);
    virtual bool getToDS() const;
    virtual void setToDS(bool toDS);
    virtual bool getFromDS() const;
    virtual void setFromDS(bool fromDS);
    virtual bool getRetry() const;
    virtual void setRetry(bool retry);
    virtual bool getMoreFragments() const;
    virtual void setMoreFragments(bool moreFragments);
    virtual simtime_t getDuration() const;
    virtual void setDuration(simtime_t duration);
    virtual short getAID() const;
    virtual void setAID(short AID);
    virtual MACAddress& getReceiverAddress();
    virtual const MACAddress& getReceiverAddress() const {return const_cast<Ieee80211Frame*>(this)->getReceiverAddress();}
    virtual void setReceiverAddress(const MACAddress& receiverAddress);
    virtual simtime_t getMACArrive() const;
    virtual void setMACArrive(simtime_t MACArrive);
};

inline void doPacking(cCommBuffer *b, Ieee80211Frame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211Frame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>linklayer/ieee80211/mac/Ieee80211Frame.msg</tt> by opp_msgc.
 * <pre>
 * packet Ieee80211OneAddressFrame extends Ieee80211Frame
 * {
 * }
 * </pre>
 */
class Ieee80211OneAddressFrame : public ::Ieee80211Frame
{
  protected:

  private:
    void copy(const Ieee80211OneAddressFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211OneAddressFrame&);

  public:
    Ieee80211OneAddressFrame(const char *name=NULL, int kind=0);
    Ieee80211OneAddressFrame(const Ieee80211OneAddressFrame& other);
    virtual ~Ieee80211OneAddressFrame();
    Ieee80211OneAddressFrame& operator=(const Ieee80211OneAddressFrame& other);
    virtual Ieee80211OneAddressFrame *dup() const {return new Ieee80211OneAddressFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, Ieee80211OneAddressFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211OneAddressFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>linklayer/ieee80211/mac/Ieee80211Frame.msg</tt> by opp_msgc.
 * <pre>
 * packet Ieee80211ACKFrame extends Ieee80211OneAddressFrame
 * {
 *     type = ST_ACK;
 * }
 * </pre>
 */
class Ieee80211ACKFrame : public ::Ieee80211OneAddressFrame
{
  protected:

  private:
    void copy(const Ieee80211ACKFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211ACKFrame&);

  public:
    Ieee80211ACKFrame(const char *name=NULL, int kind=0);
    Ieee80211ACKFrame(const Ieee80211ACKFrame& other);
    virtual ~Ieee80211ACKFrame();
    Ieee80211ACKFrame& operator=(const Ieee80211ACKFrame& other);
    virtual Ieee80211ACKFrame *dup() const {return new Ieee80211ACKFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, Ieee80211ACKFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211ACKFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>linklayer/ieee80211/mac/Ieee80211Frame.msg</tt> by opp_msgc.
 * <pre>
 * packet Ieee80211TwoAddressFrame extends Ieee80211OneAddressFrame
 * {
 *     byteLength = 20;
 *     MACAddress transmitterAddress; 
 * }
 * </pre>
 */
class Ieee80211TwoAddressFrame : public ::Ieee80211OneAddressFrame
{
  protected:
    MACAddress transmitterAddress_var;

  private:
    void copy(const Ieee80211TwoAddressFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211TwoAddressFrame&);

  public:
    Ieee80211TwoAddressFrame(const char *name=NULL, int kind=0);
    Ieee80211TwoAddressFrame(const Ieee80211TwoAddressFrame& other);
    virtual ~Ieee80211TwoAddressFrame();
    Ieee80211TwoAddressFrame& operator=(const Ieee80211TwoAddressFrame& other);
    virtual Ieee80211TwoAddressFrame *dup() const {return new Ieee80211TwoAddressFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual MACAddress& getTransmitterAddress();
    virtual const MACAddress& getTransmitterAddress() const {return const_cast<Ieee80211TwoAddressFrame*>(this)->getTransmitterAddress();}
    virtual void setTransmitterAddress(const MACAddress& transmitterAddress);
};

inline void doPacking(cCommBuffer *b, Ieee80211TwoAddressFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211TwoAddressFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>linklayer/ieee80211/mac/Ieee80211Frame.msg</tt> by opp_msgc.
 * <pre>
 * packet Ieee80211RTSFrame extends Ieee80211TwoAddressFrame
 * {
 *     type = ST_RTS;
 * }
 * </pre>
 */
class Ieee80211RTSFrame : public ::Ieee80211TwoAddressFrame
{
  protected:

  private:
    void copy(const Ieee80211RTSFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211RTSFrame&);

  public:
    Ieee80211RTSFrame(const char *name=NULL, int kind=0);
    Ieee80211RTSFrame(const Ieee80211RTSFrame& other);
    virtual ~Ieee80211RTSFrame();
    Ieee80211RTSFrame& operator=(const Ieee80211RTSFrame& other);
    virtual Ieee80211RTSFrame *dup() const {return new Ieee80211RTSFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, Ieee80211RTSFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211RTSFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>linklayer/ieee80211/mac/Ieee80211Frame.msg</tt> by opp_msgc.
 * <pre>
 * packet Ieee80211CTSFrame extends Ieee80211OneAddressFrame
 * {
 *     type = ST_CTS;
 * }
 * </pre>
 */
class Ieee80211CTSFrame : public ::Ieee80211OneAddressFrame
{
  protected:

  private:
    void copy(const Ieee80211CTSFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211CTSFrame&);

  public:
    Ieee80211CTSFrame(const char *name=NULL, int kind=0);
    Ieee80211CTSFrame(const Ieee80211CTSFrame& other);
    virtual ~Ieee80211CTSFrame();
    Ieee80211CTSFrame& operator=(const Ieee80211CTSFrame& other);
    virtual Ieee80211CTSFrame *dup() const {return new Ieee80211CTSFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, Ieee80211CTSFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211CTSFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>linklayer/ieee80211/mac/Ieee80211Frame.msg</tt> by opp_msgc.
 * <pre>
 * packet Ieee80211DataOrMgmtFrame extends Ieee80211TwoAddressFrame
 * {
 *     byteLength = 28;
 *     MACAddress address3;
 *     short fragmentNumber;
 *     short sequenceNumber;
 * }
 * </pre>
 */
class Ieee80211DataOrMgmtFrame : public ::Ieee80211TwoAddressFrame
{
  protected:
    MACAddress address3_var;
    short fragmentNumber_var;
    short sequenceNumber_var;

  private:
    void copy(const Ieee80211DataOrMgmtFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211DataOrMgmtFrame&);

  public:
    Ieee80211DataOrMgmtFrame(const char *name=NULL, int kind=0);
    Ieee80211DataOrMgmtFrame(const Ieee80211DataOrMgmtFrame& other);
    virtual ~Ieee80211DataOrMgmtFrame();
    Ieee80211DataOrMgmtFrame& operator=(const Ieee80211DataOrMgmtFrame& other);
    virtual Ieee80211DataOrMgmtFrame *dup() const {return new Ieee80211DataOrMgmtFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual MACAddress& getAddress3();
    virtual const MACAddress& getAddress3() const {return const_cast<Ieee80211DataOrMgmtFrame*>(this)->getAddress3();}
    virtual void setAddress3(const MACAddress& address3);
    virtual short getFragmentNumber() const;
    virtual void setFragmentNumber(short fragmentNumber);
    virtual short getSequenceNumber() const;
    virtual void setSequenceNumber(short sequenceNumber);
};

inline void doPacking(cCommBuffer *b, Ieee80211DataOrMgmtFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211DataOrMgmtFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>linklayer/ieee80211/mac/Ieee80211Frame.msg</tt> by opp_msgc.
 * <pre>
 * packet Ieee80211DataFrame extends Ieee80211DataOrMgmtFrame
 * {
 *     type = ST_DATA;
 *     byteLength = 34;
 *     MACAddress address4;
 * }
 * </pre>
 */
class Ieee80211DataFrame : public ::Ieee80211DataOrMgmtFrame
{
  protected:
    MACAddress address4_var;

  private:
    void copy(const Ieee80211DataFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211DataFrame&);

  public:
    Ieee80211DataFrame(const char *name=NULL, int kind=0);
    Ieee80211DataFrame(const Ieee80211DataFrame& other);
    virtual ~Ieee80211DataFrame();
    Ieee80211DataFrame& operator=(const Ieee80211DataFrame& other);
    virtual Ieee80211DataFrame *dup() const {return new Ieee80211DataFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual MACAddress& getAddress4();
    virtual const MACAddress& getAddress4() const {return const_cast<Ieee80211DataFrame*>(this)->getAddress4();}
    virtual void setAddress4(const MACAddress& address4);
};

inline void doPacking(cCommBuffer *b, Ieee80211DataFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211DataFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>linklayer/ieee80211/mac/Ieee80211Frame.msg</tt> by opp_msgc.
 * <pre>
 * packet Ieee80211ManagementFrame extends Ieee80211DataOrMgmtFrame
 * {
 *     short Category;
 *     
 * }
 * </pre>
 */
class Ieee80211ManagementFrame : public ::Ieee80211DataOrMgmtFrame
{
  protected:
    short Category_var;

  private:
    void copy(const Ieee80211ManagementFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211ManagementFrame&);

  public:
    Ieee80211ManagementFrame(const char *name=NULL, int kind=0);
    Ieee80211ManagementFrame(const Ieee80211ManagementFrame& other);
    virtual ~Ieee80211ManagementFrame();
    Ieee80211ManagementFrame& operator=(const Ieee80211ManagementFrame& other);
    virtual Ieee80211ManagementFrame *dup() const {return new Ieee80211ManagementFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual short getCategory() const;
    virtual void setCategory(short Category);
};

inline void doPacking(cCommBuffer *b, Ieee80211ManagementFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211ManagementFrame& obj) {obj.parsimUnpack(b);}

/**
 * Struct generated from linklayer/ieee80211/mac/Ieee80211Frame.msg by opp_msgc.
 */
struct LBMSRequestElement
{
    LBMSRequestElement();
    MACAddress multicastAddress;
    bool MulticastACKPolicy;
    short RetryLimit;
};

void doPacking(cCommBuffer *b, LBMSRequestElement& a);
void doUnpacking(cCommBuffer *b, LBMSRequestElement& a);

/**
 * Class generated from <tt>linklayer/ieee80211/mac/Ieee80211Frame.msg</tt> by opp_msgc.
 * <pre>
 * packet Ieee80211LBMSRequest extends Ieee80211DataOrMgmtFrame
 * {
 * 
 *         type = ST_LBMS_REQUEST;
 *         LBMSRequestElement element;
 * }
 * </pre>
 */
class Ieee80211LBMSRequest : public ::Ieee80211DataOrMgmtFrame
{
  protected:
    LBMSRequestElement element_var;

  private:
    void copy(const Ieee80211LBMSRequest& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211LBMSRequest&);

  public:
    Ieee80211LBMSRequest(const char *name=NULL, int kind=0);
    Ieee80211LBMSRequest(const Ieee80211LBMSRequest& other);
    virtual ~Ieee80211LBMSRequest();
    Ieee80211LBMSRequest& operator=(const Ieee80211LBMSRequest& other);
    virtual Ieee80211LBMSRequest *dup() const {return new Ieee80211LBMSRequest(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual LBMSRequestElement& getElement();
    virtual const LBMSRequestElement& getElement() const {return const_cast<Ieee80211LBMSRequest*>(this)->getElement();}
    virtual void setElement(const LBMSRequestElement& element);
};

inline void doPacking(cCommBuffer *b, Ieee80211LBMSRequest& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211LBMSRequest& obj) {obj.parsimUnpack(b);}

/**
 * Struct generated from linklayer/ieee80211/mac/Ieee80211Frame.msg by opp_msgc.
 */
struct LBMSReportElement
{
    LBMSReportElement();
    MACAddress multicastGroupAddress;
    bool leader;
};

void doPacking(cCommBuffer *b, LBMSReportElement& a);
void doUnpacking(cCommBuffer *b, LBMSReportElement& a);

/**
 * Class generated from <tt>linklayer/ieee80211/mac/Ieee80211Frame.msg</tt> by opp_msgc.
 * <pre>
 * packet Ieee80211LBMSReport extends Ieee80211DataOrMgmtFrame
 * {
 * 
 *         type = ST_LBMS_REPORT;
 *         LBMSReportElement element[];
 *         double packetLoss;
 *         double snr;
 * }
 * </pre>
 */
class Ieee80211LBMSReport : public ::Ieee80211DataOrMgmtFrame
{
  protected:
    LBMSReportElement *element_var; // array ptr
    unsigned int element_arraysize;
    double packetLoss_var;
    double snr_var;

  private:
    void copy(const Ieee80211LBMSReport& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211LBMSReport&);

  public:
    Ieee80211LBMSReport(const char *name=NULL, int kind=0);
    Ieee80211LBMSReport(const Ieee80211LBMSReport& other);
    virtual ~Ieee80211LBMSReport();
    Ieee80211LBMSReport& operator=(const Ieee80211LBMSReport& other);
    virtual Ieee80211LBMSReport *dup() const {return new Ieee80211LBMSReport(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual void setElementArraySize(unsigned int size);
    virtual unsigned int getElementArraySize() const;
    virtual LBMSReportElement& getElement(unsigned int k);
    virtual const LBMSReportElement& getElement(unsigned int k) const {return const_cast<Ieee80211LBMSReport*>(this)->getElement(k);}
    virtual void setElement(unsigned int k, const LBMSReportElement& element);
    virtual double getPacketLoss() const;
    virtual void setPacketLoss(double packetLoss);
    virtual double getSnr() const;
    virtual void setSnr(double snr);
};

inline void doPacking(cCommBuffer *b, Ieee80211LBMSReport& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211LBMSReport& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>linklayer/ieee80211/mac/Ieee80211Frame.msg</tt> by opp_msgc.
 * <pre>
 * packet Ieee80211MeshFrame extends Ieee80211DataFrame
 * {
 *     type = ST_DATA;
 *     byteLength = 38;
 *     short TTL = 15; 
 *     long seqNumber;
 *     MACAddress finalAddress; 
 *                              
 *                              
 *     
 *     bool isFragment=false;
 *     unsigned long realLength=0;
 *       
 * }
 * </pre>
 */
class Ieee80211MeshFrame : public ::Ieee80211DataFrame
{
  protected:
    short TTL_var;
    long seqNumber_var;
    MACAddress finalAddress_var;
    bool isFragment_var;
    unsigned long realLength_var;

  private:
    void copy(const Ieee80211MeshFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211MeshFrame&);

  public:
    Ieee80211MeshFrame(const char *name=NULL, int kind=0);
    Ieee80211MeshFrame(const Ieee80211MeshFrame& other);
    virtual ~Ieee80211MeshFrame();
    Ieee80211MeshFrame& operator=(const Ieee80211MeshFrame& other);
    virtual Ieee80211MeshFrame *dup() const {return new Ieee80211MeshFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual short getTTL() const;
    virtual void setTTL(short TTL);
    virtual long getSeqNumber() const;
    virtual void setSeqNumber(long seqNumber);
    virtual MACAddress& getFinalAddress();
    virtual const MACAddress& getFinalAddress() const {return const_cast<Ieee80211MeshFrame*>(this)->getFinalAddress();}
    virtual void setFinalAddress(const MACAddress& finalAddress);
    virtual bool getIsFragment() const;
    virtual void setIsFragment(bool isFragment);
    virtual unsigned long getRealLength() const;
    virtual void setRealLength(unsigned long realLength);
};

inline void doPacking(cCommBuffer *b, Ieee80211MeshFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211MeshFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>linklayer/ieee80211/mac/Ieee80211Frame.msg</tt> by opp_msgc.
 * <pre>
 * packet Ieee80211BlockAckFrameReq extends Ieee80211TwoAddressFrame
 * {
 *     @customize(true);
 *     type = ST_BLOCKACK_REQ;
 *     byteLength = 24;
 *     bool barAckPolicy;
 *     bool multiTid;
 *     bool compressed;
 *     unsigned short tidInfo; 
 *     unsigned short fragNumber=0;
 *     unsigned short startingSequence;
 * }
 * </pre>
 *
 * Ieee80211BlockAckFrameReq_Base is only useful if it gets subclassed, and Ieee80211BlockAckFrameReq is derived from it.
 * The minimum code to be written for Ieee80211BlockAckFrameReq is the following:
 *
 * <pre>
 * class Ieee80211BlockAckFrameReq : public Ieee80211BlockAckFrameReq_Base
 * {
 *   private:
 *     void copy(const Ieee80211BlockAckFrameReq& other) { ... }

 *   public:
 *     Ieee80211BlockAckFrameReq(const char *name=NULL, int kind=0) : Ieee80211BlockAckFrameReq_Base(name,kind) {}
 *     Ieee80211BlockAckFrameReq(const Ieee80211BlockAckFrameReq& other) : Ieee80211BlockAckFrameReq_Base(other) {copy(other);}
 *     Ieee80211BlockAckFrameReq& operator=(const Ieee80211BlockAckFrameReq& other) {if (this==&other) return *this; Ieee80211BlockAckFrameReq_Base::operator=(other); copy(other); return *this;}
 *     virtual Ieee80211BlockAckFrameReq *dup() const {return new Ieee80211BlockAckFrameReq(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from Ieee80211BlockAckFrameReq_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(Ieee80211BlockAckFrameReq);
 * </pre>
 */
class Ieee80211BlockAckFrameReq_Base : public ::Ieee80211TwoAddressFrame
{
  protected:
    bool barAckPolicy_var;
    bool multiTid_var;
    bool compressed_var;
    unsigned short tidInfo_var;
    unsigned short fragNumber_var;
    unsigned short startingSequence_var;

  private:
    void copy(const Ieee80211BlockAckFrameReq_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211BlockAckFrameReq_Base&);
    // make constructors protected to avoid instantiation
    Ieee80211BlockAckFrameReq_Base(const char *name=NULL, int kind=0);
    Ieee80211BlockAckFrameReq_Base(const Ieee80211BlockAckFrameReq_Base& other);
    // make assignment operator protected to force the user override it
    Ieee80211BlockAckFrameReq_Base& operator=(const Ieee80211BlockAckFrameReq_Base& other);

  public:
    virtual ~Ieee80211BlockAckFrameReq_Base();
    virtual Ieee80211BlockAckFrameReq_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class Ieee80211BlockAckFrameReq");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual bool getBarAckPolicy() const;
    virtual void setBarAckPolicy(bool barAckPolicy);
    virtual bool getMultiTid() const;
    virtual void setMultiTid(bool multiTid);
    virtual bool getCompressed() const;
    virtual void setCompressed(bool compressed);
    virtual unsigned short getTidInfo() const;
    virtual void setTidInfo(unsigned short tidInfo);
    virtual unsigned short getFragNumber() const;
    virtual void setFragNumber(unsigned short fragNumber);
    virtual unsigned short getStartingSequence() const;
    virtual void setStartingSequence(unsigned short startingSequence);
};

/**
 * Class generated from <tt>linklayer/ieee80211/mac/Ieee80211Frame.msg</tt> by opp_msgc.
 * <pre>
 * packet Ieee80211BlockAckFrame extends Ieee80211TwoAddressFrame
 * {
 *     @customize(true);
 *     type = ST_BLOCKACK;
 *     byteLength = 152;
 *     bool baAckPolicy;
 *     bool multiTid;
 *     bool compressed;
 *     unsigned short tidInfo;
 *     unsigned short startingSequence;
 * }
 * </pre>
 *
 * Ieee80211BlockAckFrame_Base is only useful if it gets subclassed, and Ieee80211BlockAckFrame is derived from it.
 * The minimum code to be written for Ieee80211BlockAckFrame is the following:
 *
 * <pre>
 * class Ieee80211BlockAckFrame : public Ieee80211BlockAckFrame_Base
 * {
 *   private:
 *     void copy(const Ieee80211BlockAckFrame& other) { ... }

 *   public:
 *     Ieee80211BlockAckFrame(const char *name=NULL, int kind=0) : Ieee80211BlockAckFrame_Base(name,kind) {}
 *     Ieee80211BlockAckFrame(const Ieee80211BlockAckFrame& other) : Ieee80211BlockAckFrame_Base(other) {copy(other);}
 *     Ieee80211BlockAckFrame& operator=(const Ieee80211BlockAckFrame& other) {if (this==&other) return *this; Ieee80211BlockAckFrame_Base::operator=(other); copy(other); return *this;}
 *     virtual Ieee80211BlockAckFrame *dup() const {return new Ieee80211BlockAckFrame(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from Ieee80211BlockAckFrame_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(Ieee80211BlockAckFrame);
 * </pre>
 */
class Ieee80211BlockAckFrame_Base : public ::Ieee80211TwoAddressFrame
{
  protected:
    bool baAckPolicy_var;
    bool multiTid_var;
    bool compressed_var;
    unsigned short tidInfo_var;
    unsigned short startingSequence_var;

  private:
    void copy(const Ieee80211BlockAckFrame_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211BlockAckFrame_Base&);
    // make constructors protected to avoid instantiation
    Ieee80211BlockAckFrame_Base(const char *name=NULL, int kind=0);
    Ieee80211BlockAckFrame_Base(const Ieee80211BlockAckFrame_Base& other);
    // make assignment operator protected to force the user override it
    Ieee80211BlockAckFrame_Base& operator=(const Ieee80211BlockAckFrame_Base& other);

  public:
    virtual ~Ieee80211BlockAckFrame_Base();
    virtual Ieee80211BlockAckFrame_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class Ieee80211BlockAckFrame");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual bool getBaAckPolicy() const;
    virtual void setBaAckPolicy(bool baAckPolicy);
    virtual bool getMultiTid() const;
    virtual void setMultiTid(bool multiTid);
    virtual bool getCompressed() const;
    virtual void setCompressed(bool compressed);
    virtual unsigned short getTidInfo() const;
    virtual void setTidInfo(unsigned short tidInfo);
    virtual unsigned short getStartingSequence() const;
    virtual void setStartingSequence(unsigned short startingSequence);
};


#endif // _IEEE80211FRAME_M_H_
