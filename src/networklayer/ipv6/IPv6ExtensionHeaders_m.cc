//
// Generated file, do not edit! Created by opp_msgc 4.3 from networklayer/ipv6/IPv6ExtensionHeaders.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "IPv6ExtensionHeaders_m.h"

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




IPv6HopByHopOptionsHeader::IPv6HopByHopOptionsHeader() : IPv6ExtensionHeader()
{
}

IPv6HopByHopOptionsHeader::IPv6HopByHopOptionsHeader(const IPv6HopByHopOptionsHeader& other) : IPv6ExtensionHeader(other)
{
    copy(other);
}

IPv6HopByHopOptionsHeader::~IPv6HopByHopOptionsHeader()
{
}

IPv6HopByHopOptionsHeader& IPv6HopByHopOptionsHeader::operator=(const IPv6HopByHopOptionsHeader& other)
{
    if (this==&other) return *this;
    IPv6ExtensionHeader::operator=(other);
    copy(other);
    return *this;
}

void IPv6HopByHopOptionsHeader::copy(const IPv6HopByHopOptionsHeader& other)
{
}

void IPv6HopByHopOptionsHeader::parsimPack(cCommBuffer *b)
{
    doPacking(b,(IPv6ExtensionHeader&)*this);
}

void IPv6HopByHopOptionsHeader::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(IPv6ExtensionHeader&)*this);
}

class IPv6HopByHopOptionsHeaderDescriptor : public cClassDescriptor
{
  public:
    IPv6HopByHopOptionsHeaderDescriptor();
    virtual ~IPv6HopByHopOptionsHeaderDescriptor();

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

Register_ClassDescriptor(IPv6HopByHopOptionsHeaderDescriptor);

IPv6HopByHopOptionsHeaderDescriptor::IPv6HopByHopOptionsHeaderDescriptor() : cClassDescriptor("IPv6HopByHopOptionsHeader", "IPv6ExtensionHeader")
{
}

IPv6HopByHopOptionsHeaderDescriptor::~IPv6HopByHopOptionsHeaderDescriptor()
{
}

bool IPv6HopByHopOptionsHeaderDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv6HopByHopOptionsHeader *>(obj)!=NULL;
}

const char *IPv6HopByHopOptionsHeaderDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv6HopByHopOptionsHeaderDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int IPv6HopByHopOptionsHeaderDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *IPv6HopByHopOptionsHeaderDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int IPv6HopByHopOptionsHeaderDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv6HopByHopOptionsHeaderDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *IPv6HopByHopOptionsHeaderDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPv6HopByHopOptionsHeaderDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv6HopByHopOptionsHeader *pp = (IPv6HopByHopOptionsHeader *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IPv6HopByHopOptionsHeaderDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6HopByHopOptionsHeader *pp = (IPv6HopByHopOptionsHeader *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool IPv6HopByHopOptionsHeaderDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv6HopByHopOptionsHeader *pp = (IPv6HopByHopOptionsHeader *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *IPv6HopByHopOptionsHeaderDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *IPv6HopByHopOptionsHeaderDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6HopByHopOptionsHeader *pp = (IPv6HopByHopOptionsHeader *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

IPv6RoutingHeader::IPv6RoutingHeader() : IPv6ExtensionHeader()
{
    this->routingType_var = 0;
    this->segmentsLeft_var = 0;
    address_arraysize = 0;
    this->address_var = 0;
}

IPv6RoutingHeader::IPv6RoutingHeader(const IPv6RoutingHeader& other) : IPv6ExtensionHeader(other)
{
    address_arraysize = 0;
    this->address_var = 0;
    copy(other);
}

IPv6RoutingHeader::~IPv6RoutingHeader()
{
    delete [] address_var;
}

IPv6RoutingHeader& IPv6RoutingHeader::operator=(const IPv6RoutingHeader& other)
{
    if (this==&other) return *this;
    IPv6ExtensionHeader::operator=(other);
    copy(other);
    return *this;
}

void IPv6RoutingHeader::copy(const IPv6RoutingHeader& other)
{
    this->routingType_var = other.routingType_var;
    this->segmentsLeft_var = other.segmentsLeft_var;
    delete [] this->address_var;
    this->address_var = (other.address_arraysize==0) ? NULL : new IPv6Address[other.address_arraysize];
    address_arraysize = other.address_arraysize;
    for (unsigned int i=0; i<address_arraysize; i++)
        this->address_var[i] = other.address_var[i];
}

void IPv6RoutingHeader::parsimPack(cCommBuffer *b)
{
    doPacking(b,(IPv6ExtensionHeader&)*this);
    doPacking(b,this->routingType_var);
    doPacking(b,this->segmentsLeft_var);
    b->pack(address_arraysize);
    doPacking(b,this->address_var,address_arraysize);
}

void IPv6RoutingHeader::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(IPv6ExtensionHeader&)*this);
    doUnpacking(b,this->routingType_var);
    doUnpacking(b,this->segmentsLeft_var);
    delete [] this->address_var;
    b->unpack(address_arraysize);
    if (address_arraysize==0) {
        this->address_var = 0;
    } else {
        this->address_var = new IPv6Address[address_arraysize];
        doUnpacking(b,this->address_var,address_arraysize);
    }
}

unsigned char IPv6RoutingHeader::getRoutingType() const
{
    return routingType_var;
}

void IPv6RoutingHeader::setRoutingType(unsigned char routingType)
{
    this->routingType_var = routingType;
}

unsigned char IPv6RoutingHeader::getSegmentsLeft() const
{
    return segmentsLeft_var;
}

void IPv6RoutingHeader::setSegmentsLeft(unsigned char segmentsLeft)
{
    this->segmentsLeft_var = segmentsLeft;
}

void IPv6RoutingHeader::setAddressArraySize(unsigned int size)
{
    IPv6Address *address_var2 = (size==0) ? NULL : new IPv6Address[size];
    unsigned int sz = address_arraysize < size ? address_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        address_var2[i] = this->address_var[i];
    address_arraysize = size;
    delete [] this->address_var;
    this->address_var = address_var2;
}

unsigned int IPv6RoutingHeader::getAddressArraySize() const
{
    return address_arraysize;
}

IPv6Address& IPv6RoutingHeader::getAddress(unsigned int k)
{
    if (k>=address_arraysize) throw cRuntimeError("Array of size %d indexed by %d", address_arraysize, k);
    return address_var[k];
}

void IPv6RoutingHeader::setAddress(unsigned int k, const IPv6Address& address)
{
    if (k>=address_arraysize) throw cRuntimeError("Array of size %d indexed by %d", address_arraysize, k);
    this->address_var[k] = address;
}

class IPv6RoutingHeaderDescriptor : public cClassDescriptor
{
  public:
    IPv6RoutingHeaderDescriptor();
    virtual ~IPv6RoutingHeaderDescriptor();

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

Register_ClassDescriptor(IPv6RoutingHeaderDescriptor);

IPv6RoutingHeaderDescriptor::IPv6RoutingHeaderDescriptor() : cClassDescriptor("IPv6RoutingHeader", "IPv6ExtensionHeader")
{
}

IPv6RoutingHeaderDescriptor::~IPv6RoutingHeaderDescriptor()
{
}

bool IPv6RoutingHeaderDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv6RoutingHeader *>(obj)!=NULL;
}

const char *IPv6RoutingHeaderDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv6RoutingHeaderDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int IPv6RoutingHeaderDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *IPv6RoutingHeaderDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "routingType",
        "segmentsLeft",
        "address",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int IPv6RoutingHeaderDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "routingType")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "segmentsLeft")==0) return base+1;
    if (fieldName[0]=='a' && strcmp(fieldName, "address")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv6RoutingHeaderDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned char",
        "unsigned char",
        "IPv6Address",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *IPv6RoutingHeaderDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPv6RoutingHeaderDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv6RoutingHeader *pp = (IPv6RoutingHeader *)object; (void)pp;
    switch (field) {
        case 2: return pp->getAddressArraySize();
        default: return 0;
    }
}

std::string IPv6RoutingHeaderDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6RoutingHeader *pp = (IPv6RoutingHeader *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getRoutingType());
        case 1: return ulong2string(pp->getSegmentsLeft());
        case 2: {std::stringstream out; out << pp->getAddress(i); return out.str();}
        default: return "";
    }
}

bool IPv6RoutingHeaderDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv6RoutingHeader *pp = (IPv6RoutingHeader *)object; (void)pp;
    switch (field) {
        case 0: pp->setRoutingType(string2ulong(value)); return true;
        case 1: pp->setSegmentsLeft(string2ulong(value)); return true;
        default: return false;
    }
}

const char *IPv6RoutingHeaderDescriptor::getFieldStructName(void *object, int field) const
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
        "IPv6Address",
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *IPv6RoutingHeaderDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6RoutingHeader *pp = (IPv6RoutingHeader *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->getAddress(i)); break;
        default: return NULL;
    }
}

IPv6FragmentHeader::IPv6FragmentHeader() : IPv6ExtensionHeader()
{
    this->fragmentOffset_var = 0;
    this->identification_var = 0;
    this->moreFragments_var = 0;
}

IPv6FragmentHeader::IPv6FragmentHeader(const IPv6FragmentHeader& other) : IPv6ExtensionHeader(other)
{
    copy(other);
}

IPv6FragmentHeader::~IPv6FragmentHeader()
{
}

IPv6FragmentHeader& IPv6FragmentHeader::operator=(const IPv6FragmentHeader& other)
{
    if (this==&other) return *this;
    IPv6ExtensionHeader::operator=(other);
    copy(other);
    return *this;
}

void IPv6FragmentHeader::copy(const IPv6FragmentHeader& other)
{
    this->fragmentOffset_var = other.fragmentOffset_var;
    this->identification_var = other.identification_var;
    this->moreFragments_var = other.moreFragments_var;
}

void IPv6FragmentHeader::parsimPack(cCommBuffer *b)
{
    doPacking(b,(IPv6ExtensionHeader&)*this);
    doPacking(b,this->fragmentOffset_var);
    doPacking(b,this->identification_var);
    doPacking(b,this->moreFragments_var);
}

void IPv6FragmentHeader::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(IPv6ExtensionHeader&)*this);
    doUnpacking(b,this->fragmentOffset_var);
    doUnpacking(b,this->identification_var);
    doUnpacking(b,this->moreFragments_var);
}

unsigned short IPv6FragmentHeader::getFragmentOffset() const
{
    return fragmentOffset_var;
}

void IPv6FragmentHeader::setFragmentOffset(unsigned short fragmentOffset)
{
    this->fragmentOffset_var = fragmentOffset;
}

unsigned int IPv6FragmentHeader::getIdentification() const
{
    return identification_var;
}

void IPv6FragmentHeader::setIdentification(unsigned int identification)
{
    this->identification_var = identification;
}

bool IPv6FragmentHeader::getMoreFragments() const
{
    return moreFragments_var;
}

void IPv6FragmentHeader::setMoreFragments(bool moreFragments)
{
    this->moreFragments_var = moreFragments;
}

class IPv6FragmentHeaderDescriptor : public cClassDescriptor
{
  public:
    IPv6FragmentHeaderDescriptor();
    virtual ~IPv6FragmentHeaderDescriptor();

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

Register_ClassDescriptor(IPv6FragmentHeaderDescriptor);

IPv6FragmentHeaderDescriptor::IPv6FragmentHeaderDescriptor() : cClassDescriptor("IPv6FragmentHeader", "IPv6ExtensionHeader")
{
}

IPv6FragmentHeaderDescriptor::~IPv6FragmentHeaderDescriptor()
{
}

bool IPv6FragmentHeaderDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv6FragmentHeader *>(obj)!=NULL;
}

const char *IPv6FragmentHeaderDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv6FragmentHeaderDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int IPv6FragmentHeaderDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *IPv6FragmentHeaderDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "fragmentOffset",
        "identification",
        "moreFragments",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int IPv6FragmentHeaderDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='f' && strcmp(fieldName, "fragmentOffset")==0) return base+0;
    if (fieldName[0]=='i' && strcmp(fieldName, "identification")==0) return base+1;
    if (fieldName[0]=='m' && strcmp(fieldName, "moreFragments")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv6FragmentHeaderDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned short",
        "unsigned int",
        "bool",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *IPv6FragmentHeaderDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPv6FragmentHeaderDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv6FragmentHeader *pp = (IPv6FragmentHeader *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IPv6FragmentHeaderDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6FragmentHeader *pp = (IPv6FragmentHeader *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getFragmentOffset());
        case 1: return ulong2string(pp->getIdentification());
        case 2: return bool2string(pp->getMoreFragments());
        default: return "";
    }
}

bool IPv6FragmentHeaderDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv6FragmentHeader *pp = (IPv6FragmentHeader *)object; (void)pp;
    switch (field) {
        case 0: pp->setFragmentOffset(string2ulong(value)); return true;
        case 1: pp->setIdentification(string2ulong(value)); return true;
        case 2: pp->setMoreFragments(string2bool(value)); return true;
        default: return false;
    }
}

const char *IPv6FragmentHeaderDescriptor::getFieldStructName(void *object, int field) const
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
    };
    return (field>=0 && field<3) ? fieldStructNames[field] : NULL;
}

void *IPv6FragmentHeaderDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6FragmentHeader *pp = (IPv6FragmentHeader *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

IPv6DestinationOptionsHeader::IPv6DestinationOptionsHeader() : IPv6ExtensionHeader()
{
}

IPv6DestinationOptionsHeader::IPv6DestinationOptionsHeader(const IPv6DestinationOptionsHeader& other) : IPv6ExtensionHeader(other)
{
    copy(other);
}

IPv6DestinationOptionsHeader::~IPv6DestinationOptionsHeader()
{
}

IPv6DestinationOptionsHeader& IPv6DestinationOptionsHeader::operator=(const IPv6DestinationOptionsHeader& other)
{
    if (this==&other) return *this;
    IPv6ExtensionHeader::operator=(other);
    copy(other);
    return *this;
}

void IPv6DestinationOptionsHeader::copy(const IPv6DestinationOptionsHeader& other)
{
}

void IPv6DestinationOptionsHeader::parsimPack(cCommBuffer *b)
{
    doPacking(b,(IPv6ExtensionHeader&)*this);
}

void IPv6DestinationOptionsHeader::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(IPv6ExtensionHeader&)*this);
}

class IPv6DestinationOptionsHeaderDescriptor : public cClassDescriptor
{
  public:
    IPv6DestinationOptionsHeaderDescriptor();
    virtual ~IPv6DestinationOptionsHeaderDescriptor();

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

Register_ClassDescriptor(IPv6DestinationOptionsHeaderDescriptor);

IPv6DestinationOptionsHeaderDescriptor::IPv6DestinationOptionsHeaderDescriptor() : cClassDescriptor("IPv6DestinationOptionsHeader", "IPv6ExtensionHeader")
{
}

IPv6DestinationOptionsHeaderDescriptor::~IPv6DestinationOptionsHeaderDescriptor()
{
}

bool IPv6DestinationOptionsHeaderDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv6DestinationOptionsHeader *>(obj)!=NULL;
}

const char *IPv6DestinationOptionsHeaderDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv6DestinationOptionsHeaderDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int IPv6DestinationOptionsHeaderDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *IPv6DestinationOptionsHeaderDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int IPv6DestinationOptionsHeaderDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv6DestinationOptionsHeaderDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *IPv6DestinationOptionsHeaderDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPv6DestinationOptionsHeaderDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv6DestinationOptionsHeader *pp = (IPv6DestinationOptionsHeader *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IPv6DestinationOptionsHeaderDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6DestinationOptionsHeader *pp = (IPv6DestinationOptionsHeader *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool IPv6DestinationOptionsHeaderDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv6DestinationOptionsHeader *pp = (IPv6DestinationOptionsHeader *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *IPv6DestinationOptionsHeaderDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *IPv6DestinationOptionsHeaderDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6DestinationOptionsHeader *pp = (IPv6DestinationOptionsHeader *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

IPv6AuthenticationHeader::IPv6AuthenticationHeader() : IPv6ExtensionHeader()
{
}

IPv6AuthenticationHeader::IPv6AuthenticationHeader(const IPv6AuthenticationHeader& other) : IPv6ExtensionHeader(other)
{
    copy(other);
}

IPv6AuthenticationHeader::~IPv6AuthenticationHeader()
{
}

IPv6AuthenticationHeader& IPv6AuthenticationHeader::operator=(const IPv6AuthenticationHeader& other)
{
    if (this==&other) return *this;
    IPv6ExtensionHeader::operator=(other);
    copy(other);
    return *this;
}

void IPv6AuthenticationHeader::copy(const IPv6AuthenticationHeader& other)
{
}

void IPv6AuthenticationHeader::parsimPack(cCommBuffer *b)
{
    doPacking(b,(IPv6ExtensionHeader&)*this);
}

void IPv6AuthenticationHeader::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(IPv6ExtensionHeader&)*this);
}

class IPv6AuthenticationHeaderDescriptor : public cClassDescriptor
{
  public:
    IPv6AuthenticationHeaderDescriptor();
    virtual ~IPv6AuthenticationHeaderDescriptor();

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

Register_ClassDescriptor(IPv6AuthenticationHeaderDescriptor);

IPv6AuthenticationHeaderDescriptor::IPv6AuthenticationHeaderDescriptor() : cClassDescriptor("IPv6AuthenticationHeader", "IPv6ExtensionHeader")
{
}

IPv6AuthenticationHeaderDescriptor::~IPv6AuthenticationHeaderDescriptor()
{
}

bool IPv6AuthenticationHeaderDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv6AuthenticationHeader *>(obj)!=NULL;
}

const char *IPv6AuthenticationHeaderDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv6AuthenticationHeaderDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int IPv6AuthenticationHeaderDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *IPv6AuthenticationHeaderDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int IPv6AuthenticationHeaderDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv6AuthenticationHeaderDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *IPv6AuthenticationHeaderDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPv6AuthenticationHeaderDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv6AuthenticationHeader *pp = (IPv6AuthenticationHeader *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IPv6AuthenticationHeaderDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6AuthenticationHeader *pp = (IPv6AuthenticationHeader *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool IPv6AuthenticationHeaderDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv6AuthenticationHeader *pp = (IPv6AuthenticationHeader *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *IPv6AuthenticationHeaderDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *IPv6AuthenticationHeaderDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6AuthenticationHeader *pp = (IPv6AuthenticationHeader *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

IPv6EncapsulatingSecurityPayloadHeader::IPv6EncapsulatingSecurityPayloadHeader() : IPv6ExtensionHeader()
{
}

IPv6EncapsulatingSecurityPayloadHeader::IPv6EncapsulatingSecurityPayloadHeader(const IPv6EncapsulatingSecurityPayloadHeader& other) : IPv6ExtensionHeader(other)
{
    copy(other);
}

IPv6EncapsulatingSecurityPayloadHeader::~IPv6EncapsulatingSecurityPayloadHeader()
{
}

IPv6EncapsulatingSecurityPayloadHeader& IPv6EncapsulatingSecurityPayloadHeader::operator=(const IPv6EncapsulatingSecurityPayloadHeader& other)
{
    if (this==&other) return *this;
    IPv6ExtensionHeader::operator=(other);
    copy(other);
    return *this;
}

void IPv6EncapsulatingSecurityPayloadHeader::copy(const IPv6EncapsulatingSecurityPayloadHeader& other)
{
}

void IPv6EncapsulatingSecurityPayloadHeader::parsimPack(cCommBuffer *b)
{
    doPacking(b,(IPv6ExtensionHeader&)*this);
}

void IPv6EncapsulatingSecurityPayloadHeader::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(IPv6ExtensionHeader&)*this);
}

class IPv6EncapsulatingSecurityPayloadHeaderDescriptor : public cClassDescriptor
{
  public:
    IPv6EncapsulatingSecurityPayloadHeaderDescriptor();
    virtual ~IPv6EncapsulatingSecurityPayloadHeaderDescriptor();

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

Register_ClassDescriptor(IPv6EncapsulatingSecurityPayloadHeaderDescriptor);

IPv6EncapsulatingSecurityPayloadHeaderDescriptor::IPv6EncapsulatingSecurityPayloadHeaderDescriptor() : cClassDescriptor("IPv6EncapsulatingSecurityPayloadHeader", "IPv6ExtensionHeader")
{
}

IPv6EncapsulatingSecurityPayloadHeaderDescriptor::~IPv6EncapsulatingSecurityPayloadHeaderDescriptor()
{
}

bool IPv6EncapsulatingSecurityPayloadHeaderDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv6EncapsulatingSecurityPayloadHeader *>(obj)!=NULL;
}

const char *IPv6EncapsulatingSecurityPayloadHeaderDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv6EncapsulatingSecurityPayloadHeaderDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int IPv6EncapsulatingSecurityPayloadHeaderDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *IPv6EncapsulatingSecurityPayloadHeaderDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int IPv6EncapsulatingSecurityPayloadHeaderDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv6EncapsulatingSecurityPayloadHeaderDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *IPv6EncapsulatingSecurityPayloadHeaderDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPv6EncapsulatingSecurityPayloadHeaderDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv6EncapsulatingSecurityPayloadHeader *pp = (IPv6EncapsulatingSecurityPayloadHeader *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IPv6EncapsulatingSecurityPayloadHeaderDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6EncapsulatingSecurityPayloadHeader *pp = (IPv6EncapsulatingSecurityPayloadHeader *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool IPv6EncapsulatingSecurityPayloadHeaderDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv6EncapsulatingSecurityPayloadHeader *pp = (IPv6EncapsulatingSecurityPayloadHeader *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *IPv6EncapsulatingSecurityPayloadHeaderDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *IPv6EncapsulatingSecurityPayloadHeaderDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6EncapsulatingSecurityPayloadHeader *pp = (IPv6EncapsulatingSecurityPayloadHeader *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


