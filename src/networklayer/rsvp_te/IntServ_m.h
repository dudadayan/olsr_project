//
// Generated file, do not edit! Created by opp_msgc 4.3 from networklayer/rsvp_te/IntServ.msg.
//

#ifndef _INTSERV_M_H_
#define _INTSERV_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0403
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
#include "IPAddress.h"
typedef std::vector<IPAddress> IPAddressVector;
typedef std::vector<struct EroObj_t> EroVector;
typedef std::vector<struct FlowDescriptor_t> FlowDescriptorVector;
// }}



/**
 * Struct generated from networklayer/rsvp_te/IntServ.msg by opp_msgc.
 */
struct SessionObj_t
{
    SessionObj_t();
    int Tunnel_Id;
    int Extended_Tunnel_Id;
    IPAddress DestAddress;
    int setupPri;
    int holdingPri;
};

void doPacking(cCommBuffer *b, SessionObj_t& a);
void doUnpacking(cCommBuffer *b, SessionObj_t& a);

/**
 * Struct generated from networklayer/rsvp_te/IntServ.msg by opp_msgc.
 */
struct RsvpHopObj_t
{
    RsvpHopObj_t();
    IPAddress Next_Hop_Address;
    IPAddress Logical_Interface_Handle;
};

void doPacking(cCommBuffer *b, RsvpHopObj_t& a);
void doUnpacking(cCommBuffer *b, RsvpHopObj_t& a);

/**
 * Struct generated from networklayer/rsvp_te/IntServ.msg by opp_msgc.
 */
struct SenderTemplateObj_t
{
    SenderTemplateObj_t();
    IPAddress SrcAddress;
    int Lsp_Id;
};

void doPacking(cCommBuffer *b, SenderTemplateObj_t& a);
void doUnpacking(cCommBuffer *b, SenderTemplateObj_t& a);

/**
 * Struct generated from networklayer/rsvp_te/IntServ.msg by opp_msgc.
 */
struct SenderTspecObj_t
{
    SenderTspecObj_t();
    double req_bandwidth;
};

void doPacking(cCommBuffer *b, SenderTspecObj_t& a);
void doUnpacking(cCommBuffer *b, SenderTspecObj_t& a);

/**
 * Struct generated from networklayer/rsvp_te/IntServ.msg by opp_msgc.
 */
struct FlowSpecObj_t : public SenderTspecObj_t
{
    FlowSpecObj_t();
};

void doPacking(cCommBuffer *b, FlowSpecObj_t& a);
void doUnpacking(cCommBuffer *b, FlowSpecObj_t& a);

/**
 * Struct generated from networklayer/rsvp_te/IntServ.msg by opp_msgc.
 */
struct FilterSpecObj_t : public SenderTemplateObj_t
{
    FilterSpecObj_t();
};

void doPacking(cCommBuffer *b, FilterSpecObj_t& a);
void doUnpacking(cCommBuffer *b, FilterSpecObj_t& a);

/**
 * Struct generated from networklayer/rsvp_te/IntServ.msg by opp_msgc.
 */
struct LabelRequestObj_t
{
    LabelRequestObj_t();
    int prot;
};

void doPacking(cCommBuffer *b, LabelRequestObj_t& a);
void doUnpacking(cCommBuffer *b, LabelRequestObj_t& a);

/**
 * Struct generated from networklayer/rsvp_te/IntServ.msg by opp_msgc.
 */
struct SenderDescriptor_t
{
    SenderDescriptor_t();
    SenderTemplateObj_t Sender_Template_Object;
    SenderTspecObj_t Sender_Tspec_Object;
};

void doPacking(cCommBuffer *b, SenderDescriptor_t& a);
void doUnpacking(cCommBuffer *b, SenderDescriptor_t& a);

/**
 * Struct generated from networklayer/rsvp_te/IntServ.msg by opp_msgc.
 */
struct EroObj_t
{
    EroObj_t();
    bool L;
    IPAddress node;
};

void doPacking(cCommBuffer *b, EroObj_t& a);
void doUnpacking(cCommBuffer *b, EroObj_t& a);

/**
 * Struct generated from networklayer/rsvp_te/IntServ.msg by opp_msgc.
 */
struct FlowDescriptor_t
{
    FlowDescriptor_t();
    FlowSpecObj_t Flowspec_Object;
    FilterSpecObj_t Filter_Spec_Object;
    IPAddressVector RRO;
    int label;
};

void doPacking(cCommBuffer *b, FlowDescriptor_t& a);
void doUnpacking(cCommBuffer *b, FlowDescriptor_t& a);


#endif // _INTSERV_M_H_
