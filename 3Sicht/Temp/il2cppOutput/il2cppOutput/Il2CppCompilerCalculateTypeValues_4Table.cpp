#include "il2cpp-config.h"

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

// System.IntPtr[]
struct IntPtrU5BU5D_t2058873772;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t320395106;
// System.Collections.ArrayList
struct ArrayList_t3525268140;
// System.Collections.Hashtable
struct Hashtable_t2707551258;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t2903489424;
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t2526500848;
// System.Runtime.Remoting.Contexts.CrossContextChannel
struct CrossContextChannel_t455535530;
// System.Collections.IList
struct IList_t1865900813;
// System.Runtime.Remoting.Contexts.IDynamicProperty
struct IDynamicProperty_t1768783836;
// System.Runtime.Remoting.Contexts.IDynamicMessageSink
struct IDynamicMessageSink_t1526058969;
// System.Resources.ResourceReader
struct ResourceReader_t948677063;
// System.Type
struct Type_t;
// System.IO.BinaryReader
struct BinaryReader_t4272063891;
// System.Runtime.Serialization.IFormatter
struct IFormatter_t3119409172;
// System.String[]
struct StringU5BU5D_t3832122219;
// System.Int32[]
struct Int32U5BU5D_t2679505748;
// System.Resources.ResourceReader/ResourceInfo[]
struct ResourceInfoU5BU5D_t236975709;
// System.Resources.ResourceReader/ResourceCacheItem[]
struct ResourceCacheItemU5BU5D_t982934758;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t3794790105;
// System.Resources.IResourceReader
struct IResourceReader_t1808900495;
// System.Resources.NameOrId
struct NameOrId_t3940602482;
// System.Void
struct Void_t886624537;
// System.Char[]
struct CharU5BU5D_t498600359;
// System.Version
struct Version_t600668514;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t3438636956;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t2310851654;
// System.Runtime.Remoting.Contexts.ContextCallbackObject
struct ContextCallbackObject_t3921426051;




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
#ifndef EXCEPTION_T1203457310_H
#define EXCEPTION_T1203457310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1203457310  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t2058873772* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t1203457310 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t1203457310, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t2058873772* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t2058873772** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t2058873772* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1203457310, ___inner_exception_1)); }
	inline Exception_t1203457310 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1203457310 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1203457310 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1203457310, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1203457310, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1203457310, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1203457310, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1203457310, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1203457310, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1203457310, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1203457310, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1203457310, ____data_10)); }
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
#endif // EXCEPTION_T1203457310_H
#ifndef SINKPROVIDERDATA_T3980374788_H
#define SINKPROVIDERDATA_T3980374788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.SinkProviderData
struct  SinkProviderData_t3980374788  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Channels.SinkProviderData::sinkName
	String_t* ___sinkName_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.SinkProviderData::children
	ArrayList_t3525268140 * ___children_1;
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.SinkProviderData::properties
	Hashtable_t2707551258 * ___properties_2;

public:
	inline static int32_t get_offset_of_sinkName_0() { return static_cast<int32_t>(offsetof(SinkProviderData_t3980374788, ___sinkName_0)); }
	inline String_t* get_sinkName_0() const { return ___sinkName_0; }
	inline String_t** get_address_of_sinkName_0() { return &___sinkName_0; }
	inline void set_sinkName_0(String_t* value)
	{
		___sinkName_0 = value;
		Il2CppCodeGenWriteBarrier((&___sinkName_0), value);
	}

	inline static int32_t get_offset_of_children_1() { return static_cast<int32_t>(offsetof(SinkProviderData_t3980374788, ___children_1)); }
	inline ArrayList_t3525268140 * get_children_1() const { return ___children_1; }
	inline ArrayList_t3525268140 ** get_address_of_children_1() { return &___children_1; }
	inline void set_children_1(ArrayList_t3525268140 * value)
	{
		___children_1 = value;
		Il2CppCodeGenWriteBarrier((&___children_1), value);
	}

	inline static int32_t get_offset_of_properties_2() { return static_cast<int32_t>(offsetof(SinkProviderData_t3980374788, ___properties_2)); }
	inline Hashtable_t2707551258 * get_properties_2() const { return ___properties_2; }
	inline Hashtable_t2707551258 ** get_address_of_properties_2() { return &___properties_2; }
	inline void set_properties_2(Hashtable_t2707551258 * value)
	{
		___properties_2 = value;
		Il2CppCodeGenWriteBarrier((&___properties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINKPROVIDERDATA_T3980374788_H
#ifndef CROSSAPPDOMAINSINK_T400755761_H
#define CROSSAPPDOMAINSINK_T400755761_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainSink
struct  CrossAppDomainSink_t400755761  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::_domainID
	int32_t ____domainID_2;

public:
	inline static int32_t get_offset_of__domainID_2() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t400755761, ____domainID_2)); }
	inline int32_t get__domainID_2() const { return ____domainID_2; }
	inline int32_t* get_address_of__domainID_2() { return &____domainID_2; }
	inline void set__domainID_2(int32_t value)
	{
		____domainID_2 = value;
	}
};

struct CrossAppDomainSink_t400755761_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.CrossAppDomainSink::s_sinks
	Hashtable_t2707551258 * ___s_sinks_0;
	// System.Reflection.MethodInfo System.Runtime.Remoting.Channels.CrossAppDomainSink::processMessageMethod
	MethodInfo_t * ___processMessageMethod_1;

public:
	inline static int32_t get_offset_of_s_sinks_0() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t400755761_StaticFields, ___s_sinks_0)); }
	inline Hashtable_t2707551258 * get_s_sinks_0() const { return ___s_sinks_0; }
	inline Hashtable_t2707551258 ** get_address_of_s_sinks_0() { return &___s_sinks_0; }
	inline void set_s_sinks_0(Hashtable_t2707551258 * value)
	{
		___s_sinks_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_sinks_0), value);
	}

	inline static int32_t get_offset_of_processMessageMethod_1() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t400755761_StaticFields, ___processMessageMethod_1)); }
	inline MethodInfo_t * get_processMessageMethod_1() const { return ___processMessageMethod_1; }
	inline MethodInfo_t ** get_address_of_processMessageMethod_1() { return &___processMessageMethod_1; }
	inline void set_processMessageMethod_1(MethodInfo_t * value)
	{
		___processMessageMethod_1 = value;
		Il2CppCodeGenWriteBarrier((&___processMessageMethod_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINSINK_T400755761_H
#ifndef CRITICALFINALIZEROBJECT_T2023547255_H
#define CRITICALFINALIZEROBJECT_T2023547255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t2023547255  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T2023547255_H
#ifndef CROSSAPPDOMAINCHANNEL_T1012949913_H
#define CROSSAPPDOMAINCHANNEL_T1012949913_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainChannel
struct  CrossAppDomainChannel_t1012949913  : public RuntimeObject
{
public:

public:
};

struct CrossAppDomainChannel_t1012949913_StaticFields
{
public:
	// System.Object System.Runtime.Remoting.Channels.CrossAppDomainChannel::s_lock
	RuntimeObject * ___s_lock_0;

public:
	inline static int32_t get_offset_of_s_lock_0() { return static_cast<int32_t>(offsetof(CrossAppDomainChannel_t1012949913_StaticFields, ___s_lock_0)); }
	inline RuntimeObject * get_s_lock_0() const { return ___s_lock_0; }
	inline RuntimeObject ** get_address_of_s_lock_0() { return &___s_lock_0; }
	inline void set_s_lock_0(RuntimeObject * value)
	{
		___s_lock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_lock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINCHANNEL_T1012949913_H
#ifndef ACTIVATIONARGUMENTS_T2393595394_H
#define ACTIVATIONARGUMENTS_T2393595394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Hosting.ActivationArguments
struct  ActivationArguments_t2393595394  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATIONARGUMENTS_T2393595394_H
#ifndef DYNAMICPROPERTYCOLLECTION_T2310851654_H
#define DYNAMICPROPERTYCOLLECTION_T2310851654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct  DynamicPropertyCollection_t2310851654  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Contexts.DynamicPropertyCollection::_properties
	ArrayList_t3525268140 * ____properties_0;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(DynamicPropertyCollection_t2310851654, ____properties_0)); }
	inline ArrayList_t3525268140 * get__properties_0() const { return ____properties_0; }
	inline ArrayList_t3525268140 ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(ArrayList_t3525268140 * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier((&____properties_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICPROPERTYCOLLECTION_T2310851654_H
#ifndef CROSSAPPDOMAINDATA_T1640225116_H
#define CROSSAPPDOMAINDATA_T1640225116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainData
struct  CrossAppDomainData_t1640225116  : public RuntimeObject
{
public:
	// System.Object System.Runtime.Remoting.Channels.CrossAppDomainData::_ContextID
	RuntimeObject * ____ContextID_0;
	// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainData::_DomainID
	int32_t ____DomainID_1;
	// System.String System.Runtime.Remoting.Channels.CrossAppDomainData::_processGuid
	String_t* ____processGuid_2;

public:
	inline static int32_t get_offset_of__ContextID_0() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t1640225116, ____ContextID_0)); }
	inline RuntimeObject * get__ContextID_0() const { return ____ContextID_0; }
	inline RuntimeObject ** get_address_of__ContextID_0() { return &____ContextID_0; }
	inline void set__ContextID_0(RuntimeObject * value)
	{
		____ContextID_0 = value;
		Il2CppCodeGenWriteBarrier((&____ContextID_0), value);
	}

	inline static int32_t get_offset_of__DomainID_1() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t1640225116, ____DomainID_1)); }
	inline int32_t get__DomainID_1() const { return ____DomainID_1; }
	inline int32_t* get_address_of__DomainID_1() { return &____DomainID_1; }
	inline void set__DomainID_1(int32_t value)
	{
		____DomainID_1 = value;
	}

	inline static int32_t get_offset_of__processGuid_2() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t1640225116, ____processGuid_2)); }
	inline String_t* get__processGuid_2() const { return ____processGuid_2; }
	inline String_t** get_address_of__processGuid_2() { return &____processGuid_2; }
	inline void set__processGuid_2(String_t* value)
	{
		____processGuid_2 = value;
		Il2CppCodeGenWriteBarrier((&____processGuid_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINDATA_T1640225116_H
#ifndef CHANNELINFO_T2894580255_H
#define CHANNELINFO_T2894580255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ChannelInfo
struct  ChannelInfo_t2894580255  : public RuntimeObject
{
public:
	// System.Object[] System.Runtime.Remoting.ChannelInfo::channelData
	ObjectU5BU5D_t2903489424* ___channelData_0;

public:
	inline static int32_t get_offset_of_channelData_0() { return static_cast<int32_t>(offsetof(ChannelInfo_t2894580255, ___channelData_0)); }
	inline ObjectU5BU5D_t2903489424* get_channelData_0() const { return ___channelData_0; }
	inline ObjectU5BU5D_t2903489424** get_address_of_channelData_0() { return &___channelData_0; }
	inline void set_channelData_0(ObjectU5BU5D_t2903489424* value)
	{
		___channelData_0 = value;
		Il2CppCodeGenWriteBarrier((&___channelData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELINFO_T2894580255_H
#ifndef CONTEXTLEVELACTIVATOR_T3126525165_H
#define CONTEXTLEVELACTIVATOR_T3126525165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ContextLevelActivator
struct  ContextLevelActivator_t3126525165  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ContextLevelActivator::m_NextActivator
	RuntimeObject* ___m_NextActivator_0;

public:
	inline static int32_t get_offset_of_m_NextActivator_0() { return static_cast<int32_t>(offsetof(ContextLevelActivator_t3126525165, ___m_NextActivator_0)); }
	inline RuntimeObject* get_m_NextActivator_0() const { return ___m_NextActivator_0; }
	inline RuntimeObject** get_address_of_m_NextActivator_0() { return &___m_NextActivator_0; }
	inline void set_m_NextActivator_0(RuntimeObject* value)
	{
		___m_NextActivator_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_NextActivator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTLEVELACTIVATOR_T3126525165_H
#ifndef CONSTRUCTIONLEVELACTIVATOR_T3977241201_H
#define CONSTRUCTIONLEVELACTIVATOR_T3977241201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ConstructionLevelActivator
struct  ConstructionLevelActivator_t3977241201  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTIONLEVELACTIVATOR_T3977241201_H
#ifndef APPDOMAINLEVELACTIVATOR_T3087894846_H
#define APPDOMAINLEVELACTIVATOR_T3087894846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.AppDomainLevelActivator
struct  AppDomainLevelActivator_t3087894846  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Activation.AppDomainLevelActivator::_activationUrl
	String_t* ____activationUrl_0;
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.AppDomainLevelActivator::_next
	RuntimeObject* ____next_1;

public:
	inline static int32_t get_offset_of__activationUrl_0() { return static_cast<int32_t>(offsetof(AppDomainLevelActivator_t3087894846, ____activationUrl_0)); }
	inline String_t* get__activationUrl_0() const { return ____activationUrl_0; }
	inline String_t** get_address_of__activationUrl_0() { return &____activationUrl_0; }
	inline void set__activationUrl_0(String_t* value)
	{
		____activationUrl_0 = value;
		Il2CppCodeGenWriteBarrier((&____activationUrl_0), value);
	}

	inline static int32_t get_offset_of__next_1() { return static_cast<int32_t>(offsetof(AppDomainLevelActivator_t3087894846, ____next_1)); }
	inline RuntimeObject* get__next_1() const { return ____next_1; }
	inline RuntimeObject** get_address_of__next_1() { return &____next_1; }
	inline void set__next_1(RuntimeObject* value)
	{
		____next_1 = value;
		Il2CppCodeGenWriteBarrier((&____next_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAINLEVELACTIVATOR_T3087894846_H
#ifndef ACTIVATIONSERVICES_T3257440060_H
#define ACTIVATIONSERVICES_T3257440060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ActivationServices
struct  ActivationServices_t3257440060  : public RuntimeObject
{
public:

public:
};

struct ActivationServices_t3257440060_StaticFields
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::_constructionActivator
	RuntimeObject* ____constructionActivator_0;

public:
	inline static int32_t get_offset_of__constructionActivator_0() { return static_cast<int32_t>(offsetof(ActivationServices_t3257440060_StaticFields, ____constructionActivator_0)); }
	inline RuntimeObject* get__constructionActivator_0() const { return ____constructionActivator_0; }
	inline RuntimeObject** get_address_of__constructionActivator_0() { return &____constructionActivator_0; }
	inline void set__constructionActivator_0(RuntimeObject* value)
	{
		____constructionActivator_0 = value;
		Il2CppCodeGenWriteBarrier((&____constructionActivator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATIONSERVICES_T3257440060_H
#ifndef ERRORWRAPPER_T3702320715_H
#define ERRORWRAPPER_T3702320715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ErrorWrapper
struct  ErrorWrapper_t3702320715  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.InteropServices.ErrorWrapper::errorCode
	int32_t ___errorCode_0;

public:
	inline static int32_t get_offset_of_errorCode_0() { return static_cast<int32_t>(offsetof(ErrorWrapper_t3702320715, ___errorCode_0)); }
	inline int32_t get_errorCode_0() const { return ___errorCode_0; }
	inline int32_t* get_address_of_errorCode_0() { return &___errorCode_0; }
	inline void set_errorCode_0(int32_t value)
	{
		___errorCode_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORWRAPPER_T3702320715_H
#ifndef CHANNELSERVICES_T1923365737_H
#define CHANNELSERVICES_T1923365737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.ChannelServices
struct  ChannelServices_t1923365737  : public RuntimeObject
{
public:

public:
};

struct ChannelServices_t1923365737_StaticFields
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::registeredChannels
	ArrayList_t3525268140 * ___registeredChannels_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::delayedClientChannels
	ArrayList_t3525268140 * ___delayedClientChannels_1;
	// System.Runtime.Remoting.Contexts.CrossContextChannel System.Runtime.Remoting.Channels.ChannelServices::_crossContextSink
	CrossContextChannel_t455535530 * ____crossContextSink_2;
	// System.String System.Runtime.Remoting.Channels.ChannelServices::CrossContextUrl
	String_t* ___CrossContextUrl_3;
	// System.Collections.IList System.Runtime.Remoting.Channels.ChannelServices::oldStartModeTypes
	RuntimeObject* ___oldStartModeTypes_4;

public:
	inline static int32_t get_offset_of_registeredChannels_0() { return static_cast<int32_t>(offsetof(ChannelServices_t1923365737_StaticFields, ___registeredChannels_0)); }
	inline ArrayList_t3525268140 * get_registeredChannels_0() const { return ___registeredChannels_0; }
	inline ArrayList_t3525268140 ** get_address_of_registeredChannels_0() { return &___registeredChannels_0; }
	inline void set_registeredChannels_0(ArrayList_t3525268140 * value)
	{
		___registeredChannels_0 = value;
		Il2CppCodeGenWriteBarrier((&___registeredChannels_0), value);
	}

	inline static int32_t get_offset_of_delayedClientChannels_1() { return static_cast<int32_t>(offsetof(ChannelServices_t1923365737_StaticFields, ___delayedClientChannels_1)); }
	inline ArrayList_t3525268140 * get_delayedClientChannels_1() const { return ___delayedClientChannels_1; }
	inline ArrayList_t3525268140 ** get_address_of_delayedClientChannels_1() { return &___delayedClientChannels_1; }
	inline void set_delayedClientChannels_1(ArrayList_t3525268140 * value)
	{
		___delayedClientChannels_1 = value;
		Il2CppCodeGenWriteBarrier((&___delayedClientChannels_1), value);
	}

	inline static int32_t get_offset_of__crossContextSink_2() { return static_cast<int32_t>(offsetof(ChannelServices_t1923365737_StaticFields, ____crossContextSink_2)); }
	inline CrossContextChannel_t455535530 * get__crossContextSink_2() const { return ____crossContextSink_2; }
	inline CrossContextChannel_t455535530 ** get_address_of__crossContextSink_2() { return &____crossContextSink_2; }
	inline void set__crossContextSink_2(CrossContextChannel_t455535530 * value)
	{
		____crossContextSink_2 = value;
		Il2CppCodeGenWriteBarrier((&____crossContextSink_2), value);
	}

	inline static int32_t get_offset_of_CrossContextUrl_3() { return static_cast<int32_t>(offsetof(ChannelServices_t1923365737_StaticFields, ___CrossContextUrl_3)); }
	inline String_t* get_CrossContextUrl_3() const { return ___CrossContextUrl_3; }
	inline String_t** get_address_of_CrossContextUrl_3() { return &___CrossContextUrl_3; }
	inline void set_CrossContextUrl_3(String_t* value)
	{
		___CrossContextUrl_3 = value;
		Il2CppCodeGenWriteBarrier((&___CrossContextUrl_3), value);
	}

	inline static int32_t get_offset_of_oldStartModeTypes_4() { return static_cast<int32_t>(offsetof(ChannelServices_t1923365737_StaticFields, ___oldStartModeTypes_4)); }
	inline RuntimeObject* get_oldStartModeTypes_4() const { return ___oldStartModeTypes_4; }
	inline RuntimeObject** get_address_of_oldStartModeTypes_4() { return &___oldStartModeTypes_4; }
	inline void set_oldStartModeTypes_4(RuntimeObject* value)
	{
		___oldStartModeTypes_4 = value;
		Il2CppCodeGenWriteBarrier((&___oldStartModeTypes_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELSERVICES_T1923365737_H
#ifndef ISVOLATILE_T719103619_H
#define ISVOLATILE_T719103619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsVolatile
struct  IsVolatile_t719103619  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISVOLATILE_T719103619_H
#ifndef DYNAMICPROPERTYREG_T3427414888_H
#define DYNAMICPROPERTYREG_T3427414888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg
struct  DynamicPropertyReg_t3427414888  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Contexts.IDynamicProperty System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg::Property
	RuntimeObject* ___Property_0;
	// System.Runtime.Remoting.Contexts.IDynamicMessageSink System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg::Sink
	RuntimeObject* ___Sink_1;

public:
	inline static int32_t get_offset_of_Property_0() { return static_cast<int32_t>(offsetof(DynamicPropertyReg_t3427414888, ___Property_0)); }
	inline RuntimeObject* get_Property_0() const { return ___Property_0; }
	inline RuntimeObject** get_address_of_Property_0() { return &___Property_0; }
	inline void set_Property_0(RuntimeObject* value)
	{
		___Property_0 = value;
		Il2CppCodeGenWriteBarrier((&___Property_0), value);
	}

	inline static int32_t get_offset_of_Sink_1() { return static_cast<int32_t>(offsetof(DynamicPropertyReg_t3427414888, ___Sink_1)); }
	inline RuntimeObject* get_Sink_1() const { return ___Sink_1; }
	inline RuntimeObject** get_address_of_Sink_1() { return &___Sink_1; }
	inline void set_Sink_1(RuntimeObject* value)
	{
		___Sink_1 = value;
		Il2CppCodeGenWriteBarrier((&___Sink_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICPROPERTYREG_T3427414888_H
#ifndef RESOURCEENUMERATOR_T570180795_H
#define RESOURCEENUMERATOR_T570180795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceEnumerator
struct  ResourceEnumerator_t570180795  : public RuntimeObject
{
public:
	// System.Resources.ResourceReader System.Resources.ResourceReader/ResourceEnumerator::reader
	ResourceReader_t948677063 * ___reader_0;
	// System.Int32 System.Resources.ResourceReader/ResourceEnumerator::index
	int32_t ___index_1;
	// System.Boolean System.Resources.ResourceReader/ResourceEnumerator::finished
	bool ___finished_2;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t570180795, ___reader_0)); }
	inline ResourceReader_t948677063 * get_reader_0() const { return ___reader_0; }
	inline ResourceReader_t948677063 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(ResourceReader_t948677063 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t570180795, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_finished_2() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t570180795, ___finished_2)); }
	inline bool get_finished_2() const { return ___finished_2; }
	inline bool* get_address_of_finished_2() { return &___finished_2; }
	inline void set_finished_2(bool value)
	{
		___finished_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEENUMERATOR_T570180795_H
#ifndef RESOURCEMANAGER_T1370974618_H
#define RESOURCEMANAGER_T1370974618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceManager
struct  ResourceManager_t1370974618  : public RuntimeObject
{
public:
	// System.Type System.Resources.ResourceManager::resourceSetType
	Type_t * ___resourceSetType_4;

public:
	inline static int32_t get_offset_of_resourceSetType_4() { return static_cast<int32_t>(offsetof(ResourceManager_t1370974618, ___resourceSetType_4)); }
	inline Type_t * get_resourceSetType_4() const { return ___resourceSetType_4; }
	inline Type_t ** get_address_of_resourceSetType_4() { return &___resourceSetType_4; }
	inline void set_resourceSetType_4(Type_t * value)
	{
		___resourceSetType_4 = value;
		Il2CppCodeGenWriteBarrier((&___resourceSetType_4), value);
	}
};

struct ResourceManager_t1370974618_StaticFields
{
public:
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceCache
	Hashtable_t2707551258 * ___ResourceCache_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::NonExistent
	Hashtable_t2707551258 * ___NonExistent_1;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_2;
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_3;

public:
	inline static int32_t get_offset_of_ResourceCache_0() { return static_cast<int32_t>(offsetof(ResourceManager_t1370974618_StaticFields, ___ResourceCache_0)); }
	inline Hashtable_t2707551258 * get_ResourceCache_0() const { return ___ResourceCache_0; }
	inline Hashtable_t2707551258 ** get_address_of_ResourceCache_0() { return &___ResourceCache_0; }
	inline void set_ResourceCache_0(Hashtable_t2707551258 * value)
	{
		___ResourceCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceCache_0), value);
	}

	inline static int32_t get_offset_of_NonExistent_1() { return static_cast<int32_t>(offsetof(ResourceManager_t1370974618_StaticFields, ___NonExistent_1)); }
	inline Hashtable_t2707551258 * get_NonExistent_1() const { return ___NonExistent_1; }
	inline Hashtable_t2707551258 ** get_address_of_NonExistent_1() { return &___NonExistent_1; }
	inline void set_NonExistent_1(Hashtable_t2707551258 * value)
	{
		___NonExistent_1 = value;
		Il2CppCodeGenWriteBarrier((&___NonExistent_1), value);
	}

	inline static int32_t get_offset_of_HeaderVersionNumber_2() { return static_cast<int32_t>(offsetof(ResourceManager_t1370974618_StaticFields, ___HeaderVersionNumber_2)); }
	inline int32_t get_HeaderVersionNumber_2() const { return ___HeaderVersionNumber_2; }
	inline int32_t* get_address_of_HeaderVersionNumber_2() { return &___HeaderVersionNumber_2; }
	inline void set_HeaderVersionNumber_2(int32_t value)
	{
		___HeaderVersionNumber_2 = value;
	}

	inline static int32_t get_offset_of_MagicNumber_3() { return static_cast<int32_t>(offsetof(ResourceManager_t1370974618_StaticFields, ___MagicNumber_3)); }
	inline int32_t get_MagicNumber_3() const { return ___MagicNumber_3; }
	inline int32_t* get_address_of_MagicNumber_3() { return &___MagicNumber_3; }
	inline void set_MagicNumber_3(int32_t value)
	{
		___MagicNumber_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEMANAGER_T1370974618_H
#ifndef RESOURCEREADER_T948677063_H
#define RESOURCEREADER_T948677063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader
struct  ResourceReader_t948677063  : public RuntimeObject
{
public:
	// System.IO.BinaryReader System.Resources.ResourceReader::reader
	BinaryReader_t4272063891 * ___reader_0;
	// System.Object System.Resources.ResourceReader::readerLock
	RuntimeObject * ___readerLock_1;
	// System.Runtime.Serialization.IFormatter System.Resources.ResourceReader::formatter
	RuntimeObject* ___formatter_2;
	// System.Int32 System.Resources.ResourceReader::resourceCount
	int32_t ___resourceCount_3;
	// System.Int32 System.Resources.ResourceReader::typeCount
	int32_t ___typeCount_4;
	// System.String[] System.Resources.ResourceReader::typeNames
	StringU5BU5D_t3832122219* ___typeNames_5;
	// System.Int32[] System.Resources.ResourceReader::hashes
	Int32U5BU5D_t2679505748* ___hashes_6;
	// System.Resources.ResourceReader/ResourceInfo[] System.Resources.ResourceReader::infos
	ResourceInfoU5BU5D_t236975709* ___infos_7;
	// System.Int32 System.Resources.ResourceReader::dataSectionOffset
	int32_t ___dataSectionOffset_8;
	// System.Int64 System.Resources.ResourceReader::nameSectionOffset
	int64_t ___nameSectionOffset_9;
	// System.Int32 System.Resources.ResourceReader::resource_ver
	int32_t ___resource_ver_10;
	// System.Resources.ResourceReader/ResourceCacheItem[] System.Resources.ResourceReader::cache
	ResourceCacheItemU5BU5D_t982934758* ___cache_11;
	// System.Object System.Resources.ResourceReader::cache_lock
	RuntimeObject * ___cache_lock_12;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ResourceReader_t948677063, ___reader_0)); }
	inline BinaryReader_t4272063891 * get_reader_0() const { return ___reader_0; }
	inline BinaryReader_t4272063891 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(BinaryReader_t4272063891 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_readerLock_1() { return static_cast<int32_t>(offsetof(ResourceReader_t948677063, ___readerLock_1)); }
	inline RuntimeObject * get_readerLock_1() const { return ___readerLock_1; }
	inline RuntimeObject ** get_address_of_readerLock_1() { return &___readerLock_1; }
	inline void set_readerLock_1(RuntimeObject * value)
	{
		___readerLock_1 = value;
		Il2CppCodeGenWriteBarrier((&___readerLock_1), value);
	}

	inline static int32_t get_offset_of_formatter_2() { return static_cast<int32_t>(offsetof(ResourceReader_t948677063, ___formatter_2)); }
	inline RuntimeObject* get_formatter_2() const { return ___formatter_2; }
	inline RuntimeObject** get_address_of_formatter_2() { return &___formatter_2; }
	inline void set_formatter_2(RuntimeObject* value)
	{
		___formatter_2 = value;
		Il2CppCodeGenWriteBarrier((&___formatter_2), value);
	}

	inline static int32_t get_offset_of_resourceCount_3() { return static_cast<int32_t>(offsetof(ResourceReader_t948677063, ___resourceCount_3)); }
	inline int32_t get_resourceCount_3() const { return ___resourceCount_3; }
	inline int32_t* get_address_of_resourceCount_3() { return &___resourceCount_3; }
	inline void set_resourceCount_3(int32_t value)
	{
		___resourceCount_3 = value;
	}

	inline static int32_t get_offset_of_typeCount_4() { return static_cast<int32_t>(offsetof(ResourceReader_t948677063, ___typeCount_4)); }
	inline int32_t get_typeCount_4() const { return ___typeCount_4; }
	inline int32_t* get_address_of_typeCount_4() { return &___typeCount_4; }
	inline void set_typeCount_4(int32_t value)
	{
		___typeCount_4 = value;
	}

	inline static int32_t get_offset_of_typeNames_5() { return static_cast<int32_t>(offsetof(ResourceReader_t948677063, ___typeNames_5)); }
	inline StringU5BU5D_t3832122219* get_typeNames_5() const { return ___typeNames_5; }
	inline StringU5BU5D_t3832122219** get_address_of_typeNames_5() { return &___typeNames_5; }
	inline void set_typeNames_5(StringU5BU5D_t3832122219* value)
	{
		___typeNames_5 = value;
		Il2CppCodeGenWriteBarrier((&___typeNames_5), value);
	}

	inline static int32_t get_offset_of_hashes_6() { return static_cast<int32_t>(offsetof(ResourceReader_t948677063, ___hashes_6)); }
	inline Int32U5BU5D_t2679505748* get_hashes_6() const { return ___hashes_6; }
	inline Int32U5BU5D_t2679505748** get_address_of_hashes_6() { return &___hashes_6; }
	inline void set_hashes_6(Int32U5BU5D_t2679505748* value)
	{
		___hashes_6 = value;
		Il2CppCodeGenWriteBarrier((&___hashes_6), value);
	}

	inline static int32_t get_offset_of_infos_7() { return static_cast<int32_t>(offsetof(ResourceReader_t948677063, ___infos_7)); }
	inline ResourceInfoU5BU5D_t236975709* get_infos_7() const { return ___infos_7; }
	inline ResourceInfoU5BU5D_t236975709** get_address_of_infos_7() { return &___infos_7; }
	inline void set_infos_7(ResourceInfoU5BU5D_t236975709* value)
	{
		___infos_7 = value;
		Il2CppCodeGenWriteBarrier((&___infos_7), value);
	}

	inline static int32_t get_offset_of_dataSectionOffset_8() { return static_cast<int32_t>(offsetof(ResourceReader_t948677063, ___dataSectionOffset_8)); }
	inline int32_t get_dataSectionOffset_8() const { return ___dataSectionOffset_8; }
	inline int32_t* get_address_of_dataSectionOffset_8() { return &___dataSectionOffset_8; }
	inline void set_dataSectionOffset_8(int32_t value)
	{
		___dataSectionOffset_8 = value;
	}

	inline static int32_t get_offset_of_nameSectionOffset_9() { return static_cast<int32_t>(offsetof(ResourceReader_t948677063, ___nameSectionOffset_9)); }
	inline int64_t get_nameSectionOffset_9() const { return ___nameSectionOffset_9; }
	inline int64_t* get_address_of_nameSectionOffset_9() { return &___nameSectionOffset_9; }
	inline void set_nameSectionOffset_9(int64_t value)
	{
		___nameSectionOffset_9 = value;
	}

	inline static int32_t get_offset_of_resource_ver_10() { return static_cast<int32_t>(offsetof(ResourceReader_t948677063, ___resource_ver_10)); }
	inline int32_t get_resource_ver_10() const { return ___resource_ver_10; }
	inline int32_t* get_address_of_resource_ver_10() { return &___resource_ver_10; }
	inline void set_resource_ver_10(int32_t value)
	{
		___resource_ver_10 = value;
	}

	inline static int32_t get_offset_of_cache_11() { return static_cast<int32_t>(offsetof(ResourceReader_t948677063, ___cache_11)); }
	inline ResourceCacheItemU5BU5D_t982934758* get_cache_11() const { return ___cache_11; }
	inline ResourceCacheItemU5BU5D_t982934758** get_address_of_cache_11() { return &___cache_11; }
	inline void set_cache_11(ResourceCacheItemU5BU5D_t982934758* value)
	{
		___cache_11 = value;
		Il2CppCodeGenWriteBarrier((&___cache_11), value);
	}

	inline static int32_t get_offset_of_cache_lock_12() { return static_cast<int32_t>(offsetof(ResourceReader_t948677063, ___cache_lock_12)); }
	inline RuntimeObject * get_cache_lock_12() const { return ___cache_lock_12; }
	inline RuntimeObject ** get_address_of_cache_lock_12() { return &___cache_lock_12; }
	inline void set_cache_lock_12(RuntimeObject * value)
	{
		___cache_lock_12 = value;
		Il2CppCodeGenWriteBarrier((&___cache_lock_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEREADER_T948677063_H
#ifndef MARSHALBYREFOBJECT_T3534049059_H
#define MARSHALBYREFOBJECT_T3534049059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t3534049059  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t3794790105 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t3534049059, ____identity_0)); }
	inline ServerIdentity_t3794790105 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t3794790105 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t3794790105 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T3534049059_H
#ifndef RESOURCESET_T3896624228_H
#define RESOURCESET_T3896624228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceSet
struct  ResourceSet_t3896624228  : public RuntimeObject
{
public:
	// System.Resources.IResourceReader System.Resources.ResourceSet::Reader
	RuntimeObject* ___Reader_0;
	// System.Collections.Hashtable System.Resources.ResourceSet::Table
	Hashtable_t2707551258 * ___Table_1;
	// System.Boolean System.Resources.ResourceSet::resources_read
	bool ___resources_read_2;
	// System.Boolean System.Resources.ResourceSet::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_Reader_0() { return static_cast<int32_t>(offsetof(ResourceSet_t3896624228, ___Reader_0)); }
	inline RuntimeObject* get_Reader_0() const { return ___Reader_0; }
	inline RuntimeObject** get_address_of_Reader_0() { return &___Reader_0; }
	inline void set_Reader_0(RuntimeObject* value)
	{
		___Reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___Reader_0), value);
	}

	inline static int32_t get_offset_of_Table_1() { return static_cast<int32_t>(offsetof(ResourceSet_t3896624228, ___Table_1)); }
	inline Hashtable_t2707551258 * get_Table_1() const { return ___Table_1; }
	inline Hashtable_t2707551258 ** get_address_of_Table_1() { return &___Table_1; }
	inline void set_Table_1(Hashtable_t2707551258 * value)
	{
		___Table_1 = value;
		Il2CppCodeGenWriteBarrier((&___Table_1), value);
	}

	inline static int32_t get_offset_of_resources_read_2() { return static_cast<int32_t>(offsetof(ResourceSet_t3896624228, ___resources_read_2)); }
	inline bool get_resources_read_2() const { return ___resources_read_2; }
	inline bool* get_address_of_resources_read_2() { return &___resources_read_2; }
	inline void set_resources_read_2(bool value)
	{
		___resources_read_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(ResourceSet_t3896624228, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCESET_T3896624228_H
#ifndef VALUETYPE_T2770211211_H
#define VALUETYPE_T2770211211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2770211211  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2770211211_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2770211211_marshaled_com
{
};
#endif // VALUETYPE_T2770211211_H
#ifndef MARSHAL_T1366527345_H
#define MARSHAL_T1366527345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.Marshal
struct  Marshal_t1366527345  : public RuntimeObject
{
public:

public:
};

struct Marshal_t1366527345_StaticFields
{
public:
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemMaxDBCSCharSize
	int32_t ___SystemMaxDBCSCharSize_0;
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemDefaultCharSize
	int32_t ___SystemDefaultCharSize_1;

public:
	inline static int32_t get_offset_of_SystemMaxDBCSCharSize_0() { return static_cast<int32_t>(offsetof(Marshal_t1366527345_StaticFields, ___SystemMaxDBCSCharSize_0)); }
	inline int32_t get_SystemMaxDBCSCharSize_0() const { return ___SystemMaxDBCSCharSize_0; }
	inline int32_t* get_address_of_SystemMaxDBCSCharSize_0() { return &___SystemMaxDBCSCharSize_0; }
	inline void set_SystemMaxDBCSCharSize_0(int32_t value)
	{
		___SystemMaxDBCSCharSize_0 = value;
	}

	inline static int32_t get_offset_of_SystemDefaultCharSize_1() { return static_cast<int32_t>(offsetof(Marshal_t1366527345_StaticFields, ___SystemDefaultCharSize_1)); }
	inline int32_t get_SystemDefaultCharSize_1() const { return ___SystemDefaultCharSize_1; }
	inline int32_t* get_address_of_SystemDefaultCharSize_1() { return &___SystemDefaultCharSize_1; }
	inline void set_SystemDefaultCharSize_1(int32_t value)
	{
		___SystemDefaultCharSize_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHAL_T1366527345_H
#ifndef NAMEORID_T3940602482_H
#define NAMEORID_T3940602482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.NameOrId
struct  NameOrId_t3940602482  : public RuntimeObject
{
public:
	// System.String System.Resources.NameOrId::name
	String_t* ___name_0;
	// System.Int32 System.Resources.NameOrId::id
	int32_t ___id_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(NameOrId_t3940602482, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(NameOrId_t3940602482, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEORID_T3940602482_H
#ifndef WIN32RESOURCE_T1757568484_H
#define WIN32RESOURCE_T1757568484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.Win32Resource
struct  Win32Resource_t1757568484  : public RuntimeObject
{
public:
	// System.Resources.NameOrId System.Resources.Win32Resource::type
	NameOrId_t3940602482 * ___type_0;
	// System.Resources.NameOrId System.Resources.Win32Resource::name
	NameOrId_t3940602482 * ___name_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Win32Resource_t1757568484, ___type_0)); }
	inline NameOrId_t3940602482 * get_type_0() const { return ___type_0; }
	inline NameOrId_t3940602482 ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(NameOrId_t3940602482 * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Win32Resource_t1757568484, ___name_1)); }
	inline NameOrId_t3940602482 * get_name_1() const { return ___name_1; }
	inline NameOrId_t3940602482 ** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(NameOrId_t3940602482 * value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32RESOURCE_T1757568484_H
#ifndef ATTRIBUTE_T435654298_H
#define ATTRIBUTE_T435654298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t435654298  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T435654298_H
#ifndef CROSSCONTEXTCHANNEL_T455535530_H
#define CROSSCONTEXTCHANNEL_T455535530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.CrossContextChannel
struct  CrossContextChannel_t455535530  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSCONTEXTCHANNEL_T455535530_H
#ifndef SYSTEMEXCEPTION_T2923610502_H
#define SYSTEMEXCEPTION_T2923610502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t2923610502  : public Exception_t1203457310
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T2923610502_H
#ifndef CONTEXTATTRIBUTE_T1911175881_H
#define CONTEXTATTRIBUTE_T1911175881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.ContextAttribute
struct  ContextAttribute_t1911175881  : public Attribute_t435654298
{
public:
	// System.String System.Runtime.Remoting.Contexts.ContextAttribute::AttributeName
	String_t* ___AttributeName_0;

public:
	inline static int32_t get_offset_of_AttributeName_0() { return static_cast<int32_t>(offsetof(ContextAttribute_t1911175881, ___AttributeName_0)); }
	inline String_t* get_AttributeName_0() const { return ___AttributeName_0; }
	inline String_t** get_address_of_AttributeName_0() { return &___AttributeName_0; }
	inline void set_AttributeName_0(String_t* value)
	{
		___AttributeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___AttributeName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTATTRIBUTE_T1911175881_H
#ifndef REMOTEACTIVATOR_T4165585792_H
#define REMOTEACTIVATOR_T4165585792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.RemoteActivator
struct  RemoteActivator_t4165585792  : public MarshalByRefObject_t3534049059
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTEACTIVATOR_T4165585792_H
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
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef TYPELIBVERSIONATTRIBUTE_T1467804506_H
#define TYPELIBVERSIONATTRIBUTE_T1467804506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibVersionAttribute
struct  TypeLibVersionAttribute_t1467804506  : public Attribute_t435654298
{
public:
	// System.Int32 System.Runtime.InteropServices.TypeLibVersionAttribute::major
	int32_t ___major_0;
	// System.Int32 System.Runtime.InteropServices.TypeLibVersionAttribute::minor
	int32_t ___minor_1;

public:
	inline static int32_t get_offset_of_major_0() { return static_cast<int32_t>(offsetof(TypeLibVersionAttribute_t1467804506, ___major_0)); }
	inline int32_t get_major_0() const { return ___major_0; }
	inline int32_t* get_address_of_major_0() { return &___major_0; }
	inline void set_major_0(int32_t value)
	{
		___major_0 = value;
	}

	inline static int32_t get_offset_of_minor_1() { return static_cast<int32_t>(offsetof(TypeLibVersionAttribute_t1467804506, ___minor_1)); }
	inline int32_t get_minor_1() const { return ___minor_1; }
	inline int32_t* get_address_of_minor_1() { return &___minor_1; }
	inline void set_minor_1(int32_t value)
	{
		___minor_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELIBVERSIONATTRIBUTE_T1467804506_H
#ifndef TYPELIBIMPORTCLASSATTRIBUTE_T3114055209_H
#define TYPELIBIMPORTCLASSATTRIBUTE_T3114055209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibImportClassAttribute
struct  TypeLibImportClassAttribute_t3114055209  : public Attribute_t435654298
{
public:
	// System.String System.Runtime.InteropServices.TypeLibImportClassAttribute::_importClass
	String_t* ____importClass_0;

public:
	inline static int32_t get_offset_of__importClass_0() { return static_cast<int32_t>(offsetof(TypeLibImportClassAttribute_t3114055209, ____importClass_0)); }
	inline String_t* get__importClass_0() const { return ____importClass_0; }
	inline String_t** get_address_of__importClass_0() { return &____importClass_0; }
	inline void set__importClass_0(String_t* value)
	{
		____importClass_0 = value;
		Il2CppCodeGenWriteBarrier((&____importClass_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELIBIMPORTCLASSATTRIBUTE_T3114055209_H
#ifndef ENUM_T1062863020_H
#define ENUM_T1062863020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1062863020  : public ValueType_t2770211211
{
public:

public:
};

struct Enum_t1062863020_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t498600359* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1062863020_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t498600359* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t498600359** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t498600359* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1062863020_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1062863020_marshaled_com
{
};
#endif // ENUM_T1062863020_H
#ifndef PRESERVESIGATTRIBUTE_T3479873944_H
#define PRESERVESIGATTRIBUTE_T3479873944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.PreserveSigAttribute
struct  PreserveSigAttribute_t3479873944  : public Attribute_t435654298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESERVESIGATTRIBUTE_T3479873944_H
#ifndef NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3275951287_H
#define NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3275951287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.NeutralResourcesLanguageAttribute
struct  NeutralResourcesLanguageAttribute_t3275951287  : public Attribute_t435654298
{
public:
	// System.String System.Resources.NeutralResourcesLanguageAttribute::culture
	String_t* ___culture_0;

public:
	inline static int32_t get_offset_of_culture_0() { return static_cast<int32_t>(offsetof(NeutralResourcesLanguageAttribute_t3275951287, ___culture_0)); }
	inline String_t* get_culture_0() const { return ___culture_0; }
	inline String_t** get_address_of_culture_0() { return &___culture_0; }
	inline void set_culture_0(String_t* value)
	{
		___culture_0 = value;
		Il2CppCodeGenWriteBarrier((&___culture_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3275951287_H
#ifndef SATELLITECONTRACTVERSIONATTRIBUTE_T1488674290_H
#define SATELLITECONTRACTVERSIONATTRIBUTE_T1488674290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.SatelliteContractVersionAttribute
struct  SatelliteContractVersionAttribute_t1488674290  : public Attribute_t435654298
{
public:
	// System.Version System.Resources.SatelliteContractVersionAttribute::ver
	Version_t600668514 * ___ver_0;

public:
	inline static int32_t get_offset_of_ver_0() { return static_cast<int32_t>(offsetof(SatelliteContractVersionAttribute_t1488674290, ___ver_0)); }
	inline Version_t600668514 * get_ver_0() const { return ___ver_0; }
	inline Version_t600668514 ** get_address_of_ver_0() { return &___ver_0; }
	inline void set_ver_0(Version_t600668514 * value)
	{
		___ver_0 = value;
		Il2CppCodeGenWriteBarrier((&___ver_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SATELLITECONTRACTVERSIONATTRIBUTE_T1488674290_H
#ifndef CONTEXTBOUNDOBJECT_T2118317004_H
#define CONTEXTBOUNDOBJECT_T2118317004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ContextBoundObject
struct  ContextBoundObject_t2118317004  : public MarshalByRefObject_t3534049059
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTBOUNDOBJECT_T2118317004_H
#ifndef GCHANDLE_T3038984084_H
#define GCHANDLE_T3038984084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3038984084 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3038984084, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3038984084_H
#ifndef RESOURCEINFO_T829168596_H
#define RESOURCEINFO_T829168596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceInfo
struct  ResourceInfo_t829168596 
{
public:
	// System.Int64 System.Resources.ResourceReader/ResourceInfo::ValuePosition
	int64_t ___ValuePosition_0;
	// System.String System.Resources.ResourceReader/ResourceInfo::ResourceName
	String_t* ___ResourceName_1;
	// System.Int32 System.Resources.ResourceReader/ResourceInfo::TypeIndex
	int32_t ___TypeIndex_2;

public:
	inline static int32_t get_offset_of_ValuePosition_0() { return static_cast<int32_t>(offsetof(ResourceInfo_t829168596, ___ValuePosition_0)); }
	inline int64_t get_ValuePosition_0() const { return ___ValuePosition_0; }
	inline int64_t* get_address_of_ValuePosition_0() { return &___ValuePosition_0; }
	inline void set_ValuePosition_0(int64_t value)
	{
		___ValuePosition_0 = value;
	}

	inline static int32_t get_offset_of_ResourceName_1() { return static_cast<int32_t>(offsetof(ResourceInfo_t829168596, ___ResourceName_1)); }
	inline String_t* get_ResourceName_1() const { return ___ResourceName_1; }
	inline String_t** get_address_of_ResourceName_1() { return &___ResourceName_1; }
	inline void set_ResourceName_1(String_t* value)
	{
		___ResourceName_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_1), value);
	}

	inline static int32_t get_offset_of_TypeIndex_2() { return static_cast<int32_t>(offsetof(ResourceInfo_t829168596, ___TypeIndex_2)); }
	inline int32_t get_TypeIndex_2() const { return ___TypeIndex_2; }
	inline int32_t* get_address_of_TypeIndex_2() { return &___TypeIndex_2; }
	inline void set_TypeIndex_2(int32_t value)
	{
		___TypeIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t829168596_marshaled_pinvoke
{
	int64_t ___ValuePosition_0;
	char* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t829168596_marshaled_com
{
	int64_t ___ValuePosition_0;
	Il2CppChar* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
#endif // RESOURCEINFO_T829168596_H
#ifndef RESOURCECACHEITEM_T2829796159_H
#define RESOURCECACHEITEM_T2829796159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceCacheItem
struct  ResourceCacheItem_t2829796159 
{
public:
	// System.String System.Resources.ResourceReader/ResourceCacheItem::ResourceName
	String_t* ___ResourceName_0;
	// System.Object System.Resources.ResourceReader/ResourceCacheItem::ResourceValue
	RuntimeObject * ___ResourceValue_1;

public:
	inline static int32_t get_offset_of_ResourceName_0() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t2829796159, ___ResourceName_0)); }
	inline String_t* get_ResourceName_0() const { return ___ResourceName_0; }
	inline String_t** get_address_of_ResourceName_0() { return &___ResourceName_0; }
	inline void set_ResourceName_0(String_t* value)
	{
		___ResourceName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_0), value);
	}

	inline static int32_t get_offset_of_ResourceValue_1() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t2829796159, ___ResourceValue_1)); }
	inline RuntimeObject * get_ResourceValue_1() const { return ___ResourceValue_1; }
	inline RuntimeObject ** get_address_of_ResourceValue_1() { return &___ResourceValue_1; }
	inline void set_ResourceValue_1(RuntimeObject * value)
	{
		___ResourceValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t2829796159_marshaled_pinvoke
{
	char* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t2829796159_marshaled_com
{
	Il2CppChar* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
#endif // RESOURCECACHEITEM_T2829796159_H
#ifndef RUNTIMERESOURCESET_T2012745339_H
#define RUNTIMERESOURCESET_T2012745339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.RuntimeResourceSet
struct  RuntimeResourceSet_t2012745339  : public ResourceSet_t3896624228
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMERESOURCESET_T2012745339_H
#ifndef DISPIDATTRIBUTE_T2038473623_H
#define DISPIDATTRIBUTE_T2038473623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DispIdAttribute
struct  DispIdAttribute_t2038473623  : public Attribute_t435654298
{
public:
	// System.Int32 System.Runtime.InteropServices.DispIdAttribute::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(DispIdAttribute_t2038473623, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPIDATTRIBUTE_T2038473623_H
#ifndef STRINGFREEZINGATTRIBUTE_T3762326656_H
#define STRINGFREEZINGATTRIBUTE_T3762326656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.StringFreezingAttribute
struct  StringFreezingAttribute_t3762326656  : public Attribute_t435654298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGFREEZINGATTRIBUTE_T3762326656_H
#ifndef COMDEFAULTINTERFACEATTRIBUTE_T450903857_H
#define COMDEFAULTINTERFACEATTRIBUTE_T450903857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
struct  ComDefaultInterfaceAttribute_t450903857  : public Attribute_t435654298
{
public:
	// System.Type System.Runtime.InteropServices.ComDefaultInterfaceAttribute::_type
	Type_t * ____type_0;

public:
	inline static int32_t get_offset_of__type_0() { return static_cast<int32_t>(offsetof(ComDefaultInterfaceAttribute_t450903857, ____type_0)); }
	inline Type_t * get__type_0() const { return ____type_0; }
	inline Type_t ** get_address_of__type_0() { return &____type_0; }
	inline void set__type_0(Type_t * value)
	{
		____type_0 = value;
		Il2CppCodeGenWriteBarrier((&____type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMDEFAULTINTERFACEATTRIBUTE_T450903857_H
#ifndef WIN32VERSIONRESOURCE_T2045241528_H
#define WIN32VERSIONRESOURCE_T2045241528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.Win32VersionResource
struct  Win32VersionResource_t2045241528  : public Win32Resource_t1757568484
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32VERSIONRESOURCE_T2045241528_H
#ifndef COMPILATIONRELAXATIONSATTRIBUTE_T1429946914_H
#define COMPILATIONRELAXATIONSATTRIBUTE_T1429946914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct  CompilationRelaxationsAttribute_t1429946914  : public Attribute_t435654298
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::relax
	int32_t ___relax_0;

public:
	inline static int32_t get_offset_of_relax_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t1429946914, ___relax_0)); }
	inline int32_t get_relax_0() const { return ___relax_0; }
	inline int32_t* get_address_of_relax_0() { return &___relax_0; }
	inline void set_relax_0(int32_t value)
	{
		___relax_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILATIONRELAXATIONSATTRIBUTE_T1429946914_H
#ifndef LOADHINT_T293810354_H
#define LOADHINT_T293810354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.LoadHint
struct  LoadHint_t293810354 
{
public:
	// System.Int32 System.Runtime.CompilerServices.LoadHint::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadHint_t293810354, ___value___1)); }
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
#endif // LOADHINT_T293810354_H
#ifndef CONTEXTCALLBACKOBJECT_T3921426051_H
#define CONTEXTCALLBACKOBJECT_T3921426051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.ContextCallbackObject
struct  ContextCallbackObject_t3921426051  : public ContextBoundObject_t2118317004
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTCALLBACKOBJECT_T3921426051_H
#ifndef MARSHALDIRECTIVEEXCEPTION_T612513343_H
#define MARSHALDIRECTIVEEXCEPTION_T612513343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.MarshalDirectiveException
struct  MarshalDirectiveException_t612513343  : public SystemException_t2923610502
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALDIRECTIVEEXCEPTION_T612513343_H
#ifndef WIN32RESOURCETYPE_T4294198297_H
#define WIN32RESOURCETYPE_T4294198297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.Win32ResourceType
struct  Win32ResourceType_t4294198297 
{
public:
	// System.Int32 System.Resources.Win32ResourceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Win32ResourceType_t4294198297, ___value___1)); }
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
#endif // WIN32RESOURCETYPE_T4294198297_H
#ifndef PREDEFINEDRESOURCETYPE_T3126036140_H
#define PREDEFINEDRESOURCETYPE_T3126036140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.PredefinedResourceType
struct  PredefinedResourceType_t3126036140 
{
public:
	// System.Int32 System.Resources.PredefinedResourceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PredefinedResourceType_t3126036140, ___value___1)); }
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
#endif // PREDEFINEDRESOURCETYPE_T3126036140_H
#ifndef COMPILATIONRELAXATIONS_T996607820_H
#define COMPILATIONRELAXATIONS_T996607820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxations
struct  CompilationRelaxations_t996607820 
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxations::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompilationRelaxations_t996607820, ___value___1)); }
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
#endif // COMPILATIONRELAXATIONS_T996607820_H
#ifndef CONTEXT_T2067708749_H
#define CONTEXT_T2067708749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.Context
struct  Context_t2067708749  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Remoting.Contexts.Context::domain_id
	int32_t ___domain_id_0;
	// System.Int32 System.Runtime.Remoting.Contexts.Context::context_id
	int32_t ___context_id_1;
	// System.UIntPtr System.Runtime.Remoting.Contexts.Context::static_data
	uintptr_t ___static_data_2;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::server_context_sink_chain
	RuntimeObject* ___server_context_sink_chain_4;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::client_context_sink_chain
	RuntimeObject* ___client_context_sink_chain_5;
	// System.Object[] System.Runtime.Remoting.Contexts.Context::datastore
	ObjectU5BU5D_t2903489424* ___datastore_6;
	// System.Collections.ArrayList System.Runtime.Remoting.Contexts.Context::context_properties
	ArrayList_t3525268140 * ___context_properties_7;
	// System.Boolean System.Runtime.Remoting.Contexts.Context::frozen
	bool ___frozen_8;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Contexts.Context::context_dynamic_properties
	DynamicPropertyCollection_t2310851654 * ___context_dynamic_properties_12;
	// System.Runtime.Remoting.Contexts.ContextCallbackObject System.Runtime.Remoting.Contexts.Context::callback_object
	ContextCallbackObject_t3921426051 * ___callback_object_13;

public:
	inline static int32_t get_offset_of_domain_id_0() { return static_cast<int32_t>(offsetof(Context_t2067708749, ___domain_id_0)); }
	inline int32_t get_domain_id_0() const { return ___domain_id_0; }
	inline int32_t* get_address_of_domain_id_0() { return &___domain_id_0; }
	inline void set_domain_id_0(int32_t value)
	{
		___domain_id_0 = value;
	}

	inline static int32_t get_offset_of_context_id_1() { return static_cast<int32_t>(offsetof(Context_t2067708749, ___context_id_1)); }
	inline int32_t get_context_id_1() const { return ___context_id_1; }
	inline int32_t* get_address_of_context_id_1() { return &___context_id_1; }
	inline void set_context_id_1(int32_t value)
	{
		___context_id_1 = value;
	}

	inline static int32_t get_offset_of_static_data_2() { return static_cast<int32_t>(offsetof(Context_t2067708749, ___static_data_2)); }
	inline uintptr_t get_static_data_2() const { return ___static_data_2; }
	inline uintptr_t* get_address_of_static_data_2() { return &___static_data_2; }
	inline void set_static_data_2(uintptr_t value)
	{
		___static_data_2 = value;
	}

	inline static int32_t get_offset_of_server_context_sink_chain_4() { return static_cast<int32_t>(offsetof(Context_t2067708749, ___server_context_sink_chain_4)); }
	inline RuntimeObject* get_server_context_sink_chain_4() const { return ___server_context_sink_chain_4; }
	inline RuntimeObject** get_address_of_server_context_sink_chain_4() { return &___server_context_sink_chain_4; }
	inline void set_server_context_sink_chain_4(RuntimeObject* value)
	{
		___server_context_sink_chain_4 = value;
		Il2CppCodeGenWriteBarrier((&___server_context_sink_chain_4), value);
	}

	inline static int32_t get_offset_of_client_context_sink_chain_5() { return static_cast<int32_t>(offsetof(Context_t2067708749, ___client_context_sink_chain_5)); }
	inline RuntimeObject* get_client_context_sink_chain_5() const { return ___client_context_sink_chain_5; }
	inline RuntimeObject** get_address_of_client_context_sink_chain_5() { return &___client_context_sink_chain_5; }
	inline void set_client_context_sink_chain_5(RuntimeObject* value)
	{
		___client_context_sink_chain_5 = value;
		Il2CppCodeGenWriteBarrier((&___client_context_sink_chain_5), value);
	}

	inline static int32_t get_offset_of_datastore_6() { return static_cast<int32_t>(offsetof(Context_t2067708749, ___datastore_6)); }
	inline ObjectU5BU5D_t2903489424* get_datastore_6() const { return ___datastore_6; }
	inline ObjectU5BU5D_t2903489424** get_address_of_datastore_6() { return &___datastore_6; }
	inline void set_datastore_6(ObjectU5BU5D_t2903489424* value)
	{
		___datastore_6 = value;
		Il2CppCodeGenWriteBarrier((&___datastore_6), value);
	}

	inline static int32_t get_offset_of_context_properties_7() { return static_cast<int32_t>(offsetof(Context_t2067708749, ___context_properties_7)); }
	inline ArrayList_t3525268140 * get_context_properties_7() const { return ___context_properties_7; }
	inline ArrayList_t3525268140 ** get_address_of_context_properties_7() { return &___context_properties_7; }
	inline void set_context_properties_7(ArrayList_t3525268140 * value)
	{
		___context_properties_7 = value;
		Il2CppCodeGenWriteBarrier((&___context_properties_7), value);
	}

	inline static int32_t get_offset_of_frozen_8() { return static_cast<int32_t>(offsetof(Context_t2067708749, ___frozen_8)); }
	inline bool get_frozen_8() const { return ___frozen_8; }
	inline bool* get_address_of_frozen_8() { return &___frozen_8; }
	inline void set_frozen_8(bool value)
	{
		___frozen_8 = value;
	}

	inline static int32_t get_offset_of_context_dynamic_properties_12() { return static_cast<int32_t>(offsetof(Context_t2067708749, ___context_dynamic_properties_12)); }
	inline DynamicPropertyCollection_t2310851654 * get_context_dynamic_properties_12() const { return ___context_dynamic_properties_12; }
	inline DynamicPropertyCollection_t2310851654 ** get_address_of_context_dynamic_properties_12() { return &___context_dynamic_properties_12; }
	inline void set_context_dynamic_properties_12(DynamicPropertyCollection_t2310851654 * value)
	{
		___context_dynamic_properties_12 = value;
		Il2CppCodeGenWriteBarrier((&___context_dynamic_properties_12), value);
	}

	inline static int32_t get_offset_of_callback_object_13() { return static_cast<int32_t>(offsetof(Context_t2067708749, ___callback_object_13)); }
	inline ContextCallbackObject_t3921426051 * get_callback_object_13() const { return ___callback_object_13; }
	inline ContextCallbackObject_t3921426051 ** get_address_of_callback_object_13() { return &___callback_object_13; }
	inline void set_callback_object_13(ContextCallbackObject_t3921426051 * value)
	{
		___callback_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___callback_object_13), value);
	}
};

struct Context_t2067708749_StaticFields
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::default_server_context_sink
	RuntimeObject* ___default_server_context_sink_3;
	// System.Int32 System.Runtime.Remoting.Contexts.Context::global_count
	int32_t ___global_count_9;
	// System.Collections.Hashtable System.Runtime.Remoting.Contexts.Context::namedSlots
	Hashtable_t2707551258 * ___namedSlots_10;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Contexts.Context::global_dynamic_properties
	DynamicPropertyCollection_t2310851654 * ___global_dynamic_properties_11;

public:
	inline static int32_t get_offset_of_default_server_context_sink_3() { return static_cast<int32_t>(offsetof(Context_t2067708749_StaticFields, ___default_server_context_sink_3)); }
	inline RuntimeObject* get_default_server_context_sink_3() const { return ___default_server_context_sink_3; }
	inline RuntimeObject** get_address_of_default_server_context_sink_3() { return &___default_server_context_sink_3; }
	inline void set_default_server_context_sink_3(RuntimeObject* value)
	{
		___default_server_context_sink_3 = value;
		Il2CppCodeGenWriteBarrier((&___default_server_context_sink_3), value);
	}

	inline static int32_t get_offset_of_global_count_9() { return static_cast<int32_t>(offsetof(Context_t2067708749_StaticFields, ___global_count_9)); }
	inline int32_t get_global_count_9() const { return ___global_count_9; }
	inline int32_t* get_address_of_global_count_9() { return &___global_count_9; }
	inline void set_global_count_9(int32_t value)
	{
		___global_count_9 = value;
	}

	inline static int32_t get_offset_of_namedSlots_10() { return static_cast<int32_t>(offsetof(Context_t2067708749_StaticFields, ___namedSlots_10)); }
	inline Hashtable_t2707551258 * get_namedSlots_10() const { return ___namedSlots_10; }
	inline Hashtable_t2707551258 ** get_address_of_namedSlots_10() { return &___namedSlots_10; }
	inline void set_namedSlots_10(Hashtable_t2707551258 * value)
	{
		___namedSlots_10 = value;
		Il2CppCodeGenWriteBarrier((&___namedSlots_10), value);
	}

	inline static int32_t get_offset_of_global_dynamic_properties_11() { return static_cast<int32_t>(offsetof(Context_t2067708749_StaticFields, ___global_dynamic_properties_11)); }
	inline DynamicPropertyCollection_t2310851654 * get_global_dynamic_properties_11() const { return ___global_dynamic_properties_11; }
	inline DynamicPropertyCollection_t2310851654 ** get_address_of_global_dynamic_properties_11() { return &___global_dynamic_properties_11; }
	inline void set_global_dynamic_properties_11(DynamicPropertyCollection_t2310851654 * value)
	{
		___global_dynamic_properties_11 = value;
		Il2CppCodeGenWriteBarrier((&___global_dynamic_properties_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXT_T2067708749_H
#ifndef CONSISTENCY_T116183400_H
#define CONSISTENCY_T116183400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.Consistency
struct  Consistency_t116183400 
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Consistency::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Consistency_t116183400, ___value___1)); }
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
#endif // CONSISTENCY_T116183400_H
#ifndef CALLINGCONVENTION_T1591474679_H
#define CALLINGCONVENTION_T1591474679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CallingConvention
struct  CallingConvention_t1591474679 
{
public:
	// System.Int32 System.Runtime.InteropServices.CallingConvention::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConvention_t1591474679, ___value___1)); }
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
#endif // CALLINGCONVENTION_T1591474679_H
#ifndef CHARSET_T1663981105_H
#define CHARSET_T1663981105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CharSet
struct  CharSet_t1663981105 
{
public:
	// System.Int32 System.Runtime.InteropServices.CharSet::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharSet_t1663981105, ___value___1)); }
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
#endif // CHARSET_T1663981105_H
#ifndef URLATTRIBUTE_T1745743061_H
#define URLATTRIBUTE_T1745743061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.UrlAttribute
struct  UrlAttribute_t1745743061  : public ContextAttribute_t1911175881
{
public:
	// System.String System.Runtime.Remoting.Activation.UrlAttribute::url
	String_t* ___url_1;

public:
	inline static int32_t get_offset_of_url_1() { return static_cast<int32_t>(offsetof(UrlAttribute_t1745743061, ___url_1)); }
	inline String_t* get_url_1() const { return ___url_1; }
	inline String_t** get_address_of_url_1() { return &___url_1; }
	inline void set_url_1(String_t* value)
	{
		___url_1 = value;
		Il2CppCodeGenWriteBarrier((&___url_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URLATTRIBUTE_T1745743061_H
#ifndef CLASSINTERFACETYPE_T2326925020_H
#define CLASSINTERFACETYPE_T2326925020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceType
struct  ClassInterfaceType_t2326925020 
{
public:
	// System.Int32 System.Runtime.InteropServices.ClassInterfaceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ClassInterfaceType_t2326925020, ___value___1)); }
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
#endif // CLASSINTERFACETYPE_T2326925020_H
#ifndef COMINTERFACETYPE_T1145889200_H
#define COMINTERFACETYPE_T1145889200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComInterfaceType
struct  ComInterfaceType_t1145889200 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComInterfaceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComInterfaceType_t1145889200, ___value___1)); }
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
#endif // COMINTERFACETYPE_T1145889200_H
#ifndef UNMANAGEDTYPE_T2903368185_H
#define UNMANAGEDTYPE_T2903368185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
struct  UnmanagedType_t2903368185 
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnmanagedType_t2903368185, ___value___1)); }
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
#endif // UNMANAGEDTYPE_T2903368185_H
#ifndef EXTERNALEXCEPTION_T750536251_H
#define EXTERNALEXCEPTION_T750536251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t750536251  : public SystemException_t2923610502
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T750536251_H
#ifndef SAFEHANDLE_T1184803384_H
#define SAFEHANDLE_T1184803384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t1184803384  : public CriticalFinalizerObject_t2023547255
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::invalid_handle_value
	intptr_t ___invalid_handle_value_1;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::refcount
	int32_t ___refcount_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::owns_handle
	bool ___owns_handle_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t1184803384, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_invalid_handle_value_1() { return static_cast<int32_t>(offsetof(SafeHandle_t1184803384, ___invalid_handle_value_1)); }
	inline intptr_t get_invalid_handle_value_1() const { return ___invalid_handle_value_1; }
	inline intptr_t* get_address_of_invalid_handle_value_1() { return &___invalid_handle_value_1; }
	inline void set_invalid_handle_value_1(intptr_t value)
	{
		___invalid_handle_value_1 = value;
	}

	inline static int32_t get_offset_of_refcount_2() { return static_cast<int32_t>(offsetof(SafeHandle_t1184803384, ___refcount_2)); }
	inline int32_t get_refcount_2() const { return ___refcount_2; }
	inline int32_t* get_address_of_refcount_2() { return &___refcount_2; }
	inline void set_refcount_2(int32_t value)
	{
		___refcount_2 = value;
	}

	inline static int32_t get_offset_of_owns_handle_3() { return static_cast<int32_t>(offsetof(SafeHandle_t1184803384, ___owns_handle_3)); }
	inline bool get_owns_handle_3() const { return ___owns_handle_3; }
	inline bool* get_address_of_owns_handle_3() { return &___owns_handle_3; }
	inline void set_owns_handle_3(bool value)
	{
		___owns_handle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLE_T1184803384_H
#ifndef CER_T2881846065_H
#define CER_T2881846065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.Cer
struct  Cer_t2881846065 
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Cer::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Cer_t2881846065, ___value___1)); }
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
#endif // CER_T2881846065_H
#ifndef GCHANDLETYPE_T1638632189_H
#define GCHANDLETYPE_T1638632189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t1638632189 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GCHandleType_t1638632189, ___value___1)); }
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
#endif // GCHANDLETYPE_T1638632189_H
#ifndef INTERFACETYPEATTRIBUTE_T409430452_H
#define INTERFACETYPEATTRIBUTE_T409430452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InterfaceTypeAttribute
struct  InterfaceTypeAttribute_t409430452  : public Attribute_t435654298
{
public:
	// System.Runtime.InteropServices.ComInterfaceType System.Runtime.InteropServices.InterfaceTypeAttribute::intType
	int32_t ___intType_0;

public:
	inline static int32_t get_offset_of_intType_0() { return static_cast<int32_t>(offsetof(InterfaceTypeAttribute_t409430452, ___intType_0)); }
	inline int32_t get_intType_0() const { return ___intType_0; }
	inline int32_t* get_address_of_intType_0() { return &___intType_0; }
	inline void set_intType_0(int32_t value)
	{
		___intType_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERFACETYPEATTRIBUTE_T409430452_H
#ifndef RELIABILITYCONTRACTATTRIBUTE_T3293984283_H
#define RELIABILITYCONTRACTATTRIBUTE_T3293984283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
struct  ReliabilityContractAttribute_t3293984283  : public Attribute_t435654298
{
public:
	// System.Runtime.ConstrainedExecution.Consistency System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::consistency
	int32_t ___consistency_0;
	// System.Runtime.ConstrainedExecution.Cer System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::cer
	int32_t ___cer_1;

public:
	inline static int32_t get_offset_of_consistency_0() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t3293984283, ___consistency_0)); }
	inline int32_t get_consistency_0() const { return ___consistency_0; }
	inline int32_t* get_address_of_consistency_0() { return &___consistency_0; }
	inline void set_consistency_0(int32_t value)
	{
		___consistency_0 = value;
	}

	inline static int32_t get_offset_of_cer_1() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t3293984283, ___cer_1)); }
	inline int32_t get_cer_1() const { return ___cer_1; }
	inline int32_t* get_address_of_cer_1() { return &___cer_1; }
	inline void set_cer_1(int32_t value)
	{
		___cer_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RELIABILITYCONTRACTATTRIBUTE_T3293984283_H
#ifndef COMEXCEPTION_T953389488_H
#define COMEXCEPTION_T953389488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.COMException
struct  COMException_t953389488  : public ExternalException_t750536251
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMEXCEPTION_T953389488_H
#ifndef DEFAULTDEPENDENCYATTRIBUTE_T2089071596_H
#define DEFAULTDEPENDENCYATTRIBUTE_T2089071596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DefaultDependencyAttribute
struct  DefaultDependencyAttribute_t2089071596  : public Attribute_t435654298
{
public:
	// System.Runtime.CompilerServices.LoadHint System.Runtime.CompilerServices.DefaultDependencyAttribute::hint
	int32_t ___hint_0;

public:
	inline static int32_t get_offset_of_hint_0() { return static_cast<int32_t>(offsetof(DefaultDependencyAttribute_t2089071596, ___hint_0)); }
	inline int32_t get_hint_0() const { return ___hint_0; }
	inline int32_t* get_address_of_hint_0() { return &___hint_0; }
	inline void set_hint_0(int32_t value)
	{
		___hint_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTDEPENDENCYATTRIBUTE_T2089071596_H
#ifndef CLASSINTERFACEATTRIBUTE_T2204423486_H
#define CLASSINTERFACEATTRIBUTE_T2204423486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceAttribute
struct  ClassInterfaceAttribute_t2204423486  : public Attribute_t435654298
{
public:
	// System.Runtime.InteropServices.ClassInterfaceType System.Runtime.InteropServices.ClassInterfaceAttribute::ciType
	int32_t ___ciType_0;

public:
	inline static int32_t get_offset_of_ciType_0() { return static_cast<int32_t>(offsetof(ClassInterfaceAttribute_t2204423486, ___ciType_0)); }
	inline int32_t get_ciType_0() const { return ___ciType_0; }
	inline int32_t* get_address_of_ciType_0() { return &___ciType_0; }
	inline void set_ciType_0(int32_t value)
	{
		___ciType_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSINTERFACEATTRIBUTE_T2204423486_H
#ifndef UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T2811414153_H
#define UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T2811414153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
struct  UnmanagedFunctionPointerAttribute_t2811414153  : public Attribute_t435654298
{
public:
	// System.Runtime.InteropServices.CallingConvention System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::call_conv
	int32_t ___call_conv_0;

public:
	inline static int32_t get_offset_of_call_conv_0() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t2811414153, ___call_conv_0)); }
	inline int32_t get_call_conv_0() const { return ___call_conv_0; }
	inline int32_t* get_address_of_call_conv_0() { return &___call_conv_0; }
	inline void set_call_conv_0(int32_t value)
	{
		___call_conv_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T2811414153_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize400 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize401 = { sizeof (NeutralResourcesLanguageAttribute_t3275951287), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable401[1] = 
{
	NeutralResourcesLanguageAttribute_t3275951287::get_offset_of_culture_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize402 = { sizeof (ResourceManager_t1370974618), -1, sizeof(ResourceManager_t1370974618_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable402[5] = 
{
	ResourceManager_t1370974618_StaticFields::get_offset_of_ResourceCache_0(),
	ResourceManager_t1370974618_StaticFields::get_offset_of_NonExistent_1(),
	ResourceManager_t1370974618_StaticFields::get_offset_of_HeaderVersionNumber_2(),
	ResourceManager_t1370974618_StaticFields::get_offset_of_MagicNumber_3(),
	ResourceManager_t1370974618::get_offset_of_resourceSetType_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize403 = { sizeof (PredefinedResourceType_t3126036140)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable403[21] = 
{
	PredefinedResourceType_t3126036140::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize404 = { sizeof (ResourceReader_t948677063), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable404[13] = 
{
	ResourceReader_t948677063::get_offset_of_reader_0(),
	ResourceReader_t948677063::get_offset_of_readerLock_1(),
	ResourceReader_t948677063::get_offset_of_formatter_2(),
	ResourceReader_t948677063::get_offset_of_resourceCount_3(),
	ResourceReader_t948677063::get_offset_of_typeCount_4(),
	ResourceReader_t948677063::get_offset_of_typeNames_5(),
	ResourceReader_t948677063::get_offset_of_hashes_6(),
	ResourceReader_t948677063::get_offset_of_infos_7(),
	ResourceReader_t948677063::get_offset_of_dataSectionOffset_8(),
	ResourceReader_t948677063::get_offset_of_nameSectionOffset_9(),
	ResourceReader_t948677063::get_offset_of_resource_ver_10(),
	ResourceReader_t948677063::get_offset_of_cache_11(),
	ResourceReader_t948677063::get_offset_of_cache_lock_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize405 = { sizeof (ResourceInfo_t829168596)+ sizeof (RuntimeObject), sizeof(ResourceInfo_t829168596_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable405[3] = 
{
	ResourceInfo_t829168596::get_offset_of_ValuePosition_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceInfo_t829168596::get_offset_of_ResourceName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceInfo_t829168596::get_offset_of_TypeIndex_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize406 = { sizeof (ResourceCacheItem_t2829796159)+ sizeof (RuntimeObject), sizeof(ResourceCacheItem_t2829796159_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable406[2] = 
{
	ResourceCacheItem_t2829796159::get_offset_of_ResourceName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceCacheItem_t2829796159::get_offset_of_ResourceValue_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize407 = { sizeof (ResourceEnumerator_t570180795), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable407[3] = 
{
	ResourceEnumerator_t570180795::get_offset_of_reader_0(),
	ResourceEnumerator_t570180795::get_offset_of_index_1(),
	ResourceEnumerator_t570180795::get_offset_of_finished_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize408 = { sizeof (ResourceSet_t3896624228), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable408[4] = 
{
	ResourceSet_t3896624228::get_offset_of_Reader_0(),
	ResourceSet_t3896624228::get_offset_of_Table_1(),
	ResourceSet_t3896624228::get_offset_of_resources_read_2(),
	ResourceSet_t3896624228::get_offset_of_disposed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize409 = { sizeof (RuntimeResourceSet_t2012745339), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize410 = { sizeof (SatelliteContractVersionAttribute_t1488674290), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable410[1] = 
{
	SatelliteContractVersionAttribute_t1488674290::get_offset_of_ver_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize411 = { sizeof (Win32ResourceType_t4294198297)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable411[21] = 
{
	Win32ResourceType_t4294198297::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize412 = { sizeof (NameOrId_t3940602482), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable412[2] = 
{
	NameOrId_t3940602482::get_offset_of_name_0(),
	NameOrId_t3940602482::get_offset_of_id_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize413 = { sizeof (Win32Resource_t1757568484), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable413[2] = 
{
	Win32Resource_t1757568484::get_offset_of_type_0(),
	Win32Resource_t1757568484::get_offset_of_name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize414 = { sizeof (Win32VersionResource_t2045241528), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize415 = { sizeof (CompilationRelaxations_t996607820)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable415[2] = 
{
	CompilationRelaxations_t996607820::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize416 = { sizeof (CompilationRelaxationsAttribute_t1429946914), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable416[1] = 
{
	CompilationRelaxationsAttribute_t1429946914::get_offset_of_relax_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize417 = { sizeof (DefaultDependencyAttribute_t2089071596), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable417[1] = 
{
	DefaultDependencyAttribute_t2089071596::get_offset_of_hint_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize418 = { sizeof (IsVolatile_t719103619), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize419 = { sizeof (LoadHint_t293810354)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable419[4] = 
{
	LoadHint_t293810354::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize420 = { sizeof (StringFreezingAttribute_t3762326656), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize421 = { sizeof (Cer_t2881846065)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable421[4] = 
{
	Cer_t2881846065::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize422 = { sizeof (Consistency_t116183400)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable422[5] = 
{
	Consistency_t116183400::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize423 = { sizeof (CriticalFinalizerObject_t2023547255), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize424 = { sizeof (ReliabilityContractAttribute_t3293984283), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable424[2] = 
{
	ReliabilityContractAttribute_t3293984283::get_offset_of_consistency_0(),
	ReliabilityContractAttribute_t3293984283::get_offset_of_cer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize425 = { sizeof (ActivationArguments_t2393595394), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize426 = { sizeof (COMException_t953389488), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize427 = { sizeof (CallingConvention_t1591474679)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable427[6] = 
{
	CallingConvention_t1591474679::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize428 = { sizeof (CharSet_t1663981105)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable428[5] = 
{
	CharSet_t1663981105::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize429 = { sizeof (ClassInterfaceAttribute_t2204423486), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable429[1] = 
{
	ClassInterfaceAttribute_t2204423486::get_offset_of_ciType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize430 = { sizeof (ClassInterfaceType_t2326925020)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable430[4] = 
{
	ClassInterfaceType_t2326925020::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize431 = { sizeof (ComDefaultInterfaceAttribute_t450903857), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable431[1] = 
{
	ComDefaultInterfaceAttribute_t450903857::get_offset_of__type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize432 = { sizeof (ComInterfaceType_t1145889200)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable432[4] = 
{
	ComInterfaceType_t1145889200::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize433 = { sizeof (DispIdAttribute_t2038473623), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable433[1] = 
{
	DispIdAttribute_t2038473623::get_offset_of_id_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize434 = { sizeof (ErrorWrapper_t3702320715), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable434[1] = 
{
	ErrorWrapper_t3702320715::get_offset_of_errorCode_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize435 = { sizeof (ExternalException_t750536251), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize436 = { sizeof (GCHandle_t3038984084)+ sizeof (RuntimeObject), sizeof(GCHandle_t3038984084 ), 0, 0 };
extern const int32_t g_FieldOffsetTable436[1] = 
{
	GCHandle_t3038984084::get_offset_of_handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize437 = { sizeof (GCHandleType_t1638632189)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable437[5] = 
{
	GCHandleType_t1638632189::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize438 = { sizeof (InterfaceTypeAttribute_t409430452), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable438[1] = 
{
	InterfaceTypeAttribute_t409430452::get_offset_of_intType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize439 = { sizeof (Marshal_t1366527345), -1, sizeof(Marshal_t1366527345_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable439[2] = 
{
	Marshal_t1366527345_StaticFields::get_offset_of_SystemMaxDBCSCharSize_0(),
	Marshal_t1366527345_StaticFields::get_offset_of_SystemDefaultCharSize_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize440 = { sizeof (MarshalDirectiveException_t612513343), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable440[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize441 = { sizeof (PreserveSigAttribute_t3479873944), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize442 = { sizeof (SafeHandle_t1184803384), sizeof(void*), 0, 0 };
extern const int32_t g_FieldOffsetTable442[4] = 
{
	SafeHandle_t1184803384::get_offset_of_handle_0(),
	SafeHandle_t1184803384::get_offset_of_invalid_handle_value_1(),
	SafeHandle_t1184803384::get_offset_of_refcount_2(),
	SafeHandle_t1184803384::get_offset_of_owns_handle_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize443 = { sizeof (TypeLibImportClassAttribute_t3114055209), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable443[1] = 
{
	TypeLibImportClassAttribute_t3114055209::get_offset_of__importClass_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize444 = { sizeof (TypeLibVersionAttribute_t1467804506), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable444[2] = 
{
	TypeLibVersionAttribute_t1467804506::get_offset_of_major_0(),
	TypeLibVersionAttribute_t1467804506::get_offset_of_minor_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize445 = { sizeof (UnmanagedFunctionPointerAttribute_t2811414153), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable445[1] = 
{
	UnmanagedFunctionPointerAttribute_t2811414153::get_offset_of_call_conv_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize446 = { sizeof (UnmanagedType_t2903368185)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable446[36] = 
{
	UnmanagedType_t2903368185::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize447 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize448 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize449 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize450 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize451 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize452 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize453 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize454 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize455 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize456 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize457 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize458 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize459 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize460 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize461 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize462 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize463 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize464 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize465 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize466 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize467 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize468 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize469 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize470 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize471 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize472 = { sizeof (ActivationServices_t3257440060), -1, sizeof(ActivationServices_t3257440060_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable472[1] = 
{
	ActivationServices_t3257440060_StaticFields::get_offset_of__constructionActivator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize473 = { sizeof (AppDomainLevelActivator_t3087894846), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable473[2] = 
{
	AppDomainLevelActivator_t3087894846::get_offset_of__activationUrl_0(),
	AppDomainLevelActivator_t3087894846::get_offset_of__next_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize474 = { sizeof (ConstructionLevelActivator_t3977241201), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize475 = { sizeof (ContextLevelActivator_t3126525165), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable475[1] = 
{
	ContextLevelActivator_t3126525165::get_offset_of_m_NextActivator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize476 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize477 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize478 = { sizeof (RemoteActivator_t4165585792), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize479 = { sizeof (UrlAttribute_t1745743061), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable479[1] = 
{
	UrlAttribute_t1745743061::get_offset_of_url_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize480 = { sizeof (ChannelInfo_t2894580255), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable480[1] = 
{
	ChannelInfo_t2894580255::get_offset_of_channelData_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize481 = { sizeof (ChannelServices_t1923365737), -1, sizeof(ChannelServices_t1923365737_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable481[5] = 
{
	ChannelServices_t1923365737_StaticFields::get_offset_of_registeredChannels_0(),
	ChannelServices_t1923365737_StaticFields::get_offset_of_delayedClientChannels_1(),
	ChannelServices_t1923365737_StaticFields::get_offset_of__crossContextSink_2(),
	ChannelServices_t1923365737_StaticFields::get_offset_of_CrossContextUrl_3(),
	ChannelServices_t1923365737_StaticFields::get_offset_of_oldStartModeTypes_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize482 = { sizeof (CrossAppDomainData_t1640225116), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable482[3] = 
{
	CrossAppDomainData_t1640225116::get_offset_of__ContextID_0(),
	CrossAppDomainData_t1640225116::get_offset_of__DomainID_1(),
	CrossAppDomainData_t1640225116::get_offset_of__processGuid_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize483 = { sizeof (CrossAppDomainChannel_t1012949913), -1, sizeof(CrossAppDomainChannel_t1012949913_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable483[1] = 
{
	CrossAppDomainChannel_t1012949913_StaticFields::get_offset_of_s_lock_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize484 = { sizeof (CrossAppDomainSink_t400755761), -1, sizeof(CrossAppDomainSink_t400755761_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable484[3] = 
{
	CrossAppDomainSink_t400755761_StaticFields::get_offset_of_s_sinks_0(),
	CrossAppDomainSink_t400755761_StaticFields::get_offset_of_processMessageMethod_1(),
	CrossAppDomainSink_t400755761::get_offset_of__domainID_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize485 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize486 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize487 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize488 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize489 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize490 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize491 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize492 = { sizeof (SinkProviderData_t3980374788), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable492[3] = 
{
	SinkProviderData_t3980374788::get_offset_of_sinkName_0(),
	SinkProviderData_t3980374788::get_offset_of_children_1(),
	SinkProviderData_t3980374788::get_offset_of_properties_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize493 = { sizeof (Context_t2067708749), -1, sizeof(Context_t2067708749_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable493[14] = 
{
	Context_t2067708749::get_offset_of_domain_id_0(),
	Context_t2067708749::get_offset_of_context_id_1(),
	Context_t2067708749::get_offset_of_static_data_2(),
	Context_t2067708749_StaticFields::get_offset_of_default_server_context_sink_3(),
	Context_t2067708749::get_offset_of_server_context_sink_chain_4(),
	Context_t2067708749::get_offset_of_client_context_sink_chain_5(),
	Context_t2067708749::get_offset_of_datastore_6(),
	Context_t2067708749::get_offset_of_context_properties_7(),
	Context_t2067708749::get_offset_of_frozen_8(),
	Context_t2067708749_StaticFields::get_offset_of_global_count_9(),
	Context_t2067708749_StaticFields::get_offset_of_namedSlots_10(),
	Context_t2067708749_StaticFields::get_offset_of_global_dynamic_properties_11(),
	Context_t2067708749::get_offset_of_context_dynamic_properties_12(),
	Context_t2067708749::get_offset_of_callback_object_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize494 = { sizeof (DynamicPropertyCollection_t2310851654), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable494[1] = 
{
	DynamicPropertyCollection_t2310851654::get_offset_of__properties_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize495 = { sizeof (DynamicPropertyReg_t3427414888), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable495[2] = 
{
	DynamicPropertyReg_t3427414888::get_offset_of_Property_0(),
	DynamicPropertyReg_t3427414888::get_offset_of_Sink_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize496 = { sizeof (ContextCallbackObject_t3921426051), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize497 = { sizeof (ContextAttribute_t1911175881), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable497[1] = 
{
	ContextAttribute_t1911175881::get_offset_of_AttributeName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize498 = { sizeof (CrossContextChannel_t455535530), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize499 = { 0, -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
