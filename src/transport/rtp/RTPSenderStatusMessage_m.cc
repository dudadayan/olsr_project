//
// Generated file, do not edit! Created by opp_msgc 4.3 from transport/rtp/RTPSenderStatusMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "RTPSenderStatusMessage_m.h"

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
std::ostream& operator<<(std::ostream& out,const T&) {return out;}

// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




Register_Class(RTPSenderStatusMessage);

RTPSenderStatusMessage::RTPSenderStatusMessage(const char *name, int kind) : cPacket(name,kind)
{
    this->status_var = 0;
    this->timeStamp_var = 0;
}

RTPSenderStatusMessage::RTPSenderStatusMessage(const RTPSenderStatusMessage& other) : cPacket(other)
{
    copy(other);
}

RTPSenderStatusMessage::~RTPSenderStatusMessage()
{
}

RTPSenderStatusMessage& RTPSenderStatusMessage::operator=(const RTPSenderStatusMessage& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void RTPSenderStatusMessage::copy(const RTPSenderStatusMessage& other)
{
    this->status_var = other.status_var;
    this->timeStamp_var = other.timeStamp_var;
}

void RTPSenderStatusMessage::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->status_var);
    doPacking(b,this->timeStamp_var);
}

void RTPSenderStatusMessage::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->status_var);
    doUnpacking(b,this->timeStamp_var);
}

const char * RTPSenderStatusMessage::getStatus() const
{
    return status_var.c_str();
}

void RTPSenderStatusMessage::setStatus(const char * status)
{
    this->status_var = status;
}

uint32 RTPSenderStatusMessage::getTimeStamp() const
{
    return timeStamp_var;
}

void RTPSenderStatusMessage::setTimeStamp(uint32 timeStamp)
{
    this->timeStamp_var = timeStamp;
}

class RTPSenderStatusMessageDescriptor : public cClassDescriptor
{
  public:
    RTPSenderStatusMessageDescriptor();
    virtual ~RTPSenderStatusMessageDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(RTPSenderStatusMessageDescriptor);

RTPSenderStatusMessageDescriptor::RTPSenderStatusMessageDescriptor() : cClassDescriptor("RTPSenderStatusMessage", "cPacket")
{
}

RTPSenderStatusMessageDescriptor::~RTPSenderStatusMessageDescriptor()
{
}

bool RTPSenderStatusMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTPSenderStatusMessage *>(obj)!=NULL;
}

const char *RTPSenderStatusMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTPSenderStatusMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int RTPSenderStatusMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *RTPSenderStatusMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "status",
        "timeStamp",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int RTPSenderStatusMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "status")==0) return base+0;
    if (fieldName[0]=='t' && strcmp(fieldName, "timeStamp")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RTPSenderStatusMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "string",
        "uint32",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *RTPSenderStatusMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int RTPSenderStatusMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTPSenderStatusMessage *pp = (RTPSenderStatusMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RTPSenderStatusMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RTPSenderStatusMessage *pp = (RTPSenderStatusMessage *)object; (void)pp;
    switch (field) {
        case 0: return oppstring2string(pp->getStatus());
        case 1: return ulong2string(pp->getTimeStamp());
        default: return "";
    }
}

bool RTPSenderStatusMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTPSenderStatusMessage *pp = (RTPSenderStatusMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setStatus((value)); return true;
        case 1: pp->setTimeStamp(string2ulong(value)); return true;
        default: return false;
    }
}

const char *RTPSenderStatusMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
        NULL,
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *RTPSenderStatusMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTPSenderStatusMessage *pp = (RTPSenderStatusMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


