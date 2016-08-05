//
// Automatically generated by ipdlc.
// Edit at your own risk
//


#include "mozilla/gfx/PGPU.h"
#include "mozilla/gfx/PGPUChild.h"

#include "stub.h"


//-----------------------------------------------------------------------------
// Method definitions for the IPDL type |union GfxPrefValue|
//
namespace mozilla {

namespace ipc {
void
LogicError(const char* aMsg)
{
  NS_RUNTIMEABORT(aMsg);
}
} //namespace ipc

namespace gfx {

auto PGPUChild::SendUpdatePref(const GfxPrefSetting& pref) -> bool
{
	STUB("PGPUChild::SendUpdatePref");
}


auto GfxPrefValue::MaybeDestroy(Type aNewType) -> bool
{
    if ((mType) == (T__None)) {
        return true;
    }
    if ((mType) == (aNewType)) {
        return false;
    }
    switch (mType) {
    case Tbool:
        {
            (ptr_bool())->~bool__tdef();
            break;
        }
    case Tint32_t:
        {
            (ptr_int32_t())->~int32_t__tdef();
            break;
        }
    case Tuint32_t:
        {
            (ptr_uint32_t())->~uint32_t__tdef();
            break;
        }
    case Tfloat:
        {
            (ptr_float())->~float__tdef();
            break;
        }
    default:
        {
            mozilla::ipc::LogicError("not reached");
            break;
        }
    }
    return true;
}

MOZ_IMPLICIT GfxPrefValue::GfxPrefValue(const bool& aOther)
{
    new (ptr_bool()) bool(aOther);
    mType = Tbool;
}

MOZ_IMPLICIT GfxPrefValue::GfxPrefValue(const int32_t& aOther)
{
    new (ptr_int32_t()) int32_t(aOther);
    mType = Tint32_t;
}

MOZ_IMPLICIT GfxPrefValue::GfxPrefValue(const uint32_t& aOther)
{
    new (ptr_uint32_t()) uint32_t(aOther);
    mType = Tuint32_t;
}

MOZ_IMPLICIT GfxPrefValue::GfxPrefValue(const float& aOther)
{
    new (ptr_float()) float(aOther);
    mType = Tfloat;
}

MOZ_IMPLICIT GfxPrefValue::GfxPrefValue(const GfxPrefValue& aOther)
{
    (aOther).AssertSanity();
    switch ((aOther).type()) {
    case Tbool:
        {
            new (ptr_bool()) bool((aOther).get_bool());
            break;
        }
    case Tint32_t:
        {
            new (ptr_int32_t()) int32_t((aOther).get_int32_t());
            break;
        }
    case Tuint32_t:
        {
            new (ptr_uint32_t()) uint32_t((aOther).get_uint32_t());
            break;
        }
    case Tfloat:
        {
            new (ptr_float()) float((aOther).get_float());
            break;
        }
    case T__None:
        {
            break;
        }
    default:
        {
            mozilla::ipc::LogicError("unreached");
            return;
        }
    }
    mType = (aOther).type();
}

GfxPrefValue::~GfxPrefValue()
{
    MaybeDestroy(T__None);
}

auto GfxPrefValue::operator=(const bool& aRhs) -> GfxPrefValue&
{
    if (MaybeDestroy(Tbool)) {
        new (ptr_bool()) bool;
    }
    (*(ptr_bool())) = aRhs;
    mType = Tbool;
    return (*(this));
}

auto GfxPrefValue::operator=(const int32_t& aRhs) -> GfxPrefValue&
{
    if (MaybeDestroy(Tint32_t)) {
        new (ptr_int32_t()) int32_t;
    }
    (*(ptr_int32_t())) = aRhs;
    mType = Tint32_t;
    return (*(this));
}

auto GfxPrefValue::operator=(const uint32_t& aRhs) -> GfxPrefValue&
{
    if (MaybeDestroy(Tuint32_t)) {
        new (ptr_uint32_t()) uint32_t;
    }
    (*(ptr_uint32_t())) = aRhs;
    mType = Tuint32_t;
    return (*(this));
}

auto GfxPrefValue::operator=(const float& aRhs) -> GfxPrefValue&
{
    if (MaybeDestroy(Tfloat)) {
        new (ptr_float()) float;
    }
    (*(ptr_float())) = aRhs;
    mType = Tfloat;
    return (*(this));
}

auto GfxPrefValue::operator=(const GfxPrefValue& aRhs) -> GfxPrefValue&
{
    (aRhs).AssertSanity();
    Type t = (aRhs).type();
    switch (t) {
    case Tbool:
        {
            if (MaybeDestroy(t)) {
                new (ptr_bool()) bool;
            }
            (*(ptr_bool())) = (aRhs).get_bool();
            break;
        }
    case Tint32_t:
        {
            if (MaybeDestroy(t)) {
                new (ptr_int32_t()) int32_t;
            }
            (*(ptr_int32_t())) = (aRhs).get_int32_t();
            break;
        }
    case Tuint32_t:
        {
            if (MaybeDestroy(t)) {
                new (ptr_uint32_t()) uint32_t;
            }
            (*(ptr_uint32_t())) = (aRhs).get_uint32_t();
            break;
        }
    case Tfloat:
        {
            if (MaybeDestroy(t)) {
                new (ptr_float()) float;
            }
            (*(ptr_float())) = (aRhs).get_float();
            break;
        }
    case T__None:
        {
            MaybeDestroy(t);
            break;
        }
    default:
        {
            mozilla::ipc::LogicError("unreached");
            break;
        }
    }
    mType = t;
    return (*(this));
}

auto GfxPrefValue::operator==(const bool& aRhs) const -> bool
{
    return (get_bool()) == (aRhs);
}

auto GfxPrefValue::operator==(const int32_t& aRhs) const -> bool
{
    return (get_int32_t()) == (aRhs);
}

auto GfxPrefValue::operator==(const uint32_t& aRhs) const -> bool
{
    return (get_uint32_t()) == (aRhs);
}

auto GfxPrefValue::operator==(const float& aRhs) const -> bool
{
    return (get_float()) == (aRhs);
}

auto GfxPrefValue::operator==(const GfxPrefValue& aRhs) const -> bool
{
    if ((type()) != ((aRhs).type())) {
        return false;
    }

    switch (type()) {
    case Tbool:
        {
            return (get_bool()) == ((aRhs).get_bool());
        }
    case Tint32_t:
        {
            return (get_int32_t()) == ((aRhs).get_int32_t());
        }
    case Tuint32_t:
        {
            return (get_uint32_t()) == ((aRhs).get_uint32_t());
        }
    case Tfloat:
        {
            return (get_float()) == ((aRhs).get_float());
        }
    default:
        {
            mozilla::ipc::LogicError("unreached");
            return false;
        }
    }
}

} // namespace gfx
} // namespace mozilla

//-----------------------------------------------------------------------------
// Method definitions for the IPDL type |struct GfxPrefSetting|
//
namespace mozilla {
namespace gfx {
MOZ_IMPLICIT GfxPrefSetting::GfxPrefSetting() :
    index_()
{
    Init();
}

GfxPrefSetting::~GfxPrefSetting()
{
}

auto GfxPrefSetting::operator==(const GfxPrefSetting& _o) const -> bool
{
    if ((!((index()) == ((_o).index())))) {
        return false;
    }
    if ((!((value()) == ((_o).value())))) {
        return false;
    }
    return true;
}

auto GfxPrefSetting::Init() -> void
{
}

auto GfxPrefSetting::Assign(
        const int32_t& _index,
        const GfxPrefValue& _value) -> void
{
    index_ = _index;
    value_ = _value;
}

} // namespace gfx
} // namespace mozilla
