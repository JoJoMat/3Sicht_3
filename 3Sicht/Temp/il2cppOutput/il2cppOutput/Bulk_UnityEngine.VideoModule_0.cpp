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

// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t845047648;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_t2554532863;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_t2115650218;
// System.String
struct String_t;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_t1855813681;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t476168162;
// System.IAsyncResult
struct IAsyncResult_t3627716878;
// System.AsyncCallback
struct AsyncCallback_t1090529187;
// System.Char[]
struct CharU5BU5D_t3791132852;
// System.Void
struct Void_t1503135557;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2865008173;

extern RuntimeClass* Int64_t1418697003_il2cpp_TypeInfo_var;
extern const uint32_t FrameReadyEventHandler_BeginInvoke_m1865955976_MetadataUsageId;
extern RuntimeClass* Double_t213355342_il2cpp_TypeInfo_var;
extern const uint32_t TimeEventHandler_BeginInvoke_m848754205_MetadataUsageId;



#ifndef U3CMODULEU3E_T2311612696_H
#define U3CMODULEU3E_T2311612696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2311612696 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2311612696_H
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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T2797263942_H
#define VALUETYPE_T2797263942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2797263942  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2797263942_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2797263942_marshaled_com
{
};
#endif // VALUETYPE_T2797263942_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3791132852* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3791132852* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3791132852** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3791132852* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
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
#ifndef DOUBLE_T213355342_H
#define DOUBLE_T213355342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t213355342 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t213355342, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T213355342_H
#ifndef INT64_T1418697003_H
#define INT64_T1418697003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t1418697003 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t1418697003, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T1418697003_H
#ifndef VOID_T1503135557_H
#define VOID_T1503135557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1503135557 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1503135557_H
#ifndef DELEGATE_T4112399284_H
#define DELEGATE_T4112399284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t4112399284  : public RuntimeObject
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
	DelegateData_t2865008173 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t4112399284, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t4112399284, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t4112399284, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t4112399284, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t4112399284, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t4112399284, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t4112399284, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t4112399284, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t4112399284, ___data_8)); }
	inline DelegateData_t2865008173 * get_data_8() const { return ___data_8; }
	inline DelegateData_t2865008173 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t2865008173 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T4112399284_H
#ifndef OBJECT_T2263466870_H
#define OBJECT_T2263466870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t2263466870  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t2263466870, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t2263466870_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t2263466870_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t2263466870_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t2263466870_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T2263466870_H
#ifndef MULTICASTDELEGATE_T77500400_H
#define MULTICASTDELEGATE_T77500400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t77500400  : public Delegate_t4112399284
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t77500400 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t77500400 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t77500400, ___prev_9)); }
	inline MulticastDelegate_t77500400 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t77500400 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t77500400 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t77500400, ___kpm_next_10)); }
	inline MulticastDelegate_t77500400 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t77500400 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t77500400 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T77500400_H
#ifndef COMPONENT_T417348875_H
#define COMPONENT_T417348875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t417348875  : public Object_t2263466870
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T417348875_H
#ifndef ERROREVENTHANDLER_T1855813681_H
#define ERROREVENTHANDLER_T1855813681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct  ErrorEventHandler_t1855813681  : public MulticastDelegate_t77500400
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERROREVENTHANDLER_T1855813681_H
#ifndef TIMEEVENTHANDLER_T476168162_H
#define TIMEEVENTHANDLER_T476168162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct  TimeEventHandler_t476168162  : public MulticastDelegate_t77500400
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEEVENTHANDLER_T476168162_H
#ifndef EVENTHANDLER_T2554532863_H
#define EVENTHANDLER_T2554532863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer/EventHandler
struct  EventHandler_t2554532863  : public MulticastDelegate_t77500400
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_T2554532863_H
#ifndef ASYNCCALLBACK_T1090529187_H
#define ASYNCCALLBACK_T1090529187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t1090529187  : public MulticastDelegate_t77500400
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T1090529187_H
#ifndef BEHAVIOUR_T799294381_H
#define BEHAVIOUR_T799294381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t799294381  : public Component_t417348875
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T799294381_H
#ifndef FRAMEREADYEVENTHANDLER_T2115650218_H
#define FRAMEREADYEVENTHANDLER_T2115650218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct  FrameReadyEventHandler_t2115650218  : public MulticastDelegate_t77500400
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMEREADYEVENTHANDLER_T2115650218_H
#ifndef VIDEOPLAYER_T845047648_H
#define VIDEOPLAYER_T845047648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer
struct  VideoPlayer_t845047648  : public Behaviour_t799294381
{
public:
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_t2554532863 * ___prepareCompleted_2;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_t2554532863 * ___loopPointReached_3;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_t2554532863 * ___started_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_t2554532863 * ___frameDropped_5;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_t1855813681 * ___errorReceived_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_t2554532863 * ___seekCompleted_7;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t476168162 * ___clockResyncOccurred_8;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_t2115650218 * ___frameReady_9;

public:
	inline static int32_t get_offset_of_prepareCompleted_2() { return static_cast<int32_t>(offsetof(VideoPlayer_t845047648, ___prepareCompleted_2)); }
	inline EventHandler_t2554532863 * get_prepareCompleted_2() const { return ___prepareCompleted_2; }
	inline EventHandler_t2554532863 ** get_address_of_prepareCompleted_2() { return &___prepareCompleted_2; }
	inline void set_prepareCompleted_2(EventHandler_t2554532863 * value)
	{
		___prepareCompleted_2 = value;
		Il2CppCodeGenWriteBarrier((&___prepareCompleted_2), value);
	}

	inline static int32_t get_offset_of_loopPointReached_3() { return static_cast<int32_t>(offsetof(VideoPlayer_t845047648, ___loopPointReached_3)); }
	inline EventHandler_t2554532863 * get_loopPointReached_3() const { return ___loopPointReached_3; }
	inline EventHandler_t2554532863 ** get_address_of_loopPointReached_3() { return &___loopPointReached_3; }
	inline void set_loopPointReached_3(EventHandler_t2554532863 * value)
	{
		___loopPointReached_3 = value;
		Il2CppCodeGenWriteBarrier((&___loopPointReached_3), value);
	}

	inline static int32_t get_offset_of_started_4() { return static_cast<int32_t>(offsetof(VideoPlayer_t845047648, ___started_4)); }
	inline EventHandler_t2554532863 * get_started_4() const { return ___started_4; }
	inline EventHandler_t2554532863 ** get_address_of_started_4() { return &___started_4; }
	inline void set_started_4(EventHandler_t2554532863 * value)
	{
		___started_4 = value;
		Il2CppCodeGenWriteBarrier((&___started_4), value);
	}

	inline static int32_t get_offset_of_frameDropped_5() { return static_cast<int32_t>(offsetof(VideoPlayer_t845047648, ___frameDropped_5)); }
	inline EventHandler_t2554532863 * get_frameDropped_5() const { return ___frameDropped_5; }
	inline EventHandler_t2554532863 ** get_address_of_frameDropped_5() { return &___frameDropped_5; }
	inline void set_frameDropped_5(EventHandler_t2554532863 * value)
	{
		___frameDropped_5 = value;
		Il2CppCodeGenWriteBarrier((&___frameDropped_5), value);
	}

	inline static int32_t get_offset_of_errorReceived_6() { return static_cast<int32_t>(offsetof(VideoPlayer_t845047648, ___errorReceived_6)); }
	inline ErrorEventHandler_t1855813681 * get_errorReceived_6() const { return ___errorReceived_6; }
	inline ErrorEventHandler_t1855813681 ** get_address_of_errorReceived_6() { return &___errorReceived_6; }
	inline void set_errorReceived_6(ErrorEventHandler_t1855813681 * value)
	{
		___errorReceived_6 = value;
		Il2CppCodeGenWriteBarrier((&___errorReceived_6), value);
	}

	inline static int32_t get_offset_of_seekCompleted_7() { return static_cast<int32_t>(offsetof(VideoPlayer_t845047648, ___seekCompleted_7)); }
	inline EventHandler_t2554532863 * get_seekCompleted_7() const { return ___seekCompleted_7; }
	inline EventHandler_t2554532863 ** get_address_of_seekCompleted_7() { return &___seekCompleted_7; }
	inline void set_seekCompleted_7(EventHandler_t2554532863 * value)
	{
		___seekCompleted_7 = value;
		Il2CppCodeGenWriteBarrier((&___seekCompleted_7), value);
	}

	inline static int32_t get_offset_of_clockResyncOccurred_8() { return static_cast<int32_t>(offsetof(VideoPlayer_t845047648, ___clockResyncOccurred_8)); }
	inline TimeEventHandler_t476168162 * get_clockResyncOccurred_8() const { return ___clockResyncOccurred_8; }
	inline TimeEventHandler_t476168162 ** get_address_of_clockResyncOccurred_8() { return &___clockResyncOccurred_8; }
	inline void set_clockResyncOccurred_8(TimeEventHandler_t476168162 * value)
	{
		___clockResyncOccurred_8 = value;
		Il2CppCodeGenWriteBarrier((&___clockResyncOccurred_8), value);
	}

	inline static int32_t get_offset_of_frameReady_9() { return static_cast<int32_t>(offsetof(VideoPlayer_t845047648, ___frameReady_9)); }
	inline FrameReadyEventHandler_t2115650218 * get_frameReady_9() const { return ___frameReady_9; }
	inline FrameReadyEventHandler_t2115650218 ** get_address_of_frameReady_9() { return &___frameReady_9; }
	inline void set_frameReady_9(FrameReadyEventHandler_t2115650218 * value)
	{
		___frameReady_9 = value;
		Il2CppCodeGenWriteBarrier((&___frameReady_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOPLAYER_T845047648_H



// System.Void UnityEngine.Video.VideoPlayer/EventHandler::Invoke(UnityEngine.Video.VideoPlayer)
extern "C"  void EventHandler_Invoke_m2328335386 (EventHandler_t2554532863 * __this, VideoPlayer_t845047648 * ___source0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Int64)
extern "C"  void FrameReadyEventHandler_Invoke_m3122012111 (FrameReadyEventHandler_t2115650218 * __this, VideoPlayer_t845047648 * ___source0, int64_t ___frameIdx1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.String)
extern "C"  void ErrorEventHandler_Invoke_m3834729297 (ErrorEventHandler_t1855813681 * __this, VideoPlayer_t845047648 * ___source0, String_t* ___message1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Double)
extern "C"  void TimeEventHandler_Invoke_m1665119237 (TimeEventHandler_t476168162 * __this, VideoPlayer_t845047648 * ___source0, double ___seconds1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Video.VideoPlayer::InvokePrepareCompletedCallback_Internal(UnityEngine.Video.VideoPlayer)
extern "C"  void VideoPlayer_InvokePrepareCompletedCallback_Internal_m2406978222 (RuntimeObject * __this /* static, unused */, VideoPlayer_t845047648 * ___source0, const RuntimeMethod* method)
{
	{
		VideoPlayer_t845047648 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t2554532863 * L_1 = L_0->get_prepareCompleted_2();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		VideoPlayer_t845047648 * L_2 = ___source0;
		NullCheck(L_2);
		EventHandler_t2554532863 * L_3 = L_2->get_prepareCompleted_2();
		VideoPlayer_t845047648 * L_4 = ___source0;
		NullCheck(L_3);
		EventHandler_Invoke_m2328335386(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeFrameReadyCallback_Internal(UnityEngine.Video.VideoPlayer,System.Int64)
extern "C"  void VideoPlayer_InvokeFrameReadyCallback_Internal_m601380918 (RuntimeObject * __this /* static, unused */, VideoPlayer_t845047648 * ___source0, int64_t ___frameIdx1, const RuntimeMethod* method)
{
	{
		VideoPlayer_t845047648 * L_0 = ___source0;
		NullCheck(L_0);
		FrameReadyEventHandler_t2115650218 * L_1 = L_0->get_frameReady_9();
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		VideoPlayer_t845047648 * L_2 = ___source0;
		NullCheck(L_2);
		FrameReadyEventHandler_t2115650218 * L_3 = L_2->get_frameReady_9();
		VideoPlayer_t845047648 * L_4 = ___source0;
		int64_t L_5 = ___frameIdx1;
		NullCheck(L_3);
		FrameReadyEventHandler_Invoke_m3122012111(L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeLoopPointReachedCallback_Internal(UnityEngine.Video.VideoPlayer)
extern "C"  void VideoPlayer_InvokeLoopPointReachedCallback_Internal_m302139740 (RuntimeObject * __this /* static, unused */, VideoPlayer_t845047648 * ___source0, const RuntimeMethod* method)
{
	{
		VideoPlayer_t845047648 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t2554532863 * L_1 = L_0->get_loopPointReached_3();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		VideoPlayer_t845047648 * L_2 = ___source0;
		NullCheck(L_2);
		EventHandler_t2554532863 * L_3 = L_2->get_loopPointReached_3();
		VideoPlayer_t845047648 * L_4 = ___source0;
		NullCheck(L_3);
		EventHandler_Invoke_m2328335386(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeStartedCallback_Internal(UnityEngine.Video.VideoPlayer)
extern "C"  void VideoPlayer_InvokeStartedCallback_Internal_m2125369212 (RuntimeObject * __this /* static, unused */, VideoPlayer_t845047648 * ___source0, const RuntimeMethod* method)
{
	{
		VideoPlayer_t845047648 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t2554532863 * L_1 = L_0->get_started_4();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		VideoPlayer_t845047648 * L_2 = ___source0;
		NullCheck(L_2);
		EventHandler_t2554532863 * L_3 = L_2->get_started_4();
		VideoPlayer_t845047648 * L_4 = ___source0;
		NullCheck(L_3);
		EventHandler_Invoke_m2328335386(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeFrameDroppedCallback_Internal(UnityEngine.Video.VideoPlayer)
extern "C"  void VideoPlayer_InvokeFrameDroppedCallback_Internal_m1630375391 (RuntimeObject * __this /* static, unused */, VideoPlayer_t845047648 * ___source0, const RuntimeMethod* method)
{
	{
		VideoPlayer_t845047648 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t2554532863 * L_1 = L_0->get_frameDropped_5();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		VideoPlayer_t845047648 * L_2 = ___source0;
		NullCheck(L_2);
		EventHandler_t2554532863 * L_3 = L_2->get_frameDropped_5();
		VideoPlayer_t845047648 * L_4 = ___source0;
		NullCheck(L_3);
		EventHandler_Invoke_m2328335386(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeErrorReceivedCallback_Internal(UnityEngine.Video.VideoPlayer,System.String)
extern "C"  void VideoPlayer_InvokeErrorReceivedCallback_Internal_m1576434603 (RuntimeObject * __this /* static, unused */, VideoPlayer_t845047648 * ___source0, String_t* ___errorStr1, const RuntimeMethod* method)
{
	{
		VideoPlayer_t845047648 * L_0 = ___source0;
		NullCheck(L_0);
		ErrorEventHandler_t1855813681 * L_1 = L_0->get_errorReceived_6();
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		VideoPlayer_t845047648 * L_2 = ___source0;
		NullCheck(L_2);
		ErrorEventHandler_t1855813681 * L_3 = L_2->get_errorReceived_6();
		VideoPlayer_t845047648 * L_4 = ___source0;
		String_t* L_5 = ___errorStr1;
		NullCheck(L_3);
		ErrorEventHandler_Invoke_m3834729297(L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeSeekCompletedCallback_Internal(UnityEngine.Video.VideoPlayer)
extern "C"  void VideoPlayer_InvokeSeekCompletedCallback_Internal_m3075998997 (RuntimeObject * __this /* static, unused */, VideoPlayer_t845047648 * ___source0, const RuntimeMethod* method)
{
	{
		VideoPlayer_t845047648 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t2554532863 * L_1 = L_0->get_seekCompleted_7();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		VideoPlayer_t845047648 * L_2 = ___source0;
		NullCheck(L_2);
		EventHandler_t2554532863 * L_3 = L_2->get_seekCompleted_7();
		VideoPlayer_t845047648 * L_4 = ___source0;
		NullCheck(L_3);
		EventHandler_Invoke_m2328335386(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeClockResyncOccurredCallback_Internal(UnityEngine.Video.VideoPlayer,System.Double)
extern "C"  void VideoPlayer_InvokeClockResyncOccurredCallback_Internal_m3544322018 (RuntimeObject * __this /* static, unused */, VideoPlayer_t845047648 * ___source0, double ___seconds1, const RuntimeMethod* method)
{
	{
		VideoPlayer_t845047648 * L_0 = ___source0;
		NullCheck(L_0);
		TimeEventHandler_t476168162 * L_1 = L_0->get_clockResyncOccurred_8();
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		VideoPlayer_t845047648 * L_2 = ___source0;
		NullCheck(L_2);
		TimeEventHandler_t476168162 * L_3 = L_2->get_clockResyncOccurred_8();
		VideoPlayer_t845047648 * L_4 = ___source0;
		double L_5 = ___seconds1;
		NullCheck(L_3);
		TimeEventHandler_Invoke_m1665119237(L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ErrorEventHandler__ctor_m3450912130 (ErrorEventHandler_t1855813681 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.String)
extern "C"  void ErrorEventHandler_Invoke_m3834729297 (ErrorEventHandler_t1855813681 * __this, VideoPlayer_t845047648 * ___source0, String_t* ___message1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ErrorEventHandler_Invoke_m3834729297((ErrorEventHandler_t1855813681 *)__this->get_prev_9(),___source0, ___message1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, VideoPlayer_t845047648 * ___source0, String_t* ___message1, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___source0, ___message1,(RuntimeMethod*)(__this->get_method_3()));
	}
	else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (void* __this, VideoPlayer_t845047648 * ___source0, String_t* ___message1, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___source0, ___message1,(RuntimeMethod*)(__this->get_method_3()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, String_t* ___message1, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(___source0, ___message1,(RuntimeMethod*)(__this->get_method_3()));
	}
}
// System.IAsyncResult UnityEngine.Video.VideoPlayer/ErrorEventHandler::BeginInvoke(UnityEngine.Video.VideoPlayer,System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* ErrorEventHandler_BeginInvoke_m688519297 (ErrorEventHandler_t1855813681 * __this, VideoPlayer_t845047648 * ___source0, String_t* ___message1, AsyncCallback_t1090529187 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___source0;
	__d_args[1] = ___message1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ErrorEventHandler_EndInvoke_m4201159393 (ErrorEventHandler_t1855813681 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void EventHandler__ctor_m2269620951 (EventHandler_t2554532863 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::Invoke(UnityEngine.Video.VideoPlayer)
extern "C"  void EventHandler_Invoke_m2328335386 (EventHandler_t2554532863 * __this, VideoPlayer_t845047648 * ___source0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		EventHandler_Invoke_m2328335386((EventHandler_t2554532863 *)__this->get_prev_9(),___source0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, VideoPlayer_t845047648 * ___source0, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___source0,(RuntimeMethod*)(__this->get_method_3()));
	}
	else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (void* __this, VideoPlayer_t845047648 * ___source0, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___source0,(RuntimeMethod*)(__this->get_method_3()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(___source0,(RuntimeMethod*)(__this->get_method_3()));
	}
}
// System.IAsyncResult UnityEngine.Video.VideoPlayer/EventHandler::BeginInvoke(UnityEngine.Video.VideoPlayer,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* EventHandler_BeginInvoke_m1008967814 (EventHandler_t2554532863 * __this, VideoPlayer_t845047648 * ___source0, AsyncCallback_t1090529187 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___source0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void EventHandler_EndInvoke_m575961268 (EventHandler_t2554532863 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void FrameReadyEventHandler__ctor_m315632091 (FrameReadyEventHandler_t2115650218 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Int64)
extern "C"  void FrameReadyEventHandler_Invoke_m3122012111 (FrameReadyEventHandler_t2115650218 * __this, VideoPlayer_t845047648 * ___source0, int64_t ___frameIdx1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		FrameReadyEventHandler_Invoke_m3122012111((FrameReadyEventHandler_t2115650218 *)__this->get_prev_9(),___source0, ___frameIdx1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, VideoPlayer_t845047648 * ___source0, int64_t ___frameIdx1, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___source0, ___frameIdx1,(RuntimeMethod*)(__this->get_method_3()));
	}
	else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (void* __this, VideoPlayer_t845047648 * ___source0, int64_t ___frameIdx1, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___source0, ___frameIdx1,(RuntimeMethod*)(__this->get_method_3()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, int64_t ___frameIdx1, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(___source0, ___frameIdx1,(RuntimeMethod*)(__this->get_method_3()));
	}
}
// System.IAsyncResult UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::BeginInvoke(UnityEngine.Video.VideoPlayer,System.Int64,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* FrameReadyEventHandler_BeginInvoke_m1865955976 (FrameReadyEventHandler_t2115650218 * __this, VideoPlayer_t845047648 * ___source0, int64_t ___frameIdx1, AsyncCallback_t1090529187 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FrameReadyEventHandler_BeginInvoke_m1865955976_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___source0;
	__d_args[1] = Box(Int64_t1418697003_il2cpp_TypeInfo_var, &___frameIdx1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void FrameReadyEventHandler_EndInvoke_m1662512657 (FrameReadyEventHandler_t2115650218 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void TimeEventHandler__ctor_m4068522617 (TimeEventHandler_t476168162 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Double)
extern "C"  void TimeEventHandler_Invoke_m1665119237 (TimeEventHandler_t476168162 * __this, VideoPlayer_t845047648 * ___source0, double ___seconds1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		TimeEventHandler_Invoke_m1665119237((TimeEventHandler_t476168162 *)__this->get_prev_9(),___source0, ___seconds1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, VideoPlayer_t845047648 * ___source0, double ___seconds1, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___source0, ___seconds1,(RuntimeMethod*)(__this->get_method_3()));
	}
	else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (void* __this, VideoPlayer_t845047648 * ___source0, double ___seconds1, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___source0, ___seconds1,(RuntimeMethod*)(__this->get_method_3()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, double ___seconds1, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(___source0, ___seconds1,(RuntimeMethod*)(__this->get_method_3()));
	}
}
// System.IAsyncResult UnityEngine.Video.VideoPlayer/TimeEventHandler::BeginInvoke(UnityEngine.Video.VideoPlayer,System.Double,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* TimeEventHandler_BeginInvoke_m848754205 (TimeEventHandler_t476168162 * __this, VideoPlayer_t845047648 * ___source0, double ___seconds1, AsyncCallback_t1090529187 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeEventHandler_BeginInvoke_m848754205_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___source0;
	__d_args[1] = Box(Double_t213355342_il2cpp_TypeInfo_var, &___seconds1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void TimeEventHandler_EndInvoke_m111333509 (TimeEventHandler_t476168162 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
