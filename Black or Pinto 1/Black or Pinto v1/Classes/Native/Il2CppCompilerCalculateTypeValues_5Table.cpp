﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Collections.Hashtable
struct Hashtable_t914140952;
// System.Runtime.Remoting.Messaging.CallContextRemotingData
struct CallContextRemotingData_t4153724578;
// System.Collections.ArrayList
struct ArrayList_t121513687;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t796675467;
// System.String[]
struct StringU5BU5D_t301921341;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t2526759748;
// System.String
struct String_t;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t3832408886;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t3986284769;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t3785752133;
// System.Runtime.Remoting.IChannelInfo
struct IChannelInfo_t1032751601;
// System.Runtime.Remoting.IRemotingTypeInfo
struct IRemotingTypeInfo_t396011132;
// System.Runtime.Remoting.IEnvoyInfo
struct IEnvoyInfo_t3041136488;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t997430228;
// System.Runtime.Remoting.ChannelData
struct ChannelData_t2389701058;
// System.Collections.Stack
struct Stack_t1239731402;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2987177946;
// System.Byte[]
struct ByteU5BU5D_t71162679;
// System.Collections.IList
struct IList_t2612419932;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t487089726;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t3589323136;
// System.Object[]
struct ObjectU5BU5D_t4174854926;
// System.Reflection.MethodBase
struct MethodBase_t2043765930;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t1888585080;
// System.Collections.IDictionary
struct IDictionary_t3108492906;
// System.IntPtr[]
struct IntPtrU5BU5D_t1622644272;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t3279026494;
// System.Runtime.Remoting.Messaging.MethodDictionary
struct MethodDictionary_t1024301057;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t962707816;
// System.Reflection.MonoMethod
struct MonoMethod_t;
// System.Exception
struct Exception_t1948673266;
// System.Runtime.Remoting.Contexts.Context
struct Context_t339417115;
// System.MarshalByRefObject
struct MarshalByRefObject_t3363895060;
// System.Runtime.Remoting.Identity
struct Identity_t3462146499;
// System.Collections.IEnumerator
struct IEnumerator_t2209282711;
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct MethodReturnDictionary_t144326629;
// System.Runtime.Remoting.Messaging.ArgInfo
struct ArgInfo_t2018974219;
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
struct ObjRefSurrogate_t1583203692;
// System.Runtime.Remoting.Messaging.RemotingSurrogate
struct RemotingSurrogate_t4104407834;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1732078921;
// System.Char[]
struct CharU5BU5D_t2481492684;
// System.Int32[]
struct Int32U5BU5D_t1014261387;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Void
struct Void_t4086585125;
// System.WeakReference
struct WeakReference_t1185003964;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.Messaging.ConstructionCall
struct ConstructionCall_t3792238753;
// System.DelegateData
struct DelegateData_t3817794824;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t2882688212;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3511065455;
// System.Runtime.Serialization.ISerializationSurrogate
struct ISerializationSurrogate_t2099431615;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t2987036477;
// System.IAsyncResult
struct IAsyncResult_t3101795824;
// System.AsyncCallback
struct AsyncCallback_t822563294;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t1377894519;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t977160024;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef LOGICALCALLCONTEXT_T1888585080_H
#define LOGICALCALLCONTEXT_T1888585080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.LogicalCallContext
struct  LogicalCallContext_t1888585080  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.Messaging.LogicalCallContext::_data
	Hashtable_t914140952 * ____data_0;
	// System.Runtime.Remoting.Messaging.CallContextRemotingData System.Runtime.Remoting.Messaging.LogicalCallContext::_remotingData
	CallContextRemotingData_t4153724578 * ____remotingData_1;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(LogicalCallContext_t1888585080, ____data_0)); }
	inline Hashtable_t914140952 * get__data_0() const { return ____data_0; }
	inline Hashtable_t914140952 ** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(Hashtable_t914140952 * value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((&____data_0), value);
	}

	inline static int32_t get_offset_of__remotingData_1() { return static_cast<int32_t>(offsetof(LogicalCallContext_t1888585080, ____remotingData_1)); }
	inline CallContextRemotingData_t4153724578 * get__remotingData_1() const { return ____remotingData_1; }
	inline CallContextRemotingData_t4153724578 ** get_address_of__remotingData_1() { return &____remotingData_1; }
	inline void set__remotingData_1(CallContextRemotingData_t4153724578 * value)
	{
		____remotingData_1 = value;
		Il2CppCodeGenWriteBarrier((&____remotingData_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGICALCALLCONTEXT_T1888585080_H
#ifndef SERIALIZATIONCALLBACKS_T3378188894_H
#define SERIALIZATIONCALLBACKS_T3378188894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationCallbacks
struct  SerializationCallbacks_t3378188894  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onSerializingList
	ArrayList_t121513687 * ___onSerializingList_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onSerializedList
	ArrayList_t121513687 * ___onSerializedList_1;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onDeserializingList
	ArrayList_t121513687 * ___onDeserializingList_2;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onDeserializedList
	ArrayList_t121513687 * ___onDeserializedList_3;

public:
	inline static int32_t get_offset_of_onSerializingList_0() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t3378188894, ___onSerializingList_0)); }
	inline ArrayList_t121513687 * get_onSerializingList_0() const { return ___onSerializingList_0; }
	inline ArrayList_t121513687 ** get_address_of_onSerializingList_0() { return &___onSerializingList_0; }
	inline void set_onSerializingList_0(ArrayList_t121513687 * value)
	{
		___onSerializingList_0 = value;
		Il2CppCodeGenWriteBarrier((&___onSerializingList_0), value);
	}

	inline static int32_t get_offset_of_onSerializedList_1() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t3378188894, ___onSerializedList_1)); }
	inline ArrayList_t121513687 * get_onSerializedList_1() const { return ___onSerializedList_1; }
	inline ArrayList_t121513687 ** get_address_of_onSerializedList_1() { return &___onSerializedList_1; }
	inline void set_onSerializedList_1(ArrayList_t121513687 * value)
	{
		___onSerializedList_1 = value;
		Il2CppCodeGenWriteBarrier((&___onSerializedList_1), value);
	}

	inline static int32_t get_offset_of_onDeserializingList_2() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t3378188894, ___onDeserializingList_2)); }
	inline ArrayList_t121513687 * get_onDeserializingList_2() const { return ___onDeserializingList_2; }
	inline ArrayList_t121513687 ** get_address_of_onDeserializingList_2() { return &___onDeserializingList_2; }
	inline void set_onDeserializingList_2(ArrayList_t121513687 * value)
	{
		___onDeserializingList_2 = value;
		Il2CppCodeGenWriteBarrier((&___onDeserializingList_2), value);
	}

	inline static int32_t get_offset_of_onDeserializedList_3() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t3378188894, ___onDeserializedList_3)); }
	inline ArrayList_t121513687 * get_onDeserializedList_3() const { return ___onDeserializedList_3; }
	inline ArrayList_t121513687 ** get_address_of_onDeserializedList_3() { return &___onDeserializedList_3; }
	inline void set_onDeserializedList_3(ArrayList_t121513687 * value)
	{
		___onDeserializedList_3 = value;
		Il2CppCodeGenWriteBarrier((&___onDeserializedList_3), value);
	}
};

struct SerializationCallbacks_t3378188894_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationCallbacks::cache
	Hashtable_t914140952 * ___cache_4;
	// System.Object System.Runtime.Serialization.SerializationCallbacks::cache_lock
	RuntimeObject * ___cache_lock_5;

public:
	inline static int32_t get_offset_of_cache_4() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t3378188894_StaticFields, ___cache_4)); }
	inline Hashtable_t914140952 * get_cache_4() const { return ___cache_4; }
	inline Hashtable_t914140952 ** get_address_of_cache_4() { return &___cache_4; }
	inline void set_cache_4(Hashtable_t914140952 * value)
	{
		___cache_4 = value;
		Il2CppCodeGenWriteBarrier((&___cache_4), value);
	}

	inline static int32_t get_offset_of_cache_lock_5() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t3378188894_StaticFields, ___cache_lock_5)); }
	inline RuntimeObject * get_cache_lock_5() const { return ___cache_lock_5; }
	inline RuntimeObject ** get_address_of_cache_lock_5() { return &___cache_lock_5; }
	inline void set_cache_lock_5(RuntimeObject * value)
	{
		___cache_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___cache_lock_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONCALLBACKS_T3378188894_H
#ifndef TYPEMETADATA_T3415911656_H
#define TYPEMETADATA_T3415911656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata
struct  TypeMetadata_t3415911656  : public RuntimeObject
{
public:
	// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::Type
	Type_t * ___Type_0;
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberTypes
	TypeU5BU5D_t796675467* ___MemberTypes_1;
	// System.String[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberNames
	StringU5BU5D_t301921341* ___MemberNames_2;
	// System.Reflection.MemberInfo[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberInfos
	MemberInfoU5BU5D_t2526759748* ___MemberInfos_3;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::FieldCount
	int32_t ___FieldCount_4;
	// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::NeedsSerializationInfo
	bool ___NeedsSerializationInfo_5;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(TypeMetadata_t3415911656, ___Type_0)); }
	inline Type_t * get_Type_0() const { return ___Type_0; }
	inline Type_t ** get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(Type_t * value)
	{
		___Type_0 = value;
		Il2CppCodeGenWriteBarrier((&___Type_0), value);
	}

	inline static int32_t get_offset_of_MemberTypes_1() { return static_cast<int32_t>(offsetof(TypeMetadata_t3415911656, ___MemberTypes_1)); }
	inline TypeU5BU5D_t796675467* get_MemberTypes_1() const { return ___MemberTypes_1; }
	inline TypeU5BU5D_t796675467** get_address_of_MemberTypes_1() { return &___MemberTypes_1; }
	inline void set_MemberTypes_1(TypeU5BU5D_t796675467* value)
	{
		___MemberTypes_1 = value;
		Il2CppCodeGenWriteBarrier((&___MemberTypes_1), value);
	}

	inline static int32_t get_offset_of_MemberNames_2() { return static_cast<int32_t>(offsetof(TypeMetadata_t3415911656, ___MemberNames_2)); }
	inline StringU5BU5D_t301921341* get_MemberNames_2() const { return ___MemberNames_2; }
	inline StringU5BU5D_t301921341** get_address_of_MemberNames_2() { return &___MemberNames_2; }
	inline void set_MemberNames_2(StringU5BU5D_t301921341* value)
	{
		___MemberNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberNames_2), value);
	}

	inline static int32_t get_offset_of_MemberInfos_3() { return static_cast<int32_t>(offsetof(TypeMetadata_t3415911656, ___MemberInfos_3)); }
	inline MemberInfoU5BU5D_t2526759748* get_MemberInfos_3() const { return ___MemberInfos_3; }
	inline MemberInfoU5BU5D_t2526759748** get_address_of_MemberInfos_3() { return &___MemberInfos_3; }
	inline void set_MemberInfos_3(MemberInfoU5BU5D_t2526759748* value)
	{
		___MemberInfos_3 = value;
		Il2CppCodeGenWriteBarrier((&___MemberInfos_3), value);
	}

	inline static int32_t get_offset_of_FieldCount_4() { return static_cast<int32_t>(offsetof(TypeMetadata_t3415911656, ___FieldCount_4)); }
	inline int32_t get_FieldCount_4() const { return ___FieldCount_4; }
	inline int32_t* get_address_of_FieldCount_4() { return &___FieldCount_4; }
	inline void set_FieldCount_4(int32_t value)
	{
		___FieldCount_4 = value;
	}

	inline static int32_t get_offset_of_NeedsSerializationInfo_5() { return static_cast<int32_t>(offsetof(TypeMetadata_t3415911656, ___NeedsSerializationInfo_5)); }
	inline bool get_NeedsSerializationInfo_5() const { return ___NeedsSerializationInfo_5; }
	inline bool* get_address_of_NeedsSerializationInfo_5() { return &___NeedsSerializationInfo_5; }
	inline void set_NeedsSerializationInfo_5(bool value)
	{
		___NeedsSerializationInfo_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEMETADATA_T3415911656_H
#ifndef IDENTITY_T3462146499_H
#define IDENTITY_T3462146499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Identity
struct  Identity_t3462146499  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Identity::_objectUri
	String_t* ____objectUri_0;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::_channelSink
	RuntimeObject* ____channelSink_1;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::_envoySink
	RuntimeObject* ____envoySink_2;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::_clientDynamicProperties
	DynamicPropertyCollection_t3986284769 * ____clientDynamicProperties_3;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::_serverDynamicProperties
	DynamicPropertyCollection_t3986284769 * ____serverDynamicProperties_4;
	// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::_objRef
	ObjRef_t3785752133 * ____objRef_5;
	// System.Boolean System.Runtime.Remoting.Identity::_disposed
	bool ____disposed_6;

public:
	inline static int32_t get_offset_of__objectUri_0() { return static_cast<int32_t>(offsetof(Identity_t3462146499, ____objectUri_0)); }
	inline String_t* get__objectUri_0() const { return ____objectUri_0; }
	inline String_t** get_address_of__objectUri_0() { return &____objectUri_0; }
	inline void set__objectUri_0(String_t* value)
	{
		____objectUri_0 = value;
		Il2CppCodeGenWriteBarrier((&____objectUri_0), value);
	}

	inline static int32_t get_offset_of__channelSink_1() { return static_cast<int32_t>(offsetof(Identity_t3462146499, ____channelSink_1)); }
	inline RuntimeObject* get__channelSink_1() const { return ____channelSink_1; }
	inline RuntimeObject** get_address_of__channelSink_1() { return &____channelSink_1; }
	inline void set__channelSink_1(RuntimeObject* value)
	{
		____channelSink_1 = value;
		Il2CppCodeGenWriteBarrier((&____channelSink_1), value);
	}

	inline static int32_t get_offset_of__envoySink_2() { return static_cast<int32_t>(offsetof(Identity_t3462146499, ____envoySink_2)); }
	inline RuntimeObject* get__envoySink_2() const { return ____envoySink_2; }
	inline RuntimeObject** get_address_of__envoySink_2() { return &____envoySink_2; }
	inline void set__envoySink_2(RuntimeObject* value)
	{
		____envoySink_2 = value;
		Il2CppCodeGenWriteBarrier((&____envoySink_2), value);
	}

	inline static int32_t get_offset_of__clientDynamicProperties_3() { return static_cast<int32_t>(offsetof(Identity_t3462146499, ____clientDynamicProperties_3)); }
	inline DynamicPropertyCollection_t3986284769 * get__clientDynamicProperties_3() const { return ____clientDynamicProperties_3; }
	inline DynamicPropertyCollection_t3986284769 ** get_address_of__clientDynamicProperties_3() { return &____clientDynamicProperties_3; }
	inline void set__clientDynamicProperties_3(DynamicPropertyCollection_t3986284769 * value)
	{
		____clientDynamicProperties_3 = value;
		Il2CppCodeGenWriteBarrier((&____clientDynamicProperties_3), value);
	}

	inline static int32_t get_offset_of__serverDynamicProperties_4() { return static_cast<int32_t>(offsetof(Identity_t3462146499, ____serverDynamicProperties_4)); }
	inline DynamicPropertyCollection_t3986284769 * get__serverDynamicProperties_4() const { return ____serverDynamicProperties_4; }
	inline DynamicPropertyCollection_t3986284769 ** get_address_of__serverDynamicProperties_4() { return &____serverDynamicProperties_4; }
	inline void set__serverDynamicProperties_4(DynamicPropertyCollection_t3986284769 * value)
	{
		____serverDynamicProperties_4 = value;
		Il2CppCodeGenWriteBarrier((&____serverDynamicProperties_4), value);
	}

	inline static int32_t get_offset_of__objRef_5() { return static_cast<int32_t>(offsetof(Identity_t3462146499, ____objRef_5)); }
	inline ObjRef_t3785752133 * get__objRef_5() const { return ____objRef_5; }
	inline ObjRef_t3785752133 ** get_address_of__objRef_5() { return &____objRef_5; }
	inline void set__objRef_5(ObjRef_t3785752133 * value)
	{
		____objRef_5 = value;
		Il2CppCodeGenWriteBarrier((&____objRef_5), value);
	}

	inline static int32_t get_offset_of__disposed_6() { return static_cast<int32_t>(offsetof(Identity_t3462146499, ____disposed_6)); }
	inline bool get__disposed_6() const { return ____disposed_6; }
	inline bool* get_address_of__disposed_6() { return &____disposed_6; }
	inline void set__disposed_6(bool value)
	{
		____disposed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IDENTITY_T3462146499_H
#ifndef SERIALIZATIONBINDER_T1377894519_H
#define SERIALIZATIONBINDER_T1377894519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationBinder
struct  SerializationBinder_t1377894519  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONBINDER_T1377894519_H
#ifndef INTERNALREMOTINGSERVICES_T2451830066_H
#define INTERNALREMOTINGSERVICES_T2451830066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.InternalRemotingServices
struct  InternalRemotingServices_t2451830066  : public RuntimeObject
{
public:

public:
};

struct InternalRemotingServices_t2451830066_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.InternalRemotingServices::_soapAttributes
	Hashtable_t914140952 * ____soapAttributes_0;

public:
	inline static int32_t get_offset_of__soapAttributes_0() { return static_cast<int32_t>(offsetof(InternalRemotingServices_t2451830066_StaticFields, ____soapAttributes_0)); }
	inline Hashtable_t914140952 * get__soapAttributes_0() const { return ____soapAttributes_0; }
	inline Hashtable_t914140952 ** get_address_of__soapAttributes_0() { return &____soapAttributes_0; }
	inline void set__soapAttributes_0(Hashtable_t914140952 * value)
	{
		____soapAttributes_0 = value;
		Il2CppCodeGenWriteBarrier((&____soapAttributes_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALREMOTINGSERVICES_T2451830066_H
#ifndef OBJREF_T3785752133_H
#define OBJREF_T3785752133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ObjRef
struct  ObjRef_t3785752133  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::channel_info
	RuntimeObject* ___channel_info_0;
	// System.String System.Runtime.Remoting.ObjRef::uri
	String_t* ___uri_1;
	// System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::typeInfo
	RuntimeObject* ___typeInfo_2;
	// System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::envoyInfo
	RuntimeObject* ___envoyInfo_3;
	// System.Int32 System.Runtime.Remoting.ObjRef::flags
	int32_t ___flags_4;
	// System.Type System.Runtime.Remoting.ObjRef::_serverType
	Type_t * ____serverType_5;

public:
	inline static int32_t get_offset_of_channel_info_0() { return static_cast<int32_t>(offsetof(ObjRef_t3785752133, ___channel_info_0)); }
	inline RuntimeObject* get_channel_info_0() const { return ___channel_info_0; }
	inline RuntimeObject** get_address_of_channel_info_0() { return &___channel_info_0; }
	inline void set_channel_info_0(RuntimeObject* value)
	{
		___channel_info_0 = value;
		Il2CppCodeGenWriteBarrier((&___channel_info_0), value);
	}

	inline static int32_t get_offset_of_uri_1() { return static_cast<int32_t>(offsetof(ObjRef_t3785752133, ___uri_1)); }
	inline String_t* get_uri_1() const { return ___uri_1; }
	inline String_t** get_address_of_uri_1() { return &___uri_1; }
	inline void set_uri_1(String_t* value)
	{
		___uri_1 = value;
		Il2CppCodeGenWriteBarrier((&___uri_1), value);
	}

	inline static int32_t get_offset_of_typeInfo_2() { return static_cast<int32_t>(offsetof(ObjRef_t3785752133, ___typeInfo_2)); }
	inline RuntimeObject* get_typeInfo_2() const { return ___typeInfo_2; }
	inline RuntimeObject** get_address_of_typeInfo_2() { return &___typeInfo_2; }
	inline void set_typeInfo_2(RuntimeObject* value)
	{
		___typeInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___typeInfo_2), value);
	}

	inline static int32_t get_offset_of_envoyInfo_3() { return static_cast<int32_t>(offsetof(ObjRef_t3785752133, ___envoyInfo_3)); }
	inline RuntimeObject* get_envoyInfo_3() const { return ___envoyInfo_3; }
	inline RuntimeObject** get_address_of_envoyInfo_3() { return &___envoyInfo_3; }
	inline void set_envoyInfo_3(RuntimeObject* value)
	{
		___envoyInfo_3 = value;
		Il2CppCodeGenWriteBarrier((&___envoyInfo_3), value);
	}

	inline static int32_t get_offset_of_flags_4() { return static_cast<int32_t>(offsetof(ObjRef_t3785752133, ___flags_4)); }
	inline int32_t get_flags_4() const { return ___flags_4; }
	inline int32_t* get_address_of_flags_4() { return &___flags_4; }
	inline void set_flags_4(int32_t value)
	{
		___flags_4 = value;
	}

	inline static int32_t get_offset_of__serverType_5() { return static_cast<int32_t>(offsetof(ObjRef_t3785752133, ____serverType_5)); }
	inline Type_t * get__serverType_5() const { return ____serverType_5; }
	inline Type_t ** get_address_of__serverType_5() { return &____serverType_5; }
	inline void set__serverType_5(Type_t * value)
	{
		____serverType_5 = value;
		Il2CppCodeGenWriteBarrier((&____serverType_5), value);
	}
};

struct ObjRef_t3785752133_StaticFields
{
public:
	// System.Int32 System.Runtime.Remoting.ObjRef::MarshalledObjectRef
	int32_t ___MarshalledObjectRef_6;
	// System.Int32 System.Runtime.Remoting.ObjRef::WellKnowObjectRef
	int32_t ___WellKnowObjectRef_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.ObjRef::<>f__switch$map26
	Dictionary_2_t997430228 * ___U3CU3Ef__switchU24map26_8;

public:
	inline static int32_t get_offset_of_MarshalledObjectRef_6() { return static_cast<int32_t>(offsetof(ObjRef_t3785752133_StaticFields, ___MarshalledObjectRef_6)); }
	inline int32_t get_MarshalledObjectRef_6() const { return ___MarshalledObjectRef_6; }
	inline int32_t* get_address_of_MarshalledObjectRef_6() { return &___MarshalledObjectRef_6; }
	inline void set_MarshalledObjectRef_6(int32_t value)
	{
		___MarshalledObjectRef_6 = value;
	}

	inline static int32_t get_offset_of_WellKnowObjectRef_7() { return static_cast<int32_t>(offsetof(ObjRef_t3785752133_StaticFields, ___WellKnowObjectRef_7)); }
	inline int32_t get_WellKnowObjectRef_7() const { return ___WellKnowObjectRef_7; }
	inline int32_t* get_address_of_WellKnowObjectRef_7() { return &___WellKnowObjectRef_7; }
	inline void set_WellKnowObjectRef_7(int32_t value)
	{
		___WellKnowObjectRef_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map26_8() { return static_cast<int32_t>(offsetof(ObjRef_t3785752133_StaticFields, ___U3CU3Ef__switchU24map26_8)); }
	inline Dictionary_2_t997430228 * get_U3CU3Ef__switchU24map26_8() const { return ___U3CU3Ef__switchU24map26_8; }
	inline Dictionary_2_t997430228 ** get_address_of_U3CU3Ef__switchU24map26_8() { return &___U3CU3Ef__switchU24map26_8; }
	inline void set_U3CU3Ef__switchU24map26_8(Dictionary_2_t997430228 * value)
	{
		___U3CU3Ef__switchU24map26_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map26_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJREF_T3785752133_H
#ifndef REMOTINGCONFIGURATION_T3856712909_H
#define REMOTINGCONFIGURATION_T3856712909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.RemotingConfiguration
struct  RemotingConfiguration_t3856712909  : public RuntimeObject
{
public:

public:
};

struct RemotingConfiguration_t3856712909_StaticFields
{
public:
	// System.String System.Runtime.Remoting.RemotingConfiguration::applicationID
	String_t* ___applicationID_0;
	// System.String System.Runtime.Remoting.RemotingConfiguration::applicationName
	String_t* ___applicationName_1;
	// System.String System.Runtime.Remoting.RemotingConfiguration::processGuid
	String_t* ___processGuid_2;
	// System.Boolean System.Runtime.Remoting.RemotingConfiguration::defaultConfigRead
	bool ___defaultConfigRead_3;
	// System.Boolean System.Runtime.Remoting.RemotingConfiguration::defaultDelayedConfigRead
	bool ___defaultDelayedConfigRead_4;
	// System.String System.Runtime.Remoting.RemotingConfiguration::_errorMode
	String_t* ____errorMode_5;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::wellKnownClientEntries
	Hashtable_t914140952 * ___wellKnownClientEntries_6;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::activatedClientEntries
	Hashtable_t914140952 * ___activatedClientEntries_7;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::wellKnownServiceEntries
	Hashtable_t914140952 * ___wellKnownServiceEntries_8;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::activatedServiceEntries
	Hashtable_t914140952 * ___activatedServiceEntries_9;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::channelTemplates
	Hashtable_t914140952 * ___channelTemplates_10;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::clientProviderTemplates
	Hashtable_t914140952 * ___clientProviderTemplates_11;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::serverProviderTemplates
	Hashtable_t914140952 * ___serverProviderTemplates_12;

public:
	inline static int32_t get_offset_of_applicationID_0() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3856712909_StaticFields, ___applicationID_0)); }
	inline String_t* get_applicationID_0() const { return ___applicationID_0; }
	inline String_t** get_address_of_applicationID_0() { return &___applicationID_0; }
	inline void set_applicationID_0(String_t* value)
	{
		___applicationID_0 = value;
		Il2CppCodeGenWriteBarrier((&___applicationID_0), value);
	}

	inline static int32_t get_offset_of_applicationName_1() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3856712909_StaticFields, ___applicationName_1)); }
	inline String_t* get_applicationName_1() const { return ___applicationName_1; }
	inline String_t** get_address_of_applicationName_1() { return &___applicationName_1; }
	inline void set_applicationName_1(String_t* value)
	{
		___applicationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___applicationName_1), value);
	}

	inline static int32_t get_offset_of_processGuid_2() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3856712909_StaticFields, ___processGuid_2)); }
	inline String_t* get_processGuid_2() const { return ___processGuid_2; }
	inline String_t** get_address_of_processGuid_2() { return &___processGuid_2; }
	inline void set_processGuid_2(String_t* value)
	{
		___processGuid_2 = value;
		Il2CppCodeGenWriteBarrier((&___processGuid_2), value);
	}

	inline static int32_t get_offset_of_defaultConfigRead_3() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3856712909_StaticFields, ___defaultConfigRead_3)); }
	inline bool get_defaultConfigRead_3() const { return ___defaultConfigRead_3; }
	inline bool* get_address_of_defaultConfigRead_3() { return &___defaultConfigRead_3; }
	inline void set_defaultConfigRead_3(bool value)
	{
		___defaultConfigRead_3 = value;
	}

	inline static int32_t get_offset_of_defaultDelayedConfigRead_4() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3856712909_StaticFields, ___defaultDelayedConfigRead_4)); }
	inline bool get_defaultDelayedConfigRead_4() const { return ___defaultDelayedConfigRead_4; }
	inline bool* get_address_of_defaultDelayedConfigRead_4() { return &___defaultDelayedConfigRead_4; }
	inline void set_defaultDelayedConfigRead_4(bool value)
	{
		___defaultDelayedConfigRead_4 = value;
	}

	inline static int32_t get_offset_of__errorMode_5() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3856712909_StaticFields, ____errorMode_5)); }
	inline String_t* get__errorMode_5() const { return ____errorMode_5; }
	inline String_t** get_address_of__errorMode_5() { return &____errorMode_5; }
	inline void set__errorMode_5(String_t* value)
	{
		____errorMode_5 = value;
		Il2CppCodeGenWriteBarrier((&____errorMode_5), value);
	}

	inline static int32_t get_offset_of_wellKnownClientEntries_6() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3856712909_StaticFields, ___wellKnownClientEntries_6)); }
	inline Hashtable_t914140952 * get_wellKnownClientEntries_6() const { return ___wellKnownClientEntries_6; }
	inline Hashtable_t914140952 ** get_address_of_wellKnownClientEntries_6() { return &___wellKnownClientEntries_6; }
	inline void set_wellKnownClientEntries_6(Hashtable_t914140952 * value)
	{
		___wellKnownClientEntries_6 = value;
		Il2CppCodeGenWriteBarrier((&___wellKnownClientEntries_6), value);
	}

	inline static int32_t get_offset_of_activatedClientEntries_7() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3856712909_StaticFields, ___activatedClientEntries_7)); }
	inline Hashtable_t914140952 * get_activatedClientEntries_7() const { return ___activatedClientEntries_7; }
	inline Hashtable_t914140952 ** get_address_of_activatedClientEntries_7() { return &___activatedClientEntries_7; }
	inline void set_activatedClientEntries_7(Hashtable_t914140952 * value)
	{
		___activatedClientEntries_7 = value;
		Il2CppCodeGenWriteBarrier((&___activatedClientEntries_7), value);
	}

	inline static int32_t get_offset_of_wellKnownServiceEntries_8() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3856712909_StaticFields, ___wellKnownServiceEntries_8)); }
	inline Hashtable_t914140952 * get_wellKnownServiceEntries_8() const { return ___wellKnownServiceEntries_8; }
	inline Hashtable_t914140952 ** get_address_of_wellKnownServiceEntries_8() { return &___wellKnownServiceEntries_8; }
	inline void set_wellKnownServiceEntries_8(Hashtable_t914140952 * value)
	{
		___wellKnownServiceEntries_8 = value;
		Il2CppCodeGenWriteBarrier((&___wellKnownServiceEntries_8), value);
	}

	inline static int32_t get_offset_of_activatedServiceEntries_9() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3856712909_StaticFields, ___activatedServiceEntries_9)); }
	inline Hashtable_t914140952 * get_activatedServiceEntries_9() const { return ___activatedServiceEntries_9; }
	inline Hashtable_t914140952 ** get_address_of_activatedServiceEntries_9() { return &___activatedServiceEntries_9; }
	inline void set_activatedServiceEntries_9(Hashtable_t914140952 * value)
	{
		___activatedServiceEntries_9 = value;
		Il2CppCodeGenWriteBarrier((&___activatedServiceEntries_9), value);
	}

	inline static int32_t get_offset_of_channelTemplates_10() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3856712909_StaticFields, ___channelTemplates_10)); }
	inline Hashtable_t914140952 * get_channelTemplates_10() const { return ___channelTemplates_10; }
	inline Hashtable_t914140952 ** get_address_of_channelTemplates_10() { return &___channelTemplates_10; }
	inline void set_channelTemplates_10(Hashtable_t914140952 * value)
	{
		___channelTemplates_10 = value;
		Il2CppCodeGenWriteBarrier((&___channelTemplates_10), value);
	}

	inline static int32_t get_offset_of_clientProviderTemplates_11() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3856712909_StaticFields, ___clientProviderTemplates_11)); }
	inline Hashtable_t914140952 * get_clientProviderTemplates_11() const { return ___clientProviderTemplates_11; }
	inline Hashtable_t914140952 ** get_address_of_clientProviderTemplates_11() { return &___clientProviderTemplates_11; }
	inline void set_clientProviderTemplates_11(Hashtable_t914140952 * value)
	{
		___clientProviderTemplates_11 = value;
		Il2CppCodeGenWriteBarrier((&___clientProviderTemplates_11), value);
	}

	inline static int32_t get_offset_of_serverProviderTemplates_12() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t3856712909_StaticFields, ___serverProviderTemplates_12)); }
	inline Hashtable_t914140952 * get_serverProviderTemplates_12() const { return ___serverProviderTemplates_12; }
	inline Hashtable_t914140952 ** get_address_of_serverProviderTemplates_12() { return &___serverProviderTemplates_12; }
	inline void set_serverProviderTemplates_12(Hashtable_t914140952 * value)
	{
		___serverProviderTemplates_12 = value;
		Il2CppCodeGenWriteBarrier((&___serverProviderTemplates_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGCONFIGURATION_T3856712909_H
#ifndef CONFIGHANDLER_T3643965628_H
#define CONFIGHANDLER_T3643965628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ConfigHandler
struct  ConfigHandler_t3643965628  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.ConfigHandler::typeEntries
	ArrayList_t121513687 * ___typeEntries_0;
	// System.Collections.ArrayList System.Runtime.Remoting.ConfigHandler::channelInstances
	ArrayList_t121513687 * ___channelInstances_1;
	// System.Runtime.Remoting.ChannelData System.Runtime.Remoting.ConfigHandler::currentChannel
	ChannelData_t2389701058 * ___currentChannel_2;
	// System.Collections.Stack System.Runtime.Remoting.ConfigHandler::currentProviderData
	Stack_t1239731402 * ___currentProviderData_3;
	// System.String System.Runtime.Remoting.ConfigHandler::currentClientUrl
	String_t* ___currentClientUrl_4;
	// System.String System.Runtime.Remoting.ConfigHandler::appName
	String_t* ___appName_5;
	// System.String System.Runtime.Remoting.ConfigHandler::currentXmlPath
	String_t* ___currentXmlPath_6;
	// System.Boolean System.Runtime.Remoting.ConfigHandler::onlyDelayedChannels
	bool ___onlyDelayedChannels_7;

public:
	inline static int32_t get_offset_of_typeEntries_0() { return static_cast<int32_t>(offsetof(ConfigHandler_t3643965628, ___typeEntries_0)); }
	inline ArrayList_t121513687 * get_typeEntries_0() const { return ___typeEntries_0; }
	inline ArrayList_t121513687 ** get_address_of_typeEntries_0() { return &___typeEntries_0; }
	inline void set_typeEntries_0(ArrayList_t121513687 * value)
	{
		___typeEntries_0 = value;
		Il2CppCodeGenWriteBarrier((&___typeEntries_0), value);
	}

	inline static int32_t get_offset_of_channelInstances_1() { return static_cast<int32_t>(offsetof(ConfigHandler_t3643965628, ___channelInstances_1)); }
	inline ArrayList_t121513687 * get_channelInstances_1() const { return ___channelInstances_1; }
	inline ArrayList_t121513687 ** get_address_of_channelInstances_1() { return &___channelInstances_1; }
	inline void set_channelInstances_1(ArrayList_t121513687 * value)
	{
		___channelInstances_1 = value;
		Il2CppCodeGenWriteBarrier((&___channelInstances_1), value);
	}

	inline static int32_t get_offset_of_currentChannel_2() { return static_cast<int32_t>(offsetof(ConfigHandler_t3643965628, ___currentChannel_2)); }
	inline ChannelData_t2389701058 * get_currentChannel_2() const { return ___currentChannel_2; }
	inline ChannelData_t2389701058 ** get_address_of_currentChannel_2() { return &___currentChannel_2; }
	inline void set_currentChannel_2(ChannelData_t2389701058 * value)
	{
		___currentChannel_2 = value;
		Il2CppCodeGenWriteBarrier((&___currentChannel_2), value);
	}

	inline static int32_t get_offset_of_currentProviderData_3() { return static_cast<int32_t>(offsetof(ConfigHandler_t3643965628, ___currentProviderData_3)); }
	inline Stack_t1239731402 * get_currentProviderData_3() const { return ___currentProviderData_3; }
	inline Stack_t1239731402 ** get_address_of_currentProviderData_3() { return &___currentProviderData_3; }
	inline void set_currentProviderData_3(Stack_t1239731402 * value)
	{
		___currentProviderData_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentProviderData_3), value);
	}

	inline static int32_t get_offset_of_currentClientUrl_4() { return static_cast<int32_t>(offsetof(ConfigHandler_t3643965628, ___currentClientUrl_4)); }
	inline String_t* get_currentClientUrl_4() const { return ___currentClientUrl_4; }
	inline String_t** get_address_of_currentClientUrl_4() { return &___currentClientUrl_4; }
	inline void set_currentClientUrl_4(String_t* value)
	{
		___currentClientUrl_4 = value;
		Il2CppCodeGenWriteBarrier((&___currentClientUrl_4), value);
	}

	inline static int32_t get_offset_of_appName_5() { return static_cast<int32_t>(offsetof(ConfigHandler_t3643965628, ___appName_5)); }
	inline String_t* get_appName_5() const { return ___appName_5; }
	inline String_t** get_address_of_appName_5() { return &___appName_5; }
	inline void set_appName_5(String_t* value)
	{
		___appName_5 = value;
		Il2CppCodeGenWriteBarrier((&___appName_5), value);
	}

	inline static int32_t get_offset_of_currentXmlPath_6() { return static_cast<int32_t>(offsetof(ConfigHandler_t3643965628, ___currentXmlPath_6)); }
	inline String_t* get_currentXmlPath_6() const { return ___currentXmlPath_6; }
	inline String_t** get_address_of_currentXmlPath_6() { return &___currentXmlPath_6; }
	inline void set_currentXmlPath_6(String_t* value)
	{
		___currentXmlPath_6 = value;
		Il2CppCodeGenWriteBarrier((&___currentXmlPath_6), value);
	}

	inline static int32_t get_offset_of_onlyDelayedChannels_7() { return static_cast<int32_t>(offsetof(ConfigHandler_t3643965628, ___onlyDelayedChannels_7)); }
	inline bool get_onlyDelayedChannels_7() const { return ___onlyDelayedChannels_7; }
	inline bool* get_address_of_onlyDelayedChannels_7() { return &___onlyDelayedChannels_7; }
	inline void set_onlyDelayedChannels_7(bool value)
	{
		___onlyDelayedChannels_7 = value;
	}
};

struct ConfigHandler_t3643965628_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.ConfigHandler::<>f__switch$map27
	Dictionary_2_t997430228 * ___U3CU3Ef__switchU24map27_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.ConfigHandler::<>f__switch$map28
	Dictionary_2_t997430228 * ___U3CU3Ef__switchU24map28_9;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map27_8() { return static_cast<int32_t>(offsetof(ConfigHandler_t3643965628_StaticFields, ___U3CU3Ef__switchU24map27_8)); }
	inline Dictionary_2_t997430228 * get_U3CU3Ef__switchU24map27_8() const { return ___U3CU3Ef__switchU24map27_8; }
	inline Dictionary_2_t997430228 ** get_address_of_U3CU3Ef__switchU24map27_8() { return &___U3CU3Ef__switchU24map27_8; }
	inline void set_U3CU3Ef__switchU24map27_8(Dictionary_2_t997430228 * value)
	{
		___U3CU3Ef__switchU24map27_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map27_8), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map28_9() { return static_cast<int32_t>(offsetof(ConfigHandler_t3643965628_StaticFields, ___U3CU3Ef__switchU24map28_9)); }
	inline Dictionary_2_t997430228 * get_U3CU3Ef__switchU24map28_9() const { return ___U3CU3Ef__switchU24map28_9; }
	inline Dictionary_2_t997430228 ** get_address_of_U3CU3Ef__switchU24map28_9() { return &___U3CU3Ef__switchU24map28_9; }
	inline void set_U3CU3Ef__switchU24map28_9(Dictionary_2_t997430228 * value)
	{
		___U3CU3Ef__switchU24map28_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map28_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGHANDLER_T3643965628_H
#ifndef TRACKINGSERVICES_T2133473993_H
#define TRACKINGSERVICES_T2133473993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Services.TrackingServices
struct  TrackingServices_t2133473993  : public RuntimeObject
{
public:

public:
};

struct TrackingServices_t2133473993_StaticFields
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Services.TrackingServices::_handlers
	ArrayList_t121513687 * ____handlers_0;

public:
	inline static int32_t get_offset_of__handlers_0() { return static_cast<int32_t>(offsetof(TrackingServices_t2133473993_StaticFields, ____handlers_0)); }
	inline ArrayList_t121513687 * get__handlers_0() const { return ____handlers_0; }
	inline ArrayList_t121513687 ** get_address_of__handlers_0() { return &____handlers_0; }
	inline void set__handlers_0(ArrayList_t121513687 * value)
	{
		____handlers_0 = value;
		Il2CppCodeGenWriteBarrier((&____handlers_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKINGSERVICES_T2133473993_H
#ifndef CHANNELDATA_T2389701058_H
#define CHANNELDATA_T2389701058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ChannelData
struct  ChannelData_t2389701058  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.ChannelData::Ref
	String_t* ___Ref_0;
	// System.String System.Runtime.Remoting.ChannelData::Type
	String_t* ___Type_1;
	// System.String System.Runtime.Remoting.ChannelData::Id
	String_t* ___Id_2;
	// System.String System.Runtime.Remoting.ChannelData::DelayLoadAsClientChannel
	String_t* ___DelayLoadAsClientChannel_3;
	// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::_serverProviders
	ArrayList_t121513687 * ____serverProviders_4;
	// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::_clientProviders
	ArrayList_t121513687 * ____clientProviders_5;
	// System.Collections.Hashtable System.Runtime.Remoting.ChannelData::_customProperties
	Hashtable_t914140952 * ____customProperties_6;

public:
	inline static int32_t get_offset_of_Ref_0() { return static_cast<int32_t>(offsetof(ChannelData_t2389701058, ___Ref_0)); }
	inline String_t* get_Ref_0() const { return ___Ref_0; }
	inline String_t** get_address_of_Ref_0() { return &___Ref_0; }
	inline void set_Ref_0(String_t* value)
	{
		___Ref_0 = value;
		Il2CppCodeGenWriteBarrier((&___Ref_0), value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(ChannelData_t2389701058, ___Type_1)); }
	inline String_t* get_Type_1() const { return ___Type_1; }
	inline String_t** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(String_t* value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier((&___Type_1), value);
	}

	inline static int32_t get_offset_of_Id_2() { return static_cast<int32_t>(offsetof(ChannelData_t2389701058, ___Id_2)); }
	inline String_t* get_Id_2() const { return ___Id_2; }
	inline String_t** get_address_of_Id_2() { return &___Id_2; }
	inline void set_Id_2(String_t* value)
	{
		___Id_2 = value;
		Il2CppCodeGenWriteBarrier((&___Id_2), value);
	}

	inline static int32_t get_offset_of_DelayLoadAsClientChannel_3() { return static_cast<int32_t>(offsetof(ChannelData_t2389701058, ___DelayLoadAsClientChannel_3)); }
	inline String_t* get_DelayLoadAsClientChannel_3() const { return ___DelayLoadAsClientChannel_3; }
	inline String_t** get_address_of_DelayLoadAsClientChannel_3() { return &___DelayLoadAsClientChannel_3; }
	inline void set_DelayLoadAsClientChannel_3(String_t* value)
	{
		___DelayLoadAsClientChannel_3 = value;
		Il2CppCodeGenWriteBarrier((&___DelayLoadAsClientChannel_3), value);
	}

	inline static int32_t get_offset_of__serverProviders_4() { return static_cast<int32_t>(offsetof(ChannelData_t2389701058, ____serverProviders_4)); }
	inline ArrayList_t121513687 * get__serverProviders_4() const { return ____serverProviders_4; }
	inline ArrayList_t121513687 ** get_address_of__serverProviders_4() { return &____serverProviders_4; }
	inline void set__serverProviders_4(ArrayList_t121513687 * value)
	{
		____serverProviders_4 = value;
		Il2CppCodeGenWriteBarrier((&____serverProviders_4), value);
	}

	inline static int32_t get_offset_of__clientProviders_5() { return static_cast<int32_t>(offsetof(ChannelData_t2389701058, ____clientProviders_5)); }
	inline ArrayList_t121513687 * get__clientProviders_5() const { return ____clientProviders_5; }
	inline ArrayList_t121513687 ** get_address_of__clientProviders_5() { return &____clientProviders_5; }
	inline void set__clientProviders_5(ArrayList_t121513687 * value)
	{
		____clientProviders_5 = value;
		Il2CppCodeGenWriteBarrier((&____clientProviders_5), value);
	}

	inline static int32_t get_offset_of__customProperties_6() { return static_cast<int32_t>(offsetof(ChannelData_t2389701058, ____customProperties_6)); }
	inline Hashtable_t914140952 * get__customProperties_6() const { return ____customProperties_6; }
	inline Hashtable_t914140952 ** get_address_of__customProperties_6() { return &____customProperties_6; }
	inline void set__customProperties_6(Hashtable_t914140952 * value)
	{
		____customProperties_6 = value;
		Il2CppCodeGenWriteBarrier((&____customProperties_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELDATA_T2389701058_H
#ifndef SOAPSERVICES_T1639859035_H
#define SOAPSERVICES_T1639859035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.SoapServices
struct  SoapServices_t1639859035  : public RuntimeObject
{
public:

public:
};

struct SoapServices_t1639859035_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_xmlTypes
	Hashtable_t914140952 * ____xmlTypes_0;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_xmlElements
	Hashtable_t914140952 * ____xmlElements_1;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_soapActions
	Hashtable_t914140952 * ____soapActions_2;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_soapActionsMethods
	Hashtable_t914140952 * ____soapActionsMethods_3;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_typeInfos
	Hashtable_t914140952 * ____typeInfos_4;

public:
	inline static int32_t get_offset_of__xmlTypes_0() { return static_cast<int32_t>(offsetof(SoapServices_t1639859035_StaticFields, ____xmlTypes_0)); }
	inline Hashtable_t914140952 * get__xmlTypes_0() const { return ____xmlTypes_0; }
	inline Hashtable_t914140952 ** get_address_of__xmlTypes_0() { return &____xmlTypes_0; }
	inline void set__xmlTypes_0(Hashtable_t914140952 * value)
	{
		____xmlTypes_0 = value;
		Il2CppCodeGenWriteBarrier((&____xmlTypes_0), value);
	}

	inline static int32_t get_offset_of__xmlElements_1() { return static_cast<int32_t>(offsetof(SoapServices_t1639859035_StaticFields, ____xmlElements_1)); }
	inline Hashtable_t914140952 * get__xmlElements_1() const { return ____xmlElements_1; }
	inline Hashtable_t914140952 ** get_address_of__xmlElements_1() { return &____xmlElements_1; }
	inline void set__xmlElements_1(Hashtable_t914140952 * value)
	{
		____xmlElements_1 = value;
		Il2CppCodeGenWriteBarrier((&____xmlElements_1), value);
	}

	inline static int32_t get_offset_of__soapActions_2() { return static_cast<int32_t>(offsetof(SoapServices_t1639859035_StaticFields, ____soapActions_2)); }
	inline Hashtable_t914140952 * get__soapActions_2() const { return ____soapActions_2; }
	inline Hashtable_t914140952 ** get_address_of__soapActions_2() { return &____soapActions_2; }
	inline void set__soapActions_2(Hashtable_t914140952 * value)
	{
		____soapActions_2 = value;
		Il2CppCodeGenWriteBarrier((&____soapActions_2), value);
	}

	inline static int32_t get_offset_of__soapActionsMethods_3() { return static_cast<int32_t>(offsetof(SoapServices_t1639859035_StaticFields, ____soapActionsMethods_3)); }
	inline Hashtable_t914140952 * get__soapActionsMethods_3() const { return ____soapActionsMethods_3; }
	inline Hashtable_t914140952 ** get_address_of__soapActionsMethods_3() { return &____soapActionsMethods_3; }
	inline void set__soapActionsMethods_3(Hashtable_t914140952 * value)
	{
		____soapActionsMethods_3 = value;
		Il2CppCodeGenWriteBarrier((&____soapActionsMethods_3), value);
	}

	inline static int32_t get_offset_of__typeInfos_4() { return static_cast<int32_t>(offsetof(SoapServices_t1639859035_StaticFields, ____typeInfos_4)); }
	inline Hashtable_t914140952 * get__typeInfos_4() const { return ____typeInfos_4; }
	inline Hashtable_t914140952 ** get_address_of__typeInfos_4() { return &____typeInfos_4; }
	inline void set__typeInfos_4(Hashtable_t914140952 * value)
	{
		____typeInfos_4 = value;
		Il2CppCodeGenWriteBarrier((&____typeInfos_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPSERVICES_T1639859035_H
#ifndef TYPEINFO_T2005344498_H
#define TYPEINFO_T2005344498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.SoapServices/TypeInfo
struct  TypeInfo_t2005344498  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices/TypeInfo::Attributes
	Hashtable_t914140952 * ___Attributes_0;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices/TypeInfo::Elements
	Hashtable_t914140952 * ___Elements_1;

public:
	inline static int32_t get_offset_of_Attributes_0() { return static_cast<int32_t>(offsetof(TypeInfo_t2005344498, ___Attributes_0)); }
	inline Hashtable_t914140952 * get_Attributes_0() const { return ___Attributes_0; }
	inline Hashtable_t914140952 ** get_address_of_Attributes_0() { return &___Attributes_0; }
	inline void set_Attributes_0(Hashtable_t914140952 * value)
	{
		___Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((&___Attributes_0), value);
	}

	inline static int32_t get_offset_of_Elements_1() { return static_cast<int32_t>(offsetof(TypeInfo_t2005344498, ___Elements_1)); }
	inline Hashtable_t914140952 * get_Elements_1() const { return ___Elements_1; }
	inline Hashtable_t914140952 ** get_address_of_Elements_1() { return &___Elements_1; }
	inline void set_Elements_1(Hashtable_t914140952 * value)
	{
		___Elements_1 = value;
		Il2CppCodeGenWriteBarrier((&___Elements_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T2005344498_H
#ifndef TYPEENTRY_T1625158409_H
#define TYPEENTRY_T1625158409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.TypeEntry
struct  TypeEntry_t1625158409  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.TypeEntry::assembly_name
	String_t* ___assembly_name_0;
	// System.String System.Runtime.Remoting.TypeEntry::type_name
	String_t* ___type_name_1;

public:
	inline static int32_t get_offset_of_assembly_name_0() { return static_cast<int32_t>(offsetof(TypeEntry_t1625158409, ___assembly_name_0)); }
	inline String_t* get_assembly_name_0() const { return ___assembly_name_0; }
	inline String_t** get_address_of_assembly_name_0() { return &___assembly_name_0; }
	inline void set_assembly_name_0(String_t* value)
	{
		___assembly_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_name_0), value);
	}

	inline static int32_t get_offset_of_type_name_1() { return static_cast<int32_t>(offsetof(TypeEntry_t1625158409, ___type_name_1)); }
	inline String_t* get_type_name_1() const { return ___type_name_1; }
	inline String_t** get_address_of_type_name_1() { return &___type_name_1; }
	inline void set_type_name_1(String_t* value)
	{
		___type_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEENTRY_T1625158409_H
#ifndef TYPEINFO_T1443218818_H
#define TYPEINFO_T1443218818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.TypeInfo
struct  TypeInfo_t1443218818  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.TypeInfo::serverType
	String_t* ___serverType_0;
	// System.String[] System.Runtime.Remoting.TypeInfo::serverHierarchy
	StringU5BU5D_t301921341* ___serverHierarchy_1;
	// System.String[] System.Runtime.Remoting.TypeInfo::interfacesImplemented
	StringU5BU5D_t301921341* ___interfacesImplemented_2;

public:
	inline static int32_t get_offset_of_serverType_0() { return static_cast<int32_t>(offsetof(TypeInfo_t1443218818, ___serverType_0)); }
	inline String_t* get_serverType_0() const { return ___serverType_0; }
	inline String_t** get_address_of_serverType_0() { return &___serverType_0; }
	inline void set_serverType_0(String_t* value)
	{
		___serverType_0 = value;
		Il2CppCodeGenWriteBarrier((&___serverType_0), value);
	}

	inline static int32_t get_offset_of_serverHierarchy_1() { return static_cast<int32_t>(offsetof(TypeInfo_t1443218818, ___serverHierarchy_1)); }
	inline StringU5BU5D_t301921341* get_serverHierarchy_1() const { return ___serverHierarchy_1; }
	inline StringU5BU5D_t301921341** get_address_of_serverHierarchy_1() { return &___serverHierarchy_1; }
	inline void set_serverHierarchy_1(StringU5BU5D_t301921341* value)
	{
		___serverHierarchy_1 = value;
		Il2CppCodeGenWriteBarrier((&___serverHierarchy_1), value);
	}

	inline static int32_t get_offset_of_interfacesImplemented_2() { return static_cast<int32_t>(offsetof(TypeInfo_t1443218818, ___interfacesImplemented_2)); }
	inline StringU5BU5D_t301921341* get_interfacesImplemented_2() const { return ___interfacesImplemented_2; }
	inline StringU5BU5D_t301921341** get_address_of_interfacesImplemented_2() { return &___interfacesImplemented_2; }
	inline void set_interfacesImplemented_2(StringU5BU5D_t301921341* value)
	{
		___interfacesImplemented_2 = value;
		Il2CppCodeGenWriteBarrier((&___interfacesImplemented_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T1443218818_H
#ifndef BASEFIXUPRECORD_T2987036477_H
#define BASEFIXUPRECORD_T2987036477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.BaseFixupRecord
struct  BaseFixupRecord_t2987036477  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.BaseFixupRecord::ObjectToBeFixed
	ObjectRecord_t2987177946 * ___ObjectToBeFixed_0;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.BaseFixupRecord::ObjectRequired
	ObjectRecord_t2987177946 * ___ObjectRequired_1;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.BaseFixupRecord::NextSameContainer
	BaseFixupRecord_t2987036477 * ___NextSameContainer_2;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.BaseFixupRecord::NextSameRequired
	BaseFixupRecord_t2987036477 * ___NextSameRequired_3;

public:
	inline static int32_t get_offset_of_ObjectToBeFixed_0() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t2987036477, ___ObjectToBeFixed_0)); }
	inline ObjectRecord_t2987177946 * get_ObjectToBeFixed_0() const { return ___ObjectToBeFixed_0; }
	inline ObjectRecord_t2987177946 ** get_address_of_ObjectToBeFixed_0() { return &___ObjectToBeFixed_0; }
	inline void set_ObjectToBeFixed_0(ObjectRecord_t2987177946 * value)
	{
		___ObjectToBeFixed_0 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectToBeFixed_0), value);
	}

	inline static int32_t get_offset_of_ObjectRequired_1() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t2987036477, ___ObjectRequired_1)); }
	inline ObjectRecord_t2987177946 * get_ObjectRequired_1() const { return ___ObjectRequired_1; }
	inline ObjectRecord_t2987177946 ** get_address_of_ObjectRequired_1() { return &___ObjectRequired_1; }
	inline void set_ObjectRequired_1(ObjectRecord_t2987177946 * value)
	{
		___ObjectRequired_1 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectRequired_1), value);
	}

	inline static int32_t get_offset_of_NextSameContainer_2() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t2987036477, ___NextSameContainer_2)); }
	inline BaseFixupRecord_t2987036477 * get_NextSameContainer_2() const { return ___NextSameContainer_2; }
	inline BaseFixupRecord_t2987036477 ** get_address_of_NextSameContainer_2() { return &___NextSameContainer_2; }
	inline void set_NextSameContainer_2(BaseFixupRecord_t2987036477 * value)
	{
		___NextSameContainer_2 = value;
		Il2CppCodeGenWriteBarrier((&___NextSameContainer_2), value);
	}

	inline static int32_t get_offset_of_NextSameRequired_3() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t2987036477, ___NextSameRequired_3)); }
	inline BaseFixupRecord_t2987036477 * get_NextSameRequired_3() const { return ___NextSameRequired_3; }
	inline BaseFixupRecord_t2987036477 ** get_address_of_NextSameRequired_3() { return &___NextSameRequired_3; }
	inline void set_NextSameRequired_3(BaseFixupRecord_t2987036477 * value)
	{
		___NextSameRequired_3 = value;
		Il2CppCodeGenWriteBarrier((&___NextSameRequired_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEFIXUPRECORD_T2987036477_H
#ifndef FORMATTERSERVICES_T2544545055_H
#define FORMATTERSERVICES_T2544545055_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FormatterServices
struct  FormatterServices_t2544545055  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERSERVICES_T2544545055_H
#ifndef BINARYCOMMON_T2627644911_H
#define BINARYCOMMON_T2627644911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryCommon
struct  BinaryCommon_t2627644911  : public RuntimeObject
{
public:

public:
};

struct BinaryCommon_t2627644911_StaticFields
{
public:
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::BinaryHeader
	ByteU5BU5D_t71162679* ___BinaryHeader_0;
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::_typeCodesToType
	TypeU5BU5D_t796675467* ____typeCodesToType_1;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::_typeCodeMap
	ByteU5BU5D_t71162679* ____typeCodeMap_2;
	// System.Boolean System.Runtime.Serialization.Formatters.Binary.BinaryCommon::UseReflectionSerialization
	bool ___UseReflectionSerialization_3;

public:
	inline static int32_t get_offset_of_BinaryHeader_0() { return static_cast<int32_t>(offsetof(BinaryCommon_t2627644911_StaticFields, ___BinaryHeader_0)); }
	inline ByteU5BU5D_t71162679* get_BinaryHeader_0() const { return ___BinaryHeader_0; }
	inline ByteU5BU5D_t71162679** get_address_of_BinaryHeader_0() { return &___BinaryHeader_0; }
	inline void set_BinaryHeader_0(ByteU5BU5D_t71162679* value)
	{
		___BinaryHeader_0 = value;
		Il2CppCodeGenWriteBarrier((&___BinaryHeader_0), value);
	}

	inline static int32_t get_offset_of__typeCodesToType_1() { return static_cast<int32_t>(offsetof(BinaryCommon_t2627644911_StaticFields, ____typeCodesToType_1)); }
	inline TypeU5BU5D_t796675467* get__typeCodesToType_1() const { return ____typeCodesToType_1; }
	inline TypeU5BU5D_t796675467** get_address_of__typeCodesToType_1() { return &____typeCodesToType_1; }
	inline void set__typeCodesToType_1(TypeU5BU5D_t796675467* value)
	{
		____typeCodesToType_1 = value;
		Il2CppCodeGenWriteBarrier((&____typeCodesToType_1), value);
	}

	inline static int32_t get_offset_of__typeCodeMap_2() { return static_cast<int32_t>(offsetof(BinaryCommon_t2627644911_StaticFields, ____typeCodeMap_2)); }
	inline ByteU5BU5D_t71162679* get__typeCodeMap_2() const { return ____typeCodeMap_2; }
	inline ByteU5BU5D_t71162679** get_address_of__typeCodeMap_2() { return &____typeCodeMap_2; }
	inline void set__typeCodeMap_2(ByteU5BU5D_t71162679* value)
	{
		____typeCodeMap_2 = value;
		Il2CppCodeGenWriteBarrier((&____typeCodeMap_2), value);
	}

	inline static int32_t get_offset_of_UseReflectionSerialization_3() { return static_cast<int32_t>(offsetof(BinaryCommon_t2627644911_StaticFields, ___UseReflectionSerialization_3)); }
	inline bool get_UseReflectionSerialization_3() const { return ___UseReflectionSerialization_3; }
	inline bool* get_address_of_UseReflectionSerialization_3() { return &___UseReflectionSerialization_3; }
	inline void set_UseReflectionSerialization_3(bool value)
	{
		___UseReflectionSerialization_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYCOMMON_T2627644911_H
#ifndef FORMATTERCONVERTER_T3275969241_H
#define FORMATTERCONVERTER_T3275969241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FormatterConverter
struct  FormatterConverter_t3275969241  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERCONVERTER_T3275969241_H
#ifndef ARRAYNULLFILLER_T412688595_H
#define ARRAYNULLFILLER_T412688595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectReader/ArrayNullFiller
struct  ArrayNullFiller_t412688595  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader/ArrayNullFiller::NullCount
	int32_t ___NullCount_0;

public:
	inline static int32_t get_offset_of_NullCount_0() { return static_cast<int32_t>(offsetof(ArrayNullFiller_t412688595, ___NullCount_0)); }
	inline int32_t get_NullCount_0() const { return ___NullCount_0; }
	inline int32_t* get_address_of_NullCount_0() { return &___NullCount_0; }
	inline void set_NullCount_0(int32_t value)
	{
		___NullCount_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYNULLFILLER_T412688595_H
#ifndef PROVIDERDATA_T3549448575_H
#define PROVIDERDATA_T3549448575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ProviderData
struct  ProviderData_t3549448575  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.ProviderData::Ref
	String_t* ___Ref_0;
	// System.String System.Runtime.Remoting.ProviderData::Type
	String_t* ___Type_1;
	// System.String System.Runtime.Remoting.ProviderData::Id
	String_t* ___Id_2;
	// System.Collections.Hashtable System.Runtime.Remoting.ProviderData::CustomProperties
	Hashtable_t914140952 * ___CustomProperties_3;
	// System.Collections.IList System.Runtime.Remoting.ProviderData::CustomData
	RuntimeObject* ___CustomData_4;

public:
	inline static int32_t get_offset_of_Ref_0() { return static_cast<int32_t>(offsetof(ProviderData_t3549448575, ___Ref_0)); }
	inline String_t* get_Ref_0() const { return ___Ref_0; }
	inline String_t** get_address_of_Ref_0() { return &___Ref_0; }
	inline void set_Ref_0(String_t* value)
	{
		___Ref_0 = value;
		Il2CppCodeGenWriteBarrier((&___Ref_0), value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(ProviderData_t3549448575, ___Type_1)); }
	inline String_t* get_Type_1() const { return ___Type_1; }
	inline String_t** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(String_t* value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier((&___Type_1), value);
	}

	inline static int32_t get_offset_of_Id_2() { return static_cast<int32_t>(offsetof(ProviderData_t3549448575, ___Id_2)); }
	inline String_t* get_Id_2() const { return ___Id_2; }
	inline String_t** get_address_of_Id_2() { return &___Id_2; }
	inline void set_Id_2(String_t* value)
	{
		___Id_2 = value;
		Il2CppCodeGenWriteBarrier((&___Id_2), value);
	}

	inline static int32_t get_offset_of_CustomProperties_3() { return static_cast<int32_t>(offsetof(ProviderData_t3549448575, ___CustomProperties_3)); }
	inline Hashtable_t914140952 * get_CustomProperties_3() const { return ___CustomProperties_3; }
	inline Hashtable_t914140952 ** get_address_of_CustomProperties_3() { return &___CustomProperties_3; }
	inline void set_CustomProperties_3(Hashtable_t914140952 * value)
	{
		___CustomProperties_3 = value;
		Il2CppCodeGenWriteBarrier((&___CustomProperties_3), value);
	}

	inline static int32_t get_offset_of_CustomData_4() { return static_cast<int32_t>(offsetof(ProviderData_t3549448575, ___CustomData_4)); }
	inline RuntimeObject* get_CustomData_4() const { return ___CustomData_4; }
	inline RuntimeObject** get_address_of_CustomData_4() { return &___CustomData_4; }
	inline void set_CustomData_4(RuntimeObject* value)
	{
		___CustomData_4 = value;
		Il2CppCodeGenWriteBarrier((&___CustomData_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROVIDERDATA_T3549448575_H
#ifndef SERIALIZATIONINFO_T3511065455_H
#define SERIALIZATIONINFO_T3511065455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t3511065455  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationInfo::serialized
	Hashtable_t914140952 * ___serialized_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationInfo::values
	ArrayList_t121513687 * ___values_1;
	// System.String System.Runtime.Serialization.SerializationInfo::assemblyName
	String_t* ___assemblyName_2;
	// System.String System.Runtime.Serialization.SerializationInfo::fullTypeName
	String_t* ___fullTypeName_3;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::converter
	RuntimeObject* ___converter_4;

public:
	inline static int32_t get_offset_of_serialized_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t3511065455, ___serialized_0)); }
	inline Hashtable_t914140952 * get_serialized_0() const { return ___serialized_0; }
	inline Hashtable_t914140952 ** get_address_of_serialized_0() { return &___serialized_0; }
	inline void set_serialized_0(Hashtable_t914140952 * value)
	{
		___serialized_0 = value;
		Il2CppCodeGenWriteBarrier((&___serialized_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t3511065455, ___values_1)); }
	inline ArrayList_t121513687 * get_values_1() const { return ___values_1; }
	inline ArrayList_t121513687 ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ArrayList_t121513687 * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_assemblyName_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t3511065455, ___assemblyName_2)); }
	inline String_t* get_assemblyName_2() const { return ___assemblyName_2; }
	inline String_t** get_address_of_assemblyName_2() { return &___assemblyName_2; }
	inline void set_assemblyName_2(String_t* value)
	{
		___assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_2), value);
	}

	inline static int32_t get_offset_of_fullTypeName_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t3511065455, ___fullTypeName_3)); }
	inline String_t* get_fullTypeName_3() const { return ___fullTypeName_3; }
	inline String_t** get_address_of_fullTypeName_3() { return &___fullTypeName_3; }
	inline void set_fullTypeName_3(String_t* value)
	{
		___fullTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___fullTypeName_3), value);
	}

	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t3511065455, ___converter_4)); }
	inline RuntimeObject* get_converter_4() const { return ___converter_4; }
	inline RuntimeObject** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(RuntimeObject* value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T3511065455_H
#ifndef ENVOYINFO_T3096448255_H
#define ENVOYINFO_T3096448255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.EnvoyInfo
struct  EnvoyInfo_t3096448255  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.EnvoyInfo::envoySinks
	RuntimeObject* ___envoySinks_0;

public:
	inline static int32_t get_offset_of_envoySinks_0() { return static_cast<int32_t>(offsetof(EnvoyInfo_t3096448255, ___envoySinks_0)); }
	inline RuntimeObject* get_envoySinks_0() const { return ___envoySinks_0; }
	inline RuntimeObject** get_address_of_envoySinks_0() { return &___envoySinks_0; }
	inline void set_envoySinks_0(RuntimeObject* value)
	{
		___envoySinks_0 = value;
		Il2CppCodeGenWriteBarrier((&___envoySinks_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVOYINFO_T3096448255_H
#ifndef TRANSPARENTPROXY_T2660746388_H
#define TRANSPARENTPROXY_T2660746388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Proxies.TransparentProxy
struct  TransparentProxy_t2660746388  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.TransparentProxy::_rp
	RealProxy_t3589323136 * ____rp_0;

public:
	inline static int32_t get_offset_of__rp_0() { return static_cast<int32_t>(offsetof(TransparentProxy_t2660746388, ____rp_0)); }
	inline RealProxy_t3589323136 * get__rp_0() const { return ____rp_0; }
	inline RealProxy_t3589323136 ** get_address_of__rp_0() { return &____rp_0; }
	inline void set__rp_0(RealProxy_t3589323136 * value)
	{
		____rp_0 = value;
		Il2CppCodeGenWriteBarrier((&____rp_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSPARENTPROXY_T2660746388_H
#ifndef CALLCONTEXTREMOTINGDATA_T4153724578_H
#define CALLCONTEXTREMOTINGDATA_T4153724578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.CallContextRemotingData
struct  CallContextRemotingData_t4153724578  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Messaging.CallContextRemotingData::_logicalCallID
	String_t* ____logicalCallID_0;

public:
	inline static int32_t get_offset_of__logicalCallID_0() { return static_cast<int32_t>(offsetof(CallContextRemotingData_t4153724578, ____logicalCallID_0)); }
	inline String_t* get__logicalCallID_0() const { return ____logicalCallID_0; }
	inline String_t** get_address_of__logicalCallID_0() { return &____logicalCallID_0; }
	inline void set__logicalCallID_0(String_t* value)
	{
		____logicalCallID_0 = value;
		Il2CppCodeGenWriteBarrier((&____logicalCallID_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLCONTEXTREMOTINGDATA_T4153724578_H
#ifndef METHODCALL_T2493424177_H
#define METHODCALL_T2493424177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodCall
struct  MethodCall_t2493424177  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_uri
	String_t* ____uri_0;
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_typeName
	String_t* ____typeName_1;
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_methodName
	String_t* ____methodName_2;
	// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::_args
	ObjectU5BU5D_t4174854926* ____args_3;
	// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::_methodSignature
	TypeU5BU5D_t796675467* ____methodSignature_4;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::_methodBase
	MethodBase_t2043765930 * ____methodBase_5;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::_callContext
	LogicalCallContext_t1888585080 * ____callContext_6;
	// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::_genericArguments
	TypeU5BU5D_t796675467* ____genericArguments_7;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::ExternalProperties
	RuntimeObject* ___ExternalProperties_8;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::InternalProperties
	RuntimeObject* ___InternalProperties_9;

public:
	inline static int32_t get_offset_of__uri_0() { return static_cast<int32_t>(offsetof(MethodCall_t2493424177, ____uri_0)); }
	inline String_t* get__uri_0() const { return ____uri_0; }
	inline String_t** get_address_of__uri_0() { return &____uri_0; }
	inline void set__uri_0(String_t* value)
	{
		____uri_0 = value;
		Il2CppCodeGenWriteBarrier((&____uri_0), value);
	}

	inline static int32_t get_offset_of__typeName_1() { return static_cast<int32_t>(offsetof(MethodCall_t2493424177, ____typeName_1)); }
	inline String_t* get__typeName_1() const { return ____typeName_1; }
	inline String_t** get_address_of__typeName_1() { return &____typeName_1; }
	inline void set__typeName_1(String_t* value)
	{
		____typeName_1 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_1), value);
	}

	inline static int32_t get_offset_of__methodName_2() { return static_cast<int32_t>(offsetof(MethodCall_t2493424177, ____methodName_2)); }
	inline String_t* get__methodName_2() const { return ____methodName_2; }
	inline String_t** get_address_of__methodName_2() { return &____methodName_2; }
	inline void set__methodName_2(String_t* value)
	{
		____methodName_2 = value;
		Il2CppCodeGenWriteBarrier((&____methodName_2), value);
	}

	inline static int32_t get_offset_of__args_3() { return static_cast<int32_t>(offsetof(MethodCall_t2493424177, ____args_3)); }
	inline ObjectU5BU5D_t4174854926* get__args_3() const { return ____args_3; }
	inline ObjectU5BU5D_t4174854926** get_address_of__args_3() { return &____args_3; }
	inline void set__args_3(ObjectU5BU5D_t4174854926* value)
	{
		____args_3 = value;
		Il2CppCodeGenWriteBarrier((&____args_3), value);
	}

	inline static int32_t get_offset_of__methodSignature_4() { return static_cast<int32_t>(offsetof(MethodCall_t2493424177, ____methodSignature_4)); }
	inline TypeU5BU5D_t796675467* get__methodSignature_4() const { return ____methodSignature_4; }
	inline TypeU5BU5D_t796675467** get_address_of__methodSignature_4() { return &____methodSignature_4; }
	inline void set__methodSignature_4(TypeU5BU5D_t796675467* value)
	{
		____methodSignature_4 = value;
		Il2CppCodeGenWriteBarrier((&____methodSignature_4), value);
	}

	inline static int32_t get_offset_of__methodBase_5() { return static_cast<int32_t>(offsetof(MethodCall_t2493424177, ____methodBase_5)); }
	inline MethodBase_t2043765930 * get__methodBase_5() const { return ____methodBase_5; }
	inline MethodBase_t2043765930 ** get_address_of__methodBase_5() { return &____methodBase_5; }
	inline void set__methodBase_5(MethodBase_t2043765930 * value)
	{
		____methodBase_5 = value;
		Il2CppCodeGenWriteBarrier((&____methodBase_5), value);
	}

	inline static int32_t get_offset_of__callContext_6() { return static_cast<int32_t>(offsetof(MethodCall_t2493424177, ____callContext_6)); }
	inline LogicalCallContext_t1888585080 * get__callContext_6() const { return ____callContext_6; }
	inline LogicalCallContext_t1888585080 ** get_address_of__callContext_6() { return &____callContext_6; }
	inline void set__callContext_6(LogicalCallContext_t1888585080 * value)
	{
		____callContext_6 = value;
		Il2CppCodeGenWriteBarrier((&____callContext_6), value);
	}

	inline static int32_t get_offset_of__genericArguments_7() { return static_cast<int32_t>(offsetof(MethodCall_t2493424177, ____genericArguments_7)); }
	inline TypeU5BU5D_t796675467* get__genericArguments_7() const { return ____genericArguments_7; }
	inline TypeU5BU5D_t796675467** get_address_of__genericArguments_7() { return &____genericArguments_7; }
	inline void set__genericArguments_7(TypeU5BU5D_t796675467* value)
	{
		____genericArguments_7 = value;
		Il2CppCodeGenWriteBarrier((&____genericArguments_7), value);
	}

	inline static int32_t get_offset_of_ExternalProperties_8() { return static_cast<int32_t>(offsetof(MethodCall_t2493424177, ___ExternalProperties_8)); }
	inline RuntimeObject* get_ExternalProperties_8() const { return ___ExternalProperties_8; }
	inline RuntimeObject** get_address_of_ExternalProperties_8() { return &___ExternalProperties_8; }
	inline void set_ExternalProperties_8(RuntimeObject* value)
	{
		___ExternalProperties_8 = value;
		Il2CppCodeGenWriteBarrier((&___ExternalProperties_8), value);
	}

	inline static int32_t get_offset_of_InternalProperties_9() { return static_cast<int32_t>(offsetof(MethodCall_t2493424177, ___InternalProperties_9)); }
	inline RuntimeObject* get_InternalProperties_9() const { return ___InternalProperties_9; }
	inline RuntimeObject** get_address_of_InternalProperties_9() { return &___InternalProperties_9; }
	inline void set_InternalProperties_9(RuntimeObject* value)
	{
		___InternalProperties_9 = value;
		Il2CppCodeGenWriteBarrier((&___InternalProperties_9), value);
	}
};

struct MethodCall_t2493424177_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodCall::<>f__switch$map1F
	Dictionary_2_t997430228 * ___U3CU3Ef__switchU24map1F_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1F_10() { return static_cast<int32_t>(offsetof(MethodCall_t2493424177_StaticFields, ___U3CU3Ef__switchU24map1F_10)); }
	inline Dictionary_2_t997430228 * get_U3CU3Ef__switchU24map1F_10() const { return ___U3CU3Ef__switchU24map1F_10; }
	inline Dictionary_2_t997430228 ** get_address_of_U3CU3Ef__switchU24map1F_10() { return &___U3CU3Ef__switchU24map1F_10; }
	inline void set_U3CU3Ef__switchU24map1F_10(Dictionary_2_t997430228 * value)
	{
		___U3CU3Ef__switchU24map1F_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1F_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALL_T2493424177_H
#ifndef EXCEPTION_T1948673266_H
#define EXCEPTION_T1948673266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1948673266  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t1622644272* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t1948673266 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t1948673266, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t1622644272* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t1622644272** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t1622644272* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1948673266, ___inner_exception_1)); }
	inline Exception_t1948673266 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1948673266 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1948673266 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1948673266, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1948673266, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1948673266, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1948673266, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1948673266, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1948673266, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1948673266, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1948673266, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1948673266, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T1948673266_H
#ifndef METHODDICTIONARY_T1024301057_H
#define METHODDICTIONARY_T1024301057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodDictionary
struct  MethodDictionary_t1024301057  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::_internalProperties
	RuntimeObject* ____internalProperties_0;
	// System.Runtime.Remoting.Messaging.IMethodMessage System.Runtime.Remoting.Messaging.MethodDictionary::_message
	RuntimeObject* ____message_1;
	// System.String[] System.Runtime.Remoting.Messaging.MethodDictionary::_methodKeys
	StringU5BU5D_t301921341* ____methodKeys_2;
	// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::_ownProperties
	bool ____ownProperties_3;

public:
	inline static int32_t get_offset_of__internalProperties_0() { return static_cast<int32_t>(offsetof(MethodDictionary_t1024301057, ____internalProperties_0)); }
	inline RuntimeObject* get__internalProperties_0() const { return ____internalProperties_0; }
	inline RuntimeObject** get_address_of__internalProperties_0() { return &____internalProperties_0; }
	inline void set__internalProperties_0(RuntimeObject* value)
	{
		____internalProperties_0 = value;
		Il2CppCodeGenWriteBarrier((&____internalProperties_0), value);
	}

	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(MethodDictionary_t1024301057, ____message_1)); }
	inline RuntimeObject* get__message_1() const { return ____message_1; }
	inline RuntimeObject** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(RuntimeObject* value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier((&____message_1), value);
	}

	inline static int32_t get_offset_of__methodKeys_2() { return static_cast<int32_t>(offsetof(MethodDictionary_t1024301057, ____methodKeys_2)); }
	inline StringU5BU5D_t301921341* get__methodKeys_2() const { return ____methodKeys_2; }
	inline StringU5BU5D_t301921341** get_address_of__methodKeys_2() { return &____methodKeys_2; }
	inline void set__methodKeys_2(StringU5BU5D_t301921341* value)
	{
		____methodKeys_2 = value;
		Il2CppCodeGenWriteBarrier((&____methodKeys_2), value);
	}

	inline static int32_t get_offset_of__ownProperties_3() { return static_cast<int32_t>(offsetof(MethodDictionary_t1024301057, ____ownProperties_3)); }
	inline bool get__ownProperties_3() const { return ____ownProperties_3; }
	inline bool* get_address_of__ownProperties_3() { return &____ownProperties_3; }
	inline void set__ownProperties_3(bool value)
	{
		____ownProperties_3 = value;
	}
};

struct MethodDictionary_t1024301057_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodDictionary::<>f__switch$map21
	Dictionary_2_t997430228 * ___U3CU3Ef__switchU24map21_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodDictionary::<>f__switch$map22
	Dictionary_2_t997430228 * ___U3CU3Ef__switchU24map22_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map21_4() { return static_cast<int32_t>(offsetof(MethodDictionary_t1024301057_StaticFields, ___U3CU3Ef__switchU24map21_4)); }
	inline Dictionary_2_t997430228 * get_U3CU3Ef__switchU24map21_4() const { return ___U3CU3Ef__switchU24map21_4; }
	inline Dictionary_2_t997430228 ** get_address_of_U3CU3Ef__switchU24map21_4() { return &___U3CU3Ef__switchU24map21_4; }
	inline void set_U3CU3Ef__switchU24map21_4(Dictionary_2_t997430228 * value)
	{
		___U3CU3Ef__switchU24map21_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map21_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map22_5() { return static_cast<int32_t>(offsetof(MethodDictionary_t1024301057_StaticFields, ___U3CU3Ef__switchU24map22_5)); }
	inline Dictionary_2_t997430228 * get_U3CU3Ef__switchU24map22_5() const { return ___U3CU3Ef__switchU24map22_5; }
	inline Dictionary_2_t997430228 ** get_address_of_U3CU3Ef__switchU24map22_5() { return &___U3CU3Ef__switchU24map22_5; }
	inline void set_U3CU3Ef__switchU24map22_5(Dictionary_2_t997430228 * value)
	{
		___U3CU3Ef__switchU24map22_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map22_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODDICTIONARY_T1024301057_H
#ifndef DICTIONARYENUMERATOR_T1684363397_H
#define DICTIONARYENUMERATOR_T1684363397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
struct  DictionaryEnumerator_t1684363397  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.MethodDictionary System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::_methodDictionary
	MethodDictionary_t1024301057 * ____methodDictionary_0;
	// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::_hashtableEnum
	RuntimeObject* ____hashtableEnum_1;
	// System.Int32 System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::_posMethod
	int32_t ____posMethod_2;

public:
	inline static int32_t get_offset_of__methodDictionary_0() { return static_cast<int32_t>(offsetof(DictionaryEnumerator_t1684363397, ____methodDictionary_0)); }
	inline MethodDictionary_t1024301057 * get__methodDictionary_0() const { return ____methodDictionary_0; }
	inline MethodDictionary_t1024301057 ** get_address_of__methodDictionary_0() { return &____methodDictionary_0; }
	inline void set__methodDictionary_0(MethodDictionary_t1024301057 * value)
	{
		____methodDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&____methodDictionary_0), value);
	}

	inline static int32_t get_offset_of__hashtableEnum_1() { return static_cast<int32_t>(offsetof(DictionaryEnumerator_t1684363397, ____hashtableEnum_1)); }
	inline RuntimeObject* get__hashtableEnum_1() const { return ____hashtableEnum_1; }
	inline RuntimeObject** get_address_of__hashtableEnum_1() { return &____hashtableEnum_1; }
	inline void set__hashtableEnum_1(RuntimeObject* value)
	{
		____hashtableEnum_1 = value;
		Il2CppCodeGenWriteBarrier((&____hashtableEnum_1), value);
	}

	inline static int32_t get_offset_of__posMethod_2() { return static_cast<int32_t>(offsetof(DictionaryEnumerator_t1684363397, ____posMethod_2)); }
	inline int32_t get__posMethod_2() const { return ____posMethod_2; }
	inline int32_t* get_address_of__posMethod_2() { return &____posMethod_2; }
	inline void set__posMethod_2(int32_t value)
	{
		____posMethod_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYENUMERATOR_T1684363397_H
#ifndef VALUETYPE_T1980742048_H
#define VALUETYPE_T1980742048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1980742048  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1980742048_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1980742048_marshaled_com
{
};
#endif // VALUETYPE_T1980742048_H
#ifndef MONOMETHODMESSAGE_T1918637528_H
#define MONOMETHODMESSAGE_T1918637528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct  MonoMethodMessage_t1918637528  : public RuntimeObject
{
public:
	// System.Reflection.MonoMethod System.Runtime.Remoting.Messaging.MonoMethodMessage::method
	MonoMethod_t * ___method_0;
	// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::args
	ObjectU5BU5D_t4174854926* ___args_1;
	// System.Byte[] System.Runtime.Remoting.Messaging.MonoMethodMessage::arg_types
	ByteU5BU5D_t71162679* ___arg_types_2;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::ctx
	LogicalCallContext_t1888585080 * ___ctx_3;
	// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::rval
	RuntimeObject * ___rval_4;
	// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::exc
	Exception_t1948673266 * ___exc_5;
	// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::uri
	String_t* ___uri_6;
	// System.Type[] System.Runtime.Remoting.Messaging.MonoMethodMessage::methodSignature
	TypeU5BU5D_t796675467* ___methodSignature_7;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t1918637528, ___method_0)); }
	inline MonoMethod_t * get_method_0() const { return ___method_0; }
	inline MonoMethod_t ** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(MonoMethod_t * value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier((&___method_0), value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t1918637528, ___args_1)); }
	inline ObjectU5BU5D_t4174854926* get_args_1() const { return ___args_1; }
	inline ObjectU5BU5D_t4174854926** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(ObjectU5BU5D_t4174854926* value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier((&___args_1), value);
	}

	inline static int32_t get_offset_of_arg_types_2() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t1918637528, ___arg_types_2)); }
	inline ByteU5BU5D_t71162679* get_arg_types_2() const { return ___arg_types_2; }
	inline ByteU5BU5D_t71162679** get_address_of_arg_types_2() { return &___arg_types_2; }
	inline void set_arg_types_2(ByteU5BU5D_t71162679* value)
	{
		___arg_types_2 = value;
		Il2CppCodeGenWriteBarrier((&___arg_types_2), value);
	}

	inline static int32_t get_offset_of_ctx_3() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t1918637528, ___ctx_3)); }
	inline LogicalCallContext_t1888585080 * get_ctx_3() const { return ___ctx_3; }
	inline LogicalCallContext_t1888585080 ** get_address_of_ctx_3() { return &___ctx_3; }
	inline void set_ctx_3(LogicalCallContext_t1888585080 * value)
	{
		___ctx_3 = value;
		Il2CppCodeGenWriteBarrier((&___ctx_3), value);
	}

	inline static int32_t get_offset_of_rval_4() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t1918637528, ___rval_4)); }
	inline RuntimeObject * get_rval_4() const { return ___rval_4; }
	inline RuntimeObject ** get_address_of_rval_4() { return &___rval_4; }
	inline void set_rval_4(RuntimeObject * value)
	{
		___rval_4 = value;
		Il2CppCodeGenWriteBarrier((&___rval_4), value);
	}

	inline static int32_t get_offset_of_exc_5() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t1918637528, ___exc_5)); }
	inline Exception_t1948673266 * get_exc_5() const { return ___exc_5; }
	inline Exception_t1948673266 ** get_address_of_exc_5() { return &___exc_5; }
	inline void set_exc_5(Exception_t1948673266 * value)
	{
		___exc_5 = value;
		Il2CppCodeGenWriteBarrier((&___exc_5), value);
	}

	inline static int32_t get_offset_of_uri_6() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t1918637528, ___uri_6)); }
	inline String_t* get_uri_6() const { return ___uri_6; }
	inline String_t** get_address_of_uri_6() { return &___uri_6; }
	inline void set_uri_6(String_t* value)
	{
		___uri_6 = value;
		Il2CppCodeGenWriteBarrier((&___uri_6), value);
	}

	inline static int32_t get_offset_of_methodSignature_7() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t1918637528, ___methodSignature_7)); }
	inline TypeU5BU5D_t796675467* get_methodSignature_7() const { return ___methodSignature_7; }
	inline TypeU5BU5D_t796675467** get_address_of_methodSignature_7() { return &___methodSignature_7; }
	inline void set_methodSignature_7(TypeU5BU5D_t796675467* value)
	{
		___methodSignature_7 = value;
		Il2CppCodeGenWriteBarrier((&___methodSignature_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOMETHODMESSAGE_T1918637528_H
#ifndef REMOTINGSURROGATE_T4104407834_H
#define REMOTINGSURROGATE_T4104407834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.RemotingSurrogate
struct  RemotingSurrogate_t4104407834  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGSURROGATE_T4104407834_H
#ifndef OBJREFSURROGATE_T1583203692_H
#define OBJREFSURROGATE_T1583203692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ObjRefSurrogate
struct  ObjRefSurrogate_t1583203692  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJREFSURROGATE_T1583203692_H
#ifndef REALPROXY_T3589323136_H
#define REALPROXY_T3589323136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Proxies.RealProxy
struct  RealProxy_t3589323136  : public RuntimeObject
{
public:
	// System.Type System.Runtime.Remoting.Proxies.RealProxy::class_to_proxy
	Type_t * ___class_to_proxy_0;
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Proxies.RealProxy::_targetContext
	Context_t339417115 * ____targetContext_1;
	// System.MarshalByRefObject System.Runtime.Remoting.Proxies.RealProxy::_server
	MarshalByRefObject_t3363895060 * ____server_2;
	// System.Int32 System.Runtime.Remoting.Proxies.RealProxy::_targetDomainId
	int32_t ____targetDomainId_3;
	// System.String System.Runtime.Remoting.Proxies.RealProxy::_targetUri
	String_t* ____targetUri_4;
	// System.Runtime.Remoting.Identity System.Runtime.Remoting.Proxies.RealProxy::_objectIdentity
	Identity_t3462146499 * ____objectIdentity_5;
	// System.Object System.Runtime.Remoting.Proxies.RealProxy::_objTP
	RuntimeObject * ____objTP_6;
	// System.Object System.Runtime.Remoting.Proxies.RealProxy::_stubData
	RuntimeObject * ____stubData_7;

public:
	inline static int32_t get_offset_of_class_to_proxy_0() { return static_cast<int32_t>(offsetof(RealProxy_t3589323136, ___class_to_proxy_0)); }
	inline Type_t * get_class_to_proxy_0() const { return ___class_to_proxy_0; }
	inline Type_t ** get_address_of_class_to_proxy_0() { return &___class_to_proxy_0; }
	inline void set_class_to_proxy_0(Type_t * value)
	{
		___class_to_proxy_0 = value;
		Il2CppCodeGenWriteBarrier((&___class_to_proxy_0), value);
	}

	inline static int32_t get_offset_of__targetContext_1() { return static_cast<int32_t>(offsetof(RealProxy_t3589323136, ____targetContext_1)); }
	inline Context_t339417115 * get__targetContext_1() const { return ____targetContext_1; }
	inline Context_t339417115 ** get_address_of__targetContext_1() { return &____targetContext_1; }
	inline void set__targetContext_1(Context_t339417115 * value)
	{
		____targetContext_1 = value;
		Il2CppCodeGenWriteBarrier((&____targetContext_1), value);
	}

	inline static int32_t get_offset_of__server_2() { return static_cast<int32_t>(offsetof(RealProxy_t3589323136, ____server_2)); }
	inline MarshalByRefObject_t3363895060 * get__server_2() const { return ____server_2; }
	inline MarshalByRefObject_t3363895060 ** get_address_of__server_2() { return &____server_2; }
	inline void set__server_2(MarshalByRefObject_t3363895060 * value)
	{
		____server_2 = value;
		Il2CppCodeGenWriteBarrier((&____server_2), value);
	}

	inline static int32_t get_offset_of__targetDomainId_3() { return static_cast<int32_t>(offsetof(RealProxy_t3589323136, ____targetDomainId_3)); }
	inline int32_t get__targetDomainId_3() const { return ____targetDomainId_3; }
	inline int32_t* get_address_of__targetDomainId_3() { return &____targetDomainId_3; }
	inline void set__targetDomainId_3(int32_t value)
	{
		____targetDomainId_3 = value;
	}

	inline static int32_t get_offset_of__targetUri_4() { return static_cast<int32_t>(offsetof(RealProxy_t3589323136, ____targetUri_4)); }
	inline String_t* get__targetUri_4() const { return ____targetUri_4; }
	inline String_t** get_address_of__targetUri_4() { return &____targetUri_4; }
	inline void set__targetUri_4(String_t* value)
	{
		____targetUri_4 = value;
		Il2CppCodeGenWriteBarrier((&____targetUri_4), value);
	}

	inline static int32_t get_offset_of__objectIdentity_5() { return static_cast<int32_t>(offsetof(RealProxy_t3589323136, ____objectIdentity_5)); }
	inline Identity_t3462146499 * get__objectIdentity_5() const { return ____objectIdentity_5; }
	inline Identity_t3462146499 ** get_address_of__objectIdentity_5() { return &____objectIdentity_5; }
	inline void set__objectIdentity_5(Identity_t3462146499 * value)
	{
		____objectIdentity_5 = value;
		Il2CppCodeGenWriteBarrier((&____objectIdentity_5), value);
	}

	inline static int32_t get_offset_of__objTP_6() { return static_cast<int32_t>(offsetof(RealProxy_t3589323136, ____objTP_6)); }
	inline RuntimeObject * get__objTP_6() const { return ____objTP_6; }
	inline RuntimeObject ** get_address_of__objTP_6() { return &____objTP_6; }
	inline void set__objTP_6(RuntimeObject * value)
	{
		____objTP_6 = value;
		Il2CppCodeGenWriteBarrier((&____objTP_6), value);
	}

	inline static int32_t get_offset_of__stubData_7() { return static_cast<int32_t>(offsetof(RealProxy_t3589323136, ____stubData_7)); }
	inline RuntimeObject * get__stubData_7() const { return ____stubData_7; }
	inline RuntimeObject ** get_address_of__stubData_7() { return &____stubData_7; }
	inline void set__stubData_7(RuntimeObject * value)
	{
		____stubData_7 = value;
		Il2CppCodeGenWriteBarrier((&____stubData_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REALPROXY_T3589323136_H
#ifndef MESSAGEFORMATTER_T3504751248_H
#define MESSAGEFORMATTER_T3504751248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.MessageFormatter
struct  MessageFormatter_t3504751248  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEFORMATTER_T3504751248_H
#ifndef STACKBUILDERSINK_T4267464825_H
#define STACKBUILDERSINK_T4267464825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.StackBuilderSink
struct  StackBuilderSink_t4267464825  : public RuntimeObject
{
public:
	// System.MarshalByRefObject System.Runtime.Remoting.Messaging.StackBuilderSink::_target
	MarshalByRefObject_t3363895060 * ____target_0;
	// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Messaging.StackBuilderSink::_rp
	RealProxy_t3589323136 * ____rp_1;

public:
	inline static int32_t get_offset_of__target_0() { return static_cast<int32_t>(offsetof(StackBuilderSink_t4267464825, ____target_0)); }
	inline MarshalByRefObject_t3363895060 * get__target_0() const { return ____target_0; }
	inline MarshalByRefObject_t3363895060 ** get_address_of__target_0() { return &____target_0; }
	inline void set__target_0(MarshalByRefObject_t3363895060 * value)
	{
		____target_0 = value;
		Il2CppCodeGenWriteBarrier((&____target_0), value);
	}

	inline static int32_t get_offset_of__rp_1() { return static_cast<int32_t>(offsetof(StackBuilderSink_t4267464825, ____rp_1)); }
	inline RealProxy_t3589323136 * get__rp_1() const { return ____rp_1; }
	inline RealProxy_t3589323136 ** get_address_of__rp_1() { return &____rp_1; }
	inline void set__rp_1(RealProxy_t3589323136 * value)
	{
		____rp_1 = value;
		Il2CppCodeGenWriteBarrier((&____rp_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKBUILDERSINK_T4267464825_H
#ifndef SERIALIZATIONINFOENUMERATOR_T225921560_H
#define SERIALIZATIONINFOENUMERATOR_T225921560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfoEnumerator
struct  SerializationInfoEnumerator_t225921560  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Runtime.Serialization.SerializationInfoEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(SerializationInfoEnumerator_t225921560, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFOENUMERATOR_T225921560_H
#ifndef RETURNMESSAGE_T89447257_H
#define RETURNMESSAGE_T89447257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ReturnMessage
struct  ReturnMessage_t89447257  : public RuntimeObject
{
public:
	// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::_outArgs
	ObjectU5BU5D_t4174854926* ____outArgs_0;
	// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::_args
	ObjectU5BU5D_t4174854926* ____args_1;
	// System.Int32 System.Runtime.Remoting.Messaging.ReturnMessage::_outArgsCount
	int32_t ____outArgsCount_2;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::_callCtx
	LogicalCallContext_t1888585080 * ____callCtx_3;
	// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::_returnValue
	RuntimeObject * ____returnValue_4;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_uri
	String_t* ____uri_5;
	// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::_exception
	Exception_t1948673266 * ____exception_6;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::_methodBase
	MethodBase_t2043765930 * ____methodBase_7;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_methodName
	String_t* ____methodName_8;
	// System.Type[] System.Runtime.Remoting.Messaging.ReturnMessage::_methodSignature
	TypeU5BU5D_t796675467* ____methodSignature_9;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_typeName
	String_t* ____typeName_10;
	// System.Runtime.Remoting.Messaging.MethodReturnDictionary System.Runtime.Remoting.Messaging.ReturnMessage::_properties
	MethodReturnDictionary_t144326629 * ____properties_11;
	// System.Runtime.Remoting.Messaging.ArgInfo System.Runtime.Remoting.Messaging.ReturnMessage::_inArgInfo
	ArgInfo_t2018974219 * ____inArgInfo_12;

public:
	inline static int32_t get_offset_of__outArgs_0() { return static_cast<int32_t>(offsetof(ReturnMessage_t89447257, ____outArgs_0)); }
	inline ObjectU5BU5D_t4174854926* get__outArgs_0() const { return ____outArgs_0; }
	inline ObjectU5BU5D_t4174854926** get_address_of__outArgs_0() { return &____outArgs_0; }
	inline void set__outArgs_0(ObjectU5BU5D_t4174854926* value)
	{
		____outArgs_0 = value;
		Il2CppCodeGenWriteBarrier((&____outArgs_0), value);
	}

	inline static int32_t get_offset_of__args_1() { return static_cast<int32_t>(offsetof(ReturnMessage_t89447257, ____args_1)); }
	inline ObjectU5BU5D_t4174854926* get__args_1() const { return ____args_1; }
	inline ObjectU5BU5D_t4174854926** get_address_of__args_1() { return &____args_1; }
	inline void set__args_1(ObjectU5BU5D_t4174854926* value)
	{
		____args_1 = value;
		Il2CppCodeGenWriteBarrier((&____args_1), value);
	}

	inline static int32_t get_offset_of__outArgsCount_2() { return static_cast<int32_t>(offsetof(ReturnMessage_t89447257, ____outArgsCount_2)); }
	inline int32_t get__outArgsCount_2() const { return ____outArgsCount_2; }
	inline int32_t* get_address_of__outArgsCount_2() { return &____outArgsCount_2; }
	inline void set__outArgsCount_2(int32_t value)
	{
		____outArgsCount_2 = value;
	}

	inline static int32_t get_offset_of__callCtx_3() { return static_cast<int32_t>(offsetof(ReturnMessage_t89447257, ____callCtx_3)); }
	inline LogicalCallContext_t1888585080 * get__callCtx_3() const { return ____callCtx_3; }
	inline LogicalCallContext_t1888585080 ** get_address_of__callCtx_3() { return &____callCtx_3; }
	inline void set__callCtx_3(LogicalCallContext_t1888585080 * value)
	{
		____callCtx_3 = value;
		Il2CppCodeGenWriteBarrier((&____callCtx_3), value);
	}

	inline static int32_t get_offset_of__returnValue_4() { return static_cast<int32_t>(offsetof(ReturnMessage_t89447257, ____returnValue_4)); }
	inline RuntimeObject * get__returnValue_4() const { return ____returnValue_4; }
	inline RuntimeObject ** get_address_of__returnValue_4() { return &____returnValue_4; }
	inline void set__returnValue_4(RuntimeObject * value)
	{
		____returnValue_4 = value;
		Il2CppCodeGenWriteBarrier((&____returnValue_4), value);
	}

	inline static int32_t get_offset_of__uri_5() { return static_cast<int32_t>(offsetof(ReturnMessage_t89447257, ____uri_5)); }
	inline String_t* get__uri_5() const { return ____uri_5; }
	inline String_t** get_address_of__uri_5() { return &____uri_5; }
	inline void set__uri_5(String_t* value)
	{
		____uri_5 = value;
		Il2CppCodeGenWriteBarrier((&____uri_5), value);
	}

	inline static int32_t get_offset_of__exception_6() { return static_cast<int32_t>(offsetof(ReturnMessage_t89447257, ____exception_6)); }
	inline Exception_t1948673266 * get__exception_6() const { return ____exception_6; }
	inline Exception_t1948673266 ** get_address_of__exception_6() { return &____exception_6; }
	inline void set__exception_6(Exception_t1948673266 * value)
	{
		____exception_6 = value;
		Il2CppCodeGenWriteBarrier((&____exception_6), value);
	}

	inline static int32_t get_offset_of__methodBase_7() { return static_cast<int32_t>(offsetof(ReturnMessage_t89447257, ____methodBase_7)); }
	inline MethodBase_t2043765930 * get__methodBase_7() const { return ____methodBase_7; }
	inline MethodBase_t2043765930 ** get_address_of__methodBase_7() { return &____methodBase_7; }
	inline void set__methodBase_7(MethodBase_t2043765930 * value)
	{
		____methodBase_7 = value;
		Il2CppCodeGenWriteBarrier((&____methodBase_7), value);
	}

	inline static int32_t get_offset_of__methodName_8() { return static_cast<int32_t>(offsetof(ReturnMessage_t89447257, ____methodName_8)); }
	inline String_t* get__methodName_8() const { return ____methodName_8; }
	inline String_t** get_address_of__methodName_8() { return &____methodName_8; }
	inline void set__methodName_8(String_t* value)
	{
		____methodName_8 = value;
		Il2CppCodeGenWriteBarrier((&____methodName_8), value);
	}

	inline static int32_t get_offset_of__methodSignature_9() { return static_cast<int32_t>(offsetof(ReturnMessage_t89447257, ____methodSignature_9)); }
	inline TypeU5BU5D_t796675467* get__methodSignature_9() const { return ____methodSignature_9; }
	inline TypeU5BU5D_t796675467** get_address_of__methodSignature_9() { return &____methodSignature_9; }
	inline void set__methodSignature_9(TypeU5BU5D_t796675467* value)
	{
		____methodSignature_9 = value;
		Il2CppCodeGenWriteBarrier((&____methodSignature_9), value);
	}

	inline static int32_t get_offset_of__typeName_10() { return static_cast<int32_t>(offsetof(ReturnMessage_t89447257, ____typeName_10)); }
	inline String_t* get__typeName_10() const { return ____typeName_10; }
	inline String_t** get_address_of__typeName_10() { return &____typeName_10; }
	inline void set__typeName_10(String_t* value)
	{
		____typeName_10 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_10), value);
	}

	inline static int32_t get_offset_of__properties_11() { return static_cast<int32_t>(offsetof(ReturnMessage_t89447257, ____properties_11)); }
	inline MethodReturnDictionary_t144326629 * get__properties_11() const { return ____properties_11; }
	inline MethodReturnDictionary_t144326629 ** get_address_of__properties_11() { return &____properties_11; }
	inline void set__properties_11(MethodReturnDictionary_t144326629 * value)
	{
		____properties_11 = value;
		Il2CppCodeGenWriteBarrier((&____properties_11), value);
	}

	inline static int32_t get_offset_of__inArgInfo_12() { return static_cast<int32_t>(offsetof(ReturnMessage_t89447257, ____inArgInfo_12)); }
	inline ArgInfo_t2018974219 * get__inArgInfo_12() const { return ____inArgInfo_12; }
	inline ArgInfo_t2018974219 ** get_address_of__inArgInfo_12() { return &____inArgInfo_12; }
	inline void set__inArgInfo_12(ArgInfo_t2018974219 * value)
	{
		____inArgInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&____inArgInfo_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RETURNMESSAGE_T89447257_H
#ifndef ATTRIBUTE_T2524594493_H
#define ATTRIBUTE_T2524594493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t2524594493  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T2524594493_H
#ifndef SERVERCONTEXTTERMINATORSINK_T3108111550_H
#define SERVERCONTEXTTERMINATORSINK_T3108111550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ServerContextTerminatorSink
struct  ServerContextTerminatorSink_t3108111550  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERCONTEXTTERMINATORSINK_T3108111550_H
#ifndef SERVEROBJECTTERMINATORSINK_T1874770041_H
#define SERVEROBJECTTERMINATORSINK_T1874770041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink
struct  ServerObjectTerminatorSink_t1874770041  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink::_nextSink
	RuntimeObject* ____nextSink_0;

public:
	inline static int32_t get_offset_of__nextSink_0() { return static_cast<int32_t>(offsetof(ServerObjectTerminatorSink_t1874770041, ____nextSink_0)); }
	inline RuntimeObject* get__nextSink_0() const { return ____nextSink_0; }
	inline RuntimeObject** get_address_of__nextSink_0() { return &____nextSink_0; }
	inline void set__nextSink_0(RuntimeObject* value)
	{
		____nextSink_0 = value;
		Il2CppCodeGenWriteBarrier((&____nextSink_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVEROBJECTTERMINATORSINK_T1874770041_H
#ifndef REMOTINGSURROGATESELECTOR_T1548532804_H
#define REMOTINGSURROGATESELECTOR_T1548532804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
struct  RemotingSurrogateSelector_t1548532804  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::_next
	RuntimeObject* ____next_3;

public:
	inline static int32_t get_offset_of__next_3() { return static_cast<int32_t>(offsetof(RemotingSurrogateSelector_t1548532804, ____next_3)); }
	inline RuntimeObject* get__next_3() const { return ____next_3; }
	inline RuntimeObject** get_address_of__next_3() { return &____next_3; }
	inline void set__next_3(RuntimeObject* value)
	{
		____next_3 = value;
		Il2CppCodeGenWriteBarrier((&____next_3), value);
	}
};

struct RemotingSurrogateSelector_t1548532804_StaticFields
{
public:
	// System.Type System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::s_cachedTypeObjRef
	Type_t * ___s_cachedTypeObjRef_0;
	// System.Runtime.Remoting.Messaging.ObjRefSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::_objRefSurrogate
	ObjRefSurrogate_t1583203692 * ____objRefSurrogate_1;
	// System.Runtime.Remoting.Messaging.RemotingSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::_objRemotingSurrogate
	RemotingSurrogate_t4104407834 * ____objRemotingSurrogate_2;

public:
	inline static int32_t get_offset_of_s_cachedTypeObjRef_0() { return static_cast<int32_t>(offsetof(RemotingSurrogateSelector_t1548532804_StaticFields, ___s_cachedTypeObjRef_0)); }
	inline Type_t * get_s_cachedTypeObjRef_0() const { return ___s_cachedTypeObjRef_0; }
	inline Type_t ** get_address_of_s_cachedTypeObjRef_0() { return &___s_cachedTypeObjRef_0; }
	inline void set_s_cachedTypeObjRef_0(Type_t * value)
	{
		___s_cachedTypeObjRef_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_cachedTypeObjRef_0), value);
	}

	inline static int32_t get_offset_of__objRefSurrogate_1() { return static_cast<int32_t>(offsetof(RemotingSurrogateSelector_t1548532804_StaticFields, ____objRefSurrogate_1)); }
	inline ObjRefSurrogate_t1583203692 * get__objRefSurrogate_1() const { return ____objRefSurrogate_1; }
	inline ObjRefSurrogate_t1583203692 ** get_address_of__objRefSurrogate_1() { return &____objRefSurrogate_1; }
	inline void set__objRefSurrogate_1(ObjRefSurrogate_t1583203692 * value)
	{
		____objRefSurrogate_1 = value;
		Il2CppCodeGenWriteBarrier((&____objRefSurrogate_1), value);
	}

	inline static int32_t get_offset_of__objRemotingSurrogate_2() { return static_cast<int32_t>(offsetof(RemotingSurrogateSelector_t1548532804_StaticFields, ____objRemotingSurrogate_2)); }
	inline RemotingSurrogate_t4104407834 * get__objRemotingSurrogate_2() const { return ____objRemotingSurrogate_2; }
	inline RemotingSurrogate_t4104407834 ** get_address_of__objRemotingSurrogate_2() { return &____objRemotingSurrogate_2; }
	inline void set__objRemotingSurrogate_2(RemotingSurrogate_t4104407834 * value)
	{
		____objRemotingSurrogate_2 = value;
		Il2CppCodeGenWriteBarrier((&____objRemotingSurrogate_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGSURROGATESELECTOR_T1548532804_H
#ifndef SERIALIZATIONENTRY_T607454486_H
#define SERIALIZATIONENTRY_T607454486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationEntry
struct  SerializationEntry_t607454486 
{
public:
	// System.String System.Runtime.Serialization.SerializationEntry::name
	String_t* ___name_0;
	// System.Type System.Runtime.Serialization.SerializationEntry::objectType
	Type_t * ___objectType_1;
	// System.Object System.Runtime.Serialization.SerializationEntry::value
	RuntimeObject * ___value_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SerializationEntry_t607454486, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_objectType_1() { return static_cast<int32_t>(offsetof(SerializationEntry_t607454486, ___objectType_1)); }
	inline Type_t * get_objectType_1() const { return ___objectType_1; }
	inline Type_t ** get_address_of_objectType_1() { return &___objectType_1; }
	inline void set_objectType_1(Type_t * value)
	{
		___objectType_1 = value;
		Il2CppCodeGenWriteBarrier((&___objectType_1), value);
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(SerializationEntry_t607454486, ___value_2)); }
	inline RuntimeObject * get_value_2() const { return ___value_2; }
	inline RuntimeObject ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(RuntimeObject * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((&___value_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t607454486_marshaled_pinvoke
{
	char* ___name_0;
	Type_t * ___objectType_1;
	Il2CppIUnknown* ___value_2;
};
// Native definition for COM marshalling of System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t607454486_marshaled_com
{
	Il2CppChar* ___name_0;
	Type_t * ___objectType_1;
	Il2CppIUnknown* ___value_2;
};
#endif // SERIALIZATIONENTRY_T607454486_H
#ifndef SYSTEMEXCEPTION_T287028270_H
#define SYSTEMEXCEPTION_T287028270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t287028270  : public Exception_t1948673266
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T287028270_H
#ifndef ENUM_T184471367_H
#define ENUM_T184471367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t184471367  : public ValueType_t1980742048
{
public:

public:
};

struct Enum_t184471367_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2481492684* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t184471367_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2481492684* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2481492684** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2481492684* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t184471367_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t184471367_marshaled_com
{
};
#endif // ENUM_T184471367_H
#ifndef ARRAYFIXUPRECORD_T4155248862_H
#define ARRAYFIXUPRECORD_T4155248862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ArrayFixupRecord
struct  ArrayFixupRecord_t4155248862  : public BaseFixupRecord_t2987036477
{
public:
	// System.Int32 System.Runtime.Serialization.ArrayFixupRecord::_index
	int32_t ____index_4;

public:
	inline static int32_t get_offset_of__index_4() { return static_cast<int32_t>(offsetof(ArrayFixupRecord_t4155248862, ____index_4)); }
	inline int32_t get__index_4() const { return ____index_4; }
	inline int32_t* get_address_of__index_4() { return &____index_4; }
	inline void set__index_4(int32_t value)
	{
		____index_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYFIXUPRECORD_T4155248862_H
#ifndef ONSERIALIZINGATTRIBUTE_T235334352_H
#define ONSERIALIZINGATTRIBUTE_T235334352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnSerializingAttribute
struct  OnSerializingAttribute_t235334352  : public Attribute_t2524594493
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONSERIALIZINGATTRIBUTE_T235334352_H
#ifndef MULTIARRAYFIXUPRECORD_T779363574_H
#define MULTIARRAYFIXUPRECORD_T779363574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.MultiArrayFixupRecord
struct  MultiArrayFixupRecord_t779363574  : public BaseFixupRecord_t2987036477
{
public:
	// System.Int32[] System.Runtime.Serialization.MultiArrayFixupRecord::_indices
	Int32U5BU5D_t1014261387* ____indices_4;

public:
	inline static int32_t get_offset_of__indices_4() { return static_cast<int32_t>(offsetof(MultiArrayFixupRecord_t779363574, ____indices_4)); }
	inline Int32U5BU5D_t1014261387* get__indices_4() const { return ____indices_4; }
	inline Int32U5BU5D_t1014261387** get_address_of__indices_4() { return &____indices_4; }
	inline void set__indices_4(Int32U5BU5D_t1014261387* value)
	{
		____indices_4 = value;
		Il2CppCodeGenWriteBarrier((&____indices_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTIARRAYFIXUPRECORD_T779363574_H
#ifndef FIXUPRECORD_T553210626_H
#define FIXUPRECORD_T553210626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FixupRecord
struct  FixupRecord_t553210626  : public BaseFixupRecord_t2987036477
{
public:
	// System.Reflection.MemberInfo System.Runtime.Serialization.FixupRecord::_member
	MemberInfo_t * ____member_4;

public:
	inline static int32_t get_offset_of__member_4() { return static_cast<int32_t>(offsetof(FixupRecord_t553210626, ____member_4)); }
	inline MemberInfo_t * get__member_4() const { return ____member_4; }
	inline MemberInfo_t ** get_address_of__member_4() { return &____member_4; }
	inline void set__member_4(MemberInfo_t * value)
	{
		____member_4 = value;
		Il2CppCodeGenWriteBarrier((&____member_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXUPRECORD_T553210626_H
#ifndef DELAYEDFIXUPRECORD_T690235876_H
#define DELAYEDFIXUPRECORD_T690235876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.DelayedFixupRecord
struct  DelayedFixupRecord_t690235876  : public BaseFixupRecord_t2987036477
{
public:
	// System.String System.Runtime.Serialization.DelayedFixupRecord::_memberName
	String_t* ____memberName_4;

public:
	inline static int32_t get_offset_of__memberName_4() { return static_cast<int32_t>(offsetof(DelayedFixupRecord_t690235876, ____memberName_4)); }
	inline String_t* get__memberName_4() const { return ____memberName_4; }
	inline String_t** get_address_of__memberName_4() { return &____memberName_4; }
	inline void set__memberName_4(String_t* value)
	{
		____memberName_4 = value;
		Il2CppCodeGenWriteBarrier((&____memberName_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELAYEDFIXUPRECORD_T690235876_H
#ifndef ONDESERIALIZINGATTRIBUTE_T3623253394_H
#define ONDESERIALIZINGATTRIBUTE_T3623253394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnDeserializingAttribute
struct  OnDeserializingAttribute_t3623253394  : public Attribute_t2524594493
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONDESERIALIZINGATTRIBUTE_T3623253394_H
#ifndef ONSERIALIZEDATTRIBUTE_T1057017994_H
#define ONSERIALIZEDATTRIBUTE_T1057017994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnSerializedAttribute
struct  OnSerializedAttribute_t1057017994  : public Attribute_t2524594493
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONSERIALIZEDATTRIBUTE_T1057017994_H
#ifndef VOID_T4086585125_H
#define VOID_T4086585125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t4086585125 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T4086585125_H
#ifndef ONDESERIALIZEDATTRIBUTE_T3214576372_H
#define ONDESERIALIZEDATTRIBUTE_T3214576372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnDeserializedAttribute
struct  OnDeserializedAttribute_t3214576372  : public Attribute_t2524594493
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONDESERIALIZEDATTRIBUTE_T3214576372_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef FORMATTERDATA_T424717881_H
#define FORMATTERDATA_T424717881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.FormatterData
struct  FormatterData_t424717881  : public ProviderData_t3549448575
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERDATA_T424717881_H
#ifndef CLIENTIDENTITY_T1157090520_H
#define CLIENTIDENTITY_T1157090520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ClientIdentity
struct  ClientIdentity_t1157090520  : public Identity_t3462146499
{
public:
	// System.WeakReference System.Runtime.Remoting.ClientIdentity::_proxyReference
	WeakReference_t1185003964 * ____proxyReference_7;

public:
	inline static int32_t get_offset_of__proxyReference_7() { return static_cast<int32_t>(offsetof(ClientIdentity_t1157090520, ____proxyReference_7)); }
	inline WeakReference_t1185003964 * get__proxyReference_7() const { return ____proxyReference_7; }
	inline WeakReference_t1185003964 ** get_address_of__proxyReference_7() { return &____proxyReference_7; }
	inline void set__proxyReference_7(WeakReference_t1185003964 * value)
	{
		____proxyReference_7 = value;
		Il2CppCodeGenWriteBarrier((&____proxyReference_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTIDENTITY_T1157090520_H
#ifndef METHODCALLDICTIONARY_T856695248_H
#define METHODCALLDICTIONARY_T856695248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodCallDictionary
struct  MethodCallDictionary_t856695248  : public MethodDictionary_t1024301057
{
public:

public:
};

struct MethodCallDictionary_t856695248_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MethodCallDictionary::InternalKeys
	StringU5BU5D_t301921341* ___InternalKeys_6;

public:
	inline static int32_t get_offset_of_InternalKeys_6() { return static_cast<int32_t>(offsetof(MethodCallDictionary_t856695248_StaticFields, ___InternalKeys_6)); }
	inline StringU5BU5D_t301921341* get_InternalKeys_6() const { return ___InternalKeys_6; }
	inline StringU5BU5D_t301921341** get_address_of_InternalKeys_6() { return &___InternalKeys_6; }
	inline void set_InternalKeys_6(StringU5BU5D_t301921341* value)
	{
		___InternalKeys_6 = value;
		Il2CppCodeGenWriteBarrier((&___InternalKeys_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALLDICTIONARY_T856695248_H
#ifndef METHODRETURNDICTIONARY_T144326629_H
#define METHODRETURNDICTIONARY_T144326629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct  MethodReturnDictionary_t144326629  : public MethodDictionary_t1024301057
{
public:

public:
};

struct MethodReturnDictionary_t144326629_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalReturnKeys
	StringU5BU5D_t301921341* ___InternalReturnKeys_6;
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalExceptionKeys
	StringU5BU5D_t301921341* ___InternalExceptionKeys_7;

public:
	inline static int32_t get_offset_of_InternalReturnKeys_6() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_t144326629_StaticFields, ___InternalReturnKeys_6)); }
	inline StringU5BU5D_t301921341* get_InternalReturnKeys_6() const { return ___InternalReturnKeys_6; }
	inline StringU5BU5D_t301921341** get_address_of_InternalReturnKeys_6() { return &___InternalReturnKeys_6; }
	inline void set_InternalReturnKeys_6(StringU5BU5D_t301921341* value)
	{
		___InternalReturnKeys_6 = value;
		Il2CppCodeGenWriteBarrier((&___InternalReturnKeys_6), value);
	}

	inline static int32_t get_offset_of_InternalExceptionKeys_7() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_t144326629_StaticFields, ___InternalExceptionKeys_7)); }
	inline StringU5BU5D_t301921341* get_InternalExceptionKeys_7() const { return ___InternalExceptionKeys_7; }
	inline StringU5BU5D_t301921341** get_address_of_InternalExceptionKeys_7() { return &___InternalExceptionKeys_7; }
	inline void set_InternalExceptionKeys_7(StringU5BU5D_t301921341* value)
	{
		___InternalExceptionKeys_7 = value;
		Il2CppCodeGenWriteBarrier((&___InternalExceptionKeys_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODRETURNDICTIONARY_T144326629_H
#ifndef SOAPATTRIBUTE_T1655603618_H
#define SOAPATTRIBUTE_T1655603618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Metadata.SoapAttribute
struct  SoapAttribute_t1655603618  : public Attribute_t2524594493
{
public:
	// System.Boolean System.Runtime.Remoting.Metadata.SoapAttribute::_useAttribute
	bool ____useAttribute_0;
	// System.String System.Runtime.Remoting.Metadata.SoapAttribute::ProtXmlNamespace
	String_t* ___ProtXmlNamespace_1;
	// System.Object System.Runtime.Remoting.Metadata.SoapAttribute::ReflectInfo
	RuntimeObject * ___ReflectInfo_2;

public:
	inline static int32_t get_offset_of__useAttribute_0() { return static_cast<int32_t>(offsetof(SoapAttribute_t1655603618, ____useAttribute_0)); }
	inline bool get__useAttribute_0() const { return ____useAttribute_0; }
	inline bool* get_address_of__useAttribute_0() { return &____useAttribute_0; }
	inline void set__useAttribute_0(bool value)
	{
		____useAttribute_0 = value;
	}

	inline static int32_t get_offset_of_ProtXmlNamespace_1() { return static_cast<int32_t>(offsetof(SoapAttribute_t1655603618, ___ProtXmlNamespace_1)); }
	inline String_t* get_ProtXmlNamespace_1() const { return ___ProtXmlNamespace_1; }
	inline String_t** get_address_of_ProtXmlNamespace_1() { return &___ProtXmlNamespace_1; }
	inline void set_ProtXmlNamespace_1(String_t* value)
	{
		___ProtXmlNamespace_1 = value;
		Il2CppCodeGenWriteBarrier((&___ProtXmlNamespace_1), value);
	}

	inline static int32_t get_offset_of_ReflectInfo_2() { return static_cast<int32_t>(offsetof(SoapAttribute_t1655603618, ___ReflectInfo_2)); }
	inline RuntimeObject * get_ReflectInfo_2() const { return ___ReflectInfo_2; }
	inline RuntimeObject ** get_address_of_ReflectInfo_2() { return &___ReflectInfo_2; }
	inline void set_ReflectInfo_2(RuntimeObject * value)
	{
		___ReflectInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___ReflectInfo_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPATTRIBUTE_T1655603618_H
#ifndef ACTIVATEDSERVICETYPEENTRY_T1232272648_H
#define ACTIVATEDSERVICETYPEENTRY_T1232272648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ActivatedServiceTypeEntry
struct  ActivatedServiceTypeEntry_t1232272648  : public TypeEntry_t1625158409
{
public:
	// System.Type System.Runtime.Remoting.ActivatedServiceTypeEntry::obj_type
	Type_t * ___obj_type_2;

public:
	inline static int32_t get_offset_of_obj_type_2() { return static_cast<int32_t>(offsetof(ActivatedServiceTypeEntry_t1232272648, ___obj_type_2)); }
	inline Type_t * get_obj_type_2() const { return ___obj_type_2; }
	inline Type_t ** get_address_of_obj_type_2() { return &___obj_type_2; }
	inline void set_obj_type_2(Type_t * value)
	{
		___obj_type_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATEDSERVICETYPEENTRY_T1232272648_H
#ifndef ACTIVATEDCLIENTTYPEENTRY_T3918011203_H
#define ACTIVATEDCLIENTTYPEENTRY_T3918011203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ActivatedClientTypeEntry
struct  ActivatedClientTypeEntry_t3918011203  : public TypeEntry_t1625158409
{
public:
	// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::applicationUrl
	String_t* ___applicationUrl_2;
	// System.Type System.Runtime.Remoting.ActivatedClientTypeEntry::obj_type
	Type_t * ___obj_type_3;

public:
	inline static int32_t get_offset_of_applicationUrl_2() { return static_cast<int32_t>(offsetof(ActivatedClientTypeEntry_t3918011203, ___applicationUrl_2)); }
	inline String_t* get_applicationUrl_2() const { return ___applicationUrl_2; }
	inline String_t** get_address_of_applicationUrl_2() { return &___applicationUrl_2; }
	inline void set_applicationUrl_2(String_t* value)
	{
		___applicationUrl_2 = value;
		Il2CppCodeGenWriteBarrier((&___applicationUrl_2), value);
	}

	inline static int32_t get_offset_of_obj_type_3() { return static_cast<int32_t>(offsetof(ActivatedClientTypeEntry_t3918011203, ___obj_type_3)); }
	inline Type_t * get_obj_type_3() const { return ___obj_type_3; }
	inline Type_t ** get_address_of_obj_type_3() { return &___obj_type_3; }
	inline void set_obj_type_3(Type_t * value)
	{
		___obj_type_3 = value;
		Il2CppCodeGenWriteBarrier((&___obj_type_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATEDCLIENTTYPEENTRY_T3918011203_H
#ifndef REMOTINGPROXY_T2553047933_H
#define REMOTINGPROXY_T2553047933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Proxies.RemotingProxy
struct  RemotingProxy_t2553047933  : public RealProxy_t3589323136
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Proxies.RemotingProxy::_sink
	RuntimeObject* ____sink_10;
	// System.Boolean System.Runtime.Remoting.Proxies.RemotingProxy::_hasEnvoySink
	bool ____hasEnvoySink_11;
	// System.Runtime.Remoting.Messaging.ConstructionCall System.Runtime.Remoting.Proxies.RemotingProxy::_ctorCall
	ConstructionCall_t3792238753 * ____ctorCall_12;

public:
	inline static int32_t get_offset_of__sink_10() { return static_cast<int32_t>(offsetof(RemotingProxy_t2553047933, ____sink_10)); }
	inline RuntimeObject* get__sink_10() const { return ____sink_10; }
	inline RuntimeObject** get_address_of__sink_10() { return &____sink_10; }
	inline void set__sink_10(RuntimeObject* value)
	{
		____sink_10 = value;
		Il2CppCodeGenWriteBarrier((&____sink_10), value);
	}

	inline static int32_t get_offset_of__hasEnvoySink_11() { return static_cast<int32_t>(offsetof(RemotingProxy_t2553047933, ____hasEnvoySink_11)); }
	inline bool get__hasEnvoySink_11() const { return ____hasEnvoySink_11; }
	inline bool* get_address_of__hasEnvoySink_11() { return &____hasEnvoySink_11; }
	inline void set__hasEnvoySink_11(bool value)
	{
		____hasEnvoySink_11 = value;
	}

	inline static int32_t get_offset_of__ctorCall_12() { return static_cast<int32_t>(offsetof(RemotingProxy_t2553047933, ____ctorCall_12)); }
	inline ConstructionCall_t3792238753 * get__ctorCall_12() const { return ____ctorCall_12; }
	inline ConstructionCall_t3792238753 ** get_address_of__ctorCall_12() { return &____ctorCall_12; }
	inline void set__ctorCall_12(ConstructionCall_t3792238753 * value)
	{
		____ctorCall_12 = value;
		Il2CppCodeGenWriteBarrier((&____ctorCall_12), value);
	}
};

struct RemotingProxy_t2553047933_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Runtime.Remoting.Proxies.RemotingProxy::_cache_GetTypeMethod
	MethodInfo_t * ____cache_GetTypeMethod_8;
	// System.Reflection.MethodInfo System.Runtime.Remoting.Proxies.RemotingProxy::_cache_GetHashCodeMethod
	MethodInfo_t * ____cache_GetHashCodeMethod_9;

public:
	inline static int32_t get_offset_of__cache_GetTypeMethod_8() { return static_cast<int32_t>(offsetof(RemotingProxy_t2553047933_StaticFields, ____cache_GetTypeMethod_8)); }
	inline MethodInfo_t * get__cache_GetTypeMethod_8() const { return ____cache_GetTypeMethod_8; }
	inline MethodInfo_t ** get_address_of__cache_GetTypeMethod_8() { return &____cache_GetTypeMethod_8; }
	inline void set__cache_GetTypeMethod_8(MethodInfo_t * value)
	{
		____cache_GetTypeMethod_8 = value;
		Il2CppCodeGenWriteBarrier((&____cache_GetTypeMethod_8), value);
	}

	inline static int32_t get_offset_of__cache_GetHashCodeMethod_9() { return static_cast<int32_t>(offsetof(RemotingProxy_t2553047933_StaticFields, ____cache_GetHashCodeMethod_9)); }
	inline MethodInfo_t * get__cache_GetHashCodeMethod_9() const { return ____cache_GetHashCodeMethod_9; }
	inline MethodInfo_t ** get_address_of__cache_GetHashCodeMethod_9() { return &____cache_GetHashCodeMethod_9; }
	inline void set__cache_GetHashCodeMethod_9(MethodInfo_t * value)
	{
		____cache_GetHashCodeMethod_9 = value;
		Il2CppCodeGenWriteBarrier((&____cache_GetHashCodeMethod_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGPROXY_T2553047933_H
#ifndef SERVERIDENTITY_T2601200201_H
#define SERVERIDENTITY_T2601200201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ServerIdentity
struct  ServerIdentity_t2601200201  : public Identity_t3462146499
{
public:
	// System.Type System.Runtime.Remoting.ServerIdentity::_objectType
	Type_t * ____objectType_7;
	// System.MarshalByRefObject System.Runtime.Remoting.ServerIdentity::_serverObject
	MarshalByRefObject_t3363895060 * ____serverObject_8;
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.ServerIdentity::_context
	Context_t339417115 * ____context_9;

public:
	inline static int32_t get_offset_of__objectType_7() { return static_cast<int32_t>(offsetof(ServerIdentity_t2601200201, ____objectType_7)); }
	inline Type_t * get__objectType_7() const { return ____objectType_7; }
	inline Type_t ** get_address_of__objectType_7() { return &____objectType_7; }
	inline void set__objectType_7(Type_t * value)
	{
		____objectType_7 = value;
		Il2CppCodeGenWriteBarrier((&____objectType_7), value);
	}

	inline static int32_t get_offset_of__serverObject_8() { return static_cast<int32_t>(offsetof(ServerIdentity_t2601200201, ____serverObject_8)); }
	inline MarshalByRefObject_t3363895060 * get__serverObject_8() const { return ____serverObject_8; }
	inline MarshalByRefObject_t3363895060 ** get_address_of__serverObject_8() { return &____serverObject_8; }
	inline void set__serverObject_8(MarshalByRefObject_t3363895060 * value)
	{
		____serverObject_8 = value;
		Il2CppCodeGenWriteBarrier((&____serverObject_8), value);
	}

	inline static int32_t get_offset_of__context_9() { return static_cast<int32_t>(offsetof(ServerIdentity_t2601200201, ____context_9)); }
	inline Context_t339417115 * get__context_9() const { return ____context_9; }
	inline Context_t339417115 ** get_address_of__context_9() { return &____context_9; }
	inline void set__context_9(Context_t339417115 * value)
	{
		____context_9 = value;
		Il2CppCodeGenWriteBarrier((&____context_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERIDENTITY_T2601200201_H
#ifndef PROXYATTRIBUTE_T1033159052_H
#define PROXYATTRIBUTE_T1033159052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Proxies.ProxyAttribute
struct  ProxyAttribute_t1033159052  : public Attribute_t2524594493
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROXYATTRIBUTE_T1033159052_H
#ifndef WELLKNOWNCLIENTTYPEENTRY_T897194547_H
#define WELLKNOWNCLIENTTYPEENTRY_T897194547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.WellKnownClientTypeEntry
struct  WellKnownClientTypeEntry_t897194547  : public TypeEntry_t1625158409
{
public:
	// System.Type System.Runtime.Remoting.WellKnownClientTypeEntry::obj_type
	Type_t * ___obj_type_2;
	// System.String System.Runtime.Remoting.WellKnownClientTypeEntry::obj_url
	String_t* ___obj_url_3;
	// System.String System.Runtime.Remoting.WellKnownClientTypeEntry::app_url
	String_t* ___app_url_4;

public:
	inline static int32_t get_offset_of_obj_type_2() { return static_cast<int32_t>(offsetof(WellKnownClientTypeEntry_t897194547, ___obj_type_2)); }
	inline Type_t * get_obj_type_2() const { return ___obj_type_2; }
	inline Type_t ** get_address_of_obj_type_2() { return &___obj_type_2; }
	inline void set_obj_type_2(Type_t * value)
	{
		___obj_type_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_type_2), value);
	}

	inline static int32_t get_offset_of_obj_url_3() { return static_cast<int32_t>(offsetof(WellKnownClientTypeEntry_t897194547, ___obj_url_3)); }
	inline String_t* get_obj_url_3() const { return ___obj_url_3; }
	inline String_t** get_address_of_obj_url_3() { return &___obj_url_3; }
	inline void set_obj_url_3(String_t* value)
	{
		___obj_url_3 = value;
		Il2CppCodeGenWriteBarrier((&___obj_url_3), value);
	}

	inline static int32_t get_offset_of_app_url_4() { return static_cast<int32_t>(offsetof(WellKnownClientTypeEntry_t897194547, ___app_url_4)); }
	inline String_t* get_app_url_4() const { return ___app_url_4; }
	inline String_t** get_address_of_app_url_4() { return &___app_url_4; }
	inline void set_app_url_4(String_t* value)
	{
		___app_url_4 = value;
		Il2CppCodeGenWriteBarrier((&___app_url_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WELLKNOWNCLIENTTYPEENTRY_T897194547_H
#ifndef SERIALIZATIONEXCEPTION_T3932561670_H
#define SERIALIZATIONEXCEPTION_T3932561670_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationException
struct  SerializationException_t3932561670  : public SystemException_t287028270
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONEXCEPTION_T3932561670_H
#ifndef SOAPTYPEATTRIBUTE_T1239750435_H
#define SOAPTYPEATTRIBUTE_T1239750435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Metadata.SoapTypeAttribute
struct  SoapTypeAttribute_t1239750435  : public SoapAttribute_t1655603618
{
public:
	// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::_useAttribute
	bool ____useAttribute_3;
	// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::_xmlElementName
	String_t* ____xmlElementName_4;
	// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::_xmlNamespace
	String_t* ____xmlNamespace_5;
	// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::_xmlTypeName
	String_t* ____xmlTypeName_6;
	// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::_xmlTypeNamespace
	String_t* ____xmlTypeNamespace_7;
	// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::_isType
	bool ____isType_8;
	// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::_isElement
	bool ____isElement_9;

public:
	inline static int32_t get_offset_of__useAttribute_3() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t1239750435, ____useAttribute_3)); }
	inline bool get__useAttribute_3() const { return ____useAttribute_3; }
	inline bool* get_address_of__useAttribute_3() { return &____useAttribute_3; }
	inline void set__useAttribute_3(bool value)
	{
		____useAttribute_3 = value;
	}

	inline static int32_t get_offset_of__xmlElementName_4() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t1239750435, ____xmlElementName_4)); }
	inline String_t* get__xmlElementName_4() const { return ____xmlElementName_4; }
	inline String_t** get_address_of__xmlElementName_4() { return &____xmlElementName_4; }
	inline void set__xmlElementName_4(String_t* value)
	{
		____xmlElementName_4 = value;
		Il2CppCodeGenWriteBarrier((&____xmlElementName_4), value);
	}

	inline static int32_t get_offset_of__xmlNamespace_5() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t1239750435, ____xmlNamespace_5)); }
	inline String_t* get__xmlNamespace_5() const { return ____xmlNamespace_5; }
	inline String_t** get_address_of__xmlNamespace_5() { return &____xmlNamespace_5; }
	inline void set__xmlNamespace_5(String_t* value)
	{
		____xmlNamespace_5 = value;
		Il2CppCodeGenWriteBarrier((&____xmlNamespace_5), value);
	}

	inline static int32_t get_offset_of__xmlTypeName_6() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t1239750435, ____xmlTypeName_6)); }
	inline String_t* get__xmlTypeName_6() const { return ____xmlTypeName_6; }
	inline String_t** get_address_of__xmlTypeName_6() { return &____xmlTypeName_6; }
	inline void set__xmlTypeName_6(String_t* value)
	{
		____xmlTypeName_6 = value;
		Il2CppCodeGenWriteBarrier((&____xmlTypeName_6), value);
	}

	inline static int32_t get_offset_of__xmlTypeNamespace_7() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t1239750435, ____xmlTypeNamespace_7)); }
	inline String_t* get__xmlTypeNamespace_7() const { return ____xmlTypeNamespace_7; }
	inline String_t** get_address_of__xmlTypeNamespace_7() { return &____xmlTypeNamespace_7; }
	inline void set__xmlTypeNamespace_7(String_t* value)
	{
		____xmlTypeNamespace_7 = value;
		Il2CppCodeGenWriteBarrier((&____xmlTypeNamespace_7), value);
	}

	inline static int32_t get_offset_of__isType_8() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t1239750435, ____isType_8)); }
	inline bool get__isType_8() const { return ____isType_8; }
	inline bool* get_address_of__isType_8() { return &____isType_8; }
	inline void set__isType_8(bool value)
	{
		____isType_8 = value;
	}

	inline static int32_t get_offset_of__isElement_9() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t1239750435, ____isElement_9)); }
	inline bool get__isElement_9() const { return ____isElement_9; }
	inline bool* get_address_of__isElement_9() { return &____isElement_9; }
	inline void set__isElement_9(bool value)
	{
		____isElement_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPTYPEATTRIBUTE_T1239750435_H
#ifndef SOAPMETHODATTRIBUTE_T3554168463_H
#define SOAPMETHODATTRIBUTE_T3554168463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Metadata.SoapMethodAttribute
struct  SoapMethodAttribute_t3554168463  : public SoapAttribute_t1655603618
{
public:
	// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::_responseElement
	String_t* ____responseElement_3;
	// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::_responseNamespace
	String_t* ____responseNamespace_4;
	// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::_returnElement
	String_t* ____returnElement_5;
	// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::_soapAction
	String_t* ____soapAction_6;
	// System.Boolean System.Runtime.Remoting.Metadata.SoapMethodAttribute::_useAttribute
	bool ____useAttribute_7;
	// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::_namespace
	String_t* ____namespace_8;

public:
	inline static int32_t get_offset_of__responseElement_3() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t3554168463, ____responseElement_3)); }
	inline String_t* get__responseElement_3() const { return ____responseElement_3; }
	inline String_t** get_address_of__responseElement_3() { return &____responseElement_3; }
	inline void set__responseElement_3(String_t* value)
	{
		____responseElement_3 = value;
		Il2CppCodeGenWriteBarrier((&____responseElement_3), value);
	}

	inline static int32_t get_offset_of__responseNamespace_4() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t3554168463, ____responseNamespace_4)); }
	inline String_t* get__responseNamespace_4() const { return ____responseNamespace_4; }
	inline String_t** get_address_of__responseNamespace_4() { return &____responseNamespace_4; }
	inline void set__responseNamespace_4(String_t* value)
	{
		____responseNamespace_4 = value;
		Il2CppCodeGenWriteBarrier((&____responseNamespace_4), value);
	}

	inline static int32_t get_offset_of__returnElement_5() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t3554168463, ____returnElement_5)); }
	inline String_t* get__returnElement_5() const { return ____returnElement_5; }
	inline String_t** get_address_of__returnElement_5() { return &____returnElement_5; }
	inline void set__returnElement_5(String_t* value)
	{
		____returnElement_5 = value;
		Il2CppCodeGenWriteBarrier((&____returnElement_5), value);
	}

	inline static int32_t get_offset_of__soapAction_6() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t3554168463, ____soapAction_6)); }
	inline String_t* get__soapAction_6() const { return ____soapAction_6; }
	inline String_t** get_address_of__soapAction_6() { return &____soapAction_6; }
	inline void set__soapAction_6(String_t* value)
	{
		____soapAction_6 = value;
		Il2CppCodeGenWriteBarrier((&____soapAction_6), value);
	}

	inline static int32_t get_offset_of__useAttribute_7() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t3554168463, ____useAttribute_7)); }
	inline bool get__useAttribute_7() const { return ____useAttribute_7; }
	inline bool* get_address_of__useAttribute_7() { return &____useAttribute_7; }
	inline void set__useAttribute_7(bool value)
	{
		____useAttribute_7 = value;
	}

	inline static int32_t get_offset_of__namespace_8() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t3554168463, ____namespace_8)); }
	inline String_t* get__namespace_8() const { return ____namespace_8; }
	inline String_t** get_address_of__namespace_8() { return &____namespace_8; }
	inline void set__namespace_8(String_t* value)
	{
		____namespace_8 = value;
		Il2CppCodeGenWriteBarrier((&____namespace_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPMETHODATTRIBUTE_T3554168463_H
#ifndef BINDINGFLAGS_T2308085337_H
#define BINDINGFLAGS_T2308085337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2308085337 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2308085337, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2308085337_H
#ifndef SOAPFIELDATTRIBUTE_T273695542_H
#define SOAPFIELDATTRIBUTE_T273695542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Metadata.SoapFieldAttribute
struct  SoapFieldAttribute_t273695542  : public SoapAttribute_t1655603618
{
public:
	// System.String System.Runtime.Remoting.Metadata.SoapFieldAttribute::_elementName
	String_t* ____elementName_3;
	// System.Boolean System.Runtime.Remoting.Metadata.SoapFieldAttribute::_isElement
	bool ____isElement_4;

public:
	inline static int32_t get_offset_of__elementName_3() { return static_cast<int32_t>(offsetof(SoapFieldAttribute_t273695542, ____elementName_3)); }
	inline String_t* get__elementName_3() const { return ____elementName_3; }
	inline String_t** get_address_of__elementName_3() { return &____elementName_3; }
	inline void set__elementName_3(String_t* value)
	{
		____elementName_3 = value;
		Il2CppCodeGenWriteBarrier((&____elementName_3), value);
	}

	inline static int32_t get_offset_of__isElement_4() { return static_cast<int32_t>(offsetof(SoapFieldAttribute_t273695542, ____isElement_4)); }
	inline bool get__isElement_4() const { return ____isElement_4; }
	inline bool* get_address_of__isElement_4() { return &____isElement_4; }
	inline void set__isElement_4(bool value)
	{
		____isElement_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPFIELDATTRIBUTE_T273695542_H
#ifndef STREAMINGCONTEXTSTATES_T2634821067_H
#define STREAMINGCONTEXTSTATES_T2634821067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t2634821067 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t2634821067, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMINGCONTEXTSTATES_T2634821067_H
#ifndef SOAPPARAMETERATTRIBUTE_T2431804833_H
#define SOAPPARAMETERATTRIBUTE_T2431804833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Metadata.SoapParameterAttribute
struct  SoapParameterAttribute_t2431804833  : public SoapAttribute_t1655603618
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPPARAMETERATTRIBUTE_T2431804833_H
#ifndef REMOTINGEXCEPTION_T3172418044_H
#define REMOTINGEXCEPTION_T3172418044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.RemotingException
struct  RemotingException_t3172418044  : public SystemException_t287028270
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGEXCEPTION_T3172418044_H
#ifndef RETURNTYPETAG_T1683119736_H
#define RETURNTYPETAG_T1683119736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag
struct  ReturnTypeTag_t1683119736 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReturnTypeTag_t1683119736, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RETURNTYPETAG_T1683119736_H
#ifndef BINARYELEMENT_T3912361437_H
#define BINARYELEMENT_T3912361437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryElement
struct  BinaryElement_t3912361437 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.BinaryElement::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BinaryElement_t3912361437, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYELEMENT_T3912361437_H
#ifndef METHODFLAGS_T1938742439_H
#define METHODFLAGS_T1938742439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.MethodFlags
struct  MethodFlags_t1938742439 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.MethodFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodFlags_t1938742439, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODFLAGS_T1938742439_H
#ifndef TYPETAG_T396267562_H
#define TYPETAG_T396267562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.TypeTag
struct  TypeTag_t396267562 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.TypeTag::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeTag_t396267562, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPETAG_T396267562_H
#ifndef FORMATTERASSEMBLYSTYLE_T3559408470_H
#define FORMATTERASSEMBLYSTYLE_T3559408470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct  FormatterAssemblyStyle_t3559408470 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_t3559408470, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERASSEMBLYSTYLE_T3559408470_H
#ifndef FORMATTERTYPESTYLE_T1982860997_H
#define FORMATTERTYPESTYLE_T1982860997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterTypeStyle
struct  FormatterTypeStyle_t1982860997 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterTypeStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterTypeStyle_t1982860997, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERTYPESTYLE_T1982860997_H
#ifndef TYPEFILTERLEVEL_T4001963918_H
#define TYPEFILTERLEVEL_T4001963918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.TypeFilterLevel
struct  TypeFilterLevel_t4001963918 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.TypeFilterLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeFilterLevel_t4001963918, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEFILTERLEVEL_T4001963918_H
#ifndef DELEGATE_T340783034_H
#define DELEGATE_T340783034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t340783034  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t3817794824 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t340783034, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t340783034, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t340783034, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t340783034, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t340783034, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t340783034, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t340783034, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t340783034, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t340783034, ___data_8)); }
	inline DelegateData_t3817794824 * get_data_8() const { return ___data_8; }
	inline DelegateData_t3817794824 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t3817794824 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T340783034_H
#ifndef WELLKNOWNOBJECTMODE_T1676761328_H
#define WELLKNOWNOBJECTMODE_T1676761328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.WellKnownObjectMode
struct  WellKnownObjectMode_t1676761328 
{
public:
	// System.Int32 System.Runtime.Remoting.WellKnownObjectMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WellKnownObjectMode_t1676761328, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WELLKNOWNOBJECTMODE_T1676761328_H
#ifndef SINGLETONIDENTITY_T4287860215_H
#define SINGLETONIDENTITY_T4287860215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.SingletonIdentity
struct  SingletonIdentity_t4287860215  : public ServerIdentity_t2601200201
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETONIDENTITY_T4287860215_H
#ifndef CLIENTACTIVATEDIDENTITY_T3873624707_H
#define CLIENTACTIVATEDIDENTITY_T3873624707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ClientActivatedIdentity
struct  ClientActivatedIdentity_t3873624707  : public ServerIdentity_t2601200201
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTACTIVATEDIDENTITY_T3873624707_H
#ifndef OBJECTRECORDSTATUS_T1165806601_H
#define OBJECTRECORDSTATUS_T1165806601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectRecordStatus
struct  ObjectRecordStatus_t1165806601 
{
public:
	// System.Byte System.Runtime.Serialization.ObjectRecordStatus::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ObjectRecordStatus_t1165806601, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTRECORDSTATUS_T1165806601_H
#ifndef SINGLECALLIDENTITY_T3577626121_H
#define SINGLECALLIDENTITY_T3577626121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.SingleCallIdentity
struct  SingleCallIdentity_t3577626121  : public ServerIdentity_t2601200201
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLECALLIDENTITY_T3577626121_H
#ifndef WELLKNOWNSERVICETYPEENTRY_T3317462723_H
#define WELLKNOWNSERVICETYPEENTRY_T3317462723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.WellKnownServiceTypeEntry
struct  WellKnownServiceTypeEntry_t3317462723  : public TypeEntry_t1625158409
{
public:
	// System.Type System.Runtime.Remoting.WellKnownServiceTypeEntry::obj_type
	Type_t * ___obj_type_2;
	// System.String System.Runtime.Remoting.WellKnownServiceTypeEntry::obj_uri
	String_t* ___obj_uri_3;
	// System.Runtime.Remoting.WellKnownObjectMode System.Runtime.Remoting.WellKnownServiceTypeEntry::obj_mode
	int32_t ___obj_mode_4;

public:
	inline static int32_t get_offset_of_obj_type_2() { return static_cast<int32_t>(offsetof(WellKnownServiceTypeEntry_t3317462723, ___obj_type_2)); }
	inline Type_t * get_obj_type_2() const { return ___obj_type_2; }
	inline Type_t ** get_address_of_obj_type_2() { return &___obj_type_2; }
	inline void set_obj_type_2(Type_t * value)
	{
		___obj_type_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_type_2), value);
	}

	inline static int32_t get_offset_of_obj_uri_3() { return static_cast<int32_t>(offsetof(WellKnownServiceTypeEntry_t3317462723, ___obj_uri_3)); }
	inline String_t* get_obj_uri_3() const { return ___obj_uri_3; }
	inline String_t** get_address_of_obj_uri_3() { return &___obj_uri_3; }
	inline void set_obj_uri_3(String_t* value)
	{
		___obj_uri_3 = value;
		Il2CppCodeGenWriteBarrier((&___obj_uri_3), value);
	}

	inline static int32_t get_offset_of_obj_mode_4() { return static_cast<int32_t>(offsetof(WellKnownServiceTypeEntry_t3317462723, ___obj_mode_4)); }
	inline int32_t get_obj_mode_4() const { return ___obj_mode_4; }
	inline int32_t* get_address_of_obj_mode_4() { return &___obj_mode_4; }
	inline void set_obj_mode_4(int32_t value)
	{
		___obj_mode_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WELLKNOWNSERVICETYPEENTRY_T3317462723_H
#ifndef REMOTINGSERVICES_T1021842310_H
#define REMOTINGSERVICES_T1021842310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.RemotingServices
struct  RemotingServices_t1021842310  : public RuntimeObject
{
public:

public:
};

struct RemotingServices_t1021842310_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingServices::uri_hash
	Hashtable_t914140952 * ___uri_hash_0;
	// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter System.Runtime.Remoting.RemotingServices::_serializationFormatter
	BinaryFormatter_t2882688212 * ____serializationFormatter_1;
	// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter System.Runtime.Remoting.RemotingServices::_deserializationFormatter
	BinaryFormatter_t2882688212 * ____deserializationFormatter_2;
	// System.String System.Runtime.Remoting.RemotingServices::app_id
	String_t* ___app_id_3;
	// System.Int32 System.Runtime.Remoting.RemotingServices::next_id
	int32_t ___next_id_4;
	// System.Reflection.BindingFlags System.Runtime.Remoting.RemotingServices::methodBindings
	int32_t ___methodBindings_5;
	// System.Reflection.MethodInfo System.Runtime.Remoting.RemotingServices::FieldSetterMethod
	MethodInfo_t * ___FieldSetterMethod_6;
	// System.Reflection.MethodInfo System.Runtime.Remoting.RemotingServices::FieldGetterMethod
	MethodInfo_t * ___FieldGetterMethod_7;

public:
	inline static int32_t get_offset_of_uri_hash_0() { return static_cast<int32_t>(offsetof(RemotingServices_t1021842310_StaticFields, ___uri_hash_0)); }
	inline Hashtable_t914140952 * get_uri_hash_0() const { return ___uri_hash_0; }
	inline Hashtable_t914140952 ** get_address_of_uri_hash_0() { return &___uri_hash_0; }
	inline void set_uri_hash_0(Hashtable_t914140952 * value)
	{
		___uri_hash_0 = value;
		Il2CppCodeGenWriteBarrier((&___uri_hash_0), value);
	}

	inline static int32_t get_offset_of__serializationFormatter_1() { return static_cast<int32_t>(offsetof(RemotingServices_t1021842310_StaticFields, ____serializationFormatter_1)); }
	inline BinaryFormatter_t2882688212 * get__serializationFormatter_1() const { return ____serializationFormatter_1; }
	inline BinaryFormatter_t2882688212 ** get_address_of__serializationFormatter_1() { return &____serializationFormatter_1; }
	inline void set__serializationFormatter_1(BinaryFormatter_t2882688212 * value)
	{
		____serializationFormatter_1 = value;
		Il2CppCodeGenWriteBarrier((&____serializationFormatter_1), value);
	}

	inline static int32_t get_offset_of__deserializationFormatter_2() { return static_cast<int32_t>(offsetof(RemotingServices_t1021842310_StaticFields, ____deserializationFormatter_2)); }
	inline BinaryFormatter_t2882688212 * get__deserializationFormatter_2() const { return ____deserializationFormatter_2; }
	inline BinaryFormatter_t2882688212 ** get_address_of__deserializationFormatter_2() { return &____deserializationFormatter_2; }
	inline void set__deserializationFormatter_2(BinaryFormatter_t2882688212 * value)
	{
		____deserializationFormatter_2 = value;
		Il2CppCodeGenWriteBarrier((&____deserializationFormatter_2), value);
	}

	inline static int32_t get_offset_of_app_id_3() { return static_cast<int32_t>(offsetof(RemotingServices_t1021842310_StaticFields, ___app_id_3)); }
	inline String_t* get_app_id_3() const { return ___app_id_3; }
	inline String_t** get_address_of_app_id_3() { return &___app_id_3; }
	inline void set_app_id_3(String_t* value)
	{
		___app_id_3 = value;
		Il2CppCodeGenWriteBarrier((&___app_id_3), value);
	}

	inline static int32_t get_offset_of_next_id_4() { return static_cast<int32_t>(offsetof(RemotingServices_t1021842310_StaticFields, ___next_id_4)); }
	inline int32_t get_next_id_4() const { return ___next_id_4; }
	inline int32_t* get_address_of_next_id_4() { return &___next_id_4; }
	inline void set_next_id_4(int32_t value)
	{
		___next_id_4 = value;
	}

	inline static int32_t get_offset_of_methodBindings_5() { return static_cast<int32_t>(offsetof(RemotingServices_t1021842310_StaticFields, ___methodBindings_5)); }
	inline int32_t get_methodBindings_5() const { return ___methodBindings_5; }
	inline int32_t* get_address_of_methodBindings_5() { return &___methodBindings_5; }
	inline void set_methodBindings_5(int32_t value)
	{
		___methodBindings_5 = value;
	}

	inline static int32_t get_offset_of_FieldSetterMethod_6() { return static_cast<int32_t>(offsetof(RemotingServices_t1021842310_StaticFields, ___FieldSetterMethod_6)); }
	inline MethodInfo_t * get_FieldSetterMethod_6() const { return ___FieldSetterMethod_6; }
	inline MethodInfo_t ** get_address_of_FieldSetterMethod_6() { return &___FieldSetterMethod_6; }
	inline void set_FieldSetterMethod_6(MethodInfo_t * value)
	{
		___FieldSetterMethod_6 = value;
		Il2CppCodeGenWriteBarrier((&___FieldSetterMethod_6), value);
	}

	inline static int32_t get_offset_of_FieldGetterMethod_7() { return static_cast<int32_t>(offsetof(RemotingServices_t1021842310_StaticFields, ___FieldGetterMethod_7)); }
	inline MethodInfo_t * get_FieldGetterMethod_7() const { return ___FieldGetterMethod_7; }
	inline MethodInfo_t ** get_address_of_FieldGetterMethod_7() { return &___FieldGetterMethod_7; }
	inline void set_FieldGetterMethod_7(MethodInfo_t * value)
	{
		___FieldGetterMethod_7 = value;
		Il2CppCodeGenWriteBarrier((&___FieldGetterMethod_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGSERVICES_T1021842310_H
#ifndef STREAMINGCONTEXT_T2684866328_H
#define STREAMINGCONTEXT_T2684866328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t2684866328 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t2684866328, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t2684866328, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2684866328_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t2684866328_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T2684866328_H
#ifndef MULTICASTDELEGATE_T370614990_H
#define MULTICASTDELEGATE_T370614990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t370614990  : public Delegate_t340783034
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t370614990 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t370614990 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t370614990, ___prev_9)); }
	inline MulticastDelegate_t370614990 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t370614990 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t370614990 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t370614990, ___kpm_next_10)); }
	inline MulticastDelegate_t370614990 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t370614990 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t370614990 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T370614990_H
#ifndef OBJECTRECORD_T2987177946_H
#define OBJECTRECORD_T2987177946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectRecord
struct  ObjectRecord_t2987177946  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectRecordStatus System.Runtime.Serialization.ObjectRecord::Status
	uint8_t ___Status_0;
	// System.Object System.Runtime.Serialization.ObjectRecord::OriginalObject
	RuntimeObject * ___OriginalObject_1;
	// System.Object System.Runtime.Serialization.ObjectRecord::ObjectInstance
	RuntimeObject * ___ObjectInstance_2;
	// System.Int64 System.Runtime.Serialization.ObjectRecord::ObjectID
	int64_t ___ObjectID_3;
	// System.Runtime.Serialization.SerializationInfo System.Runtime.Serialization.ObjectRecord::Info
	SerializationInfo_t3511065455 * ___Info_4;
	// System.Int64 System.Runtime.Serialization.ObjectRecord::IdOfContainingObj
	int64_t ___IdOfContainingObj_5;
	// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ObjectRecord::Surrogate
	RuntimeObject* ___Surrogate_6;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.ObjectRecord::SurrogateSelector
	RuntimeObject* ___SurrogateSelector_7;
	// System.Reflection.MemberInfo System.Runtime.Serialization.ObjectRecord::Member
	MemberInfo_t * ___Member_8;
	// System.Int32[] System.Runtime.Serialization.ObjectRecord::ArrayIndex
	Int32U5BU5D_t1014261387* ___ArrayIndex_9;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.ObjectRecord::FixupChainAsContainer
	BaseFixupRecord_t2987036477 * ___FixupChainAsContainer_10;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.ObjectRecord::FixupChainAsRequired
	BaseFixupRecord_t2987036477 * ___FixupChainAsRequired_11;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectRecord::Next
	ObjectRecord_t2987177946 * ___Next_12;

public:
	inline static int32_t get_offset_of_Status_0() { return static_cast<int32_t>(offsetof(ObjectRecord_t2987177946, ___Status_0)); }
	inline uint8_t get_Status_0() const { return ___Status_0; }
	inline uint8_t* get_address_of_Status_0() { return &___Status_0; }
	inline void set_Status_0(uint8_t value)
	{
		___Status_0 = value;
	}

	inline static int32_t get_offset_of_OriginalObject_1() { return static_cast<int32_t>(offsetof(ObjectRecord_t2987177946, ___OriginalObject_1)); }
	inline RuntimeObject * get_OriginalObject_1() const { return ___OriginalObject_1; }
	inline RuntimeObject ** get_address_of_OriginalObject_1() { return &___OriginalObject_1; }
	inline void set_OriginalObject_1(RuntimeObject * value)
	{
		___OriginalObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___OriginalObject_1), value);
	}

	inline static int32_t get_offset_of_ObjectInstance_2() { return static_cast<int32_t>(offsetof(ObjectRecord_t2987177946, ___ObjectInstance_2)); }
	inline RuntimeObject * get_ObjectInstance_2() const { return ___ObjectInstance_2; }
	inline RuntimeObject ** get_address_of_ObjectInstance_2() { return &___ObjectInstance_2; }
	inline void set_ObjectInstance_2(RuntimeObject * value)
	{
		___ObjectInstance_2 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectInstance_2), value);
	}

	inline static int32_t get_offset_of_ObjectID_3() { return static_cast<int32_t>(offsetof(ObjectRecord_t2987177946, ___ObjectID_3)); }
	inline int64_t get_ObjectID_3() const { return ___ObjectID_3; }
	inline int64_t* get_address_of_ObjectID_3() { return &___ObjectID_3; }
	inline void set_ObjectID_3(int64_t value)
	{
		___ObjectID_3 = value;
	}

	inline static int32_t get_offset_of_Info_4() { return static_cast<int32_t>(offsetof(ObjectRecord_t2987177946, ___Info_4)); }
	inline SerializationInfo_t3511065455 * get_Info_4() const { return ___Info_4; }
	inline SerializationInfo_t3511065455 ** get_address_of_Info_4() { return &___Info_4; }
	inline void set_Info_4(SerializationInfo_t3511065455 * value)
	{
		___Info_4 = value;
		Il2CppCodeGenWriteBarrier((&___Info_4), value);
	}

	inline static int32_t get_offset_of_IdOfContainingObj_5() { return static_cast<int32_t>(offsetof(ObjectRecord_t2987177946, ___IdOfContainingObj_5)); }
	inline int64_t get_IdOfContainingObj_5() const { return ___IdOfContainingObj_5; }
	inline int64_t* get_address_of_IdOfContainingObj_5() { return &___IdOfContainingObj_5; }
	inline void set_IdOfContainingObj_5(int64_t value)
	{
		___IdOfContainingObj_5 = value;
	}

	inline static int32_t get_offset_of_Surrogate_6() { return static_cast<int32_t>(offsetof(ObjectRecord_t2987177946, ___Surrogate_6)); }
	inline RuntimeObject* get_Surrogate_6() const { return ___Surrogate_6; }
	inline RuntimeObject** get_address_of_Surrogate_6() { return &___Surrogate_6; }
	inline void set_Surrogate_6(RuntimeObject* value)
	{
		___Surrogate_6 = value;
		Il2CppCodeGenWriteBarrier((&___Surrogate_6), value);
	}

	inline static int32_t get_offset_of_SurrogateSelector_7() { return static_cast<int32_t>(offsetof(ObjectRecord_t2987177946, ___SurrogateSelector_7)); }
	inline RuntimeObject* get_SurrogateSelector_7() const { return ___SurrogateSelector_7; }
	inline RuntimeObject** get_address_of_SurrogateSelector_7() { return &___SurrogateSelector_7; }
	inline void set_SurrogateSelector_7(RuntimeObject* value)
	{
		___SurrogateSelector_7 = value;
		Il2CppCodeGenWriteBarrier((&___SurrogateSelector_7), value);
	}

	inline static int32_t get_offset_of_Member_8() { return static_cast<int32_t>(offsetof(ObjectRecord_t2987177946, ___Member_8)); }
	inline MemberInfo_t * get_Member_8() const { return ___Member_8; }
	inline MemberInfo_t ** get_address_of_Member_8() { return &___Member_8; }
	inline void set_Member_8(MemberInfo_t * value)
	{
		___Member_8 = value;
		Il2CppCodeGenWriteBarrier((&___Member_8), value);
	}

	inline static int32_t get_offset_of_ArrayIndex_9() { return static_cast<int32_t>(offsetof(ObjectRecord_t2987177946, ___ArrayIndex_9)); }
	inline Int32U5BU5D_t1014261387* get_ArrayIndex_9() const { return ___ArrayIndex_9; }
	inline Int32U5BU5D_t1014261387** get_address_of_ArrayIndex_9() { return &___ArrayIndex_9; }
	inline void set_ArrayIndex_9(Int32U5BU5D_t1014261387* value)
	{
		___ArrayIndex_9 = value;
		Il2CppCodeGenWriteBarrier((&___ArrayIndex_9), value);
	}

	inline static int32_t get_offset_of_FixupChainAsContainer_10() { return static_cast<int32_t>(offsetof(ObjectRecord_t2987177946, ___FixupChainAsContainer_10)); }
	inline BaseFixupRecord_t2987036477 * get_FixupChainAsContainer_10() const { return ___FixupChainAsContainer_10; }
	inline BaseFixupRecord_t2987036477 ** get_address_of_FixupChainAsContainer_10() { return &___FixupChainAsContainer_10; }
	inline void set_FixupChainAsContainer_10(BaseFixupRecord_t2987036477 * value)
	{
		___FixupChainAsContainer_10 = value;
		Il2CppCodeGenWriteBarrier((&___FixupChainAsContainer_10), value);
	}

	inline static int32_t get_offset_of_FixupChainAsRequired_11() { return static_cast<int32_t>(offsetof(ObjectRecord_t2987177946, ___FixupChainAsRequired_11)); }
	inline BaseFixupRecord_t2987036477 * get_FixupChainAsRequired_11() const { return ___FixupChainAsRequired_11; }
	inline BaseFixupRecord_t2987036477 ** get_address_of_FixupChainAsRequired_11() { return &___FixupChainAsRequired_11; }
	inline void set_FixupChainAsRequired_11(BaseFixupRecord_t2987036477 * value)
	{
		___FixupChainAsRequired_11 = value;
		Il2CppCodeGenWriteBarrier((&___FixupChainAsRequired_11), value);
	}

	inline static int32_t get_offset_of_Next_12() { return static_cast<int32_t>(offsetof(ObjectRecord_t2987177946, ___Next_12)); }
	inline ObjectRecord_t2987177946 * get_Next_12() const { return ___Next_12; }
	inline ObjectRecord_t2987177946 ** get_address_of_Next_12() { return &___Next_12; }
	inline void set_Next_12(ObjectRecord_t2987177946 * value)
	{
		___Next_12 = value;
		Il2CppCodeGenWriteBarrier((&___Next_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTRECORD_T2987177946_H
#ifndef OBJECTMANAGER_T977160024_H
#define OBJECTMANAGER_T977160024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectManager
struct  ObjectManager_t977160024  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::_objectRecordChain
	ObjectRecord_t2987177946 * ____objectRecordChain_0;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::_lastObjectRecord
	ObjectRecord_t2987177946 * ____lastObjectRecord_1;
	// System.Collections.ArrayList System.Runtime.Serialization.ObjectManager::_deserializedRecords
	ArrayList_t121513687 * ____deserializedRecords_2;
	// System.Collections.ArrayList System.Runtime.Serialization.ObjectManager::_onDeserializedCallbackRecords
	ArrayList_t121513687 * ____onDeserializedCallbackRecords_3;
	// System.Collections.Hashtable System.Runtime.Serialization.ObjectManager::_objectRecords
	Hashtable_t914140952 * ____objectRecords_4;
	// System.Boolean System.Runtime.Serialization.ObjectManager::_finalFixup
	bool ____finalFixup_5;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.ObjectManager::_selector
	RuntimeObject* ____selector_6;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.ObjectManager::_context
	StreamingContext_t2684866328  ____context_7;
	// System.Int32 System.Runtime.Serialization.ObjectManager::_registeredObjectsCount
	int32_t ____registeredObjectsCount_8;

public:
	inline static int32_t get_offset_of__objectRecordChain_0() { return static_cast<int32_t>(offsetof(ObjectManager_t977160024, ____objectRecordChain_0)); }
	inline ObjectRecord_t2987177946 * get__objectRecordChain_0() const { return ____objectRecordChain_0; }
	inline ObjectRecord_t2987177946 ** get_address_of__objectRecordChain_0() { return &____objectRecordChain_0; }
	inline void set__objectRecordChain_0(ObjectRecord_t2987177946 * value)
	{
		____objectRecordChain_0 = value;
		Il2CppCodeGenWriteBarrier((&____objectRecordChain_0), value);
	}

	inline static int32_t get_offset_of__lastObjectRecord_1() { return static_cast<int32_t>(offsetof(ObjectManager_t977160024, ____lastObjectRecord_1)); }
	inline ObjectRecord_t2987177946 * get__lastObjectRecord_1() const { return ____lastObjectRecord_1; }
	inline ObjectRecord_t2987177946 ** get_address_of__lastObjectRecord_1() { return &____lastObjectRecord_1; }
	inline void set__lastObjectRecord_1(ObjectRecord_t2987177946 * value)
	{
		____lastObjectRecord_1 = value;
		Il2CppCodeGenWriteBarrier((&____lastObjectRecord_1), value);
	}

	inline static int32_t get_offset_of__deserializedRecords_2() { return static_cast<int32_t>(offsetof(ObjectManager_t977160024, ____deserializedRecords_2)); }
	inline ArrayList_t121513687 * get__deserializedRecords_2() const { return ____deserializedRecords_2; }
	inline ArrayList_t121513687 ** get_address_of__deserializedRecords_2() { return &____deserializedRecords_2; }
	inline void set__deserializedRecords_2(ArrayList_t121513687 * value)
	{
		____deserializedRecords_2 = value;
		Il2CppCodeGenWriteBarrier((&____deserializedRecords_2), value);
	}

	inline static int32_t get_offset_of__onDeserializedCallbackRecords_3() { return static_cast<int32_t>(offsetof(ObjectManager_t977160024, ____onDeserializedCallbackRecords_3)); }
	inline ArrayList_t121513687 * get__onDeserializedCallbackRecords_3() const { return ____onDeserializedCallbackRecords_3; }
	inline ArrayList_t121513687 ** get_address_of__onDeserializedCallbackRecords_3() { return &____onDeserializedCallbackRecords_3; }
	inline void set__onDeserializedCallbackRecords_3(ArrayList_t121513687 * value)
	{
		____onDeserializedCallbackRecords_3 = value;
		Il2CppCodeGenWriteBarrier((&____onDeserializedCallbackRecords_3), value);
	}

	inline static int32_t get_offset_of__objectRecords_4() { return static_cast<int32_t>(offsetof(ObjectManager_t977160024, ____objectRecords_4)); }
	inline Hashtable_t914140952 * get__objectRecords_4() const { return ____objectRecords_4; }
	inline Hashtable_t914140952 ** get_address_of__objectRecords_4() { return &____objectRecords_4; }
	inline void set__objectRecords_4(Hashtable_t914140952 * value)
	{
		____objectRecords_4 = value;
		Il2CppCodeGenWriteBarrier((&____objectRecords_4), value);
	}

	inline static int32_t get_offset_of__finalFixup_5() { return static_cast<int32_t>(offsetof(ObjectManager_t977160024, ____finalFixup_5)); }
	inline bool get__finalFixup_5() const { return ____finalFixup_5; }
	inline bool* get_address_of__finalFixup_5() { return &____finalFixup_5; }
	inline void set__finalFixup_5(bool value)
	{
		____finalFixup_5 = value;
	}

	inline static int32_t get_offset_of__selector_6() { return static_cast<int32_t>(offsetof(ObjectManager_t977160024, ____selector_6)); }
	inline RuntimeObject* get__selector_6() const { return ____selector_6; }
	inline RuntimeObject** get_address_of__selector_6() { return &____selector_6; }
	inline void set__selector_6(RuntimeObject* value)
	{
		____selector_6 = value;
		Il2CppCodeGenWriteBarrier((&____selector_6), value);
	}

	inline static int32_t get_offset_of__context_7() { return static_cast<int32_t>(offsetof(ObjectManager_t977160024, ____context_7)); }
	inline StreamingContext_t2684866328  get__context_7() const { return ____context_7; }
	inline StreamingContext_t2684866328 * get_address_of__context_7() { return &____context_7; }
	inline void set__context_7(StreamingContext_t2684866328  value)
	{
		____context_7 = value;
	}

	inline static int32_t get_offset_of__registeredObjectsCount_8() { return static_cast<int32_t>(offsetof(ObjectManager_t977160024, ____registeredObjectsCount_8)); }
	inline int32_t get__registeredObjectsCount_8() const { return ____registeredObjectsCount_8; }
	inline int32_t* get_address_of__registeredObjectsCount_8() { return &____registeredObjectsCount_8; }
	inline void set__registeredObjectsCount_8(int32_t value)
	{
		____registeredObjectsCount_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTMANAGER_T977160024_H
#ifndef CALLBACKHANDLER_T3740163366_H
#define CALLBACKHANDLER_T3740163366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
struct  CallbackHandler_t3740163366  : public MulticastDelegate_t370614990
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLBACKHANDLER_T3740163366_H
#ifndef OBJECTREADER_T2294304893_H
#define OBJECTREADER_T2294304893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectReader
struct  ObjectReader_t2294304893  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.ObjectReader::_surrogateSelector
	RuntimeObject* ____surrogateSelector_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.ObjectReader::_context
	StreamingContext_t2684866328  ____context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.ObjectReader::_binder
	SerializationBinder_t1377894519 * ____binder_2;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.ObjectReader::_filterLevel
	int32_t ____filterLevel_3;
	// System.Runtime.Serialization.ObjectManager System.Runtime.Serialization.Formatters.Binary.ObjectReader::_manager
	ObjectManager_t977160024 * ____manager_4;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectReader::_registeredAssemblies
	Hashtable_t914140952 * ____registeredAssemblies_5;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectReader::_typeMetadataCache
	Hashtable_t914140952 * ____typeMetadataCache_6;
	// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::_lastObject
	RuntimeObject * ____lastObject_7;
	// System.Int64 System.Runtime.Serialization.Formatters.Binary.ObjectReader::_lastObjectID
	int64_t ____lastObjectID_8;
	// System.Int64 System.Runtime.Serialization.Formatters.Binary.ObjectReader::_rootObjectID
	int64_t ____rootObjectID_9;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.ObjectReader::arrayBuffer
	ByteU5BU5D_t71162679* ___arrayBuffer_10;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader::ArrayBufferLength
	int32_t ___ArrayBufferLength_11;

public:
	inline static int32_t get_offset_of__surrogateSelector_0() { return static_cast<int32_t>(offsetof(ObjectReader_t2294304893, ____surrogateSelector_0)); }
	inline RuntimeObject* get__surrogateSelector_0() const { return ____surrogateSelector_0; }
	inline RuntimeObject** get_address_of__surrogateSelector_0() { return &____surrogateSelector_0; }
	inline void set__surrogateSelector_0(RuntimeObject* value)
	{
		____surrogateSelector_0 = value;
		Il2CppCodeGenWriteBarrier((&____surrogateSelector_0), value);
	}

	inline static int32_t get_offset_of__context_1() { return static_cast<int32_t>(offsetof(ObjectReader_t2294304893, ____context_1)); }
	inline StreamingContext_t2684866328  get__context_1() const { return ____context_1; }
	inline StreamingContext_t2684866328 * get_address_of__context_1() { return &____context_1; }
	inline void set__context_1(StreamingContext_t2684866328  value)
	{
		____context_1 = value;
	}

	inline static int32_t get_offset_of__binder_2() { return static_cast<int32_t>(offsetof(ObjectReader_t2294304893, ____binder_2)); }
	inline SerializationBinder_t1377894519 * get__binder_2() const { return ____binder_2; }
	inline SerializationBinder_t1377894519 ** get_address_of__binder_2() { return &____binder_2; }
	inline void set__binder_2(SerializationBinder_t1377894519 * value)
	{
		____binder_2 = value;
		Il2CppCodeGenWriteBarrier((&____binder_2), value);
	}

	inline static int32_t get_offset_of__filterLevel_3() { return static_cast<int32_t>(offsetof(ObjectReader_t2294304893, ____filterLevel_3)); }
	inline int32_t get__filterLevel_3() const { return ____filterLevel_3; }
	inline int32_t* get_address_of__filterLevel_3() { return &____filterLevel_3; }
	inline void set__filterLevel_3(int32_t value)
	{
		____filterLevel_3 = value;
	}

	inline static int32_t get_offset_of__manager_4() { return static_cast<int32_t>(offsetof(ObjectReader_t2294304893, ____manager_4)); }
	inline ObjectManager_t977160024 * get__manager_4() const { return ____manager_4; }
	inline ObjectManager_t977160024 ** get_address_of__manager_4() { return &____manager_4; }
	inline void set__manager_4(ObjectManager_t977160024 * value)
	{
		____manager_4 = value;
		Il2CppCodeGenWriteBarrier((&____manager_4), value);
	}

	inline static int32_t get_offset_of__registeredAssemblies_5() { return static_cast<int32_t>(offsetof(ObjectReader_t2294304893, ____registeredAssemblies_5)); }
	inline Hashtable_t914140952 * get__registeredAssemblies_5() const { return ____registeredAssemblies_5; }
	inline Hashtable_t914140952 ** get_address_of__registeredAssemblies_5() { return &____registeredAssemblies_5; }
	inline void set__registeredAssemblies_5(Hashtable_t914140952 * value)
	{
		____registeredAssemblies_5 = value;
		Il2CppCodeGenWriteBarrier((&____registeredAssemblies_5), value);
	}

	inline static int32_t get_offset_of__typeMetadataCache_6() { return static_cast<int32_t>(offsetof(ObjectReader_t2294304893, ____typeMetadataCache_6)); }
	inline Hashtable_t914140952 * get__typeMetadataCache_6() const { return ____typeMetadataCache_6; }
	inline Hashtable_t914140952 ** get_address_of__typeMetadataCache_6() { return &____typeMetadataCache_6; }
	inline void set__typeMetadataCache_6(Hashtable_t914140952 * value)
	{
		____typeMetadataCache_6 = value;
		Il2CppCodeGenWriteBarrier((&____typeMetadataCache_6), value);
	}

	inline static int32_t get_offset_of__lastObject_7() { return static_cast<int32_t>(offsetof(ObjectReader_t2294304893, ____lastObject_7)); }
	inline RuntimeObject * get__lastObject_7() const { return ____lastObject_7; }
	inline RuntimeObject ** get_address_of__lastObject_7() { return &____lastObject_7; }
	inline void set__lastObject_7(RuntimeObject * value)
	{
		____lastObject_7 = value;
		Il2CppCodeGenWriteBarrier((&____lastObject_7), value);
	}

	inline static int32_t get_offset_of__lastObjectID_8() { return static_cast<int32_t>(offsetof(ObjectReader_t2294304893, ____lastObjectID_8)); }
	inline int64_t get__lastObjectID_8() const { return ____lastObjectID_8; }
	inline int64_t* get_address_of__lastObjectID_8() { return &____lastObjectID_8; }
	inline void set__lastObjectID_8(int64_t value)
	{
		____lastObjectID_8 = value;
	}

	inline static int32_t get_offset_of__rootObjectID_9() { return static_cast<int32_t>(offsetof(ObjectReader_t2294304893, ____rootObjectID_9)); }
	inline int64_t get__rootObjectID_9() const { return ____rootObjectID_9; }
	inline int64_t* get_address_of__rootObjectID_9() { return &____rootObjectID_9; }
	inline void set__rootObjectID_9(int64_t value)
	{
		____rootObjectID_9 = value;
	}

	inline static int32_t get_offset_of_arrayBuffer_10() { return static_cast<int32_t>(offsetof(ObjectReader_t2294304893, ___arrayBuffer_10)); }
	inline ByteU5BU5D_t71162679* get_arrayBuffer_10() const { return ___arrayBuffer_10; }
	inline ByteU5BU5D_t71162679** get_address_of_arrayBuffer_10() { return &___arrayBuffer_10; }
	inline void set_arrayBuffer_10(ByteU5BU5D_t71162679* value)
	{
		___arrayBuffer_10 = value;
		Il2CppCodeGenWriteBarrier((&___arrayBuffer_10), value);
	}

	inline static int32_t get_offset_of_ArrayBufferLength_11() { return static_cast<int32_t>(offsetof(ObjectReader_t2294304893, ___ArrayBufferLength_11)); }
	inline int32_t get_ArrayBufferLength_11() const { return ___ArrayBufferLength_11; }
	inline int32_t* get_address_of_ArrayBufferLength_11() { return &___ArrayBufferLength_11; }
	inline void set_ArrayBufferLength_11(int32_t value)
	{
		___ArrayBufferLength_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTREADER_T2294304893_H
#ifndef BINARYFORMATTER_T2882688212_H
#define BINARYFORMATTER_T2882688212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct  BinaryFormatter_t2882688212  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::assembly_format
	int32_t ___assembly_format_0;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::binder
	SerializationBinder_t1377894519 * ___binder_1;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::context
	StreamingContext_t2684866328  ___context_2;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::surrogate_selector
	RuntimeObject* ___surrogate_selector_3;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::type_format
	int32_t ___type_format_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::filter_level
	int32_t ___filter_level_5;

public:
	inline static int32_t get_offset_of_assembly_format_0() { return static_cast<int32_t>(offsetof(BinaryFormatter_t2882688212, ___assembly_format_0)); }
	inline int32_t get_assembly_format_0() const { return ___assembly_format_0; }
	inline int32_t* get_address_of_assembly_format_0() { return &___assembly_format_0; }
	inline void set_assembly_format_0(int32_t value)
	{
		___assembly_format_0 = value;
	}

	inline static int32_t get_offset_of_binder_1() { return static_cast<int32_t>(offsetof(BinaryFormatter_t2882688212, ___binder_1)); }
	inline SerializationBinder_t1377894519 * get_binder_1() const { return ___binder_1; }
	inline SerializationBinder_t1377894519 ** get_address_of_binder_1() { return &___binder_1; }
	inline void set_binder_1(SerializationBinder_t1377894519 * value)
	{
		___binder_1 = value;
		Il2CppCodeGenWriteBarrier((&___binder_1), value);
	}

	inline static int32_t get_offset_of_context_2() { return static_cast<int32_t>(offsetof(BinaryFormatter_t2882688212, ___context_2)); }
	inline StreamingContext_t2684866328  get_context_2() const { return ___context_2; }
	inline StreamingContext_t2684866328 * get_address_of_context_2() { return &___context_2; }
	inline void set_context_2(StreamingContext_t2684866328  value)
	{
		___context_2 = value;
	}

	inline static int32_t get_offset_of_surrogate_selector_3() { return static_cast<int32_t>(offsetof(BinaryFormatter_t2882688212, ___surrogate_selector_3)); }
	inline RuntimeObject* get_surrogate_selector_3() const { return ___surrogate_selector_3; }
	inline RuntimeObject** get_address_of_surrogate_selector_3() { return &___surrogate_selector_3; }
	inline void set_surrogate_selector_3(RuntimeObject* value)
	{
		___surrogate_selector_3 = value;
		Il2CppCodeGenWriteBarrier((&___surrogate_selector_3), value);
	}

	inline static int32_t get_offset_of_type_format_4() { return static_cast<int32_t>(offsetof(BinaryFormatter_t2882688212, ___type_format_4)); }
	inline int32_t get_type_format_4() const { return ___type_format_4; }
	inline int32_t* get_address_of_type_format_4() { return &___type_format_4; }
	inline void set_type_format_4(int32_t value)
	{
		___type_format_4 = value;
	}

	inline static int32_t get_offset_of_filter_level_5() { return static_cast<int32_t>(offsetof(BinaryFormatter_t2882688212, ___filter_level_5)); }
	inline int32_t get_filter_level_5() const { return ___filter_level_5; }
	inline int32_t* get_address_of_filter_level_5() { return &___filter_level_5; }
	inline void set_filter_level_5(int32_t value)
	{
		___filter_level_5 = value;
	}
};

struct BinaryFormatter_t2882688212_StaticFields
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::<DefaultSurrogateSelector>k__BackingField
	RuntimeObject* ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BinaryFormatter_t2882688212_StaticFields, ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() const { return ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() { return &___U3CDefaultSurrogateSelectorU3Ek__BackingField_6; }
	inline void set_U3CDefaultSurrogateSelectorU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CDefaultSurrogateSelectorU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDefaultSurrogateSelectorU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYFORMATTER_T2882688212_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize500 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize501 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize502 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize503 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize504 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize505 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize506 = { sizeof (LogicalCallContext_t1888585080), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable506[2] = 
{
	LogicalCallContext_t1888585080::get_offset_of__data_0(),
	LogicalCallContext_t1888585080::get_offset_of__remotingData_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize507 = { sizeof (CallContextRemotingData_t4153724578), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable507[1] = 
{
	CallContextRemotingData_t4153724578::get_offset_of__logicalCallID_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize508 = { sizeof (MethodCall_t2493424177), -1, sizeof(MethodCall_t2493424177_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable508[11] = 
{
	MethodCall_t2493424177::get_offset_of__uri_0(),
	MethodCall_t2493424177::get_offset_of__typeName_1(),
	MethodCall_t2493424177::get_offset_of__methodName_2(),
	MethodCall_t2493424177::get_offset_of__args_3(),
	MethodCall_t2493424177::get_offset_of__methodSignature_4(),
	MethodCall_t2493424177::get_offset_of__methodBase_5(),
	MethodCall_t2493424177::get_offset_of__callContext_6(),
	MethodCall_t2493424177::get_offset_of__genericArguments_7(),
	MethodCall_t2493424177::get_offset_of_ExternalProperties_8(),
	MethodCall_t2493424177::get_offset_of_InternalProperties_9(),
	MethodCall_t2493424177_StaticFields::get_offset_of_U3CU3Ef__switchU24map1F_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize509 = { sizeof (MethodCallDictionary_t856695248), -1, sizeof(MethodCallDictionary_t856695248_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable509[1] = 
{
	MethodCallDictionary_t856695248_StaticFields::get_offset_of_InternalKeys_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize510 = { sizeof (MethodDictionary_t1024301057), -1, sizeof(MethodDictionary_t1024301057_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable510[6] = 
{
	MethodDictionary_t1024301057::get_offset_of__internalProperties_0(),
	MethodDictionary_t1024301057::get_offset_of__message_1(),
	MethodDictionary_t1024301057::get_offset_of__methodKeys_2(),
	MethodDictionary_t1024301057::get_offset_of__ownProperties_3(),
	MethodDictionary_t1024301057_StaticFields::get_offset_of_U3CU3Ef__switchU24map21_4(),
	MethodDictionary_t1024301057_StaticFields::get_offset_of_U3CU3Ef__switchU24map22_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize511 = { sizeof (DictionaryEnumerator_t1684363397), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable511[3] = 
{
	DictionaryEnumerator_t1684363397::get_offset_of__methodDictionary_0(),
	DictionaryEnumerator_t1684363397::get_offset_of__hashtableEnum_1(),
	DictionaryEnumerator_t1684363397::get_offset_of__posMethod_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize512 = { sizeof (MethodReturnDictionary_t144326629), -1, sizeof(MethodReturnDictionary_t144326629_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable512[2] = 
{
	MethodReturnDictionary_t144326629_StaticFields::get_offset_of_InternalReturnKeys_6(),
	MethodReturnDictionary_t144326629_StaticFields::get_offset_of_InternalExceptionKeys_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize513 = { sizeof (MonoMethodMessage_t1918637528), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable513[8] = 
{
	MonoMethodMessage_t1918637528::get_offset_of_method_0(),
	MonoMethodMessage_t1918637528::get_offset_of_args_1(),
	MonoMethodMessage_t1918637528::get_offset_of_arg_types_2(),
	MonoMethodMessage_t1918637528::get_offset_of_ctx_3(),
	MonoMethodMessage_t1918637528::get_offset_of_rval_4(),
	MonoMethodMessage_t1918637528::get_offset_of_exc_5(),
	MonoMethodMessage_t1918637528::get_offset_of_uri_6(),
	MonoMethodMessage_t1918637528::get_offset_of_methodSignature_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize514 = { sizeof (RemotingSurrogate_t4104407834), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize515 = { sizeof (ObjRefSurrogate_t1583203692), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize516 = { sizeof (RemotingSurrogateSelector_t1548532804), -1, sizeof(RemotingSurrogateSelector_t1548532804_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable516[4] = 
{
	RemotingSurrogateSelector_t1548532804_StaticFields::get_offset_of_s_cachedTypeObjRef_0(),
	RemotingSurrogateSelector_t1548532804_StaticFields::get_offset_of__objRefSurrogate_1(),
	RemotingSurrogateSelector_t1548532804_StaticFields::get_offset_of__objRemotingSurrogate_2(),
	RemotingSurrogateSelector_t1548532804::get_offset_of__next_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize517 = { sizeof (ReturnMessage_t89447257), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable517[13] = 
{
	ReturnMessage_t89447257::get_offset_of__outArgs_0(),
	ReturnMessage_t89447257::get_offset_of__args_1(),
	ReturnMessage_t89447257::get_offset_of__outArgsCount_2(),
	ReturnMessage_t89447257::get_offset_of__callCtx_3(),
	ReturnMessage_t89447257::get_offset_of__returnValue_4(),
	ReturnMessage_t89447257::get_offset_of__uri_5(),
	ReturnMessage_t89447257::get_offset_of__exception_6(),
	ReturnMessage_t89447257::get_offset_of__methodBase_7(),
	ReturnMessage_t89447257::get_offset_of__methodName_8(),
	ReturnMessage_t89447257::get_offset_of__methodSignature_9(),
	ReturnMessage_t89447257::get_offset_of__typeName_10(),
	ReturnMessage_t89447257::get_offset_of__properties_11(),
	ReturnMessage_t89447257::get_offset_of__inArgInfo_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize518 = { sizeof (ServerContextTerminatorSink_t3108111550), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize519 = { sizeof (ServerObjectTerminatorSink_t1874770041), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable519[1] = 
{
	ServerObjectTerminatorSink_t1874770041::get_offset_of__nextSink_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize520 = { sizeof (StackBuilderSink_t4267464825), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable520[2] = 
{
	StackBuilderSink_t4267464825::get_offset_of__target_0(),
	StackBuilderSink_t4267464825::get_offset_of__rp_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize521 = { sizeof (SoapAttribute_t1655603618), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable521[3] = 
{
	SoapAttribute_t1655603618::get_offset_of__useAttribute_0(),
	SoapAttribute_t1655603618::get_offset_of_ProtXmlNamespace_1(),
	SoapAttribute_t1655603618::get_offset_of_ReflectInfo_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize522 = { sizeof (SoapFieldAttribute_t273695542), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable522[2] = 
{
	SoapFieldAttribute_t273695542::get_offset_of__elementName_3(),
	SoapFieldAttribute_t273695542::get_offset_of__isElement_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize523 = { sizeof (SoapMethodAttribute_t3554168463), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable523[6] = 
{
	SoapMethodAttribute_t3554168463::get_offset_of__responseElement_3(),
	SoapMethodAttribute_t3554168463::get_offset_of__responseNamespace_4(),
	SoapMethodAttribute_t3554168463::get_offset_of__returnElement_5(),
	SoapMethodAttribute_t3554168463::get_offset_of__soapAction_6(),
	SoapMethodAttribute_t3554168463::get_offset_of__useAttribute_7(),
	SoapMethodAttribute_t3554168463::get_offset_of__namespace_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize524 = { sizeof (SoapParameterAttribute_t2431804833), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize525 = { sizeof (SoapTypeAttribute_t1239750435), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable525[7] = 
{
	SoapTypeAttribute_t1239750435::get_offset_of__useAttribute_3(),
	SoapTypeAttribute_t1239750435::get_offset_of__xmlElementName_4(),
	SoapTypeAttribute_t1239750435::get_offset_of__xmlNamespace_5(),
	SoapTypeAttribute_t1239750435::get_offset_of__xmlTypeName_6(),
	SoapTypeAttribute_t1239750435::get_offset_of__xmlTypeNamespace_7(),
	SoapTypeAttribute_t1239750435::get_offset_of__isType_8(),
	SoapTypeAttribute_t1239750435::get_offset_of__isElement_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize526 = { sizeof (ProxyAttribute_t1033159052), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize527 = { sizeof (TransparentProxy_t2660746388), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable527[1] = 
{
	TransparentProxy_t2660746388::get_offset_of__rp_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize528 = { sizeof (RealProxy_t3589323136), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable528[8] = 
{
	RealProxy_t3589323136::get_offset_of_class_to_proxy_0(),
	RealProxy_t3589323136::get_offset_of__targetContext_1(),
	RealProxy_t3589323136::get_offset_of__server_2(),
	RealProxy_t3589323136::get_offset_of__targetDomainId_3(),
	RealProxy_t3589323136::get_offset_of__targetUri_4(),
	RealProxy_t3589323136::get_offset_of__objectIdentity_5(),
	RealProxy_t3589323136::get_offset_of__objTP_6(),
	RealProxy_t3589323136::get_offset_of__stubData_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize529 = { sizeof (RemotingProxy_t2553047933), -1, sizeof(RemotingProxy_t2553047933_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable529[5] = 
{
	RemotingProxy_t2553047933_StaticFields::get_offset_of__cache_GetTypeMethod_8(),
	RemotingProxy_t2553047933_StaticFields::get_offset_of__cache_GetHashCodeMethod_9(),
	RemotingProxy_t2553047933::get_offset_of__sink_10(),
	RemotingProxy_t2553047933::get_offset_of__hasEnvoySink_11(),
	RemotingProxy_t2553047933::get_offset_of__ctorCall_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize530 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize531 = { sizeof (TrackingServices_t2133473993), -1, sizeof(TrackingServices_t2133473993_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable531[1] = 
{
	TrackingServices_t2133473993_StaticFields::get_offset_of__handlers_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize532 = { sizeof (ActivatedClientTypeEntry_t3918011203), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable532[2] = 
{
	ActivatedClientTypeEntry_t3918011203::get_offset_of_applicationUrl_2(),
	ActivatedClientTypeEntry_t3918011203::get_offset_of_obj_type_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize533 = { sizeof (ActivatedServiceTypeEntry_t1232272648), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable533[1] = 
{
	ActivatedServiceTypeEntry_t1232272648::get_offset_of_obj_type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize534 = { sizeof (EnvoyInfo_t3096448255), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable534[1] = 
{
	EnvoyInfo_t3096448255::get_offset_of_envoySinks_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize535 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize536 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize537 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize538 = { sizeof (Identity_t3462146499), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable538[7] = 
{
	Identity_t3462146499::get_offset_of__objectUri_0(),
	Identity_t3462146499::get_offset_of__channelSink_1(),
	Identity_t3462146499::get_offset_of__envoySink_2(),
	Identity_t3462146499::get_offset_of__clientDynamicProperties_3(),
	Identity_t3462146499::get_offset_of__serverDynamicProperties_4(),
	Identity_t3462146499::get_offset_of__objRef_5(),
	Identity_t3462146499::get_offset_of__disposed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize539 = { sizeof (ClientIdentity_t1157090520), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable539[1] = 
{
	ClientIdentity_t1157090520::get_offset_of__proxyReference_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize540 = { sizeof (InternalRemotingServices_t2451830066), -1, sizeof(InternalRemotingServices_t2451830066_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable540[1] = 
{
	InternalRemotingServices_t2451830066_StaticFields::get_offset_of__soapAttributes_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize541 = { sizeof (ObjRef_t3785752133), -1, sizeof(ObjRef_t3785752133_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable541[9] = 
{
	ObjRef_t3785752133::get_offset_of_channel_info_0(),
	ObjRef_t3785752133::get_offset_of_uri_1(),
	ObjRef_t3785752133::get_offset_of_typeInfo_2(),
	ObjRef_t3785752133::get_offset_of_envoyInfo_3(),
	ObjRef_t3785752133::get_offset_of_flags_4(),
	ObjRef_t3785752133::get_offset_of__serverType_5(),
	ObjRef_t3785752133_StaticFields::get_offset_of_MarshalledObjectRef_6(),
	ObjRef_t3785752133_StaticFields::get_offset_of_WellKnowObjectRef_7(),
	ObjRef_t3785752133_StaticFields::get_offset_of_U3CU3Ef__switchU24map26_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize542 = { sizeof (RemotingConfiguration_t3856712909), -1, sizeof(RemotingConfiguration_t3856712909_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable542[13] = 
{
	RemotingConfiguration_t3856712909_StaticFields::get_offset_of_applicationID_0(),
	RemotingConfiguration_t3856712909_StaticFields::get_offset_of_applicationName_1(),
	RemotingConfiguration_t3856712909_StaticFields::get_offset_of_processGuid_2(),
	RemotingConfiguration_t3856712909_StaticFields::get_offset_of_defaultConfigRead_3(),
	RemotingConfiguration_t3856712909_StaticFields::get_offset_of_defaultDelayedConfigRead_4(),
	RemotingConfiguration_t3856712909_StaticFields::get_offset_of__errorMode_5(),
	RemotingConfiguration_t3856712909_StaticFields::get_offset_of_wellKnownClientEntries_6(),
	RemotingConfiguration_t3856712909_StaticFields::get_offset_of_activatedClientEntries_7(),
	RemotingConfiguration_t3856712909_StaticFields::get_offset_of_wellKnownServiceEntries_8(),
	RemotingConfiguration_t3856712909_StaticFields::get_offset_of_activatedServiceEntries_9(),
	RemotingConfiguration_t3856712909_StaticFields::get_offset_of_channelTemplates_10(),
	RemotingConfiguration_t3856712909_StaticFields::get_offset_of_clientProviderTemplates_11(),
	RemotingConfiguration_t3856712909_StaticFields::get_offset_of_serverProviderTemplates_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize543 = { sizeof (ConfigHandler_t3643965628), -1, sizeof(ConfigHandler_t3643965628_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable543[10] = 
{
	ConfigHandler_t3643965628::get_offset_of_typeEntries_0(),
	ConfigHandler_t3643965628::get_offset_of_channelInstances_1(),
	ConfigHandler_t3643965628::get_offset_of_currentChannel_2(),
	ConfigHandler_t3643965628::get_offset_of_currentProviderData_3(),
	ConfigHandler_t3643965628::get_offset_of_currentClientUrl_4(),
	ConfigHandler_t3643965628::get_offset_of_appName_5(),
	ConfigHandler_t3643965628::get_offset_of_currentXmlPath_6(),
	ConfigHandler_t3643965628::get_offset_of_onlyDelayedChannels_7(),
	ConfigHandler_t3643965628_StaticFields::get_offset_of_U3CU3Ef__switchU24map27_8(),
	ConfigHandler_t3643965628_StaticFields::get_offset_of_U3CU3Ef__switchU24map28_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize544 = { sizeof (ChannelData_t2389701058), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable544[7] = 
{
	ChannelData_t2389701058::get_offset_of_Ref_0(),
	ChannelData_t2389701058::get_offset_of_Type_1(),
	ChannelData_t2389701058::get_offset_of_Id_2(),
	ChannelData_t2389701058::get_offset_of_DelayLoadAsClientChannel_3(),
	ChannelData_t2389701058::get_offset_of__serverProviders_4(),
	ChannelData_t2389701058::get_offset_of__clientProviders_5(),
	ChannelData_t2389701058::get_offset_of__customProperties_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize545 = { sizeof (ProviderData_t3549448575), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable545[5] = 
{
	ProviderData_t3549448575::get_offset_of_Ref_0(),
	ProviderData_t3549448575::get_offset_of_Type_1(),
	ProviderData_t3549448575::get_offset_of_Id_2(),
	ProviderData_t3549448575::get_offset_of_CustomProperties_3(),
	ProviderData_t3549448575::get_offset_of_CustomData_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize546 = { sizeof (FormatterData_t424717881), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize547 = { sizeof (RemotingException_t3172418044), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize548 = { sizeof (RemotingServices_t1021842310), -1, sizeof(RemotingServices_t1021842310_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable548[8] = 
{
	RemotingServices_t1021842310_StaticFields::get_offset_of_uri_hash_0(),
	RemotingServices_t1021842310_StaticFields::get_offset_of__serializationFormatter_1(),
	RemotingServices_t1021842310_StaticFields::get_offset_of__deserializationFormatter_2(),
	RemotingServices_t1021842310_StaticFields::get_offset_of_app_id_3(),
	RemotingServices_t1021842310_StaticFields::get_offset_of_next_id_4(),
	RemotingServices_t1021842310_StaticFields::get_offset_of_methodBindings_5(),
	RemotingServices_t1021842310_StaticFields::get_offset_of_FieldSetterMethod_6(),
	RemotingServices_t1021842310_StaticFields::get_offset_of_FieldGetterMethod_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize549 = { sizeof (ServerIdentity_t2601200201), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable549[3] = 
{
	ServerIdentity_t2601200201::get_offset_of__objectType_7(),
	ServerIdentity_t2601200201::get_offset_of__serverObject_8(),
	ServerIdentity_t2601200201::get_offset_of__context_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize550 = { sizeof (ClientActivatedIdentity_t3873624707), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize551 = { sizeof (SingletonIdentity_t4287860215), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize552 = { sizeof (SingleCallIdentity_t3577626121), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize553 = { sizeof (SoapServices_t1639859035), -1, sizeof(SoapServices_t1639859035_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable553[5] = 
{
	SoapServices_t1639859035_StaticFields::get_offset_of__xmlTypes_0(),
	SoapServices_t1639859035_StaticFields::get_offset_of__xmlElements_1(),
	SoapServices_t1639859035_StaticFields::get_offset_of__soapActions_2(),
	SoapServices_t1639859035_StaticFields::get_offset_of__soapActionsMethods_3(),
	SoapServices_t1639859035_StaticFields::get_offset_of__typeInfos_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize554 = { sizeof (TypeInfo_t2005344498), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable554[2] = 
{
	TypeInfo_t2005344498::get_offset_of_Attributes_0(),
	TypeInfo_t2005344498::get_offset_of_Elements_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize555 = { sizeof (TypeEntry_t1625158409), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable555[2] = 
{
	TypeEntry_t1625158409::get_offset_of_assembly_name_0(),
	TypeEntry_t1625158409::get_offset_of_type_name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize556 = { sizeof (TypeInfo_t1443218818), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable556[3] = 
{
	TypeInfo_t1443218818::get_offset_of_serverType_0(),
	TypeInfo_t1443218818::get_offset_of_serverHierarchy_1(),
	TypeInfo_t1443218818::get_offset_of_interfacesImplemented_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize557 = { sizeof (WellKnownClientTypeEntry_t897194547), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable557[3] = 
{
	WellKnownClientTypeEntry_t897194547::get_offset_of_obj_type_2(),
	WellKnownClientTypeEntry_t897194547::get_offset_of_obj_url_3(),
	WellKnownClientTypeEntry_t897194547::get_offset_of_app_url_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize558 = { sizeof (WellKnownObjectMode_t1676761328)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable558[3] = 
{
	WellKnownObjectMode_t1676761328::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize559 = { sizeof (WellKnownServiceTypeEntry_t3317462723), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable559[3] = 
{
	WellKnownServiceTypeEntry_t3317462723::get_offset_of_obj_type_2(),
	WellKnownServiceTypeEntry_t3317462723::get_offset_of_obj_uri_3(),
	WellKnownServiceTypeEntry_t3317462723::get_offset_of_obj_mode_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize560 = { sizeof (BinaryCommon_t2627644911), -1, sizeof(BinaryCommon_t2627644911_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable560[4] = 
{
	BinaryCommon_t2627644911_StaticFields::get_offset_of_BinaryHeader_0(),
	BinaryCommon_t2627644911_StaticFields::get_offset_of__typeCodesToType_1(),
	BinaryCommon_t2627644911_StaticFields::get_offset_of__typeCodeMap_2(),
	BinaryCommon_t2627644911_StaticFields::get_offset_of_UseReflectionSerialization_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize561 = { sizeof (BinaryElement_t3912361437)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable561[24] = 
{
	BinaryElement_t3912361437::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize562 = { sizeof (TypeTag_t396267562)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable562[9] = 
{
	TypeTag_t396267562::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize563 = { sizeof (MethodFlags_t1938742439)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable563[11] = 
{
	MethodFlags_t1938742439::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize564 = { sizeof (ReturnTypeTag_t1683119736)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable564[5] = 
{
	ReturnTypeTag_t1683119736::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize565 = { sizeof (BinaryFormatter_t2882688212), -1, sizeof(BinaryFormatter_t2882688212_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable565[7] = 
{
	BinaryFormatter_t2882688212::get_offset_of_assembly_format_0(),
	BinaryFormatter_t2882688212::get_offset_of_binder_1(),
	BinaryFormatter_t2882688212::get_offset_of_context_2(),
	BinaryFormatter_t2882688212::get_offset_of_surrogate_selector_3(),
	BinaryFormatter_t2882688212::get_offset_of_type_format_4(),
	BinaryFormatter_t2882688212::get_offset_of_filter_level_5(),
	BinaryFormatter_t2882688212_StaticFields::get_offset_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize566 = { sizeof (MessageFormatter_t3504751248), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize567 = { sizeof (ObjectReader_t2294304893), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable567[12] = 
{
	ObjectReader_t2294304893::get_offset_of__surrogateSelector_0(),
	ObjectReader_t2294304893::get_offset_of__context_1(),
	ObjectReader_t2294304893::get_offset_of__binder_2(),
	ObjectReader_t2294304893::get_offset_of__filterLevel_3(),
	ObjectReader_t2294304893::get_offset_of__manager_4(),
	ObjectReader_t2294304893::get_offset_of__registeredAssemblies_5(),
	ObjectReader_t2294304893::get_offset_of__typeMetadataCache_6(),
	ObjectReader_t2294304893::get_offset_of__lastObject_7(),
	ObjectReader_t2294304893::get_offset_of__lastObjectID_8(),
	ObjectReader_t2294304893::get_offset_of__rootObjectID_9(),
	ObjectReader_t2294304893::get_offset_of_arrayBuffer_10(),
	ObjectReader_t2294304893::get_offset_of_ArrayBufferLength_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize568 = { sizeof (TypeMetadata_t3415911656), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable568[6] = 
{
	TypeMetadata_t3415911656::get_offset_of_Type_0(),
	TypeMetadata_t3415911656::get_offset_of_MemberTypes_1(),
	TypeMetadata_t3415911656::get_offset_of_MemberNames_2(),
	TypeMetadata_t3415911656::get_offset_of_MemberInfos_3(),
	TypeMetadata_t3415911656::get_offset_of_FieldCount_4(),
	TypeMetadata_t3415911656::get_offset_of_NeedsSerializationInfo_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize569 = { sizeof (ArrayNullFiller_t412688595), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable569[1] = 
{
	ArrayNullFiller_t412688595::get_offset_of_NullCount_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize570 = { sizeof (FormatterAssemblyStyle_t3559408470)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable570[3] = 
{
	FormatterAssemblyStyle_t3559408470::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize571 = { sizeof (FormatterTypeStyle_t1982860997)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable571[4] = 
{
	FormatterTypeStyle_t1982860997::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize572 = { sizeof (TypeFilterLevel_t4001963918)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable572[3] = 
{
	TypeFilterLevel_t4001963918::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize573 = { sizeof (FormatterConverter_t3275969241), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize574 = { sizeof (FormatterServices_t2544545055), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize575 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize576 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize577 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize578 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize579 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize580 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize581 = { sizeof (ObjectManager_t977160024), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable581[9] = 
{
	ObjectManager_t977160024::get_offset_of__objectRecordChain_0(),
	ObjectManager_t977160024::get_offset_of__lastObjectRecord_1(),
	ObjectManager_t977160024::get_offset_of__deserializedRecords_2(),
	ObjectManager_t977160024::get_offset_of__onDeserializedCallbackRecords_3(),
	ObjectManager_t977160024::get_offset_of__objectRecords_4(),
	ObjectManager_t977160024::get_offset_of__finalFixup_5(),
	ObjectManager_t977160024::get_offset_of__selector_6(),
	ObjectManager_t977160024::get_offset_of__context_7(),
	ObjectManager_t977160024::get_offset_of__registeredObjectsCount_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize582 = { sizeof (BaseFixupRecord_t2987036477), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable582[4] = 
{
	BaseFixupRecord_t2987036477::get_offset_of_ObjectToBeFixed_0(),
	BaseFixupRecord_t2987036477::get_offset_of_ObjectRequired_1(),
	BaseFixupRecord_t2987036477::get_offset_of_NextSameContainer_2(),
	BaseFixupRecord_t2987036477::get_offset_of_NextSameRequired_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize583 = { sizeof (ArrayFixupRecord_t4155248862), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable583[1] = 
{
	ArrayFixupRecord_t4155248862::get_offset_of__index_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize584 = { sizeof (MultiArrayFixupRecord_t779363574), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable584[1] = 
{
	MultiArrayFixupRecord_t779363574::get_offset_of__indices_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize585 = { sizeof (FixupRecord_t553210626), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable585[1] = 
{
	FixupRecord_t553210626::get_offset_of__member_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize586 = { sizeof (DelayedFixupRecord_t690235876), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable586[1] = 
{
	DelayedFixupRecord_t690235876::get_offset_of__memberName_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize587 = { sizeof (ObjectRecordStatus_t1165806601)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable587[5] = 
{
	ObjectRecordStatus_t1165806601::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize588 = { sizeof (ObjectRecord_t2987177946), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable588[13] = 
{
	ObjectRecord_t2987177946::get_offset_of_Status_0(),
	ObjectRecord_t2987177946::get_offset_of_OriginalObject_1(),
	ObjectRecord_t2987177946::get_offset_of_ObjectInstance_2(),
	ObjectRecord_t2987177946::get_offset_of_ObjectID_3(),
	ObjectRecord_t2987177946::get_offset_of_Info_4(),
	ObjectRecord_t2987177946::get_offset_of_IdOfContainingObj_5(),
	ObjectRecord_t2987177946::get_offset_of_Surrogate_6(),
	ObjectRecord_t2987177946::get_offset_of_SurrogateSelector_7(),
	ObjectRecord_t2987177946::get_offset_of_Member_8(),
	ObjectRecord_t2987177946::get_offset_of_ArrayIndex_9(),
	ObjectRecord_t2987177946::get_offset_of_FixupChainAsContainer_10(),
	ObjectRecord_t2987177946::get_offset_of_FixupChainAsRequired_11(),
	ObjectRecord_t2987177946::get_offset_of_Next_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize589 = { sizeof (OnDeserializedAttribute_t3214576372), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize590 = { sizeof (OnDeserializingAttribute_t3623253394), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize591 = { sizeof (OnSerializedAttribute_t1057017994), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize592 = { sizeof (OnSerializingAttribute_t235334352), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize593 = { sizeof (SerializationBinder_t1377894519), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize594 = { sizeof (SerializationCallbacks_t3378188894), -1, sizeof(SerializationCallbacks_t3378188894_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable594[6] = 
{
	SerializationCallbacks_t3378188894::get_offset_of_onSerializingList_0(),
	SerializationCallbacks_t3378188894::get_offset_of_onSerializedList_1(),
	SerializationCallbacks_t3378188894::get_offset_of_onDeserializingList_2(),
	SerializationCallbacks_t3378188894::get_offset_of_onDeserializedList_3(),
	SerializationCallbacks_t3378188894_StaticFields::get_offset_of_cache_4(),
	SerializationCallbacks_t3378188894_StaticFields::get_offset_of_cache_lock_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize595 = { sizeof (CallbackHandler_t3740163366), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize596 = { sizeof (SerializationEntry_t607454486)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable596[3] = 
{
	SerializationEntry_t607454486::get_offset_of_name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SerializationEntry_t607454486::get_offset_of_objectType_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SerializationEntry_t607454486::get_offset_of_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize597 = { sizeof (SerializationException_t3932561670), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize598 = { sizeof (SerializationInfo_t3511065455), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable598[5] = 
{
	SerializationInfo_t3511065455::get_offset_of_serialized_0(),
	SerializationInfo_t3511065455::get_offset_of_values_1(),
	SerializationInfo_t3511065455::get_offset_of_assemblyName_2(),
	SerializationInfo_t3511065455::get_offset_of_fullTypeName_3(),
	SerializationInfo_t3511065455::get_offset_of_converter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize599 = { sizeof (SerializationInfoEnumerator_t225921560), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable599[1] = 
{
	SerializationInfoEnumerator_t225921560::get_offset_of_enumerator_0(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
