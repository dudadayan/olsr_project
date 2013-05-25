//
// Generated file, do not edit! Created by opp_msgc 4.3 from networklayer/manetrouting/dsdv/DSDVhello.msg.
//

#ifndef _DSDVHELLO_M_H_
#define _DSDVHELLO_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0403
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
/*
 * Copyright (C) 2008 
 * DSDV simple example for INET (add-on)
 * Version 1.0
 * Diogo Ant�o & Pedro Menezes
 * Instituto Superior T�cnico
 * Lisboa - Portugal
 * This version and newer version can be found at http:
 * This code was written while assisting the course "Redes m�veis e sem fios" http:
 * Autorization to use and modify this code not needed :P
 * The authors hope it will be useful to help understand how
 * INET and OMNET++ works(more specifically INET 20061020 and omnet++ 3.3).
 * Also we hope it will help in the developing of routing protocols using INET.
*/
#include "IPAddress.h"
// }}



/**
 * Class generated from <tt>networklayer/manetrouting/dsdv/DSDVhello.msg</tt> by opp_msgc.
 * <pre>
 * packet DSDV_HelloMessage
 * {
 *     IPAddress srcIPAddress; 
 *     unsigned int sequencenumber;
 *     IPAddress nextIPAddress; 
 *     int hopdistance; 
 * }
 * </pre>
 */
class DSDV_HelloMessage : public ::cPacket
{
  protected:
    IPAddress srcIPAddress_var;
    unsigned int sequencenumber_var;
    IPAddress nextIPAddress_var;
    int hopdistance_var;

  private:
    void copy(const DSDV_HelloMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const DSDV_HelloMessage&);

  public:
    DSDV_HelloMessage(const char *name=NULL, int kind=0);
    DSDV_HelloMessage(const DSDV_HelloMessage& other);
    virtual ~DSDV_HelloMessage();
    DSDV_HelloMessage& operator=(const DSDV_HelloMessage& other);
    virtual DSDV_HelloMessage *dup() const {return new DSDV_HelloMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPAddress& getSrcIPAddress();
    virtual const IPAddress& getSrcIPAddress() const {return const_cast<DSDV_HelloMessage*>(this)->getSrcIPAddress();}
    virtual void setSrcIPAddress(const IPAddress& srcIPAddress);
    virtual unsigned int getSequencenumber() const;
    virtual void setSequencenumber(unsigned int sequencenumber);
    virtual IPAddress& getNextIPAddress();
    virtual const IPAddress& getNextIPAddress() const {return const_cast<DSDV_HelloMessage*>(this)->getNextIPAddress();}
    virtual void setNextIPAddress(const IPAddress& nextIPAddress);
    virtual int getHopdistance() const;
    virtual void setHopdistance(int hopdistance);
};

inline void doPacking(cCommBuffer *b, DSDV_HelloMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, DSDV_HelloMessage& obj) {obj.parsimUnpack(b);}


#endif // _DSDVHELLO_M_H_
