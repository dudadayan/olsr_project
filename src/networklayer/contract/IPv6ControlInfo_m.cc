//
// Generated file, do not edit! Created by opp_msgc 4.3 from networklayer/contract/IPv6ControlInfo.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "IPv6ControlInfo_m.h"

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




IPv6ControlInfo_Base::IPv6ControlInfo_Base() : cObject()
{
    this->protocol_var = 0;
    this->hopLimit_var = 0;
    this->interfaceId_var = -1;
}

IPv6ControlInfo_Base::IPv6ControlInfo_Base(const IPv6ControlInfo_Base& other) : cObject(other)
{
    copy(other);
}

IPv6ControlInfo_Base::~IPv6ControlInfo_Base()
{
}

IPv6ControlInfo_Base& IPv6ControlInfo_Base::operator=(const IPv6ControlInfo_Base& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    copy(other);
    return *this;
}

void IPv6ControlInfo_Base::copy(const IPv6ControlInfo_Base& other)
{
    this->protocol_var = other.protocol_var;
    this->destAddr_var = other.destAddr_var;
    this->srcAddr_var = other.srcAddr_var;
    this->hopLimit_var = other.hopLimit_var;
    this->interfaceId_var = other.interfaceId_var;
}

void IPv6ControlInfo_Base::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->protocol_var);
    doPacking(b,this->destAddr_var);
    doPacking(b,this->srcAddr_var);
    doPacking(b,this->hopLimit_var);
    doPacking(b,this->interfaceId_var);
}

void IPv6ControlInfo_Base::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->protocol_var);
    doUnpacking(b,this->destAddr_var);
    doUnpacking(b,this->srcAddr_var);
    doUnpacking(b,this->hopLimit_var);
    doUnpacking(b,this->interfaceId_var);
}

int IPv6ControlInfo_Base::getProtocol() const
{
    return protocol_var;
}

void IPv6ControlInfo_Base::setProtocol(int protocol)
{
    this->protocol_var = protocol;
}

IPv6Address& IPv6ControlInfo_Base::getDestAddr()
{
    return destAddr_var;
}

void IPv6ControlInfo_Base::setDestAddr(const IPv6Address& destAddr)
{
    this->destAddr_var = destAddr;
}

IPv6Address& IPv6ControlInfo_Base::getSrcAddr()
{
    return srcAddr_var;
}

void IPv6ControlInfo_Base::setSrcAddr(const IPv6Address& srcAddr)
{
    this->srcAddr_var = srcAddr;
}

short IPv6ControlInfo_Base::getHopLimit() const
{
    return hopLimit_var;
}

void IPv6ControlInfo_Base::setHopLimit(short hopLimit)
{
    this->hopLimit_var = hopLimit;
}

int IPv6ControlInfo_Base::getInterfaceId() const
{
    return interfaceId_var;
}

void IPv6ControlInfo_Base::setInterfaceId(int interfaceId)
{
    this->interfaceId_var = interfaceId;
}

class IPv6ControlInfoDescriptor : public cClassDescriptor
{
  public:
    IPv6ControlInfoDescriptor();
    virtual ~IPv6ControlInfoDescriptor();

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

Register_ClassDescriptor(IPv6ControlInfoDescriptor);

IPv6ControlInfoDescriptor::IPv6ControlInfoDescriptor() : cClassDescriptor("IPv6ControlInfo", "cObject")
{
}

IPv6ControlInfoDescriptor::~IPv6ControlInfoDescriptor()
{
}

bool IPv6ControlInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv6ControlInfo_Base *>(obj)!=NULL;
}

const char *IPv6ControlInfoDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv6ControlInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int IPv6ControlInfoDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *IPv6ControlInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "protocol",
        "destAddr",
        "srcAddr",
        "hopLimit",
        "interfaceId",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int IPv6ControlInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "protocol")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddr")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcAddr")==0) return base+2;
    if (fieldName[0]=='h' && strcmp(fieldName, "hopLimit")==0) return base+3;
    if (fieldName[0]=='i' && strcmp(fieldName, "interfaceId")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv6ControlInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "IPv6Address",
        "IPv6Address",
        "short",
        "int",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *IPv6ControlInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "IPProtocolId";
            return NULL;
        default: return NULL;
    }
}

int IPv6ControlInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv6ControlInfo_Base *pp = (IPv6ControlInfo_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IPv6ControlInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6ControlInfo_Base *pp = (IPv6ControlInfo_Base *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getProtocol());
        case 1: {std::stringstream out; out << pp->getDestAddr(); return out.str();}
        case 2: {std::stringstream out; out << pp->getSrcAddr(); return out.str();}
        case 3: return long2string(pp->getHopLimit());
        case 4: return long2string(pp->getInterfaceId());
        default: return "";
    }
}

bool IPv6ControlInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv6ControlInfo_Base *pp = (IPv6ControlInfo_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setProtocol(string2long(value)); return true;
        case 3: pp->setHopLimit(string2long(value)); return true;
        case 4: pp->setInterfaceId(string2long(value)); return true;
        default: return false;
    }
}

const char *IPv6ControlInfoDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
        "IPv6Address",
        "IPv6Address",
        NULL,
        NULL,
    };
    return (field>=0 && field<5) ? fieldStructNames[field] : NULL;
}

void *IPv6ControlInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6ControlInfo_Base *pp = (IPv6ControlInfo_Base *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getDestAddr()); break;
        case 2: return (void *)(&pp->getSrcAddr()); break;
        default: return NULL;
    }
}


