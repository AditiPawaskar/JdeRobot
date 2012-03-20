// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `cloudPoints.ice'

#include "cloudPoints.h"
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
#include <Ice/BasicStream.h>
#include <IceUtil/Iterator.h>
#include <IceUtil/ScopedArray.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 303
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

static const ::std::string __jderobot__CloudPointsInterface__getKinectData_name = "getKinectData";

::Ice::Object* IceInternal::upCast(::jderobot::CloudPointsData* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::jderobot::CloudPointsData* p) { return p; }

::Ice::Object* IceInternal::upCast(::jderobot::CloudPointsInterface* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::jderobot::CloudPointsInterface* p) { return p; }

void
jderobot::__read(::IceInternal::BasicStream* __is, ::jderobot::CloudPointsDataPrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::jderobot::CloudPointsData;
        v->__copyFrom(proxy);
    }
}

void
jderobot::__read(::IceInternal::BasicStream* __is, ::jderobot::CloudPointsInterfacePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::jderobot::CloudPointsInterface;
        v->__copyFrom(proxy);
    }
}

bool
jderobot::Punto3DRGB::operator==(const Punto3DRGB& __rhs) const
{
    if(this == &__rhs)
    {
        return true;
    }
    if(x != __rhs.x)
    {
        return false;
    }
    if(y != __rhs.y)
    {
        return false;
    }
    if(z != __rhs.z)
    {
        return false;
    }
    if(r != __rhs.r)
    {
        return false;
    }
    if(g != __rhs.g)
    {
        return false;
    }
    if(b != __rhs.b)
    {
        return false;
    }
    return true;
}

bool
jderobot::Punto3DRGB::operator<(const Punto3DRGB& __rhs) const
{
    if(this == &__rhs)
    {
        return false;
    }
    if(x < __rhs.x)
    {
        return true;
    }
    else if(__rhs.x < x)
    {
        return false;
    }
    if(y < __rhs.y)
    {
        return true;
    }
    else if(__rhs.y < y)
    {
        return false;
    }
    if(z < __rhs.z)
    {
        return true;
    }
    else if(__rhs.z < z)
    {
        return false;
    }
    if(r < __rhs.r)
    {
        return true;
    }
    else if(__rhs.r < r)
    {
        return false;
    }
    if(g < __rhs.g)
    {
        return true;
    }
    else if(__rhs.g < g)
    {
        return false;
    }
    if(b < __rhs.b)
    {
        return true;
    }
    else if(__rhs.b < b)
    {
        return false;
    }
    return false;
}

void
jderobot::Punto3DRGB::__write(::IceInternal::BasicStream* __os) const
{
    __os->write(x);
    __os->write(y);
    __os->write(z);
    __os->write(r);
    __os->write(g);
    __os->write(b);
}

void
jderobot::Punto3DRGB::__read(::IceInternal::BasicStream* __is)
{
    __is->read(x);
    __is->read(y);
    __is->read(z);
    __is->read(r);
    __is->read(g);
    __is->read(b);
}

void
jderobot::__writeCloudPoints(::IceInternal::BasicStream* __os, const ::jderobot::Punto3DRGB* begin, const ::jderobot::Punto3DRGB* end)
{
    ::Ice::Int size = static_cast< ::Ice::Int>(end - begin);
    __os->writeSize(size);
    for(int i = 0; i < size; ++i)
    {
        begin[i].__write(__os);
    }
}

void
jderobot::__readCloudPoints(::IceInternal::BasicStream* __is, ::jderobot::CloudPoints& v)
{
    ::Ice::Int sz;
    __is->readSize(sz);
    __is->checkFixedSeq(sz, 24);
    v.resize(sz);
    for(int i = 0; i < sz; ++i)
    {
        v[i].__read(__is);
    }
}

const ::std::string&
IceProxy::jderobot::CloudPointsData::ice_staticId()
{
    return ::jderobot::CloudPointsData::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::jderobot::CloudPointsData::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::jderobot::CloudPointsData);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::jderobot::CloudPointsData::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::jderobot::CloudPointsData);
}

::IceProxy::Ice::Object*
IceProxy::jderobot::CloudPointsData::__newInstance() const
{
    return new CloudPointsData;
}

::jderobot::CloudPointsDataPtr
IceProxy::jderobot::CloudPointsInterface::getKinectData(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
#if defined(__BCPLUSPLUS__) && (__BCPLUSPLUS__ >= 0x0600) // C++Builder 2009 compiler bug
            IceUtil::DummyBCC dummy;
#endif
            __checkTwowayOnly(__jderobot__CloudPointsInterface__getKinectData_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::jderobot::CloudPointsInterface* __del = dynamic_cast< ::IceDelegate::jderobot::CloudPointsInterface*>(__delBase.get());
            return __del->getKinectData(__ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapperRelaxed(__delBase, __ex, 0, __cnt);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

const ::std::string&
IceProxy::jderobot::CloudPointsInterface::ice_staticId()
{
    return ::jderobot::CloudPointsInterface::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::jderobot::CloudPointsInterface::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::jderobot::CloudPointsInterface);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::jderobot::CloudPointsInterface::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::jderobot::CloudPointsInterface);
}

::IceProxy::Ice::Object*
IceProxy::jderobot::CloudPointsInterface::__newInstance() const
{
    return new CloudPointsInterface;
}

::jderobot::CloudPointsDataPtr
IceDelegateM::jderobot::CloudPointsInterface::getKinectData(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __jderobot__CloudPointsInterface__getKinectData_name, ::Ice::Idempotent, __context);
    bool __ok = __og.invoke();
    ::jderobot::CloudPointsDataPtr __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(::jderobot::__patch__CloudPointsDataPtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::jderobot::CloudPointsDataPtr
IceDelegateD::jderobot::CloudPointsInterface::getKinectData(const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::jderobot::CloudPointsDataPtr& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::jderobot::CloudPointsInterface* servant = dynamic_cast< ::jderobot::CloudPointsInterface*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getKinectData(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::jderobot::CloudPointsDataPtr& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __jderobot__CloudPointsInterface__getKinectData_name, ::Ice::Idempotent, __context);
    ::jderobot::CloudPointsDataPtr __result;
    try
    {
        _DirectI __direct(__result, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

jderobot::CloudPointsData::CloudPointsData(const ::jderobot::CloudPoints& __ice_points) :
    points(__ice_points)
{
}

::Ice::ObjectPtr
jderobot::CloudPointsData::ice_clone() const
{
    ::jderobot::CloudPointsDataPtr __p = new ::jderobot::CloudPointsData(*this);
    return __p;
}

static const ::std::string __jderobot__CloudPointsData_ids[2] =
{
    "::Ice::Object",
    "::jderobot::CloudPointsData"
};

bool
jderobot::CloudPointsData::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__jderobot__CloudPointsData_ids, __jderobot__CloudPointsData_ids + 2, _s);
}

::std::vector< ::std::string>
jderobot::CloudPointsData::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__jderobot__CloudPointsData_ids[0], &__jderobot__CloudPointsData_ids[2]);
}

const ::std::string&
jderobot::CloudPointsData::ice_id(const ::Ice::Current&) const
{
    return __jderobot__CloudPointsData_ids[1];
}

const ::std::string&
jderobot::CloudPointsData::ice_staticId()
{
    return __jderobot__CloudPointsData_ids[1];
}

void
jderobot::CloudPointsData::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    if(points.size() == 0)
    {
        __os->writeSize(0);
    }
    else
    {
        ::jderobot::__writeCloudPoints(__os, &points[0], &points[0] + points.size());
    }
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
jderobot::CloudPointsData::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    ::jderobot::__readCloudPoints(__is, points);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
jderobot::CloudPointsData::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type jderobot::CloudPointsData was not generated with stream support";
    throw ex;
}

void
jderobot::CloudPointsData::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type jderobot::CloudPointsData was not generated with stream support";
    throw ex;
}

class __F__jderobot__CloudPointsData : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::jderobot::CloudPointsData::ice_staticId());
        return new ::jderobot::CloudPointsData;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__jderobot__CloudPointsData_Ptr = new __F__jderobot__CloudPointsData;

const ::Ice::ObjectFactoryPtr&
jderobot::CloudPointsData::ice_factory()
{
    return __F__jderobot__CloudPointsData_Ptr;
}

class __F__jderobot__CloudPointsData__Init
{
public:

    __F__jderobot__CloudPointsData__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::jderobot::CloudPointsData::ice_staticId(), ::jderobot::CloudPointsData::ice_factory());
    }

    ~__F__jderobot__CloudPointsData__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::jderobot::CloudPointsData::ice_staticId());
    }
};

static __F__jderobot__CloudPointsData__Init __F__jderobot__CloudPointsData__i;

#ifdef __APPLE__
extern "C" { void __F__jderobot__CloudPointsData__initializer() {} }
#endif

void 
jderobot::__patch__CloudPointsDataPtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::jderobot::CloudPointsDataPtr* p = static_cast< ::jderobot::CloudPointsDataPtr*>(__addr);
    assert(p);
    *p = ::jderobot::CloudPointsDataPtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::jderobot::CloudPointsData::ice_staticId(), v->ice_id());
    }
}

bool
jderobot::operator==(const ::jderobot::CloudPointsData& l, const ::jderobot::CloudPointsData& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
jderobot::operator<(const ::jderobot::CloudPointsData& l, const ::jderobot::CloudPointsData& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
jderobot::CloudPointsInterface::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __jderobot__CloudPointsInterface_ids[2] =
{
    "::Ice::Object",
    "::jderobot::CloudPointsInterface"
};

bool
jderobot::CloudPointsInterface::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__jderobot__CloudPointsInterface_ids, __jderobot__CloudPointsInterface_ids + 2, _s);
}

::std::vector< ::std::string>
jderobot::CloudPointsInterface::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__jderobot__CloudPointsInterface_ids[0], &__jderobot__CloudPointsInterface_ids[2]);
}

const ::std::string&
jderobot::CloudPointsInterface::ice_id(const ::Ice::Current&) const
{
    return __jderobot__CloudPointsInterface_ids[1];
}

const ::std::string&
jderobot::CloudPointsInterface::ice_staticId()
{
    return __jderobot__CloudPointsInterface_ids[1];
}

::Ice::DispatchStatus
jderobot::CloudPointsInterface::___getKinectData(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Idempotent, __current.mode);
    __inS.is()->skipEmptyEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::jderobot::CloudPointsDataPtr __ret = getKinectData(__current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

static ::std::string __jderobot__CloudPointsInterface_all[] =
{
    "getKinectData",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
jderobot::CloudPointsInterface::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__jderobot__CloudPointsInterface_all, __jderobot__CloudPointsInterface_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __jderobot__CloudPointsInterface_all)
    {
        case 0:
        {
            return ___getKinectData(in, current);
        }
        case 1:
        {
            return ___ice_id(in, current);
        }
        case 2:
        {
            return ___ice_ids(in, current);
        }
        case 3:
        {
            return ___ice_isA(in, current);
        }
        case 4:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
jderobot::CloudPointsInterface::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
jderobot::CloudPointsInterface::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
jderobot::CloudPointsInterface::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type jderobot::CloudPointsInterface was not generated with stream support";
    throw ex;
}

void
jderobot::CloudPointsInterface::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type jderobot::CloudPointsInterface was not generated with stream support";
    throw ex;
}

void 
jderobot::__patch__CloudPointsInterfacePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::jderobot::CloudPointsInterfacePtr* p = static_cast< ::jderobot::CloudPointsInterfacePtr*>(__addr);
    assert(p);
    *p = ::jderobot::CloudPointsInterfacePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::jderobot::CloudPointsInterface::ice_staticId(), v->ice_id());
    }
}

bool
jderobot::operator==(const ::jderobot::CloudPointsInterface& l, const ::jderobot::CloudPointsInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
jderobot::operator<(const ::jderobot::CloudPointsInterface& l, const ::jderobot::CloudPointsInterface& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}