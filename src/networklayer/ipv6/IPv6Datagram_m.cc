//
// Generated file, do not edit! Created by opp_msgc 4.3 from networklayer/ipv6/IPv6Datagram.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "IPv6Datagram_m.h"

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




IPv6Datagram_Base::IPv6Datagram_Base(const char *name, int kind) : cPacket(name,kind)
{
    this->trafficClass_var = 0;
    this->flowLabel_var = 0;
    this->hopLimit_var = 0;
    this->transportProtocol_var = 0;
    extensionHeader_arraysize = 0;
    this->extensionHeader_var = 0;
}

IPv6Datagram_Base::IPv6Datagram_Base(const IPv6Datagram_Base& other) : cPacket(other)
{
    extensionHeader_arraysize = 0;
    this->extensionHeader_var = 0;
    copy(other);
}

IPv6Datagram_Base::~IPv6Datagram_Base()
{
    delete [] extensionHeader_var;
}

IPv6Datagram_Base& IPv6Datagram_Base::operator=(const IPv6Datagram_Base& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void IPv6Datagram_Base::copy(const IPv6Datagram_Base& other)
{
    this->srcAddress_var = other.srcAddress_var;
    this->destAddress_var = other.destAddress_var;
    this->trafficClass_var = other.trafficClass_var;
    this->flowLabel_var = other.flowLabel_var;
    this->hopLimit_var = other.hopLimit_var;
    this->transportProtocol_var = other.transportProtocol_var;
    delete [] this->extensionHeader_var;
    this->extensionHeader_var = (other.extensionHeader_arraysize==0) ? NULL : new IPv6ExtensionHeaderPtr[other.extensionHeader_arraysize];
    extensionHeader_arraysize = other.extensionHeader_arraysize;
    for (unsigned int i=0; i<extensionHeader_arraysize; i++)
        this->extensionHeader_var[i] = other.extensionHeader_var[i];
}

void IPv6Datagram_Base::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->srcAddress_var);
    doPacking(b,this->destAddress_var);
    doPacking(b,this->trafficClass_var);
    doPacking(b,this->flowLabel_var);
    doPacking(b,this->hopLimit_var);
    doPacking(b,this->transportProtocol_var);
    b->pack(extensionHeader_arraysize);
    doPacking(b,this->extensionHeader_var,extensionHeader_arraysize);
}

void IPv6Datagram_Base::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->srcAddress_var);
    doUnpacking(b,this->destAddress_var);
    doUnpacking(b,this->trafficClass_var);
    doUnpacking(b,this->flowLabel_var);
    doUnpacking(b,this->hopLimit_var);
    doUnpacking(b,this->transportProtocol_var);
    delete [] this->extensionHeader_var;
    b->unpack(extensionHeader_arraysize);
    if (extensionHeader_arraysize==0) {
        this->extensionHeader_var = 0;
    } else {
        this->extensionHeader_var = new IPv6ExtensionHeaderPtr[extensionHeader_arraysize];
        doUnpacking(b,this->extensionHeader_var,extensionHeader_arraysize);
    }
}

IPv6Address& IPv6Datagram_Base::getSrcAddress()
{
    return srcAddress_var;
}

void IPv6Datagram_Base::setSrcAddress(const IPv6Address& srcAddress)
{
    this->srcAddress_var = srcAddress;
}

IPv6Address& IPv6Datagram_Base::getDestAddress()
{
    return destAddress_var;
}

void IPv6Datagram_Base::setDestAddress(const IPv6Address& destAddress)
{
    this->destAddress_var = destAddress;
}

unsigned int IPv6Datagram_Base::getTrafficClass() const
{
    return trafficClass_var;
}

void IPv6Datagram_Base::setTrafficClass(unsigned int trafficClass)
{
    this->trafficClass_var = trafficClass;
}

unsigned int IPv6Datagram_Base::getFlowLabel() const
{
    return flowLabel_var;
}

void IPv6Datagram_Base::setFlowLabel(unsigned int flowLabel)
{
    this->flowLabel_var = flowLabel;
}

short IPv6Datagram_Base::getHopLimit() const
{
    return hopLimit_var;
}

void IPv6Datagram_Base::setHopLimit(short hopLimit)
{
    this->hopLimit_var = hopLimit;
}

int IPv6Datagram_Base::getTransportProtocol() const
{
    return transportProtocol_var;
}

void IPv6Datagram_Base::setTransportProtocol(int transportProtocol)
{
    this->transportProtocol_var = transportProtocol;
}

void IPv6Datagram_Base::setExtensionHeaderArraySize(unsigned int size)
{
    IPv6ExtensionHeaderPtr *extensionHeader_var2 = (size==0) ? NULL : new IPv6ExtensionHeaderPtr[size];
    unsigned int sz = extensionHeader_arraysize < size ? extensionHeader_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        extensionHeader_var2[i] = this->extensionHeader_var[i];
    extensionHeader_arraysize = size;
    delete [] this->extensionHeader_var;
    this->extensionHeader_var = extensionHeader_var2;
}

unsigned int IPv6Datagram_Base::getExtensionHeaderArraySize() const
{
    return extensionHeader_arraysize;
}

IPv6ExtensionHeaderPtr& IPv6Datagram_Base::getExtensionHeader(unsigned int k)
{
    if (k>=extensionHeader_arraysize) throw cRuntimeError("Array of size %d indexed by %d", extensionHeader_arraysize, k);
    return extensionHeader_var[k];
}

void IPv6Datagram_Base::setExtensionHeader(unsigned int k, const IPv6ExtensionHeaderPtr& extensionHeader)
{
    if (k>=extensionHeader_arraysize) throw cRuntimeError("Array of size %d indexed by %d", extensionHeader_arraysize, k);
    this->extensionHeader_var[k] = extensionHeader;
}

class IPv6DatagramDescriptor : public cClassDescriptor
{
  public:
    IPv6DatagramDescriptor();
    virtual ~IPv6DatagramDescriptor();

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

Register_ClassDescriptor(IPv6DatagramDescriptor);

IPv6DatagramDescriptor::IPv6DatagramDescriptor() : cClassDescriptor("IPv6Datagram", "cPacket")
{
}

IPv6DatagramDescriptor::~IPv6DatagramDescriptor()
{
}

bool IPv6DatagramDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv6Datagram_Base *>(obj)!=NULL;
}

const char *IPv6DatagramDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv6DatagramDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount(object) : 7;
}

unsigned int IPv6DatagramDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<7) ? fieldTypeFlags[field] : 0;
}

const char *IPv6DatagramDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "srcAddress",
        "destAddress",
        "trafficClass",
        "flowLabel",
        "hopLimit",
        "transportProtocol",
        "extensionHeader",
    };
    return (field>=0 && field<7) ? fieldNames[field] : NULL;
}

int IPv6DatagramDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcAddress")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddress")==0) return base+1;
    if (fieldName[0]=='t' && strcmp(fieldName, "trafficClass")==0) return base+2;
    if (fieldName[0]=='f' && strcmp(fieldName, "flowLabel")==0) return base+3;
    if (fieldName[0]=='h' && strcmp(fieldName, "hopLimit")==0) return base+4;
    if (fieldName[0]=='t' && strcmp(fieldName, "transportProtocol")==0) return base+5;
    if (fieldName[0]=='e' && strcmp(fieldName, "extensionHeader")==0) return base+6;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv6DatagramDescriptor::getFieldTypeString(void *object, int field) const
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
        "unsigned int",
        "unsigned int",
        "short",
        "int",
        "IPv6ExtensionHeaderPtr",
    };
    return (field>=0 && field<7) ? fieldTypeStrings[field] : NULL;
}

const char *IPv6DatagramDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 5:
            if (!strcmp(propertyname,"enum")) return "IPProtocolId";
            return NULL;
        default: return NULL;
    }
}

int IPv6DatagramDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv6Datagram_Base *pp = (IPv6Datagram_Base *)object; (void)pp;
    switch (field) {
        case 6: return pp->getExtensionHeaderArraySize();
        default: return 0;
    }
}

std::string IPv6DatagramDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6Datagram_Base *pp = (IPv6Datagram_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrcAddress(); return out.str();}
        case 1: {std::stringstream out; out << pp->getDestAddress(); return out.str();}
        case 2: return ulong2string(pp->getTrafficClass());
        case 3: return ulong2string(pp->getFlowLabel());
        case 4: return long2string(pp->getHopLimit());
        case 5: return long2string(pp->getTransportProtocol());
        case 6: {std::stringstream out; out << pp->getExtensionHeader(i); return out.str();}
        default: return "";
    }
}

bool IPv6DatagramDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv6Datagram_Base *pp = (IPv6Datagram_Base *)object; (void)pp;
    switch (field) {
        case 2: pp->setTrafficClass(string2ulong(value)); return true;
        case 3: pp->setFlowLabel(string2ulong(value)); return true;
        case 4: pp->setHopLimit(string2long(value)); return true;
        case 5: pp->setTransportProtocol(string2long(value)); return true;
        default: return false;
    }
}

const char *IPv6DatagramDescriptor::getFieldStructName(void *object, int field) const
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
        NULL,
        NULL,
        NULL,
        NULL,
        "IPv6ExtensionHeaderPtr",
    };
    return (field>=0 && field<7) ? fieldStructNames[field] : NULL;
}

void *IPv6DatagramDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6Datagram_Base *pp = (IPv6Datagram_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrcAddress()); break;
        case 1: return (void *)(&pp->getDestAddress()); break;
        case 6: return (void *)(&pp->getExtensionHeader(i)); break;
        default: return NULL;
    }
}

IPv6ExtensionHeader_Base::IPv6ExtensionHeader_Base() : cObject()
{
}

IPv6ExtensionHeader_Base::IPv6ExtensionHeader_Base(const IPv6ExtensionHeader_Base& other) : cObject(other)
{
    copy(other);
}

IPv6ExtensionHeader_Base::~IPv6ExtensionHeader_Base()
{
}

IPv6ExtensionHeader_Base& IPv6ExtensionHeader_Base::operator=(const IPv6ExtensionHeader_Base& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    copy(other);
    return *this;
}

void IPv6ExtensionHeader_Base::copy(const IPv6ExtensionHeader_Base& other)
{
}

void IPv6ExtensionHeader_Base::parsimPack(cCommBuffer *b)
{
}

void IPv6ExtensionHeader_Base::parsimUnpack(cCommBuffer *b)
{
}

class IPv6ExtensionHeaderDescriptor : public cClassDescriptor
{
  public:
    IPv6ExtensionHeaderDescriptor();
    virtual ~IPv6ExtensionHeaderDescriptor();

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

Register_ClassDescriptor(IPv6ExtensionHeaderDescriptor);

IPv6ExtensionHeaderDescriptor::IPv6ExtensionHeaderDescriptor() : cClassDescriptor("IPv6ExtensionHeader", "cObject")
{
}

IPv6ExtensionHeaderDescriptor::~IPv6ExtensionHeaderDescriptor()
{
}

bool IPv6ExtensionHeaderDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv6ExtensionHeader_Base *>(obj)!=NULL;
}

const char *IPv6ExtensionHeaderDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv6ExtensionHeaderDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int IPv6ExtensionHeaderDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *IPv6ExtensionHeaderDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int IPv6ExtensionHeaderDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv6ExtensionHeaderDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *IPv6ExtensionHeaderDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPv6ExtensionHeaderDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv6ExtensionHeader_Base *pp = (IPv6ExtensionHeader_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IPv6ExtensionHeaderDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6ExtensionHeader_Base *pp = (IPv6ExtensionHeader_Base *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool IPv6ExtensionHeaderDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv6ExtensionHeader_Base *pp = (IPv6ExtensionHeader_Base *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *IPv6ExtensionHeaderDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *IPv6ExtensionHeaderDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6ExtensionHeader_Base *pp = (IPv6ExtensionHeader_Base *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


