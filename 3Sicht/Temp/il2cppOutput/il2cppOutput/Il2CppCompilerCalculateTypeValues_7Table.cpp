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

// System.UInt32[]
struct UInt32U5BU5D_t4145687601;
// System.Byte[]
struct ByteU5BU5D_t1239206108;
// System.Reflection.Assembly
struct Assembly_t873894858;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t2779961255;
// System.String
struct String_t;
// System.Version
struct Version_t1307498865;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1670651488;
// System.Collections.ArrayList
struct ArrayList_t2267421990;
// System.Char[]
struct CharU5BU5D_t3791132852;
// System.Collections.Hashtable
struct Hashtable_t3091114771;
// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t1094454198;
// System.IntPtr[]
struct IntPtrU5BU5D_t4099883188;
// System.Collections.IDictionary
struct IDictionary_t362602217;
// System.Text.DecoderFallback
struct DecoderFallback_t1883533687;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t920557428;
// System.Text.EncoderFallback
struct EncoderFallback_t89076269;
// System.Text.EncodingInfo[]
struct EncodingInfoU5BU5D_t2183737153;
// System.Object[]
struct ObjectU5BU5D_t966437016;
// System.Text.Encoding
struct Encoding_t1342771939;
// System.Security.SecurityContext
struct SecurityContext_t2766911887;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t3211106597;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t264187104;
// System.Collections.IEnumerator
struct IEnumerator_t3084144227;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t3154567402;
// System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
struct IList_1_t1473113418;
// System.Security.Policy.PolicyStatement
struct PolicyStatement_t1512005238;
// System.Security.Policy.IMembershipCondition
struct IMembershipCondition_t4229389596;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2878141640;
// System.UInt64[]
struct UInt64U5BU5D_t2614999249;
// System.Void
struct Void_t1503135557;
// System.SByte[]
struct SByteU5BU5D_t462354850;
// System.AppDomain
struct AppDomain_t1381756575;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.PermissionSet
struct PermissionSet_t4217798818;
// System.Security.Cryptography.DESTransform
struct DESTransform_t1123123525;
// System.Threading.CompressedStack
struct CompressedStack_t1016366904;
// System.Type
struct Type_t;
// System.Security.IPermission
struct IPermission_t2253769590;
// System.Security.Policy.Evidence
struct Evidence_t1786733851;
// System.Security.Cryptography.SHA1Internal
struct SHA1Internal_t689383240;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t1857187301;
// System.Security.Policy.CodeGroup
struct CodeGroup_t4210518413;
// System.Security.SecurityElement
struct SecurityElement_t2948596042;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t3093895349;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2777633894;




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
#ifndef SHA1INTERNAL_T689383240_H
#define SHA1INTERNAL_T689383240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Internal
struct  SHA1Internal_t689383240  : public RuntimeObject
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA1Internal::_H
	UInt32U5BU5D_t4145687601* ____H_0;
	// System.UInt64 System.Security.Cryptography.SHA1Internal::count
	uint64_t ___count_1;
	// System.Byte[] System.Security.Cryptography.SHA1Internal::_ProcessingBuffer
	ByteU5BU5D_t1239206108* ____ProcessingBuffer_2;
	// System.Int32 System.Security.Cryptography.SHA1Internal::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_3;
	// System.UInt32[] System.Security.Cryptography.SHA1Internal::buff
	UInt32U5BU5D_t4145687601* ___buff_4;

public:
	inline static int32_t get_offset_of__H_0() { return static_cast<int32_t>(offsetof(SHA1Internal_t689383240, ____H_0)); }
	inline UInt32U5BU5D_t4145687601* get__H_0() const { return ____H_0; }
	inline UInt32U5BU5D_t4145687601** get_address_of__H_0() { return &____H_0; }
	inline void set__H_0(UInt32U5BU5D_t4145687601* value)
	{
		____H_0 = value;
		Il2CppCodeGenWriteBarrier((&____H_0), value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(SHA1Internal_t689383240, ___count_1)); }
	inline uint64_t get_count_1() const { return ___count_1; }
	inline uint64_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(uint64_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_2() { return static_cast<int32_t>(offsetof(SHA1Internal_t689383240, ____ProcessingBuffer_2)); }
	inline ByteU5BU5D_t1239206108* get__ProcessingBuffer_2() const { return ____ProcessingBuffer_2; }
	inline ByteU5BU5D_t1239206108** get_address_of__ProcessingBuffer_2() { return &____ProcessingBuffer_2; }
	inline void set__ProcessingBuffer_2(ByteU5BU5D_t1239206108* value)
	{
		____ProcessingBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_2), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_3() { return static_cast<int32_t>(offsetof(SHA1Internal_t689383240, ____ProcessingBufferCount_3)); }
	inline int32_t get__ProcessingBufferCount_3() const { return ____ProcessingBufferCount_3; }
	inline int32_t* get_address_of__ProcessingBufferCount_3() { return &____ProcessingBufferCount_3; }
	inline void set__ProcessingBufferCount_3(int32_t value)
	{
		____ProcessingBufferCount_3 = value;
	}

	inline static int32_t get_offset_of_buff_4() { return static_cast<int32_t>(offsetof(SHA1Internal_t689383240, ___buff_4)); }
	inline UInt32U5BU5D_t4145687601* get_buff_4() const { return ___buff_4; }
	inline UInt32U5BU5D_t4145687601** get_address_of_buff_4() { return &___buff_4; }
	inline void set_buff_4(UInt32U5BU5D_t4145687601* value)
	{
		___buff_4 = value;
		Il2CppCodeGenWriteBarrier((&___buff_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1INTERNAL_T689383240_H
#ifndef HASH_T3935732982_H
#define HASH_T3935732982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Hash
struct  Hash_t3935732982  : public RuntimeObject
{
public:
	// System.Reflection.Assembly System.Security.Policy.Hash::assembly
	Assembly_t873894858 * ___assembly_0;
	// System.Byte[] System.Security.Policy.Hash::data
	ByteU5BU5D_t1239206108* ___data_1;

public:
	inline static int32_t get_offset_of_assembly_0() { return static_cast<int32_t>(offsetof(Hash_t3935732982, ___assembly_0)); }
	inline Assembly_t873894858 * get_assembly_0() const { return ___assembly_0; }
	inline Assembly_t873894858 ** get_address_of_assembly_0() { return &___assembly_0; }
	inline void set_assembly_0(Assembly_t873894858 * value)
	{
		___assembly_0 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_0), value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(Hash_t3935732982, ___data_1)); }
	inline ByteU5BU5D_t1239206108* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t1239206108** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t1239206108* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASH_T3935732982_H
#ifndef STRONGNAME_T1073259427_H
#define STRONGNAME_T1073259427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.StrongName
struct  StrongName_t1073259427  : public RuntimeObject
{
public:
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::publickey
	StrongNamePublicKeyBlob_t2779961255 * ___publickey_0;
	// System.String System.Security.Policy.StrongName::name
	String_t* ___name_1;
	// System.Version System.Security.Policy.StrongName::version
	Version_t1307498865 * ___version_2;

public:
	inline static int32_t get_offset_of_publickey_0() { return static_cast<int32_t>(offsetof(StrongName_t1073259427, ___publickey_0)); }
	inline StrongNamePublicKeyBlob_t2779961255 * get_publickey_0() const { return ___publickey_0; }
	inline StrongNamePublicKeyBlob_t2779961255 ** get_address_of_publickey_0() { return &___publickey_0; }
	inline void set_publickey_0(StrongNamePublicKeyBlob_t2779961255 * value)
	{
		___publickey_0 = value;
		Il2CppCodeGenWriteBarrier((&___publickey_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(StrongName_t1073259427, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(StrongName_t1073259427, ___version_2)); }
	inline Version_t1307498865 * get_version_2() const { return ___version_2; }
	inline Version_t1307498865 ** get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(Version_t1307498865 * value)
	{
		___version_2 = value;
		Il2CppCodeGenWriteBarrier((&___version_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAME_T1073259427_H
#ifndef CODEACCESSPERMISSION_T1899781089_H
#define CODEACCESSPERMISSION_T1899781089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.CodeAccessPermission
struct  CodeAccessPermission_t1899781089  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSPERMISSION_T1899781089_H
#ifndef PERMISSIONSET_T4217798818_H
#define PERMISSIONSET_T4217798818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PermissionSet
struct  PermissionSet_t4217798818  : public RuntimeObject
{
public:
	// System.Security.Policy.PolicyLevel System.Security.PermissionSet::<Resolver>k__BackingField
	PolicyLevel_t1670651488 * ___U3CResolverU3Ek__BackingField_0;
	// System.Boolean System.Security.PermissionSet::<DeclarativeSecurity>k__BackingField
	bool ___U3CDeclarativeSecurityU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CResolverU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PermissionSet_t4217798818, ___U3CResolverU3Ek__BackingField_0)); }
	inline PolicyLevel_t1670651488 * get_U3CResolverU3Ek__BackingField_0() const { return ___U3CResolverU3Ek__BackingField_0; }
	inline PolicyLevel_t1670651488 ** get_address_of_U3CResolverU3Ek__BackingField_0() { return &___U3CResolverU3Ek__BackingField_0; }
	inline void set_U3CResolverU3Ek__BackingField_0(PolicyLevel_t1670651488 * value)
	{
		___U3CResolverU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CResolverU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CDeclarativeSecurityU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PermissionSet_t4217798818, ___U3CDeclarativeSecurityU3Ek__BackingField_1)); }
	inline bool get_U3CDeclarativeSecurityU3Ek__BackingField_1() const { return ___U3CDeclarativeSecurityU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CDeclarativeSecurityU3Ek__BackingField_1() { return &___U3CDeclarativeSecurityU3Ek__BackingField_1; }
	inline void set_U3CDeclarativeSecurityU3Ek__BackingField_1(bool value)
	{
		___U3CDeclarativeSecurityU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONSET_T4217798818_H
#ifndef SECURITYELEMENT_T2948596042_H
#define SECURITYELEMENT_T2948596042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityElement
struct  SecurityElement_t2948596042  : public RuntimeObject
{
public:
	// System.String System.Security.SecurityElement::text
	String_t* ___text_0;
	// System.String System.Security.SecurityElement::tag
	String_t* ___tag_1;
	// System.Collections.ArrayList System.Security.SecurityElement::attributes
	ArrayList_t2267421990 * ___attributes_2;
	// System.Collections.ArrayList System.Security.SecurityElement::children
	ArrayList_t2267421990 * ___children_3;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(SecurityElement_t2948596042, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier((&___text_0), value);
	}

	inline static int32_t get_offset_of_tag_1() { return static_cast<int32_t>(offsetof(SecurityElement_t2948596042, ___tag_1)); }
	inline String_t* get_tag_1() const { return ___tag_1; }
	inline String_t** get_address_of_tag_1() { return &___tag_1; }
	inline void set_tag_1(String_t* value)
	{
		___tag_1 = value;
		Il2CppCodeGenWriteBarrier((&___tag_1), value);
	}

	inline static int32_t get_offset_of_attributes_2() { return static_cast<int32_t>(offsetof(SecurityElement_t2948596042, ___attributes_2)); }
	inline ArrayList_t2267421990 * get_attributes_2() const { return ___attributes_2; }
	inline ArrayList_t2267421990 ** get_address_of_attributes_2() { return &___attributes_2; }
	inline void set_attributes_2(ArrayList_t2267421990 * value)
	{
		___attributes_2 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_2), value);
	}

	inline static int32_t get_offset_of_children_3() { return static_cast<int32_t>(offsetof(SecurityElement_t2948596042, ___children_3)); }
	inline ArrayList_t2267421990 * get_children_3() const { return ___children_3; }
	inline ArrayList_t2267421990 ** get_address_of_children_3() { return &___children_3; }
	inline void set_children_3(ArrayList_t2267421990 * value)
	{
		___children_3 = value;
		Il2CppCodeGenWriteBarrier((&___children_3), value);
	}
};

struct SecurityElement_t2948596042_StaticFields
{
public:
	// System.Char[] System.Security.SecurityElement::invalid_tag_chars
	CharU5BU5D_t3791132852* ___invalid_tag_chars_4;
	// System.Char[] System.Security.SecurityElement::invalid_text_chars
	CharU5BU5D_t3791132852* ___invalid_text_chars_5;
	// System.Char[] System.Security.SecurityElement::invalid_attr_name_chars
	CharU5BU5D_t3791132852* ___invalid_attr_name_chars_6;
	// System.Char[] System.Security.SecurityElement::invalid_attr_value_chars
	CharU5BU5D_t3791132852* ___invalid_attr_value_chars_7;
	// System.Char[] System.Security.SecurityElement::invalid_chars
	CharU5BU5D_t3791132852* ___invalid_chars_8;

public:
	inline static int32_t get_offset_of_invalid_tag_chars_4() { return static_cast<int32_t>(offsetof(SecurityElement_t2948596042_StaticFields, ___invalid_tag_chars_4)); }
	inline CharU5BU5D_t3791132852* get_invalid_tag_chars_4() const { return ___invalid_tag_chars_4; }
	inline CharU5BU5D_t3791132852** get_address_of_invalid_tag_chars_4() { return &___invalid_tag_chars_4; }
	inline void set_invalid_tag_chars_4(CharU5BU5D_t3791132852* value)
	{
		___invalid_tag_chars_4 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_tag_chars_4), value);
	}

	inline static int32_t get_offset_of_invalid_text_chars_5() { return static_cast<int32_t>(offsetof(SecurityElement_t2948596042_StaticFields, ___invalid_text_chars_5)); }
	inline CharU5BU5D_t3791132852* get_invalid_text_chars_5() const { return ___invalid_text_chars_5; }
	inline CharU5BU5D_t3791132852** get_address_of_invalid_text_chars_5() { return &___invalid_text_chars_5; }
	inline void set_invalid_text_chars_5(CharU5BU5D_t3791132852* value)
	{
		___invalid_text_chars_5 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_text_chars_5), value);
	}

	inline static int32_t get_offset_of_invalid_attr_name_chars_6() { return static_cast<int32_t>(offsetof(SecurityElement_t2948596042_StaticFields, ___invalid_attr_name_chars_6)); }
	inline CharU5BU5D_t3791132852* get_invalid_attr_name_chars_6() const { return ___invalid_attr_name_chars_6; }
	inline CharU5BU5D_t3791132852** get_address_of_invalid_attr_name_chars_6() { return &___invalid_attr_name_chars_6; }
	inline void set_invalid_attr_name_chars_6(CharU5BU5D_t3791132852* value)
	{
		___invalid_attr_name_chars_6 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_attr_name_chars_6), value);
	}

	inline static int32_t get_offset_of_invalid_attr_value_chars_7() { return static_cast<int32_t>(offsetof(SecurityElement_t2948596042_StaticFields, ___invalid_attr_value_chars_7)); }
	inline CharU5BU5D_t3791132852* get_invalid_attr_value_chars_7() const { return ___invalid_attr_value_chars_7; }
	inline CharU5BU5D_t3791132852** get_address_of_invalid_attr_value_chars_7() { return &___invalid_attr_value_chars_7; }
	inline void set_invalid_attr_value_chars_7(CharU5BU5D_t3791132852* value)
	{
		___invalid_attr_value_chars_7 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_attr_value_chars_7), value);
	}

	inline static int32_t get_offset_of_invalid_chars_8() { return static_cast<int32_t>(offsetof(SecurityElement_t2948596042_StaticFields, ___invalid_chars_8)); }
	inline CharU5BU5D_t3791132852* get_invalid_chars_8() const { return ___invalid_chars_8; }
	inline CharU5BU5D_t3791132852** get_address_of_invalid_chars_8() { return &___invalid_chars_8; }
	inline void set_invalid_chars_8(CharU5BU5D_t3791132852* value)
	{
		___invalid_chars_8 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_chars_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYELEMENT_T2948596042_H
#ifndef SECURITYATTRIBUTE_T2663633109_H
#define SECURITYATTRIBUTE_T2663633109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityElement/SecurityAttribute
struct  SecurityAttribute_t2663633109  : public RuntimeObject
{
public:
	// System.String System.Security.SecurityElement/SecurityAttribute::_name
	String_t* ____name_0;
	// System.String System.Security.SecurityElement/SecurityAttribute::_value
	String_t* ____value_1;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(SecurityAttribute_t2663633109, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(SecurityAttribute_t2663633109, ____value_1)); }
	inline String_t* get__value_1() const { return ____value_1; }
	inline String_t** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(String_t* value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T2663633109_H
#ifndef SECURITYMANAGER_T2072947474_H
#define SECURITYMANAGER_T2072947474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityManager
struct  SecurityManager_t2072947474  : public RuntimeObject
{
public:

public:
};

struct SecurityManager_t2072947474_StaticFields
{
public:
	// System.Object System.Security.SecurityManager::_lockObject
	RuntimeObject * ____lockObject_0;
	// System.Collections.Hashtable System.Security.SecurityManager::_declsecCache
	Hashtable_t3091114771 * ____declsecCache_1;
	// System.Security.Permissions.SecurityPermission System.Security.SecurityManager::_execution
	SecurityPermission_t1094454198 * ____execution_2;

public:
	inline static int32_t get_offset_of__lockObject_0() { return static_cast<int32_t>(offsetof(SecurityManager_t2072947474_StaticFields, ____lockObject_0)); }
	inline RuntimeObject * get__lockObject_0() const { return ____lockObject_0; }
	inline RuntimeObject ** get_address_of__lockObject_0() { return &____lockObject_0; }
	inline void set__lockObject_0(RuntimeObject * value)
	{
		____lockObject_0 = value;
		Il2CppCodeGenWriteBarrier((&____lockObject_0), value);
	}

	inline static int32_t get_offset_of__declsecCache_1() { return static_cast<int32_t>(offsetof(SecurityManager_t2072947474_StaticFields, ____declsecCache_1)); }
	inline Hashtable_t3091114771 * get__declsecCache_1() const { return ____declsecCache_1; }
	inline Hashtable_t3091114771 ** get_address_of__declsecCache_1() { return &____declsecCache_1; }
	inline void set__declsecCache_1(Hashtable_t3091114771 * value)
	{
		____declsecCache_1 = value;
		Il2CppCodeGenWriteBarrier((&____declsecCache_1), value);
	}

	inline static int32_t get_offset_of__execution_2() { return static_cast<int32_t>(offsetof(SecurityManager_t2072947474_StaticFields, ____execution_2)); }
	inline SecurityPermission_t1094454198 * get__execution_2() const { return ____execution_2; }
	inline SecurityPermission_t1094454198 ** get_address_of__execution_2() { return &____execution_2; }
	inline void set__execution_2(SecurityPermission_t1094454198 * value)
	{
		____execution_2 = value;
		Il2CppCodeGenWriteBarrier((&____execution_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYMANAGER_T2072947474_H
#ifndef EXCEPTION_T2980777455_H
#define EXCEPTION_T2980777455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t2980777455  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4099883188* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t2980777455 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t2980777455, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4099883188* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4099883188** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4099883188* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t2980777455, ___inner_exception_1)); }
	inline Exception_t2980777455 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t2980777455 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t2980777455 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t2980777455, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t2980777455, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t2980777455, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t2980777455, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t2980777455, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t2980777455, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t2980777455, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t2980777455, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t2980777455, ____data_10)); }
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
#endif // EXCEPTION_T2980777455_H
#ifndef DECODER_T2410135258_H
#define DECODER_T2410135258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Decoder
struct  Decoder_t2410135258  : public RuntimeObject
{
public:
	// System.Text.DecoderFallback System.Text.Decoder::fallback
	DecoderFallback_t1883533687 * ___fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::fallback_buffer
	DecoderFallbackBuffer_t920557428 * ___fallback_buffer_1;

public:
	inline static int32_t get_offset_of_fallback_0() { return static_cast<int32_t>(offsetof(Decoder_t2410135258, ___fallback_0)); }
	inline DecoderFallback_t1883533687 * get_fallback_0() const { return ___fallback_0; }
	inline DecoderFallback_t1883533687 ** get_address_of_fallback_0() { return &___fallback_0; }
	inline void set_fallback_0(DecoderFallback_t1883533687 * value)
	{
		___fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___fallback_0), value);
	}

	inline static int32_t get_offset_of_fallback_buffer_1() { return static_cast<int32_t>(offsetof(Decoder_t2410135258, ___fallback_buffer_1)); }
	inline DecoderFallbackBuffer_t920557428 * get_fallback_buffer_1() const { return ___fallback_buffer_1; }
	inline DecoderFallbackBuffer_t920557428 ** get_address_of_fallback_buffer_1() { return &___fallback_buffer_1; }
	inline void set_fallback_buffer_1(DecoderFallbackBuffer_t920557428 * value)
	{
		___fallback_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___fallback_buffer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODER_T2410135258_H
#ifndef DECODERFALLBACK_T1883533687_H
#define DECODERFALLBACK_T1883533687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallback
struct  DecoderFallback_t1883533687  : public RuntimeObject
{
public:

public:
};

struct DecoderFallback_t1883533687_StaticFields
{
public:
	// System.Text.DecoderFallback System.Text.DecoderFallback::exception_fallback
	DecoderFallback_t1883533687 * ___exception_fallback_0;
	// System.Text.DecoderFallback System.Text.DecoderFallback::replacement_fallback
	DecoderFallback_t1883533687 * ___replacement_fallback_1;
	// System.Text.DecoderFallback System.Text.DecoderFallback::standard_safe_fallback
	DecoderFallback_t1883533687 * ___standard_safe_fallback_2;

public:
	inline static int32_t get_offset_of_exception_fallback_0() { return static_cast<int32_t>(offsetof(DecoderFallback_t1883533687_StaticFields, ___exception_fallback_0)); }
	inline DecoderFallback_t1883533687 * get_exception_fallback_0() const { return ___exception_fallback_0; }
	inline DecoderFallback_t1883533687 ** get_address_of_exception_fallback_0() { return &___exception_fallback_0; }
	inline void set_exception_fallback_0(DecoderFallback_t1883533687 * value)
	{
		___exception_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___exception_fallback_0), value);
	}

	inline static int32_t get_offset_of_replacement_fallback_1() { return static_cast<int32_t>(offsetof(DecoderFallback_t1883533687_StaticFields, ___replacement_fallback_1)); }
	inline DecoderFallback_t1883533687 * get_replacement_fallback_1() const { return ___replacement_fallback_1; }
	inline DecoderFallback_t1883533687 ** get_address_of_replacement_fallback_1() { return &___replacement_fallback_1; }
	inline void set_replacement_fallback_1(DecoderFallback_t1883533687 * value)
	{
		___replacement_fallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_fallback_1), value);
	}

	inline static int32_t get_offset_of_standard_safe_fallback_2() { return static_cast<int32_t>(offsetof(DecoderFallback_t1883533687_StaticFields, ___standard_safe_fallback_2)); }
	inline DecoderFallback_t1883533687 * get_standard_safe_fallback_2() const { return ___standard_safe_fallback_2; }
	inline DecoderFallback_t1883533687 ** get_address_of_standard_safe_fallback_2() { return &___standard_safe_fallback_2; }
	inline void set_standard_safe_fallback_2(DecoderFallback_t1883533687 * value)
	{
		___standard_safe_fallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___standard_safe_fallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACK_T1883533687_H
#ifndef DECODERFALLBACKBUFFER_T920557428_H
#define DECODERFALLBACKBUFFER_T920557428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallbackBuffer
struct  DecoderFallbackBuffer_t920557428  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACKBUFFER_T920557428_H
#ifndef ENCODERFALLBACK_T89076269_H
#define ENCODERFALLBACK_T89076269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallback
struct  EncoderFallback_t89076269  : public RuntimeObject
{
public:

public:
};

struct EncoderFallback_t89076269_StaticFields
{
public:
	// System.Text.EncoderFallback System.Text.EncoderFallback::exception_fallback
	EncoderFallback_t89076269 * ___exception_fallback_0;
	// System.Text.EncoderFallback System.Text.EncoderFallback::replacement_fallback
	EncoderFallback_t89076269 * ___replacement_fallback_1;
	// System.Text.EncoderFallback System.Text.EncoderFallback::standard_safe_fallback
	EncoderFallback_t89076269 * ___standard_safe_fallback_2;

public:
	inline static int32_t get_offset_of_exception_fallback_0() { return static_cast<int32_t>(offsetof(EncoderFallback_t89076269_StaticFields, ___exception_fallback_0)); }
	inline EncoderFallback_t89076269 * get_exception_fallback_0() const { return ___exception_fallback_0; }
	inline EncoderFallback_t89076269 ** get_address_of_exception_fallback_0() { return &___exception_fallback_0; }
	inline void set_exception_fallback_0(EncoderFallback_t89076269 * value)
	{
		___exception_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___exception_fallback_0), value);
	}

	inline static int32_t get_offset_of_replacement_fallback_1() { return static_cast<int32_t>(offsetof(EncoderFallback_t89076269_StaticFields, ___replacement_fallback_1)); }
	inline EncoderFallback_t89076269 * get_replacement_fallback_1() const { return ___replacement_fallback_1; }
	inline EncoderFallback_t89076269 ** get_address_of_replacement_fallback_1() { return &___replacement_fallback_1; }
	inline void set_replacement_fallback_1(EncoderFallback_t89076269 * value)
	{
		___replacement_fallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_fallback_1), value);
	}

	inline static int32_t get_offset_of_standard_safe_fallback_2() { return static_cast<int32_t>(offsetof(EncoderFallback_t89076269_StaticFields, ___standard_safe_fallback_2)); }
	inline EncoderFallback_t89076269 * get_standard_safe_fallback_2() const { return ___standard_safe_fallback_2; }
	inline EncoderFallback_t89076269 ** get_address_of_standard_safe_fallback_2() { return &___standard_safe_fallback_2; }
	inline void set_standard_safe_fallback_2(EncoderFallback_t89076269 * value)
	{
		___standard_safe_fallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___standard_safe_fallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACK_T89076269_H
#ifndef ENCODERFALLBACKBUFFER_T2545218937_H
#define ENCODERFALLBACKBUFFER_T2545218937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackBuffer
struct  EncoderFallbackBuffer_t2545218937  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKBUFFER_T2545218937_H
#ifndef ENCODING_T1342771939_H
#define ENCODING_T1342771939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1342771939  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t1883533687 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t89076269 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_9;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_10;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_11;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_12;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_13;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_14;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_15;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_16;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t1342771939, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t1342771939, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t1342771939, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t1342771939, ___decoder_fallback_3)); }
	inline DecoderFallback_t1883533687 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t1883533687 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t1883533687 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t1342771939, ___encoder_fallback_4)); }
	inline EncoderFallback_t89076269 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t89076269 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t89076269 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_9() { return static_cast<int32_t>(offsetof(Encoding_t1342771939, ___body_name_9)); }
	inline String_t* get_body_name_9() const { return ___body_name_9; }
	inline String_t** get_address_of_body_name_9() { return &___body_name_9; }
	inline void set_body_name_9(String_t* value)
	{
		___body_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_9), value);
	}

	inline static int32_t get_offset_of_encoding_name_10() { return static_cast<int32_t>(offsetof(Encoding_t1342771939, ___encoding_name_10)); }
	inline String_t* get_encoding_name_10() const { return ___encoding_name_10; }
	inline String_t** get_address_of_encoding_name_10() { return &___encoding_name_10; }
	inline void set_encoding_name_10(String_t* value)
	{
		___encoding_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_10), value);
	}

	inline static int32_t get_offset_of_header_name_11() { return static_cast<int32_t>(offsetof(Encoding_t1342771939, ___header_name_11)); }
	inline String_t* get_header_name_11() const { return ___header_name_11; }
	inline String_t** get_address_of_header_name_11() { return &___header_name_11; }
	inline void set_header_name_11(String_t* value)
	{
		___header_name_11 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_11), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_12() { return static_cast<int32_t>(offsetof(Encoding_t1342771939, ___is_mail_news_display_12)); }
	inline bool get_is_mail_news_display_12() const { return ___is_mail_news_display_12; }
	inline bool* get_address_of_is_mail_news_display_12() { return &___is_mail_news_display_12; }
	inline void set_is_mail_news_display_12(bool value)
	{
		___is_mail_news_display_12 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_13() { return static_cast<int32_t>(offsetof(Encoding_t1342771939, ___is_mail_news_save_13)); }
	inline bool get_is_mail_news_save_13() const { return ___is_mail_news_save_13; }
	inline bool* get_address_of_is_mail_news_save_13() { return &___is_mail_news_save_13; }
	inline void set_is_mail_news_save_13(bool value)
	{
		___is_mail_news_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_14() { return static_cast<int32_t>(offsetof(Encoding_t1342771939, ___is_browser_save_14)); }
	inline bool get_is_browser_save_14() const { return ___is_browser_save_14; }
	inline bool* get_address_of_is_browser_save_14() { return &___is_browser_save_14; }
	inline void set_is_browser_save_14(bool value)
	{
		___is_browser_save_14 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_15() { return static_cast<int32_t>(offsetof(Encoding_t1342771939, ___is_browser_display_15)); }
	inline bool get_is_browser_display_15() const { return ___is_browser_display_15; }
	inline bool* get_address_of_is_browser_display_15() { return &___is_browser_display_15; }
	inline void set_is_browser_display_15(bool value)
	{
		___is_browser_display_15 = value;
	}

	inline static int32_t get_offset_of_web_name_16() { return static_cast<int32_t>(offsetof(Encoding_t1342771939, ___web_name_16)); }
	inline String_t* get_web_name_16() const { return ___web_name_16; }
	inline String_t** get_address_of_web_name_16() { return &___web_name_16; }
	inline void set_web_name_16(String_t* value)
	{
		___web_name_16 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_16), value);
	}
};

struct Encoding_t1342771939_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t873894858 * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Text.EncodingInfo[] System.Text.Encoding::encoding_infos
	EncodingInfoU5BU5D_t2183737153* ___encoding_infos_7;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t966437016* ___encodings_8;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1342771939 * ___asciiEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1342771939 * ___bigEndianEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1342771939 * ___defaultEncoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1342771939 * ___utf7Encoding_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1342771939 * ___utf8EncodingWithMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1342771939 * ___utf8EncodingWithoutMarkers_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1342771939 * ___unicodeEncoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1342771939 * ___isoLatin1Encoding_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1342771939 * ___utf8EncodingUnsafe_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1342771939 * ___utf32Encoding_26;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1342771939 * ___bigEndianUTF32Encoding_27;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_28;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t1342771939_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t873894858 * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t873894858 ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t873894858 * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t1342771939_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encoding_infos_7() { return static_cast<int32_t>(offsetof(Encoding_t1342771939_StaticFields, ___encoding_infos_7)); }
	inline EncodingInfoU5BU5D_t2183737153* get_encoding_infos_7() const { return ___encoding_infos_7; }
	inline EncodingInfoU5BU5D_t2183737153** get_address_of_encoding_infos_7() { return &___encoding_infos_7; }
	inline void set_encoding_infos_7(EncodingInfoU5BU5D_t2183737153* value)
	{
		___encoding_infos_7 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_infos_7), value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t1342771939_StaticFields, ___encodings_8)); }
	inline ObjectU5BU5D_t966437016* get_encodings_8() const { return ___encodings_8; }
	inline ObjectU5BU5D_t966437016** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(ObjectU5BU5D_t966437016* value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_8), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t1342771939_StaticFields, ___asciiEncoding_17)); }
	inline Encoding_t1342771939 * get_asciiEncoding_17() const { return ___asciiEncoding_17; }
	inline Encoding_t1342771939 ** get_address_of_asciiEncoding_17() { return &___asciiEncoding_17; }
	inline void set_asciiEncoding_17(Encoding_t1342771939 * value)
	{
		___asciiEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_17), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t1342771939_StaticFields, ___bigEndianEncoding_18)); }
	inline Encoding_t1342771939 * get_bigEndianEncoding_18() const { return ___bigEndianEncoding_18; }
	inline Encoding_t1342771939 ** get_address_of_bigEndianEncoding_18() { return &___bigEndianEncoding_18; }
	inline void set_bigEndianEncoding_18(Encoding_t1342771939 * value)
	{
		___bigEndianEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_18), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_19() { return static_cast<int32_t>(offsetof(Encoding_t1342771939_StaticFields, ___defaultEncoding_19)); }
	inline Encoding_t1342771939 * get_defaultEncoding_19() const { return ___defaultEncoding_19; }
	inline Encoding_t1342771939 ** get_address_of_defaultEncoding_19() { return &___defaultEncoding_19; }
	inline void set_defaultEncoding_19(Encoding_t1342771939 * value)
	{
		___defaultEncoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_19), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_20() { return static_cast<int32_t>(offsetof(Encoding_t1342771939_StaticFields, ___utf7Encoding_20)); }
	inline Encoding_t1342771939 * get_utf7Encoding_20() const { return ___utf7Encoding_20; }
	inline Encoding_t1342771939 ** get_address_of_utf7Encoding_20() { return &___utf7Encoding_20; }
	inline void set_utf7Encoding_20(Encoding_t1342771939 * value)
	{
		___utf7Encoding_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t1342771939_StaticFields, ___utf8EncodingWithMarkers_21)); }
	inline Encoding_t1342771939 * get_utf8EncodingWithMarkers_21() const { return ___utf8EncodingWithMarkers_21; }
	inline Encoding_t1342771939 ** get_address_of_utf8EncodingWithMarkers_21() { return &___utf8EncodingWithMarkers_21; }
	inline void set_utf8EncodingWithMarkers_21(Encoding_t1342771939 * value)
	{
		___utf8EncodingWithMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_21), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_22() { return static_cast<int32_t>(offsetof(Encoding_t1342771939_StaticFields, ___utf8EncodingWithoutMarkers_22)); }
	inline Encoding_t1342771939 * get_utf8EncodingWithoutMarkers_22() const { return ___utf8EncodingWithoutMarkers_22; }
	inline Encoding_t1342771939 ** get_address_of_utf8EncodingWithoutMarkers_22() { return &___utf8EncodingWithoutMarkers_22; }
	inline void set_utf8EncodingWithoutMarkers_22(Encoding_t1342771939 * value)
	{
		___utf8EncodingWithoutMarkers_22 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_22), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_23() { return static_cast<int32_t>(offsetof(Encoding_t1342771939_StaticFields, ___unicodeEncoding_23)); }
	inline Encoding_t1342771939 * get_unicodeEncoding_23() const { return ___unicodeEncoding_23; }
	inline Encoding_t1342771939 ** get_address_of_unicodeEncoding_23() { return &___unicodeEncoding_23; }
	inline void set_unicodeEncoding_23(Encoding_t1342771939 * value)
	{
		___unicodeEncoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_23), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_24() { return static_cast<int32_t>(offsetof(Encoding_t1342771939_StaticFields, ___isoLatin1Encoding_24)); }
	inline Encoding_t1342771939 * get_isoLatin1Encoding_24() const { return ___isoLatin1Encoding_24; }
	inline Encoding_t1342771939 ** get_address_of_isoLatin1Encoding_24() { return &___isoLatin1Encoding_24; }
	inline void set_isoLatin1Encoding_24(Encoding_t1342771939 * value)
	{
		___isoLatin1Encoding_24 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_24), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_25() { return static_cast<int32_t>(offsetof(Encoding_t1342771939_StaticFields, ___utf8EncodingUnsafe_25)); }
	inline Encoding_t1342771939 * get_utf8EncodingUnsafe_25() const { return ___utf8EncodingUnsafe_25; }
	inline Encoding_t1342771939 ** get_address_of_utf8EncodingUnsafe_25() { return &___utf8EncodingUnsafe_25; }
	inline void set_utf8EncodingUnsafe_25(Encoding_t1342771939 * value)
	{
		___utf8EncodingUnsafe_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_25), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t1342771939_StaticFields, ___utf32Encoding_26)); }
	inline Encoding_t1342771939 * get_utf32Encoding_26() const { return ___utf32Encoding_26; }
	inline Encoding_t1342771939 ** get_address_of_utf32Encoding_26() { return &___utf32Encoding_26; }
	inline void set_utf32Encoding_26(Encoding_t1342771939 * value)
	{
		___utf32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_26), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_27() { return static_cast<int32_t>(offsetof(Encoding_t1342771939_StaticFields, ___bigEndianUTF32Encoding_27)); }
	inline Encoding_t1342771939 * get_bigEndianUTF32Encoding_27() const { return ___bigEndianUTF32Encoding_27; }
	inline Encoding_t1342771939 ** get_address_of_bigEndianUTF32Encoding_27() { return &___bigEndianUTF32Encoding_27; }
	inline void set_bigEndianUTF32Encoding_27(Encoding_t1342771939 * value)
	{
		___bigEndianUTF32Encoding_27 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_27), value);
	}

	inline static int32_t get_offset_of_lockobj_28() { return static_cast<int32_t>(offsetof(Encoding_t1342771939_StaticFields, ___lockobj_28)); }
	inline RuntimeObject * get_lockobj_28() const { return ___lockobj_28; }
	inline RuntimeObject ** get_address_of_lockobj_28() { return &___lockobj_28; }
	inline void set_lockobj_28(RuntimeObject * value)
	{
		___lockobj_28 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1342771939_H
#ifndef ENCODINGINFO_T1680052672_H
#define ENCODINGINFO_T1680052672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncodingInfo
struct  EncodingInfo_t1680052672  : public RuntimeObject
{
public:
	// System.Int32 System.Text.EncodingInfo::codepage
	int32_t ___codepage_0;
	// System.Text.Encoding System.Text.EncodingInfo::encoding
	Encoding_t1342771939 * ___encoding_1;

public:
	inline static int32_t get_offset_of_codepage_0() { return static_cast<int32_t>(offsetof(EncodingInfo_t1680052672, ___codepage_0)); }
	inline int32_t get_codepage_0() const { return ___codepage_0; }
	inline int32_t* get_address_of_codepage_0() { return &___codepage_0; }
	inline void set_codepage_0(int32_t value)
	{
		___codepage_0 = value;
	}

	inline static int32_t get_offset_of_encoding_1() { return static_cast<int32_t>(offsetof(EncodingInfo_t1680052672, ___encoding_1)); }
	inline Encoding_t1342771939 * get_encoding_1() const { return ___encoding_1; }
	inline Encoding_t1342771939 ** get_address_of_encoding_1() { return &___encoding_1; }
	inline void set_encoding_1(Encoding_t1342771939 * value)
	{
		___encoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODINGINFO_T1680052672_H
#ifndef STRINGBUILDER_T1419500028_H
#define STRINGBUILDER_T1419500028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t1419500028  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t1419500028, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t1419500028, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t1419500028, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t1419500028, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T1419500028_H
#ifndef COMPRESSEDSTACK_T1016366904_H
#define COMPRESSEDSTACK_T1016366904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CompressedStack
struct  CompressedStack_t1016366904  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Threading.CompressedStack::_list
	ArrayList_t2267421990 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(CompressedStack_t1016366904, ____list_0)); }
	inline ArrayList_t2267421990 * get__list_0() const { return ____list_0; }
	inline ArrayList_t2267421990 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t2267421990 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPRESSEDSTACK_T1016366904_H
#ifndef EXECUTIONCONTEXT_T4281515249_H
#define EXECUTIONCONTEXT_T4281515249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ExecutionContext
struct  ExecutionContext_t4281515249  : public RuntimeObject
{
public:
	// System.Security.SecurityContext System.Threading.ExecutionContext::_sc
	SecurityContext_t2766911887 * ____sc_0;
	// System.Boolean System.Threading.ExecutionContext::_suppressFlow
	bool ____suppressFlow_1;
	// System.Boolean System.Threading.ExecutionContext::_capture
	bool ____capture_2;

public:
	inline static int32_t get_offset_of__sc_0() { return static_cast<int32_t>(offsetof(ExecutionContext_t4281515249, ____sc_0)); }
	inline SecurityContext_t2766911887 * get__sc_0() const { return ____sc_0; }
	inline SecurityContext_t2766911887 ** get_address_of__sc_0() { return &____sc_0; }
	inline void set__sc_0(SecurityContext_t2766911887 * value)
	{
		____sc_0 = value;
		Il2CppCodeGenWriteBarrier((&____sc_0), value);
	}

	inline static int32_t get_offset_of__suppressFlow_1() { return static_cast<int32_t>(offsetof(ExecutionContext_t4281515249, ____suppressFlow_1)); }
	inline bool get__suppressFlow_1() const { return ____suppressFlow_1; }
	inline bool* get_address_of__suppressFlow_1() { return &____suppressFlow_1; }
	inline void set__suppressFlow_1(bool value)
	{
		____suppressFlow_1 = value;
	}

	inline static int32_t get_offset_of__capture_2() { return static_cast<int32_t>(offsetof(ExecutionContext_t4281515249, ____capture_2)); }
	inline bool get__capture_2() const { return ____capture_2; }
	inline bool* get_address_of__capture_2() { return &____capture_2; }
	inline void set__capture_2(bool value)
	{
		____capture_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTIONCONTEXT_T4281515249_H
#ifndef INTERLOCKED_T2492176926_H
#define INTERLOCKED_T2492176926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Interlocked
struct  Interlocked_t2492176926  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERLOCKED_T2492176926_H
#ifndef HASHALGORITHM_T1165411460_H
#define HASHALGORITHM_T1165411460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t1165411460  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t1239206108* ___HashValue_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_HashValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1165411460, ___HashValue_0)); }
	inline ByteU5BU5D_t1239206108* get_HashValue_0() const { return ___HashValue_0; }
	inline ByteU5BU5D_t1239206108** get_address_of_HashValue_0() { return &___HashValue_0; }
	inline void set_HashValue_0(ByteU5BU5D_t1239206108* value)
	{
		___HashValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_0), value);
	}

	inline static int32_t get_offset_of_HashSizeValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1165411460, ___HashSizeValue_1)); }
	inline int32_t get_HashSizeValue_1() const { return ___HashSizeValue_1; }
	inline int32_t* get_address_of_HashSizeValue_1() { return &___HashSizeValue_1; }
	inline void set_HashSizeValue_1(int32_t value)
	{
		___HashSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1165411460, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1165411460, ___disposed_3)); }
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
#endif // HASHALGORITHM_T1165411460_H
#ifndef SYMMETRICTRANSFORM_T4183031469_H
#define SYMMETRICTRANSFORM_T4183031469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t4183031469  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t3211106597 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t1239206108* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t1239206108* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t1239206108* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t1239206108* ___workout_6;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackIter
	int32_t ___FeedBackIter_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t264187104 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t4183031469, ___algo_0)); }
	inline SymmetricAlgorithm_t3211106597 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t3211106597 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t3211106597 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t4183031469, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t4183031469, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t4183031469, ___temp_3)); }
	inline ByteU5BU5D_t1239206108* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t1239206108** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t1239206108* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t4183031469, ___temp2_4)); }
	inline ByteU5BU5D_t1239206108* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t1239206108** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t1239206108* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t4183031469, ___workBuff_5)); }
	inline ByteU5BU5D_t1239206108* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t1239206108** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t1239206108* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t4183031469, ___workout_6)); }
	inline ByteU5BU5D_t1239206108* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t1239206108** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t1239206108* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_FeedBackByte_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t4183031469, ___FeedBackByte_7)); }
	inline int32_t get_FeedBackByte_7() const { return ___FeedBackByte_7; }
	inline int32_t* get_address_of_FeedBackByte_7() { return &___FeedBackByte_7; }
	inline void set_FeedBackByte_7(int32_t value)
	{
		___FeedBackByte_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackIter_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t4183031469, ___FeedBackIter_8)); }
	inline int32_t get_FeedBackIter_8() const { return ___FeedBackIter_8; }
	inline int32_t* get_address_of_FeedBackIter_8() { return &___FeedBackIter_8; }
	inline void set_FeedBackIter_8(int32_t value)
	{
		___FeedBackIter_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t4183031469, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t4183031469, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t4183031469, ____rng_11)); }
	inline RandomNumberGenerator_t264187104 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t264187104 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t264187104 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T4183031469_H
#ifndef ATTRIBUTE_T491624126_H
#define ATTRIBUTE_T491624126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t491624126  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T491624126_H
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
#ifndef EVIDENCEENUMERATOR_T1742852292_H
#define EVIDENCEENUMERATOR_T1742852292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence/EvidenceEnumerator
struct  EvidenceEnumerator_t1742852292  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::currentEnum
	RuntimeObject* ___currentEnum_0;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::hostEnum
	RuntimeObject* ___hostEnum_1;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::assemblyEnum
	RuntimeObject* ___assemblyEnum_2;

public:
	inline static int32_t get_offset_of_currentEnum_0() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t1742852292, ___currentEnum_0)); }
	inline RuntimeObject* get_currentEnum_0() const { return ___currentEnum_0; }
	inline RuntimeObject** get_address_of_currentEnum_0() { return &___currentEnum_0; }
	inline void set_currentEnum_0(RuntimeObject* value)
	{
		___currentEnum_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentEnum_0), value);
	}

	inline static int32_t get_offset_of_hostEnum_1() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t1742852292, ___hostEnum_1)); }
	inline RuntimeObject* get_hostEnum_1() const { return ___hostEnum_1; }
	inline RuntimeObject** get_address_of_hostEnum_1() { return &___hostEnum_1; }
	inline void set_hostEnum_1(RuntimeObject* value)
	{
		___hostEnum_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEnum_1), value);
	}

	inline static int32_t get_offset_of_assemblyEnum_2() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t1742852292, ___assemblyEnum_2)); }
	inline RuntimeObject* get_assemblyEnum_2() const { return ___assemblyEnum_2; }
	inline RuntimeObject** get_address_of_assemblyEnum_2() { return &___assemblyEnum_2; }
	inline void set_assemblyEnum_2(RuntimeObject* value)
	{
		___assemblyEnum_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEnum_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCEENUMERATOR_T1742852292_H
#ifndef EVIDENCE_T1786733851_H
#define EVIDENCE_T1786733851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence
struct  Evidence_t1786733851  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Policy.Evidence::_locked
	bool ____locked_0;
	// System.Collections.ArrayList System.Security.Policy.Evidence::hostEvidenceList
	ArrayList_t2267421990 * ___hostEvidenceList_1;
	// System.Collections.ArrayList System.Security.Policy.Evidence::assemblyEvidenceList
	ArrayList_t2267421990 * ___assemblyEvidenceList_2;
	// System.Int32 System.Security.Policy.Evidence::_hashCode
	int32_t ____hashCode_3;

public:
	inline static int32_t get_offset_of__locked_0() { return static_cast<int32_t>(offsetof(Evidence_t1786733851, ____locked_0)); }
	inline bool get__locked_0() const { return ____locked_0; }
	inline bool* get_address_of__locked_0() { return &____locked_0; }
	inline void set__locked_0(bool value)
	{
		____locked_0 = value;
	}

	inline static int32_t get_offset_of_hostEvidenceList_1() { return static_cast<int32_t>(offsetof(Evidence_t1786733851, ___hostEvidenceList_1)); }
	inline ArrayList_t2267421990 * get_hostEvidenceList_1() const { return ___hostEvidenceList_1; }
	inline ArrayList_t2267421990 ** get_address_of_hostEvidenceList_1() { return &___hostEvidenceList_1; }
	inline void set_hostEvidenceList_1(ArrayList_t2267421990 * value)
	{
		___hostEvidenceList_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEvidenceList_1), value);
	}

	inline static int32_t get_offset_of_assemblyEvidenceList_2() { return static_cast<int32_t>(offsetof(Evidence_t1786733851, ___assemblyEvidenceList_2)); }
	inline ArrayList_t2267421990 * get_assemblyEvidenceList_2() const { return ___assemblyEvidenceList_2; }
	inline ArrayList_t2267421990 ** get_address_of_assemblyEvidenceList_2() { return &___assemblyEvidenceList_2; }
	inline void set_assemblyEvidenceList_2(ArrayList_t2267421990 * value)
	{
		___assemblyEvidenceList_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEvidenceList_2), value);
	}

	inline static int32_t get_offset_of__hashCode_3() { return static_cast<int32_t>(offsetof(Evidence_t1786733851, ____hashCode_3)); }
	inline int32_t get__hashCode_3() const { return ____hashCode_3; }
	inline int32_t* get_address_of__hashCode_3() { return &____hashCode_3; }
	inline void set__hashCode_3(int32_t value)
	{
		____hashCode_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCE_T1786733851_H
#ifndef MARSHALBYREFOBJECT_T3972262231_H
#define MARSHALBYREFOBJECT_T3972262231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t3972262231  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t3154567402 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t3972262231, ____identity_0)); }
	inline ServerIdentity_t3154567402 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t3154567402 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t3154567402 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T3972262231_H
#ifndef APPLICATIONTRUST_T2488506433_H
#define APPLICATIONTRUST_T2488506433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ApplicationTrust
struct  ApplicationTrust_t2488506433  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<System.Security.Policy.StrongName> System.Security.Policy.ApplicationTrust::fullTrustAssemblies
	RuntimeObject* ___fullTrustAssemblies_0;

public:
	inline static int32_t get_offset_of_fullTrustAssemblies_0() { return static_cast<int32_t>(offsetof(ApplicationTrust_t2488506433, ___fullTrustAssemblies_0)); }
	inline RuntimeObject* get_fullTrustAssemblies_0() const { return ___fullTrustAssemblies_0; }
	inline RuntimeObject** get_address_of_fullTrustAssemblies_0() { return &___fullTrustAssemblies_0; }
	inline void set_fullTrustAssemblies_0(RuntimeObject* value)
	{
		___fullTrustAssemblies_0 = value;
		Il2CppCodeGenWriteBarrier((&___fullTrustAssemblies_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONTRUST_T2488506433_H
#ifndef CODEGROUP_T4210518413_H
#define CODEGROUP_T4210518413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.CodeGroup
struct  CodeGroup_t4210518413  : public RuntimeObject
{
public:
	// System.Security.Policy.PolicyStatement System.Security.Policy.CodeGroup::m_policy
	PolicyStatement_t1512005238 * ___m_policy_0;
	// System.Security.Policy.IMembershipCondition System.Security.Policy.CodeGroup::m_membershipCondition
	RuntimeObject* ___m_membershipCondition_1;
	// System.String System.Security.Policy.CodeGroup::m_description
	String_t* ___m_description_2;
	// System.String System.Security.Policy.CodeGroup::m_name
	String_t* ___m_name_3;
	// System.Collections.ArrayList System.Security.Policy.CodeGroup::m_children
	ArrayList_t2267421990 * ___m_children_4;

public:
	inline static int32_t get_offset_of_m_policy_0() { return static_cast<int32_t>(offsetof(CodeGroup_t4210518413, ___m_policy_0)); }
	inline PolicyStatement_t1512005238 * get_m_policy_0() const { return ___m_policy_0; }
	inline PolicyStatement_t1512005238 ** get_address_of_m_policy_0() { return &___m_policy_0; }
	inline void set_m_policy_0(PolicyStatement_t1512005238 * value)
	{
		___m_policy_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_policy_0), value);
	}

	inline static int32_t get_offset_of_m_membershipCondition_1() { return static_cast<int32_t>(offsetof(CodeGroup_t4210518413, ___m_membershipCondition_1)); }
	inline RuntimeObject* get_m_membershipCondition_1() const { return ___m_membershipCondition_1; }
	inline RuntimeObject** get_address_of_m_membershipCondition_1() { return &___m_membershipCondition_1; }
	inline void set_m_membershipCondition_1(RuntimeObject* value)
	{
		___m_membershipCondition_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_membershipCondition_1), value);
	}

	inline static int32_t get_offset_of_m_description_2() { return static_cast<int32_t>(offsetof(CodeGroup_t4210518413, ___m_description_2)); }
	inline String_t* get_m_description_2() const { return ___m_description_2; }
	inline String_t** get_address_of_m_description_2() { return &___m_description_2; }
	inline void set_m_description_2(String_t* value)
	{
		___m_description_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_description_2), value);
	}

	inline static int32_t get_offset_of_m_name_3() { return static_cast<int32_t>(offsetof(CodeGroup_t4210518413, ___m_name_3)); }
	inline String_t* get_m_name_3() const { return ___m_name_3; }
	inline String_t** get_address_of_m_name_3() { return &___m_name_3; }
	inline void set_m_name_3(String_t* value)
	{
		___m_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_3), value);
	}

	inline static int32_t get_offset_of_m_children_4() { return static_cast<int32_t>(offsetof(CodeGroup_t4210518413, ___m_children_4)); }
	inline ArrayList_t2267421990 * get_m_children_4() const { return ___m_children_4; }
	inline ArrayList_t2267421990 ** get_address_of_m_children_4() { return &___m_children_4; }
	inline void set_m_children_4(ArrayList_t2267421990 * value)
	{
		___m_children_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_children_4), value);
	}
};

struct CodeGroup_t4210518413_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Policy.CodeGroup::<>f__switch$map2A
	Dictionary_2_t2878141640 * ___U3CU3Ef__switchU24map2A_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2A_5() { return static_cast<int32_t>(offsetof(CodeGroup_t4210518413_StaticFields, ___U3CU3Ef__switchU24map2A_5)); }
	inline Dictionary_2_t2878141640 * get_U3CU3Ef__switchU24map2A_5() const { return ___U3CU3Ef__switchU24map2A_5; }
	inline Dictionary_2_t2878141640 ** get_address_of_U3CU3Ef__switchU24map2A_5() { return &___U3CU3Ef__switchU24map2A_5; }
	inline void set_U3CU3Ef__switchU24map2A_5(Dictionary_2_t2878141640 * value)
	{
		___U3CU3Ef__switchU24map2A_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map2A_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEGROUP_T4210518413_H
#ifndef SIGNATUREDESCRIPTION_T3227578316_H
#define SIGNATUREDESCRIPTION_T3227578316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SignatureDescription
struct  SignatureDescription_t3227578316  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.SignatureDescription::_DeformatterAlgorithm
	String_t* ____DeformatterAlgorithm_0;
	// System.String System.Security.Cryptography.SignatureDescription::_DigestAlgorithm
	String_t* ____DigestAlgorithm_1;
	// System.String System.Security.Cryptography.SignatureDescription::_FormatterAlgorithm
	String_t* ____FormatterAlgorithm_2;
	// System.String System.Security.Cryptography.SignatureDescription::_KeyAlgorithm
	String_t* ____KeyAlgorithm_3;

public:
	inline static int32_t get_offset_of__DeformatterAlgorithm_0() { return static_cast<int32_t>(offsetof(SignatureDescription_t3227578316, ____DeformatterAlgorithm_0)); }
	inline String_t* get__DeformatterAlgorithm_0() const { return ____DeformatterAlgorithm_0; }
	inline String_t** get_address_of__DeformatterAlgorithm_0() { return &____DeformatterAlgorithm_0; }
	inline void set__DeformatterAlgorithm_0(String_t* value)
	{
		____DeformatterAlgorithm_0 = value;
		Il2CppCodeGenWriteBarrier((&____DeformatterAlgorithm_0), value);
	}

	inline static int32_t get_offset_of__DigestAlgorithm_1() { return static_cast<int32_t>(offsetof(SignatureDescription_t3227578316, ____DigestAlgorithm_1)); }
	inline String_t* get__DigestAlgorithm_1() const { return ____DigestAlgorithm_1; }
	inline String_t** get_address_of__DigestAlgorithm_1() { return &____DigestAlgorithm_1; }
	inline void set__DigestAlgorithm_1(String_t* value)
	{
		____DigestAlgorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&____DigestAlgorithm_1), value);
	}

	inline static int32_t get_offset_of__FormatterAlgorithm_2() { return static_cast<int32_t>(offsetof(SignatureDescription_t3227578316, ____FormatterAlgorithm_2)); }
	inline String_t* get__FormatterAlgorithm_2() const { return ____FormatterAlgorithm_2; }
	inline String_t** get_address_of__FormatterAlgorithm_2() { return &____FormatterAlgorithm_2; }
	inline void set__FormatterAlgorithm_2(String_t* value)
	{
		____FormatterAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____FormatterAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__KeyAlgorithm_3() { return static_cast<int32_t>(offsetof(SignatureDescription_t3227578316, ____KeyAlgorithm_3)); }
	inline String_t* get__KeyAlgorithm_3() const { return ____KeyAlgorithm_3; }
	inline String_t** get_address_of__KeyAlgorithm_3() { return &____KeyAlgorithm_3; }
	inline void set__KeyAlgorithm_3(String_t* value)
	{
		____KeyAlgorithm_3 = value;
		Il2CppCodeGenWriteBarrier((&____KeyAlgorithm_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGNATUREDESCRIPTION_T3227578316_H
#ifndef SHACONSTANTS_T2905378896_H
#define SHACONSTANTS_T2905378896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHAConstants
struct  SHAConstants_t2905378896  : public RuntimeObject
{
public:

public:
};

struct SHAConstants_t2905378896_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.SHAConstants::K1
	UInt32U5BU5D_t4145687601* ___K1_0;
	// System.UInt64[] System.Security.Cryptography.SHAConstants::K2
	UInt64U5BU5D_t2614999249* ___K2_1;

public:
	inline static int32_t get_offset_of_K1_0() { return static_cast<int32_t>(offsetof(SHAConstants_t2905378896_StaticFields, ___K1_0)); }
	inline UInt32U5BU5D_t4145687601* get_K1_0() const { return ___K1_0; }
	inline UInt32U5BU5D_t4145687601** get_address_of_K1_0() { return &___K1_0; }
	inline void set_K1_0(UInt32U5BU5D_t4145687601* value)
	{
		___K1_0 = value;
		Il2CppCodeGenWriteBarrier((&___K1_0), value);
	}

	inline static int32_t get_offset_of_K2_1() { return static_cast<int32_t>(offsetof(SHAConstants_t2905378896_StaticFields, ___K2_1)); }
	inline UInt64U5BU5D_t2614999249* get_K2_1() const { return ___K2_1; }
	inline UInt64U5BU5D_t2614999249** get_address_of_K2_1() { return &___K2_1; }
	inline void set_K2_1(UInt64U5BU5D_t2614999249* value)
	{
		___K2_1 = value;
		Il2CppCodeGenWriteBarrier((&___K2_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHACONSTANTS_T2905378896_H
#ifndef TOBASE64TRANSFORM_T4074090554_H
#define TOBASE64TRANSFORM_T4074090554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.ToBase64Transform
struct  ToBase64Transform_t4074090554  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Cryptography.ToBase64Transform::m_disposed
	bool ___m_disposed_0;

public:
	inline static int32_t get_offset_of_m_disposed_0() { return static_cast<int32_t>(offsetof(ToBase64Transform_t4074090554, ___m_disposed_0)); }
	inline bool get_m_disposed_0() const { return ___m_disposed_0; }
	inline bool* get_address_of_m_disposed_0() { return &___m_disposed_0; }
	inline void set_m_disposed_0(bool value)
	{
		___m_disposed_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOBASE64TRANSFORM_T4074090554_H
#ifndef STRONGNAMEPUBLICKEYBLOB_T2779961255_H
#define STRONGNAMEPUBLICKEYBLOB_T2779961255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNamePublicKeyBlob
struct  StrongNamePublicKeyBlob_t2779961255  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Permissions.StrongNamePublicKeyBlob::pubkey
	ByteU5BU5D_t1239206108* ___pubkey_0;

public:
	inline static int32_t get_offset_of_pubkey_0() { return static_cast<int32_t>(offsetof(StrongNamePublicKeyBlob_t2779961255, ___pubkey_0)); }
	inline ByteU5BU5D_t1239206108* get_pubkey_0() const { return ___pubkey_0; }
	inline ByteU5BU5D_t1239206108** get_address_of_pubkey_0() { return &___pubkey_0; }
	inline void set_pubkey_0(ByteU5BU5D_t1239206108* value)
	{
		___pubkey_0 = value;
		Il2CppCodeGenWriteBarrier((&___pubkey_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEPUBLICKEYBLOB_T2779961255_H
#ifndef SECURITYATTRIBUTE_T3905110329_H
#define SECURITYATTRIBUTE_T3905110329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAttribute
struct  SecurityAttribute_t3905110329  : public Attribute_t491624126
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T3905110329_H
#ifndef DECODERREPLACEMENTFALLBACKBUFFER_T3228177735_H
#define DECODERREPLACEMENTFALLBACKBUFFER_T3228177735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderReplacementFallbackBuffer
struct  DecoderReplacementFallbackBuffer_t3228177735  : public DecoderFallbackBuffer_t920557428
{
public:
	// System.Boolean System.Text.DecoderReplacementFallbackBuffer::fallback_assigned
	bool ___fallback_assigned_0;
	// System.Int32 System.Text.DecoderReplacementFallbackBuffer::current
	int32_t ___current_1;
	// System.String System.Text.DecoderReplacementFallbackBuffer::replacement
	String_t* ___replacement_2;

public:
	inline static int32_t get_offset_of_fallback_assigned_0() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t3228177735, ___fallback_assigned_0)); }
	inline bool get_fallback_assigned_0() const { return ___fallback_assigned_0; }
	inline bool* get_address_of_fallback_assigned_0() { return &___fallback_assigned_0; }
	inline void set_fallback_assigned_0(bool value)
	{
		___fallback_assigned_0 = value;
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t3228177735, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_replacement_2() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t3228177735, ___replacement_2)); }
	inline String_t* get_replacement_2() const { return ___replacement_2; }
	inline String_t** get_address_of_replacement_2() { return &___replacement_2; }
	inline void set_replacement_2(String_t* value)
	{
		___replacement_2 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERREPLACEMENTFALLBACKBUFFER_T3228177735_H
#ifndef ENCODEREXCEPTIONFALLBACK_T285490618_H
#define ENCODEREXCEPTIONFALLBACK_T285490618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderExceptionFallback
struct  EncoderExceptionFallback_t285490618  : public EncoderFallback_t89076269
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODEREXCEPTIONFALLBACK_T285490618_H
#ifndef ENCODEREXCEPTIONFALLBACKBUFFER_T1750263180_H
#define ENCODEREXCEPTIONFALLBACKBUFFER_T1750263180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderExceptionFallbackBuffer
struct  EncoderExceptionFallbackBuffer_t1750263180  : public EncoderFallbackBuffer_t2545218937
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODEREXCEPTIONFALLBACKBUFFER_T1750263180_H
#ifndef ENCODERREPLACEMENTFALLBACK_T772538983_H
#define ENCODERREPLACEMENTFALLBACK_T772538983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderReplacementFallback
struct  EncoderReplacementFallback_t772538983  : public EncoderFallback_t89076269
{
public:
	// System.String System.Text.EncoderReplacementFallback::replacement
	String_t* ___replacement_3;

public:
	inline static int32_t get_offset_of_replacement_3() { return static_cast<int32_t>(offsetof(EncoderReplacementFallback_t772538983, ___replacement_3)); }
	inline String_t* get_replacement_3() const { return ___replacement_3; }
	inline String_t** get_address_of_replacement_3() { return &___replacement_3; }
	inline void set_replacement_3(String_t* value)
	{
		___replacement_3 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERREPLACEMENTFALLBACK_T772538983_H
#ifndef ENCODERREPLACEMENTFALLBACKBUFFER_T3568422304_H
#define ENCODERREPLACEMENTFALLBACKBUFFER_T3568422304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderReplacementFallbackBuffer
struct  EncoderReplacementFallbackBuffer_t3568422304  : public EncoderFallbackBuffer_t2545218937
{
public:
	// System.String System.Text.EncoderReplacementFallbackBuffer::replacement
	String_t* ___replacement_0;
	// System.Int32 System.Text.EncoderReplacementFallbackBuffer::current
	int32_t ___current_1;
	// System.Boolean System.Text.EncoderReplacementFallbackBuffer::fallback_assigned
	bool ___fallback_assigned_2;

public:
	inline static int32_t get_offset_of_replacement_0() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t3568422304, ___replacement_0)); }
	inline String_t* get_replacement_0() const { return ___replacement_0; }
	inline String_t** get_address_of_replacement_0() { return &___replacement_0; }
	inline void set_replacement_0(String_t* value)
	{
		___replacement_0 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t3568422304, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_fallback_assigned_2() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t3568422304, ___fallback_assigned_2)); }
	inline bool get_fallback_assigned_2() const { return ___fallback_assigned_2; }
	inline bool* get_address_of_fallback_assigned_2() { return &___fallback_assigned_2; }
	inline void set_fallback_assigned_2(bool value)
	{
		___fallback_assigned_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERREPLACEMENTFALLBACKBUFFER_T3568422304_H
#ifndef DSASIGNATUREDESCRIPTION_T2698414177_H
#define DSASIGNATUREDESCRIPTION_T2698414177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureDescription
struct  DSASignatureDescription_t2698414177  : public SignatureDescription_t3227578316
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREDESCRIPTION_T2698414177_H
#ifndef FORWARDINGDECODER_T3126094832_H
#define FORWARDINGDECODER_T3126094832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding/ForwardingDecoder
struct  ForwardingDecoder_t3126094832  : public Decoder_t2410135258
{
public:
	// System.Text.Encoding System.Text.Encoding/ForwardingDecoder::encoding
	Encoding_t1342771939 * ___encoding_2;

public:
	inline static int32_t get_offset_of_encoding_2() { return static_cast<int32_t>(offsetof(ForwardingDecoder_t3126094832, ___encoding_2)); }
	inline Encoding_t1342771939 * get_encoding_2() const { return ___encoding_2; }
	inline Encoding_t1342771939 ** get_address_of_encoding_2() { return &___encoding_2; }
	inline void set_encoding_2(Encoding_t1342771939 * value)
	{
		___encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORWARDINGDECODER_T3126094832_H
#ifndef SYSTEMEXCEPTION_T2344580972_H
#define SYSTEMEXCEPTION_T2344580972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t2344580972  : public Exception_t2980777455
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T2344580972_H
#ifndef LATIN1ENCODING_T1259843323_H
#define LATIN1ENCODING_T1259843323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Latin1Encoding
struct  Latin1Encoding_t1259843323  : public Encoding_t1342771939
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LATIN1ENCODING_T1259843323_H
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
#ifndef UTF32ENCODING_T1092816071_H
#define UTF32ENCODING_T1092816071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF32Encoding
struct  UTF32Encoding_t1092816071  : public Encoding_t1342771939
{
public:
	// System.Boolean System.Text.UTF32Encoding::bigEndian
	bool ___bigEndian_29;
	// System.Boolean System.Text.UTF32Encoding::byteOrderMark
	bool ___byteOrderMark_30;

public:
	inline static int32_t get_offset_of_bigEndian_29() { return static_cast<int32_t>(offsetof(UTF32Encoding_t1092816071, ___bigEndian_29)); }
	inline bool get_bigEndian_29() const { return ___bigEndian_29; }
	inline bool* get_address_of_bigEndian_29() { return &___bigEndian_29; }
	inline void set_bigEndian_29(bool value)
	{
		___bigEndian_29 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_30() { return static_cast<int32_t>(offsetof(UTF32Encoding_t1092816071, ___byteOrderMark_30)); }
	inline bool get_byteOrderMark_30() const { return ___byteOrderMark_30; }
	inline bool* get_address_of_byteOrderMark_30() { return &___byteOrderMark_30; }
	inline void set_byteOrderMark_30(bool value)
	{
		___byteOrderMark_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF32ENCODING_T1092816071_H
#ifndef UTF32DECODER_T47283147_H
#define UTF32DECODER_T47283147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF32Encoding/UTF32Decoder
struct  UTF32Decoder_t47283147  : public Decoder_t2410135258
{
public:
	// System.Boolean System.Text.UTF32Encoding/UTF32Decoder::bigEndian
	bool ___bigEndian_2;
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::leftOverByte
	int32_t ___leftOverByte_3;
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::leftOverLength
	int32_t ___leftOverLength_4;

public:
	inline static int32_t get_offset_of_bigEndian_2() { return static_cast<int32_t>(offsetof(UTF32Decoder_t47283147, ___bigEndian_2)); }
	inline bool get_bigEndian_2() const { return ___bigEndian_2; }
	inline bool* get_address_of_bigEndian_2() { return &___bigEndian_2; }
	inline void set_bigEndian_2(bool value)
	{
		___bigEndian_2 = value;
	}

	inline static int32_t get_offset_of_leftOverByte_3() { return static_cast<int32_t>(offsetof(UTF32Decoder_t47283147, ___leftOverByte_3)); }
	inline int32_t get_leftOverByte_3() const { return ___leftOverByte_3; }
	inline int32_t* get_address_of_leftOverByte_3() { return &___leftOverByte_3; }
	inline void set_leftOverByte_3(int32_t value)
	{
		___leftOverByte_3 = value;
	}

	inline static int32_t get_offset_of_leftOverLength_4() { return static_cast<int32_t>(offsetof(UTF32Decoder_t47283147, ___leftOverLength_4)); }
	inline int32_t get_leftOverLength_4() const { return ___leftOverLength_4; }
	inline int32_t* get_address_of_leftOverLength_4() { return &___leftOverLength_4; }
	inline void set_leftOverLength_4(int32_t value)
	{
		___leftOverLength_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF32DECODER_T47283147_H
#ifndef DECODERREPLACEMENTFALLBACK_T3734196093_H
#define DECODERREPLACEMENTFALLBACK_T3734196093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderReplacementFallback
struct  DecoderReplacementFallback_t3734196093  : public DecoderFallback_t1883533687
{
public:
	// System.String System.Text.DecoderReplacementFallback::replacement
	String_t* ___replacement_3;

public:
	inline static int32_t get_offset_of_replacement_3() { return static_cast<int32_t>(offsetof(DecoderReplacementFallback_t3734196093, ___replacement_3)); }
	inline String_t* get_replacement_3() const { return ___replacement_3; }
	inline String_t** get_address_of_replacement_3() { return &___replacement_3; }
	inline void set_replacement_3(String_t* value)
	{
		___replacement_3 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERREPLACEMENTFALLBACK_T3734196093_H
#ifndef UTF7DECODER_T3616473112_H
#define UTF7DECODER_T3616473112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding/UTF7Decoder
struct  UTF7Decoder_t3616473112  : public Decoder_t2410135258
{
public:
	// System.Int32 System.Text.UTF7Encoding/UTF7Decoder::leftOver
	int32_t ___leftOver_2;

public:
	inline static int32_t get_offset_of_leftOver_2() { return static_cast<int32_t>(offsetof(UTF7Decoder_t3616473112, ___leftOver_2)); }
	inline int32_t get_leftOver_2() const { return ___leftOver_2; }
	inline int32_t* get_address_of_leftOver_2() { return &___leftOver_2; }
	inline void set_leftOver_2(int32_t value)
	{
		___leftOver_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF7DECODER_T3616473112_H
#ifndef UTF8ENCODING_T1834888124_H
#define UTF8ENCODING_T1834888124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding
struct  UTF8Encoding_t1834888124  : public Encoding_t1342771939
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitIdentifier
	bool ___emitIdentifier_29;

public:
	inline static int32_t get_offset_of_emitIdentifier_29() { return static_cast<int32_t>(offsetof(UTF8Encoding_t1834888124, ___emitIdentifier_29)); }
	inline bool get_emitIdentifier_29() const { return ___emitIdentifier_29; }
	inline bool* get_address_of_emitIdentifier_29() { return &___emitIdentifier_29; }
	inline void set_emitIdentifier_29(bool value)
	{
		___emitIdentifier_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8ENCODING_T1834888124_H
#ifndef UTF8DECODER_T4122872560_H
#define UTF8DECODER_T4122872560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding/UTF8Decoder
struct  UTF8Decoder_t4122872560  : public Decoder_t2410135258
{
public:
	// System.UInt32 System.Text.UTF8Encoding/UTF8Decoder::leftOverBits
	uint32_t ___leftOverBits_2;
	// System.UInt32 System.Text.UTF8Encoding/UTF8Decoder::leftOverCount
	uint32_t ___leftOverCount_3;

public:
	inline static int32_t get_offset_of_leftOverBits_2() { return static_cast<int32_t>(offsetof(UTF8Decoder_t4122872560, ___leftOverBits_2)); }
	inline uint32_t get_leftOverBits_2() const { return ___leftOverBits_2; }
	inline uint32_t* get_address_of_leftOverBits_2() { return &___leftOverBits_2; }
	inline void set_leftOverBits_2(uint32_t value)
	{
		___leftOverBits_2 = value;
	}

	inline static int32_t get_offset_of_leftOverCount_3() { return static_cast<int32_t>(offsetof(UTF8Decoder_t4122872560, ___leftOverCount_3)); }
	inline uint32_t get_leftOverCount_3() const { return ___leftOverCount_3; }
	inline uint32_t* get_address_of_leftOverCount_3() { return &___leftOverCount_3; }
	inline void set_leftOverCount_3(uint32_t value)
	{
		___leftOverCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8DECODER_T4122872560_H
#ifndef UNICODEENCODING_T2096313357_H
#define UNICODEENCODING_T2096313357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UnicodeEncoding
struct  UnicodeEncoding_t2096313357  : public Encoding_t1342771939
{
public:
	// System.Boolean System.Text.UnicodeEncoding::bigEndian
	bool ___bigEndian_29;
	// System.Boolean System.Text.UnicodeEncoding::byteOrderMark
	bool ___byteOrderMark_30;

public:
	inline static int32_t get_offset_of_bigEndian_29() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t2096313357, ___bigEndian_29)); }
	inline bool get_bigEndian_29() const { return ___bigEndian_29; }
	inline bool* get_address_of_bigEndian_29() { return &___bigEndian_29; }
	inline void set_bigEndian_29(bool value)
	{
		___bigEndian_29 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_30() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t2096313357, ___byteOrderMark_30)); }
	inline bool get_byteOrderMark_30() const { return ___byteOrderMark_30; }
	inline bool* get_address_of_byteOrderMark_30() { return &___byteOrderMark_30; }
	inline void set_byteOrderMark_30(bool value)
	{
		___byteOrderMark_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICODEENCODING_T2096313357_H
#ifndef UNICODEDECODER_T1162217491_H
#define UNICODEDECODER_T1162217491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UnicodeEncoding/UnicodeDecoder
struct  UnicodeDecoder_t1162217491  : public Decoder_t2410135258
{
public:
	// System.Boolean System.Text.UnicodeEncoding/UnicodeDecoder::bigEndian
	bool ___bigEndian_2;
	// System.Int32 System.Text.UnicodeEncoding/UnicodeDecoder::leftOverByte
	int32_t ___leftOverByte_3;

public:
	inline static int32_t get_offset_of_bigEndian_2() { return static_cast<int32_t>(offsetof(UnicodeDecoder_t1162217491, ___bigEndian_2)); }
	inline bool get_bigEndian_2() const { return ___bigEndian_2; }
	inline bool* get_address_of_bigEndian_2() { return &___bigEndian_2; }
	inline void set_bigEndian_2(bool value)
	{
		___bigEndian_2 = value;
	}

	inline static int32_t get_offset_of_leftOverByte_3() { return static_cast<int32_t>(offsetof(UnicodeDecoder_t1162217491, ___leftOverByte_3)); }
	inline int32_t get_leftOverByte_3() const { return ___leftOverByte_3; }
	inline int32_t* get_address_of_leftOverByte_3() { return &___leftOverByte_3; }
	inline void set_leftOverByte_3(int32_t value)
	{
		___leftOverByte_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICODEDECODER_T1162217491_H
#ifndef SHA512_T2632996201_H
#define SHA512_T2632996201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512
struct  SHA512_t2632996201  : public HashAlgorithm_t1165411460
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512_T2632996201_H
#ifndef SHA384_T2542412740_H
#define SHA384_T2542412740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384
struct  SHA384_t2542412740  : public HashAlgorithm_t1165411460
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384_T2542412740_H
#ifndef SHA1_T2460963231_H
#define SHA1_T2460963231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1
struct  SHA1_t2460963231  : public HashAlgorithm_t1165411460
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1_T2460963231_H
#ifndef SHA256_T3101146856_H
#define SHA256_T3101146856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256
struct  SHA256_t3101146856  : public HashAlgorithm_t1165411460
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256_T3101146856_H
#ifndef ENUM_T851877194_H
#define ENUM_T851877194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t851877194  : public ValueType_t2797263942
{
public:

public:
};

struct Enum_t851877194_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3791132852* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t851877194_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3791132852* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3791132852** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3791132852* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t851877194_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t851877194_marshaled_com
{
};
#endif // ENUM_T851877194_H
#ifndef UTF7ENCODING_T3711326514_H
#define UTF7ENCODING_T3711326514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding
struct  UTF7Encoding_t3711326514  : public Encoding_t1342771939
{
public:
	// System.Boolean System.Text.UTF7Encoding::allowOptionals
	bool ___allowOptionals_29;

public:
	inline static int32_t get_offset_of_allowOptionals_29() { return static_cast<int32_t>(offsetof(UTF7Encoding_t3711326514, ___allowOptionals_29)); }
	inline bool get_allowOptionals_29() const { return ___allowOptionals_29; }
	inline bool* get_address_of_allowOptionals_29() { return &___allowOptionals_29; }
	inline void set_allowOptionals_29(bool value)
	{
		___allowOptionals_29 = value;
	}
};

struct UTF7Encoding_t3711326514_StaticFields
{
public:
	// System.Byte[] System.Text.UTF7Encoding::encodingRules
	ByteU5BU5D_t1239206108* ___encodingRules_30;
	// System.SByte[] System.Text.UTF7Encoding::base64Values
	SByteU5BU5D_t462354850* ___base64Values_31;

public:
	inline static int32_t get_offset_of_encodingRules_30() { return static_cast<int32_t>(offsetof(UTF7Encoding_t3711326514_StaticFields, ___encodingRules_30)); }
	inline ByteU5BU5D_t1239206108* get_encodingRules_30() const { return ___encodingRules_30; }
	inline ByteU5BU5D_t1239206108** get_address_of_encodingRules_30() { return &___encodingRules_30; }
	inline void set_encodingRules_30(ByteU5BU5D_t1239206108* value)
	{
		___encodingRules_30 = value;
		Il2CppCodeGenWriteBarrier((&___encodingRules_30), value);
	}

	inline static int32_t get_offset_of_base64Values_31() { return static_cast<int32_t>(offsetof(UTF7Encoding_t3711326514_StaticFields, ___base64Values_31)); }
	inline SByteU5BU5D_t462354850* get_base64Values_31() const { return ___base64Values_31; }
	inline SByteU5BU5D_t462354850** get_address_of_base64Values_31() { return &___base64Values_31; }
	inline void set_base64Values_31(SByteU5BU5D_t462354850* value)
	{
		___base64Values_31 = value;
		Il2CppCodeGenWriteBarrier((&___base64Values_31), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF7ENCODING_T3711326514_H
#ifndef RSAPKCS1SHA1SIGNATUREDESCRIPTION_T549138201_H
#define RSAPKCS1SHA1SIGNATUREDESCRIPTION_T549138201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SHA1SignatureDescription
struct  RSAPKCS1SHA1SignatureDescription_t549138201  : public SignatureDescription_t3227578316
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SHA1SIGNATUREDESCRIPTION_T549138201_H
#ifndef SUPPRESSUNMANAGEDCODESECURITYATTRIBUTE_T470122080_H
#define SUPPRESSUNMANAGEDCODESECURITYATTRIBUTE_T470122080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SuppressUnmanagedCodeSecurityAttribute
struct  SuppressUnmanagedCodeSecurityAttribute_t470122080  : public Attribute_t491624126
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUPPRESSUNMANAGEDCODESECURITYATTRIBUTE_T470122080_H
#ifndef ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T700624338_H
#define ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T700624338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.AllowPartiallyTrustedCallersAttribute
struct  AllowPartiallyTrustedCallersAttribute_t700624338  : public Attribute_t491624126
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T700624338_H
#ifndef SECURITYFRAME_T1224251096_H
#define SECURITYFRAME_T1224251096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityFrame
struct  SecurityFrame_t1224251096 
{
public:
	// System.AppDomain System.Security.SecurityFrame::_domain
	AppDomain_t1381756575 * ____domain_0;
	// System.Reflection.MethodInfo System.Security.SecurityFrame::_method
	MethodInfo_t * ____method_1;
	// System.Security.PermissionSet System.Security.SecurityFrame::_assert
	PermissionSet_t4217798818 * ____assert_2;
	// System.Security.PermissionSet System.Security.SecurityFrame::_deny
	PermissionSet_t4217798818 * ____deny_3;
	// System.Security.PermissionSet System.Security.SecurityFrame::_permitonly
	PermissionSet_t4217798818 * ____permitonly_4;

public:
	inline static int32_t get_offset_of__domain_0() { return static_cast<int32_t>(offsetof(SecurityFrame_t1224251096, ____domain_0)); }
	inline AppDomain_t1381756575 * get__domain_0() const { return ____domain_0; }
	inline AppDomain_t1381756575 ** get_address_of__domain_0() { return &____domain_0; }
	inline void set__domain_0(AppDomain_t1381756575 * value)
	{
		____domain_0 = value;
		Il2CppCodeGenWriteBarrier((&____domain_0), value);
	}

	inline static int32_t get_offset_of__method_1() { return static_cast<int32_t>(offsetof(SecurityFrame_t1224251096, ____method_1)); }
	inline MethodInfo_t * get__method_1() const { return ____method_1; }
	inline MethodInfo_t ** get_address_of__method_1() { return &____method_1; }
	inline void set__method_1(MethodInfo_t * value)
	{
		____method_1 = value;
		Il2CppCodeGenWriteBarrier((&____method_1), value);
	}

	inline static int32_t get_offset_of__assert_2() { return static_cast<int32_t>(offsetof(SecurityFrame_t1224251096, ____assert_2)); }
	inline PermissionSet_t4217798818 * get__assert_2() const { return ____assert_2; }
	inline PermissionSet_t4217798818 ** get_address_of__assert_2() { return &____assert_2; }
	inline void set__assert_2(PermissionSet_t4217798818 * value)
	{
		____assert_2 = value;
		Il2CppCodeGenWriteBarrier((&____assert_2), value);
	}

	inline static int32_t get_offset_of__deny_3() { return static_cast<int32_t>(offsetof(SecurityFrame_t1224251096, ____deny_3)); }
	inline PermissionSet_t4217798818 * get__deny_3() const { return ____deny_3; }
	inline PermissionSet_t4217798818 ** get_address_of__deny_3() { return &____deny_3; }
	inline void set__deny_3(PermissionSet_t4217798818 * value)
	{
		____deny_3 = value;
		Il2CppCodeGenWriteBarrier((&____deny_3), value);
	}

	inline static int32_t get_offset_of__permitonly_4() { return static_cast<int32_t>(offsetof(SecurityFrame_t1224251096, ____permitonly_4)); }
	inline PermissionSet_t4217798818 * get__permitonly_4() const { return ____permitonly_4; }
	inline PermissionSet_t4217798818 ** get_address_of__permitonly_4() { return &____permitonly_4; }
	inline void set__permitonly_4(PermissionSet_t4217798818 * value)
	{
		____permitonly_4 = value;
		Il2CppCodeGenWriteBarrier((&____permitonly_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.SecurityFrame
struct SecurityFrame_t1224251096_marshaled_pinvoke
{
	AppDomain_t1381756575 * ____domain_0;
	MethodInfo_t * ____method_1;
	PermissionSet_t4217798818 * ____assert_2;
	PermissionSet_t4217798818 * ____deny_3;
	PermissionSet_t4217798818 * ____permitonly_4;
};
// Native definition for COM marshalling of System.Security.SecurityFrame
struct SecurityFrame_t1224251096_marshaled_com
{
	AppDomain_t1381756575 * ____domain_0;
	MethodInfo_t * ____method_1;
	PermissionSet_t4217798818 * ____assert_2;
	PermissionSet_t4217798818 * ____deny_3;
	PermissionSet_t4217798818 * ____permitonly_4;
};
#endif // SECURITYFRAME_T1224251096_H
#ifndef TRIPLEDESTRANSFORM_T2983177349_H
#define TRIPLEDESTRANSFORM_T2983177349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDESTransform
struct  TripleDESTransform_t2983177349  : public SymmetricTransform_t4183031469
{
public:
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E1
	DESTransform_t1123123525 * ___E1_12;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D2
	DESTransform_t1123123525 * ___D2_13;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E3
	DESTransform_t1123123525 * ___E3_14;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D1
	DESTransform_t1123123525 * ___D1_15;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E2
	DESTransform_t1123123525 * ___E2_16;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D3
	DESTransform_t1123123525 * ___D3_17;

public:
	inline static int32_t get_offset_of_E1_12() { return static_cast<int32_t>(offsetof(TripleDESTransform_t2983177349, ___E1_12)); }
	inline DESTransform_t1123123525 * get_E1_12() const { return ___E1_12; }
	inline DESTransform_t1123123525 ** get_address_of_E1_12() { return &___E1_12; }
	inline void set_E1_12(DESTransform_t1123123525 * value)
	{
		___E1_12 = value;
		Il2CppCodeGenWriteBarrier((&___E1_12), value);
	}

	inline static int32_t get_offset_of_D2_13() { return static_cast<int32_t>(offsetof(TripleDESTransform_t2983177349, ___D2_13)); }
	inline DESTransform_t1123123525 * get_D2_13() const { return ___D2_13; }
	inline DESTransform_t1123123525 ** get_address_of_D2_13() { return &___D2_13; }
	inline void set_D2_13(DESTransform_t1123123525 * value)
	{
		___D2_13 = value;
		Il2CppCodeGenWriteBarrier((&___D2_13), value);
	}

	inline static int32_t get_offset_of_E3_14() { return static_cast<int32_t>(offsetof(TripleDESTransform_t2983177349, ___E3_14)); }
	inline DESTransform_t1123123525 * get_E3_14() const { return ___E3_14; }
	inline DESTransform_t1123123525 ** get_address_of_E3_14() { return &___E3_14; }
	inline void set_E3_14(DESTransform_t1123123525 * value)
	{
		___E3_14 = value;
		Il2CppCodeGenWriteBarrier((&___E3_14), value);
	}

	inline static int32_t get_offset_of_D1_15() { return static_cast<int32_t>(offsetof(TripleDESTransform_t2983177349, ___D1_15)); }
	inline DESTransform_t1123123525 * get_D1_15() const { return ___D1_15; }
	inline DESTransform_t1123123525 ** get_address_of_D1_15() { return &___D1_15; }
	inline void set_D1_15(DESTransform_t1123123525 * value)
	{
		___D1_15 = value;
		Il2CppCodeGenWriteBarrier((&___D1_15), value);
	}

	inline static int32_t get_offset_of_E2_16() { return static_cast<int32_t>(offsetof(TripleDESTransform_t2983177349, ___E2_16)); }
	inline DESTransform_t1123123525 * get_E2_16() const { return ___E2_16; }
	inline DESTransform_t1123123525 ** get_address_of_E2_16() { return &___E2_16; }
	inline void set_E2_16(DESTransform_t1123123525 * value)
	{
		___E2_16 = value;
		Il2CppCodeGenWriteBarrier((&___E2_16), value);
	}

	inline static int32_t get_offset_of_D3_17() { return static_cast<int32_t>(offsetof(TripleDESTransform_t2983177349, ___D3_17)); }
	inline DESTransform_t1123123525 * get_D3_17() const { return ___D3_17; }
	inline DESTransform_t1123123525 ** get_address_of_D3_17() { return &___D3_17; }
	inline void set_D3_17(DESTransform_t1123123525 * value)
	{
		___D3_17 = value;
		Il2CppCodeGenWriteBarrier((&___D3_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDESTRANSFORM_T2983177349_H
#ifndef UNVERIFIABLECODEATTRIBUTE_T1942976375_H
#define UNVERIFIABLECODEATTRIBUTE_T1942976375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.UnverifiableCodeAttribute
struct  UnverifiableCodeAttribute_t1942976375  : public Attribute_t491624126
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNVERIFIABLECODEATTRIBUTE_T1942976375_H
#ifndef SECURITYSAFECRITICALATTRIBUTE_T412957641_H
#define SECURITYSAFECRITICALATTRIBUTE_T412957641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecuritySafeCriticalAttribute
struct  SecuritySafeCriticalAttribute_t412957641  : public Attribute_t491624126
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYSAFECRITICALATTRIBUTE_T412957641_H
#ifndef ASCIIENCODING_T3515658939_H
#define ASCIIENCODING_T3515658939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.ASCIIEncoding
struct  ASCIIEncoding_t3515658939  : public Encoding_t1342771939
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASCIIENCODING_T3515658939_H
#ifndef DECODEREXCEPTIONFALLBACK_T892780346_H
#define DECODEREXCEPTIONFALLBACK_T892780346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderExceptionFallback
struct  DecoderExceptionFallback_t892780346  : public DecoderFallback_t1883533687
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODEREXCEPTIONFALLBACK_T892780346_H
#ifndef DECODEREXCEPTIONFALLBACKBUFFER_T2331092230_H
#define DECODEREXCEPTIONFALLBACKBUFFER_T2331092230_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderExceptionFallbackBuffer
struct  DecoderExceptionFallbackBuffer_t2331092230  : public DecoderFallbackBuffer_t920557428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODEREXCEPTIONFALLBACKBUFFER_T2331092230_H
#ifndef PRINCIPALPOLICY_T3266016217_H
#define PRINCIPALPOLICY_T3266016217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.PrincipalPolicy
struct  PrincipalPolicy_t3266016217 
{
public:
	// System.Int32 System.Security.Principal.PrincipalPolicy::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PrincipalPolicy_t3266016217, ___value___1)); }
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
#endif // PRINCIPALPOLICY_T3266016217_H
#ifndef WINDOWSACCOUNTTYPE_T3128590907_H
#define WINDOWSACCOUNTTYPE_T3128590907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsAccountType
struct  WindowsAccountType_t3128590907 
{
public:
	// System.Int32 System.Security.Principal.WindowsAccountType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WindowsAccountType_t3128590907, ___value___1)); }
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
#endif // WINDOWSACCOUNTTYPE_T3128590907_H
#ifndef POLICYLEVELTYPE_T4087259976_H
#define POLICYLEVELTYPE_T4087259976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PolicyLevelType
struct  PolicyLevelType_t4087259976 
{
public:
	// System.Int32 System.Security.PolicyLevelType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PolicyLevelType_t4087259976, ___value___1)); }
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
#endif // POLICYLEVELTYPE_T4087259976_H
#ifndef SHA384MANAGED_T3337730413_H
#define SHA384MANAGED_T3337730413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384Managed
struct  SHA384Managed_t3337730413  : public SHA384_t2542412740
{
public:
	// System.Byte[] System.Security.Cryptography.SHA384Managed::xBuf
	ByteU5BU5D_t1239206108* ___xBuf_4;
	// System.Int32 System.Security.Cryptography.SHA384Managed::xBufOff
	int32_t ___xBufOff_5;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::byteCount1
	uint64_t ___byteCount1_6;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::byteCount2
	uint64_t ___byteCount2_7;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H1
	uint64_t ___H1_8;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H2
	uint64_t ___H2_9;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H3
	uint64_t ___H3_10;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H4
	uint64_t ___H4_11;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H5
	uint64_t ___H5_12;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H6
	uint64_t ___H6_13;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H7
	uint64_t ___H7_14;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H8
	uint64_t ___H8_15;
	// System.UInt64[] System.Security.Cryptography.SHA384Managed::W
	UInt64U5BU5D_t2614999249* ___W_16;
	// System.Int32 System.Security.Cryptography.SHA384Managed::wOff
	int32_t ___wOff_17;

public:
	inline static int32_t get_offset_of_xBuf_4() { return static_cast<int32_t>(offsetof(SHA384Managed_t3337730413, ___xBuf_4)); }
	inline ByteU5BU5D_t1239206108* get_xBuf_4() const { return ___xBuf_4; }
	inline ByteU5BU5D_t1239206108** get_address_of_xBuf_4() { return &___xBuf_4; }
	inline void set_xBuf_4(ByteU5BU5D_t1239206108* value)
	{
		___xBuf_4 = value;
		Il2CppCodeGenWriteBarrier((&___xBuf_4), value);
	}

	inline static int32_t get_offset_of_xBufOff_5() { return static_cast<int32_t>(offsetof(SHA384Managed_t3337730413, ___xBufOff_5)); }
	inline int32_t get_xBufOff_5() const { return ___xBufOff_5; }
	inline int32_t* get_address_of_xBufOff_5() { return &___xBufOff_5; }
	inline void set_xBufOff_5(int32_t value)
	{
		___xBufOff_5 = value;
	}

	inline static int32_t get_offset_of_byteCount1_6() { return static_cast<int32_t>(offsetof(SHA384Managed_t3337730413, ___byteCount1_6)); }
	inline uint64_t get_byteCount1_6() const { return ___byteCount1_6; }
	inline uint64_t* get_address_of_byteCount1_6() { return &___byteCount1_6; }
	inline void set_byteCount1_6(uint64_t value)
	{
		___byteCount1_6 = value;
	}

	inline static int32_t get_offset_of_byteCount2_7() { return static_cast<int32_t>(offsetof(SHA384Managed_t3337730413, ___byteCount2_7)); }
	inline uint64_t get_byteCount2_7() const { return ___byteCount2_7; }
	inline uint64_t* get_address_of_byteCount2_7() { return &___byteCount2_7; }
	inline void set_byteCount2_7(uint64_t value)
	{
		___byteCount2_7 = value;
	}

	inline static int32_t get_offset_of_H1_8() { return static_cast<int32_t>(offsetof(SHA384Managed_t3337730413, ___H1_8)); }
	inline uint64_t get_H1_8() const { return ___H1_8; }
	inline uint64_t* get_address_of_H1_8() { return &___H1_8; }
	inline void set_H1_8(uint64_t value)
	{
		___H1_8 = value;
	}

	inline static int32_t get_offset_of_H2_9() { return static_cast<int32_t>(offsetof(SHA384Managed_t3337730413, ___H2_9)); }
	inline uint64_t get_H2_9() const { return ___H2_9; }
	inline uint64_t* get_address_of_H2_9() { return &___H2_9; }
	inline void set_H2_9(uint64_t value)
	{
		___H2_9 = value;
	}

	inline static int32_t get_offset_of_H3_10() { return static_cast<int32_t>(offsetof(SHA384Managed_t3337730413, ___H3_10)); }
	inline uint64_t get_H3_10() const { return ___H3_10; }
	inline uint64_t* get_address_of_H3_10() { return &___H3_10; }
	inline void set_H3_10(uint64_t value)
	{
		___H3_10 = value;
	}

	inline static int32_t get_offset_of_H4_11() { return static_cast<int32_t>(offsetof(SHA384Managed_t3337730413, ___H4_11)); }
	inline uint64_t get_H4_11() const { return ___H4_11; }
	inline uint64_t* get_address_of_H4_11() { return &___H4_11; }
	inline void set_H4_11(uint64_t value)
	{
		___H4_11 = value;
	}

	inline static int32_t get_offset_of_H5_12() { return static_cast<int32_t>(offsetof(SHA384Managed_t3337730413, ___H5_12)); }
	inline uint64_t get_H5_12() const { return ___H5_12; }
	inline uint64_t* get_address_of_H5_12() { return &___H5_12; }
	inline void set_H5_12(uint64_t value)
	{
		___H5_12 = value;
	}

	inline static int32_t get_offset_of_H6_13() { return static_cast<int32_t>(offsetof(SHA384Managed_t3337730413, ___H6_13)); }
	inline uint64_t get_H6_13() const { return ___H6_13; }
	inline uint64_t* get_address_of_H6_13() { return &___H6_13; }
	inline void set_H6_13(uint64_t value)
	{
		___H6_13 = value;
	}

	inline static int32_t get_offset_of_H7_14() { return static_cast<int32_t>(offsetof(SHA384Managed_t3337730413, ___H7_14)); }
	inline uint64_t get_H7_14() const { return ___H7_14; }
	inline uint64_t* get_address_of_H7_14() { return &___H7_14; }
	inline void set_H7_14(uint64_t value)
	{
		___H7_14 = value;
	}

	inline static int32_t get_offset_of_H8_15() { return static_cast<int32_t>(offsetof(SHA384Managed_t3337730413, ___H8_15)); }
	inline uint64_t get_H8_15() const { return ___H8_15; }
	inline uint64_t* get_address_of_H8_15() { return &___H8_15; }
	inline void set_H8_15(uint64_t value)
	{
		___H8_15 = value;
	}

	inline static int32_t get_offset_of_W_16() { return static_cast<int32_t>(offsetof(SHA384Managed_t3337730413, ___W_16)); }
	inline UInt64U5BU5D_t2614999249* get_W_16() const { return ___W_16; }
	inline UInt64U5BU5D_t2614999249** get_address_of_W_16() { return &___W_16; }
	inline void set_W_16(UInt64U5BU5D_t2614999249* value)
	{
		___W_16 = value;
		Il2CppCodeGenWriteBarrier((&___W_16), value);
	}

	inline static int32_t get_offset_of_wOff_17() { return static_cast<int32_t>(offsetof(SHA384Managed_t3337730413, ___wOff_17)); }
	inline int32_t get_wOff_17() const { return ___wOff_17; }
	inline int32_t* get_address_of_wOff_17() { return &___wOff_17; }
	inline void set_wOff_17(int32_t value)
	{
		___wOff_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384MANAGED_T3337730413_H
#ifndef SECURITYPERMISSIONFLAG_T1492896814_H
#define SECURITYPERMISSIONFLAG_T1492896814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionFlag
struct  SecurityPermissionFlag_t1492896814 
{
public:
	// System.Int32 System.Security.Permissions.SecurityPermissionFlag::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityPermissionFlag_t1492896814, ___value___1)); }
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
#endif // SECURITYPERMISSIONFLAG_T1492896814_H
#ifndef EVENTRESETMODE_T3695271449_H
#define EVENTRESETMODE_T3695271449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventResetMode
struct  EventResetMode_t3695271449 
{
public:
	// System.Int32 System.Threading.EventResetMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventResetMode_t3695271449, ___value___1)); }
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
#endif // EVENTRESETMODE_T3695271449_H
#ifndef SHA512MANAGED_T1035052561_H
#define SHA512MANAGED_T1035052561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512Managed
struct  SHA512Managed_t1035052561  : public SHA512_t2632996201
{
public:
	// System.Byte[] System.Security.Cryptography.SHA512Managed::xBuf
	ByteU5BU5D_t1239206108* ___xBuf_4;
	// System.Int32 System.Security.Cryptography.SHA512Managed::xBufOff
	int32_t ___xBufOff_5;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::byteCount1
	uint64_t ___byteCount1_6;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::byteCount2
	uint64_t ___byteCount2_7;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H1
	uint64_t ___H1_8;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H2
	uint64_t ___H2_9;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H3
	uint64_t ___H3_10;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H4
	uint64_t ___H4_11;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H5
	uint64_t ___H5_12;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H6
	uint64_t ___H6_13;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H7
	uint64_t ___H7_14;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H8
	uint64_t ___H8_15;
	// System.UInt64[] System.Security.Cryptography.SHA512Managed::W
	UInt64U5BU5D_t2614999249* ___W_16;
	// System.Int32 System.Security.Cryptography.SHA512Managed::wOff
	int32_t ___wOff_17;

public:
	inline static int32_t get_offset_of_xBuf_4() { return static_cast<int32_t>(offsetof(SHA512Managed_t1035052561, ___xBuf_4)); }
	inline ByteU5BU5D_t1239206108* get_xBuf_4() const { return ___xBuf_4; }
	inline ByteU5BU5D_t1239206108** get_address_of_xBuf_4() { return &___xBuf_4; }
	inline void set_xBuf_4(ByteU5BU5D_t1239206108* value)
	{
		___xBuf_4 = value;
		Il2CppCodeGenWriteBarrier((&___xBuf_4), value);
	}

	inline static int32_t get_offset_of_xBufOff_5() { return static_cast<int32_t>(offsetof(SHA512Managed_t1035052561, ___xBufOff_5)); }
	inline int32_t get_xBufOff_5() const { return ___xBufOff_5; }
	inline int32_t* get_address_of_xBufOff_5() { return &___xBufOff_5; }
	inline void set_xBufOff_5(int32_t value)
	{
		___xBufOff_5 = value;
	}

	inline static int32_t get_offset_of_byteCount1_6() { return static_cast<int32_t>(offsetof(SHA512Managed_t1035052561, ___byteCount1_6)); }
	inline uint64_t get_byteCount1_6() const { return ___byteCount1_6; }
	inline uint64_t* get_address_of_byteCount1_6() { return &___byteCount1_6; }
	inline void set_byteCount1_6(uint64_t value)
	{
		___byteCount1_6 = value;
	}

	inline static int32_t get_offset_of_byteCount2_7() { return static_cast<int32_t>(offsetof(SHA512Managed_t1035052561, ___byteCount2_7)); }
	inline uint64_t get_byteCount2_7() const { return ___byteCount2_7; }
	inline uint64_t* get_address_of_byteCount2_7() { return &___byteCount2_7; }
	inline void set_byteCount2_7(uint64_t value)
	{
		___byteCount2_7 = value;
	}

	inline static int32_t get_offset_of_H1_8() { return static_cast<int32_t>(offsetof(SHA512Managed_t1035052561, ___H1_8)); }
	inline uint64_t get_H1_8() const { return ___H1_8; }
	inline uint64_t* get_address_of_H1_8() { return &___H1_8; }
	inline void set_H1_8(uint64_t value)
	{
		___H1_8 = value;
	}

	inline static int32_t get_offset_of_H2_9() { return static_cast<int32_t>(offsetof(SHA512Managed_t1035052561, ___H2_9)); }
	inline uint64_t get_H2_9() const { return ___H2_9; }
	inline uint64_t* get_address_of_H2_9() { return &___H2_9; }
	inline void set_H2_9(uint64_t value)
	{
		___H2_9 = value;
	}

	inline static int32_t get_offset_of_H3_10() { return static_cast<int32_t>(offsetof(SHA512Managed_t1035052561, ___H3_10)); }
	inline uint64_t get_H3_10() const { return ___H3_10; }
	inline uint64_t* get_address_of_H3_10() { return &___H3_10; }
	inline void set_H3_10(uint64_t value)
	{
		___H3_10 = value;
	}

	inline static int32_t get_offset_of_H4_11() { return static_cast<int32_t>(offsetof(SHA512Managed_t1035052561, ___H4_11)); }
	inline uint64_t get_H4_11() const { return ___H4_11; }
	inline uint64_t* get_address_of_H4_11() { return &___H4_11; }
	inline void set_H4_11(uint64_t value)
	{
		___H4_11 = value;
	}

	inline static int32_t get_offset_of_H5_12() { return static_cast<int32_t>(offsetof(SHA512Managed_t1035052561, ___H5_12)); }
	inline uint64_t get_H5_12() const { return ___H5_12; }
	inline uint64_t* get_address_of_H5_12() { return &___H5_12; }
	inline void set_H5_12(uint64_t value)
	{
		___H5_12 = value;
	}

	inline static int32_t get_offset_of_H6_13() { return static_cast<int32_t>(offsetof(SHA512Managed_t1035052561, ___H6_13)); }
	inline uint64_t get_H6_13() const { return ___H6_13; }
	inline uint64_t* get_address_of_H6_13() { return &___H6_13; }
	inline void set_H6_13(uint64_t value)
	{
		___H6_13 = value;
	}

	inline static int32_t get_offset_of_H7_14() { return static_cast<int32_t>(offsetof(SHA512Managed_t1035052561, ___H7_14)); }
	inline uint64_t get_H7_14() const { return ___H7_14; }
	inline uint64_t* get_address_of_H7_14() { return &___H7_14; }
	inline void set_H7_14(uint64_t value)
	{
		___H7_14 = value;
	}

	inline static int32_t get_offset_of_H8_15() { return static_cast<int32_t>(offsetof(SHA512Managed_t1035052561, ___H8_15)); }
	inline uint64_t get_H8_15() const { return ___H8_15; }
	inline uint64_t* get_address_of_H8_15() { return &___H8_15; }
	inline void set_H8_15(uint64_t value)
	{
		___H8_15 = value;
	}

	inline static int32_t get_offset_of_W_16() { return static_cast<int32_t>(offsetof(SHA512Managed_t1035052561, ___W_16)); }
	inline UInt64U5BU5D_t2614999249* get_W_16() const { return ___W_16; }
	inline UInt64U5BU5D_t2614999249** get_address_of_W_16() { return &___W_16; }
	inline void set_W_16(UInt64U5BU5D_t2614999249* value)
	{
		___W_16 = value;
		Il2CppCodeGenWriteBarrier((&___W_16), value);
	}

	inline static int32_t get_offset_of_wOff_17() { return static_cast<int32_t>(offsetof(SHA512Managed_t1035052561, ___wOff_17)); }
	inline int32_t get_wOff_17() const { return ___wOff_17; }
	inline int32_t* get_address_of_wOff_17() { return &___wOff_17; }
	inline void set_wOff_17(int32_t value)
	{
		___wOff_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512MANAGED_T1035052561_H
#ifndef POLICYSTATEMENTATTRIBUTE_T158093844_H
#define POLICYSTATEMENTATTRIBUTE_T158093844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyStatementAttribute
struct  PolicyStatementAttribute_t158093844 
{
public:
	// System.Int32 System.Security.Policy.PolicyStatementAttribute::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PolicyStatementAttribute_t158093844, ___value___1)); }
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
#endif // POLICYSTATEMENTATTRIBUTE_T158093844_H
#ifndef PADDINGMODE_T4041756405_H
#define PADDINGMODE_T4041756405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t4041756405 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t4041756405, ___value___1)); }
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
#endif // PADDINGMODE_T4041756405_H
#ifndef SECURITYCONTEXT_T2766911887_H
#define SECURITYCONTEXT_T2766911887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityContext
struct  SecurityContext_t2766911887  : public RuntimeObject
{
public:
	// System.Boolean System.Security.SecurityContext::_capture
	bool ____capture_0;
	// System.IntPtr System.Security.SecurityContext::_winid
	intptr_t ____winid_1;
	// System.Threading.CompressedStack System.Security.SecurityContext::_stack
	CompressedStack_t1016366904 * ____stack_2;
	// System.Boolean System.Security.SecurityContext::_suppressFlow
	bool ____suppressFlow_3;

public:
	inline static int32_t get_offset_of__capture_0() { return static_cast<int32_t>(offsetof(SecurityContext_t2766911887, ____capture_0)); }
	inline bool get__capture_0() const { return ____capture_0; }
	inline bool* get_address_of__capture_0() { return &____capture_0; }
	inline void set__capture_0(bool value)
	{
		____capture_0 = value;
	}

	inline static int32_t get_offset_of__winid_1() { return static_cast<int32_t>(offsetof(SecurityContext_t2766911887, ____winid_1)); }
	inline intptr_t get__winid_1() const { return ____winid_1; }
	inline intptr_t* get_address_of__winid_1() { return &____winid_1; }
	inline void set__winid_1(intptr_t value)
	{
		____winid_1 = value;
	}

	inline static int32_t get_offset_of__stack_2() { return static_cast<int32_t>(offsetof(SecurityContext_t2766911887, ____stack_2)); }
	inline CompressedStack_t1016366904 * get__stack_2() const { return ____stack_2; }
	inline CompressedStack_t1016366904 ** get_address_of__stack_2() { return &____stack_2; }
	inline void set__stack_2(CompressedStack_t1016366904 * value)
	{
		____stack_2 = value;
		Il2CppCodeGenWriteBarrier((&____stack_2), value);
	}

	inline static int32_t get_offset_of__suppressFlow_3() { return static_cast<int32_t>(offsetof(SecurityContext_t2766911887, ____suppressFlow_3)); }
	inline bool get__suppressFlow_3() const { return ____suppressFlow_3; }
	inline bool* get_address_of__suppressFlow_3() { return &____suppressFlow_3; }
	inline void set__suppressFlow_3(bool value)
	{
		____suppressFlow_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYCONTEXT_T2766911887_H
#ifndef SECURITYACTION_T1463814551_H
#define SECURITYACTION_T1463814551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAction
struct  SecurityAction_t1463814551 
{
public:
	// System.Int32 System.Security.Permissions.SecurityAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityAction_t1463814551, ___value___1)); }
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
#endif // SECURITYACTION_T1463814551_H
#ifndef SECURITYCRITICALSCOPE_T205030308_H
#define SECURITYCRITICALSCOPE_T205030308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityCriticalScope
struct  SecurityCriticalScope_t205030308 
{
public:
	// System.Int32 System.Security.SecurityCriticalScope::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityCriticalScope_t205030308, ___value___1)); }
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
#endif // SECURITYCRITICALSCOPE_T205030308_H
#ifndef SHA256MANAGED_T3978902450_H
#define SHA256MANAGED_T3978902450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256Managed
struct  SHA256Managed_t3978902450  : public SHA256_t3101146856
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_H
	UInt32U5BU5D_t4145687601* ____H_4;
	// System.UInt64 System.Security.Cryptography.SHA256Managed::count
	uint64_t ___count_5;
	// System.Byte[] System.Security.Cryptography.SHA256Managed::_ProcessingBuffer
	ByteU5BU5D_t1239206108* ____ProcessingBuffer_6;
	// System.Int32 System.Security.Cryptography.SHA256Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_7;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::buff
	UInt32U5BU5D_t4145687601* ___buff_8;

public:
	inline static int32_t get_offset_of__H_4() { return static_cast<int32_t>(offsetof(SHA256Managed_t3978902450, ____H_4)); }
	inline UInt32U5BU5D_t4145687601* get__H_4() const { return ____H_4; }
	inline UInt32U5BU5D_t4145687601** get_address_of__H_4() { return &____H_4; }
	inline void set__H_4(UInt32U5BU5D_t4145687601* value)
	{
		____H_4 = value;
		Il2CppCodeGenWriteBarrier((&____H_4), value);
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(SHA256Managed_t3978902450, ___count_5)); }
	inline uint64_t get_count_5() const { return ___count_5; }
	inline uint64_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(uint64_t value)
	{
		___count_5 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_6() { return static_cast<int32_t>(offsetof(SHA256Managed_t3978902450, ____ProcessingBuffer_6)); }
	inline ByteU5BU5D_t1239206108* get__ProcessingBuffer_6() const { return ____ProcessingBuffer_6; }
	inline ByteU5BU5D_t1239206108** get_address_of__ProcessingBuffer_6() { return &____ProcessingBuffer_6; }
	inline void set__ProcessingBuffer_6(ByteU5BU5D_t1239206108* value)
	{
		____ProcessingBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_6), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_7() { return static_cast<int32_t>(offsetof(SHA256Managed_t3978902450, ____ProcessingBufferCount_7)); }
	inline int32_t get__ProcessingBufferCount_7() const { return ____ProcessingBufferCount_7; }
	inline int32_t* get_address_of__ProcessingBufferCount_7() { return &____ProcessingBufferCount_7; }
	inline void set__ProcessingBufferCount_7(int32_t value)
	{
		____ProcessingBufferCount_7 = value;
	}

	inline static int32_t get_offset_of_buff_8() { return static_cast<int32_t>(offsetof(SHA256Managed_t3978902450, ___buff_8)); }
	inline UInt32U5BU5D_t4145687601* get_buff_8() const { return ___buff_8; }
	inline UInt32U5BU5D_t4145687601** get_address_of_buff_8() { return &___buff_8; }
	inline void set_buff_8(UInt32U5BU5D_t4145687601* value)
	{
		___buff_8 = value;
		Il2CppCodeGenWriteBarrier((&___buff_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256MANAGED_T3978902450_H
#ifndef PERMISSIONSTATE_T2872359087_H
#define PERMISSIONSTATE_T2872359087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.PermissionState
struct  PermissionState_t2872359087 
{
public:
	// System.Int32 System.Security.Permissions.PermissionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PermissionState_t2872359087, ___value___1)); }
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
#endif // PERMISSIONSTATE_T2872359087_H
#ifndef SECURITYEXCEPTION_T1400559452_H
#define SECURITYEXCEPTION_T1400559452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityException
struct  SecurityException_t1400559452  : public SystemException_t2344580972
{
public:
	// System.String System.Security.SecurityException::permissionState
	String_t* ___permissionState_11;
	// System.Type System.Security.SecurityException::permissionType
	Type_t * ___permissionType_12;
	// System.String System.Security.SecurityException::_granted
	String_t* ____granted_13;
	// System.String System.Security.SecurityException::_refused
	String_t* ____refused_14;
	// System.Object System.Security.SecurityException::_demanded
	RuntimeObject * ____demanded_15;
	// System.Security.IPermission System.Security.SecurityException::_firstperm
	RuntimeObject* ____firstperm_16;
	// System.Reflection.MethodInfo System.Security.SecurityException::_method
	MethodInfo_t * ____method_17;
	// System.Security.Policy.Evidence System.Security.SecurityException::_evidence
	Evidence_t1786733851 * ____evidence_18;

public:
	inline static int32_t get_offset_of_permissionState_11() { return static_cast<int32_t>(offsetof(SecurityException_t1400559452, ___permissionState_11)); }
	inline String_t* get_permissionState_11() const { return ___permissionState_11; }
	inline String_t** get_address_of_permissionState_11() { return &___permissionState_11; }
	inline void set_permissionState_11(String_t* value)
	{
		___permissionState_11 = value;
		Il2CppCodeGenWriteBarrier((&___permissionState_11), value);
	}

	inline static int32_t get_offset_of_permissionType_12() { return static_cast<int32_t>(offsetof(SecurityException_t1400559452, ___permissionType_12)); }
	inline Type_t * get_permissionType_12() const { return ___permissionType_12; }
	inline Type_t ** get_address_of_permissionType_12() { return &___permissionType_12; }
	inline void set_permissionType_12(Type_t * value)
	{
		___permissionType_12 = value;
		Il2CppCodeGenWriteBarrier((&___permissionType_12), value);
	}

	inline static int32_t get_offset_of__granted_13() { return static_cast<int32_t>(offsetof(SecurityException_t1400559452, ____granted_13)); }
	inline String_t* get__granted_13() const { return ____granted_13; }
	inline String_t** get_address_of__granted_13() { return &____granted_13; }
	inline void set__granted_13(String_t* value)
	{
		____granted_13 = value;
		Il2CppCodeGenWriteBarrier((&____granted_13), value);
	}

	inline static int32_t get_offset_of__refused_14() { return static_cast<int32_t>(offsetof(SecurityException_t1400559452, ____refused_14)); }
	inline String_t* get__refused_14() const { return ____refused_14; }
	inline String_t** get_address_of__refused_14() { return &____refused_14; }
	inline void set__refused_14(String_t* value)
	{
		____refused_14 = value;
		Il2CppCodeGenWriteBarrier((&____refused_14), value);
	}

	inline static int32_t get_offset_of__demanded_15() { return static_cast<int32_t>(offsetof(SecurityException_t1400559452, ____demanded_15)); }
	inline RuntimeObject * get__demanded_15() const { return ____demanded_15; }
	inline RuntimeObject ** get_address_of__demanded_15() { return &____demanded_15; }
	inline void set__demanded_15(RuntimeObject * value)
	{
		____demanded_15 = value;
		Il2CppCodeGenWriteBarrier((&____demanded_15), value);
	}

	inline static int32_t get_offset_of__firstperm_16() { return static_cast<int32_t>(offsetof(SecurityException_t1400559452, ____firstperm_16)); }
	inline RuntimeObject* get__firstperm_16() const { return ____firstperm_16; }
	inline RuntimeObject** get_address_of__firstperm_16() { return &____firstperm_16; }
	inline void set__firstperm_16(RuntimeObject* value)
	{
		____firstperm_16 = value;
		Il2CppCodeGenWriteBarrier((&____firstperm_16), value);
	}

	inline static int32_t get_offset_of__method_17() { return static_cast<int32_t>(offsetof(SecurityException_t1400559452, ____method_17)); }
	inline MethodInfo_t * get__method_17() const { return ____method_17; }
	inline MethodInfo_t ** get_address_of__method_17() { return &____method_17; }
	inline void set__method_17(MethodInfo_t * value)
	{
		____method_17 = value;
		Il2CppCodeGenWriteBarrier((&____method_17), value);
	}

	inline static int32_t get_offset_of__evidence_18() { return static_cast<int32_t>(offsetof(SecurityException_t1400559452, ____evidence_18)); }
	inline Evidence_t1786733851 * get__evidence_18() const { return ____evidence_18; }
	inline Evidence_t1786733851 ** get_address_of__evidence_18() { return &____evidence_18; }
	inline void set__evidence_18(Evidence_t1786733851 * value)
	{
		____evidence_18 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYEXCEPTION_T1400559452_H
#ifndef RUNTIMEDECLSECURITYENTRY_T876744458_H
#define RUNTIMEDECLSECURITYENTRY_T876744458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.RuntimeDeclSecurityEntry
struct  RuntimeDeclSecurityEntry_t876744458 
{
public:
	// System.IntPtr System.Security.RuntimeDeclSecurityEntry::blob
	intptr_t ___blob_0;
	// System.Int32 System.Security.RuntimeDeclSecurityEntry::size
	int32_t ___size_1;
	// System.Int32 System.Security.RuntimeDeclSecurityEntry::index
	int32_t ___index_2;

public:
	inline static int32_t get_offset_of_blob_0() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t876744458, ___blob_0)); }
	inline intptr_t get_blob_0() const { return ___blob_0; }
	inline intptr_t* get_address_of_blob_0() { return &___blob_0; }
	inline void set_blob_0(intptr_t value)
	{
		___blob_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t876744458, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t876744458, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEDECLSECURITYENTRY_T876744458_H
#ifndef CODEACCESSSECURITYATTRIBUTE_T1714376679_H
#define CODEACCESSSECURITYATTRIBUTE_T1714376679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.CodeAccessSecurityAttribute
struct  CodeAccessSecurityAttribute_t1714376679  : public SecurityAttribute_t3905110329
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSSECURITYATTRIBUTE_T1714376679_H
#ifndef SHA1CRYPTOSERVICEPROVIDER_T3108788846_H
#define SHA1CRYPTOSERVICEPROVIDER_T3108788846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1CryptoServiceProvider
struct  SHA1CryptoServiceProvider_t3108788846  : public SHA1_t2460963231
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1CryptoServiceProvider::sha
	SHA1Internal_t689383240 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1CryptoServiceProvider_t3108788846, ___sha_4)); }
	inline SHA1Internal_t689383240 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t689383240 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t689383240 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier((&___sha_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1CRYPTOSERVICEPROVIDER_T3108788846_H
#ifndef ARGUMENTEXCEPTION_T3999033946_H
#define ARGUMENTEXCEPTION_T3999033946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t3999033946  : public SystemException_t2344580972
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t3999033946, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T3999033946_H
#ifndef WAITHANDLE_T4058280287_H
#define WAITHANDLE_T4058280287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitHandle
struct  WaitHandle_t4058280287  : public MarshalByRefObject_t3972262231
{
public:
	// Microsoft.Win32.SafeHandles.SafeWaitHandle System.Threading.WaitHandle::safe_wait_handle
	SafeWaitHandle_t1857187301 * ___safe_wait_handle_2;
	// System.Boolean System.Threading.WaitHandle::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_safe_wait_handle_2() { return static_cast<int32_t>(offsetof(WaitHandle_t4058280287, ___safe_wait_handle_2)); }
	inline SafeWaitHandle_t1857187301 * get_safe_wait_handle_2() const { return ___safe_wait_handle_2; }
	inline SafeWaitHandle_t1857187301 ** get_address_of_safe_wait_handle_2() { return &___safe_wait_handle_2; }
	inline void set_safe_wait_handle_2(SafeWaitHandle_t1857187301 * value)
	{
		___safe_wait_handle_2 = value;
		Il2CppCodeGenWriteBarrier((&___safe_wait_handle_2), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(WaitHandle_t4058280287, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

struct WaitHandle_t4058280287_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_3;

public:
	inline static int32_t get_offset_of_InvalidHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t4058280287_StaticFields, ___InvalidHandle_3)); }
	inline intptr_t get_InvalidHandle_3() const { return ___InvalidHandle_3; }
	inline intptr_t* get_address_of_InvalidHandle_3() { return &___InvalidHandle_3; }
	inline void set_InvalidHandle_3(intptr_t value)
	{
		___InvalidHandle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITHANDLE_T4058280287_H
#ifndef SHA1MANAGED_T371006493_H
#define SHA1MANAGED_T371006493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Managed
struct  SHA1Managed_t371006493  : public SHA1_t2460963231
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1Managed::sha
	SHA1Internal_t689383240 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1Managed_t371006493, ___sha_4)); }
	inline SHA1Internal_t689383240 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t689383240 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t689383240 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier((&___sha_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1MANAGED_T371006493_H
#ifndef CIPHERMODE_T662797083_H
#define CIPHERMODE_T662797083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t662797083 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t662797083, ___value___1)); }
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
#endif // CIPHERMODE_T662797083_H
#ifndef POLICYSTATEMENT_T1512005238_H
#define POLICYSTATEMENT_T1512005238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyStatement
struct  PolicyStatement_t1512005238  : public RuntimeObject
{
public:
	// System.Security.PermissionSet System.Security.Policy.PolicyStatement::perms
	PermissionSet_t4217798818 * ___perms_0;
	// System.Security.Policy.PolicyStatementAttribute System.Security.Policy.PolicyStatement::attrs
	int32_t ___attrs_1;

public:
	inline static int32_t get_offset_of_perms_0() { return static_cast<int32_t>(offsetof(PolicyStatement_t1512005238, ___perms_0)); }
	inline PermissionSet_t4217798818 * get_perms_0() const { return ___perms_0; }
	inline PermissionSet_t4217798818 ** get_address_of_perms_0() { return &___perms_0; }
	inline void set_perms_0(PermissionSet_t4217798818 * value)
	{
		___perms_0 = value;
		Il2CppCodeGenWriteBarrier((&___perms_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(PolicyStatement_t1512005238, ___attrs_1)); }
	inline int32_t get_attrs_1() const { return ___attrs_1; }
	inline int32_t* get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(int32_t value)
	{
		___attrs_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLICYSTATEMENT_T1512005238_H
#ifndef POLICYLEVEL_T1670651488_H
#define POLICYLEVEL_T1670651488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyLevel
struct  PolicyLevel_t1670651488  : public RuntimeObject
{
public:
	// System.String System.Security.Policy.PolicyLevel::label
	String_t* ___label_0;
	// System.Security.Policy.CodeGroup System.Security.Policy.PolicyLevel::root_code_group
	CodeGroup_t4210518413 * ___root_code_group_1;
	// System.Collections.ArrayList System.Security.Policy.PolicyLevel::full_trust_assemblies
	ArrayList_t2267421990 * ___full_trust_assemblies_2;
	// System.Collections.ArrayList System.Security.Policy.PolicyLevel::named_permission_sets
	ArrayList_t2267421990 * ___named_permission_sets_3;
	// System.String System.Security.Policy.PolicyLevel::_location
	String_t* ____location_4;
	// System.Security.PolicyLevelType System.Security.Policy.PolicyLevel::_type
	int32_t ____type_5;
	// System.Collections.Hashtable System.Security.Policy.PolicyLevel::fullNames
	Hashtable_t3091114771 * ___fullNames_6;
	// System.Security.SecurityElement System.Security.Policy.PolicyLevel::xml
	SecurityElement_t2948596042 * ___xml_7;

public:
	inline static int32_t get_offset_of_label_0() { return static_cast<int32_t>(offsetof(PolicyLevel_t1670651488, ___label_0)); }
	inline String_t* get_label_0() const { return ___label_0; }
	inline String_t** get_address_of_label_0() { return &___label_0; }
	inline void set_label_0(String_t* value)
	{
		___label_0 = value;
		Il2CppCodeGenWriteBarrier((&___label_0), value);
	}

	inline static int32_t get_offset_of_root_code_group_1() { return static_cast<int32_t>(offsetof(PolicyLevel_t1670651488, ___root_code_group_1)); }
	inline CodeGroup_t4210518413 * get_root_code_group_1() const { return ___root_code_group_1; }
	inline CodeGroup_t4210518413 ** get_address_of_root_code_group_1() { return &___root_code_group_1; }
	inline void set_root_code_group_1(CodeGroup_t4210518413 * value)
	{
		___root_code_group_1 = value;
		Il2CppCodeGenWriteBarrier((&___root_code_group_1), value);
	}

	inline static int32_t get_offset_of_full_trust_assemblies_2() { return static_cast<int32_t>(offsetof(PolicyLevel_t1670651488, ___full_trust_assemblies_2)); }
	inline ArrayList_t2267421990 * get_full_trust_assemblies_2() const { return ___full_trust_assemblies_2; }
	inline ArrayList_t2267421990 ** get_address_of_full_trust_assemblies_2() { return &___full_trust_assemblies_2; }
	inline void set_full_trust_assemblies_2(ArrayList_t2267421990 * value)
	{
		___full_trust_assemblies_2 = value;
		Il2CppCodeGenWriteBarrier((&___full_trust_assemblies_2), value);
	}

	inline static int32_t get_offset_of_named_permission_sets_3() { return static_cast<int32_t>(offsetof(PolicyLevel_t1670651488, ___named_permission_sets_3)); }
	inline ArrayList_t2267421990 * get_named_permission_sets_3() const { return ___named_permission_sets_3; }
	inline ArrayList_t2267421990 ** get_address_of_named_permission_sets_3() { return &___named_permission_sets_3; }
	inline void set_named_permission_sets_3(ArrayList_t2267421990 * value)
	{
		___named_permission_sets_3 = value;
		Il2CppCodeGenWriteBarrier((&___named_permission_sets_3), value);
	}

	inline static int32_t get_offset_of__location_4() { return static_cast<int32_t>(offsetof(PolicyLevel_t1670651488, ____location_4)); }
	inline String_t* get__location_4() const { return ____location_4; }
	inline String_t** get_address_of__location_4() { return &____location_4; }
	inline void set__location_4(String_t* value)
	{
		____location_4 = value;
		Il2CppCodeGenWriteBarrier((&____location_4), value);
	}

	inline static int32_t get_offset_of__type_5() { return static_cast<int32_t>(offsetof(PolicyLevel_t1670651488, ____type_5)); }
	inline int32_t get__type_5() const { return ____type_5; }
	inline int32_t* get_address_of__type_5() { return &____type_5; }
	inline void set__type_5(int32_t value)
	{
		____type_5 = value;
	}

	inline static int32_t get_offset_of_fullNames_6() { return static_cast<int32_t>(offsetof(PolicyLevel_t1670651488, ___fullNames_6)); }
	inline Hashtable_t3091114771 * get_fullNames_6() const { return ___fullNames_6; }
	inline Hashtable_t3091114771 ** get_address_of_fullNames_6() { return &___fullNames_6; }
	inline void set_fullNames_6(Hashtable_t3091114771 * value)
	{
		___fullNames_6 = value;
		Il2CppCodeGenWriteBarrier((&___fullNames_6), value);
	}

	inline static int32_t get_offset_of_xml_7() { return static_cast<int32_t>(offsetof(PolicyLevel_t1670651488, ___xml_7)); }
	inline SecurityElement_t2948596042 * get_xml_7() const { return ___xml_7; }
	inline SecurityElement_t2948596042 ** get_address_of_xml_7() { return &___xml_7; }
	inline void set_xml_7(SecurityElement_t2948596042 * value)
	{
		___xml_7 = value;
		Il2CppCodeGenWriteBarrier((&___xml_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POLICYLEVEL_T1670651488_H
#ifndef SECURITYPERMISSIONATTRIBUTE_T2332796240_H
#define SECURITYPERMISSIONATTRIBUTE_T2332796240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionAttribute
struct  SecurityPermissionAttribute_t2332796240  : public CodeAccessSecurityAttribute_t1714376679
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermissionAttribute::m_Flags
	int32_t ___m_Flags_0;

public:
	inline static int32_t get_offset_of_m_Flags_0() { return static_cast<int32_t>(offsetof(SecurityPermissionAttribute_t2332796240, ___m_Flags_0)); }
	inline int32_t get_m_Flags_0() const { return ___m_Flags_0; }
	inline int32_t* get_address_of_m_Flags_0() { return &___m_Flags_0; }
	inline void set_m_Flags_0(int32_t value)
	{
		___m_Flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSIONATTRIBUTE_T2332796240_H
#ifndef EVENTWAITHANDLE_T130779644_H
#define EVENTWAITHANDLE_T130779644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventWaitHandle
struct  EventWaitHandle_t130779644  : public WaitHandle_t4058280287
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTWAITHANDLE_T130779644_H
#ifndef SECURITYPERMISSION_T1094454198_H
#define SECURITYPERMISSION_T1094454198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermission
struct  SecurityPermission_t1094454198  : public CodeAccessPermission_t1899781089
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermission::flags
	int32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(SecurityPermission_t1094454198, ___flags_0)); }
	inline int32_t get_flags_0() const { return ___flags_0; }
	inline int32_t* get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(int32_t value)
	{
		___flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSION_T1094454198_H
#ifndef SECURITYCRITICALATTRIBUTE_T374067293_H
#define SECURITYCRITICALATTRIBUTE_T374067293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityCriticalAttribute
struct  SecurityCriticalAttribute_t374067293  : public Attribute_t491624126
{
public:
	// System.Security.SecurityCriticalScope System.Security.SecurityCriticalAttribute::_scope
	int32_t ____scope_0;

public:
	inline static int32_t get_offset_of__scope_0() { return static_cast<int32_t>(offsetof(SecurityCriticalAttribute_t374067293, ____scope_0)); }
	inline int32_t get__scope_0() const { return ____scope_0; }
	inline int32_t* get_address_of__scope_0() { return &____scope_0; }
	inline void set__scope_0(int32_t value)
	{
		____scope_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYCRITICALATTRIBUTE_T374067293_H
#ifndef RUNTIMESECURITYFRAME_T2258239512_H
#define RUNTIMESECURITYFRAME_T2258239512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.RuntimeSecurityFrame
struct  RuntimeSecurityFrame_t2258239512  : public RuntimeObject
{
public:
	// System.AppDomain System.Security.RuntimeSecurityFrame::domain
	AppDomain_t1381756575 * ___domain_0;
	// System.Reflection.MethodInfo System.Security.RuntimeSecurityFrame::method
	MethodInfo_t * ___method_1;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::assert
	RuntimeDeclSecurityEntry_t876744458  ___assert_2;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::deny
	RuntimeDeclSecurityEntry_t876744458  ___deny_3;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::permitonly
	RuntimeDeclSecurityEntry_t876744458  ___permitonly_4;

public:
	inline static int32_t get_offset_of_domain_0() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t2258239512, ___domain_0)); }
	inline AppDomain_t1381756575 * get_domain_0() const { return ___domain_0; }
	inline AppDomain_t1381756575 ** get_address_of_domain_0() { return &___domain_0; }
	inline void set_domain_0(AppDomain_t1381756575 * value)
	{
		___domain_0 = value;
		Il2CppCodeGenWriteBarrier((&___domain_0), value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t2258239512, ___method_1)); }
	inline MethodInfo_t * get_method_1() const { return ___method_1; }
	inline MethodInfo_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodInfo_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((&___method_1), value);
	}

	inline static int32_t get_offset_of_assert_2() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t2258239512, ___assert_2)); }
	inline RuntimeDeclSecurityEntry_t876744458  get_assert_2() const { return ___assert_2; }
	inline RuntimeDeclSecurityEntry_t876744458 * get_address_of_assert_2() { return &___assert_2; }
	inline void set_assert_2(RuntimeDeclSecurityEntry_t876744458  value)
	{
		___assert_2 = value;
	}

	inline static int32_t get_offset_of_deny_3() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t2258239512, ___deny_3)); }
	inline RuntimeDeclSecurityEntry_t876744458  get_deny_3() const { return ___deny_3; }
	inline RuntimeDeclSecurityEntry_t876744458 * get_address_of_deny_3() { return &___deny_3; }
	inline void set_deny_3(RuntimeDeclSecurityEntry_t876744458  value)
	{
		___deny_3 = value;
	}

	inline static int32_t get_offset_of_permitonly_4() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t2258239512, ___permitonly_4)); }
	inline RuntimeDeclSecurityEntry_t876744458  get_permitonly_4() const { return ___permitonly_4; }
	inline RuntimeDeclSecurityEntry_t876744458 * get_address_of_permitonly_4() { return &___permitonly_4; }
	inline void set_permitonly_4(RuntimeDeclSecurityEntry_t876744458  value)
	{
		___permitonly_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMESECURITYFRAME_T2258239512_H
#ifndef ENCODERFALLBACKEXCEPTION_T3190452632_H
#define ENCODERFALLBACKEXCEPTION_T3190452632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackException
struct  EncoderFallbackException_t3190452632  : public ArgumentException_t3999033946
{
public:
	// System.Char System.Text.EncoderFallbackException::char_unknown
	Il2CppChar ___char_unknown_13;
	// System.Char System.Text.EncoderFallbackException::char_unknown_high
	Il2CppChar ___char_unknown_high_14;
	// System.Char System.Text.EncoderFallbackException::char_unknown_low
	Il2CppChar ___char_unknown_low_15;
	// System.Int32 System.Text.EncoderFallbackException::index
	int32_t ___index_16;

public:
	inline static int32_t get_offset_of_char_unknown_13() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t3190452632, ___char_unknown_13)); }
	inline Il2CppChar get_char_unknown_13() const { return ___char_unknown_13; }
	inline Il2CppChar* get_address_of_char_unknown_13() { return &___char_unknown_13; }
	inline void set_char_unknown_13(Il2CppChar value)
	{
		___char_unknown_13 = value;
	}

	inline static int32_t get_offset_of_char_unknown_high_14() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t3190452632, ___char_unknown_high_14)); }
	inline Il2CppChar get_char_unknown_high_14() const { return ___char_unknown_high_14; }
	inline Il2CppChar* get_address_of_char_unknown_high_14() { return &___char_unknown_high_14; }
	inline void set_char_unknown_high_14(Il2CppChar value)
	{
		___char_unknown_high_14 = value;
	}

	inline static int32_t get_offset_of_char_unknown_low_15() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t3190452632, ___char_unknown_low_15)); }
	inline Il2CppChar get_char_unknown_low_15() const { return ___char_unknown_low_15; }
	inline Il2CppChar* get_address_of_char_unknown_low_15() { return &___char_unknown_low_15; }
	inline void set_char_unknown_low_15(Il2CppChar value)
	{
		___char_unknown_low_15 = value;
	}

	inline static int32_t get_offset_of_index_16() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t3190452632, ___index_16)); }
	inline int32_t get_index_16() const { return ___index_16; }
	inline int32_t* get_address_of_index_16() { return &___index_16; }
	inline void set_index_16(int32_t value)
	{
		___index_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKEXCEPTION_T3190452632_H
#ifndef SYMMETRICALGORITHM_T3211106597_H
#define SYMMETRICALGORITHM_T3211106597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t3211106597  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t1239206108* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t1239206108* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t3093895349* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t3093895349* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3211106597, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3211106597, ___IVValue_1)); }
	inline ByteU5BU5D_t1239206108* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t1239206108** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t1239206108* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3211106597, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3211106597, ___KeyValue_3)); }
	inline ByteU5BU5D_t1239206108* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t1239206108** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t1239206108* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3211106597, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t3093895349* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t3093895349** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t3093895349* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3211106597, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t3093895349* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t3093895349** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t3093895349* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3211106597, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3211106597, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3211106597, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3211106597, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T3211106597_H
#ifndef WINDOWSIDENTITY_T1505370047_H
#define WINDOWSIDENTITY_T1505370047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsIdentity
struct  WindowsIdentity_t1505370047  : public RuntimeObject
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::_token
	intptr_t ____token_0;
	// System.String System.Security.Principal.WindowsIdentity::_type
	String_t* ____type_1;
	// System.Security.Principal.WindowsAccountType System.Security.Principal.WindowsIdentity::_account
	int32_t ____account_2;
	// System.Boolean System.Security.Principal.WindowsIdentity::_authenticated
	bool ____authenticated_3;
	// System.String System.Security.Principal.WindowsIdentity::_name
	String_t* ____name_4;
	// System.Runtime.Serialization.SerializationInfo System.Security.Principal.WindowsIdentity::_info
	SerializationInfo_t2777633894 * ____info_5;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(WindowsIdentity_t1505370047, ____token_0)); }
	inline intptr_t get__token_0() const { return ____token_0; }
	inline intptr_t* get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(intptr_t value)
	{
		____token_0 = value;
	}

	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(WindowsIdentity_t1505370047, ____type_1)); }
	inline String_t* get__type_1() const { return ____type_1; }
	inline String_t** get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(String_t* value)
	{
		____type_1 = value;
		Il2CppCodeGenWriteBarrier((&____type_1), value);
	}

	inline static int32_t get_offset_of__account_2() { return static_cast<int32_t>(offsetof(WindowsIdentity_t1505370047, ____account_2)); }
	inline int32_t get__account_2() const { return ____account_2; }
	inline int32_t* get_address_of__account_2() { return &____account_2; }
	inline void set__account_2(int32_t value)
	{
		____account_2 = value;
	}

	inline static int32_t get_offset_of__authenticated_3() { return static_cast<int32_t>(offsetof(WindowsIdentity_t1505370047, ____authenticated_3)); }
	inline bool get__authenticated_3() const { return ____authenticated_3; }
	inline bool* get_address_of__authenticated_3() { return &____authenticated_3; }
	inline void set__authenticated_3(bool value)
	{
		____authenticated_3 = value;
	}

	inline static int32_t get_offset_of__name_4() { return static_cast<int32_t>(offsetof(WindowsIdentity_t1505370047, ____name_4)); }
	inline String_t* get__name_4() const { return ____name_4; }
	inline String_t** get_address_of__name_4() { return &____name_4; }
	inline void set__name_4(String_t* value)
	{
		____name_4 = value;
		Il2CppCodeGenWriteBarrier((&____name_4), value);
	}

	inline static int32_t get_offset_of__info_5() { return static_cast<int32_t>(offsetof(WindowsIdentity_t1505370047, ____info_5)); }
	inline SerializationInfo_t2777633894 * get__info_5() const { return ____info_5; }
	inline SerializationInfo_t2777633894 ** get_address_of__info_5() { return &____info_5; }
	inline void set__info_5(SerializationInfo_t2777633894 * value)
	{
		____info_5 = value;
		Il2CppCodeGenWriteBarrier((&____info_5), value);
	}
};

struct WindowsIdentity_t1505370047_StaticFields
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::invalidWindows
	intptr_t ___invalidWindows_6;

public:
	inline static int32_t get_offset_of_invalidWindows_6() { return static_cast<int32_t>(offsetof(WindowsIdentity_t1505370047_StaticFields, ___invalidWindows_6)); }
	inline intptr_t get_invalidWindows_6() const { return ___invalidWindows_6; }
	inline intptr_t* get_address_of_invalidWindows_6() { return &___invalidWindows_6; }
	inline void set_invalidWindows_6(intptr_t value)
	{
		___invalidWindows_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSIDENTITY_T1505370047_H
#ifndef DECODERFALLBACKEXCEPTION_T1079308447_H
#define DECODERFALLBACKEXCEPTION_T1079308447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallbackException
struct  DecoderFallbackException_t1079308447  : public ArgumentException_t3999033946
{
public:
	// System.Byte[] System.Text.DecoderFallbackException::bytes_unknown
	ByteU5BU5D_t1239206108* ___bytes_unknown_13;
	// System.Int32 System.Text.DecoderFallbackException::index
	int32_t ___index_14;

public:
	inline static int32_t get_offset_of_bytes_unknown_13() { return static_cast<int32_t>(offsetof(DecoderFallbackException_t1079308447, ___bytes_unknown_13)); }
	inline ByteU5BU5D_t1239206108* get_bytes_unknown_13() const { return ___bytes_unknown_13; }
	inline ByteU5BU5D_t1239206108** get_address_of_bytes_unknown_13() { return &___bytes_unknown_13; }
	inline void set_bytes_unknown_13(ByteU5BU5D_t1239206108* value)
	{
		___bytes_unknown_13 = value;
		Il2CppCodeGenWriteBarrier((&___bytes_unknown_13), value);
	}

	inline static int32_t get_offset_of_index_14() { return static_cast<int32_t>(offsetof(DecoderFallbackException_t1079308447, ___index_14)); }
	inline int32_t get_index_14() const { return ___index_14; }
	inline int32_t* get_address_of_index_14() { return &___index_14; }
	inline void set_index_14(int32_t value)
	{
		___index_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACKEXCEPTION_T1079308447_H
#ifndef MANUALRESETEVENT_T3826126110_H
#define MANUALRESETEVENT_T3826126110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ManualResetEvent
struct  ManualResetEvent_t3826126110  : public EventWaitHandle_t130779644
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANUALRESETEVENT_T3826126110_H
#ifndef TRIPLEDES_T174970617_H
#define TRIPLEDES_T174970617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDES
struct  TripleDES_t174970617  : public SymmetricAlgorithm_t3211106597
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDES_T174970617_H
#ifndef TRIPLEDESCRYPTOSERVICEPROVIDER_T3136499444_H
#define TRIPLEDESCRYPTOSERVICEPROVIDER_T3136499444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct  TripleDESCryptoServiceProvider_t3136499444  : public TripleDES_t174970617
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDESCRYPTOSERVICEPROVIDER_T3136499444_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize700 = { sizeof (SHA1Internal_t689383240), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable700[5] = 
{
	SHA1Internal_t689383240::get_offset_of__H_0(),
	SHA1Internal_t689383240::get_offset_of_count_1(),
	SHA1Internal_t689383240::get_offset_of__ProcessingBuffer_2(),
	SHA1Internal_t689383240::get_offset_of__ProcessingBufferCount_3(),
	SHA1Internal_t689383240::get_offset_of_buff_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize701 = { sizeof (SHA1CryptoServiceProvider_t3108788846), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable701[1] = 
{
	SHA1CryptoServiceProvider_t3108788846::get_offset_of_sha_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize702 = { sizeof (SHA1Managed_t371006493), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable702[1] = 
{
	SHA1Managed_t371006493::get_offset_of_sha_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize703 = { sizeof (SHA256_t3101146856), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize704 = { sizeof (SHA256Managed_t3978902450), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable704[5] = 
{
	SHA256Managed_t3978902450::get_offset_of__H_4(),
	SHA256Managed_t3978902450::get_offset_of_count_5(),
	SHA256Managed_t3978902450::get_offset_of__ProcessingBuffer_6(),
	SHA256Managed_t3978902450::get_offset_of__ProcessingBufferCount_7(),
	SHA256Managed_t3978902450::get_offset_of_buff_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize705 = { sizeof (SHA384_t2542412740), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize706 = { sizeof (SHA384Managed_t3337730413), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable706[14] = 
{
	SHA384Managed_t3337730413::get_offset_of_xBuf_4(),
	SHA384Managed_t3337730413::get_offset_of_xBufOff_5(),
	SHA384Managed_t3337730413::get_offset_of_byteCount1_6(),
	SHA384Managed_t3337730413::get_offset_of_byteCount2_7(),
	SHA384Managed_t3337730413::get_offset_of_H1_8(),
	SHA384Managed_t3337730413::get_offset_of_H2_9(),
	SHA384Managed_t3337730413::get_offset_of_H3_10(),
	SHA384Managed_t3337730413::get_offset_of_H4_11(),
	SHA384Managed_t3337730413::get_offset_of_H5_12(),
	SHA384Managed_t3337730413::get_offset_of_H6_13(),
	SHA384Managed_t3337730413::get_offset_of_H7_14(),
	SHA384Managed_t3337730413::get_offset_of_H8_15(),
	SHA384Managed_t3337730413::get_offset_of_W_16(),
	SHA384Managed_t3337730413::get_offset_of_wOff_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize707 = { sizeof (SHA512_t2632996201), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize708 = { sizeof (SHA512Managed_t1035052561), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable708[14] = 
{
	SHA512Managed_t1035052561::get_offset_of_xBuf_4(),
	SHA512Managed_t1035052561::get_offset_of_xBufOff_5(),
	SHA512Managed_t1035052561::get_offset_of_byteCount1_6(),
	SHA512Managed_t1035052561::get_offset_of_byteCount2_7(),
	SHA512Managed_t1035052561::get_offset_of_H1_8(),
	SHA512Managed_t1035052561::get_offset_of_H2_9(),
	SHA512Managed_t1035052561::get_offset_of_H3_10(),
	SHA512Managed_t1035052561::get_offset_of_H4_11(),
	SHA512Managed_t1035052561::get_offset_of_H5_12(),
	SHA512Managed_t1035052561::get_offset_of_H6_13(),
	SHA512Managed_t1035052561::get_offset_of_H7_14(),
	SHA512Managed_t1035052561::get_offset_of_H8_15(),
	SHA512Managed_t1035052561::get_offset_of_W_16(),
	SHA512Managed_t1035052561::get_offset_of_wOff_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize709 = { sizeof (SHAConstants_t2905378896), -1, sizeof(SHAConstants_t2905378896_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable709[2] = 
{
	SHAConstants_t2905378896_StaticFields::get_offset_of_K1_0(),
	SHAConstants_t2905378896_StaticFields::get_offset_of_K2_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize710 = { sizeof (SignatureDescription_t3227578316), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable710[4] = 
{
	SignatureDescription_t3227578316::get_offset_of__DeformatterAlgorithm_0(),
	SignatureDescription_t3227578316::get_offset_of__DigestAlgorithm_1(),
	SignatureDescription_t3227578316::get_offset_of__FormatterAlgorithm_2(),
	SignatureDescription_t3227578316::get_offset_of__KeyAlgorithm_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize711 = { sizeof (DSASignatureDescription_t2698414177), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize712 = { sizeof (RSAPKCS1SHA1SignatureDescription_t549138201), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize713 = { sizeof (SymmetricAlgorithm_t3211106597), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable713[10] = 
{
	SymmetricAlgorithm_t3211106597::get_offset_of_BlockSizeValue_0(),
	SymmetricAlgorithm_t3211106597::get_offset_of_IVValue_1(),
	SymmetricAlgorithm_t3211106597::get_offset_of_KeySizeValue_2(),
	SymmetricAlgorithm_t3211106597::get_offset_of_KeyValue_3(),
	SymmetricAlgorithm_t3211106597::get_offset_of_LegalBlockSizesValue_4(),
	SymmetricAlgorithm_t3211106597::get_offset_of_LegalKeySizesValue_5(),
	SymmetricAlgorithm_t3211106597::get_offset_of_FeedbackSizeValue_6(),
	SymmetricAlgorithm_t3211106597::get_offset_of_ModeValue_7(),
	SymmetricAlgorithm_t3211106597::get_offset_of_PaddingValue_8(),
	SymmetricAlgorithm_t3211106597::get_offset_of_m_disposed_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize714 = { sizeof (ToBase64Transform_t4074090554), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable714[1] = 
{
	ToBase64Transform_t4074090554::get_offset_of_m_disposed_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize715 = { sizeof (TripleDES_t174970617), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize716 = { sizeof (TripleDESCryptoServiceProvider_t3136499444), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize717 = { sizeof (TripleDESTransform_t2983177349), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable717[6] = 
{
	TripleDESTransform_t2983177349::get_offset_of_E1_12(),
	TripleDESTransform_t2983177349::get_offset_of_D2_13(),
	TripleDESTransform_t2983177349::get_offset_of_E3_14(),
	TripleDESTransform_t2983177349::get_offset_of_D1_15(),
	TripleDESTransform_t2983177349::get_offset_of_E2_16(),
	TripleDESTransform_t2983177349::get_offset_of_D3_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize718 = { sizeof (CodeAccessSecurityAttribute_t1714376679), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize719 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize720 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize721 = { sizeof (PermissionState_t2872359087)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable721[3] = 
{
	PermissionState_t2872359087::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize722 = { sizeof (SecurityAction_t1463814551)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable722[10] = 
{
	SecurityAction_t1463814551::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize723 = { sizeof (SecurityPermission_t1094454198), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable723[1] = 
{
	SecurityPermission_t1094454198::get_offset_of_flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize724 = { sizeof (SecurityPermissionAttribute_t2332796240), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable724[1] = 
{
	SecurityPermissionAttribute_t2332796240::get_offset_of_m_Flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize725 = { sizeof (SecurityPermissionFlag_t1492896814)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable725[17] = 
{
	SecurityPermissionFlag_t1492896814::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize726 = { sizeof (StrongNamePublicKeyBlob_t2779961255), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable726[1] = 
{
	StrongNamePublicKeyBlob_t2779961255::get_offset_of_pubkey_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize727 = { sizeof (ApplicationTrust_t2488506433), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable727[1] = 
{
	ApplicationTrust_t2488506433::get_offset_of_fullTrustAssemblies_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize728 = { sizeof (CodeGroup_t4210518413), -1, sizeof(CodeGroup_t4210518413_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable728[6] = 
{
	CodeGroup_t4210518413::get_offset_of_m_policy_0(),
	CodeGroup_t4210518413::get_offset_of_m_membershipCondition_1(),
	CodeGroup_t4210518413::get_offset_of_m_description_2(),
	CodeGroup_t4210518413::get_offset_of_m_name_3(),
	CodeGroup_t4210518413::get_offset_of_m_children_4(),
	CodeGroup_t4210518413_StaticFields::get_offset_of_U3CU3Ef__switchU24map2A_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize729 = { sizeof (Evidence_t1786733851), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable729[4] = 
{
	Evidence_t1786733851::get_offset_of__locked_0(),
	Evidence_t1786733851::get_offset_of_hostEvidenceList_1(),
	Evidence_t1786733851::get_offset_of_assemblyEvidenceList_2(),
	Evidence_t1786733851::get_offset_of__hashCode_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize730 = { sizeof (EvidenceEnumerator_t1742852292), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable730[3] = 
{
	EvidenceEnumerator_t1742852292::get_offset_of_currentEnum_0(),
	EvidenceEnumerator_t1742852292::get_offset_of_hostEnum_1(),
	EvidenceEnumerator_t1742852292::get_offset_of_assemblyEnum_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize731 = { sizeof (Hash_t3935732982), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable731[2] = 
{
	Hash_t3935732982::get_offset_of_assembly_0(),
	Hash_t3935732982::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize732 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize733 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize734 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize735 = { sizeof (PolicyLevel_t1670651488), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable735[8] = 
{
	PolicyLevel_t1670651488::get_offset_of_label_0(),
	PolicyLevel_t1670651488::get_offset_of_root_code_group_1(),
	PolicyLevel_t1670651488::get_offset_of_full_trust_assemblies_2(),
	PolicyLevel_t1670651488::get_offset_of_named_permission_sets_3(),
	PolicyLevel_t1670651488::get_offset_of__location_4(),
	PolicyLevel_t1670651488::get_offset_of__type_5(),
	PolicyLevel_t1670651488::get_offset_of_fullNames_6(),
	PolicyLevel_t1670651488::get_offset_of_xml_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize736 = { sizeof (PolicyStatement_t1512005238), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable736[2] = 
{
	PolicyStatement_t1512005238::get_offset_of_perms_0(),
	PolicyStatement_t1512005238::get_offset_of_attrs_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize737 = { sizeof (PolicyStatementAttribute_t158093844)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable737[5] = 
{
	PolicyStatementAttribute_t158093844::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize738 = { sizeof (StrongName_t1073259427), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable738[3] = 
{
	StrongName_t1073259427::get_offset_of_publickey_0(),
	StrongName_t1073259427::get_offset_of_name_1(),
	StrongName_t1073259427::get_offset_of_version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize739 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize740 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize741 = { sizeof (PrincipalPolicy_t3266016217)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable741[4] = 
{
	PrincipalPolicy_t3266016217::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize742 = { sizeof (WindowsAccountType_t3128590907)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable742[5] = 
{
	WindowsAccountType_t3128590907::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize743 = { sizeof (WindowsIdentity_t1505370047), -1, sizeof(WindowsIdentity_t1505370047_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable743[7] = 
{
	WindowsIdentity_t1505370047::get_offset_of__token_0(),
	WindowsIdentity_t1505370047::get_offset_of__type_1(),
	WindowsIdentity_t1505370047::get_offset_of__account_2(),
	WindowsIdentity_t1505370047::get_offset_of__authenticated_3(),
	WindowsIdentity_t1505370047::get_offset_of__name_4(),
	WindowsIdentity_t1505370047::get_offset_of__info_5(),
	WindowsIdentity_t1505370047_StaticFields::get_offset_of_invalidWindows_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize744 = { sizeof (AllowPartiallyTrustedCallersAttribute_t700624338), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize745 = { sizeof (CodeAccessPermission_t1899781089), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize746 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize747 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize748 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize749 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize750 = { sizeof (PermissionSet_t4217798818), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable750[2] = 
{
	PermissionSet_t4217798818::get_offset_of_U3CResolverU3Ek__BackingField_0(),
	PermissionSet_t4217798818::get_offset_of_U3CDeclarativeSecurityU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize751 = { sizeof (PolicyLevelType_t4087259976)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable751[5] = 
{
	PolicyLevelType_t4087259976::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize752 = { sizeof (SecurityContext_t2766911887), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable752[4] = 
{
	SecurityContext_t2766911887::get_offset_of__capture_0(),
	SecurityContext_t2766911887::get_offset_of__winid_1(),
	SecurityContext_t2766911887::get_offset_of__stack_2(),
	SecurityContext_t2766911887::get_offset_of__suppressFlow_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize753 = { sizeof (SecurityCriticalAttribute_t374067293), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable753[1] = 
{
	SecurityCriticalAttribute_t374067293::get_offset_of__scope_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize754 = { sizeof (SecurityCriticalScope_t205030308)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable754[3] = 
{
	SecurityCriticalScope_t205030308::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize755 = { sizeof (SecurityElement_t2948596042), -1, sizeof(SecurityElement_t2948596042_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable755[9] = 
{
	SecurityElement_t2948596042::get_offset_of_text_0(),
	SecurityElement_t2948596042::get_offset_of_tag_1(),
	SecurityElement_t2948596042::get_offset_of_attributes_2(),
	SecurityElement_t2948596042::get_offset_of_children_3(),
	SecurityElement_t2948596042_StaticFields::get_offset_of_invalid_tag_chars_4(),
	SecurityElement_t2948596042_StaticFields::get_offset_of_invalid_text_chars_5(),
	SecurityElement_t2948596042_StaticFields::get_offset_of_invalid_attr_name_chars_6(),
	SecurityElement_t2948596042_StaticFields::get_offset_of_invalid_attr_value_chars_7(),
	SecurityElement_t2948596042_StaticFields::get_offset_of_invalid_chars_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize756 = { sizeof (SecurityAttribute_t2663633109), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable756[2] = 
{
	SecurityAttribute_t2663633109::get_offset_of__name_0(),
	SecurityAttribute_t2663633109::get_offset_of__value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize757 = { sizeof (SecurityException_t1400559452), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable757[8] = 
{
	SecurityException_t1400559452::get_offset_of_permissionState_11(),
	SecurityException_t1400559452::get_offset_of_permissionType_12(),
	SecurityException_t1400559452::get_offset_of__granted_13(),
	SecurityException_t1400559452::get_offset_of__refused_14(),
	SecurityException_t1400559452::get_offset_of__demanded_15(),
	SecurityException_t1400559452::get_offset_of__firstperm_16(),
	SecurityException_t1400559452::get_offset_of__method_17(),
	SecurityException_t1400559452::get_offset_of__evidence_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize758 = { sizeof (RuntimeDeclSecurityEntry_t876744458)+ sizeof (RuntimeObject), sizeof(RuntimeDeclSecurityEntry_t876744458 ), 0, 0 };
extern const int32_t g_FieldOffsetTable758[3] = 
{
	RuntimeDeclSecurityEntry_t876744458::get_offset_of_blob_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityEntry_t876744458::get_offset_of_size_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityEntry_t876744458::get_offset_of_index_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize759 = { sizeof (RuntimeSecurityFrame_t2258239512), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable759[5] = 
{
	RuntimeSecurityFrame_t2258239512::get_offset_of_domain_0(),
	RuntimeSecurityFrame_t2258239512::get_offset_of_method_1(),
	RuntimeSecurityFrame_t2258239512::get_offset_of_assert_2(),
	RuntimeSecurityFrame_t2258239512::get_offset_of_deny_3(),
	RuntimeSecurityFrame_t2258239512::get_offset_of_permitonly_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize760 = { sizeof (SecurityFrame_t1224251096)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable760[5] = 
{
	SecurityFrame_t1224251096::get_offset_of__domain_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t1224251096::get_offset_of__method_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t1224251096::get_offset_of__assert_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t1224251096::get_offset_of__deny_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t1224251096::get_offset_of__permitonly_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize761 = { sizeof (SecurityManager_t2072947474), -1, sizeof(SecurityManager_t2072947474_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable761[3] = 
{
	SecurityManager_t2072947474_StaticFields::get_offset_of__lockObject_0(),
	SecurityManager_t2072947474_StaticFields::get_offset_of__declsecCache_1(),
	SecurityManager_t2072947474_StaticFields::get_offset_of__execution_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize762 = { sizeof (SecuritySafeCriticalAttribute_t412957641), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize763 = { sizeof (SuppressUnmanagedCodeSecurityAttribute_t470122080), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize764 = { sizeof (UnverifiableCodeAttribute_t1942976375), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize765 = { sizeof (ASCIIEncoding_t3515658939), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize766 = { sizeof (Decoder_t2410135258), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable766[2] = 
{
	Decoder_t2410135258::get_offset_of_fallback_0(),
	Decoder_t2410135258::get_offset_of_fallback_buffer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize767 = { sizeof (DecoderExceptionFallback_t892780346), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize768 = { sizeof (DecoderExceptionFallbackBuffer_t2331092230), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize769 = { sizeof (DecoderFallback_t1883533687), -1, sizeof(DecoderFallback_t1883533687_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable769[3] = 
{
	DecoderFallback_t1883533687_StaticFields::get_offset_of_exception_fallback_0(),
	DecoderFallback_t1883533687_StaticFields::get_offset_of_replacement_fallback_1(),
	DecoderFallback_t1883533687_StaticFields::get_offset_of_standard_safe_fallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize770 = { sizeof (DecoderFallbackBuffer_t920557428), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize771 = { sizeof (DecoderFallbackException_t1079308447), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable771[2] = 
{
	DecoderFallbackException_t1079308447::get_offset_of_bytes_unknown_13(),
	DecoderFallbackException_t1079308447::get_offset_of_index_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize772 = { sizeof (DecoderReplacementFallback_t3734196093), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable772[1] = 
{
	DecoderReplacementFallback_t3734196093::get_offset_of_replacement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize773 = { sizeof (DecoderReplacementFallbackBuffer_t3228177735), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable773[3] = 
{
	DecoderReplacementFallbackBuffer_t3228177735::get_offset_of_fallback_assigned_0(),
	DecoderReplacementFallbackBuffer_t3228177735::get_offset_of_current_1(),
	DecoderReplacementFallbackBuffer_t3228177735::get_offset_of_replacement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize774 = { sizeof (EncoderExceptionFallback_t285490618), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize775 = { sizeof (EncoderExceptionFallbackBuffer_t1750263180), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize776 = { sizeof (EncoderFallback_t89076269), -1, sizeof(EncoderFallback_t89076269_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable776[3] = 
{
	EncoderFallback_t89076269_StaticFields::get_offset_of_exception_fallback_0(),
	EncoderFallback_t89076269_StaticFields::get_offset_of_replacement_fallback_1(),
	EncoderFallback_t89076269_StaticFields::get_offset_of_standard_safe_fallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize777 = { sizeof (EncoderFallbackBuffer_t2545218937), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize778 = { sizeof (EncoderFallbackException_t3190452632), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable778[4] = 
{
	EncoderFallbackException_t3190452632::get_offset_of_char_unknown_13(),
	EncoderFallbackException_t3190452632::get_offset_of_char_unknown_high_14(),
	EncoderFallbackException_t3190452632::get_offset_of_char_unknown_low_15(),
	EncoderFallbackException_t3190452632::get_offset_of_index_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize779 = { sizeof (EncoderReplacementFallback_t772538983), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable779[1] = 
{
	EncoderReplacementFallback_t772538983::get_offset_of_replacement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize780 = { sizeof (EncoderReplacementFallbackBuffer_t3568422304), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable780[3] = 
{
	EncoderReplacementFallbackBuffer_t3568422304::get_offset_of_replacement_0(),
	EncoderReplacementFallbackBuffer_t3568422304::get_offset_of_current_1(),
	EncoderReplacementFallbackBuffer_t3568422304::get_offset_of_fallback_assigned_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize781 = { sizeof (Encoding_t1342771939), -1, sizeof(Encoding_t1342771939_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable781[29] = 
{
	Encoding_t1342771939::get_offset_of_codePage_0(),
	Encoding_t1342771939::get_offset_of_windows_code_page_1(),
	Encoding_t1342771939::get_offset_of_is_readonly_2(),
	Encoding_t1342771939::get_offset_of_decoder_fallback_3(),
	Encoding_t1342771939::get_offset_of_encoder_fallback_4(),
	Encoding_t1342771939_StaticFields::get_offset_of_i18nAssembly_5(),
	Encoding_t1342771939_StaticFields::get_offset_of_i18nDisabled_6(),
	Encoding_t1342771939_StaticFields::get_offset_of_encoding_infos_7(),
	Encoding_t1342771939_StaticFields::get_offset_of_encodings_8(),
	Encoding_t1342771939::get_offset_of_body_name_9(),
	Encoding_t1342771939::get_offset_of_encoding_name_10(),
	Encoding_t1342771939::get_offset_of_header_name_11(),
	Encoding_t1342771939::get_offset_of_is_mail_news_display_12(),
	Encoding_t1342771939::get_offset_of_is_mail_news_save_13(),
	Encoding_t1342771939::get_offset_of_is_browser_save_14(),
	Encoding_t1342771939::get_offset_of_is_browser_display_15(),
	Encoding_t1342771939::get_offset_of_web_name_16(),
	Encoding_t1342771939_StaticFields::get_offset_of_asciiEncoding_17(),
	Encoding_t1342771939_StaticFields::get_offset_of_bigEndianEncoding_18(),
	Encoding_t1342771939_StaticFields::get_offset_of_defaultEncoding_19(),
	Encoding_t1342771939_StaticFields::get_offset_of_utf7Encoding_20(),
	Encoding_t1342771939_StaticFields::get_offset_of_utf8EncodingWithMarkers_21(),
	Encoding_t1342771939_StaticFields::get_offset_of_utf8EncodingWithoutMarkers_22(),
	Encoding_t1342771939_StaticFields::get_offset_of_unicodeEncoding_23(),
	Encoding_t1342771939_StaticFields::get_offset_of_isoLatin1Encoding_24(),
	Encoding_t1342771939_StaticFields::get_offset_of_utf8EncodingUnsafe_25(),
	Encoding_t1342771939_StaticFields::get_offset_of_utf32Encoding_26(),
	Encoding_t1342771939_StaticFields::get_offset_of_bigEndianUTF32Encoding_27(),
	Encoding_t1342771939_StaticFields::get_offset_of_lockobj_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize782 = { sizeof (ForwardingDecoder_t3126094832), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable782[1] = 
{
	ForwardingDecoder_t3126094832::get_offset_of_encoding_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize783 = { sizeof (EncodingInfo_t1680052672), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable783[2] = 
{
	EncodingInfo_t1680052672::get_offset_of_codepage_0(),
	EncodingInfo_t1680052672::get_offset_of_encoding_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize784 = { sizeof (Latin1Encoding_t1259843323), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize785 = { sizeof (StringBuilder_t1419500028), sizeof(char*), 0, 0 };
extern const int32_t g_FieldOffsetTable785[5] = 
{
	0,
	StringBuilder_t1419500028::get_offset_of__length_1(),
	StringBuilder_t1419500028::get_offset_of__str_2(),
	StringBuilder_t1419500028::get_offset_of__cached_str_3(),
	StringBuilder_t1419500028::get_offset_of__maxCapacity_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize786 = { sizeof (UTF32Encoding_t1092816071), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable786[2] = 
{
	UTF32Encoding_t1092816071::get_offset_of_bigEndian_29(),
	UTF32Encoding_t1092816071::get_offset_of_byteOrderMark_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize787 = { sizeof (UTF32Decoder_t47283147), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable787[3] = 
{
	UTF32Decoder_t47283147::get_offset_of_bigEndian_2(),
	UTF32Decoder_t47283147::get_offset_of_leftOverByte_3(),
	UTF32Decoder_t47283147::get_offset_of_leftOverLength_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize788 = { sizeof (UTF7Encoding_t3711326514), -1, sizeof(UTF7Encoding_t3711326514_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable788[3] = 
{
	UTF7Encoding_t3711326514::get_offset_of_allowOptionals_29(),
	UTF7Encoding_t3711326514_StaticFields::get_offset_of_encodingRules_30(),
	UTF7Encoding_t3711326514_StaticFields::get_offset_of_base64Values_31(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize789 = { sizeof (UTF7Decoder_t3616473112), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable789[1] = 
{
	UTF7Decoder_t3616473112::get_offset_of_leftOver_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize790 = { sizeof (UTF8Encoding_t1834888124), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable790[1] = 
{
	UTF8Encoding_t1834888124::get_offset_of_emitIdentifier_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize791 = { sizeof (UTF8Decoder_t4122872560), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable791[2] = 
{
	UTF8Decoder_t4122872560::get_offset_of_leftOverBits_2(),
	UTF8Decoder_t4122872560::get_offset_of_leftOverCount_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize792 = { sizeof (UnicodeEncoding_t2096313357), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable792[2] = 
{
	UnicodeEncoding_t2096313357::get_offset_of_bigEndian_29(),
	UnicodeEncoding_t2096313357::get_offset_of_byteOrderMark_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize793 = { sizeof (UnicodeDecoder_t1162217491), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable793[2] = 
{
	UnicodeDecoder_t1162217491::get_offset_of_bigEndian_2(),
	UnicodeDecoder_t1162217491::get_offset_of_leftOverByte_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize794 = { sizeof (CompressedStack_t1016366904), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable794[1] = 
{
	CompressedStack_t1016366904::get_offset_of__list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize795 = { sizeof (EventResetMode_t3695271449)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable795[3] = 
{
	EventResetMode_t3695271449::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize796 = { sizeof (EventWaitHandle_t130779644), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize797 = { sizeof (ExecutionContext_t4281515249), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable797[3] = 
{
	ExecutionContext_t4281515249::get_offset_of__sc_0(),
	ExecutionContext_t4281515249::get_offset_of__suppressFlow_1(),
	ExecutionContext_t4281515249::get_offset_of__capture_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize798 = { sizeof (Interlocked_t2492176926), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize799 = { sizeof (ManualResetEvent_t3826126110), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
