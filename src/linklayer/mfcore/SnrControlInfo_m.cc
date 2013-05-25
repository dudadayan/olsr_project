//
// Generated file, do not edit! Created by opp_msgc 4.3 from linklayer/mfcore/SnrControlInfo.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "SnrControlInfo_m.h"

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




Register_Class(SnrControlInfo);

SnrControlInfo::SnrControlInfo() : cObject()
{
}

SnrControlInfo::SnrControlInfo(const SnrControlInfo& other) : cObject(other)
{
    copy(other);
}

SnrControlInfo::~SnrControlInfo()
{
}

SnrControlInfo& SnrControlInfo::operator=(const SnrControlInfo& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    copy(other);
    return *this;
}

void SnrControlInfo::copy(const SnrControlInfo& other)
{
    this->snrList_var = other.snrList_var;
}

void SnrControlInfo::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->snrList_var);
}

void SnrControlInfo::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->snrList_var);
}

SnrList& SnrControlInfo::getSnrList()
{
    return snrList_var;
}

void SnrControlInfo::setSnrList(const SnrList& snrList)
{
    this->snrList_var = snrList;
}

class SnrControlInfoDescriptor : public cClassDescriptor
{
  public:
    SnrControlInfoDescriptor();
    virtual ~SnrControlInfoDescriptor();

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

Register_ClassDescriptor(SnrControlInfoDescriptor);

SnrControlInfoDescriptor::SnrControlInfoDescriptor() : cClassDescriptor("SnrControlInfo", "cObject")
{
}

SnrControlInfoDescriptor::~SnrControlInfoDescriptor()
{
}

bool SnrControlInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SnrControlInfo *>(obj)!=NULL;
}

const char *SnrControlInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SnrControlInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int SnrControlInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SnrControlInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "snrList",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int SnrControlInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "snrList")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SnrControlInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "SnrList",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *SnrControlInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SnrControlInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SnrControlInfo *pp = (SnrControlInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SnrControlInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SnrControlInfo *pp = (SnrControlInfo *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSnrList(); return out.str();}
        default: return "";
    }
}

bool SnrControlInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SnrControlInfo *pp = (SnrControlInfo *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *SnrControlInfoDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "SnrList",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *SnrControlInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SnrControlInfo *pp = (SnrControlInfo *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSnrList()); break;
        default: return NULL;
    }
}


