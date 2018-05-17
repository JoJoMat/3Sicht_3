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

// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t179046848;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t2012843578;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t466969305;
// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t2544199057;
// UnityEngine.Camera[]
struct CameraU5BU5D_t2121368102;
// UnityEngine.Object
struct Object_t901498535;
// System.IntPtr[]
struct IntPtrU5BU5D_t2058873772;
// System.Collections.IDictionary
struct IDictionary_t320395106;
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t1907735769;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t1600960855;
// UnityEngine.Events.UnityAction
struct UnityAction_t301435589;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t1416270015;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t3160170036;
// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct Queue_1_t3597429787;
// System.Void
struct Void_t886624537;
// System.Char[]
struct CharU5BU5D_t498600359;
// UnityEngine.GameObject
struct GameObject_t1821718554;
// UnityEngine.Camera
struct Camera_t2916941567;
// System.Object[]
struct ObjectU5BU5D_t2903489424;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3209800765;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t2180146276;
// System.Type
struct Type_t;
// UnityEngine.ILogHandler
struct ILogHandler_t3378621115;
// System.Int32[]
struct Int32U5BU5D_t2679505748;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t1981503656;
// System.IAsyncResult
struct IAsyncResult_t4057726149;
// System.AsyncCallback
struct AsyncCallback_t3186847474;

struct Object_t901498535_marshaled_com;



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
#ifndef SCRIPTINGUTILS_T3031299973_H
#define SCRIPTINGUTILS_T3031299973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.ScriptingUtils
struct  ScriptingUtils_t3031299973  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTINGUTILS_T3031299973_H
#ifndef MANAGEDSTREAMHELPERS_T4167950056_H
#define MANAGEDSTREAMHELPERS_T4167950056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ManagedStreamHelpers
struct  ManagedStreamHelpers_t4167950056  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANAGEDSTREAMHELPERS_T4167950056_H
#ifndef PLAYABLEBEHAVIOUR_T4132418085_H
#define PLAYABLEBEHAVIOUR_T4132418085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBehaviour
struct  PlayableBehaviour_t4132418085  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEBEHAVIOUR_T4132418085_H
#ifndef UNITYEVENTBASE_T3586259038_H
#define UNITYEVENTBASE_T3586259038_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3586259038  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t179046848 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t2012843578 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3586259038, ___m_Calls_0)); }
	inline InvokableCallList_t179046848 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t179046848 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t179046848 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3586259038, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t2012843578 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t2012843578 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t2012843578 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3586259038, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3586259038, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3586259038_H
#ifndef PROPERTYNAMEUTILS_T1512042562_H
#define PROPERTYNAMEUTILS_T1512042562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyNameUtils
struct  PropertyNameUtils_t1512042562  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYNAMEUTILS_T1512042562_H
#ifndef MESSAGEEVENTARGS_T4264587123_H
#define MESSAGEEVENTARGS_T4264587123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.MessageEventArgs
struct  MessageEventArgs_t4264587123  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Networking.PlayerConnection.MessageEventArgs::playerId
	int32_t ___playerId_0;
	// System.Byte[] UnityEngine.Networking.PlayerConnection.MessageEventArgs::data
	ByteU5BU5D_t466969305* ___data_1;

public:
	inline static int32_t get_offset_of_playerId_0() { return static_cast<int32_t>(offsetof(MessageEventArgs_t4264587123, ___playerId_0)); }
	inline int32_t get_playerId_0() const { return ___playerId_0; }
	inline int32_t* get_address_of_playerId_0() { return &___playerId_0; }
	inline void set_playerId_0(int32_t value)
	{
		___playerId_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(MessageEventArgs_t4264587123, ___data_1)); }
	inline ByteU5BU5D_t466969305* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t466969305** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t466969305* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEEVENTARGS_T4264587123_H
#ifndef SENDMOUSEEVENTS_T1126542304_H
#define SENDMOUSEEVENTS_T1126542304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents
struct  SendMouseEvents_t1126542304  : public RuntimeObject
{
public:

public:
};

struct SendMouseEvents_t1126542304_StaticFields
{
public:
	// System.Boolean UnityEngine.SendMouseEvents::s_MouseUsed
	bool ___s_MouseUsed_0;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_t2544199057* ___m_LastHit_1;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_t2544199057* ___m_MouseDownHit_2;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_t2544199057* ___m_CurrentHit_3;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t2121368102* ___m_Cameras_4;

public:
	inline static int32_t get_offset_of_s_MouseUsed_0() { return static_cast<int32_t>(offsetof(SendMouseEvents_t1126542304_StaticFields, ___s_MouseUsed_0)); }
	inline bool get_s_MouseUsed_0() const { return ___s_MouseUsed_0; }
	inline bool* get_address_of_s_MouseUsed_0() { return &___s_MouseUsed_0; }
	inline void set_s_MouseUsed_0(bool value)
	{
		___s_MouseUsed_0 = value;
	}

	inline static int32_t get_offset_of_m_LastHit_1() { return static_cast<int32_t>(offsetof(SendMouseEvents_t1126542304_StaticFields, ___m_LastHit_1)); }
	inline HitInfoU5BU5D_t2544199057* get_m_LastHit_1() const { return ___m_LastHit_1; }
	inline HitInfoU5BU5D_t2544199057** get_address_of_m_LastHit_1() { return &___m_LastHit_1; }
	inline void set_m_LastHit_1(HitInfoU5BU5D_t2544199057* value)
	{
		___m_LastHit_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastHit_1), value);
	}

	inline static int32_t get_offset_of_m_MouseDownHit_2() { return static_cast<int32_t>(offsetof(SendMouseEvents_t1126542304_StaticFields, ___m_MouseDownHit_2)); }
	inline HitInfoU5BU5D_t2544199057* get_m_MouseDownHit_2() const { return ___m_MouseDownHit_2; }
	inline HitInfoU5BU5D_t2544199057** get_address_of_m_MouseDownHit_2() { return &___m_MouseDownHit_2; }
	inline void set_m_MouseDownHit_2(HitInfoU5BU5D_t2544199057* value)
	{
		___m_MouseDownHit_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_MouseDownHit_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentHit_3() { return static_cast<int32_t>(offsetof(SendMouseEvents_t1126542304_StaticFields, ___m_CurrentHit_3)); }
	inline HitInfoU5BU5D_t2544199057* get_m_CurrentHit_3() const { return ___m_CurrentHit_3; }
	inline HitInfoU5BU5D_t2544199057** get_address_of_m_CurrentHit_3() { return &___m_CurrentHit_3; }
	inline void set_m_CurrentHit_3(HitInfoU5BU5D_t2544199057* value)
	{
		___m_CurrentHit_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentHit_3), value);
	}

	inline static int32_t get_offset_of_m_Cameras_4() { return static_cast<int32_t>(offsetof(SendMouseEvents_t1126542304_StaticFields, ___m_Cameras_4)); }
	inline CameraU5BU5D_t2121368102* get_m_Cameras_4() const { return ___m_Cameras_4; }
	inline CameraU5BU5D_t2121368102** get_address_of_m_Cameras_4() { return &___m_Cameras_4; }
	inline void set_m_Cameras_4(CameraU5BU5D_t2121368102* value)
	{
		___m_Cameras_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Cameras_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMOUSEEVENTS_T1126542304_H
#ifndef ARGUMENTCACHE_T1981503656_H
#define ARGUMENTCACHE_T1981503656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.ArgumentCache
struct  ArgumentCache_t1981503656  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.ArgumentCache::m_ObjectArgument
	Object_t901498535 * ___m_ObjectArgument_0;
	// System.String UnityEngine.Events.ArgumentCache::m_ObjectArgumentAssemblyTypeName
	String_t* ___m_ObjectArgumentAssemblyTypeName_1;
	// System.Int32 UnityEngine.Events.ArgumentCache::m_IntArgument
	int32_t ___m_IntArgument_2;
	// System.Single UnityEngine.Events.ArgumentCache::m_FloatArgument
	float ___m_FloatArgument_3;
	// System.String UnityEngine.Events.ArgumentCache::m_StringArgument
	String_t* ___m_StringArgument_4;
	// System.Boolean UnityEngine.Events.ArgumentCache::m_BoolArgument
	bool ___m_BoolArgument_5;

public:
	inline static int32_t get_offset_of_m_ObjectArgument_0() { return static_cast<int32_t>(offsetof(ArgumentCache_t1981503656, ___m_ObjectArgument_0)); }
	inline Object_t901498535 * get_m_ObjectArgument_0() const { return ___m_ObjectArgument_0; }
	inline Object_t901498535 ** get_address_of_m_ObjectArgument_0() { return &___m_ObjectArgument_0; }
	inline void set_m_ObjectArgument_0(Object_t901498535 * value)
	{
		___m_ObjectArgument_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgument_0), value);
	}

	inline static int32_t get_offset_of_m_ObjectArgumentAssemblyTypeName_1() { return static_cast<int32_t>(offsetof(ArgumentCache_t1981503656, ___m_ObjectArgumentAssemblyTypeName_1)); }
	inline String_t* get_m_ObjectArgumentAssemblyTypeName_1() const { return ___m_ObjectArgumentAssemblyTypeName_1; }
	inline String_t** get_address_of_m_ObjectArgumentAssemblyTypeName_1() { return &___m_ObjectArgumentAssemblyTypeName_1; }
	inline void set_m_ObjectArgumentAssemblyTypeName_1(String_t* value)
	{
		___m_ObjectArgumentAssemblyTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgumentAssemblyTypeName_1), value);
	}

	inline static int32_t get_offset_of_m_IntArgument_2() { return static_cast<int32_t>(offsetof(ArgumentCache_t1981503656, ___m_IntArgument_2)); }
	inline int32_t get_m_IntArgument_2() const { return ___m_IntArgument_2; }
	inline int32_t* get_address_of_m_IntArgument_2() { return &___m_IntArgument_2; }
	inline void set_m_IntArgument_2(int32_t value)
	{
		___m_IntArgument_2 = value;
	}

	inline static int32_t get_offset_of_m_FloatArgument_3() { return static_cast<int32_t>(offsetof(ArgumentCache_t1981503656, ___m_FloatArgument_3)); }
	inline float get_m_FloatArgument_3() const { return ___m_FloatArgument_3; }
	inline float* get_address_of_m_FloatArgument_3() { return &___m_FloatArgument_3; }
	inline void set_m_FloatArgument_3(float value)
	{
		___m_FloatArgument_3 = value;
	}

	inline static int32_t get_offset_of_m_StringArgument_4() { return static_cast<int32_t>(offsetof(ArgumentCache_t1981503656, ___m_StringArgument_4)); }
	inline String_t* get_m_StringArgument_4() const { return ___m_StringArgument_4; }
	inline String_t** get_address_of_m_StringArgument_4() { return &___m_StringArgument_4; }
	inline void set_m_StringArgument_4(String_t* value)
	{
		___m_StringArgument_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringArgument_4), value);
	}

	inline static int32_t get_offset_of_m_BoolArgument_5() { return static_cast<int32_t>(offsetof(ArgumentCache_t1981503656, ___m_BoolArgument_5)); }
	inline bool get_m_BoolArgument_5() const { return ___m_BoolArgument_5; }
	inline bool* get_address_of_m_BoolArgument_5() { return &___m_BoolArgument_5; }
	inline void set_m_BoolArgument_5(bool value)
	{
		___m_BoolArgument_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTCACHE_T1981503656_H
#ifndef STACKTRACEUTILITY_T3762627447_H
#define STACKTRACEUTILITY_T3762627447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StackTraceUtility
struct  StackTraceUtility_t3762627447  : public RuntimeObject
{
public:

public:
};

struct StackTraceUtility_t3762627447_StaticFields
{
public:
	// System.String UnityEngine.StackTraceUtility::projectFolder
	String_t* ___projectFolder_0;

public:
	inline static int32_t get_offset_of_projectFolder_0() { return static_cast<int32_t>(offsetof(StackTraceUtility_t3762627447_StaticFields, ___projectFolder_0)); }
	inline String_t* get_projectFolder_0() const { return ___projectFolder_0; }
	inline String_t** get_address_of_projectFolder_0() { return &___projectFolder_0; }
	inline void set_projectFolder_0(String_t* value)
	{
		___projectFolder_0 = value;
		Il2CppCodeGenWriteBarrier((&___projectFolder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKTRACEUTILITY_T3762627447_H
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
#ifndef SYNCHRONIZATIONCONTEXT_T3889385043_H
#define SYNCHRONIZATIONCONTEXT_T3889385043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationContext
struct  SynchronizationContext_t3889385043  : public RuntimeObject
{
public:

public:
};

struct SynchronizationContext_t3889385043_ThreadStaticFields
{
public:
	// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::currentContext
	SynchronizationContext_t3889385043 * ___currentContext_0;

public:
	inline static int32_t get_offset_of_currentContext_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t3889385043_ThreadStaticFields, ___currentContext_0)); }
	inline SynchronizationContext_t3889385043 * get_currentContext_0() const { return ___currentContext_0; }
	inline SynchronizationContext_t3889385043 ** get_address_of_currentContext_0() { return &___currentContext_0; }
	inline void set_currentContext_0(SynchronizationContext_t3889385043 * value)
	{
		___currentContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentContext_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONCONTEXT_T3889385043_H
#ifndef CUSTOMYIELDINSTRUCTION_T3611948058_H
#define CUSTOMYIELDINSTRUCTION_T3611948058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t3611948058  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T3611948058_H
#ifndef UNITYSTRING_T2696659176_H
#define UNITYSTRING_T2696659176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityString
struct  UnityString_t2696659176  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSTRING_T2696659176_H
#ifndef PERSISTENTCALLGROUP_T2012843578_H
#define PERSISTENTCALLGROUP_T2012843578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCallGroup
struct  PersistentCallGroup_t2012843578  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall> UnityEngine.Events.PersistentCallGroup::m_Calls
	List_1_t1907735769 * ___m_Calls_0;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(PersistentCallGroup_t2012843578, ___m_Calls_0)); }
	inline List_1_t1907735769 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline List_1_t1907735769 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(List_1_t1907735769 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALLGROUP_T2012843578_H
#ifndef INVOKABLECALLLIST_T179046848_H
#define INVOKABLECALLLIST_T179046848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCallList
struct  InvokableCallList_t179046848  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_PersistentCalls
	List_1_t1600960855 * ___m_PersistentCalls_0;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_RuntimeCalls
	List_1_t1600960855 * ___m_RuntimeCalls_1;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_ExecutingCalls
	List_1_t1600960855 * ___m_ExecutingCalls_2;
	// System.Boolean UnityEngine.Events.InvokableCallList::m_NeedsUpdate
	bool ___m_NeedsUpdate_3;

public:
	inline static int32_t get_offset_of_m_PersistentCalls_0() { return static_cast<int32_t>(offsetof(InvokableCallList_t179046848, ___m_PersistentCalls_0)); }
	inline List_1_t1600960855 * get_m_PersistentCalls_0() const { return ___m_PersistentCalls_0; }
	inline List_1_t1600960855 ** get_address_of_m_PersistentCalls_0() { return &___m_PersistentCalls_0; }
	inline void set_m_PersistentCalls_0(List_1_t1600960855 * value)
	{
		___m_PersistentCalls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_0), value);
	}

	inline static int32_t get_offset_of_m_RuntimeCalls_1() { return static_cast<int32_t>(offsetof(InvokableCallList_t179046848, ___m_RuntimeCalls_1)); }
	inline List_1_t1600960855 * get_m_RuntimeCalls_1() const { return ___m_RuntimeCalls_1; }
	inline List_1_t1600960855 ** get_address_of_m_RuntimeCalls_1() { return &___m_RuntimeCalls_1; }
	inline void set_m_RuntimeCalls_1(List_1_t1600960855 * value)
	{
		___m_RuntimeCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_RuntimeCalls_1), value);
	}

	inline static int32_t get_offset_of_m_ExecutingCalls_2() { return static_cast<int32_t>(offsetof(InvokableCallList_t179046848, ___m_ExecutingCalls_2)); }
	inline List_1_t1600960855 * get_m_ExecutingCalls_2() const { return ___m_ExecutingCalls_2; }
	inline List_1_t1600960855 ** get_address_of_m_ExecutingCalls_2() { return &___m_ExecutingCalls_2; }
	inline void set_m_ExecutingCalls_2(List_1_t1600960855 * value)
	{
		___m_ExecutingCalls_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExecutingCalls_2), value);
	}

	inline static int32_t get_offset_of_m_NeedsUpdate_3() { return static_cast<int32_t>(offsetof(InvokableCallList_t179046848, ___m_NeedsUpdate_3)); }
	inline bool get_m_NeedsUpdate_3() const { return ___m_NeedsUpdate_3; }
	inline bool* get_address_of_m_NeedsUpdate_3() { return &___m_NeedsUpdate_3; }
	inline void set_m_NeedsUpdate_3(bool value)
	{
		___m_NeedsUpdate_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALLLIST_T179046848_H
#ifndef BASEINVOKABLECALL_T4088626022_H
#define BASEINVOKABLECALL_T4088626022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_t4088626022  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINVOKABLECALL_T4088626022_H
#ifndef SELECTIONBASEATTRIBUTE_T3262470767_H
#define SELECTIONBASEATTRIBUTE_T3262470767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SelectionBaseAttribute
struct  SelectionBaseAttribute_t3262470767  : public Attribute_t435654298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONBASEATTRIBUTE_T3262470767_H
#ifndef SERIALIZEPRIVATEVARIABLES_T682201003_H
#define SERIALIZEPRIVATEVARIABLES_T682201003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializePrivateVariables
struct  SerializePrivateVariables_t682201003  : public Attribute_t435654298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEPRIVATEVARIABLES_T682201003_H
#ifndef RECT_T3321979207_H
#define RECT_T3321979207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t3321979207 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t3321979207, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t3321979207, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t3321979207, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t3321979207, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T3321979207_H
#ifndef SERIALIZEFIELD_T2338977038_H
#define SERIALIZEFIELD_T2338977038_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializeField
struct  SerializeField_t2338977038  : public Attribute_t435654298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEFIELD_T2338977038_H
#ifndef PREFERBINARYSERIALIZATION_T3764711515_H
#define PREFERBINARYSERIALIZATION_T3764711515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PreferBinarySerialization
struct  PreferBinarySerialization_t3764711515  : public Attribute_t435654298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREFERBINARYSERIALIZATION_T3764711515_H
#ifndef INVOKABLECALL_T2378082960_H
#define INVOKABLECALL_T2378082960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall
struct  InvokableCall_t2378082960  : public BaseInvokableCall_t4088626022
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t301435589 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t2378082960, ___Delegate_0)); }
	inline UnityAction_t301435589 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_t301435589 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_t301435589 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_T2378082960_H
#ifndef VECTOR4_T1687527720_H
#define VECTOR4_T1687527720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t1687527720 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t1687527720, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t1687527720, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t1687527720, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t1687527720, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t1687527720_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t1687527720  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t1687527720  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t1687527720  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t1687527720  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t1687527720_StaticFields, ___zeroVector_5)); }
	inline Vector4_t1687527720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t1687527720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t1687527720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t1687527720_StaticFields, ___oneVector_6)); }
	inline Vector4_t1687527720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t1687527720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t1687527720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t1687527720_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t1687527720  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t1687527720 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t1687527720  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t1687527720_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t1687527720  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t1687527720 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t1687527720  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T1687527720_H
#ifndef UNMARSHALLEDATTRIBUTE_T2450714283_H
#define UNMARSHALLEDATTRIBUTE_T2450714283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bindings.UnmarshalledAttribute
struct  UnmarshalledAttribute_t2450714283  : public Attribute_t435654298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMARSHALLEDATTRIBUTE_T2450714283_H
#ifndef WAITFORSECONDSREALTIME_T3598723819_H
#define WAITFORSECONDSREALTIME_T3598723819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSecondsRealtime
struct  WaitForSecondsRealtime_t3598723819  : public CustomYieldInstruction_t3611948058
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::waitTime
	float ___waitTime_0;

public:
	inline static int32_t get_offset_of_waitTime_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t3598723819, ___waitTime_0)); }
	inline float get_waitTime_0() const { return ___waitTime_0; }
	inline float* get_address_of_waitTime_0() { return &___waitTime_0; }
	inline void set_waitTime_0(float value)
	{
		___waitTime_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORSECONDSREALTIME_T3598723819_H
#ifndef VECTOR2_T4146574692_H
#define VECTOR2_T4146574692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t4146574692 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t4146574692, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t4146574692, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t4146574692_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t4146574692  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t4146574692  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t4146574692  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t4146574692  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t4146574692  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t4146574692  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t4146574692  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t4146574692  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t4146574692_StaticFields, ___zeroVector_2)); }
	inline Vector2_t4146574692  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t4146574692 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t4146574692  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t4146574692_StaticFields, ___oneVector_3)); }
	inline Vector2_t4146574692  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t4146574692 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t4146574692  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t4146574692_StaticFields, ___upVector_4)); }
	inline Vector2_t4146574692  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t4146574692 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t4146574692  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t4146574692_StaticFields, ___downVector_5)); }
	inline Vector2_t4146574692  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t4146574692 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t4146574692  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t4146574692_StaticFields, ___leftVector_6)); }
	inline Vector2_t4146574692  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t4146574692 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t4146574692  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t4146574692_StaticFields, ___rightVector_7)); }
	inline Vector2_t4146574692  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t4146574692 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t4146574692  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t4146574692_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t4146574692  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t4146574692 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t4146574692  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t4146574692_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t4146574692  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t4146574692 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t4146574692  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T4146574692_H
#ifndef WORKREQUEST_T4272976033_H
#define WORKREQUEST_T4272976033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct  WorkRequest_t4272976033 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t1416270015 * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_t3160170036 * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_t4272976033, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t1416270015 * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t1416270015 ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t1416270015 * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateCallback_0), value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_t4272976033, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateState_1), value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_t4272976033, ___m_WaitHandle_2)); }
	inline ManualResetEvent_t3160170036 * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_t3160170036 ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_t3160170036 * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_WaitHandle_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t4272976033_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t3160170036 * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t4272976033_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t3160170036 * ___m_WaitHandle_2;
};
#endif // WORKREQUEST_T4272976033_H
#ifndef UNITYSYNCHRONIZATIONCONTEXT_T3252174936_H
#define UNITYSYNCHRONIZATIONCONTEXT_T3252174936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext
struct  UnitySynchronizationContext_t3252174936  : public SynchronizationContext_t3889385043
{
public:
	// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest> UnityEngine.UnitySynchronizationContext::m_AsyncWorkQueue
	Queue_1_t3597429787 * ___m_AsyncWorkQueue_1;
	// System.Int32 UnityEngine.UnitySynchronizationContext::m_MainThreadID
	int32_t ___m_MainThreadID_2;

public:
	inline static int32_t get_offset_of_m_AsyncWorkQueue_1() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t3252174936, ___m_AsyncWorkQueue_1)); }
	inline Queue_1_t3597429787 * get_m_AsyncWorkQueue_1() const { return ___m_AsyncWorkQueue_1; }
	inline Queue_1_t3597429787 ** get_address_of_m_AsyncWorkQueue_1() { return &___m_AsyncWorkQueue_1; }
	inline void set_m_AsyncWorkQueue_1(Queue_1_t3597429787 * value)
	{
		___m_AsyncWorkQueue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_AsyncWorkQueue_1), value);
	}

	inline static int32_t get_offset_of_m_MainThreadID_2() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t3252174936, ___m_MainThreadID_2)); }
	inline int32_t get_m_MainThreadID_2() const { return ___m_MainThreadID_2; }
	inline int32_t* get_address_of_m_MainThreadID_2() { return &___m_MainThreadID_2; }
	inline void set_m_MainThreadID_2(int32_t value)
	{
		___m_MainThreadID_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSYNCHRONIZATIONCONTEXT_T3252174936_H
#ifndef UNITYEXCEPTION_T832993395_H
#define UNITYEXCEPTION_T832993395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityException
struct  UnityException_t832993395  : public Exception_t1203457310
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEXCEPTION_T832993395_H
#ifndef THREADANDSERIALIZATIONSAFEATTRIBUTE_T445065539_H
#define THREADANDSERIALIZATIONSAFEATTRIBUTE_T445065539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ThreadAndSerializationSafeAttribute
struct  ThreadAndSerializationSafeAttribute_t445065539  : public Attribute_t435654298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADANDSERIALIZATIONSAFEATTRIBUTE_T445065539_H
#ifndef DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T3641115139_H
#define DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T3641115139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.DeallocateOnJobCompletionAttribute
struct  DeallocateOnJobCompletionAttribute_t3641115139  : public Attribute_t435654298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T3641115139_H
#ifndef PROPERTYNAME_T2320584263_H
#define PROPERTYNAME_T2320584263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyName
struct  PropertyName_t2320584263 
{
public:
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PropertyName_t2320584263, ___id_0)); }
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
#endif // PROPERTYNAME_T2320584263_H
#ifndef VOID_T886624537_H
#define VOID_T886624537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t886624537 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T886624537_H
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
#ifndef VECTOR3_T3184433065_H
#define VECTOR3_T3184433065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3184433065 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3184433065, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3184433065, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3184433065, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3184433065_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3184433065  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3184433065  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3184433065  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3184433065  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3184433065  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3184433065  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3184433065  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3184433065  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3184433065  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3184433065  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3184433065_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3184433065  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3184433065 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3184433065  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3184433065_StaticFields, ___oneVector_5)); }
	inline Vector3_t3184433065  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3184433065 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3184433065  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3184433065_StaticFields, ___upVector_6)); }
	inline Vector3_t3184433065  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3184433065 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3184433065  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3184433065_StaticFields, ___downVector_7)); }
	inline Vector3_t3184433065  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3184433065 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3184433065  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3184433065_StaticFields, ___leftVector_8)); }
	inline Vector3_t3184433065  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3184433065 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3184433065  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3184433065_StaticFields, ___rightVector_9)); }
	inline Vector3_t3184433065  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3184433065 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3184433065  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3184433065_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3184433065  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3184433065 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3184433065  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3184433065_StaticFields, ___backVector_11)); }
	inline Vector3_t3184433065  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3184433065 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3184433065  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3184433065_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3184433065  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3184433065 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3184433065  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3184433065_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3184433065  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3184433065 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3184433065  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3184433065_H
#ifndef SINGLE_T2066184135_H
#define SINGLE_T2066184135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t2066184135 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t2066184135, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T2066184135_H
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
#ifndef RANGEINT_T3315669467_H
#define RANGEINT_T3315669467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RangeInt
struct  RangeInt_t3315669467 
{
public:
	// System.Int32 UnityEngine.RangeInt::start
	int32_t ___start_0;
	// System.Int32 UnityEngine.RangeInt::length
	int32_t ___length_1;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(RangeInt_t3315669467, ___start_0)); }
	inline int32_t get_start_0() const { return ___start_0; }
	inline int32_t* get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(int32_t value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(RangeInt_t3315669467, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEINT_T3315669467_H
#ifndef DEFAULTVALUEATTRIBUTE_T3973091414_H
#define DEFAULTVALUEATTRIBUTE_T3973091414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal.DefaultValueAttribute
struct  DefaultValueAttribute_t3973091414  : public Attribute_t435654298
{
public:
	// System.Object UnityEngine.Internal.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t3973091414, ___DefaultValue_0)); }
	inline RuntimeObject * get_DefaultValue_0() const { return ___DefaultValue_0; }
	inline RuntimeObject ** get_address_of_DefaultValue_0() { return &___DefaultValue_0; }
	inline void set_DefaultValue_0(RuntimeObject * value)
	{
		___DefaultValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T3973091414_H
#ifndef EXCLUDEFROMDOCSATTRIBUTE_T2759391063_H
#define EXCLUDEFROMDOCSATTRIBUTE_T2759391063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal.ExcludeFromDocsAttribute
struct  ExcludeFromDocsAttribute_t2759391063  : public Attribute_t435654298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCLUDEFROMDOCSATTRIBUTE_T2759391063_H
#ifndef NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T2830841099_H
#define NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T2830841099_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerSupportsAtomicWriteAttribute
struct  NativeContainerSupportsAtomicWriteAttribute_t2830841099  : public Attribute_t435654298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T2830841099_H
#ifndef HITINFO_T2199518640_H
#define HITINFO_T2199518640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents/HitInfo
struct  HitInfo_t2199518640 
{
public:
	// UnityEngine.GameObject UnityEngine.SendMouseEvents/HitInfo::target
	GameObject_t1821718554 * ___target_0;
	// UnityEngine.Camera UnityEngine.SendMouseEvents/HitInfo::camera
	Camera_t2916941567 * ___camera_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(HitInfo_t2199518640, ___target_0)); }
	inline GameObject_t1821718554 * get_target_0() const { return ___target_0; }
	inline GameObject_t1821718554 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t1821718554 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(HitInfo_t2199518640, ___camera_1)); }
	inline Camera_t2916941567 * get_camera_1() const { return ___camera_1; }
	inline Camera_t2916941567 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t2916941567 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier((&___camera_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t2199518640_marshaled_pinvoke
{
	GameObject_t1821718554 * ___target_0;
	Camera_t2916941567 * ___camera_1;
};
// Native definition for COM marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t2199518640_marshaled_com
{
	GameObject_t1821718554 * ___target_0;
	Camera_t2916941567 * ___camera_1;
};
#endif // HITINFO_T2199518640_H
#ifndef NATIVECONTAINERATTRIBUTE_T2989792926_H
#define NATIVECONTAINERATTRIBUTE_T2989792926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerAttribute
struct  NativeContainerAttribute_t2989792926  : public Attribute_t435654298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERATTRIBUTE_T2989792926_H
#ifndef PROPERTYATTRIBUTE_T3976512414_H
#define PROPERTYATTRIBUTE_T3976512414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t3976512414  : public Attribute_t435654298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTE_T3976512414_H
#ifndef WRITEONLYATTRIBUTE_T1821002785_H
#define WRITEONLYATTRIBUTE_T1821002785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.WriteOnlyAttribute
struct  WriteOnlyAttribute_t1821002785  : public Attribute_t435654298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEONLYATTRIBUTE_T1821002785_H
#ifndef READWRITEATTRIBUTE_T4260542049_H
#define READWRITEATTRIBUTE_T4260542049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.ReadWriteAttribute
struct  ReadWriteAttribute_t4260542049  : public Attribute_t435654298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READWRITEATTRIBUTE_T4260542049_H
#ifndef READONLYATTRIBUTE_T394032360_H
#define READONLYATTRIBUTE_T394032360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.ReadOnlyAttribute
struct  ReadOnlyAttribute_t394032360  : public Attribute_t435654298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T394032360_H
#ifndef NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T2183526019_H
#define NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T2183526019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerSupportsMinMaxWriteRestrictionAttribute
struct  NativeContainerSupportsMinMaxWriteRestrictionAttribute_t2183526019  : public Attribute_t435654298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T2183526019_H
#ifndef UNITYEVENT_T3599292940_H
#define UNITYEVENT_T3599292940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t3599292940  : public UnityEventBase_t3586259038
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t2903489424* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t3599292940, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2903489424* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2903489424** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2903489424* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T3599292940_H
#ifndef DATASTREAMTYPE_T3872730065_H
#define DATASTREAMTYPE_T3872730065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DataStreamType
struct  DataStreamType_t3872730065 
{
public:
	// System.Int32 UnityEngine.Playables.DataStreamType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataStreamType_t3872730065, ___value___1)); }
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
#endif // DATASTREAMTYPE_T3872730065_H
#ifndef OBJECT_T901498535_H
#define OBJECT_T901498535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t901498535  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t901498535, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t901498535_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t901498535_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t901498535_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t901498535_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T901498535_H
#ifndef PLAYABLEOUTPUTHANDLE_T563105626_H
#define PLAYABLEOUTPUTHANDLE_T563105626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t563105626 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.Int32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	int32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t563105626, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t563105626, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T563105626_H
#ifndef FOGMODE_T1311374406_H
#define FOGMODE_T1311374406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FogMode
struct  FogMode_t1311374406 
{
public:
	// System.Int32 UnityEngine.FogMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FogMode_t1311374406, ___value___1)); }
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
#endif // FOGMODE_T1311374406_H
#ifndef STENCILOP_T590205342_H
#define STENCILOP_T590205342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.StencilOp
struct  StencilOp_t590205342 
{
public:
	// System.Int32 UnityEngine.Rendering.StencilOp::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StencilOp_t590205342, ___value___1)); }
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
#endif // STENCILOP_T590205342_H
#ifndef COMPAREFUNCTION_T2804051355_H
#define COMPAREFUNCTION_T2804051355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CompareFunction
struct  CompareFunction_t2804051355 
{
public:
	// System.Int32 UnityEngine.Rendering.CompareFunction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompareFunction_t2804051355, ___value___1)); }
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
#endif // COMPAREFUNCTION_T2804051355_H
#ifndef RENDERTEXTUREMEMORYLESS_T3248230988_H
#define RENDERTEXTUREMEMORYLESS_T3248230988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureMemoryless
struct  RenderTextureMemoryless_t3248230988 
{
public:
	// System.Int32 UnityEngine.RenderTextureMemoryless::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureMemoryless_t3248230988, ___value___1)); }
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
#endif // RENDERTEXTUREMEMORYLESS_T3248230988_H
#ifndef RENDERTEXTUREREADWRITE_T3660857484_H
#define RENDERTEXTUREREADWRITE_T3660857484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureReadWrite
struct  RenderTextureReadWrite_t3660857484 
{
public:
	// System.Int32 UnityEngine.RenderTextureReadWrite::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureReadWrite_t3660857484, ___value___1)); }
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
#endif // RENDERTEXTUREREADWRITE_T3660857484_H
#ifndef RENDERTEXTURECREATIONFLAGS_T3660577741_H
#define RENDERTEXTURECREATIONFLAGS_T3660577741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureCreationFlags
struct  RenderTextureCreationFlags_t3660577741 
{
public:
	// System.Int32 UnityEngine.RenderTextureCreationFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureCreationFlags_t3660577741, ___value___1)); }
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
#endif // RENDERTEXTURECREATIONFLAGS_T3660577741_H
#ifndef VRTEXTUREUSAGE_T3095715278_H
#define VRTEXTUREUSAGE_T3095715278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.VRTextureUsage
struct  VRTextureUsage_t3095715278 
{
public:
	// System.Int32 UnityEngine.VRTextureUsage::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(VRTextureUsage_t3095715278, ___value___1)); }
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
#endif // VRTEXTUREUSAGE_T3095715278_H
#ifndef RENDERTEXTUREFORMAT_T2075357257_H
#define RENDERTEXTUREFORMAT_T2075357257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureFormat
struct  RenderTextureFormat_t2075357257 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t2075357257, ___value___1)); }
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
#endif // RENDERTEXTUREFORMAT_T2075357257_H
#ifndef COLORWRITEMASK_T2595722072_H
#define COLORWRITEMASK_T2595722072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ColorWriteMask
struct  ColorWriteMask_t2595722072 
{
public:
	// System.Int32 UnityEngine.Rendering.ColorWriteMask::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ColorWriteMask_t2595722072, ___value___1)); }
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
#endif // COLORWRITEMASK_T2595722072_H
#ifndef CUBEMAPFACE_T3552184998_H
#define CUBEMAPFACE_T3552184998_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CubemapFace
struct  CubemapFace_t3552184998 
{
public:
	// System.Int32 UnityEngine.CubemapFace::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CubemapFace_t3552184998, ___value___1)); }
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
#endif // CUBEMAPFACE_T3552184998_H
#ifndef TEXTUREWRAPMODE_T1451071088_H
#define TEXTUREWRAPMODE_T1451071088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t1451071088 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureWrapMode_t1451071088, ___value___1)); }
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
#endif // TEXTUREWRAPMODE_T1451071088_H
#ifndef FILTERMODE_T1339145531_H
#define FILTERMODE_T1339145531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FilterMode
struct  FilterMode_t1339145531 
{
public:
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FilterMode_t1339145531, ___value___1)); }
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
#endif // FILTERMODE_T1339145531_H
#ifndef COLORSPACE_T290971152_H
#define COLORSPACE_T290971152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ColorSpace
struct  ColorSpace_t290971152 
{
public:
	// System.Int32 UnityEngine.ColorSpace::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ColorSpace_t290971152, ___value___1)); }
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
#endif // COLORSPACE_T290971152_H
#ifndef MESHTOPOLOGY_T3919849457_H
#define MESHTOPOLOGY_T3919849457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshTopology
struct  MeshTopology_t3919849457 
{
public:
	// System.Int32 UnityEngine.MeshTopology::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MeshTopology_t3919849457, ___value___1)); }
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
#endif // MESHTOPOLOGY_T3919849457_H
#ifndef DEPTHTEXTUREMODE_T2146978591_H
#define DEPTHTEXTUREMODE_T2146978591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DepthTextureMode
struct  DepthTextureMode_t2146978591 
{
public:
	// System.Int32 UnityEngine.DepthTextureMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DepthTextureMode_t2146978591, ___value___1)); }
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
#endif // DEPTHTEXTUREMODE_T2146978591_H
#ifndef CAMERACLEARFLAGS_T4270194970_H
#define CAMERACLEARFLAGS_T4270194970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CameraClearFlags
struct  CameraClearFlags_t4270194970 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraClearFlags_t4270194970, ___value___1)); }
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
#endif // CAMERACLEARFLAGS_T4270194970_H
#ifndef TEXTUREFORMAT_T991911744_H
#define TEXTUREFORMAT_T991911744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t991911744 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureFormat_t991911744, ___value___1)); }
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
#endif // TEXTUREFORMAT_T991911744_H
#ifndef SHADOWSAMPLINGMODE_T4148968646_H
#define SHADOWSAMPLINGMODE_T4148968646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ShadowSamplingMode
struct  ShadowSamplingMode_t4148968646 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowSamplingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ShadowSamplingMode_t4148968646, ___value___1)); }
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
#endif // SHADOWSAMPLINGMODE_T4148968646_H
#ifndef DELEGATE_T1041590898_H
#define DELEGATE_T1041590898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1041590898  : public RuntimeObject
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
	DelegateData_t3209800765 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1041590898, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1041590898, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1041590898, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1041590898, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1041590898, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1041590898, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1041590898, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1041590898, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1041590898, ___data_8)); }
	inline DelegateData_t3209800765 * get_data_8() const { return ___data_8; }
	inline DelegateData_t3209800765 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t3209800765 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1041590898_H
#ifndef TEXTAREAATTRIBUTE_T1707364797_H
#define TEXTAREAATTRIBUTE_T1707364797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAreaAttribute
struct  TextAreaAttribute_t1707364797  : public PropertyAttribute_t3976512414
{
public:
	// System.Int32 UnityEngine.TextAreaAttribute::minLines
	int32_t ___minLines_0;
	// System.Int32 UnityEngine.TextAreaAttribute::maxLines
	int32_t ___maxLines_1;

public:
	inline static int32_t get_offset_of_minLines_0() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t1707364797, ___minLines_0)); }
	inline int32_t get_minLines_0() const { return ___minLines_0; }
	inline int32_t* get_address_of_minLines_0() { return &___minLines_0; }
	inline void set_minLines_0(int32_t value)
	{
		___minLines_0 = value;
	}

	inline static int32_t get_offset_of_maxLines_1() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t1707364797, ___maxLines_1)); }
	inline int32_t get_maxLines_1() const { return ___maxLines_1; }
	inline int32_t* get_address_of_maxLines_1() { return &___maxLines_1; }
	inline void set_maxLines_1(int32_t value)
	{
		___maxLines_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTAREAATTRIBUTE_T1707364797_H
#ifndef UNITYEVENTCALLSTATE_T1325771481_H
#define UNITYEVENTCALLSTATE_T1325771481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventCallState
struct  UnityEventCallState_t1325771481 
{
public:
	// System.Int32 UnityEngine.Events.UnityEventCallState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityEventCallState_t1325771481, ___value___1)); }
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
#endif // UNITYEVENTCALLSTATE_T1325771481_H
#ifndef LOGTYPE_T1388608486_H
#define LOGTYPE_T1388608486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t1388608486 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t1388608486, ___value___1)); }
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
#endif // LOGTYPE_T1388608486_H
#ifndef PERSISTENTLISTENERMODE_T4143516558_H
#define PERSISTENTLISTENERMODE_T4143516558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentListenerMode
struct  PersistentListenerMode_t4143516558 
{
public:
	// System.Int32 UnityEngine.Events.PersistentListenerMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PersistentListenerMode_t4143516558, ___value___1)); }
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
#endif // PERSISTENTLISTENERMODE_T4143516558_H
#ifndef KEYCODE_T371140592_H
#define KEYCODE_T371140592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t371140592 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t371140592, ___value___1)); }
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
#endif // KEYCODE_T371140592_H
#ifndef MATHFINTERNAL_T742220681_H
#define MATHFINTERNAL_T742220681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.MathfInternal
struct  MathfInternal_t742220681 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MathfInternal_t742220681__padding[1];
	};

public:
};

struct MathfInternal_t742220681_StaticFields
{
public:
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinNormal
	float ___FloatMinNormal_0;
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinDenormal
	float ___FloatMinDenormal_1;
	// System.Boolean UnityEngineInternal.MathfInternal::IsFlushToZeroEnabled
	bool ___IsFlushToZeroEnabled_2;

public:
	inline static int32_t get_offset_of_FloatMinNormal_0() { return static_cast<int32_t>(offsetof(MathfInternal_t742220681_StaticFields, ___FloatMinNormal_0)); }
	inline float get_FloatMinNormal_0() const { return ___FloatMinNormal_0; }
	inline float* get_address_of_FloatMinNormal_0() { return &___FloatMinNormal_0; }
	inline void set_FloatMinNormal_0(float value)
	{
		___FloatMinNormal_0 = value;
	}

	inline static int32_t get_offset_of_FloatMinDenormal_1() { return static_cast<int32_t>(offsetof(MathfInternal_t742220681_StaticFields, ___FloatMinDenormal_1)); }
	inline float get_FloatMinDenormal_1() const { return ___FloatMinDenormal_1; }
	inline float* get_address_of_FloatMinDenormal_1() { return &___FloatMinDenormal_1; }
	inline void set_FloatMinDenormal_1(float value)
	{
		___FloatMinDenormal_1 = value;
	}

	inline static int32_t get_offset_of_IsFlushToZeroEnabled_2() { return static_cast<int32_t>(offsetof(MathfInternal_t742220681_StaticFields, ___IsFlushToZeroEnabled_2)); }
	inline bool get_IsFlushToZeroEnabled_2() const { return ___IsFlushToZeroEnabled_2; }
	inline bool* get_address_of_IsFlushToZeroEnabled_2() { return &___IsFlushToZeroEnabled_2; }
	inline void set_IsFlushToZeroEnabled_2(bool value)
	{
		___IsFlushToZeroEnabled_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHFINTERNAL_T742220681_H
#ifndef PLANE_T4203103218_H
#define PLANE_T4203103218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Plane
struct  Plane_t4203103218 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t3184433065  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t4203103218, ___m_Normal_0)); }
	inline Vector3_t3184433065  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t3184433065 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t3184433065  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t4203103218, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANE_T4203103218_H
#ifndef TOOLTIPATTRIBUTE_T346350918_H
#define TOOLTIPATTRIBUTE_T346350918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TooltipAttribute
struct  TooltipAttribute_t346350918  : public PropertyAttribute_t3976512414
{
public:
	// System.String UnityEngine.TooltipAttribute::tooltip
	String_t* ___tooltip_0;

public:
	inline static int32_t get_offset_of_tooltip_0() { return static_cast<int32_t>(offsetof(TooltipAttribute_t346350918, ___tooltip_0)); }
	inline String_t* get_tooltip_0() const { return ___tooltip_0; }
	inline String_t** get_address_of_tooltip_0() { return &___tooltip_0; }
	inline void set_tooltip_0(String_t* value)
	{
		___tooltip_0 = value;
		Il2CppCodeGenWriteBarrier((&___tooltip_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOOLTIPATTRIBUTE_T346350918_H
#ifndef SPACEATTRIBUTE_T2235398678_H
#define SPACEATTRIBUTE_T2235398678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpaceAttribute
struct  SpaceAttribute_t2235398678  : public PropertyAttribute_t3976512414
{
public:
	// System.Single UnityEngine.SpaceAttribute::height
	float ___height_0;

public:
	inline static int32_t get_offset_of_height_0() { return static_cast<int32_t>(offsetof(SpaceAttribute_t2235398678, ___height_0)); }
	inline float get_height_0() const { return ___height_0; }
	inline float* get_address_of_height_0() { return &___height_0; }
	inline void set_height_0(float value)
	{
		___height_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACEATTRIBUTE_T2235398678_H
#ifndef RANGEATTRIBUTE_T210915677_H
#define RANGEATTRIBUTE_T210915677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RangeAttribute
struct  RangeAttribute_t210915677  : public PropertyAttribute_t3976512414
{
public:
	// System.Single UnityEngine.RangeAttribute::min
	float ___min_0;
	// System.Single UnityEngine.RangeAttribute::max
	float ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(RangeAttribute_t210915677, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(RangeAttribute_t210915677, ___max_1)); }
	inline float get_max_1() const { return ___max_1; }
	inline float* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(float value)
	{
		___max_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEATTRIBUTE_T210915677_H
#ifndef TEXTUREDIMENSION_T2762496401_H
#define TEXTUREDIMENSION_T2762496401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.TextureDimension
struct  TextureDimension_t2762496401 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureDimension_t2762496401, ___value___1)); }
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
#endif // TEXTUREDIMENSION_T2762496401_H
#ifndef RAY_T620434639_H
#define RAY_T620434639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t620434639 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t3184433065  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t3184433065  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t620434639, ___m_Origin_0)); }
	inline Vector3_t3184433065  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t3184433065 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t3184433065  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t620434639, ___m_Direction_1)); }
	inline Vector3_t3184433065  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t3184433065 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t3184433065  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T620434639_H
#ifndef TRACKEDREFERENCE_T3674880891_H
#define TRACKEDREFERENCE_T3674880891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TrackedReference
struct  TrackedReference_t3674880891  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t3674880891, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t3674880891_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t3674880891_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // TRACKEDREFERENCE_T3674880891_H
#ifndef TOUCHSCREENKEYBOARDTYPE_T1268221849_H
#define TOUCHSCREENKEYBOARDTYPE_T1268221849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_t1268221849 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_t1268221849, ___value___1)); }
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
#endif // TOUCHSCREENKEYBOARDTYPE_T1268221849_H
#ifndef SCRIPTABLEOBJECT_T1540928923_H
#define SCRIPTABLEOBJECT_T1540928923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t1540928923  : public Object_t901498535
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t1540928923_marshaled_pinvoke : public Object_t901498535_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t1540928923_marshaled_com : public Object_t901498535_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T1540928923_H
#ifndef SCRIPTPLAYABLEOUTPUT_T3524569365_H
#define SCRIPTPLAYABLEOUTPUT_T3524569365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.ScriptPlayableOutput
struct  ScriptPlayableOutput_t3524569365 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.ScriptPlayableOutput::m_Handle
	PlayableOutputHandle_t563105626  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayableOutput_t3524569365, ___m_Handle_0)); }
	inline PlayableOutputHandle_t563105626  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t563105626 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t563105626  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTPLAYABLEOUTPUT_T3524569365_H
#ifndef MULTICASTDELEGATE_T1463945573_H
#define MULTICASTDELEGATE_T1463945573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t1463945573  : public Delegate_t1041590898
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t1463945573 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t1463945573 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1463945573, ___prev_9)); }
	inline MulticastDelegate_t1463945573 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t1463945573 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t1463945573 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1463945573, ___kpm_next_10)); }
	inline MulticastDelegate_t1463945573 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t1463945573 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t1463945573 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T1463945573_H
#ifndef PLAYABLEBINDING_T3539306265_H
#define PLAYABLEBINDING_T3539306265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBinding
struct  PlayableBinding_t3539306265 
{
public:
	union
	{
		struct
		{
			// System.String UnityEngine.Playables.PlayableBinding::<streamName>k__BackingField
			String_t* ___U3CstreamNameU3Ek__BackingField_2;
			// UnityEngine.Playables.DataStreamType UnityEngine.Playables.PlayableBinding::<streamType>k__BackingField
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			// UnityEngine.Object UnityEngine.Playables.PlayableBinding::<sourceObject>k__BackingField
			Object_t901498535 * ___U3CsourceObjectU3Ek__BackingField_4;
			// System.Type UnityEngine.Playables.PlayableBinding::<sourceBindingType>k__BackingField
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t3539306265__padding[1];
	};

public:
	inline static int32_t get_offset_of_U3CstreamNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t3539306265, ___U3CstreamNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CstreamNameU3Ek__BackingField_2() const { return ___U3CstreamNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CstreamNameU3Ek__BackingField_2() { return &___U3CstreamNameU3Ek__BackingField_2; }
	inline void set_U3CstreamNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CstreamNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstreamNameU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CstreamTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t3539306265, ___U3CstreamTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CstreamTypeU3Ek__BackingField_3() const { return ___U3CstreamTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CstreamTypeU3Ek__BackingField_3() { return &___U3CstreamTypeU3Ek__BackingField_3; }
	inline void set_U3CstreamTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CstreamTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsourceObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t3539306265, ___U3CsourceObjectU3Ek__BackingField_4)); }
	inline Object_t901498535 * get_U3CsourceObjectU3Ek__BackingField_4() const { return ___U3CsourceObjectU3Ek__BackingField_4; }
	inline Object_t901498535 ** get_address_of_U3CsourceObjectU3Ek__BackingField_4() { return &___U3CsourceObjectU3Ek__BackingField_4; }
	inline void set_U3CsourceObjectU3Ek__BackingField_4(Object_t901498535 * value)
	{
		___U3CsourceObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceObjectU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t3539306265, ___U3CsourceBindingTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CsourceBindingTypeU3Ek__BackingField_5() const { return ___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return &___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline void set_U3CsourceBindingTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CsourceBindingTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceBindingTypeU3Ek__BackingField_5), value);
	}
};

struct PlayableBinding_t3539306265_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t2180146276* ___None_0;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_1;

public:
	inline static int32_t get_offset_of_None_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t3539306265_StaticFields, ___None_0)); }
	inline PlayableBindingU5BU5D_t2180146276* get_None_0() const { return ___None_0; }
	inline PlayableBindingU5BU5D_t2180146276** get_address_of_None_0() { return &___None_0; }
	inline void set_None_0(PlayableBindingU5BU5D_t2180146276* value)
	{
		___None_0 = value;
		Il2CppCodeGenWriteBarrier((&___None_0), value);
	}

	inline static int32_t get_offset_of_DefaultDuration_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t3539306265_StaticFields, ___DefaultDuration_1)); }
	inline double get_DefaultDuration_1() const { return ___DefaultDuration_1; }
	inline double* get_address_of_DefaultDuration_1() { return &___DefaultDuration_1; }
	inline void set_DefaultDuration_1(double value)
	{
		___DefaultDuration_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t3539306265_marshaled_pinvoke
{
	union
	{
		struct
		{
			char* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t901498535_marshaled_pinvoke ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t3539306265__padding[1];
	};
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t3539306265_marshaled_com
{
	union
	{
		struct
		{
			Il2CppChar* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t901498535_marshaled_com* ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t3539306265__padding[1];
	};
};
#endif // PLAYABLEBINDING_T3539306265_H
#ifndef LOGGER_T1222904994_H
#define LOGGER_T1222904994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Logger
struct  Logger_t1222904994  : public RuntimeObject
{
public:
	// UnityEngine.ILogHandler UnityEngine.Logger::<logHandler>k__BackingField
	RuntimeObject* ___U3ClogHandlerU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Logger::<logEnabled>k__BackingField
	bool ___U3ClogEnabledU3Ek__BackingField_1;
	// UnityEngine.LogType UnityEngine.Logger::<filterLogType>k__BackingField
	int32_t ___U3CfilterLogTypeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3ClogHandlerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Logger_t1222904994, ___U3ClogHandlerU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3ClogHandlerU3Ek__BackingField_0() const { return ___U3ClogHandlerU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3ClogHandlerU3Ek__BackingField_0() { return &___U3ClogHandlerU3Ek__BackingField_0; }
	inline void set_U3ClogHandlerU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3ClogHandlerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClogHandlerU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3ClogEnabledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Logger_t1222904994, ___U3ClogEnabledU3Ek__BackingField_1)); }
	inline bool get_U3ClogEnabledU3Ek__BackingField_1() const { return ___U3ClogEnabledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3ClogEnabledU3Ek__BackingField_1() { return &___U3ClogEnabledU3Ek__BackingField_1; }
	inline void set_U3ClogEnabledU3Ek__BackingField_1(bool value)
	{
		___U3ClogEnabledU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CfilterLogTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Logger_t1222904994, ___U3CfilterLogTypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CfilterLogTypeU3Ek__BackingField_2() const { return ___U3CfilterLogTypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CfilterLogTypeU3Ek__BackingField_2() { return &___U3CfilterLogTypeU3Ek__BackingField_2; }
	inline void set_U3CfilterLogTypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CfilterLogTypeU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGGER_T1222904994_H
#ifndef RENDERTEXTUREDESCRIPTOR_T3314846231_H
#define RENDERTEXTUREDESCRIPTOR_T3314846231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTextureDescriptor
struct  RenderTextureDescriptor_t3314846231 
{
public:
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// UnityEngine.RenderTextureFormat UnityEngine.RenderTextureDescriptor::<colorFormat>k__BackingField
	int32_t ___U3CcolorFormatU3Ek__BackingField_4;
	// System.Int32 UnityEngine.RenderTextureDescriptor::_depthBufferBits
	int32_t ____depthBufferBits_5;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_7;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_8;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_9;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_10;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CwidthU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t3314846231, ___U3CwidthU3Ek__BackingField_0)); }
	inline int32_t get_U3CwidthU3Ek__BackingField_0() const { return ___U3CwidthU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CwidthU3Ek__BackingField_0() { return &___U3CwidthU3Ek__BackingField_0; }
	inline void set_U3CwidthU3Ek__BackingField_0(int32_t value)
	{
		___U3CwidthU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CheightU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t3314846231, ___U3CheightU3Ek__BackingField_1)); }
	inline int32_t get_U3CheightU3Ek__BackingField_1() const { return ___U3CheightU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CheightU3Ek__BackingField_1() { return &___U3CheightU3Ek__BackingField_1; }
	inline void set_U3CheightU3Ek__BackingField_1(int32_t value)
	{
		___U3CheightU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmsaaSamplesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t3314846231, ___U3CmsaaSamplesU3Ek__BackingField_2)); }
	inline int32_t get_U3CmsaaSamplesU3Ek__BackingField_2() const { return ___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CmsaaSamplesU3Ek__BackingField_2() { return &___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline void set_U3CmsaaSamplesU3Ek__BackingField_2(int32_t value)
	{
		___U3CmsaaSamplesU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CvolumeDepthU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t3314846231, ___U3CvolumeDepthU3Ek__BackingField_3)); }
	inline int32_t get_U3CvolumeDepthU3Ek__BackingField_3() const { return ___U3CvolumeDepthU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CvolumeDepthU3Ek__BackingField_3() { return &___U3CvolumeDepthU3Ek__BackingField_3; }
	inline void set_U3CvolumeDepthU3Ek__BackingField_3(int32_t value)
	{
		___U3CvolumeDepthU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CcolorFormatU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t3314846231, ___U3CcolorFormatU3Ek__BackingField_4)); }
	inline int32_t get_U3CcolorFormatU3Ek__BackingField_4() const { return ___U3CcolorFormatU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CcolorFormatU3Ek__BackingField_4() { return &___U3CcolorFormatU3Ek__BackingField_4; }
	inline void set_U3CcolorFormatU3Ek__BackingField_4(int32_t value)
	{
		___U3CcolorFormatU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of__depthBufferBits_5() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t3314846231, ____depthBufferBits_5)); }
	inline int32_t get__depthBufferBits_5() const { return ____depthBufferBits_5; }
	inline int32_t* get_address_of__depthBufferBits_5() { return &____depthBufferBits_5; }
	inline void set__depthBufferBits_5(int32_t value)
	{
		____depthBufferBits_5 = value;
	}

	inline static int32_t get_offset_of_U3CdimensionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t3314846231, ___U3CdimensionU3Ek__BackingField_7)); }
	inline int32_t get_U3CdimensionU3Ek__BackingField_7() const { return ___U3CdimensionU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CdimensionU3Ek__BackingField_7() { return &___U3CdimensionU3Ek__BackingField_7; }
	inline void set_U3CdimensionU3Ek__BackingField_7(int32_t value)
	{
		___U3CdimensionU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CshadowSamplingModeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t3314846231, ___U3CshadowSamplingModeU3Ek__BackingField_8)); }
	inline int32_t get_U3CshadowSamplingModeU3Ek__BackingField_8() const { return ___U3CshadowSamplingModeU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CshadowSamplingModeU3Ek__BackingField_8() { return &___U3CshadowSamplingModeU3Ek__BackingField_8; }
	inline void set_U3CshadowSamplingModeU3Ek__BackingField_8(int32_t value)
	{
		___U3CshadowSamplingModeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CvrUsageU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t3314846231, ___U3CvrUsageU3Ek__BackingField_9)); }
	inline int32_t get_U3CvrUsageU3Ek__BackingField_9() const { return ___U3CvrUsageU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CvrUsageU3Ek__BackingField_9() { return &___U3CvrUsageU3Ek__BackingField_9; }
	inline void set_U3CvrUsageU3Ek__BackingField_9(int32_t value)
	{
		___U3CvrUsageU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of__flags_10() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t3314846231, ____flags_10)); }
	inline int32_t get__flags_10() const { return ____flags_10; }
	inline int32_t* get_address_of__flags_10() { return &____flags_10; }
	inline void set__flags_10(int32_t value)
	{
		____flags_10 = value;
	}

	inline static int32_t get_offset_of_U3CmemorylessU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t3314846231, ___U3CmemorylessU3Ek__BackingField_11)); }
	inline int32_t get_U3CmemorylessU3Ek__BackingField_11() const { return ___U3CmemorylessU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CmemorylessU3Ek__BackingField_11() { return &___U3CmemorylessU3Ek__BackingField_11; }
	inline void set_U3CmemorylessU3Ek__BackingField_11(int32_t value)
	{
		___U3CmemorylessU3Ek__BackingField_11 = value;
	}
};

struct RenderTextureDescriptor_t3314846231_StaticFields
{
public:
	// System.Int32[] UnityEngine.RenderTextureDescriptor::depthFormatBits
	Int32U5BU5D_t2679505748* ___depthFormatBits_6;

public:
	inline static int32_t get_offset_of_depthFormatBits_6() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t3314846231_StaticFields, ___depthFormatBits_6)); }
	inline Int32U5BU5D_t2679505748* get_depthFormatBits_6() const { return ___depthFormatBits_6; }
	inline Int32U5BU5D_t2679505748** get_address_of_depthFormatBits_6() { return &___depthFormatBits_6; }
	inline void set_depthFormatBits_6(Int32U5BU5D_t2679505748* value)
	{
		___depthFormatBits_6 = value;
		Il2CppCodeGenWriteBarrier((&___depthFormatBits_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTUREDESCRIPTOR_T3314846231_H
#ifndef PERSISTENTCALL_T100433640_H
#define PERSISTENTCALL_T100433640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCall
struct  PersistentCall_t100433640  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.PersistentCall::m_Target
	Object_t901498535 * ___m_Target_0;
	// System.String UnityEngine.Events.PersistentCall::m_MethodName
	String_t* ___m_MethodName_1;
	// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::m_Mode
	int32_t ___m_Mode_2;
	// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::m_Arguments
	ArgumentCache_t1981503656 * ___m_Arguments_3;
	// UnityEngine.Events.UnityEventCallState UnityEngine.Events.PersistentCall::m_CallState
	int32_t ___m_CallState_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(PersistentCall_t100433640, ___m_Target_0)); }
	inline Object_t901498535 * get_m_Target_0() const { return ___m_Target_0; }
	inline Object_t901498535 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(Object_t901498535 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_MethodName_1() { return static_cast<int32_t>(offsetof(PersistentCall_t100433640, ___m_MethodName_1)); }
	inline String_t* get_m_MethodName_1() const { return ___m_MethodName_1; }
	inline String_t** get_address_of_m_MethodName_1() { return &___m_MethodName_1; }
	inline void set_m_MethodName_1(String_t* value)
	{
		___m_MethodName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_MethodName_1), value);
	}

	inline static int32_t get_offset_of_m_Mode_2() { return static_cast<int32_t>(offsetof(PersistentCall_t100433640, ___m_Mode_2)); }
	inline int32_t get_m_Mode_2() const { return ___m_Mode_2; }
	inline int32_t* get_address_of_m_Mode_2() { return &___m_Mode_2; }
	inline void set_m_Mode_2(int32_t value)
	{
		___m_Mode_2 = value;
	}

	inline static int32_t get_offset_of_m_Arguments_3() { return static_cast<int32_t>(offsetof(PersistentCall_t100433640, ___m_Arguments_3)); }
	inline ArgumentCache_t1981503656 * get_m_Arguments_3() const { return ___m_Arguments_3; }
	inline ArgumentCache_t1981503656 ** get_address_of_m_Arguments_3() { return &___m_Arguments_3; }
	inline void set_m_Arguments_3(ArgumentCache_t1981503656 * value)
	{
		___m_Arguments_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Arguments_3), value);
	}

	inline static int32_t get_offset_of_m_CallState_4() { return static_cast<int32_t>(offsetof(PersistentCall_t100433640, ___m_CallState_4)); }
	inline int32_t get_m_CallState_4() const { return ___m_CallState_4; }
	inline int32_t* get_address_of_m_CallState_4() { return &___m_CallState_4; }
	inline void set_m_CallState_4(int32_t value)
	{
		___m_CallState_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALL_T100433640_H
#ifndef UNITYACTION_T301435589_H
#define UNITYACTION_T301435589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t301435589  : public MulticastDelegate_t1463945573
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T301435589_H
#ifndef PLAYABLEASSET_T721218384_H
#define PLAYABLEASSET_T721218384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableAsset
struct  PlayableAsset_t721218384  : public ScriptableObject_t1540928923
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEASSET_T721218384_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1400 = { sizeof (FogMode_t1311374406)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1400[4] = 
{
	FogMode_t1311374406::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1401 = { sizeof (CameraClearFlags_t4270194970)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1401[6] = 
{
	CameraClearFlags_t4270194970::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1402 = { sizeof (DepthTextureMode_t2146978591)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1402[5] = 
{
	DepthTextureMode_t2146978591::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1403 = { sizeof (MeshTopology_t3919849457)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1403[6] = 
{
	MeshTopology_t3919849457::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1404 = { sizeof (ColorSpace_t290971152)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1404[4] = 
{
	ColorSpace_t290971152::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1405 = { sizeof (FilterMode_t1339145531)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1405[4] = 
{
	FilterMode_t1339145531::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1406 = { sizeof (TextureWrapMode_t1451071088)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1406[5] = 
{
	TextureWrapMode_t1451071088::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1407 = { sizeof (TextureFormat_t991911744)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1407[54] = 
{
	TextureFormat_t991911744::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1408 = { sizeof (CubemapFace_t3552184998)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1408[8] = 
{
	CubemapFace_t3552184998::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1409 = { sizeof (RenderTextureFormat_t2075357257)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1409[28] = 
{
	RenderTextureFormat_t2075357257::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1410 = { sizeof (VRTextureUsage_t3095715278)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1410[4] = 
{
	VRTextureUsage_t3095715278::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1411 = { sizeof (RenderTextureCreationFlags_t3660577741)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1411[8] = 
{
	RenderTextureCreationFlags_t3660577741::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1412 = { sizeof (RenderTextureReadWrite_t3660857484)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1412[4] = 
{
	RenderTextureReadWrite_t3660857484::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1413 = { sizeof (RenderTextureMemoryless_t3248230988)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1413[5] = 
{
	RenderTextureMemoryless_t3248230988::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1414 = { sizeof (CompareFunction_t2804051355)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1414[10] = 
{
	CompareFunction_t2804051355::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1415 = { sizeof (ColorWriteMask_t2595722072)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1415[6] = 
{
	ColorWriteMask_t2595722072::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1416 = { sizeof (StencilOp_t590205342)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1416[9] = 
{
	StencilOp_t590205342::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1417 = { sizeof (ShadowSamplingMode_t4148968646)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1417[4] = 
{
	ShadowSamplingMode_t4148968646::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1418 = { sizeof (TextureDimension_t2762496401)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1418[9] = 
{
	TextureDimension_t2762496401::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1419 = { sizeof (KeyCode_t371140592)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1419[322] = 
{
	KeyCode_t371140592::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1420 = { sizeof (ManagedStreamHelpers_t4167950056), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1421 = { sizeof (MathfInternal_t742220681)+ sizeof (RuntimeObject), sizeof(MathfInternal_t742220681 ), sizeof(MathfInternal_t742220681_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1421[3] = 
{
	MathfInternal_t742220681_StaticFields::get_offset_of_FloatMinNormal_0(),
	MathfInternal_t742220681_StaticFields::get_offset_of_FloatMinDenormal_1(),
	MathfInternal_t742220681_StaticFields::get_offset_of_IsFlushToZeroEnabled_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1422 = { sizeof (ScriptingUtils_t3031299973), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1423 = { sizeof (SendMouseEvents_t1126542304), -1, sizeof(SendMouseEvents_t1126542304_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1423[5] = 
{
	SendMouseEvents_t1126542304_StaticFields::get_offset_of_s_MouseUsed_0(),
	SendMouseEvents_t1126542304_StaticFields::get_offset_of_m_LastHit_1(),
	SendMouseEvents_t1126542304_StaticFields::get_offset_of_m_MouseDownHit_2(),
	SendMouseEvents_t1126542304_StaticFields::get_offset_of_m_CurrentHit_3(),
	SendMouseEvents_t1126542304_StaticFields::get_offset_of_m_Cameras_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1424 = { sizeof (HitInfo_t2199518640)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1424[2] = 
{
	HitInfo_t2199518640::get_offset_of_target_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HitInfo_t2199518640::get_offset_of_camera_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1425 = { sizeof (Plane_t4203103218)+ sizeof (RuntimeObject), sizeof(Plane_t4203103218 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1425[2] = 
{
	Plane_t4203103218::get_offset_of_m_Normal_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Plane_t4203103218::get_offset_of_m_Distance_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1426 = { sizeof (PropertyAttribute_t3976512414), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1427 = { sizeof (TooltipAttribute_t346350918), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1427[1] = 
{
	TooltipAttribute_t346350918::get_offset_of_tooltip_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1428 = { sizeof (SpaceAttribute_t2235398678), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1428[1] = 
{
	SpaceAttribute_t2235398678::get_offset_of_height_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1429 = { sizeof (RangeAttribute_t210915677), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1429[2] = 
{
	RangeAttribute_t210915677::get_offset_of_min_0(),
	RangeAttribute_t210915677::get_offset_of_max_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1430 = { sizeof (TextAreaAttribute_t1707364797), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1430[2] = 
{
	TextAreaAttribute_t1707364797::get_offset_of_minLines_0(),
	TextAreaAttribute_t1707364797::get_offset_of_maxLines_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1431 = { sizeof (PropertyNameUtils_t1512042562), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1432 = { sizeof (PropertyName_t2320584263)+ sizeof (RuntimeObject), sizeof(PropertyName_t2320584263 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1432[1] = 
{
	PropertyName_t2320584263::get_offset_of_id_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1433 = { sizeof (RangeInt_t3315669467)+ sizeof (RuntimeObject), sizeof(RangeInt_t3315669467 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1433[2] = 
{
	RangeInt_t3315669467::get_offset_of_start_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RangeInt_t3315669467::get_offset_of_length_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1434 = { sizeof (Ray_t620434639)+ sizeof (RuntimeObject), sizeof(Ray_t620434639 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1434[2] = 
{
	Ray_t620434639::get_offset_of_m_Origin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Ray_t620434639::get_offset_of_m_Direction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1435 = { sizeof (Rect_t3321979207)+ sizeof (RuntimeObject), sizeof(Rect_t3321979207 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1435[4] = 
{
	Rect_t3321979207::get_offset_of_m_XMin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t3321979207::get_offset_of_m_YMin_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t3321979207::get_offset_of_m_Width_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t3321979207::get_offset_of_m_Height_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1436 = { sizeof (SelectionBaseAttribute_t3262470767), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1437 = { sizeof (SerializePrivateVariables_t682201003), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1438 = { sizeof (SerializeField_t2338977038), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1439 = { sizeof (PreferBinarySerialization_t3764711515), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1440 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1441 = { sizeof (StackTraceUtility_t3762627447), -1, sizeof(StackTraceUtility_t3762627447_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1441[1] = 
{
	StackTraceUtility_t3762627447_StaticFields::get_offset_of_projectFolder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1442 = { sizeof (UnityException_t832993395), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1443 = { sizeof (RenderTextureDescriptor_t3314846231)+ sizeof (RuntimeObject), sizeof(RenderTextureDescriptor_t3314846231 ), sizeof(RenderTextureDescriptor_t3314846231_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1443[12] = 
{
	RenderTextureDescriptor_t3314846231::get_offset_of_U3CwidthU3Ek__BackingField_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t3314846231::get_offset_of_U3CheightU3Ek__BackingField_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t3314846231::get_offset_of_U3CmsaaSamplesU3Ek__BackingField_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t3314846231::get_offset_of_U3CvolumeDepthU3Ek__BackingField_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t3314846231::get_offset_of_U3CcolorFormatU3Ek__BackingField_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t3314846231::get_offset_of__depthBufferBits_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t3314846231_StaticFields::get_offset_of_depthFormatBits_6(),
	RenderTextureDescriptor_t3314846231::get_offset_of_U3CdimensionU3Ek__BackingField_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t3314846231::get_offset_of_U3CshadowSamplingModeU3Ek__BackingField_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t3314846231::get_offset_of_U3CvrUsageU3Ek__BackingField_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t3314846231::get_offset_of__flags_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RenderTextureDescriptor_t3314846231::get_offset_of_U3CmemorylessU3Ek__BackingField_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1444 = { sizeof (TouchScreenKeyboardType_t1268221849)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1444[12] = 
{
	TouchScreenKeyboardType_t1268221849::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1445 = { sizeof (TrackedReference_t3674880891), sizeof(TrackedReference_t3674880891_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1445[1] = 
{
	TrackedReference_t3674880891::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1446 = { sizeof (PersistentListenerMode_t4143516558)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1446[8] = 
{
	PersistentListenerMode_t4143516558::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1447 = { sizeof (ArgumentCache_t1981503656), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1447[6] = 
{
	ArgumentCache_t1981503656::get_offset_of_m_ObjectArgument_0(),
	ArgumentCache_t1981503656::get_offset_of_m_ObjectArgumentAssemblyTypeName_1(),
	ArgumentCache_t1981503656::get_offset_of_m_IntArgument_2(),
	ArgumentCache_t1981503656::get_offset_of_m_FloatArgument_3(),
	ArgumentCache_t1981503656::get_offset_of_m_StringArgument_4(),
	ArgumentCache_t1981503656::get_offset_of_m_BoolArgument_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1448 = { sizeof (BaseInvokableCall_t4088626022), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1449 = { sizeof (InvokableCall_t2378082960), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1449[1] = 
{
	InvokableCall_t2378082960::get_offset_of_Delegate_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1450 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1450[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1451 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1451[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1452 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1452[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1453 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1453[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1454 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1454[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1455 = { sizeof (UnityEventCallState_t1325771481)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1455[4] = 
{
	UnityEventCallState_t1325771481::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1456 = { sizeof (PersistentCall_t100433640), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1456[5] = 
{
	PersistentCall_t100433640::get_offset_of_m_Target_0(),
	PersistentCall_t100433640::get_offset_of_m_MethodName_1(),
	PersistentCall_t100433640::get_offset_of_m_Mode_2(),
	PersistentCall_t100433640::get_offset_of_m_Arguments_3(),
	PersistentCall_t100433640::get_offset_of_m_CallState_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1457 = { sizeof (PersistentCallGroup_t2012843578), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1457[1] = 
{
	PersistentCallGroup_t2012843578::get_offset_of_m_Calls_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1458 = { sizeof (InvokableCallList_t179046848), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1458[4] = 
{
	InvokableCallList_t179046848::get_offset_of_m_PersistentCalls_0(),
	InvokableCallList_t179046848::get_offset_of_m_RuntimeCalls_1(),
	InvokableCallList_t179046848::get_offset_of_m_ExecutingCalls_2(),
	InvokableCallList_t179046848::get_offset_of_m_NeedsUpdate_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1459 = { sizeof (UnityEventBase_t3586259038), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1459[4] = 
{
	UnityEventBase_t3586259038::get_offset_of_m_Calls_0(),
	UnityEventBase_t3586259038::get_offset_of_m_PersistentCalls_1(),
	UnityEventBase_t3586259038::get_offset_of_m_TypeName_2(),
	UnityEventBase_t3586259038::get_offset_of_m_CallsDirty_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1460 = { sizeof (UnityAction_t301435589), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1461 = { sizeof (UnityEvent_t3599292940), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1461[1] = 
{
	UnityEvent_t3599292940::get_offset_of_m_InvokeArray_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1462 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1463 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1463[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1464 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1465 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1465[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1466 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1467 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1467[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1468 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1469 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1469[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1470 = { sizeof (UnityString_t2696659176), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1471 = { sizeof (UnitySynchronizationContext_t3252174936), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1471[2] = 
{
	UnitySynchronizationContext_t3252174936::get_offset_of_m_AsyncWorkQueue_1(),
	UnitySynchronizationContext_t3252174936::get_offset_of_m_MainThreadID_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1472 = { sizeof (WorkRequest_t4272976033)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1472[3] = 
{
	WorkRequest_t4272976033::get_offset_of_m_DelagateCallback_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	WorkRequest_t4272976033::get_offset_of_m_DelagateState_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	WorkRequest_t4272976033::get_offset_of_m_WaitHandle_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1473 = { sizeof (Vector2_t4146574692)+ sizeof (RuntimeObject), sizeof(Vector2_t4146574692 ), sizeof(Vector2_t4146574692_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1473[11] = 
{
	Vector2_t4146574692::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector2_t4146574692::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector2_t4146574692_StaticFields::get_offset_of_zeroVector_2(),
	Vector2_t4146574692_StaticFields::get_offset_of_oneVector_3(),
	Vector2_t4146574692_StaticFields::get_offset_of_upVector_4(),
	Vector2_t4146574692_StaticFields::get_offset_of_downVector_5(),
	Vector2_t4146574692_StaticFields::get_offset_of_leftVector_6(),
	Vector2_t4146574692_StaticFields::get_offset_of_rightVector_7(),
	Vector2_t4146574692_StaticFields::get_offset_of_positiveInfinityVector_8(),
	Vector2_t4146574692_StaticFields::get_offset_of_negativeInfinityVector_9(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1474 = { sizeof (Vector4_t1687527720)+ sizeof (RuntimeObject), sizeof(Vector4_t1687527720 ), sizeof(Vector4_t1687527720_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1474[9] = 
{
	0,
	Vector4_t1687527720::get_offset_of_x_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t1687527720::get_offset_of_y_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t1687527720::get_offset_of_z_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t1687527720::get_offset_of_w_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector4_t1687527720_StaticFields::get_offset_of_zeroVector_5(),
	Vector4_t1687527720_StaticFields::get_offset_of_oneVector_6(),
	Vector4_t1687527720_StaticFields::get_offset_of_positiveInfinityVector_7(),
	Vector4_t1687527720_StaticFields::get_offset_of_negativeInfinityVector_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1475 = { sizeof (WaitForSecondsRealtime_t3598723819), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1475[1] = 
{
	WaitForSecondsRealtime_t3598723819::get_offset_of_waitTime_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1476 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1477 = { sizeof (UnmarshalledAttribute_t2450714283), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1478 = { sizeof (ThreadAndSerializationSafeAttribute_t445065539), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1479 = { sizeof (ReadOnlyAttribute_t394032360), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1480 = { sizeof (ReadWriteAttribute_t4260542049), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1481 = { sizeof (WriteOnlyAttribute_t1821002785), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1482 = { sizeof (DeallocateOnJobCompletionAttribute_t3641115139), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1483 = { sizeof (NativeContainerAttribute_t2989792926), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1484 = { sizeof (NativeContainerSupportsAtomicWriteAttribute_t2830841099), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1485 = { sizeof (NativeContainerSupportsMinMaxWriteRestrictionAttribute_t2183526019), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1486 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1487 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1488 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1489 = { sizeof (PlayableBinding_t3539306265)+ sizeof (RuntimeObject), -1, sizeof(PlayableBinding_t3539306265_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1489[6] = 
{
	PlayableBinding_t3539306265_StaticFields::get_offset_of_None_0(),
	PlayableBinding_t3539306265_StaticFields::get_offset_of_DefaultDuration_1(),
	PlayableBinding_t3539306265::get_offset_of_U3CstreamNameU3Ek__BackingField_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t3539306265::get_offset_of_U3CstreamTypeU3Ek__BackingField_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t3539306265::get_offset_of_U3CsourceObjectU3Ek__BackingField_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t3539306265::get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1490 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1491 = { sizeof (PlayableAsset_t721218384), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1492 = { sizeof (PlayableBehaviour_t4132418085), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1493 = { sizeof (ScriptPlayableOutput_t3524569365)+ sizeof (RuntimeObject), sizeof(ScriptPlayableOutput_t3524569365 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1493[1] = 
{
	ScriptPlayableOutput_t3524569365::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1494 = { sizeof (DefaultValueAttribute_t3973091414), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1494[1] = 
{
	DefaultValueAttribute_t3973091414::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1495 = { sizeof (ExcludeFromDocsAttribute_t2759391063), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1496 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1497 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1498 = { sizeof (Logger_t1222904994), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1498[3] = 
{
	Logger_t1222904994::get_offset_of_U3ClogHandlerU3Ek__BackingField_0(),
	Logger_t1222904994::get_offset_of_U3ClogEnabledU3Ek__BackingField_1(),
	Logger_t1222904994::get_offset_of_U3CfilterLogTypeU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1499 = { sizeof (MessageEventArgs_t4264587123), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1499[2] = 
{
	MessageEventArgs_t4264587123::get_offset_of_playerId_0(),
	MessageEventArgs_t4264587123::get_offset_of_data_1(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
