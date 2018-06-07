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

// System.String
struct String_t;
// UnityEngine.Animator
struct Animator_t3650454832;
// PanelManager
struct PanelManager_t1146899019;
// UnityEngine.AsyncOperation
struct AsyncOperation_t53156670;
// SceneLoader
struct SceneLoader_t855965348;
// System.Void
struct Void_t1503135557;
// UnityEngine.Material
struct Material_t2742164257;
// UnityEngine.UI.Image
struct Image_t3503119276;
// UnityEngine.UI.Text
struct Text_t1152762213;
// UnityEngine.RectTransform
struct RectTransform_t2830367272;
// UnityEngine.GameObject
struct GameObject_t52267728;
// System.IO.BinaryWriter
struct BinaryWriter_t3004841766;
// System.IO.FileStream
struct FileStream_t990323267;
// jsonObject
struct jsonObject_t1637687173;
// UnityEngine.Transform
struct Transform_t4086579593;




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
#ifndef JSONOBJECT_T1637687173_H
#define JSONOBJECT_T1637687173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// jsonObject
struct  jsonObject_t1637687173  : public RuntimeObject
{
public:
	// System.String jsonObject::PlayerID
	String_t* ___PlayerID_0;
	// System.String jsonObject::Date
	String_t* ___Date_1;
	// System.String jsonObject::Eventtype
	String_t* ___Eventtype_2;
	// System.String jsonObject::value
	String_t* ___value_3;

public:
	inline static int32_t get_offset_of_PlayerID_0() { return static_cast<int32_t>(offsetof(jsonObject_t1637687173, ___PlayerID_0)); }
	inline String_t* get_PlayerID_0() const { return ___PlayerID_0; }
	inline String_t** get_address_of_PlayerID_0() { return &___PlayerID_0; }
	inline void set_PlayerID_0(String_t* value)
	{
		___PlayerID_0 = value;
		Il2CppCodeGenWriteBarrier((&___PlayerID_0), value);
	}

	inline static int32_t get_offset_of_Date_1() { return static_cast<int32_t>(offsetof(jsonObject_t1637687173, ___Date_1)); }
	inline String_t* get_Date_1() const { return ___Date_1; }
	inline String_t** get_address_of_Date_1() { return &___Date_1; }
	inline void set_Date_1(String_t* value)
	{
		___Date_1 = value;
		Il2CppCodeGenWriteBarrier((&___Date_1), value);
	}

	inline static int32_t get_offset_of_Eventtype_2() { return static_cast<int32_t>(offsetof(jsonObject_t1637687173, ___Eventtype_2)); }
	inline String_t* get_Eventtype_2() const { return ___Eventtype_2; }
	inline String_t** get_address_of_Eventtype_2() { return &___Eventtype_2; }
	inline void set_Eventtype_2(String_t* value)
	{
		___Eventtype_2 = value;
		Il2CppCodeGenWriteBarrier((&___Eventtype_2), value);
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(jsonObject_t1637687173, ___value_3)); }
	inline String_t* get_value_3() const { return ___value_3; }
	inline String_t** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(String_t* value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((&___value_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONOBJECT_T1637687173_H
#ifndef U3CDISABLEPANELDELEYEDU3EC__ITERATOR0_T2716507603_H
#define U3CDISABLEPANELDELEYEDU3EC__ITERATOR0_T2716507603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PanelManager/<DisablePanelDeleyed>c__Iterator0
struct  U3CDisablePanelDeleyedU3Ec__Iterator0_t2716507603  : public RuntimeObject
{
public:
	// System.Boolean PanelManager/<DisablePanelDeleyed>c__Iterator0::<closedStateReached>__0
	bool ___U3CclosedStateReachedU3E__0_0;
	// System.Boolean PanelManager/<DisablePanelDeleyed>c__Iterator0::<wantToClose>__0
	bool ___U3CwantToCloseU3E__0_1;
	// UnityEngine.Animator PanelManager/<DisablePanelDeleyed>c__Iterator0::anim
	Animator_t3650454832 * ___anim_2;
	// PanelManager PanelManager/<DisablePanelDeleyed>c__Iterator0::$this
	PanelManager_t1146899019 * ___U24this_3;
	// System.Object PanelManager/<DisablePanelDeleyed>c__Iterator0::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean PanelManager/<DisablePanelDeleyed>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 PanelManager/<DisablePanelDeleyed>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CclosedStateReachedU3E__0_0() { return static_cast<int32_t>(offsetof(U3CDisablePanelDeleyedU3Ec__Iterator0_t2716507603, ___U3CclosedStateReachedU3E__0_0)); }
	inline bool get_U3CclosedStateReachedU3E__0_0() const { return ___U3CclosedStateReachedU3E__0_0; }
	inline bool* get_address_of_U3CclosedStateReachedU3E__0_0() { return &___U3CclosedStateReachedU3E__0_0; }
	inline void set_U3CclosedStateReachedU3E__0_0(bool value)
	{
		___U3CclosedStateReachedU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CwantToCloseU3E__0_1() { return static_cast<int32_t>(offsetof(U3CDisablePanelDeleyedU3Ec__Iterator0_t2716507603, ___U3CwantToCloseU3E__0_1)); }
	inline bool get_U3CwantToCloseU3E__0_1() const { return ___U3CwantToCloseU3E__0_1; }
	inline bool* get_address_of_U3CwantToCloseU3E__0_1() { return &___U3CwantToCloseU3E__0_1; }
	inline void set_U3CwantToCloseU3E__0_1(bool value)
	{
		___U3CwantToCloseU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_anim_2() { return static_cast<int32_t>(offsetof(U3CDisablePanelDeleyedU3Ec__Iterator0_t2716507603, ___anim_2)); }
	inline Animator_t3650454832 * get_anim_2() const { return ___anim_2; }
	inline Animator_t3650454832 ** get_address_of_anim_2() { return &___anim_2; }
	inline void set_anim_2(Animator_t3650454832 * value)
	{
		___anim_2 = value;
		Il2CppCodeGenWriteBarrier((&___anim_2), value);
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CDisablePanelDeleyedU3Ec__Iterator0_t2716507603, ___U24this_3)); }
	inline PanelManager_t1146899019 * get_U24this_3() const { return ___U24this_3; }
	inline PanelManager_t1146899019 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(PanelManager_t1146899019 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CDisablePanelDeleyedU3Ec__Iterator0_t2716507603, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CDisablePanelDeleyedU3Ec__Iterator0_t2716507603, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CDisablePanelDeleyedU3Ec__Iterator0_t2716507603, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDISABLEPANELDELEYEDU3EC__ITERATOR0_T2716507603_H
#ifndef U3CLOADNEWSCENEU3EC__ITERATOR0_T1230307109_H
#define U3CLOADNEWSCENEU3EC__ITERATOR0_T1230307109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneLoader/<LoadNewScene>c__Iterator0
struct  U3CLoadNewSceneU3Ec__Iterator0_t1230307109  : public RuntimeObject
{
public:
	// UnityEngine.AsyncOperation SceneLoader/<LoadNewScene>c__Iterator0::<async>__0
	AsyncOperation_t53156670 * ___U3CasyncU3E__0_0;
	// SceneLoader SceneLoader/<LoadNewScene>c__Iterator0::$this
	SceneLoader_t855965348 * ___U24this_1;
	// System.Object SceneLoader/<LoadNewScene>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean SceneLoader/<LoadNewScene>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 SceneLoader/<LoadNewScene>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CasyncU3E__0_0() { return static_cast<int32_t>(offsetof(U3CLoadNewSceneU3Ec__Iterator0_t1230307109, ___U3CasyncU3E__0_0)); }
	inline AsyncOperation_t53156670 * get_U3CasyncU3E__0_0() const { return ___U3CasyncU3E__0_0; }
	inline AsyncOperation_t53156670 ** get_address_of_U3CasyncU3E__0_0() { return &___U3CasyncU3E__0_0; }
	inline void set_U3CasyncU3E__0_0(AsyncOperation_t53156670 * value)
	{
		___U3CasyncU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CasyncU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CLoadNewSceneU3Ec__Iterator0_t1230307109, ___U24this_1)); }
	inline SceneLoader_t855965348 * get_U24this_1() const { return ___U24this_1; }
	inline SceneLoader_t855965348 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(SceneLoader_t855965348 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CLoadNewSceneU3Ec__Iterator0_t1230307109, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CLoadNewSceneU3Ec__Iterator0_t1230307109, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CLoadNewSceneU3Ec__Iterator0_t1230307109, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOADNEWSCENEU3EC__ITERATOR0_T1230307109_H
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
#ifndef QUATERNION_T2888583384_H
#define QUATERNION_T2888583384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2888583384 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2888583384, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2888583384, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2888583384, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2888583384, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2888583384_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2888583384  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2888583384_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2888583384  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2888583384 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2888583384  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2888583384_H
#ifndef MATRIX4X4_T3427783106_H
#define MATRIX4X4_T3427783106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t3427783106 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t3427783106, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t3427783106, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t3427783106, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t3427783106, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t3427783106, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t3427783106, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t3427783106, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t3427783106, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t3427783106, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t3427783106, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t3427783106, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t3427783106, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t3427783106, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t3427783106, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t3427783106, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t3427783106, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t3427783106_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t3427783106  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t3427783106  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t3427783106_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t3427783106  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t3427783106 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t3427783106  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t3427783106_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t3427783106  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t3427783106 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t3427783106  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T3427783106_H
#ifndef VECTOR2_T865627502_H
#define VECTOR2_T865627502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t865627502 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t865627502, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t865627502, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t865627502_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t865627502  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t865627502  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t865627502  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t865627502  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t865627502  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t865627502  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t865627502  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t865627502  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t865627502_StaticFields, ___zeroVector_2)); }
	inline Vector2_t865627502  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t865627502 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t865627502  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t865627502_StaticFields, ___oneVector_3)); }
	inline Vector2_t865627502  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t865627502 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t865627502  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t865627502_StaticFields, ___upVector_4)); }
	inline Vector2_t865627502  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t865627502 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t865627502  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t865627502_StaticFields, ___downVector_5)); }
	inline Vector2_t865627502  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t865627502 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t865627502  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t865627502_StaticFields, ___leftVector_6)); }
	inline Vector2_t865627502  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t865627502 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t865627502  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t865627502_StaticFields, ___rightVector_7)); }
	inline Vector2_t865627502  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t865627502 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t865627502  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t865627502_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t865627502  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t865627502 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t865627502  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t865627502_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t865627502  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t865627502 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t865627502  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T865627502_H
#ifndef VECTOR3_T575627056_H
#define VECTOR3_T575627056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t575627056 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t575627056, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t575627056, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t575627056, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t575627056_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t575627056  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t575627056  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t575627056  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t575627056  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t575627056  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t575627056  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t575627056  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t575627056  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t575627056  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t575627056  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t575627056_StaticFields, ___zeroVector_4)); }
	inline Vector3_t575627056  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t575627056 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t575627056  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t575627056_StaticFields, ___oneVector_5)); }
	inline Vector3_t575627056  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t575627056 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t575627056  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t575627056_StaticFields, ___upVector_6)); }
	inline Vector3_t575627056  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t575627056 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t575627056  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t575627056_StaticFields, ___downVector_7)); }
	inline Vector3_t575627056  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t575627056 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t575627056  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t575627056_StaticFields, ___leftVector_8)); }
	inline Vector3_t575627056  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t575627056 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t575627056  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t575627056_StaticFields, ___rightVector_9)); }
	inline Vector3_t575627056  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t575627056 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t575627056  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t575627056_StaticFields, ___forwardVector_10)); }
	inline Vector3_t575627056  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t575627056 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t575627056  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t575627056_StaticFields, ___backVector_11)); }
	inline Vector3_t575627056  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t575627056 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t575627056  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t575627056_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t575627056  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t575627056 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t575627056  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t575627056_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t575627056  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t575627056 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t575627056  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T575627056_H
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
#ifndef MONOBEHAVIOUR_T2964826054_H
#define MONOBEHAVIOUR_T2964826054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t2964826054  : public Behaviour_t799294381
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T2964826054_H
#ifndef SHOWSLIDERVALUE_T2859194553_H
#define SHOWSLIDERVALUE_T2859194553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShowSliderValue
struct  ShowSliderValue_t2859194553  : public MonoBehaviour_t2964826054
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHOWSLIDERVALUE_T2859194553_H
#ifndef SCROLLDETAILTEXTURE_T1851178618_H
#define SCROLLDETAILTEXTURE_T1851178618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollDetailTexture
struct  ScrollDetailTexture_t1851178618  : public MonoBehaviour_t2964826054
{
public:
	// System.Boolean ScrollDetailTexture::uniqueMaterial
	bool ___uniqueMaterial_2;
	// UnityEngine.Vector2 ScrollDetailTexture::scrollPerSecond
	Vector2_t865627502  ___scrollPerSecond_3;
	// UnityEngine.Matrix4x4 ScrollDetailTexture::m_Matrix
	Matrix4x4_t3427783106  ___m_Matrix_4;
	// UnityEngine.Material ScrollDetailTexture::mCopy
	Material_t2742164257 * ___mCopy_5;
	// UnityEngine.Material ScrollDetailTexture::mOriginal
	Material_t2742164257 * ___mOriginal_6;
	// UnityEngine.UI.Image ScrollDetailTexture::mSprite
	Image_t3503119276 * ___mSprite_7;
	// UnityEngine.Material ScrollDetailTexture::m_Mat
	Material_t2742164257 * ___m_Mat_8;

public:
	inline static int32_t get_offset_of_uniqueMaterial_2() { return static_cast<int32_t>(offsetof(ScrollDetailTexture_t1851178618, ___uniqueMaterial_2)); }
	inline bool get_uniqueMaterial_2() const { return ___uniqueMaterial_2; }
	inline bool* get_address_of_uniqueMaterial_2() { return &___uniqueMaterial_2; }
	inline void set_uniqueMaterial_2(bool value)
	{
		___uniqueMaterial_2 = value;
	}

	inline static int32_t get_offset_of_scrollPerSecond_3() { return static_cast<int32_t>(offsetof(ScrollDetailTexture_t1851178618, ___scrollPerSecond_3)); }
	inline Vector2_t865627502  get_scrollPerSecond_3() const { return ___scrollPerSecond_3; }
	inline Vector2_t865627502 * get_address_of_scrollPerSecond_3() { return &___scrollPerSecond_3; }
	inline void set_scrollPerSecond_3(Vector2_t865627502  value)
	{
		___scrollPerSecond_3 = value;
	}

	inline static int32_t get_offset_of_m_Matrix_4() { return static_cast<int32_t>(offsetof(ScrollDetailTexture_t1851178618, ___m_Matrix_4)); }
	inline Matrix4x4_t3427783106  get_m_Matrix_4() const { return ___m_Matrix_4; }
	inline Matrix4x4_t3427783106 * get_address_of_m_Matrix_4() { return &___m_Matrix_4; }
	inline void set_m_Matrix_4(Matrix4x4_t3427783106  value)
	{
		___m_Matrix_4 = value;
	}

	inline static int32_t get_offset_of_mCopy_5() { return static_cast<int32_t>(offsetof(ScrollDetailTexture_t1851178618, ___mCopy_5)); }
	inline Material_t2742164257 * get_mCopy_5() const { return ___mCopy_5; }
	inline Material_t2742164257 ** get_address_of_mCopy_5() { return &___mCopy_5; }
	inline void set_mCopy_5(Material_t2742164257 * value)
	{
		___mCopy_5 = value;
		Il2CppCodeGenWriteBarrier((&___mCopy_5), value);
	}

	inline static int32_t get_offset_of_mOriginal_6() { return static_cast<int32_t>(offsetof(ScrollDetailTexture_t1851178618, ___mOriginal_6)); }
	inline Material_t2742164257 * get_mOriginal_6() const { return ___mOriginal_6; }
	inline Material_t2742164257 ** get_address_of_mOriginal_6() { return &___mOriginal_6; }
	inline void set_mOriginal_6(Material_t2742164257 * value)
	{
		___mOriginal_6 = value;
		Il2CppCodeGenWriteBarrier((&___mOriginal_6), value);
	}

	inline static int32_t get_offset_of_mSprite_7() { return static_cast<int32_t>(offsetof(ScrollDetailTexture_t1851178618, ___mSprite_7)); }
	inline Image_t3503119276 * get_mSprite_7() const { return ___mSprite_7; }
	inline Image_t3503119276 ** get_address_of_mSprite_7() { return &___mSprite_7; }
	inline void set_mSprite_7(Image_t3503119276 * value)
	{
		___mSprite_7 = value;
		Il2CppCodeGenWriteBarrier((&___mSprite_7), value);
	}

	inline static int32_t get_offset_of_m_Mat_8() { return static_cast<int32_t>(offsetof(ScrollDetailTexture_t1851178618, ___m_Mat_8)); }
	inline Material_t2742164257 * get_m_Mat_8() const { return ___m_Mat_8; }
	inline Material_t2742164257 ** get_address_of_m_Mat_8() { return &___m_Mat_8; }
	inline void set_m_Mat_8(Material_t2742164257 * value)
	{
		___m_Mat_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Mat_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLDETAILTEXTURE_T1851178618_H
#ifndef SCENELOADER_T855965348_H
#define SCENELOADER_T855965348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneLoader
struct  SceneLoader_t855965348  : public MonoBehaviour_t2964826054
{
public:
	// System.Boolean SceneLoader::loadScene
	bool ___loadScene_2;
	// System.Int32 SceneLoader::scene
	int32_t ___scene_3;
	// UnityEngine.UI.Text SceneLoader::loadingText
	Text_t1152762213 * ___loadingText_4;

public:
	inline static int32_t get_offset_of_loadScene_2() { return static_cast<int32_t>(offsetof(SceneLoader_t855965348, ___loadScene_2)); }
	inline bool get_loadScene_2() const { return ___loadScene_2; }
	inline bool* get_address_of_loadScene_2() { return &___loadScene_2; }
	inline void set_loadScene_2(bool value)
	{
		___loadScene_2 = value;
	}

	inline static int32_t get_offset_of_scene_3() { return static_cast<int32_t>(offsetof(SceneLoader_t855965348, ___scene_3)); }
	inline int32_t get_scene_3() const { return ___scene_3; }
	inline int32_t* get_address_of_scene_3() { return &___scene_3; }
	inline void set_scene_3(int32_t value)
	{
		___scene_3 = value;
	}

	inline static int32_t get_offset_of_loadingText_4() { return static_cast<int32_t>(offsetof(SceneLoader_t855965348, ___loadingText_4)); }
	inline Text_t1152762213 * get_loadingText_4() const { return ___loadingText_4; }
	inline Text_t1152762213 ** get_address_of_loadingText_4() { return &___loadingText_4; }
	inline void set_loadingText_4(Text_t1152762213 * value)
	{
		___loadingText_4 = value;
		Il2CppCodeGenWriteBarrier((&___loadingText_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENELOADER_T855965348_H
#ifndef RESIZEPANEL_T1383245641_H
#define RESIZEPANEL_T1383245641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResizePanel
struct  ResizePanel_t1383245641  : public MonoBehaviour_t2964826054
{
public:
	// UnityEngine.Vector2 ResizePanel::minSize
	Vector2_t865627502  ___minSize_2;
	// UnityEngine.Vector2 ResizePanel::maxSize
	Vector2_t865627502  ___maxSize_3;
	// UnityEngine.RectTransform ResizePanel::panelRectTransform
	RectTransform_t2830367272 * ___panelRectTransform_4;
	// UnityEngine.Vector2 ResizePanel::originalLocalPointerPosition
	Vector2_t865627502  ___originalLocalPointerPosition_5;
	// UnityEngine.Vector2 ResizePanel::originalSizeDelta
	Vector2_t865627502  ___originalSizeDelta_6;

public:
	inline static int32_t get_offset_of_minSize_2() { return static_cast<int32_t>(offsetof(ResizePanel_t1383245641, ___minSize_2)); }
	inline Vector2_t865627502  get_minSize_2() const { return ___minSize_2; }
	inline Vector2_t865627502 * get_address_of_minSize_2() { return &___minSize_2; }
	inline void set_minSize_2(Vector2_t865627502  value)
	{
		___minSize_2 = value;
	}

	inline static int32_t get_offset_of_maxSize_3() { return static_cast<int32_t>(offsetof(ResizePanel_t1383245641, ___maxSize_3)); }
	inline Vector2_t865627502  get_maxSize_3() const { return ___maxSize_3; }
	inline Vector2_t865627502 * get_address_of_maxSize_3() { return &___maxSize_3; }
	inline void set_maxSize_3(Vector2_t865627502  value)
	{
		___maxSize_3 = value;
	}

	inline static int32_t get_offset_of_panelRectTransform_4() { return static_cast<int32_t>(offsetof(ResizePanel_t1383245641, ___panelRectTransform_4)); }
	inline RectTransform_t2830367272 * get_panelRectTransform_4() const { return ___panelRectTransform_4; }
	inline RectTransform_t2830367272 ** get_address_of_panelRectTransform_4() { return &___panelRectTransform_4; }
	inline void set_panelRectTransform_4(RectTransform_t2830367272 * value)
	{
		___panelRectTransform_4 = value;
		Il2CppCodeGenWriteBarrier((&___panelRectTransform_4), value);
	}

	inline static int32_t get_offset_of_originalLocalPointerPosition_5() { return static_cast<int32_t>(offsetof(ResizePanel_t1383245641, ___originalLocalPointerPosition_5)); }
	inline Vector2_t865627502  get_originalLocalPointerPosition_5() const { return ___originalLocalPointerPosition_5; }
	inline Vector2_t865627502 * get_address_of_originalLocalPointerPosition_5() { return &___originalLocalPointerPosition_5; }
	inline void set_originalLocalPointerPosition_5(Vector2_t865627502  value)
	{
		___originalLocalPointerPosition_5 = value;
	}

	inline static int32_t get_offset_of_originalSizeDelta_6() { return static_cast<int32_t>(offsetof(ResizePanel_t1383245641, ___originalSizeDelta_6)); }
	inline Vector2_t865627502  get_originalSizeDelta_6() const { return ___originalSizeDelta_6; }
	inline Vector2_t865627502 * get_address_of_originalSizeDelta_6() { return &___originalSizeDelta_6; }
	inline void set_originalSizeDelta_6(Vector2_t865627502  value)
	{
		___originalSizeDelta_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESIZEPANEL_T1383245641_H
#ifndef PANELMANAGER_T1146899019_H
#define PANELMANAGER_T1146899019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PanelManager
struct  PanelManager_t1146899019  : public MonoBehaviour_t2964826054
{
public:
	// UnityEngine.Animator PanelManager::initiallyOpen
	Animator_t3650454832 * ___initiallyOpen_2;
	// System.Int32 PanelManager::m_OpenParameterId
	int32_t ___m_OpenParameterId_3;
	// UnityEngine.Animator PanelManager::m_Open
	Animator_t3650454832 * ___m_Open_4;
	// UnityEngine.GameObject PanelManager::m_PreviouslySelected
	GameObject_t52267728 * ___m_PreviouslySelected_5;

public:
	inline static int32_t get_offset_of_initiallyOpen_2() { return static_cast<int32_t>(offsetof(PanelManager_t1146899019, ___initiallyOpen_2)); }
	inline Animator_t3650454832 * get_initiallyOpen_2() const { return ___initiallyOpen_2; }
	inline Animator_t3650454832 ** get_address_of_initiallyOpen_2() { return &___initiallyOpen_2; }
	inline void set_initiallyOpen_2(Animator_t3650454832 * value)
	{
		___initiallyOpen_2 = value;
		Il2CppCodeGenWriteBarrier((&___initiallyOpen_2), value);
	}

	inline static int32_t get_offset_of_m_OpenParameterId_3() { return static_cast<int32_t>(offsetof(PanelManager_t1146899019, ___m_OpenParameterId_3)); }
	inline int32_t get_m_OpenParameterId_3() const { return ___m_OpenParameterId_3; }
	inline int32_t* get_address_of_m_OpenParameterId_3() { return &___m_OpenParameterId_3; }
	inline void set_m_OpenParameterId_3(int32_t value)
	{
		___m_OpenParameterId_3 = value;
	}

	inline static int32_t get_offset_of_m_Open_4() { return static_cast<int32_t>(offsetof(PanelManager_t1146899019, ___m_Open_4)); }
	inline Animator_t3650454832 * get_m_Open_4() const { return ___m_Open_4; }
	inline Animator_t3650454832 ** get_address_of_m_Open_4() { return &___m_Open_4; }
	inline void set_m_Open_4(Animator_t3650454832 * value)
	{
		___m_Open_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Open_4), value);
	}

	inline static int32_t get_offset_of_m_PreviouslySelected_5() { return static_cast<int32_t>(offsetof(PanelManager_t1146899019, ___m_PreviouslySelected_5)); }
	inline GameObject_t52267728 * get_m_PreviouslySelected_5() const { return ___m_PreviouslySelected_5; }
	inline GameObject_t52267728 ** get_address_of_m_PreviouslySelected_5() { return &___m_PreviouslySelected_5; }
	inline void set_m_PreviouslySelected_5(GameObject_t52267728 * value)
	{
		___m_PreviouslySelected_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PreviouslySelected_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PANELMANAGER_T1146899019_H
#ifndef ROTATEWORLD_T4027787929_H
#define ROTATEWORLD_T4027787929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RotateWorld
struct  RotateWorld_t4027787929  : public MonoBehaviour_t2964826054
{
public:
	// System.Single RotateWorld::rotateSpeed
	float ___rotateSpeed_2;
	// System.Single RotateWorld::pointerX
	float ___pointerX_3;
	// UnityEngine.GameObject RotateWorld::levelManager
	GameObject_t52267728 * ___levelManager_4;
	// UnityEngine.Vector3 RotateWorld::originalRad
	Vector3_t575627056  ___originalRad_5;

public:
	inline static int32_t get_offset_of_rotateSpeed_2() { return static_cast<int32_t>(offsetof(RotateWorld_t4027787929, ___rotateSpeed_2)); }
	inline float get_rotateSpeed_2() const { return ___rotateSpeed_2; }
	inline float* get_address_of_rotateSpeed_2() { return &___rotateSpeed_2; }
	inline void set_rotateSpeed_2(float value)
	{
		___rotateSpeed_2 = value;
	}

	inline static int32_t get_offset_of_pointerX_3() { return static_cast<int32_t>(offsetof(RotateWorld_t4027787929, ___pointerX_3)); }
	inline float get_pointerX_3() const { return ___pointerX_3; }
	inline float* get_address_of_pointerX_3() { return &___pointerX_3; }
	inline void set_pointerX_3(float value)
	{
		___pointerX_3 = value;
	}

	inline static int32_t get_offset_of_levelManager_4() { return static_cast<int32_t>(offsetof(RotateWorld_t4027787929, ___levelManager_4)); }
	inline GameObject_t52267728 * get_levelManager_4() const { return ___levelManager_4; }
	inline GameObject_t52267728 ** get_address_of_levelManager_4() { return &___levelManager_4; }
	inline void set_levelManager_4(GameObject_t52267728 * value)
	{
		___levelManager_4 = value;
		Il2CppCodeGenWriteBarrier((&___levelManager_4), value);
	}

	inline static int32_t get_offset_of_originalRad_5() { return static_cast<int32_t>(offsetof(RotateWorld_t4027787929, ___originalRad_5)); }
	inline Vector3_t575627056  get_originalRad_5() const { return ___originalRad_5; }
	inline Vector3_t575627056 * get_address_of_originalRad_5() { return &___originalRad_5; }
	inline void set_originalRad_5(Vector3_t575627056  value)
	{
		___originalRad_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATEWORLD_T4027787929_H
#ifndef MESSUNG_T588786527_H
#define MESSUNG_T588786527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Messung
struct  Messung_t588786527  : public MonoBehaviour_t2964826054
{
public:
	// System.IO.BinaryWriter Messung::s
	BinaryWriter_t3004841766 * ___s_2;
	// System.IO.FileStream Messung::fs
	FileStream_t990323267 * ___fs_3;
	// System.String Messung::ID
	String_t* ___ID_4;
	// jsonObject Messung::obj
	jsonObject_t1637687173 * ___obj_5;

public:
	inline static int32_t get_offset_of_s_2() { return static_cast<int32_t>(offsetof(Messung_t588786527, ___s_2)); }
	inline BinaryWriter_t3004841766 * get_s_2() const { return ___s_2; }
	inline BinaryWriter_t3004841766 ** get_address_of_s_2() { return &___s_2; }
	inline void set_s_2(BinaryWriter_t3004841766 * value)
	{
		___s_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_2), value);
	}

	inline static int32_t get_offset_of_fs_3() { return static_cast<int32_t>(offsetof(Messung_t588786527, ___fs_3)); }
	inline FileStream_t990323267 * get_fs_3() const { return ___fs_3; }
	inline FileStream_t990323267 ** get_address_of_fs_3() { return &___fs_3; }
	inline void set_fs_3(FileStream_t990323267 * value)
	{
		___fs_3 = value;
		Il2CppCodeGenWriteBarrier((&___fs_3), value);
	}

	inline static int32_t get_offset_of_ID_4() { return static_cast<int32_t>(offsetof(Messung_t588786527, ___ID_4)); }
	inline String_t* get_ID_4() const { return ___ID_4; }
	inline String_t** get_address_of_ID_4() { return &___ID_4; }
	inline void set_ID_4(String_t* value)
	{
		___ID_4 = value;
		Il2CppCodeGenWriteBarrier((&___ID_4), value);
	}

	inline static int32_t get_offset_of_obj_5() { return static_cast<int32_t>(offsetof(Messung_t588786527, ___obj_5)); }
	inline jsonObject_t1637687173 * get_obj_5() const { return ___obj_5; }
	inline jsonObject_t1637687173 ** get_address_of_obj_5() { return &___obj_5; }
	inline void set_obj_5(jsonObject_t1637687173 * value)
	{
		___obj_5 = value;
		Il2CppCodeGenWriteBarrier((&___obj_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSUNG_T588786527_H
#ifndef LOGINCHECKER_T1100316458_H
#define LOGINCHECKER_T1100316458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoginChecker
struct  LoginChecker_t1100316458  : public MonoBehaviour_t2964826054
{
public:
	// UnityEngine.GameObject LoginChecker::uploadButton
	GameObject_t52267728 * ___uploadButton_2;

public:
	inline static int32_t get_offset_of_uploadButton_2() { return static_cast<int32_t>(offsetof(LoginChecker_t1100316458, ___uploadButton_2)); }
	inline GameObject_t52267728 * get_uploadButton_2() const { return ___uploadButton_2; }
	inline GameObject_t52267728 ** get_address_of_uploadButton_2() { return &___uploadButton_2; }
	inline void set_uploadButton_2(GameObject_t52267728 * value)
	{
		___uploadButton_2 = value;
		Il2CppCodeGenWriteBarrier((&___uploadButton_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGINCHECKER_T1100316458_H
#ifndef LOADSCENEWITHSPECIALINDEX_T1130835262_H
#define LOADSCENEWITHSPECIALINDEX_T1130835262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadSceneWithSpecialIndex
struct  LoadSceneWithSpecialIndex_t1130835262  : public MonoBehaviour_t2964826054
{
public:
	// System.Int32 LoadSceneWithSpecialIndex::sceneIndex
	int32_t ___sceneIndex_2;

public:
	inline static int32_t get_offset_of_sceneIndex_2() { return static_cast<int32_t>(offsetof(LoadSceneWithSpecialIndex_t1130835262, ___sceneIndex_2)); }
	inline int32_t get_sceneIndex_2() const { return ___sceneIndex_2; }
	inline int32_t* get_address_of_sceneIndex_2() { return &___sceneIndex_2; }
	inline void set_sceneIndex_2(int32_t value)
	{
		___sceneIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADSCENEWITHSPECIALINDEX_T1130835262_H
#ifndef TILTWINDOW_T140785075_H
#define TILTWINDOW_T140785075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TiltWindow
struct  TiltWindow_t140785075  : public MonoBehaviour_t2964826054
{
public:
	// UnityEngine.Vector2 TiltWindow::range
	Vector2_t865627502  ___range_2;
	// UnityEngine.Transform TiltWindow::mTrans
	Transform_t4086579593 * ___mTrans_3;
	// UnityEngine.Quaternion TiltWindow::mStart
	Quaternion_t2888583384  ___mStart_4;
	// UnityEngine.Vector2 TiltWindow::mRot
	Vector2_t865627502  ___mRot_5;

public:
	inline static int32_t get_offset_of_range_2() { return static_cast<int32_t>(offsetof(TiltWindow_t140785075, ___range_2)); }
	inline Vector2_t865627502  get_range_2() const { return ___range_2; }
	inline Vector2_t865627502 * get_address_of_range_2() { return &___range_2; }
	inline void set_range_2(Vector2_t865627502  value)
	{
		___range_2 = value;
	}

	inline static int32_t get_offset_of_mTrans_3() { return static_cast<int32_t>(offsetof(TiltWindow_t140785075, ___mTrans_3)); }
	inline Transform_t4086579593 * get_mTrans_3() const { return ___mTrans_3; }
	inline Transform_t4086579593 ** get_address_of_mTrans_3() { return &___mTrans_3; }
	inline void set_mTrans_3(Transform_t4086579593 * value)
	{
		___mTrans_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTrans_3), value);
	}

	inline static int32_t get_offset_of_mStart_4() { return static_cast<int32_t>(offsetof(TiltWindow_t140785075, ___mStart_4)); }
	inline Quaternion_t2888583384  get_mStart_4() const { return ___mStart_4; }
	inline Quaternion_t2888583384 * get_address_of_mStart_4() { return &___mStart_4; }
	inline void set_mStart_4(Quaternion_t2888583384  value)
	{
		___mStart_4 = value;
	}

	inline static int32_t get_offset_of_mRot_5() { return static_cast<int32_t>(offsetof(TiltWindow_t140785075, ___mRot_5)); }
	inline Vector2_t865627502  get_mRot_5() const { return ___mRot_5; }
	inline Vector2_t865627502 * get_address_of_mRot_5() { return &___mRot_5; }
	inline void set_mRot_5(Vector2_t865627502  value)
	{
		___mRot_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILTWINDOW_T140785075_H
#ifndef LOADSCENEONCLICK_T2045478053_H
#define LOADSCENEONCLICK_T2045478053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadSceneOnClick
struct  LoadSceneOnClick_t2045478053  : public MonoBehaviour_t2964826054
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADSCENEONCLICK_T2045478053_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2000 = { sizeof (LoadSceneOnClick_t2045478053), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2001 = { sizeof (LoadSceneWithSpecialIndex_t1130835262), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2001[1] = 
{
	LoadSceneWithSpecialIndex_t1130835262::get_offset_of_sceneIndex_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2002 = { sizeof (LoginChecker_t1100316458), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2002[1] = 
{
	LoginChecker_t1100316458::get_offset_of_uploadButton_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2003 = { sizeof (jsonObject_t1637687173), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2003[4] = 
{
	jsonObject_t1637687173::get_offset_of_PlayerID_0(),
	jsonObject_t1637687173::get_offset_of_Date_1(),
	jsonObject_t1637687173::get_offset_of_Eventtype_2(),
	jsonObject_t1637687173::get_offset_of_value_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2004 = { sizeof (Messung_t588786527), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2004[4] = 
{
	Messung_t588786527::get_offset_of_s_2(),
	Messung_t588786527::get_offset_of_fs_3(),
	Messung_t588786527::get_offset_of_ID_4(),
	Messung_t588786527::get_offset_of_obj_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2005 = { sizeof (RotateWorld_t4027787929), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2005[4] = 
{
	RotateWorld_t4027787929::get_offset_of_rotateSpeed_2(),
	RotateWorld_t4027787929::get_offset_of_pointerX_3(),
	RotateWorld_t4027787929::get_offset_of_levelManager_4(),
	RotateWorld_t4027787929::get_offset_of_originalRad_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2006 = { sizeof (PanelManager_t1146899019), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2006[6] = 
{
	PanelManager_t1146899019::get_offset_of_initiallyOpen_2(),
	PanelManager_t1146899019::get_offset_of_m_OpenParameterId_3(),
	PanelManager_t1146899019::get_offset_of_m_Open_4(),
	PanelManager_t1146899019::get_offset_of_m_PreviouslySelected_5(),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2007 = { sizeof (U3CDisablePanelDeleyedU3Ec__Iterator0_t2716507603), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2007[7] = 
{
	U3CDisablePanelDeleyedU3Ec__Iterator0_t2716507603::get_offset_of_U3CclosedStateReachedU3E__0_0(),
	U3CDisablePanelDeleyedU3Ec__Iterator0_t2716507603::get_offset_of_U3CwantToCloseU3E__0_1(),
	U3CDisablePanelDeleyedU3Ec__Iterator0_t2716507603::get_offset_of_anim_2(),
	U3CDisablePanelDeleyedU3Ec__Iterator0_t2716507603::get_offset_of_U24this_3(),
	U3CDisablePanelDeleyedU3Ec__Iterator0_t2716507603::get_offset_of_U24current_4(),
	U3CDisablePanelDeleyedU3Ec__Iterator0_t2716507603::get_offset_of_U24disposing_5(),
	U3CDisablePanelDeleyedU3Ec__Iterator0_t2716507603::get_offset_of_U24PC_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2008 = { sizeof (ResizePanel_t1383245641), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2008[5] = 
{
	ResizePanel_t1383245641::get_offset_of_minSize_2(),
	ResizePanel_t1383245641::get_offset_of_maxSize_3(),
	ResizePanel_t1383245641::get_offset_of_panelRectTransform_4(),
	ResizePanel_t1383245641::get_offset_of_originalLocalPointerPosition_5(),
	ResizePanel_t1383245641::get_offset_of_originalSizeDelta_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2009 = { sizeof (SceneLoader_t855965348), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2009[3] = 
{
	SceneLoader_t855965348::get_offset_of_loadScene_2(),
	SceneLoader_t855965348::get_offset_of_scene_3(),
	SceneLoader_t855965348::get_offset_of_loadingText_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2010 = { sizeof (U3CLoadNewSceneU3Ec__Iterator0_t1230307109), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2010[5] = 
{
	U3CLoadNewSceneU3Ec__Iterator0_t1230307109::get_offset_of_U3CasyncU3E__0_0(),
	U3CLoadNewSceneU3Ec__Iterator0_t1230307109::get_offset_of_U24this_1(),
	U3CLoadNewSceneU3Ec__Iterator0_t1230307109::get_offset_of_U24current_2(),
	U3CLoadNewSceneU3Ec__Iterator0_t1230307109::get_offset_of_U24disposing_3(),
	U3CLoadNewSceneU3Ec__Iterator0_t1230307109::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2011 = { sizeof (ScrollDetailTexture_t1851178618), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2011[7] = 
{
	ScrollDetailTexture_t1851178618::get_offset_of_uniqueMaterial_2(),
	ScrollDetailTexture_t1851178618::get_offset_of_scrollPerSecond_3(),
	ScrollDetailTexture_t1851178618::get_offset_of_m_Matrix_4(),
	ScrollDetailTexture_t1851178618::get_offset_of_mCopy_5(),
	ScrollDetailTexture_t1851178618::get_offset_of_mOriginal_6(),
	ScrollDetailTexture_t1851178618::get_offset_of_mSprite_7(),
	ScrollDetailTexture_t1851178618::get_offset_of_m_Mat_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2012 = { sizeof (ShowSliderValue_t2859194553), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2013 = { sizeof (TiltWindow_t140785075), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2013[4] = 
{
	TiltWindow_t140785075::get_offset_of_range_2(),
	TiltWindow_t140785075::get_offset_of_mTrans_3(),
	TiltWindow_t140785075::get_offset_of_mStart_4(),
	TiltWindow_t140785075::get_offset_of_mRot_5(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
