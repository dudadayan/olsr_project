//
// Generated file, do not edit! Created by opp_msgc 4.3 from networklayer/icmpv6/IPv6NDMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "IPv6NDMessage_m.h"

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




Register_Class(IPv6NDPrefixInformation);

IPv6NDPrefixInformation::IPv6NDPrefixInformation() : cObject()
{
    this->prefixLength_var = 0;
    this->onlinkFlag_var = 0;
    this->autoAddressConfFlag_var = 0;
    this->validLifetime_var = 0;
    this->preferredLifetime_var = 0;
}

IPv6NDPrefixInformation::IPv6NDPrefixInformation(const IPv6NDPrefixInformation& other) : cObject(other)
{
    copy(other);
}

IPv6NDPrefixInformation::~IPv6NDPrefixInformation()
{
}

IPv6NDPrefixInformation& IPv6NDPrefixInformation::operator=(const IPv6NDPrefixInformation& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    copy(other);
    return *this;
}

void IPv6NDPrefixInformation::copy(const IPv6NDPrefixInformation& other)
{
    this->prefixLength_var = other.prefixLength_var;
    this->onlinkFlag_var = other.onlinkFlag_var;
    this->autoAddressConfFlag_var = other.autoAddressConfFlag_var;
    this->validLifetime_var = other.validLifetime_var;
    this->preferredLifetime_var = other.preferredLifetime_var;
    this->prefix_var = other.prefix_var;
}

void IPv6NDPrefixInformation::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->prefixLength_var);
    doPacking(b,this->onlinkFlag_var);
    doPacking(b,this->autoAddressConfFlag_var);
    doPacking(b,this->validLifetime_var);
    doPacking(b,this->preferredLifetime_var);
    doPacking(b,this->prefix_var);
}

void IPv6NDPrefixInformation::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->prefixLength_var);
    doUnpacking(b,this->onlinkFlag_var);
    doUnpacking(b,this->autoAddressConfFlag_var);
    doUnpacking(b,this->validLifetime_var);
    doUnpacking(b,this->preferredLifetime_var);
    doUnpacking(b,this->prefix_var);
}

unsigned int IPv6NDPrefixInformation::getPrefixLength() const
{
    return prefixLength_var;
}

void IPv6NDPrefixInformation::setPrefixLength(unsigned int prefixLength)
{
    this->prefixLength_var = prefixLength;
}

bool IPv6NDPrefixInformation::getOnlinkFlag() const
{
    return onlinkFlag_var;
}

void IPv6NDPrefixInformation::setOnlinkFlag(bool onlinkFlag)
{
    this->onlinkFlag_var = onlinkFlag;
}

bool IPv6NDPrefixInformation::getAutoAddressConfFlag() const
{
    return autoAddressConfFlag_var;
}

void IPv6NDPrefixInformation::setAutoAddressConfFlag(bool autoAddressConfFlag)
{
    this->autoAddressConfFlag_var = autoAddressConfFlag;
}

unsigned int IPv6NDPrefixInformation::getValidLifetime() const
{
    return validLifetime_var;
}

void IPv6NDPrefixInformation::setValidLifetime(unsigned int validLifetime)
{
    this->validLifetime_var = validLifetime;
}

unsigned int IPv6NDPrefixInformation::getPreferredLifetime() const
{
    return preferredLifetime_var;
}

void IPv6NDPrefixInformation::setPreferredLifetime(unsigned int preferredLifetime)
{
    this->preferredLifetime_var = preferredLifetime;
}

IPv6Address& IPv6NDPrefixInformation::getPrefix()
{
    return prefix_var;
}

void IPv6NDPrefixInformation::setPrefix(const IPv6Address& prefix)
{
    this->prefix_var = prefix;
}

class IPv6NDPrefixInformationDescriptor : public cClassDescriptor
{
  public:
    IPv6NDPrefixInformationDescriptor();
    virtual ~IPv6NDPrefixInformationDescriptor();

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

Register_ClassDescriptor(IPv6NDPrefixInformationDescriptor);

IPv6NDPrefixInformationDescriptor::IPv6NDPrefixInformationDescriptor() : cClassDescriptor("IPv6NDPrefixInformation", "cObject")
{
}

IPv6NDPrefixInformationDescriptor::~IPv6NDPrefixInformationDescriptor()
{
}

bool IPv6NDPrefixInformationDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv6NDPrefixInformation *>(obj)!=NULL;
}

const char *IPv6NDPrefixInformationDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv6NDPrefixInformationDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int IPv6NDPrefixInformationDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<6) ? fieldTypeFlags[field] : 0;
}

const char *IPv6NDPrefixInformationDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "prefixLength",
        "onlinkFlag",
        "autoAddressConfFlag",
        "validLifetime",
        "preferredLifetime",
        "prefix",
    };
    return (field>=0 && field<6) ? fieldNames[field] : NULL;
}

int IPv6NDPrefixInformationDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "prefixLength")==0) return base+0;
    if (fieldName[0]=='o' && strcmp(fieldName, "onlinkFlag")==0) return base+1;
    if (fieldName[0]=='a' && strcmp(fieldName, "autoAddressConfFlag")==0) return base+2;
    if (fieldName[0]=='v' && strcmp(fieldName, "validLifetime")==0) return base+3;
    if (fieldName[0]=='p' && strcmp(fieldName, "preferredLifetime")==0) return base+4;
    if (fieldName[0]=='p' && strcmp(fieldName, "prefix")==0) return base+5;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv6NDPrefixInformationDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
        "bool",
        "bool",
        "unsigned int",
        "unsigned int",
        "IPv6Address",
    };
    return (field>=0 && field<6) ? fieldTypeStrings[field] : NULL;
}

const char *IPv6NDPrefixInformationDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPv6NDPrefixInformationDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv6NDPrefixInformation *pp = (IPv6NDPrefixInformation *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IPv6NDPrefixInformationDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6NDPrefixInformation *pp = (IPv6NDPrefixInformation *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPrefixLength());
        case 1: return bool2string(pp->getOnlinkFlag());
        case 2: return bool2string(pp->getAutoAddressConfFlag());
        case 3: return ulong2string(pp->getValidLifetime());
        case 4: return ulong2string(pp->getPreferredLifetime());
        case 5: {std::stringstream out; out << pp->getPrefix(); return out.str();}
        default: return "";
    }
}

bool IPv6NDPrefixInformationDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv6NDPrefixInformation *pp = (IPv6NDPrefixInformation *)object; (void)pp;
    switch (field) {
        case 0: pp->setPrefixLength(string2ulong(value)); return true;
        case 1: pp->setOnlinkFlag(string2bool(value)); return true;
        case 2: pp->setAutoAddressConfFlag(string2bool(value)); return true;
        case 3: pp->setValidLifetime(string2ulong(value)); return true;
        case 4: pp->setPreferredLifetime(string2ulong(value)); return true;
        default: return false;
    }
}

const char *IPv6NDPrefixInformationDescriptor::getFieldStructName(void *object, int field) const
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
        NULL,
        NULL,
        NULL,
        "IPv6Address",
    };
    return (field>=0 && field<6) ? fieldStructNames[field] : NULL;
}

void *IPv6NDPrefixInformationDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6NDPrefixInformation *pp = (IPv6NDPrefixInformation *)object; (void)pp;
    switch (field) {
        case 5: return (void *)(&pp->getPrefix()); break;
        default: return NULL;
    }
}

Register_Class(IPv6NDMessage);

IPv6NDMessage::IPv6NDMessage(const char *name, int kind) : ICMPv6Message(name,kind)
{
    this->code_var = 0;
}

IPv6NDMessage::IPv6NDMessage(const IPv6NDMessage& other) : ICMPv6Message(other)
{
    copy(other);
}

IPv6NDMessage::~IPv6NDMessage()
{
}

IPv6NDMessage& IPv6NDMessage::operator=(const IPv6NDMessage& other)
{
    if (this==&other) return *this;
    ICMPv6Message::operator=(other);
    copy(other);
    return *this;
}

void IPv6NDMessage::copy(const IPv6NDMessage& other)
{
    this->code_var = other.code_var;
}

void IPv6NDMessage::parsimPack(cCommBuffer *b)
{
    ICMPv6Message::parsimPack(b);
    doPacking(b,this->code_var);
}

void IPv6NDMessage::parsimUnpack(cCommBuffer *b)
{
    ICMPv6Message::parsimUnpack(b);
    doUnpacking(b,this->code_var);
}

int IPv6NDMessage::getCode() const
{
    return code_var;
}

void IPv6NDMessage::setCode(int code)
{
    this->code_var = code;
}

class IPv6NDMessageDescriptor : public cClassDescriptor
{
  public:
    IPv6NDMessageDescriptor();
    virtual ~IPv6NDMessageDescriptor();

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

Register_ClassDescriptor(IPv6NDMessageDescriptor);

IPv6NDMessageDescriptor::IPv6NDMessageDescriptor() : cClassDescriptor("IPv6NDMessage", "ICMPv6Message")
{
}

IPv6NDMessageDescriptor::~IPv6NDMessageDescriptor()
{
}

bool IPv6NDMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv6NDMessage *>(obj)!=NULL;
}

const char *IPv6NDMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv6NDMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int IPv6NDMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *IPv6NDMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "code",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int IPv6NDMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "code")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv6NDMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *IPv6NDMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPv6NDMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv6NDMessage *pp = (IPv6NDMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IPv6NDMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6NDMessage *pp = (IPv6NDMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getCode());
        default: return "";
    }
}

bool IPv6NDMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv6NDMessage *pp = (IPv6NDMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setCode(string2long(value)); return true;
        default: return false;
    }
}

const char *IPv6NDMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *IPv6NDMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6NDMessage *pp = (IPv6NDMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(IPv6RouterSolicitation);

IPv6RouterSolicitation::IPv6RouterSolicitation(const char *name, int kind) : IPv6NDMessage(name,kind)
{
}

IPv6RouterSolicitation::IPv6RouterSolicitation(const IPv6RouterSolicitation& other) : IPv6NDMessage(other)
{
    copy(other);
}

IPv6RouterSolicitation::~IPv6RouterSolicitation()
{
}

IPv6RouterSolicitation& IPv6RouterSolicitation::operator=(const IPv6RouterSolicitation& other)
{
    if (this==&other) return *this;
    IPv6NDMessage::operator=(other);
    copy(other);
    return *this;
}

void IPv6RouterSolicitation::copy(const IPv6RouterSolicitation& other)
{
    this->sourceLinkLayerAddress_var = other.sourceLinkLayerAddress_var;
}

void IPv6RouterSolicitation::parsimPack(cCommBuffer *b)
{
    IPv6NDMessage::parsimPack(b);
    doPacking(b,this->sourceLinkLayerAddress_var);
}

void IPv6RouterSolicitation::parsimUnpack(cCommBuffer *b)
{
    IPv6NDMessage::parsimUnpack(b);
    doUnpacking(b,this->sourceLinkLayerAddress_var);
}

MACAddress& IPv6RouterSolicitation::getSourceLinkLayerAddress()
{
    return sourceLinkLayerAddress_var;
}

void IPv6RouterSolicitation::setSourceLinkLayerAddress(const MACAddress& sourceLinkLayerAddress)
{
    this->sourceLinkLayerAddress_var = sourceLinkLayerAddress;
}

class IPv6RouterSolicitationDescriptor : public cClassDescriptor
{
  public:
    IPv6RouterSolicitationDescriptor();
    virtual ~IPv6RouterSolicitationDescriptor();

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

Register_ClassDescriptor(IPv6RouterSolicitationDescriptor);

IPv6RouterSolicitationDescriptor::IPv6RouterSolicitationDescriptor() : cClassDescriptor("IPv6RouterSolicitation", "IPv6NDMessage")
{
}

IPv6RouterSolicitationDescriptor::~IPv6RouterSolicitationDescriptor()
{
}

bool IPv6RouterSolicitationDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv6RouterSolicitation *>(obj)!=NULL;
}

const char *IPv6RouterSolicitationDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv6RouterSolicitationDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int IPv6RouterSolicitationDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *IPv6RouterSolicitationDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "sourceLinkLayerAddress",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int IPv6RouterSolicitationDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sourceLinkLayerAddress")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv6RouterSolicitationDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "MACAddress",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *IPv6RouterSolicitationDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPv6RouterSolicitationDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv6RouterSolicitation *pp = (IPv6RouterSolicitation *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IPv6RouterSolicitationDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6RouterSolicitation *pp = (IPv6RouterSolicitation *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSourceLinkLayerAddress(); return out.str();}
        default: return "";
    }
}

bool IPv6RouterSolicitationDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv6RouterSolicitation *pp = (IPv6RouterSolicitation *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *IPv6RouterSolicitationDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "MACAddress",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *IPv6RouterSolicitationDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6RouterSolicitation *pp = (IPv6RouterSolicitation *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSourceLinkLayerAddress()); break;
        default: return NULL;
    }
}

Register_Class(IPv6RouterAdvertisement);

IPv6RouterAdvertisement::IPv6RouterAdvertisement(const char *name, int kind) : IPv6NDMessage(name,kind)
{
    this->curHopLimit_var = 0;
    this->managedAddrConfFlag_var = 0;
    this->otherStatefulConfFlag_var = 0;
    this->routerLifetime_var = 0;
    this->reachableTime_var = 0;
    this->retransTimer_var = 0;
    this->MTU_var = 0;
    prefixInformation_arraysize = 0;
    this->prefixInformation_var = 0;
}

IPv6RouterAdvertisement::IPv6RouterAdvertisement(const IPv6RouterAdvertisement& other) : IPv6NDMessage(other)
{
    prefixInformation_arraysize = 0;
    this->prefixInformation_var = 0;
    copy(other);
}

IPv6RouterAdvertisement::~IPv6RouterAdvertisement()
{
    delete [] prefixInformation_var;
}

IPv6RouterAdvertisement& IPv6RouterAdvertisement::operator=(const IPv6RouterAdvertisement& other)
{
    if (this==&other) return *this;
    IPv6NDMessage::operator=(other);
    copy(other);
    return *this;
}

void IPv6RouterAdvertisement::copy(const IPv6RouterAdvertisement& other)
{
    this->curHopLimit_var = other.curHopLimit_var;
    this->managedAddrConfFlag_var = other.managedAddrConfFlag_var;
    this->otherStatefulConfFlag_var = other.otherStatefulConfFlag_var;
    this->routerLifetime_var = other.routerLifetime_var;
    this->reachableTime_var = other.reachableTime_var;
    this->retransTimer_var = other.retransTimer_var;
    this->sourceLinkLayerAddress_var = other.sourceLinkLayerAddress_var;
    this->MTU_var = other.MTU_var;
    delete [] this->prefixInformation_var;
    this->prefixInformation_var = (other.prefixInformation_arraysize==0) ? NULL : new IPv6NDPrefixInformation[other.prefixInformation_arraysize];
    prefixInformation_arraysize = other.prefixInformation_arraysize;
    for (unsigned int i=0; i<prefixInformation_arraysize; i++)
        this->prefixInformation_var[i] = other.prefixInformation_var[i];
}

void IPv6RouterAdvertisement::parsimPack(cCommBuffer *b)
{
    IPv6NDMessage::parsimPack(b);
    doPacking(b,this->curHopLimit_var);
    doPacking(b,this->managedAddrConfFlag_var);
    doPacking(b,this->otherStatefulConfFlag_var);
    doPacking(b,this->routerLifetime_var);
    doPacking(b,this->reachableTime_var);
    doPacking(b,this->retransTimer_var);
    doPacking(b,this->sourceLinkLayerAddress_var);
    doPacking(b,this->MTU_var);
    b->pack(prefixInformation_arraysize);
    doPacking(b,this->prefixInformation_var,prefixInformation_arraysize);
}

void IPv6RouterAdvertisement::parsimUnpack(cCommBuffer *b)
{
    IPv6NDMessage::parsimUnpack(b);
    doUnpacking(b,this->curHopLimit_var);
    doUnpacking(b,this->managedAddrConfFlag_var);
    doUnpacking(b,this->otherStatefulConfFlag_var);
    doUnpacking(b,this->routerLifetime_var);
    doUnpacking(b,this->reachableTime_var);
    doUnpacking(b,this->retransTimer_var);
    doUnpacking(b,this->sourceLinkLayerAddress_var);
    doUnpacking(b,this->MTU_var);
    delete [] this->prefixInformation_var;
    b->unpack(prefixInformation_arraysize);
    if (prefixInformation_arraysize==0) {
        this->prefixInformation_var = 0;
    } else {
        this->prefixInformation_var = new IPv6NDPrefixInformation[prefixInformation_arraysize];
        doUnpacking(b,this->prefixInformation_var,prefixInformation_arraysize);
    }
}

unsigned int IPv6RouterAdvertisement::getCurHopLimit() const
{
    return curHopLimit_var;
}

void IPv6RouterAdvertisement::setCurHopLimit(unsigned int curHopLimit)
{
    this->curHopLimit_var = curHopLimit;
}

bool IPv6RouterAdvertisement::getManagedAddrConfFlag() const
{
    return managedAddrConfFlag_var;
}

void IPv6RouterAdvertisement::setManagedAddrConfFlag(bool managedAddrConfFlag)
{
    this->managedAddrConfFlag_var = managedAddrConfFlag;
}

bool IPv6RouterAdvertisement::getOtherStatefulConfFlag() const
{
    return otherStatefulConfFlag_var;
}

void IPv6RouterAdvertisement::setOtherStatefulConfFlag(bool otherStatefulConfFlag)
{
    this->otherStatefulConfFlag_var = otherStatefulConfFlag;
}

unsigned short IPv6RouterAdvertisement::getRouterLifetime() const
{
    return routerLifetime_var;
}

void IPv6RouterAdvertisement::setRouterLifetime(unsigned short routerLifetime)
{
    this->routerLifetime_var = routerLifetime;
}

unsigned int IPv6RouterAdvertisement::getReachableTime() const
{
    return reachableTime_var;
}

void IPv6RouterAdvertisement::setReachableTime(unsigned int reachableTime)
{
    this->reachableTime_var = reachableTime;
}

unsigned int IPv6RouterAdvertisement::getRetransTimer() const
{
    return retransTimer_var;
}

void IPv6RouterAdvertisement::setRetransTimer(unsigned int retransTimer)
{
    this->retransTimer_var = retransTimer;
}

MACAddress& IPv6RouterAdvertisement::getSourceLinkLayerAddress()
{
    return sourceLinkLayerAddress_var;
}

void IPv6RouterAdvertisement::setSourceLinkLayerAddress(const MACAddress& sourceLinkLayerAddress)
{
    this->sourceLinkLayerAddress_var = sourceLinkLayerAddress;
}

unsigned int IPv6RouterAdvertisement::getMTU() const
{
    return MTU_var;
}

void IPv6RouterAdvertisement::setMTU(unsigned int MTU)
{
    this->MTU_var = MTU;
}

void IPv6RouterAdvertisement::setPrefixInformationArraySize(unsigned int size)
{
    IPv6NDPrefixInformation *prefixInformation_var2 = (size==0) ? NULL : new IPv6NDPrefixInformation[size];
    unsigned int sz = prefixInformation_arraysize < size ? prefixInformation_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        prefixInformation_var2[i] = this->prefixInformation_var[i];
    prefixInformation_arraysize = size;
    delete [] this->prefixInformation_var;
    this->prefixInformation_var = prefixInformation_var2;
}

unsigned int IPv6RouterAdvertisement::getPrefixInformationArraySize() const
{
    return prefixInformation_arraysize;
}

IPv6NDPrefixInformation& IPv6RouterAdvertisement::getPrefixInformation(unsigned int k)
{
    if (k>=prefixInformation_arraysize) throw cRuntimeError("Array of size %d indexed by %d", prefixInformation_arraysize, k);
    return prefixInformation_var[k];
}

void IPv6RouterAdvertisement::setPrefixInformation(unsigned int k, const IPv6NDPrefixInformation& prefixInformation)
{
    if (k>=prefixInformation_arraysize) throw cRuntimeError("Array of size %d indexed by %d", prefixInformation_arraysize, k);
    this->prefixInformation_var[k] = prefixInformation;
}

class IPv6RouterAdvertisementDescriptor : public cClassDescriptor
{
  public:
    IPv6RouterAdvertisementDescriptor();
    virtual ~IPv6RouterAdvertisementDescriptor();

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

Register_ClassDescriptor(IPv6RouterAdvertisementDescriptor);

IPv6RouterAdvertisementDescriptor::IPv6RouterAdvertisementDescriptor() : cClassDescriptor("IPv6RouterAdvertisement", "IPv6NDMessage")
{
}

IPv6RouterAdvertisementDescriptor::~IPv6RouterAdvertisementDescriptor()
{
}

bool IPv6RouterAdvertisementDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv6RouterAdvertisement *>(obj)!=NULL;
}

const char *IPv6RouterAdvertisementDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv6RouterAdvertisementDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 9+basedesc->getFieldCount(object) : 9;
}

unsigned int IPv6RouterAdvertisementDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISCOMPOUND | FD_ISCOBJECT,
    };
    return (field>=0 && field<9) ? fieldTypeFlags[field] : 0;
}

const char *IPv6RouterAdvertisementDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "curHopLimit",
        "managedAddrConfFlag",
        "otherStatefulConfFlag",
        "routerLifetime",
        "reachableTime",
        "retransTimer",
        "sourceLinkLayerAddress",
        "MTU",
        "prefixInformation",
    };
    return (field>=0 && field<9) ? fieldNames[field] : NULL;
}

int IPv6RouterAdvertisementDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "curHopLimit")==0) return base+0;
    if (fieldName[0]=='m' && strcmp(fieldName, "managedAddrConfFlag")==0) return base+1;
    if (fieldName[0]=='o' && strcmp(fieldName, "otherStatefulConfFlag")==0) return base+2;
    if (fieldName[0]=='r' && strcmp(fieldName, "routerLifetime")==0) return base+3;
    if (fieldName[0]=='r' && strcmp(fieldName, "reachableTime")==0) return base+4;
    if (fieldName[0]=='r' && strcmp(fieldName, "retransTimer")==0) return base+5;
    if (fieldName[0]=='s' && strcmp(fieldName, "sourceLinkLayerAddress")==0) return base+6;
    if (fieldName[0]=='M' && strcmp(fieldName, "MTU")==0) return base+7;
    if (fieldName[0]=='p' && strcmp(fieldName, "prefixInformation")==0) return base+8;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv6RouterAdvertisementDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
        "bool",
        "bool",
        "unsigned short",
        "unsigned int",
        "unsigned int",
        "MACAddress",
        "unsigned int",
        "IPv6NDPrefixInformation",
    };
    return (field>=0 && field<9) ? fieldTypeStrings[field] : NULL;
}

const char *IPv6RouterAdvertisementDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPv6RouterAdvertisementDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv6RouterAdvertisement *pp = (IPv6RouterAdvertisement *)object; (void)pp;
    switch (field) {
        case 8: return pp->getPrefixInformationArraySize();
        default: return 0;
    }
}

std::string IPv6RouterAdvertisementDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6RouterAdvertisement *pp = (IPv6RouterAdvertisement *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getCurHopLimit());
        case 1: return bool2string(pp->getManagedAddrConfFlag());
        case 2: return bool2string(pp->getOtherStatefulConfFlag());
        case 3: return ulong2string(pp->getRouterLifetime());
        case 4: return ulong2string(pp->getReachableTime());
        case 5: return ulong2string(pp->getRetransTimer());
        case 6: {std::stringstream out; out << pp->getSourceLinkLayerAddress(); return out.str();}
        case 7: return ulong2string(pp->getMTU());
        case 8: {std::stringstream out; out << pp->getPrefixInformation(i); return out.str();}
        default: return "";
    }
}

bool IPv6RouterAdvertisementDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv6RouterAdvertisement *pp = (IPv6RouterAdvertisement *)object; (void)pp;
    switch (field) {
        case 0: pp->setCurHopLimit(string2ulong(value)); return true;
        case 1: pp->setManagedAddrConfFlag(string2bool(value)); return true;
        case 2: pp->setOtherStatefulConfFlag(string2bool(value)); return true;
        case 3: pp->setRouterLifetime(string2ulong(value)); return true;
        case 4: pp->setReachableTime(string2ulong(value)); return true;
        case 5: pp->setRetransTimer(string2ulong(value)); return true;
        case 7: pp->setMTU(string2ulong(value)); return true;
        default: return false;
    }
}

const char *IPv6RouterAdvertisementDescriptor::getFieldStructName(void *object, int field) const
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
        NULL,
        NULL,
        NULL,
        NULL,
        "MACAddress",
        NULL,
        "IPv6NDPrefixInformation",
    };
    return (field>=0 && field<9) ? fieldStructNames[field] : NULL;
}

void *IPv6RouterAdvertisementDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6RouterAdvertisement *pp = (IPv6RouterAdvertisement *)object; (void)pp;
    switch (field) {
        case 6: return (void *)(&pp->getSourceLinkLayerAddress()); break;
        case 8: return (void *)static_cast<cObject *>(&pp->getPrefixInformation(i)); break;
        default: return NULL;
    }
}

Register_Class(IPv6NeighbourSolicitation);

IPv6NeighbourSolicitation::IPv6NeighbourSolicitation(const char *name, int kind) : IPv6NDMessage(name,kind)
{
}

IPv6NeighbourSolicitation::IPv6NeighbourSolicitation(const IPv6NeighbourSolicitation& other) : IPv6NDMessage(other)
{
    copy(other);
}

IPv6NeighbourSolicitation::~IPv6NeighbourSolicitation()
{
}

IPv6NeighbourSolicitation& IPv6NeighbourSolicitation::operator=(const IPv6NeighbourSolicitation& other)
{
    if (this==&other) return *this;
    IPv6NDMessage::operator=(other);
    copy(other);
    return *this;
}

void IPv6NeighbourSolicitation::copy(const IPv6NeighbourSolicitation& other)
{
    this->targetAddress_var = other.targetAddress_var;
    this->sourceLinkLayerAddress_var = other.sourceLinkLayerAddress_var;
}

void IPv6NeighbourSolicitation::parsimPack(cCommBuffer *b)
{
    IPv6NDMessage::parsimPack(b);
    doPacking(b,this->targetAddress_var);
    doPacking(b,this->sourceLinkLayerAddress_var);
}

void IPv6NeighbourSolicitation::parsimUnpack(cCommBuffer *b)
{
    IPv6NDMessage::parsimUnpack(b);
    doUnpacking(b,this->targetAddress_var);
    doUnpacking(b,this->sourceLinkLayerAddress_var);
}

IPv6Address& IPv6NeighbourSolicitation::getTargetAddress()
{
    return targetAddress_var;
}

void IPv6NeighbourSolicitation::setTargetAddress(const IPv6Address& targetAddress)
{
    this->targetAddress_var = targetAddress;
}

MACAddress& IPv6NeighbourSolicitation::getSourceLinkLayerAddress()
{
    return sourceLinkLayerAddress_var;
}

void IPv6NeighbourSolicitation::setSourceLinkLayerAddress(const MACAddress& sourceLinkLayerAddress)
{
    this->sourceLinkLayerAddress_var = sourceLinkLayerAddress;
}

class IPv6NeighbourSolicitationDescriptor : public cClassDescriptor
{
  public:
    IPv6NeighbourSolicitationDescriptor();
    virtual ~IPv6NeighbourSolicitationDescriptor();

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

Register_ClassDescriptor(IPv6NeighbourSolicitationDescriptor);

IPv6NeighbourSolicitationDescriptor::IPv6NeighbourSolicitationDescriptor() : cClassDescriptor("IPv6NeighbourSolicitation", "IPv6NDMessage")
{
}

IPv6NeighbourSolicitationDescriptor::~IPv6NeighbourSolicitationDescriptor()
{
}

bool IPv6NeighbourSolicitationDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv6NeighbourSolicitation *>(obj)!=NULL;
}

const char *IPv6NeighbourSolicitationDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv6NeighbourSolicitationDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int IPv6NeighbourSolicitationDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *IPv6NeighbourSolicitationDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "targetAddress",
        "sourceLinkLayerAddress",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int IPv6NeighbourSolicitationDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "targetAddress")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sourceLinkLayerAddress")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv6NeighbourSolicitationDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv6Address",
        "MACAddress",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *IPv6NeighbourSolicitationDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPv6NeighbourSolicitationDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv6NeighbourSolicitation *pp = (IPv6NeighbourSolicitation *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IPv6NeighbourSolicitationDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6NeighbourSolicitation *pp = (IPv6NeighbourSolicitation *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getTargetAddress(); return out.str();}
        case 1: {std::stringstream out; out << pp->getSourceLinkLayerAddress(); return out.str();}
        default: return "";
    }
}

bool IPv6NeighbourSolicitationDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv6NeighbourSolicitation *pp = (IPv6NeighbourSolicitation *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *IPv6NeighbourSolicitationDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "IPv6Address",
        "MACAddress",
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *IPv6NeighbourSolicitationDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6NeighbourSolicitation *pp = (IPv6NeighbourSolicitation *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getTargetAddress()); break;
        case 1: return (void *)(&pp->getSourceLinkLayerAddress()); break;
        default: return NULL;
    }
}

Register_Class(IPv6NeighbourAdvertisement);

IPv6NeighbourAdvertisement::IPv6NeighbourAdvertisement(const char *name, int kind) : IPv6NDMessage(name,kind)
{
    this->routerFlag_var = 0;
    this->solicitedFlag_var = 0;
    this->overrideFlag_var = 0;
}

IPv6NeighbourAdvertisement::IPv6NeighbourAdvertisement(const IPv6NeighbourAdvertisement& other) : IPv6NDMessage(other)
{
    copy(other);
}

IPv6NeighbourAdvertisement::~IPv6NeighbourAdvertisement()
{
}

IPv6NeighbourAdvertisement& IPv6NeighbourAdvertisement::operator=(const IPv6NeighbourAdvertisement& other)
{
    if (this==&other) return *this;
    IPv6NDMessage::operator=(other);
    copy(other);
    return *this;
}

void IPv6NeighbourAdvertisement::copy(const IPv6NeighbourAdvertisement& other)
{
    this->routerFlag_var = other.routerFlag_var;
    this->solicitedFlag_var = other.solicitedFlag_var;
    this->overrideFlag_var = other.overrideFlag_var;
    this->targetAddress_var = other.targetAddress_var;
    this->targetLinkLayerAddress_var = other.targetLinkLayerAddress_var;
}

void IPv6NeighbourAdvertisement::parsimPack(cCommBuffer *b)
{
    IPv6NDMessage::parsimPack(b);
    doPacking(b,this->routerFlag_var);
    doPacking(b,this->solicitedFlag_var);
    doPacking(b,this->overrideFlag_var);
    doPacking(b,this->targetAddress_var);
    doPacking(b,this->targetLinkLayerAddress_var);
}

void IPv6NeighbourAdvertisement::parsimUnpack(cCommBuffer *b)
{
    IPv6NDMessage::parsimUnpack(b);
    doUnpacking(b,this->routerFlag_var);
    doUnpacking(b,this->solicitedFlag_var);
    doUnpacking(b,this->overrideFlag_var);
    doUnpacking(b,this->targetAddress_var);
    doUnpacking(b,this->targetLinkLayerAddress_var);
}

bool IPv6NeighbourAdvertisement::getRouterFlag() const
{
    return routerFlag_var;
}

void IPv6NeighbourAdvertisement::setRouterFlag(bool routerFlag)
{
    this->routerFlag_var = routerFlag;
}

bool IPv6NeighbourAdvertisement::getSolicitedFlag() const
{
    return solicitedFlag_var;
}

void IPv6NeighbourAdvertisement::setSolicitedFlag(bool solicitedFlag)
{
    this->solicitedFlag_var = solicitedFlag;
}

bool IPv6NeighbourAdvertisement::getOverrideFlag() const
{
    return overrideFlag_var;
}

void IPv6NeighbourAdvertisement::setOverrideFlag(bool overrideFlag)
{
    this->overrideFlag_var = overrideFlag;
}

IPv6Address& IPv6NeighbourAdvertisement::getTargetAddress()
{
    return targetAddress_var;
}

void IPv6NeighbourAdvertisement::setTargetAddress(const IPv6Address& targetAddress)
{
    this->targetAddress_var = targetAddress;
}

MACAddress& IPv6NeighbourAdvertisement::getTargetLinkLayerAddress()
{
    return targetLinkLayerAddress_var;
}

void IPv6NeighbourAdvertisement::setTargetLinkLayerAddress(const MACAddress& targetLinkLayerAddress)
{
    this->targetLinkLayerAddress_var = targetLinkLayerAddress;
}

class IPv6NeighbourAdvertisementDescriptor : public cClassDescriptor
{
  public:
    IPv6NeighbourAdvertisementDescriptor();
    virtual ~IPv6NeighbourAdvertisementDescriptor();

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

Register_ClassDescriptor(IPv6NeighbourAdvertisementDescriptor);

IPv6NeighbourAdvertisementDescriptor::IPv6NeighbourAdvertisementDescriptor() : cClassDescriptor("IPv6NeighbourAdvertisement", "IPv6NDMessage")
{
}

IPv6NeighbourAdvertisementDescriptor::~IPv6NeighbourAdvertisementDescriptor()
{
}

bool IPv6NeighbourAdvertisementDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv6NeighbourAdvertisement *>(obj)!=NULL;
}

const char *IPv6NeighbourAdvertisementDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv6NeighbourAdvertisementDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int IPv6NeighbourAdvertisementDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *IPv6NeighbourAdvertisementDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "routerFlag",
        "solicitedFlag",
        "overrideFlag",
        "targetAddress",
        "targetLinkLayerAddress",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int IPv6NeighbourAdvertisementDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "routerFlag")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "solicitedFlag")==0) return base+1;
    if (fieldName[0]=='o' && strcmp(fieldName, "overrideFlag")==0) return base+2;
    if (fieldName[0]=='t' && strcmp(fieldName, "targetAddress")==0) return base+3;
    if (fieldName[0]=='t' && strcmp(fieldName, "targetLinkLayerAddress")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv6NeighbourAdvertisementDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "bool",
        "bool",
        "bool",
        "IPv6Address",
        "MACAddress",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *IPv6NeighbourAdvertisementDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPv6NeighbourAdvertisementDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv6NeighbourAdvertisement *pp = (IPv6NeighbourAdvertisement *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IPv6NeighbourAdvertisementDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6NeighbourAdvertisement *pp = (IPv6NeighbourAdvertisement *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getRouterFlag());
        case 1: return bool2string(pp->getSolicitedFlag());
        case 2: return bool2string(pp->getOverrideFlag());
        case 3: {std::stringstream out; out << pp->getTargetAddress(); return out.str();}
        case 4: {std::stringstream out; out << pp->getTargetLinkLayerAddress(); return out.str();}
        default: return "";
    }
}

bool IPv6NeighbourAdvertisementDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv6NeighbourAdvertisement *pp = (IPv6NeighbourAdvertisement *)object; (void)pp;
    switch (field) {
        case 0: pp->setRouterFlag(string2bool(value)); return true;
        case 1: pp->setSolicitedFlag(string2bool(value)); return true;
        case 2: pp->setOverrideFlag(string2bool(value)); return true;
        default: return false;
    }
}

const char *IPv6NeighbourAdvertisementDescriptor::getFieldStructName(void *object, int field) const
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
        NULL,
        "IPv6Address",
        "MACAddress",
    };
    return (field>=0 && field<5) ? fieldStructNames[field] : NULL;
}

void *IPv6NeighbourAdvertisementDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6NeighbourAdvertisement *pp = (IPv6NeighbourAdvertisement *)object; (void)pp;
    switch (field) {
        case 3: return (void *)(&pp->getTargetAddress()); break;
        case 4: return (void *)(&pp->getTargetLinkLayerAddress()); break;
        default: return NULL;
    }
}

Register_Class(IPv6Redirect);

IPv6Redirect::IPv6Redirect(const char *name, int kind) : IPv6NDMessage(name,kind)
{
}

IPv6Redirect::IPv6Redirect(const IPv6Redirect& other) : IPv6NDMessage(other)
{
    copy(other);
}

IPv6Redirect::~IPv6Redirect()
{
}

IPv6Redirect& IPv6Redirect::operator=(const IPv6Redirect& other)
{
    if (this==&other) return *this;
    IPv6NDMessage::operator=(other);
    copy(other);
    return *this;
}

void IPv6Redirect::copy(const IPv6Redirect& other)
{
    this->targetAddress_var = other.targetAddress_var;
    this->destinationAddress_var = other.destinationAddress_var;
    this->targetLinkLayerAddress_var = other.targetLinkLayerAddress_var;
}

void IPv6Redirect::parsimPack(cCommBuffer *b)
{
    IPv6NDMessage::parsimPack(b);
    doPacking(b,this->targetAddress_var);
    doPacking(b,this->destinationAddress_var);
    doPacking(b,this->targetLinkLayerAddress_var);
}

void IPv6Redirect::parsimUnpack(cCommBuffer *b)
{
    IPv6NDMessage::parsimUnpack(b);
    doUnpacking(b,this->targetAddress_var);
    doUnpacking(b,this->destinationAddress_var);
    doUnpacking(b,this->targetLinkLayerAddress_var);
}

IPv6Address& IPv6Redirect::getTargetAddress()
{
    return targetAddress_var;
}

void IPv6Redirect::setTargetAddress(const IPv6Address& targetAddress)
{
    this->targetAddress_var = targetAddress;
}

IPv6Address& IPv6Redirect::getDestinationAddress()
{
    return destinationAddress_var;
}

void IPv6Redirect::setDestinationAddress(const IPv6Address& destinationAddress)
{
    this->destinationAddress_var = destinationAddress;
}

MACAddress& IPv6Redirect::getTargetLinkLayerAddress()
{
    return targetLinkLayerAddress_var;
}

void IPv6Redirect::setTargetLinkLayerAddress(const MACAddress& targetLinkLayerAddress)
{
    this->targetLinkLayerAddress_var = targetLinkLayerAddress;
}

class IPv6RedirectDescriptor : public cClassDescriptor
{
  public:
    IPv6RedirectDescriptor();
    virtual ~IPv6RedirectDescriptor();

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

Register_ClassDescriptor(IPv6RedirectDescriptor);

IPv6RedirectDescriptor::IPv6RedirectDescriptor() : cClassDescriptor("IPv6Redirect", "IPv6NDMessage")
{
}

IPv6RedirectDescriptor::~IPv6RedirectDescriptor()
{
}

bool IPv6RedirectDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv6Redirect *>(obj)!=NULL;
}

const char *IPv6RedirectDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv6RedirectDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int IPv6RedirectDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *IPv6RedirectDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "targetAddress",
        "destinationAddress",
        "targetLinkLayerAddress",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int IPv6RedirectDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "targetAddress")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destinationAddress")==0) return base+1;
    if (fieldName[0]=='t' && strcmp(fieldName, "targetLinkLayerAddress")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv6RedirectDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv6Address",
        "IPv6Address",
        "MACAddress",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *IPv6RedirectDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPv6RedirectDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv6Redirect *pp = (IPv6Redirect *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IPv6RedirectDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6Redirect *pp = (IPv6Redirect *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getTargetAddress(); return out.str();}
        case 1: {std::stringstream out; out << pp->getDestinationAddress(); return out.str();}
        case 2: {std::stringstream out; out << pp->getTargetLinkLayerAddress(); return out.str();}
        default: return "";
    }
}

bool IPv6RedirectDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv6Redirect *pp = (IPv6Redirect *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *IPv6RedirectDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "IPv6Address",
        "IPv6Address",
        "MACAddress",
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *IPv6RedirectDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6Redirect *pp = (IPv6Redirect *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getTargetAddress()); break;
        case 1: return (void *)(&pp->getDestinationAddress()); break;
        case 2: return (void *)(&pp->getTargetLinkLayerAddress()); break;
        default: return NULL;
    }
}


