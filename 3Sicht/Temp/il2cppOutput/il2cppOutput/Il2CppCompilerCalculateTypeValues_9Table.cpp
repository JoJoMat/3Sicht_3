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
// System.Byte[]
struct ByteU5BU5D_t466969305;
// System.Collections.ArrayList
struct ArrayList_t3525268140;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t47475134;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t631622637;
// Mono.Security.ASN1
struct ASN1_t2224927521;
// Mono.Math.BigInteger
struct BigInteger_t3204170028;
// System.UInt32[]
struct UInt32U5BU5D_t3359595894;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t1592115872;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t2441794254;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t19767864;
// System.IntPtr[]
struct IntPtrU5BU5D_t2058873772;
// System.Collections.IDictionary
struct IDictionary_t320395106;
// System.Char[]
struct CharU5BU5D_t498600359;
// System.Void
struct Void_t886624537;
// System.Globalization.CompareInfo
struct CompareInfo_t1583186922;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3209800765;
// System.Collections.Hashtable
struct Hashtable_t2707551258;
// System.Globalization.DaylightTime
struct DaylightTime_t1040583373;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t601819501;
// System.String[]
struct StringU5BU5D_t3832122219;
// System.Int32[]
struct Int32U5BU5D_t2679505748;
// System.Reflection.Module
struct Module_t389949260;
// System.ResolveEventArgs
struct ResolveEventArgs_t93977382;
// System.IAsyncResult
struct IAsyncResult_t4057726149;
// System.AsyncCallback
struct AsyncCallback_t3186847474;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t4172922190;
// System.Reflection.Assembly
struct Assembly_t2552591666;
// System.EventArgs
struct EventArgs_t1620478104;
// System.AssemblyLoadEventArgs
struct AssemblyLoadEventArgs_t756198760;
// System.Security.Cryptography.RSA
struct RSA_t802230051;
// System.Security.Cryptography.DSA
struct DSA_t2182086069;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1850785610;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t3464224553;
// System.Type
struct Type_t;
// Mono.Math.BigInteger
struct BigInteger_t3204170027;
// System.Reflection.MemberInfo
struct MemberInfo_t;




#ifndef U3CMODULEU3E_T1018759185_H
#define U3CMODULEU3E_T1018759185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t1018759185 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T1018759185_H
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
#ifndef IL2CPPCOMOBJECT_H
#define IL2CPPCOMOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComObject

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPCOMOBJECT_H
#ifndef PRIVATEKEYINFO_T2374843263_H
#define PRIVATEKEYINFO_T2374843263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct  PrivateKeyInfo_t2374843263  : public RuntimeObject
{
public:
	// System.Int32 Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_version
	int32_t ____version_0;
	// System.String Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_algorithm
	String_t* ____algorithm_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_key
	ByteU5BU5D_t466969305* ____key_2;
	// System.Collections.ArrayList Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_list
	ArrayList_t3525268140 * ____list_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t2374843263, ____version_0)); }
	inline int32_t get__version_0() const { return ____version_0; }
	inline int32_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(int32_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__algorithm_1() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t2374843263, ____algorithm_1)); }
	inline String_t* get__algorithm_1() const { return ____algorithm_1; }
	inline String_t** get_address_of__algorithm_1() { return &____algorithm_1; }
	inline void set__algorithm_1(String_t* value)
	{
		____algorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_1), value);
	}

	inline static int32_t get_offset_of__key_2() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t2374843263, ____key_2)); }
	inline ByteU5BU5D_t466969305* get__key_2() const { return ____key_2; }
	inline ByteU5BU5D_t466969305** get_address_of__key_2() { return &____key_2; }
	inline void set__key_2(ByteU5BU5D_t466969305* value)
	{
		____key_2 = value;
		Il2CppCodeGenWriteBarrier((&____key_2), value);
	}

	inline static int32_t get_offset_of__list_3() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t2374843263, ____list_3)); }
	inline ArrayList_t3525268140 * get__list_3() const { return ____list_3; }
	inline ArrayList_t3525268140 ** get_address_of__list_3() { return &____list_3; }
	inline void set__list_3(ArrayList_t3525268140 * value)
	{
		____list_3 = value;
		Il2CppCodeGenWriteBarrier((&____list_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIVATEKEYINFO_T2374843263_H
#ifndef PKCS8_T2011378170_H
#define PKCS8_T2011378170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8
struct  PKCS8_t2011378170  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS8_T2011378170_H
#ifndef KEYBUILDER_T81419354_H
#define KEYBUILDER_T81419354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyBuilder
struct  KeyBuilder_t81419354  : public RuntimeObject
{
public:

public:
};

struct KeyBuilder_t81419354_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::rng
	RandomNumberGenerator_t47475134 * ___rng_0;

public:
	inline static int32_t get_offset_of_rng_0() { return static_cast<int32_t>(offsetof(KeyBuilder_t81419354_StaticFields, ___rng_0)); }
	inline RandomNumberGenerator_t47475134 * get_rng_0() const { return ___rng_0; }
	inline RandomNumberGenerator_t47475134 ** get_address_of_rng_0() { return &___rng_0; }
	inline void set_rng_0(RandomNumberGenerator_t47475134 * value)
	{
		___rng_0 = value;
		Il2CppCodeGenWriteBarrier((&___rng_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBUILDER_T81419354_H
#ifndef CRYPTOCONVERT_T1051310958_H
#define CRYPTOCONVERT_T1051310958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.CryptoConvert
struct  CryptoConvert_t1051310958  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONVERT_T1051310958_H
#ifndef ENCRYPTEDDATA_T844408430_H
#define ENCRYPTEDDATA_T844408430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/EncryptedData
struct  EncryptedData_t844408430  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/EncryptedData::_version
	uint8_t ____version_0;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_content
	ContentInfo_t631622637 * ____content_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_encryptionAlgorithm
	ContentInfo_t631622637 * ____encryptionAlgorithm_2;
	// System.Byte[] Mono.Security.PKCS7/EncryptedData::_encrypted
	ByteU5BU5D_t466969305* ____encrypted_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(EncryptedData_t844408430, ____version_0)); }
	inline uint8_t get__version_0() const { return ____version_0; }
	inline uint8_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(uint8_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__content_1() { return static_cast<int32_t>(offsetof(EncryptedData_t844408430, ____content_1)); }
	inline ContentInfo_t631622637 * get__content_1() const { return ____content_1; }
	inline ContentInfo_t631622637 ** get_address_of__content_1() { return &____content_1; }
	inline void set__content_1(ContentInfo_t631622637 * value)
	{
		____content_1 = value;
		Il2CppCodeGenWriteBarrier((&____content_1), value);
	}

	inline static int32_t get_offset_of__encryptionAlgorithm_2() { return static_cast<int32_t>(offsetof(EncryptedData_t844408430, ____encryptionAlgorithm_2)); }
	inline ContentInfo_t631622637 * get__encryptionAlgorithm_2() const { return ____encryptionAlgorithm_2; }
	inline ContentInfo_t631622637 ** get_address_of__encryptionAlgorithm_2() { return &____encryptionAlgorithm_2; }
	inline void set__encryptionAlgorithm_2(ContentInfo_t631622637 * value)
	{
		____encryptionAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____encryptionAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__encrypted_3() { return static_cast<int32_t>(offsetof(EncryptedData_t844408430, ____encrypted_3)); }
	inline ByteU5BU5D_t466969305* get__encrypted_3() const { return ____encrypted_3; }
	inline ByteU5BU5D_t466969305** get_address_of__encrypted_3() { return &____encrypted_3; }
	inline void set__encrypted_3(ByteU5BU5D_t466969305* value)
	{
		____encrypted_3 = value;
		Il2CppCodeGenWriteBarrier((&____encrypted_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDDATA_T844408430_H
#ifndef CONTENTINFO_T631622637_H
#define CONTENTINFO_T631622637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/ContentInfo
struct  ContentInfo_t631622637  : public RuntimeObject
{
public:
	// System.String Mono.Security.PKCS7/ContentInfo::contentType
	String_t* ___contentType_0;
	// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::content
	ASN1_t2224927521 * ___content_1;

public:
	inline static int32_t get_offset_of_contentType_0() { return static_cast<int32_t>(offsetof(ContentInfo_t631622637, ___contentType_0)); }
	inline String_t* get_contentType_0() const { return ___contentType_0; }
	inline String_t** get_address_of_contentType_0() { return &___contentType_0; }
	inline void set_contentType_0(String_t* value)
	{
		___contentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___contentType_0), value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(ContentInfo_t631622637, ___content_1)); }
	inline ASN1_t2224927521 * get_content_1() const { return ___content_1; }
	inline ASN1_t2224927521 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(ASN1_t2224927521 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTINFO_T631622637_H
#ifndef PKCS7_T764342420_H
#define PKCS7_T764342420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7
struct  PKCS7_t764342420  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS7_T764342420_H
#ifndef BITCONVERTERLE_T1437339909_H
#define BITCONVERTERLE_T1437339909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.BitConverterLE
struct  BitConverterLE_t1437339909  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTERLE_T1437339909_H
#ifndef ASN1CONVERT_T828443782_H
#define ASN1CONVERT_T828443782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1Convert
struct  ASN1Convert_t828443782  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1CONVERT_T828443782_H
#ifndef ASN1_T2224927521_H
#define ASN1_T2224927521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1
struct  ASN1_t2224927521  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_t466969305* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t3525268140 * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_t2224927521, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_t2224927521, ___m_aValue_1)); }
	inline ByteU5BU5D_t466969305* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_t466969305** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_t466969305* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_aValue_1), value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_t2224927521, ___elist_2)); }
	inline ArrayList_t3525268140 * get_elist_2() const { return ___elist_2; }
	inline ArrayList_t3525268140 ** get_address_of_elist_2() { return &___elist_2; }
	inline void set_elist_2(ArrayList_t3525268140 * value)
	{
		___elist_2 = value;
		Il2CppCodeGenWriteBarrier((&___elist_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1_T2224927521_H
#ifndef PRIMEGENERATORBASE_T3010235970_H
#define PRIMEGENERATORBASE_T3010235970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct  PrimeGeneratorBase_t3010235970  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMEGENERATORBASE_T3010235970_H
#ifndef PRIMALITYTESTS_T761628407_H
#define PRIMALITYTESTS_T761628407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTests
struct  PrimalityTests_t761628407  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTESTS_T761628407_H
#ifndef KERNEL_T4135366977_H
#define KERNEL_T4135366977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Kernel
struct  Kernel_t4135366977  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KERNEL_T4135366977_H
#ifndef MODULUSRING_T2373681658_H
#define MODULUSRING_T2373681658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/ModulusRing
struct  ModulusRing_t2373681658  : public RuntimeObject
{
public:
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::mod
	BigInteger_t3204170028 * ___mod_0;
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::constant
	BigInteger_t3204170028 * ___constant_1;

public:
	inline static int32_t get_offset_of_mod_0() { return static_cast<int32_t>(offsetof(ModulusRing_t2373681658, ___mod_0)); }
	inline BigInteger_t3204170028 * get_mod_0() const { return ___mod_0; }
	inline BigInteger_t3204170028 ** get_address_of_mod_0() { return &___mod_0; }
	inline void set_mod_0(BigInteger_t3204170028 * value)
	{
		___mod_0 = value;
		Il2CppCodeGenWriteBarrier((&___mod_0), value);
	}

	inline static int32_t get_offset_of_constant_1() { return static_cast<int32_t>(offsetof(ModulusRing_t2373681658, ___constant_1)); }
	inline BigInteger_t3204170028 * get_constant_1() const { return ___constant_1; }
	inline BigInteger_t3204170028 ** get_address_of_constant_1() { return &___constant_1; }
	inline void set_constant_1(BigInteger_t3204170028 * value)
	{
		___constant_1 = value;
		Il2CppCodeGenWriteBarrier((&___constant_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULUSRING_T2373681658_H
#ifndef BIGINTEGER_T3204170028_H
#define BIGINTEGER_T3204170028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger
struct  BigInteger_t3204170028  : public RuntimeObject
{
public:
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t3359595894* ___data_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(BigInteger_t3204170028, ___length_0)); }
	inline uint32_t get_length_0() const { return ___length_0; }
	inline uint32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(uint32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(BigInteger_t3204170028, ___data_1)); }
	inline UInt32U5BU5D_t3359595894* get_data_1() const { return ___data_1; }
	inline UInt32U5BU5D_t3359595894** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(UInt32U5BU5D_t3359595894* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

struct BigInteger_t3204170028_StaticFields
{
public:
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t3359595894* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t47475134 * ___rng_3;

public:
	inline static int32_t get_offset_of_smallPrimes_2() { return static_cast<int32_t>(offsetof(BigInteger_t3204170028_StaticFields, ___smallPrimes_2)); }
	inline UInt32U5BU5D_t3359595894* get_smallPrimes_2() const { return ___smallPrimes_2; }
	inline UInt32U5BU5D_t3359595894** get_address_of_smallPrimes_2() { return &___smallPrimes_2; }
	inline void set_smallPrimes_2(UInt32U5BU5D_t3359595894* value)
	{
		___smallPrimes_2 = value;
		Il2CppCodeGenWriteBarrier((&___smallPrimes_2), value);
	}

	inline static int32_t get_offset_of_rng_3() { return static_cast<int32_t>(offsetof(BigInteger_t3204170028_StaticFields, ___rng_3)); }
	inline RandomNumberGenerator_t47475134 * get_rng_3() const { return ___rng_3; }
	inline RandomNumberGenerator_t47475134 ** get_address_of_rng_3() { return &___rng_3; }
	inline void set_rng_3(RandomNumberGenerator_t47475134 * value)
	{
		___rng_3 = value;
		Il2CppCodeGenWriteBarrier((&___rng_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIGINTEGER_T3204170028_H
#ifndef LOCALE_T1782976959_H
#define LOCALE_T1782976959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t1782976959  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T1782976959_H
#ifndef ENCRYPTEDPRIVATEKEYINFO_T3432715548_H
#define ENCRYPTEDPRIVATEKEYINFO_T3432715548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
struct  EncryptedPrivateKeyInfo_t3432715548  : public RuntimeObject
{
public:
	// System.String Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_algorithm
	String_t* ____algorithm_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_salt
	ByteU5BU5D_t466969305* ____salt_1;
	// System.Int32 Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_iterations
	int32_t ____iterations_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_data
	ByteU5BU5D_t466969305* ____data_3;

public:
	inline static int32_t get_offset_of__algorithm_0() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t3432715548, ____algorithm_0)); }
	inline String_t* get__algorithm_0() const { return ____algorithm_0; }
	inline String_t** get_address_of__algorithm_0() { return &____algorithm_0; }
	inline void set__algorithm_0(String_t* value)
	{
		____algorithm_0 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_0), value);
	}

	inline static int32_t get_offset_of__salt_1() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t3432715548, ____salt_1)); }
	inline ByteU5BU5D_t466969305* get__salt_1() const { return ____salt_1; }
	inline ByteU5BU5D_t466969305** get_address_of__salt_1() { return &____salt_1; }
	inline void set__salt_1(ByteU5BU5D_t466969305* value)
	{
		____salt_1 = value;
		Il2CppCodeGenWriteBarrier((&____salt_1), value);
	}

	inline static int32_t get_offset_of__iterations_2() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t3432715548, ____iterations_2)); }
	inline int32_t get__iterations_2() const { return ____iterations_2; }
	inline int32_t* get_address_of__iterations_2() { return &____iterations_2; }
	inline void set__iterations_2(int32_t value)
	{
		____iterations_2 = value;
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t3432715548, ____data_3)); }
	inline ByteU5BU5D_t466969305* get__data_3() const { return ____data_3; }
	inline ByteU5BU5D_t466969305** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(ByteU5BU5D_t466969305* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDPRIVATEKEYINFO_T3432715548_H
#ifndef SAFEBAG_T110736807_H
#define SAFEBAG_T110736807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.SafeBag
struct  SafeBag_t110736807  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.SafeBag::_bagOID
	String_t* ____bagOID_0;
	// Mono.Security.ASN1 Mono.Security.X509.SafeBag::_asn1
	ASN1_t2224927521 * ____asn1_1;

public:
	inline static int32_t get_offset_of__bagOID_0() { return static_cast<int32_t>(offsetof(SafeBag_t110736807, ____bagOID_0)); }
	inline String_t* get__bagOID_0() const { return ____bagOID_0; }
	inline String_t** get_address_of__bagOID_0() { return &____bagOID_0; }
	inline void set__bagOID_0(String_t* value)
	{
		____bagOID_0 = value;
		Il2CppCodeGenWriteBarrier((&____bagOID_0), value);
	}

	inline static int32_t get_offset_of__asn1_1() { return static_cast<int32_t>(offsetof(SafeBag_t110736807, ____asn1_1)); }
	inline ASN1_t2224927521 * get__asn1_1() const { return ____asn1_1; }
	inline ASN1_t2224927521 ** get_address_of__asn1_1() { return &____asn1_1; }
	inline void set__asn1_1(ASN1_t2224927521 * value)
	{
		____asn1_1 = value;
		Il2CppCodeGenWriteBarrier((&____asn1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEBAG_T110736807_H
#ifndef PKCS1_T3026136324_H
#define PKCS1_T3026136324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS1
struct  PKCS1_t3026136324  : public RuntimeObject
{
public:

public:
};

struct PKCS1_t3026136324_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA1
	ByteU5BU5D_t466969305* ___emptySHA1_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA256
	ByteU5BU5D_t466969305* ___emptySHA256_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA384
	ByteU5BU5D_t466969305* ___emptySHA384_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA512
	ByteU5BU5D_t466969305* ___emptySHA512_3;

public:
	inline static int32_t get_offset_of_emptySHA1_0() { return static_cast<int32_t>(offsetof(PKCS1_t3026136324_StaticFields, ___emptySHA1_0)); }
	inline ByteU5BU5D_t466969305* get_emptySHA1_0() const { return ___emptySHA1_0; }
	inline ByteU5BU5D_t466969305** get_address_of_emptySHA1_0() { return &___emptySHA1_0; }
	inline void set_emptySHA1_0(ByteU5BU5D_t466969305* value)
	{
		___emptySHA1_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA1_0), value);
	}

	inline static int32_t get_offset_of_emptySHA256_1() { return static_cast<int32_t>(offsetof(PKCS1_t3026136324_StaticFields, ___emptySHA256_1)); }
	inline ByteU5BU5D_t466969305* get_emptySHA256_1() const { return ___emptySHA256_1; }
	inline ByteU5BU5D_t466969305** get_address_of_emptySHA256_1() { return &___emptySHA256_1; }
	inline void set_emptySHA256_1(ByteU5BU5D_t466969305* value)
	{
		___emptySHA256_1 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA256_1), value);
	}

	inline static int32_t get_offset_of_emptySHA384_2() { return static_cast<int32_t>(offsetof(PKCS1_t3026136324_StaticFields, ___emptySHA384_2)); }
	inline ByteU5BU5D_t466969305* get_emptySHA384_2() const { return ___emptySHA384_2; }
	inline ByteU5BU5D_t466969305** get_address_of_emptySHA384_2() { return &___emptySHA384_2; }
	inline void set_emptySHA384_2(ByteU5BU5D_t466969305* value)
	{
		___emptySHA384_2 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA384_2), value);
	}

	inline static int32_t get_offset_of_emptySHA512_3() { return static_cast<int32_t>(offsetof(PKCS1_t3026136324_StaticFields, ___emptySHA512_3)); }
	inline ByteU5BU5D_t466969305* get_emptySHA512_3() const { return ___emptySHA512_3; }
	inline ByteU5BU5D_t466969305** get_address_of_emptySHA512_3() { return &___emptySHA512_3; }
	inline void set_emptySHA512_3(ByteU5BU5D_t466969305* value)
	{
		___emptySHA512_3 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA512_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS1_T3026136324_H
#ifndef DERIVEBYTES_T197687356_H
#define DERIVEBYTES_T197687356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12/DeriveBytes
struct  DeriveBytes_t197687356  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.PKCS12/DeriveBytes::_hashName
	String_t* ____hashName_3;
	// System.Int32 Mono.Security.X509.PKCS12/DeriveBytes::_iterations
	int32_t ____iterations_4;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_password
	ByteU5BU5D_t466969305* ____password_5;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_salt
	ByteU5BU5D_t466969305* ____salt_6;

public:
	inline static int32_t get_offset_of__hashName_3() { return static_cast<int32_t>(offsetof(DeriveBytes_t197687356, ____hashName_3)); }
	inline String_t* get__hashName_3() const { return ____hashName_3; }
	inline String_t** get_address_of__hashName_3() { return &____hashName_3; }
	inline void set__hashName_3(String_t* value)
	{
		____hashName_3 = value;
		Il2CppCodeGenWriteBarrier((&____hashName_3), value);
	}

	inline static int32_t get_offset_of__iterations_4() { return static_cast<int32_t>(offsetof(DeriveBytes_t197687356, ____iterations_4)); }
	inline int32_t get__iterations_4() const { return ____iterations_4; }
	inline int32_t* get_address_of__iterations_4() { return &____iterations_4; }
	inline void set__iterations_4(int32_t value)
	{
		____iterations_4 = value;
	}

	inline static int32_t get_offset_of__password_5() { return static_cast<int32_t>(offsetof(DeriveBytes_t197687356, ____password_5)); }
	inline ByteU5BU5D_t466969305* get__password_5() const { return ____password_5; }
	inline ByteU5BU5D_t466969305** get_address_of__password_5() { return &____password_5; }
	inline void set__password_5(ByteU5BU5D_t466969305* value)
	{
		____password_5 = value;
		Il2CppCodeGenWriteBarrier((&____password_5), value);
	}

	inline static int32_t get_offset_of__salt_6() { return static_cast<int32_t>(offsetof(DeriveBytes_t197687356, ____salt_6)); }
	inline ByteU5BU5D_t466969305* get__salt_6() const { return ____salt_6; }
	inline ByteU5BU5D_t466969305** get_address_of__salt_6() { return &____salt_6; }
	inline void set__salt_6(ByteU5BU5D_t466969305* value)
	{
		____salt_6 = value;
		Il2CppCodeGenWriteBarrier((&____salt_6), value);
	}
};

struct DeriveBytes_t197687356_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::keyDiversifier
	ByteU5BU5D_t466969305* ___keyDiversifier_0;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::ivDiversifier
	ByteU5BU5D_t466969305* ___ivDiversifier_1;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::macDiversifier
	ByteU5BU5D_t466969305* ___macDiversifier_2;

public:
	inline static int32_t get_offset_of_keyDiversifier_0() { return static_cast<int32_t>(offsetof(DeriveBytes_t197687356_StaticFields, ___keyDiversifier_0)); }
	inline ByteU5BU5D_t466969305* get_keyDiversifier_0() const { return ___keyDiversifier_0; }
	inline ByteU5BU5D_t466969305** get_address_of_keyDiversifier_0() { return &___keyDiversifier_0; }
	inline void set_keyDiversifier_0(ByteU5BU5D_t466969305* value)
	{
		___keyDiversifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyDiversifier_0), value);
	}

	inline static int32_t get_offset_of_ivDiversifier_1() { return static_cast<int32_t>(offsetof(DeriveBytes_t197687356_StaticFields, ___ivDiversifier_1)); }
	inline ByteU5BU5D_t466969305* get_ivDiversifier_1() const { return ___ivDiversifier_1; }
	inline ByteU5BU5D_t466969305** get_address_of_ivDiversifier_1() { return &___ivDiversifier_1; }
	inline void set_ivDiversifier_1(ByteU5BU5D_t466969305* value)
	{
		___ivDiversifier_1 = value;
		Il2CppCodeGenWriteBarrier((&___ivDiversifier_1), value);
	}

	inline static int32_t get_offset_of_macDiversifier_2() { return static_cast<int32_t>(offsetof(DeriveBytes_t197687356_StaticFields, ___macDiversifier_2)); }
	inline ByteU5BU5D_t466969305* get_macDiversifier_2() const { return ___macDiversifier_2; }
	inline ByteU5BU5D_t466969305** get_address_of_macDiversifier_2() { return &___macDiversifier_2; }
	inline void set_macDiversifier_2(ByteU5BU5D_t466969305* value)
	{
		___macDiversifier_2 = value;
		Il2CppCodeGenWriteBarrier((&___macDiversifier_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DERIVEBYTES_T197687356_H
#ifndef ASYMMETRICALGORITHM_T3522259019_H
#define ASYMMETRICALGORITHM_T3522259019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t3522259019  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t1592115872* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t3522259019, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t3522259019, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t1592115872* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t1592115872** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t1592115872* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T3522259019_H
#ifndef PKCS12_T1146090091_H
#define PKCS12_T1146090091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12
struct  PKCS12_t1146090091  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12::_password
	ByteU5BU5D_t466969305* ____password_1;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_keyBags
	ArrayList_t3525268140 * ____keyBags_2;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_secretBags
	ArrayList_t3525268140 * ____secretBags_3;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::_certs
	X509CertificateCollection_t2441794254 * ____certs_4;
	// System.Boolean Mono.Security.X509.PKCS12::_keyBagsChanged
	bool ____keyBagsChanged_5;
	// System.Boolean Mono.Security.X509.PKCS12::_secretBagsChanged
	bool ____secretBagsChanged_6;
	// System.Boolean Mono.Security.X509.PKCS12::_certsChanged
	bool ____certsChanged_7;
	// System.Int32 Mono.Security.X509.PKCS12::_iterations
	int32_t ____iterations_8;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_safeBags
	ArrayList_t3525268140 * ____safeBags_9;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::_rng
	RandomNumberGenerator_t47475134 * ____rng_10;

public:
	inline static int32_t get_offset_of__password_1() { return static_cast<int32_t>(offsetof(PKCS12_t1146090091, ____password_1)); }
	inline ByteU5BU5D_t466969305* get__password_1() const { return ____password_1; }
	inline ByteU5BU5D_t466969305** get_address_of__password_1() { return &____password_1; }
	inline void set__password_1(ByteU5BU5D_t466969305* value)
	{
		____password_1 = value;
		Il2CppCodeGenWriteBarrier((&____password_1), value);
	}

	inline static int32_t get_offset_of__keyBags_2() { return static_cast<int32_t>(offsetof(PKCS12_t1146090091, ____keyBags_2)); }
	inline ArrayList_t3525268140 * get__keyBags_2() const { return ____keyBags_2; }
	inline ArrayList_t3525268140 ** get_address_of__keyBags_2() { return &____keyBags_2; }
	inline void set__keyBags_2(ArrayList_t3525268140 * value)
	{
		____keyBags_2 = value;
		Il2CppCodeGenWriteBarrier((&____keyBags_2), value);
	}

	inline static int32_t get_offset_of__secretBags_3() { return static_cast<int32_t>(offsetof(PKCS12_t1146090091, ____secretBags_3)); }
	inline ArrayList_t3525268140 * get__secretBags_3() const { return ____secretBags_3; }
	inline ArrayList_t3525268140 ** get_address_of__secretBags_3() { return &____secretBags_3; }
	inline void set__secretBags_3(ArrayList_t3525268140 * value)
	{
		____secretBags_3 = value;
		Il2CppCodeGenWriteBarrier((&____secretBags_3), value);
	}

	inline static int32_t get_offset_of__certs_4() { return static_cast<int32_t>(offsetof(PKCS12_t1146090091, ____certs_4)); }
	inline X509CertificateCollection_t2441794254 * get__certs_4() const { return ____certs_4; }
	inline X509CertificateCollection_t2441794254 ** get_address_of__certs_4() { return &____certs_4; }
	inline void set__certs_4(X509CertificateCollection_t2441794254 * value)
	{
		____certs_4 = value;
		Il2CppCodeGenWriteBarrier((&____certs_4), value);
	}

	inline static int32_t get_offset_of__keyBagsChanged_5() { return static_cast<int32_t>(offsetof(PKCS12_t1146090091, ____keyBagsChanged_5)); }
	inline bool get__keyBagsChanged_5() const { return ____keyBagsChanged_5; }
	inline bool* get_address_of__keyBagsChanged_5() { return &____keyBagsChanged_5; }
	inline void set__keyBagsChanged_5(bool value)
	{
		____keyBagsChanged_5 = value;
	}

	inline static int32_t get_offset_of__secretBagsChanged_6() { return static_cast<int32_t>(offsetof(PKCS12_t1146090091, ____secretBagsChanged_6)); }
	inline bool get__secretBagsChanged_6() const { return ____secretBagsChanged_6; }
	inline bool* get_address_of__secretBagsChanged_6() { return &____secretBagsChanged_6; }
	inline void set__secretBagsChanged_6(bool value)
	{
		____secretBagsChanged_6 = value;
	}

	inline static int32_t get_offset_of__certsChanged_7() { return static_cast<int32_t>(offsetof(PKCS12_t1146090091, ____certsChanged_7)); }
	inline bool get__certsChanged_7() const { return ____certsChanged_7; }
	inline bool* get_address_of__certsChanged_7() { return &____certsChanged_7; }
	inline void set__certsChanged_7(bool value)
	{
		____certsChanged_7 = value;
	}

	inline static int32_t get_offset_of__iterations_8() { return static_cast<int32_t>(offsetof(PKCS12_t1146090091, ____iterations_8)); }
	inline int32_t get__iterations_8() const { return ____iterations_8; }
	inline int32_t* get_address_of__iterations_8() { return &____iterations_8; }
	inline void set__iterations_8(int32_t value)
	{
		____iterations_8 = value;
	}

	inline static int32_t get_offset_of__safeBags_9() { return static_cast<int32_t>(offsetof(PKCS12_t1146090091, ____safeBags_9)); }
	inline ArrayList_t3525268140 * get__safeBags_9() const { return ____safeBags_9; }
	inline ArrayList_t3525268140 ** get_address_of__safeBags_9() { return &____safeBags_9; }
	inline void set__safeBags_9(ArrayList_t3525268140 * value)
	{
		____safeBags_9 = value;
		Il2CppCodeGenWriteBarrier((&____safeBags_9), value);
	}

	inline static int32_t get_offset_of__rng_10() { return static_cast<int32_t>(offsetof(PKCS12_t1146090091, ____rng_10)); }
	inline RandomNumberGenerator_t47475134 * get__rng_10() const { return ____rng_10; }
	inline RandomNumberGenerator_t47475134 ** get_address_of__rng_10() { return &____rng_10; }
	inline void set__rng_10(RandomNumberGenerator_t47475134 * value)
	{
		____rng_10 = value;
		Il2CppCodeGenWriteBarrier((&____rng_10), value);
	}
};

struct PKCS12_t1146090091_StaticFields
{
public:
	// System.Int32 Mono.Security.X509.PKCS12::recommendedIterationCount
	int32_t ___recommendedIterationCount_0;
	// System.Int32 Mono.Security.X509.PKCS12::password_max_length
	int32_t ___password_max_length_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map5
	Dictionary_2_t19767864 * ___U3CU3Ef__switchU24map5_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map6
	Dictionary_2_t19767864 * ___U3CU3Ef__switchU24map6_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map7
	Dictionary_2_t19767864 * ___U3CU3Ef__switchU24map7_14;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map8
	Dictionary_2_t19767864 * ___U3CU3Ef__switchU24map8_15;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapC
	Dictionary_2_t19767864 * ___U3CU3Ef__switchU24mapC_16;

public:
	inline static int32_t get_offset_of_recommendedIterationCount_0() { return static_cast<int32_t>(offsetof(PKCS12_t1146090091_StaticFields, ___recommendedIterationCount_0)); }
	inline int32_t get_recommendedIterationCount_0() const { return ___recommendedIterationCount_0; }
	inline int32_t* get_address_of_recommendedIterationCount_0() { return &___recommendedIterationCount_0; }
	inline void set_recommendedIterationCount_0(int32_t value)
	{
		___recommendedIterationCount_0 = value;
	}

	inline static int32_t get_offset_of_password_max_length_11() { return static_cast<int32_t>(offsetof(PKCS12_t1146090091_StaticFields, ___password_max_length_11)); }
	inline int32_t get_password_max_length_11() const { return ___password_max_length_11; }
	inline int32_t* get_address_of_password_max_length_11() { return &___password_max_length_11; }
	inline void set_password_max_length_11(int32_t value)
	{
		___password_max_length_11 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map5_12() { return static_cast<int32_t>(offsetof(PKCS12_t1146090091_StaticFields, ___U3CU3Ef__switchU24map5_12)); }
	inline Dictionary_2_t19767864 * get_U3CU3Ef__switchU24map5_12() const { return ___U3CU3Ef__switchU24map5_12; }
	inline Dictionary_2_t19767864 ** get_address_of_U3CU3Ef__switchU24map5_12() { return &___U3CU3Ef__switchU24map5_12; }
	inline void set_U3CU3Ef__switchU24map5_12(Dictionary_2_t19767864 * value)
	{
		___U3CU3Ef__switchU24map5_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map5_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map6_13() { return static_cast<int32_t>(offsetof(PKCS12_t1146090091_StaticFields, ___U3CU3Ef__switchU24map6_13)); }
	inline Dictionary_2_t19767864 * get_U3CU3Ef__switchU24map6_13() const { return ___U3CU3Ef__switchU24map6_13; }
	inline Dictionary_2_t19767864 ** get_address_of_U3CU3Ef__switchU24map6_13() { return &___U3CU3Ef__switchU24map6_13; }
	inline void set_U3CU3Ef__switchU24map6_13(Dictionary_2_t19767864 * value)
	{
		___U3CU3Ef__switchU24map6_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map6_13), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map7_14() { return static_cast<int32_t>(offsetof(PKCS12_t1146090091_StaticFields, ___U3CU3Ef__switchU24map7_14)); }
	inline Dictionary_2_t19767864 * get_U3CU3Ef__switchU24map7_14() const { return ___U3CU3Ef__switchU24map7_14; }
	inline Dictionary_2_t19767864 ** get_address_of_U3CU3Ef__switchU24map7_14() { return &___U3CU3Ef__switchU24map7_14; }
	inline void set_U3CU3Ef__switchU24map7_14(Dictionary_2_t19767864 * value)
	{
		___U3CU3Ef__switchU24map7_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map7_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map8_15() { return static_cast<int32_t>(offsetof(PKCS12_t1146090091_StaticFields, ___U3CU3Ef__switchU24map8_15)); }
	inline Dictionary_2_t19767864 * get_U3CU3Ef__switchU24map8_15() const { return ___U3CU3Ef__switchU24map8_15; }
	inline Dictionary_2_t19767864 ** get_address_of_U3CU3Ef__switchU24map8_15() { return &___U3CU3Ef__switchU24map8_15; }
	inline void set_U3CU3Ef__switchU24map8_15(Dictionary_2_t19767864 * value)
	{
		___U3CU3Ef__switchU24map8_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map8_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapC_16() { return static_cast<int32_t>(offsetof(PKCS12_t1146090091_StaticFields, ___U3CU3Ef__switchU24mapC_16)); }
	inline Dictionary_2_t19767864 * get_U3CU3Ef__switchU24mapC_16() const { return ___U3CU3Ef__switchU24mapC_16; }
	inline Dictionary_2_t19767864 ** get_address_of_U3CU3Ef__switchU24mapC_16() { return &___U3CU3Ef__switchU24mapC_16; }
	inline void set_U3CU3Ef__switchU24mapC_16(Dictionary_2_t19767864 * value)
	{
		___U3CU3Ef__switchU24mapC_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapC_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS12_T1146090091_H
#ifndef STRINGCOMPARER_T797898967_H
#define STRINGCOMPARER_T797898967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparer
struct  StringComparer_t797898967  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t797898967_StaticFields
{
public:
	// System.StringComparer System.StringComparer::invariantCultureIgnoreCase
	StringComparer_t797898967 * ___invariantCultureIgnoreCase_0;
	// System.StringComparer System.StringComparer::invariantCulture
	StringComparer_t797898967 * ___invariantCulture_1;
	// System.StringComparer System.StringComparer::ordinalIgnoreCase
	StringComparer_t797898967 * ___ordinalIgnoreCase_2;
	// System.StringComparer System.StringComparer::ordinal
	StringComparer_t797898967 * ___ordinal_3;

public:
	inline static int32_t get_offset_of_invariantCultureIgnoreCase_0() { return static_cast<int32_t>(offsetof(StringComparer_t797898967_StaticFields, ___invariantCultureIgnoreCase_0)); }
	inline StringComparer_t797898967 * get_invariantCultureIgnoreCase_0() const { return ___invariantCultureIgnoreCase_0; }
	inline StringComparer_t797898967 ** get_address_of_invariantCultureIgnoreCase_0() { return &___invariantCultureIgnoreCase_0; }
	inline void set_invariantCultureIgnoreCase_0(StringComparer_t797898967 * value)
	{
		___invariantCultureIgnoreCase_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCultureIgnoreCase_0), value);
	}

	inline static int32_t get_offset_of_invariantCulture_1() { return static_cast<int32_t>(offsetof(StringComparer_t797898967_StaticFields, ___invariantCulture_1)); }
	inline StringComparer_t797898967 * get_invariantCulture_1() const { return ___invariantCulture_1; }
	inline StringComparer_t797898967 ** get_address_of_invariantCulture_1() { return &___invariantCulture_1; }
	inline void set_invariantCulture_1(StringComparer_t797898967 * value)
	{
		___invariantCulture_1 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCulture_1), value);
	}

	inline static int32_t get_offset_of_ordinalIgnoreCase_2() { return static_cast<int32_t>(offsetof(StringComparer_t797898967_StaticFields, ___ordinalIgnoreCase_2)); }
	inline StringComparer_t797898967 * get_ordinalIgnoreCase_2() const { return ___ordinalIgnoreCase_2; }
	inline StringComparer_t797898967 ** get_address_of_ordinalIgnoreCase_2() { return &___ordinalIgnoreCase_2; }
	inline void set_ordinalIgnoreCase_2(StringComparer_t797898967 * value)
	{
		___ordinalIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___ordinalIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_ordinal_3() { return static_cast<int32_t>(offsetof(StringComparer_t797898967_StaticFields, ___ordinal_3)); }
	inline StringComparer_t797898967 * get_ordinal_3() const { return ___ordinal_3; }
	inline StringComparer_t797898967 ** get_address_of_ordinal_3() { return &___ordinal_3; }
	inline void set_ordinal_3(StringComparer_t797898967 * value)
	{
		___ordinal_3 = value;
		Il2CppCodeGenWriteBarrier((&___ordinal_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARER_T797898967_H
#ifndef TIMEZONE_T2867894493_H
#define TIMEZONE_T2867894493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZone
struct  TimeZone_t2867894493  : public RuntimeObject
{
public:

public:
};

struct TimeZone_t2867894493_StaticFields
{
public:
	// System.TimeZone System.TimeZone::currentTimeZone
	TimeZone_t2867894493 * ___currentTimeZone_0;
	// System.Object System.TimeZone::tz_lock
	RuntimeObject * ___tz_lock_1;
	// System.Int64 System.TimeZone::timezone_check
	int64_t ___timezone_check_2;

public:
	inline static int32_t get_offset_of_currentTimeZone_0() { return static_cast<int32_t>(offsetof(TimeZone_t2867894493_StaticFields, ___currentTimeZone_0)); }
	inline TimeZone_t2867894493 * get_currentTimeZone_0() const { return ___currentTimeZone_0; }
	inline TimeZone_t2867894493 ** get_address_of_currentTimeZone_0() { return &___currentTimeZone_0; }
	inline void set_currentTimeZone_0(TimeZone_t2867894493 * value)
	{
		___currentTimeZone_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentTimeZone_0), value);
	}

	inline static int32_t get_offset_of_tz_lock_1() { return static_cast<int32_t>(offsetof(TimeZone_t2867894493_StaticFields, ___tz_lock_1)); }
	inline RuntimeObject * get_tz_lock_1() const { return ___tz_lock_1; }
	inline RuntimeObject ** get_address_of_tz_lock_1() { return &___tz_lock_1; }
	inline void set_tz_lock_1(RuntimeObject * value)
	{
		___tz_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___tz_lock_1), value);
	}

	inline static int32_t get_offset_of_timezone_check_2() { return static_cast<int32_t>(offsetof(TimeZone_t2867894493_StaticFields, ___timezone_check_2)); }
	inline int64_t get_timezone_check_2() const { return ___timezone_check_2; }
	inline int64_t* get_address_of_timezone_check_2() { return &___timezone_check_2; }
	inline void set_timezone_check_2(int64_t value)
	{
		___timezone_check_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEZONE_T2867894493_H
#ifndef EVENTARGS_T1620478104_H
#define EVENTARGS_T1620478104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t1620478104  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t1620478104_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t1620478104 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t1620478104_StaticFields, ___Empty_0)); }
	inline EventArgs_t1620478104 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t1620478104 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t1620478104 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T1620478104_H
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
#ifndef X501_T1019108771_H
#define X501_T1019108771_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X501
struct  X501_t1019108771  : public RuntimeObject
{
public:

public:
};

struct X501_t1019108771_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.X501::countryName
	ByteU5BU5D_t466969305* ___countryName_0;
	// System.Byte[] Mono.Security.X509.X501::organizationName
	ByteU5BU5D_t466969305* ___organizationName_1;
	// System.Byte[] Mono.Security.X509.X501::organizationalUnitName
	ByteU5BU5D_t466969305* ___organizationalUnitName_2;
	// System.Byte[] Mono.Security.X509.X501::commonName
	ByteU5BU5D_t466969305* ___commonName_3;
	// System.Byte[] Mono.Security.X509.X501::localityName
	ByteU5BU5D_t466969305* ___localityName_4;
	// System.Byte[] Mono.Security.X509.X501::stateOrProvinceName
	ByteU5BU5D_t466969305* ___stateOrProvinceName_5;
	// System.Byte[] Mono.Security.X509.X501::streetAddress
	ByteU5BU5D_t466969305* ___streetAddress_6;
	// System.Byte[] Mono.Security.X509.X501::domainComponent
	ByteU5BU5D_t466969305* ___domainComponent_7;
	// System.Byte[] Mono.Security.X509.X501::userid
	ByteU5BU5D_t466969305* ___userid_8;
	// System.Byte[] Mono.Security.X509.X501::email
	ByteU5BU5D_t466969305* ___email_9;
	// System.Byte[] Mono.Security.X509.X501::dnQualifier
	ByteU5BU5D_t466969305* ___dnQualifier_10;
	// System.Byte[] Mono.Security.X509.X501::title
	ByteU5BU5D_t466969305* ___title_11;
	// System.Byte[] Mono.Security.X509.X501::surname
	ByteU5BU5D_t466969305* ___surname_12;
	// System.Byte[] Mono.Security.X509.X501::givenName
	ByteU5BU5D_t466969305* ___givenName_13;
	// System.Byte[] Mono.Security.X509.X501::initial
	ByteU5BU5D_t466969305* ___initial_14;

public:
	inline static int32_t get_offset_of_countryName_0() { return static_cast<int32_t>(offsetof(X501_t1019108771_StaticFields, ___countryName_0)); }
	inline ByteU5BU5D_t466969305* get_countryName_0() const { return ___countryName_0; }
	inline ByteU5BU5D_t466969305** get_address_of_countryName_0() { return &___countryName_0; }
	inline void set_countryName_0(ByteU5BU5D_t466969305* value)
	{
		___countryName_0 = value;
		Il2CppCodeGenWriteBarrier((&___countryName_0), value);
	}

	inline static int32_t get_offset_of_organizationName_1() { return static_cast<int32_t>(offsetof(X501_t1019108771_StaticFields, ___organizationName_1)); }
	inline ByteU5BU5D_t466969305* get_organizationName_1() const { return ___organizationName_1; }
	inline ByteU5BU5D_t466969305** get_address_of_organizationName_1() { return &___organizationName_1; }
	inline void set_organizationName_1(ByteU5BU5D_t466969305* value)
	{
		___organizationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___organizationName_1), value);
	}

	inline static int32_t get_offset_of_organizationalUnitName_2() { return static_cast<int32_t>(offsetof(X501_t1019108771_StaticFields, ___organizationalUnitName_2)); }
	inline ByteU5BU5D_t466969305* get_organizationalUnitName_2() const { return ___organizationalUnitName_2; }
	inline ByteU5BU5D_t466969305** get_address_of_organizationalUnitName_2() { return &___organizationalUnitName_2; }
	inline void set_organizationalUnitName_2(ByteU5BU5D_t466969305* value)
	{
		___organizationalUnitName_2 = value;
		Il2CppCodeGenWriteBarrier((&___organizationalUnitName_2), value);
	}

	inline static int32_t get_offset_of_commonName_3() { return static_cast<int32_t>(offsetof(X501_t1019108771_StaticFields, ___commonName_3)); }
	inline ByteU5BU5D_t466969305* get_commonName_3() const { return ___commonName_3; }
	inline ByteU5BU5D_t466969305** get_address_of_commonName_3() { return &___commonName_3; }
	inline void set_commonName_3(ByteU5BU5D_t466969305* value)
	{
		___commonName_3 = value;
		Il2CppCodeGenWriteBarrier((&___commonName_3), value);
	}

	inline static int32_t get_offset_of_localityName_4() { return static_cast<int32_t>(offsetof(X501_t1019108771_StaticFields, ___localityName_4)); }
	inline ByteU5BU5D_t466969305* get_localityName_4() const { return ___localityName_4; }
	inline ByteU5BU5D_t466969305** get_address_of_localityName_4() { return &___localityName_4; }
	inline void set_localityName_4(ByteU5BU5D_t466969305* value)
	{
		___localityName_4 = value;
		Il2CppCodeGenWriteBarrier((&___localityName_4), value);
	}

	inline static int32_t get_offset_of_stateOrProvinceName_5() { return static_cast<int32_t>(offsetof(X501_t1019108771_StaticFields, ___stateOrProvinceName_5)); }
	inline ByteU5BU5D_t466969305* get_stateOrProvinceName_5() const { return ___stateOrProvinceName_5; }
	inline ByteU5BU5D_t466969305** get_address_of_stateOrProvinceName_5() { return &___stateOrProvinceName_5; }
	inline void set_stateOrProvinceName_5(ByteU5BU5D_t466969305* value)
	{
		___stateOrProvinceName_5 = value;
		Il2CppCodeGenWriteBarrier((&___stateOrProvinceName_5), value);
	}

	inline static int32_t get_offset_of_streetAddress_6() { return static_cast<int32_t>(offsetof(X501_t1019108771_StaticFields, ___streetAddress_6)); }
	inline ByteU5BU5D_t466969305* get_streetAddress_6() const { return ___streetAddress_6; }
	inline ByteU5BU5D_t466969305** get_address_of_streetAddress_6() { return &___streetAddress_6; }
	inline void set_streetAddress_6(ByteU5BU5D_t466969305* value)
	{
		___streetAddress_6 = value;
		Il2CppCodeGenWriteBarrier((&___streetAddress_6), value);
	}

	inline static int32_t get_offset_of_domainComponent_7() { return static_cast<int32_t>(offsetof(X501_t1019108771_StaticFields, ___domainComponent_7)); }
	inline ByteU5BU5D_t466969305* get_domainComponent_7() const { return ___domainComponent_7; }
	inline ByteU5BU5D_t466969305** get_address_of_domainComponent_7() { return &___domainComponent_7; }
	inline void set_domainComponent_7(ByteU5BU5D_t466969305* value)
	{
		___domainComponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___domainComponent_7), value);
	}

	inline static int32_t get_offset_of_userid_8() { return static_cast<int32_t>(offsetof(X501_t1019108771_StaticFields, ___userid_8)); }
	inline ByteU5BU5D_t466969305* get_userid_8() const { return ___userid_8; }
	inline ByteU5BU5D_t466969305** get_address_of_userid_8() { return &___userid_8; }
	inline void set_userid_8(ByteU5BU5D_t466969305* value)
	{
		___userid_8 = value;
		Il2CppCodeGenWriteBarrier((&___userid_8), value);
	}

	inline static int32_t get_offset_of_email_9() { return static_cast<int32_t>(offsetof(X501_t1019108771_StaticFields, ___email_9)); }
	inline ByteU5BU5D_t466969305* get_email_9() const { return ___email_9; }
	inline ByteU5BU5D_t466969305** get_address_of_email_9() { return &___email_9; }
	inline void set_email_9(ByteU5BU5D_t466969305* value)
	{
		___email_9 = value;
		Il2CppCodeGenWriteBarrier((&___email_9), value);
	}

	inline static int32_t get_offset_of_dnQualifier_10() { return static_cast<int32_t>(offsetof(X501_t1019108771_StaticFields, ___dnQualifier_10)); }
	inline ByteU5BU5D_t466969305* get_dnQualifier_10() const { return ___dnQualifier_10; }
	inline ByteU5BU5D_t466969305** get_address_of_dnQualifier_10() { return &___dnQualifier_10; }
	inline void set_dnQualifier_10(ByteU5BU5D_t466969305* value)
	{
		___dnQualifier_10 = value;
		Il2CppCodeGenWriteBarrier((&___dnQualifier_10), value);
	}

	inline static int32_t get_offset_of_title_11() { return static_cast<int32_t>(offsetof(X501_t1019108771_StaticFields, ___title_11)); }
	inline ByteU5BU5D_t466969305* get_title_11() const { return ___title_11; }
	inline ByteU5BU5D_t466969305** get_address_of_title_11() { return &___title_11; }
	inline void set_title_11(ByteU5BU5D_t466969305* value)
	{
		___title_11 = value;
		Il2CppCodeGenWriteBarrier((&___title_11), value);
	}

	inline static int32_t get_offset_of_surname_12() { return static_cast<int32_t>(offsetof(X501_t1019108771_StaticFields, ___surname_12)); }
	inline ByteU5BU5D_t466969305* get_surname_12() const { return ___surname_12; }
	inline ByteU5BU5D_t466969305** get_address_of_surname_12() { return &___surname_12; }
	inline void set_surname_12(ByteU5BU5D_t466969305* value)
	{
		___surname_12 = value;
		Il2CppCodeGenWriteBarrier((&___surname_12), value);
	}

	inline static int32_t get_offset_of_givenName_13() { return static_cast<int32_t>(offsetof(X501_t1019108771_StaticFields, ___givenName_13)); }
	inline ByteU5BU5D_t466969305* get_givenName_13() const { return ___givenName_13; }
	inline ByteU5BU5D_t466969305** get_address_of_givenName_13() { return &___givenName_13; }
	inline void set_givenName_13(ByteU5BU5D_t466969305* value)
	{
		___givenName_13 = value;
		Il2CppCodeGenWriteBarrier((&___givenName_13), value);
	}

	inline static int32_t get_offset_of_initial_14() { return static_cast<int32_t>(offsetof(X501_t1019108771_StaticFields, ___initial_14)); }
	inline ByteU5BU5D_t466969305* get_initial_14() const { return ___initial_14; }
	inline ByteU5BU5D_t466969305** get_address_of_initial_14() { return &___initial_14; }
	inline void set_initial_14(ByteU5BU5D_t466969305* value)
	{
		___initial_14 = value;
		Il2CppCodeGenWriteBarrier((&___initial_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X501_T1019108771_H
#ifndef VERSION_T600668514_H
#define VERSION_T600668514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version
struct  Version_t600668514  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_1;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_2;
	// System.Int32 System.Version::_Build
	int32_t ____Build_3;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_4;

public:
	inline static int32_t get_offset_of__Major_1() { return static_cast<int32_t>(offsetof(Version_t600668514, ____Major_1)); }
	inline int32_t get__Major_1() const { return ____Major_1; }
	inline int32_t* get_address_of__Major_1() { return &____Major_1; }
	inline void set__Major_1(int32_t value)
	{
		____Major_1 = value;
	}

	inline static int32_t get_offset_of__Minor_2() { return static_cast<int32_t>(offsetof(Version_t600668514, ____Minor_2)); }
	inline int32_t get__Minor_2() const { return ____Minor_2; }
	inline int32_t* get_address_of__Minor_2() { return &____Minor_2; }
	inline void set__Minor_2(int32_t value)
	{
		____Minor_2 = value;
	}

	inline static int32_t get_offset_of__Build_3() { return static_cast<int32_t>(offsetof(Version_t600668514, ____Build_3)); }
	inline int32_t get__Build_3() const { return ____Build_3; }
	inline int32_t* get_address_of__Build_3() { return &____Build_3; }
	inline void set__Build_3(int32_t value)
	{
		____Build_3 = value;
	}

	inline static int32_t get_offset_of__Revision_4() { return static_cast<int32_t>(offsetof(Version_t600668514, ____Revision_4)); }
	inline int32_t get__Revision_4() const { return ____Revision_4; }
	inline int32_t* get_address_of__Revision_4() { return &____Revision_4; }
	inline void set__Revision_4(int32_t value)
	{
		____Revision_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_T600668514_H
#ifndef COLLECTIONBASE_T3237793954_H
#define COLLECTIONBASE_T3237793954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t3237793954  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t3525268140 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t3237793954, ___list_0)); }
	inline ArrayList_t3525268140 * get_list_0() const { return ___list_0; }
	inline ArrayList_t3525268140 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t3525268140 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_T3237793954_H
#ifndef HASHALGORITHM_T3827439258_H
#define HASHALGORITHM_T3827439258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t3827439258  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t466969305* ___HashValue_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_HashValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3827439258, ___HashValue_0)); }
	inline ByteU5BU5D_t466969305* get_HashValue_0() const { return ___HashValue_0; }
	inline ByteU5BU5D_t466969305** get_address_of_HashValue_0() { return &___HashValue_0; }
	inline void set_HashValue_0(ByteU5BU5D_t466969305* value)
	{
		___HashValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_0), value);
	}

	inline static int32_t get_offset_of_HashSizeValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3827439258, ___HashSizeValue_1)); }
	inline int32_t get_HashSizeValue_1() const { return ___HashSizeValue_1; }
	inline int32_t* get_address_of_HashSizeValue_1() { return &___HashSizeValue_1; }
	inline void set_HashSizeValue_1(int32_t value)
	{
		___HashSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3827439258, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3827439258, ___disposed_3)); }
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
#endif // HASHALGORITHM_T3827439258_H
#ifndef __IL2CPPCOMDELEGATE_T1675011020_H
#define __IL2CPPCOMDELEGATE_T1675011020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComDelegate
struct  __Il2CppComDelegate_t1675011020  : public Il2CppComObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __IL2CPPCOMDELEGATE_T1675011020_H
#ifndef U24ARRAYTYPEU2452_T3781238388_H
#define U24ARRAYTYPEU2452_T3781238388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$52
struct  U24ArrayTypeU2452_t3781238388 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2452_t3781238388__padding[52];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2452_T3781238388_H
#ifndef U24ARRAYTYPEU24128_T3381039606_H
#define U24ARRAYTYPEU24128_T3381039606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$128
struct  U24ArrayTypeU24128_t3381039606 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24128_t3381039606__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24128_T3381039606_H
#ifndef U24ARRAYTYPEU24640_T797511095_H
#define U24ARRAYTYPEU24640_T797511095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$640
struct  U24ArrayTypeU24640_t797511095 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24640_t797511095__padding[640];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24640_T797511095_H
#ifndef U24ARRAYTYPEU241024_T2337138493_H
#define U24ARRAYTYPEU241024_T2337138493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1024
struct  U24ArrayTypeU241024_t2337138493 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU241024_t2337138493__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241024_T2337138493_H
#ifndef SEQUENTIALSEARCHPRIMEGENERATORBASE_T2202442834_H
#define SEQUENTIALSEARCHPRIMEGENERATORBASE_T2202442834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct  SequentialSearchPrimeGeneratorBase_t2202442834  : public PrimeGeneratorBase_t3010235970
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEQUENTIALSEARCHPRIMEGENERATORBASE_T2202442834_H
#ifndef BOOLEAN_T3006696077_H
#define BOOLEAN_T3006696077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3006696077 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t3006696077, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t3006696077_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t3006696077_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t3006696077_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T3006696077_H
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
#ifndef X509CERTIFICATECOLLECTION_T2441794254_H
#define X509CERTIFICATECOLLECTION_T2441794254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection
struct  X509CertificateCollection_t2441794254  : public CollectionBase_t3237793954
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATECOLLECTION_T2441794254_H
#ifndef MD2_T592240490_H
#define MD2_T592240490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD2
struct  MD2_t592240490  : public HashAlgorithm_t3827439258
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD2_T592240490_H
#ifndef MD4_T2334591378_H
#define MD4_T2334591378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD4
struct  MD4_t2334591378  : public HashAlgorithm_t3827439258
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD4_T2334591378_H
#ifndef U24ARRAYTYPEU24256_T3819817495_H
#define U24ARRAYTYPEU24256_T3819817495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t3819817495 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24256_t3819817495__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T3819817495_H
#ifndef RSA_T802230051_H
#define RSA_T802230051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t802230051  : public AsymmetricAlgorithm_t3522259019
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T802230051_H
#ifndef U24ARRAYTYPEU242048_T3807678207_H
#define U24ARRAYTYPEU242048_T3807678207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$2048
struct  U24ArrayTypeU242048_t3807678207 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU242048_t3807678207__padding[2048];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU242048_T3807678207_H
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
#ifndef U24ARRAYTYPEU24124_T761950804_H
#define U24ARRAYTYPEU24124_T761950804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$124
struct  U24ArrayTypeU24124_t761950804 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24124_t761950804__padding[124];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24124_T761950804_H
#ifndef THREADSTATICATTRIBUTE_T3578329800_H
#define THREADSTATICATTRIBUTE_T3578329800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ThreadStaticAttribute
struct  ThreadStaticAttribute_t3578329800  : public Attribute_t435654298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATICATTRIBUTE_T3578329800_H
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
#ifndef ORDINALCOMPARER_T2020072125_H
#define ORDINALCOMPARER_T2020072125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OrdinalComparer
struct  OrdinalComparer_t2020072125  : public StringComparer_t797898967
{
public:
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(OrdinalComparer_t2020072125, ____ignoreCase_4)); }
	inline bool get__ignoreCase_4() const { return ____ignoreCase_4; }
	inline bool* get_address_of__ignoreCase_4() { return &____ignoreCase_4; }
	inline void set__ignoreCase_4(bool value)
	{
		____ignoreCase_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDINALCOMPARER_T2020072125_H
#ifndef UNHANDLEDEXCEPTIONEVENTARGS_T4172922190_H
#define UNHANDLEDEXCEPTIONEVENTARGS_T4172922190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t4172922190  : public EventArgs_t1620478104
{
public:
	// System.Object System.UnhandledExceptionEventArgs::exception
	RuntimeObject * ___exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::m_isTerminating
	bool ___m_isTerminating_2;

public:
	inline static int32_t get_offset_of_exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t4172922190, ___exception_1)); }
	inline RuntimeObject * get_exception_1() const { return ___exception_1; }
	inline RuntimeObject ** get_address_of_exception_1() { return &___exception_1; }
	inline void set_exception_1(RuntimeObject * value)
	{
		___exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___exception_1), value);
	}

	inline static int32_t get_offset_of_m_isTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t4172922190, ___m_isTerminating_2)); }
	inline bool get_m_isTerminating_2() const { return ___m_isTerminating_2; }
	inline bool* get_address_of_m_isTerminating_2() { return &___m_isTerminating_2; }
	inline void set_m_isTerminating_2(bool value)
	{
		___m_isTerminating_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTARGS_T4172922190_H
#ifndef U24ARRAYTYPEU2456_T2611702527_H
#define U24ARRAYTYPEU2456_T2611702527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$56
struct  U24ArrayTypeU2456_t2611702527 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2456_t2611702527__padding[56];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2456_T2611702527_H
#ifndef U24ARRAYTYPEU2424_T2381117128_H
#define U24ARRAYTYPEU2424_T2381117128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$24
struct  U24ArrayTypeU2424_t2381117128 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2424_t2381117128__padding[24];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2424_T2381117128_H
#ifndef U24ARRAYTYPEU2416_T670941652_H
#define U24ARRAYTYPEU2416_T670941652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$16
struct  U24ArrayTypeU2416_t670941652 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2416_t670941652__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2416_T670941652_H
#ifndef TIMESPAN_T3906350454_H
#define TIMESPAN_T3906350454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t3906350454 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t3906350454, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t3906350454_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t3906350454  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t3906350454  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t3906350454  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t3906350454_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t3906350454  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t3906350454 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t3906350454  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t3906350454_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t3906350454  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t3906350454 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t3906350454  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t3906350454_StaticFields, ___Zero_2)); }
	inline TimeSpan_t3906350454  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t3906350454 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t3906350454  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T3906350454_H
#ifndef U24ARRAYTYPEU2496_T1404721456_H
#define U24ARRAYTYPEU2496_T1404721456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$96
struct  U24ArrayTypeU2496_t1404721456 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2496_t1404721456__padding[96];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2496_T1404721456_H
#ifndef U24ARRAYTYPEU24120_T3821071721_H
#define U24ARRAYTYPEU24120_T3821071721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$120
struct  U24ArrayTypeU24120_t3821071721 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24120_t3821071721__padding[120];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24120_T3821071721_H
#ifndef U24ARRAYTYPEU2420_T2856031853_H
#define U24ARRAYTYPEU2420_T2856031853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$20
struct  U24ArrayTypeU2420_t2856031853 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2420_t2856031853__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2420_T2856031853_H
#ifndef U24ARRAYTYPEU2432_T1297477410_H
#define U24ARRAYTYPEU2432_T1297477410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$32
struct  U24ArrayTypeU2432_t1297477410 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2432_t1297477410__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2432_T1297477410_H
#ifndef U24ARRAYTYPEU2448_T2988351476_H
#define U24ARRAYTYPEU2448_T2988351476_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$48
struct  U24ArrayTypeU2448_t2988351476 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2448_t2988351476__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2448_T2988351476_H
#ifndef CULTUREAWARECOMPARER_T3027449413_H
#define CULTUREAWARECOMPARER_T3027449413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CultureAwareComparer
struct  CultureAwareComparer_t3027449413  : public StringComparer_t797898967
{
public:
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t1583186922 * ____compareInfo_5;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t3027449413, ____ignoreCase_4)); }
	inline bool get__ignoreCase_4() const { return ____ignoreCase_4; }
	inline bool* get_address_of__ignoreCase_4() { return &____ignoreCase_4; }
	inline void set__ignoreCase_4(bool value)
	{
		____ignoreCase_4 = value;
	}

	inline static int32_t get_offset_of__compareInfo_5() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t3027449413, ____compareInfo_5)); }
	inline CompareInfo_t1583186922 * get__compareInfo_5() const { return ____compareInfo_5; }
	inline CompareInfo_t1583186922 ** get_address_of__compareInfo_5() { return &____compareInfo_5; }
	inline void set__compareInfo_5(CompareInfo_t1583186922 * value)
	{
		____compareInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&____compareInfo_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREAWARECOMPARER_T3027449413_H
#ifndef U24ARRAYTYPEU2464_T1627758979_H
#define U24ARRAYTYPEU2464_T1627758979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$64
struct  U24ArrayTypeU2464_t1627758979 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2464_t1627758979__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2464_T1627758979_H
#ifndef U24ARRAYTYPEU2412_T1548214979_H
#define U24ARRAYTYPEU2412_T1548214979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t1548214979 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2412_t1548214979__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T1548214979_H
#ifndef U24ARRAYTYPEU24136_T1283388247_H
#define U24ARRAYTYPEU24136_T1283388247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$136
struct  U24ArrayTypeU24136_t1283388247 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24136_t1283388247__padding[136];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24136_T1283388247_H
#ifndef U24ARRAYTYPEU248_T1650198573_H
#define U24ARRAYTYPEU248_T1650198573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$8
struct  U24ArrayTypeU248_t1650198573 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU248_t1650198573__padding[8];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU248_T1650198573_H
#ifndef U24ARRAYTYPEU2472_T157471073_H
#define U24ARRAYTYPEU2472_T157471073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$72
struct  U24ArrayTypeU2472_t157471073 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2472_t157471073__padding[72];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2472_T157471073_H
#ifndef U24ARRAYTYPEU243132_T2623977881_H
#define U24ARRAYTYPEU243132_T2623977881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$3132
struct  U24ArrayTypeU243132_t2623977881 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU243132_t2623977881__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU243132_T2623977881_H
#ifndef UNITYTYPE_T617204191_H
#define UNITYTYPE_T617204191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder/UnityType
struct  UnityType_t617204191 
{
public:
	// System.Byte System.UnitySerializationHolder/UnityType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityType_t617204191, ___value___1)); }
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
#endif // UNITYTYPE_T617204191_H
#ifndef UNAUTHORIZEDACCESSEXCEPTION_T1189045023_H
#define UNAUTHORIZEDACCESSEXCEPTION_T1189045023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnauthorizedAccessException
struct  UnauthorizedAccessException_t1189045023  : public SystemException_t2923610502
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNAUTHORIZEDACCESSEXCEPTION_T1189045023_H
#ifndef TYPELOADEXCEPTION_T2088455762_H
#define TYPELOADEXCEPTION_T2088455762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t2088455762  : public SystemException_t2923610502
{
public:
	// System.String System.TypeLoadException::className
	String_t* ___className_12;
	// System.String System.TypeLoadException::assemblyName
	String_t* ___assemblyName_13;

public:
	inline static int32_t get_offset_of_className_12() { return static_cast<int32_t>(offsetof(TypeLoadException_t2088455762, ___className_12)); }
	inline String_t* get_className_12() const { return ___className_12; }
	inline String_t** get_address_of_className_12() { return &___className_12; }
	inline void set_className_12(String_t* value)
	{
		___className_12 = value;
		Il2CppCodeGenWriteBarrier((&___className_12), value);
	}

	inline static int32_t get_offset_of_assemblyName_13() { return static_cast<int32_t>(offsetof(TypeLoadException_t2088455762, ___assemblyName_13)); }
	inline String_t* get_assemblyName_13() const { return ___assemblyName_13; }
	inline String_t** get_address_of_assemblyName_13() { return &___assemblyName_13; }
	inline void set_assemblyName_13(String_t* value)
	{
		___assemblyName_13 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELOADEXCEPTION_T2088455762_H
#ifndef TYPEINITIALIZATIONEXCEPTION_T3068863006_H
#define TYPEINITIALIZATIONEXCEPTION_T3068863006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeInitializationException
struct  TypeInitializationException_t3068863006  : public SystemException_t2923610502
{
public:
	// System.String System.TypeInitializationException::type_name
	String_t* ___type_name_11;

public:
	inline static int32_t get_offset_of_type_name_11() { return static_cast<int32_t>(offsetof(TypeInitializationException_t3068863006, ___type_name_11)); }
	inline String_t* get_type_name_11() const { return ___type_name_11; }
	inline String_t** get_address_of_type_name_11() { return &___type_name_11; }
	inline void set_type_name_11(String_t* value)
	{
		___type_name_11 = value;
		Il2CppCodeGenWriteBarrier((&___type_name_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINITIALIZATIONEXCEPTION_T3068863006_H
#ifndef TYPECODE_T2405418696_H
#define TYPECODE_T2405418696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeCode
struct  TypeCode_t2405418696 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeCode_t2405418696, ___value___1)); }
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
#endif // TYPECODE_T2405418696_H
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
#ifndef CONFIDENCEFACTOR_T2561855850_H
#define CONFIDENCEFACTOR_T2561855850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t2561855850 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t2561855850, ___value___1)); }
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
#endif // CONFIDENCEFACTOR_T2561855850_H
#ifndef STRINGSPLITOPTIONS_T3854825625_H
#define STRINGSPLITOPTIONS_T3854825625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringSplitOptions
struct  StringSplitOptions_t3854825625 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringSplitOptions_t3854825625, ___value___1)); }
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
#endif // STRINGSPLITOPTIONS_T3854825625_H
#ifndef STRINGCOMPARISON_T3285494484_H
#define STRINGCOMPARISON_T3285494484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparison
struct  StringComparison_t3285494484 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringComparison_t3285494484, ___value___1)); }
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
#endif // STRINGCOMPARISON_T3285494484_H
#ifndef WEAKREFERENCE_T2137783321_H
#define WEAKREFERENCE_T2137783321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t2137783321  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t3038984084  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t2137783321, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t2137783321, ___gcHandle_1)); }
	inline GCHandle_t3038984084  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t3038984084 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t3038984084  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T2137783321_H
#ifndef CIPHERMODE_T2494700235_H
#define CIPHERMODE_T2494700235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t2494700235 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t2494700235, ___value___1)); }
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
#endif // CIPHERMODE_T2494700235_H
#ifndef PADDINGMODE_T3513531356_H
#define PADDINGMODE_T3513531356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t3513531356 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t3513531356, ___value___1)); }
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
#endif // PADDINGMODE_T3513531356_H
#ifndef CURRENTSYSTEMTIMEZONE_T1775509837_H
#define CURRENTSYSTEMTIMEZONE_T1775509837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CurrentSystemTimeZone
struct  CurrentSystemTimeZone_t1775509837  : public TimeZone_t2867894493
{
public:
	// System.String System.CurrentSystemTimeZone::m_standardName
	String_t* ___m_standardName_3;
	// System.String System.CurrentSystemTimeZone::m_daylightName
	String_t* ___m_daylightName_4;
	// System.Collections.Hashtable System.CurrentSystemTimeZone::m_CachedDaylightChanges
	Hashtable_t2707551258 * ___m_CachedDaylightChanges_5;
	// System.Int64 System.CurrentSystemTimeZone::m_ticksOffset
	int64_t ___m_ticksOffset_6;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithOutDLS
	TimeSpan_t3906350454  ___utcOffsetWithOutDLS_7;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithDLS
	TimeSpan_t3906350454  ___utcOffsetWithDLS_8;

public:
	inline static int32_t get_offset_of_m_standardName_3() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1775509837, ___m_standardName_3)); }
	inline String_t* get_m_standardName_3() const { return ___m_standardName_3; }
	inline String_t** get_address_of_m_standardName_3() { return &___m_standardName_3; }
	inline void set_m_standardName_3(String_t* value)
	{
		___m_standardName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_standardName_3), value);
	}

	inline static int32_t get_offset_of_m_daylightName_4() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1775509837, ___m_daylightName_4)); }
	inline String_t* get_m_daylightName_4() const { return ___m_daylightName_4; }
	inline String_t** get_address_of_m_daylightName_4() { return &___m_daylightName_4; }
	inline void set_m_daylightName_4(String_t* value)
	{
		___m_daylightName_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_daylightName_4), value);
	}

	inline static int32_t get_offset_of_m_CachedDaylightChanges_5() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1775509837, ___m_CachedDaylightChanges_5)); }
	inline Hashtable_t2707551258 * get_m_CachedDaylightChanges_5() const { return ___m_CachedDaylightChanges_5; }
	inline Hashtable_t2707551258 ** get_address_of_m_CachedDaylightChanges_5() { return &___m_CachedDaylightChanges_5; }
	inline void set_m_CachedDaylightChanges_5(Hashtable_t2707551258 * value)
	{
		___m_CachedDaylightChanges_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedDaylightChanges_5), value);
	}

	inline static int32_t get_offset_of_m_ticksOffset_6() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1775509837, ___m_ticksOffset_6)); }
	inline int64_t get_m_ticksOffset_6() const { return ___m_ticksOffset_6; }
	inline int64_t* get_address_of_m_ticksOffset_6() { return &___m_ticksOffset_6; }
	inline void set_m_ticksOffset_6(int64_t value)
	{
		___m_ticksOffset_6 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithOutDLS_7() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1775509837, ___utcOffsetWithOutDLS_7)); }
	inline TimeSpan_t3906350454  get_utcOffsetWithOutDLS_7() const { return ___utcOffsetWithOutDLS_7; }
	inline TimeSpan_t3906350454 * get_address_of_utcOffsetWithOutDLS_7() { return &___utcOffsetWithOutDLS_7; }
	inline void set_utcOffsetWithOutDLS_7(TimeSpan_t3906350454  value)
	{
		___utcOffsetWithOutDLS_7 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithDLS_8() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1775509837, ___utcOffsetWithDLS_8)); }
	inline TimeSpan_t3906350454  get_utcOffsetWithDLS_8() const { return ___utcOffsetWithDLS_8; }
	inline TimeSpan_t3906350454 * get_address_of_utcOffsetWithDLS_8() { return &___utcOffsetWithDLS_8; }
	inline void set_utcOffsetWithDLS_8(TimeSpan_t3906350454  value)
	{
		___utcOffsetWithDLS_8 = value;
	}
};

struct CurrentSystemTimeZone_t1775509837_StaticFields
{
public:
	// System.Int32 System.CurrentSystemTimeZone::this_year
	int32_t ___this_year_9;
	// System.Globalization.DaylightTime System.CurrentSystemTimeZone::this_year_dlt
	DaylightTime_t1040583373 * ___this_year_dlt_10;

public:
	inline static int32_t get_offset_of_this_year_9() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1775509837_StaticFields, ___this_year_9)); }
	inline int32_t get_this_year_9() const { return ___this_year_9; }
	inline int32_t* get_address_of_this_year_9() { return &___this_year_9; }
	inline void set_this_year_9(int32_t value)
	{
		___this_year_9 = value;
	}

	inline static int32_t get_offset_of_this_year_dlt_10() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1775509837_StaticFields, ___this_year_dlt_10)); }
	inline DaylightTime_t1040583373 * get_this_year_dlt_10() const { return ___this_year_dlt_10; }
	inline DaylightTime_t1040583373 ** get_address_of_this_year_dlt_10() { return &___this_year_dlt_10; }
	inline void set_this_year_dlt_10(DaylightTime_t1040583373 * value)
	{
		___this_year_dlt_10 = value;
		Il2CppCodeGenWriteBarrier((&___this_year_dlt_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURRENTSYSTEMTIMEZONE_T1775509837_H
#ifndef RSAMANAGED_T3958925716_H
#define RSAMANAGED_T3958925716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged
struct  RSAManaged_t3958925716  : public RSA_t802230051
{
public:
	// System.Boolean Mono.Security.Cryptography.RSAManaged::isCRTpossible
	bool ___isCRTpossible_2;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keyBlinding
	bool ___keyBlinding_3;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keypairGenerated
	bool ___keypairGenerated_4;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::m_disposed
	bool ___m_disposed_5;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::d
	BigInteger_t3204170028 * ___d_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::p
	BigInteger_t3204170028 * ___p_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::q
	BigInteger_t3204170028 * ___q_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dp
	BigInteger_t3204170028 * ___dp_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dq
	BigInteger_t3204170028 * ___dq_10;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::qInv
	BigInteger_t3204170028 * ___qInv_11;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::n
	BigInteger_t3204170028 * ___n_12;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::e
	BigInteger_t3204170028 * ___e_13;
	// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.RSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t601819501 * ___KeyGenerated_14;

public:
	inline static int32_t get_offset_of_isCRTpossible_2() { return static_cast<int32_t>(offsetof(RSAManaged_t3958925716, ___isCRTpossible_2)); }
	inline bool get_isCRTpossible_2() const { return ___isCRTpossible_2; }
	inline bool* get_address_of_isCRTpossible_2() { return &___isCRTpossible_2; }
	inline void set_isCRTpossible_2(bool value)
	{
		___isCRTpossible_2 = value;
	}

	inline static int32_t get_offset_of_keyBlinding_3() { return static_cast<int32_t>(offsetof(RSAManaged_t3958925716, ___keyBlinding_3)); }
	inline bool get_keyBlinding_3() const { return ___keyBlinding_3; }
	inline bool* get_address_of_keyBlinding_3() { return &___keyBlinding_3; }
	inline void set_keyBlinding_3(bool value)
	{
		___keyBlinding_3 = value;
	}

	inline static int32_t get_offset_of_keypairGenerated_4() { return static_cast<int32_t>(offsetof(RSAManaged_t3958925716, ___keypairGenerated_4)); }
	inline bool get_keypairGenerated_4() const { return ___keypairGenerated_4; }
	inline bool* get_address_of_keypairGenerated_4() { return &___keypairGenerated_4; }
	inline void set_keypairGenerated_4(bool value)
	{
		___keypairGenerated_4 = value;
	}

	inline static int32_t get_offset_of_m_disposed_5() { return static_cast<int32_t>(offsetof(RSAManaged_t3958925716, ___m_disposed_5)); }
	inline bool get_m_disposed_5() const { return ___m_disposed_5; }
	inline bool* get_address_of_m_disposed_5() { return &___m_disposed_5; }
	inline void set_m_disposed_5(bool value)
	{
		___m_disposed_5 = value;
	}

	inline static int32_t get_offset_of_d_6() { return static_cast<int32_t>(offsetof(RSAManaged_t3958925716, ___d_6)); }
	inline BigInteger_t3204170028 * get_d_6() const { return ___d_6; }
	inline BigInteger_t3204170028 ** get_address_of_d_6() { return &___d_6; }
	inline void set_d_6(BigInteger_t3204170028 * value)
	{
		___d_6 = value;
		Il2CppCodeGenWriteBarrier((&___d_6), value);
	}

	inline static int32_t get_offset_of_p_7() { return static_cast<int32_t>(offsetof(RSAManaged_t3958925716, ___p_7)); }
	inline BigInteger_t3204170028 * get_p_7() const { return ___p_7; }
	inline BigInteger_t3204170028 ** get_address_of_p_7() { return &___p_7; }
	inline void set_p_7(BigInteger_t3204170028 * value)
	{
		___p_7 = value;
		Il2CppCodeGenWriteBarrier((&___p_7), value);
	}

	inline static int32_t get_offset_of_q_8() { return static_cast<int32_t>(offsetof(RSAManaged_t3958925716, ___q_8)); }
	inline BigInteger_t3204170028 * get_q_8() const { return ___q_8; }
	inline BigInteger_t3204170028 ** get_address_of_q_8() { return &___q_8; }
	inline void set_q_8(BigInteger_t3204170028 * value)
	{
		___q_8 = value;
		Il2CppCodeGenWriteBarrier((&___q_8), value);
	}

	inline static int32_t get_offset_of_dp_9() { return static_cast<int32_t>(offsetof(RSAManaged_t3958925716, ___dp_9)); }
	inline BigInteger_t3204170028 * get_dp_9() const { return ___dp_9; }
	inline BigInteger_t3204170028 ** get_address_of_dp_9() { return &___dp_9; }
	inline void set_dp_9(BigInteger_t3204170028 * value)
	{
		___dp_9 = value;
		Il2CppCodeGenWriteBarrier((&___dp_9), value);
	}

	inline static int32_t get_offset_of_dq_10() { return static_cast<int32_t>(offsetof(RSAManaged_t3958925716, ___dq_10)); }
	inline BigInteger_t3204170028 * get_dq_10() const { return ___dq_10; }
	inline BigInteger_t3204170028 ** get_address_of_dq_10() { return &___dq_10; }
	inline void set_dq_10(BigInteger_t3204170028 * value)
	{
		___dq_10 = value;
		Il2CppCodeGenWriteBarrier((&___dq_10), value);
	}

	inline static int32_t get_offset_of_qInv_11() { return static_cast<int32_t>(offsetof(RSAManaged_t3958925716, ___qInv_11)); }
	inline BigInteger_t3204170028 * get_qInv_11() const { return ___qInv_11; }
	inline BigInteger_t3204170028 ** get_address_of_qInv_11() { return &___qInv_11; }
	inline void set_qInv_11(BigInteger_t3204170028 * value)
	{
		___qInv_11 = value;
		Il2CppCodeGenWriteBarrier((&___qInv_11), value);
	}

	inline static int32_t get_offset_of_n_12() { return static_cast<int32_t>(offsetof(RSAManaged_t3958925716, ___n_12)); }
	inline BigInteger_t3204170028 * get_n_12() const { return ___n_12; }
	inline BigInteger_t3204170028 ** get_address_of_n_12() { return &___n_12; }
	inline void set_n_12(BigInteger_t3204170028 * value)
	{
		___n_12 = value;
		Il2CppCodeGenWriteBarrier((&___n_12), value);
	}

	inline static int32_t get_offset_of_e_13() { return static_cast<int32_t>(offsetof(RSAManaged_t3958925716, ___e_13)); }
	inline BigInteger_t3204170028 * get_e_13() const { return ___e_13; }
	inline BigInteger_t3204170028 ** get_address_of_e_13() { return &___e_13; }
	inline void set_e_13(BigInteger_t3204170028 * value)
	{
		___e_13 = value;
		Il2CppCodeGenWriteBarrier((&___e_13), value);
	}

	inline static int32_t get_offset_of_KeyGenerated_14() { return static_cast<int32_t>(offsetof(RSAManaged_t3958925716, ___KeyGenerated_14)); }
	inline KeyGeneratedEventHandler_t601819501 * get_KeyGenerated_14() const { return ___KeyGenerated_14; }
	inline KeyGeneratedEventHandler_t601819501 ** get_address_of_KeyGenerated_14() { return &___KeyGenerated_14; }
	inline void set_KeyGenerated_14(KeyGeneratedEventHandler_t601819501 * value)
	{
		___KeyGenerated_14 = value;
		Il2CppCodeGenWriteBarrier((&___KeyGenerated_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAMANAGED_T3958925716_H
#ifndef STACKOVERFLOWEXCEPTION_T716485382_H
#define STACKOVERFLOWEXCEPTION_T716485382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StackOverflowException
struct  StackOverflowException_t716485382  : public SystemException_t2923610502
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKOVERFLOWEXCEPTION_T716485382_H
#ifndef DATETIMEKIND_T1947787963_H
#define DATETIMEKIND_T1947787963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t1947787963 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t1947787963, ___value___1)); }
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
#endif // DATETIMEKIND_T1947787963_H
#ifndef SIGN_T3531260297_H
#define SIGN_T3531260297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Sign
struct  Sign_t3531260297 
{
public:
	// System.Int32 Mono.Math.BigInteger/Sign::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Sign_t3531260297, ___value___1)); }
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
#endif // SIGN_T3531260297_H
#ifndef CONFIDENCEFACTOR_T2561855851_H
#define CONFIDENCEFACTOR_T2561855851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t2561855851 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t2561855851, ___value___1)); }
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
#endif // CONFIDENCEFACTOR_T2561855851_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3518647784_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3518647784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3518647784  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$56 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU2456_t2611702527  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU2424_t2381117128  ___U24U24fieldU2D1_1;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU2424_t2381117128  ___U24U24fieldU2D2_2;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU2424_t2381117128  ___U24U24fieldU2D3_3;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU2424_t2381117128  ___U24U24fieldU2D4_4;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU2416_t670941652  ___U24U24fieldU2D5_5;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU2416_t670941652  ___U24U24fieldU2D6_6;
	// <PrivateImplementationDetails>/$ArrayType$3132 <PrivateImplementationDetails>::$$field-15
	U24ArrayTypeU243132_t2623977881  ___U24U24fieldU2D15_7;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-16
	U24ArrayTypeU2420_t2856031853  ___U24U24fieldU2D16_8;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-17
	U24ArrayTypeU2432_t1297477410  ___U24U24fieldU2D17_9;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-18
	U24ArrayTypeU2448_t2988351476  ___U24U24fieldU2D18_10;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-19
	U24ArrayTypeU2464_t1627758979  ___U24U24fieldU2D19_11;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-20
	U24ArrayTypeU2464_t1627758979  ___U24U24fieldU2D20_12;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-21
	U24ArrayTypeU2464_t1627758979  ___U24U24fieldU2D21_13;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-22
	U24ArrayTypeU2464_t1627758979  ___U24U24fieldU2D22_14;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-23
	U24ArrayTypeU2412_t1548214979  ___U24U24fieldU2D23_15;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-24
	U24ArrayTypeU2412_t1548214979  ___U24U24fieldU2D24_16;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-25
	U24ArrayTypeU2412_t1548214979  ___U24U24fieldU2D25_17;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-26
	U24ArrayTypeU2416_t670941652  ___U24U24fieldU2D26_18;
	// <PrivateImplementationDetails>/$ArrayType$136 <PrivateImplementationDetails>::$$field-27
	U24ArrayTypeU24136_t1283388247  ___U24U24fieldU2D27_19;
	// <PrivateImplementationDetails>/$ArrayType$72 <PrivateImplementationDetails>::$$field-30
	U24ArrayTypeU2472_t157471073  ___U24U24fieldU2D30_20;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-31
	U24ArrayTypeU248_t1650198573  ___U24U24fieldU2D31_21;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-32
	U24ArrayTypeU2420_t2856031853  ___U24U24fieldU2D32_22;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-33
	U24ArrayTypeU2464_t1627758979  ___U24U24fieldU2D33_23;
	// <PrivateImplementationDetails>/$ArrayType$124 <PrivateImplementationDetails>::$$field-34
	U24ArrayTypeU24124_t761950804  ___U24U24fieldU2D34_24;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-35
	U24ArrayTypeU2432_t1297477410  ___U24U24fieldU2D35_25;
	// <PrivateImplementationDetails>/$ArrayType$96 <PrivateImplementationDetails>::$$field-36
	U24ArrayTypeU2496_t1404721456  ___U24U24fieldU2D36_26;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-37
	U24ArrayTypeU242048_t3807678207  ___U24U24fieldU2D37_27;
	// <PrivateImplementationDetails>/$ArrayType$56 <PrivateImplementationDetails>::$$field-38
	U24ArrayTypeU2456_t2611702527  ___U24U24fieldU2D38_28;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-39
	U24ArrayTypeU2416_t670941652  ___U24U24fieldU2D39_29;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-40
	U24ArrayTypeU2448_t2988351476  ___U24U24fieldU2D40_30;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-41
	U24ArrayTypeU242048_t3807678207  ___U24U24fieldU2D41_31;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-42
	U24ArrayTypeU242048_t3807678207  ___U24U24fieldU2D42_32;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-43
	U24ArrayTypeU24256_t3819817495  ___U24U24fieldU2D43_33;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-44
	U24ArrayTypeU24256_t3819817495  ___U24U24fieldU2D44_34;
	// <PrivateImplementationDetails>/$ArrayType$120 <PrivateImplementationDetails>::$$field-45
	U24ArrayTypeU24120_t3821071721  ___U24U24fieldU2D45_35;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-46
	U24ArrayTypeU24256_t3819817495  ___U24U24fieldU2D46_36;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-47
	U24ArrayTypeU24256_t3819817495  ___U24U24fieldU2D47_37;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-48
	U24ArrayTypeU241024_t2337138493  ___U24U24fieldU2D48_38;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-49
	U24ArrayTypeU241024_t2337138493  ___U24U24fieldU2D49_39;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-50
	U24ArrayTypeU241024_t2337138493  ___U24U24fieldU2D50_40;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-51
	U24ArrayTypeU241024_t2337138493  ___U24U24fieldU2D51_41;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-52
	U24ArrayTypeU241024_t2337138493  ___U24U24fieldU2D52_42;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-53
	U24ArrayTypeU241024_t2337138493  ___U24U24fieldU2D53_43;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-54
	U24ArrayTypeU241024_t2337138493  ___U24U24fieldU2D54_44;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-55
	U24ArrayTypeU241024_t2337138493  ___U24U24fieldU2D55_45;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-56
	U24ArrayTypeU24256_t3819817495  ___U24U24fieldU2D56_46;
	// <PrivateImplementationDetails>/$ArrayType$640 <PrivateImplementationDetails>::$$field-57
	U24ArrayTypeU24640_t797511095  ___U24U24fieldU2D57_47;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-60
	U24ArrayTypeU2412_t1548214979  ___U24U24fieldU2D60_48;
	// <PrivateImplementationDetails>/$ArrayType$128 <PrivateImplementationDetails>::$$field-62
	U24ArrayTypeU24128_t3381039606  ___U24U24fieldU2D62_49;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-63
	U24ArrayTypeU24256_t3819817495  ___U24U24fieldU2D63_50;
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-64
	U24ArrayTypeU2452_t3781238388  ___U24U24fieldU2D64_51;
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-65
	U24ArrayTypeU2452_t3781238388  ___U24U24fieldU2D65_52;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU2456_t2611702527  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU2456_t2611702527 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU2456_t2611702527  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D1_1)); }
	inline U24ArrayTypeU2424_t2381117128  get_U24U24fieldU2D1_1() const { return ___U24U24fieldU2D1_1; }
	inline U24ArrayTypeU2424_t2381117128 * get_address_of_U24U24fieldU2D1_1() { return &___U24U24fieldU2D1_1; }
	inline void set_U24U24fieldU2D1_1(U24ArrayTypeU2424_t2381117128  value)
	{
		___U24U24fieldU2D1_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D2_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D2_2)); }
	inline U24ArrayTypeU2424_t2381117128  get_U24U24fieldU2D2_2() const { return ___U24U24fieldU2D2_2; }
	inline U24ArrayTypeU2424_t2381117128 * get_address_of_U24U24fieldU2D2_2() { return &___U24U24fieldU2D2_2; }
	inline void set_U24U24fieldU2D2_2(U24ArrayTypeU2424_t2381117128  value)
	{
		___U24U24fieldU2D2_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D3_3)); }
	inline U24ArrayTypeU2424_t2381117128  get_U24U24fieldU2D3_3() const { return ___U24U24fieldU2D3_3; }
	inline U24ArrayTypeU2424_t2381117128 * get_address_of_U24U24fieldU2D3_3() { return &___U24U24fieldU2D3_3; }
	inline void set_U24U24fieldU2D3_3(U24ArrayTypeU2424_t2381117128  value)
	{
		___U24U24fieldU2D3_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D4_4)); }
	inline U24ArrayTypeU2424_t2381117128  get_U24U24fieldU2D4_4() const { return ___U24U24fieldU2D4_4; }
	inline U24ArrayTypeU2424_t2381117128 * get_address_of_U24U24fieldU2D4_4() { return &___U24U24fieldU2D4_4; }
	inline void set_U24U24fieldU2D4_4(U24ArrayTypeU2424_t2381117128  value)
	{
		___U24U24fieldU2D4_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D5_5)); }
	inline U24ArrayTypeU2416_t670941652  get_U24U24fieldU2D5_5() const { return ___U24U24fieldU2D5_5; }
	inline U24ArrayTypeU2416_t670941652 * get_address_of_U24U24fieldU2D5_5() { return &___U24U24fieldU2D5_5; }
	inline void set_U24U24fieldU2D5_5(U24ArrayTypeU2416_t670941652  value)
	{
		___U24U24fieldU2D5_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D6_6)); }
	inline U24ArrayTypeU2416_t670941652  get_U24U24fieldU2D6_6() const { return ___U24U24fieldU2D6_6; }
	inline U24ArrayTypeU2416_t670941652 * get_address_of_U24U24fieldU2D6_6() { return &___U24U24fieldU2D6_6; }
	inline void set_U24U24fieldU2D6_6(U24ArrayTypeU2416_t670941652  value)
	{
		___U24U24fieldU2D6_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D15_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D15_7)); }
	inline U24ArrayTypeU243132_t2623977881  get_U24U24fieldU2D15_7() const { return ___U24U24fieldU2D15_7; }
	inline U24ArrayTypeU243132_t2623977881 * get_address_of_U24U24fieldU2D15_7() { return &___U24U24fieldU2D15_7; }
	inline void set_U24U24fieldU2D15_7(U24ArrayTypeU243132_t2623977881  value)
	{
		___U24U24fieldU2D15_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D16_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D16_8)); }
	inline U24ArrayTypeU2420_t2856031853  get_U24U24fieldU2D16_8() const { return ___U24U24fieldU2D16_8; }
	inline U24ArrayTypeU2420_t2856031853 * get_address_of_U24U24fieldU2D16_8() { return &___U24U24fieldU2D16_8; }
	inline void set_U24U24fieldU2D16_8(U24ArrayTypeU2420_t2856031853  value)
	{
		___U24U24fieldU2D16_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D17_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D17_9)); }
	inline U24ArrayTypeU2432_t1297477410  get_U24U24fieldU2D17_9() const { return ___U24U24fieldU2D17_9; }
	inline U24ArrayTypeU2432_t1297477410 * get_address_of_U24U24fieldU2D17_9() { return &___U24U24fieldU2D17_9; }
	inline void set_U24U24fieldU2D17_9(U24ArrayTypeU2432_t1297477410  value)
	{
		___U24U24fieldU2D17_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D18_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D18_10)); }
	inline U24ArrayTypeU2448_t2988351476  get_U24U24fieldU2D18_10() const { return ___U24U24fieldU2D18_10; }
	inline U24ArrayTypeU2448_t2988351476 * get_address_of_U24U24fieldU2D18_10() { return &___U24U24fieldU2D18_10; }
	inline void set_U24U24fieldU2D18_10(U24ArrayTypeU2448_t2988351476  value)
	{
		___U24U24fieldU2D18_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D19_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D19_11)); }
	inline U24ArrayTypeU2464_t1627758979  get_U24U24fieldU2D19_11() const { return ___U24U24fieldU2D19_11; }
	inline U24ArrayTypeU2464_t1627758979 * get_address_of_U24U24fieldU2D19_11() { return &___U24U24fieldU2D19_11; }
	inline void set_U24U24fieldU2D19_11(U24ArrayTypeU2464_t1627758979  value)
	{
		___U24U24fieldU2D19_11 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D20_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D20_12)); }
	inline U24ArrayTypeU2464_t1627758979  get_U24U24fieldU2D20_12() const { return ___U24U24fieldU2D20_12; }
	inline U24ArrayTypeU2464_t1627758979 * get_address_of_U24U24fieldU2D20_12() { return &___U24U24fieldU2D20_12; }
	inline void set_U24U24fieldU2D20_12(U24ArrayTypeU2464_t1627758979  value)
	{
		___U24U24fieldU2D20_12 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D21_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D21_13)); }
	inline U24ArrayTypeU2464_t1627758979  get_U24U24fieldU2D21_13() const { return ___U24U24fieldU2D21_13; }
	inline U24ArrayTypeU2464_t1627758979 * get_address_of_U24U24fieldU2D21_13() { return &___U24U24fieldU2D21_13; }
	inline void set_U24U24fieldU2D21_13(U24ArrayTypeU2464_t1627758979  value)
	{
		___U24U24fieldU2D21_13 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D22_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D22_14)); }
	inline U24ArrayTypeU2464_t1627758979  get_U24U24fieldU2D22_14() const { return ___U24U24fieldU2D22_14; }
	inline U24ArrayTypeU2464_t1627758979 * get_address_of_U24U24fieldU2D22_14() { return &___U24U24fieldU2D22_14; }
	inline void set_U24U24fieldU2D22_14(U24ArrayTypeU2464_t1627758979  value)
	{
		___U24U24fieldU2D22_14 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D23_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D23_15)); }
	inline U24ArrayTypeU2412_t1548214979  get_U24U24fieldU2D23_15() const { return ___U24U24fieldU2D23_15; }
	inline U24ArrayTypeU2412_t1548214979 * get_address_of_U24U24fieldU2D23_15() { return &___U24U24fieldU2D23_15; }
	inline void set_U24U24fieldU2D23_15(U24ArrayTypeU2412_t1548214979  value)
	{
		___U24U24fieldU2D23_15 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D24_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D24_16)); }
	inline U24ArrayTypeU2412_t1548214979  get_U24U24fieldU2D24_16() const { return ___U24U24fieldU2D24_16; }
	inline U24ArrayTypeU2412_t1548214979 * get_address_of_U24U24fieldU2D24_16() { return &___U24U24fieldU2D24_16; }
	inline void set_U24U24fieldU2D24_16(U24ArrayTypeU2412_t1548214979  value)
	{
		___U24U24fieldU2D24_16 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D25_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D25_17)); }
	inline U24ArrayTypeU2412_t1548214979  get_U24U24fieldU2D25_17() const { return ___U24U24fieldU2D25_17; }
	inline U24ArrayTypeU2412_t1548214979 * get_address_of_U24U24fieldU2D25_17() { return &___U24U24fieldU2D25_17; }
	inline void set_U24U24fieldU2D25_17(U24ArrayTypeU2412_t1548214979  value)
	{
		___U24U24fieldU2D25_17 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D26_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D26_18)); }
	inline U24ArrayTypeU2416_t670941652  get_U24U24fieldU2D26_18() const { return ___U24U24fieldU2D26_18; }
	inline U24ArrayTypeU2416_t670941652 * get_address_of_U24U24fieldU2D26_18() { return &___U24U24fieldU2D26_18; }
	inline void set_U24U24fieldU2D26_18(U24ArrayTypeU2416_t670941652  value)
	{
		___U24U24fieldU2D26_18 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D27_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D27_19)); }
	inline U24ArrayTypeU24136_t1283388247  get_U24U24fieldU2D27_19() const { return ___U24U24fieldU2D27_19; }
	inline U24ArrayTypeU24136_t1283388247 * get_address_of_U24U24fieldU2D27_19() { return &___U24U24fieldU2D27_19; }
	inline void set_U24U24fieldU2D27_19(U24ArrayTypeU24136_t1283388247  value)
	{
		___U24U24fieldU2D27_19 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D30_20() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D30_20)); }
	inline U24ArrayTypeU2472_t157471073  get_U24U24fieldU2D30_20() const { return ___U24U24fieldU2D30_20; }
	inline U24ArrayTypeU2472_t157471073 * get_address_of_U24U24fieldU2D30_20() { return &___U24U24fieldU2D30_20; }
	inline void set_U24U24fieldU2D30_20(U24ArrayTypeU2472_t157471073  value)
	{
		___U24U24fieldU2D30_20 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D31_21() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D31_21)); }
	inline U24ArrayTypeU248_t1650198573  get_U24U24fieldU2D31_21() const { return ___U24U24fieldU2D31_21; }
	inline U24ArrayTypeU248_t1650198573 * get_address_of_U24U24fieldU2D31_21() { return &___U24U24fieldU2D31_21; }
	inline void set_U24U24fieldU2D31_21(U24ArrayTypeU248_t1650198573  value)
	{
		___U24U24fieldU2D31_21 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D32_22() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D32_22)); }
	inline U24ArrayTypeU2420_t2856031853  get_U24U24fieldU2D32_22() const { return ___U24U24fieldU2D32_22; }
	inline U24ArrayTypeU2420_t2856031853 * get_address_of_U24U24fieldU2D32_22() { return &___U24U24fieldU2D32_22; }
	inline void set_U24U24fieldU2D32_22(U24ArrayTypeU2420_t2856031853  value)
	{
		___U24U24fieldU2D32_22 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D33_23() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D33_23)); }
	inline U24ArrayTypeU2464_t1627758979  get_U24U24fieldU2D33_23() const { return ___U24U24fieldU2D33_23; }
	inline U24ArrayTypeU2464_t1627758979 * get_address_of_U24U24fieldU2D33_23() { return &___U24U24fieldU2D33_23; }
	inline void set_U24U24fieldU2D33_23(U24ArrayTypeU2464_t1627758979  value)
	{
		___U24U24fieldU2D33_23 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D34_24() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D34_24)); }
	inline U24ArrayTypeU24124_t761950804  get_U24U24fieldU2D34_24() const { return ___U24U24fieldU2D34_24; }
	inline U24ArrayTypeU24124_t761950804 * get_address_of_U24U24fieldU2D34_24() { return &___U24U24fieldU2D34_24; }
	inline void set_U24U24fieldU2D34_24(U24ArrayTypeU24124_t761950804  value)
	{
		___U24U24fieldU2D34_24 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D35_25() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D35_25)); }
	inline U24ArrayTypeU2432_t1297477410  get_U24U24fieldU2D35_25() const { return ___U24U24fieldU2D35_25; }
	inline U24ArrayTypeU2432_t1297477410 * get_address_of_U24U24fieldU2D35_25() { return &___U24U24fieldU2D35_25; }
	inline void set_U24U24fieldU2D35_25(U24ArrayTypeU2432_t1297477410  value)
	{
		___U24U24fieldU2D35_25 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D36_26() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D36_26)); }
	inline U24ArrayTypeU2496_t1404721456  get_U24U24fieldU2D36_26() const { return ___U24U24fieldU2D36_26; }
	inline U24ArrayTypeU2496_t1404721456 * get_address_of_U24U24fieldU2D36_26() { return &___U24U24fieldU2D36_26; }
	inline void set_U24U24fieldU2D36_26(U24ArrayTypeU2496_t1404721456  value)
	{
		___U24U24fieldU2D36_26 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D37_27() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D37_27)); }
	inline U24ArrayTypeU242048_t3807678207  get_U24U24fieldU2D37_27() const { return ___U24U24fieldU2D37_27; }
	inline U24ArrayTypeU242048_t3807678207 * get_address_of_U24U24fieldU2D37_27() { return &___U24U24fieldU2D37_27; }
	inline void set_U24U24fieldU2D37_27(U24ArrayTypeU242048_t3807678207  value)
	{
		___U24U24fieldU2D37_27 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D38_28() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D38_28)); }
	inline U24ArrayTypeU2456_t2611702527  get_U24U24fieldU2D38_28() const { return ___U24U24fieldU2D38_28; }
	inline U24ArrayTypeU2456_t2611702527 * get_address_of_U24U24fieldU2D38_28() { return &___U24U24fieldU2D38_28; }
	inline void set_U24U24fieldU2D38_28(U24ArrayTypeU2456_t2611702527  value)
	{
		___U24U24fieldU2D38_28 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D39_29() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D39_29)); }
	inline U24ArrayTypeU2416_t670941652  get_U24U24fieldU2D39_29() const { return ___U24U24fieldU2D39_29; }
	inline U24ArrayTypeU2416_t670941652 * get_address_of_U24U24fieldU2D39_29() { return &___U24U24fieldU2D39_29; }
	inline void set_U24U24fieldU2D39_29(U24ArrayTypeU2416_t670941652  value)
	{
		___U24U24fieldU2D39_29 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D40_30() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D40_30)); }
	inline U24ArrayTypeU2448_t2988351476  get_U24U24fieldU2D40_30() const { return ___U24U24fieldU2D40_30; }
	inline U24ArrayTypeU2448_t2988351476 * get_address_of_U24U24fieldU2D40_30() { return &___U24U24fieldU2D40_30; }
	inline void set_U24U24fieldU2D40_30(U24ArrayTypeU2448_t2988351476  value)
	{
		___U24U24fieldU2D40_30 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D41_31() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D41_31)); }
	inline U24ArrayTypeU242048_t3807678207  get_U24U24fieldU2D41_31() const { return ___U24U24fieldU2D41_31; }
	inline U24ArrayTypeU242048_t3807678207 * get_address_of_U24U24fieldU2D41_31() { return &___U24U24fieldU2D41_31; }
	inline void set_U24U24fieldU2D41_31(U24ArrayTypeU242048_t3807678207  value)
	{
		___U24U24fieldU2D41_31 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D42_32() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D42_32)); }
	inline U24ArrayTypeU242048_t3807678207  get_U24U24fieldU2D42_32() const { return ___U24U24fieldU2D42_32; }
	inline U24ArrayTypeU242048_t3807678207 * get_address_of_U24U24fieldU2D42_32() { return &___U24U24fieldU2D42_32; }
	inline void set_U24U24fieldU2D42_32(U24ArrayTypeU242048_t3807678207  value)
	{
		___U24U24fieldU2D42_32 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D43_33() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D43_33)); }
	inline U24ArrayTypeU24256_t3819817495  get_U24U24fieldU2D43_33() const { return ___U24U24fieldU2D43_33; }
	inline U24ArrayTypeU24256_t3819817495 * get_address_of_U24U24fieldU2D43_33() { return &___U24U24fieldU2D43_33; }
	inline void set_U24U24fieldU2D43_33(U24ArrayTypeU24256_t3819817495  value)
	{
		___U24U24fieldU2D43_33 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D44_34() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D44_34)); }
	inline U24ArrayTypeU24256_t3819817495  get_U24U24fieldU2D44_34() const { return ___U24U24fieldU2D44_34; }
	inline U24ArrayTypeU24256_t3819817495 * get_address_of_U24U24fieldU2D44_34() { return &___U24U24fieldU2D44_34; }
	inline void set_U24U24fieldU2D44_34(U24ArrayTypeU24256_t3819817495  value)
	{
		___U24U24fieldU2D44_34 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D45_35() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D45_35)); }
	inline U24ArrayTypeU24120_t3821071721  get_U24U24fieldU2D45_35() const { return ___U24U24fieldU2D45_35; }
	inline U24ArrayTypeU24120_t3821071721 * get_address_of_U24U24fieldU2D45_35() { return &___U24U24fieldU2D45_35; }
	inline void set_U24U24fieldU2D45_35(U24ArrayTypeU24120_t3821071721  value)
	{
		___U24U24fieldU2D45_35 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D46_36() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D46_36)); }
	inline U24ArrayTypeU24256_t3819817495  get_U24U24fieldU2D46_36() const { return ___U24U24fieldU2D46_36; }
	inline U24ArrayTypeU24256_t3819817495 * get_address_of_U24U24fieldU2D46_36() { return &___U24U24fieldU2D46_36; }
	inline void set_U24U24fieldU2D46_36(U24ArrayTypeU24256_t3819817495  value)
	{
		___U24U24fieldU2D46_36 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D47_37() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D47_37)); }
	inline U24ArrayTypeU24256_t3819817495  get_U24U24fieldU2D47_37() const { return ___U24U24fieldU2D47_37; }
	inline U24ArrayTypeU24256_t3819817495 * get_address_of_U24U24fieldU2D47_37() { return &___U24U24fieldU2D47_37; }
	inline void set_U24U24fieldU2D47_37(U24ArrayTypeU24256_t3819817495  value)
	{
		___U24U24fieldU2D47_37 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D48_38() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D48_38)); }
	inline U24ArrayTypeU241024_t2337138493  get_U24U24fieldU2D48_38() const { return ___U24U24fieldU2D48_38; }
	inline U24ArrayTypeU241024_t2337138493 * get_address_of_U24U24fieldU2D48_38() { return &___U24U24fieldU2D48_38; }
	inline void set_U24U24fieldU2D48_38(U24ArrayTypeU241024_t2337138493  value)
	{
		___U24U24fieldU2D48_38 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D49_39() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D49_39)); }
	inline U24ArrayTypeU241024_t2337138493  get_U24U24fieldU2D49_39() const { return ___U24U24fieldU2D49_39; }
	inline U24ArrayTypeU241024_t2337138493 * get_address_of_U24U24fieldU2D49_39() { return &___U24U24fieldU2D49_39; }
	inline void set_U24U24fieldU2D49_39(U24ArrayTypeU241024_t2337138493  value)
	{
		___U24U24fieldU2D49_39 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D50_40() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D50_40)); }
	inline U24ArrayTypeU241024_t2337138493  get_U24U24fieldU2D50_40() const { return ___U24U24fieldU2D50_40; }
	inline U24ArrayTypeU241024_t2337138493 * get_address_of_U24U24fieldU2D50_40() { return &___U24U24fieldU2D50_40; }
	inline void set_U24U24fieldU2D50_40(U24ArrayTypeU241024_t2337138493  value)
	{
		___U24U24fieldU2D50_40 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D51_41() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D51_41)); }
	inline U24ArrayTypeU241024_t2337138493  get_U24U24fieldU2D51_41() const { return ___U24U24fieldU2D51_41; }
	inline U24ArrayTypeU241024_t2337138493 * get_address_of_U24U24fieldU2D51_41() { return &___U24U24fieldU2D51_41; }
	inline void set_U24U24fieldU2D51_41(U24ArrayTypeU241024_t2337138493  value)
	{
		___U24U24fieldU2D51_41 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D52_42() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D52_42)); }
	inline U24ArrayTypeU241024_t2337138493  get_U24U24fieldU2D52_42() const { return ___U24U24fieldU2D52_42; }
	inline U24ArrayTypeU241024_t2337138493 * get_address_of_U24U24fieldU2D52_42() { return &___U24U24fieldU2D52_42; }
	inline void set_U24U24fieldU2D52_42(U24ArrayTypeU241024_t2337138493  value)
	{
		___U24U24fieldU2D52_42 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D53_43() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D53_43)); }
	inline U24ArrayTypeU241024_t2337138493  get_U24U24fieldU2D53_43() const { return ___U24U24fieldU2D53_43; }
	inline U24ArrayTypeU241024_t2337138493 * get_address_of_U24U24fieldU2D53_43() { return &___U24U24fieldU2D53_43; }
	inline void set_U24U24fieldU2D53_43(U24ArrayTypeU241024_t2337138493  value)
	{
		___U24U24fieldU2D53_43 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D54_44() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D54_44)); }
	inline U24ArrayTypeU241024_t2337138493  get_U24U24fieldU2D54_44() const { return ___U24U24fieldU2D54_44; }
	inline U24ArrayTypeU241024_t2337138493 * get_address_of_U24U24fieldU2D54_44() { return &___U24U24fieldU2D54_44; }
	inline void set_U24U24fieldU2D54_44(U24ArrayTypeU241024_t2337138493  value)
	{
		___U24U24fieldU2D54_44 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D55_45() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D55_45)); }
	inline U24ArrayTypeU241024_t2337138493  get_U24U24fieldU2D55_45() const { return ___U24U24fieldU2D55_45; }
	inline U24ArrayTypeU241024_t2337138493 * get_address_of_U24U24fieldU2D55_45() { return &___U24U24fieldU2D55_45; }
	inline void set_U24U24fieldU2D55_45(U24ArrayTypeU241024_t2337138493  value)
	{
		___U24U24fieldU2D55_45 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D56_46() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D56_46)); }
	inline U24ArrayTypeU24256_t3819817495  get_U24U24fieldU2D56_46() const { return ___U24U24fieldU2D56_46; }
	inline U24ArrayTypeU24256_t3819817495 * get_address_of_U24U24fieldU2D56_46() { return &___U24U24fieldU2D56_46; }
	inline void set_U24U24fieldU2D56_46(U24ArrayTypeU24256_t3819817495  value)
	{
		___U24U24fieldU2D56_46 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D57_47() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D57_47)); }
	inline U24ArrayTypeU24640_t797511095  get_U24U24fieldU2D57_47() const { return ___U24U24fieldU2D57_47; }
	inline U24ArrayTypeU24640_t797511095 * get_address_of_U24U24fieldU2D57_47() { return &___U24U24fieldU2D57_47; }
	inline void set_U24U24fieldU2D57_47(U24ArrayTypeU24640_t797511095  value)
	{
		___U24U24fieldU2D57_47 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D60_48() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D60_48)); }
	inline U24ArrayTypeU2412_t1548214979  get_U24U24fieldU2D60_48() const { return ___U24U24fieldU2D60_48; }
	inline U24ArrayTypeU2412_t1548214979 * get_address_of_U24U24fieldU2D60_48() { return &___U24U24fieldU2D60_48; }
	inline void set_U24U24fieldU2D60_48(U24ArrayTypeU2412_t1548214979  value)
	{
		___U24U24fieldU2D60_48 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D62_49() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D62_49)); }
	inline U24ArrayTypeU24128_t3381039606  get_U24U24fieldU2D62_49() const { return ___U24U24fieldU2D62_49; }
	inline U24ArrayTypeU24128_t3381039606 * get_address_of_U24U24fieldU2D62_49() { return &___U24U24fieldU2D62_49; }
	inline void set_U24U24fieldU2D62_49(U24ArrayTypeU24128_t3381039606  value)
	{
		___U24U24fieldU2D62_49 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D63_50() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D63_50)); }
	inline U24ArrayTypeU24256_t3819817495  get_U24U24fieldU2D63_50() const { return ___U24U24fieldU2D63_50; }
	inline U24ArrayTypeU24256_t3819817495 * get_address_of_U24U24fieldU2D63_50() { return &___U24U24fieldU2D63_50; }
	inline void set_U24U24fieldU2D63_50(U24ArrayTypeU24256_t3819817495  value)
	{
		___U24U24fieldU2D63_50 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D64_51() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D64_51)); }
	inline U24ArrayTypeU2452_t3781238388  get_U24U24fieldU2D64_51() const { return ___U24U24fieldU2D64_51; }
	inline U24ArrayTypeU2452_t3781238388 * get_address_of_U24U24fieldU2D64_51() { return &___U24U24fieldU2D64_51; }
	inline void set_U24U24fieldU2D64_51(U24ArrayTypeU2452_t3781238388  value)
	{
		___U24U24fieldU2D64_51 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D65_52() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields, ___U24U24fieldU2D65_52)); }
	inline U24ArrayTypeU2452_t3781238388  get_U24U24fieldU2D65_52() const { return ___U24U24fieldU2D65_52; }
	inline U24ArrayTypeU2452_t3781238388 * get_address_of_U24U24fieldU2D65_52() { return &___U24U24fieldU2D65_52; }
	inline void set_U24U24fieldU2D65_52(U24ArrayTypeU2452_t3781238388  value)
	{
		___U24U24fieldU2D65_52 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3518647784_H
#ifndef MD4MANAGED_T1265460611_H
#define MD4MANAGED_T1265460611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD4Managed
struct  MD4Managed_t1265460611  : public MD4_t2334591378
{
public:
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::state
	UInt32U5BU5D_t3359595894* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::buffer
	ByteU5BU5D_t466969305* ___buffer_5;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::count
	UInt32U5BU5D_t3359595894* ___count_6;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::x
	UInt32U5BU5D_t3359595894* ___x_7;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::digest
	ByteU5BU5D_t466969305* ___digest_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD4Managed_t1265460611, ___state_4)); }
	inline UInt32U5BU5D_t3359595894* get_state_4() const { return ___state_4; }
	inline UInt32U5BU5D_t3359595894** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(UInt32U5BU5D_t3359595894* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(MD4Managed_t1265460611, ___buffer_5)); }
	inline ByteU5BU5D_t466969305* get_buffer_5() const { return ___buffer_5; }
	inline ByteU5BU5D_t466969305** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(ByteU5BU5D_t466969305* value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_5), value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD4Managed_t1265460611, ___count_6)); }
	inline UInt32U5BU5D_t3359595894* get_count_6() const { return ___count_6; }
	inline UInt32U5BU5D_t3359595894** get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(UInt32U5BU5D_t3359595894* value)
	{
		___count_6 = value;
		Il2CppCodeGenWriteBarrier((&___count_6), value);
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(MD4Managed_t1265460611, ___x_7)); }
	inline UInt32U5BU5D_t3359595894* get_x_7() const { return ___x_7; }
	inline UInt32U5BU5D_t3359595894** get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(UInt32U5BU5D_t3359595894* value)
	{
		___x_7 = value;
		Il2CppCodeGenWriteBarrier((&___x_7), value);
	}

	inline static int32_t get_offset_of_digest_8() { return static_cast<int32_t>(offsetof(MD4Managed_t1265460611, ___digest_8)); }
	inline ByteU5BU5D_t466969305* get_digest_8() const { return ___digest_8; }
	inline ByteU5BU5D_t466969305** get_address_of_digest_8() { return &___digest_8; }
	inline void set_digest_8(ByteU5BU5D_t466969305* value)
	{
		___digest_8 = value;
		Il2CppCodeGenWriteBarrier((&___digest_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD4MANAGED_T1265460611_H
#ifndef MD2MANAGED_T898587445_H
#define MD2MANAGED_T898587445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD2Managed
struct  MD2Managed_t898587445  : public MD2_t592240490
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::state
	ByteU5BU5D_t466969305* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::checksum
	ByteU5BU5D_t466969305* ___checksum_5;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::buffer
	ByteU5BU5D_t466969305* ___buffer_6;
	// System.Int32 Mono.Security.Cryptography.MD2Managed::count
	int32_t ___count_7;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::x
	ByteU5BU5D_t466969305* ___x_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD2Managed_t898587445, ___state_4)); }
	inline ByteU5BU5D_t466969305* get_state_4() const { return ___state_4; }
	inline ByteU5BU5D_t466969305** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(ByteU5BU5D_t466969305* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_checksum_5() { return static_cast<int32_t>(offsetof(MD2Managed_t898587445, ___checksum_5)); }
	inline ByteU5BU5D_t466969305* get_checksum_5() const { return ___checksum_5; }
	inline ByteU5BU5D_t466969305** get_address_of_checksum_5() { return &___checksum_5; }
	inline void set_checksum_5(ByteU5BU5D_t466969305* value)
	{
		___checksum_5 = value;
		Il2CppCodeGenWriteBarrier((&___checksum_5), value);
	}

	inline static int32_t get_offset_of_buffer_6() { return static_cast<int32_t>(offsetof(MD2Managed_t898587445, ___buffer_6)); }
	inline ByteU5BU5D_t466969305* get_buffer_6() const { return ___buffer_6; }
	inline ByteU5BU5D_t466969305** get_address_of_buffer_6() { return &___buffer_6; }
	inline void set_buffer_6(ByteU5BU5D_t466969305* value)
	{
		___buffer_6 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_6), value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(MD2Managed_t898587445, ___count_7)); }
	inline int32_t get_count_7() const { return ___count_7; }
	inline int32_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(int32_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of_x_8() { return static_cast<int32_t>(offsetof(MD2Managed_t898587445, ___x_8)); }
	inline ByteU5BU5D_t466969305* get_x_8() const { return ___x_8; }
	inline ByteU5BU5D_t466969305** get_address_of_x_8() { return &___x_8; }
	inline void set_x_8(ByteU5BU5D_t466969305* value)
	{
		___x_8 = value;
		Il2CppCodeGenWriteBarrier((&___x_8), value);
	}
};

struct MD2Managed_t898587445_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::PI_SUBST
	ByteU5BU5D_t466969305* ___PI_SUBST_9;

public:
	inline static int32_t get_offset_of_PI_SUBST_9() { return static_cast<int32_t>(offsetof(MD2Managed_t898587445_StaticFields, ___PI_SUBST_9)); }
	inline ByteU5BU5D_t466969305* get_PI_SUBST_9() const { return ___PI_SUBST_9; }
	inline ByteU5BU5D_t466969305** get_address_of_PI_SUBST_9() { return &___PI_SUBST_9; }
	inline void set_PI_SUBST_9(ByteU5BU5D_t466969305* value)
	{
		___PI_SUBST_9 = value;
		Il2CppCodeGenWriteBarrier((&___PI_SUBST_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD2MANAGED_T898587445_H
#ifndef DATETIME_T766348057_H
#define DATETIME_T766348057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t766348057 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t3906350454  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t766348057, ___ticks_0)); }
	inline TimeSpan_t3906350454  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t3906350454 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t3906350454  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t766348057, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t766348057_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t766348057  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t766348057  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t3832122219* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t3832122219* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t3832122219* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t3832122219* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t3832122219* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t3832122219* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t3832122219* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t2679505748* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t2679505748* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t766348057_StaticFields, ___MaxValue_2)); }
	inline DateTime_t766348057  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t766348057 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t766348057  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t766348057_StaticFields, ___MinValue_3)); }
	inline DateTime_t766348057  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t766348057 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t766348057  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t766348057_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t3832122219* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t3832122219** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t3832122219* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t766348057_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t3832122219* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t3832122219** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t3832122219* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t766348057_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t3832122219* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t3832122219** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t3832122219* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t766348057_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t3832122219* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t3832122219** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t3832122219* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t766348057_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t3832122219* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t3832122219** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t3832122219* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t766348057_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t3832122219* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t3832122219** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t3832122219* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t766348057_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t3832122219* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t3832122219** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t3832122219* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t766348057_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t2679505748* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t2679505748** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t2679505748* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t766348057_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t2679505748* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t2679505748** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t2679505748* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t766348057_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t766348057_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T766348057_H
#ifndef UNITYSERIALIZATIONHOLDER_T2346370618_H
#define UNITYSERIALIZATIONHOLDER_T2346370618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder
struct  UnitySerializationHolder_t2346370618  : public RuntimeObject
{
public:
	// System.String System.UnitySerializationHolder::_data
	String_t* ____data_0;
	// System.UnitySerializationHolder/UnityType System.UnitySerializationHolder::_unityType
	uint8_t ____unityType_1;
	// System.String System.UnitySerializationHolder::_assemblyName
	String_t* ____assemblyName_2;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t2346370618, ____data_0)); }
	inline String_t* get__data_0() const { return ____data_0; }
	inline String_t** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(String_t* value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((&____data_0), value);
	}

	inline static int32_t get_offset_of__unityType_1() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t2346370618, ____unityType_1)); }
	inline uint8_t get__unityType_1() const { return ____unityType_1; }
	inline uint8_t* get_address_of__unityType_1() { return &____unityType_1; }
	inline void set__unityType_1(uint8_t value)
	{
		____unityType_1 = value;
	}

	inline static int32_t get_offset_of__assemblyName_2() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t2346370618, ____assemblyName_2)); }
	inline String_t* get__assemblyName_2() const { return ____assemblyName_2; }
	inline String_t** get_address_of__assemblyName_2() { return &____assemblyName_2; }
	inline void set__assemblyName_2(String_t* value)
	{
		____assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&____assemblyName_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSERIALIZATIONHOLDER_T2346370618_H
#ifndef SYMMETRICALGORITHM_T2111313755_H
#define SYMMETRICALGORITHM_T2111313755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t2111313755  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t466969305* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t466969305* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t1592115872* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t1592115872* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2111313755, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2111313755, ___IVValue_1)); }
	inline ByteU5BU5D_t466969305* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t466969305** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t466969305* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2111313755, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2111313755, ___KeyValue_3)); }
	inline ByteU5BU5D_t466969305* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t466969305** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t466969305* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2111313755, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t1592115872* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t1592115872** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t1592115872* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2111313755, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t1592115872* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t1592115872** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t1592115872* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2111313755, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2111313755, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2111313755, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2111313755, ___m_disposed_9)); }
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
#endif // SYMMETRICALGORITHM_T2111313755_H
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
#ifndef MODULERESOLVEEVENTHANDLER_T461565601_H
#define MODULERESOLVEEVENTHANDLER_T461565601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ModuleResolveEventHandler
struct  ModuleResolveEventHandler_t461565601  : public MulticastDelegate_t1463945573
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULERESOLVEEVENTHANDLER_T461565601_H
#ifndef UNHANDLEDEXCEPTIONEVENTHANDLER_T3725797814_H
#define UNHANDLEDEXCEPTIONEVENTHANDLER_T3725797814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventHandler
struct  UnhandledExceptionEventHandler_t3725797814  : public MulticastDelegate_t1463945573
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTHANDLER_T3725797814_H
#ifndef RESOLVEEVENTHANDLER_T3158981135_H
#define RESOLVEEVENTHANDLER_T3158981135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ResolveEventHandler
struct  ResolveEventHandler_t3158981135  : public MulticastDelegate_t1463945573
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTHANDLER_T3158981135_H
#ifndef EVENTHANDLER_T3532888589_H
#define EVENTHANDLER_T3532888589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler
struct  EventHandler_t3532888589  : public MulticastDelegate_t1463945573
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_T3532888589_H
#ifndef ASSEMBLYLOADEVENTHANDLER_T870470840_H
#define ASSEMBLYLOADEVENTHANDLER_T870470840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AssemblyLoadEventHandler
struct  AssemblyLoadEventHandler_t870470840  : public MulticastDelegate_t1463945573
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYLOADEVENTHANDLER_T870470840_H
#ifndef APPDOMAININITIALIZER_T346518984_H
#define APPDOMAININITIALIZER_T346518984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomainInitializer
struct  AppDomainInitializer_t346518984  : public MulticastDelegate_t1463945573
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAININITIALIZER_T346518984_H
#ifndef CROSSCONTEXTDELEGATE_T183510640_H
#define CROSSCONTEXTDELEGATE_T183510640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.CrossContextDelegate
struct  CrossContextDelegate_t183510640  : public MulticastDelegate_t1463945573
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSCONTEXTDELEGATE_T183510640_H
#ifndef RC4_T218152229_H
#define RC4_T218152229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RC4
struct  RC4_t218152229  : public SymmetricAlgorithm_t2111313755
{
public:

public:
};

struct RC4_t218152229_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalBlockSizes
	KeySizesU5BU5D_t1592115872* ___s_legalBlockSizes_10;
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalKeySizes
	KeySizesU5BU5D_t1592115872* ___s_legalKeySizes_11;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_10() { return static_cast<int32_t>(offsetof(RC4_t218152229_StaticFields, ___s_legalBlockSizes_10)); }
	inline KeySizesU5BU5D_t1592115872* get_s_legalBlockSizes_10() const { return ___s_legalBlockSizes_10; }
	inline KeySizesU5BU5D_t1592115872** get_address_of_s_legalBlockSizes_10() { return &___s_legalBlockSizes_10; }
	inline void set_s_legalBlockSizes_10(KeySizesU5BU5D_t1592115872* value)
	{
		___s_legalBlockSizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_10), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_11() { return static_cast<int32_t>(offsetof(RC4_t218152229_StaticFields, ___s_legalKeySizes_11)); }
	inline KeySizesU5BU5D_t1592115872* get_s_legalKeySizes_11() const { return ___s_legalKeySizes_11; }
	inline KeySizesU5BU5D_t1592115872** get_address_of_s_legalKeySizes_11() { return &___s_legalKeySizes_11; }
	inline void set_s_legalKeySizes_11(KeySizesU5BU5D_t1592115872* value)
	{
		___s_legalKeySizes_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC4_T218152229_H
#ifndef WAITCALLBACK_T1577453488_H
#define WAITCALLBACK_T1577453488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitCallback
struct  WaitCallback_t1577453488  : public MulticastDelegate_t1463945573
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITCALLBACK_T1577453488_H
#ifndef TIMERCALLBACK_T2615453784_H
#define TIMERCALLBACK_T2615453784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.TimerCallback
struct  TimerCallback_t2615453784  : public MulticastDelegate_t1463945573
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMERCALLBACK_T2615453784_H
#ifndef THREADSTART_T21365269_H
#define THREADSTART_T21365269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadStart
struct  ThreadStart_t21365269  : public MulticastDelegate_t1463945573
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTART_T21365269_H
#ifndef SENDORPOSTCALLBACK_T1416270015_H
#define SENDORPOSTCALLBACK_T1416270015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SendOrPostCallback
struct  SendOrPostCallback_t1416270015  : public MulticastDelegate_t1463945573
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDORPOSTCALLBACK_T1416270015_H
#ifndef X509CERTIFICATE_T2032595348_H
#define X509CERTIFICATE_T2032595348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Certificate
struct  X509Certificate_t2032595348  : public RuntimeObject
{
public:
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::decoder
	ASN1_t2224927521 * ___decoder_0;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_encodedcert
	ByteU5BU5D_t466969305* ___m_encodedcert_1;
	// System.DateTime Mono.Security.X509.X509Certificate::m_from
	DateTime_t766348057  ___m_from_2;
	// System.DateTime Mono.Security.X509.X509Certificate::m_until
	DateTime_t766348057  ___m_until_3;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::issuer
	ASN1_t2224927521 * ___issuer_4;
	// System.String Mono.Security.X509.X509Certificate::m_issuername
	String_t* ___m_issuername_5;
	// System.String Mono.Security.X509.X509Certificate::m_keyalgo
	String_t* ___m_keyalgo_6;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_keyalgoparams
	ByteU5BU5D_t466969305* ___m_keyalgoparams_7;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::subject
	ASN1_t2224927521 * ___subject_8;
	// System.String Mono.Security.X509.X509Certificate::m_subject
	String_t* ___m_subject_9;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_publickey
	ByteU5BU5D_t466969305* ___m_publickey_10;
	// System.Byte[] Mono.Security.X509.X509Certificate::signature
	ByteU5BU5D_t466969305* ___signature_11;
	// System.String Mono.Security.X509.X509Certificate::m_signaturealgo
	String_t* ___m_signaturealgo_12;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_signaturealgoparams
	ByteU5BU5D_t466969305* ___m_signaturealgoparams_13;
	// System.Byte[] Mono.Security.X509.X509Certificate::certhash
	ByteU5BU5D_t466969305* ___certhash_14;
	// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::_rsa
	RSA_t802230051 * ____rsa_15;
	// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::_dsa
	DSA_t2182086069 * ____dsa_16;
	// System.Int32 Mono.Security.X509.X509Certificate::version
	int32_t ___version_17;
	// System.Byte[] Mono.Security.X509.X509Certificate::serialnumber
	ByteU5BU5D_t466969305* ___serialnumber_18;
	// System.Byte[] Mono.Security.X509.X509Certificate::issuerUniqueID
	ByteU5BU5D_t466969305* ___issuerUniqueID_19;
	// System.Byte[] Mono.Security.X509.X509Certificate::subjectUniqueID
	ByteU5BU5D_t466969305* ___subjectUniqueID_20;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::extensions
	X509ExtensionCollection_t1850785610 * ___extensions_21;

public:
	inline static int32_t get_offset_of_decoder_0() { return static_cast<int32_t>(offsetof(X509Certificate_t2032595348, ___decoder_0)); }
	inline ASN1_t2224927521 * get_decoder_0() const { return ___decoder_0; }
	inline ASN1_t2224927521 ** get_address_of_decoder_0() { return &___decoder_0; }
	inline void set_decoder_0(ASN1_t2224927521 * value)
	{
		___decoder_0 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_0), value);
	}

	inline static int32_t get_offset_of_m_encodedcert_1() { return static_cast<int32_t>(offsetof(X509Certificate_t2032595348, ___m_encodedcert_1)); }
	inline ByteU5BU5D_t466969305* get_m_encodedcert_1() const { return ___m_encodedcert_1; }
	inline ByteU5BU5D_t466969305** get_address_of_m_encodedcert_1() { return &___m_encodedcert_1; }
	inline void set_m_encodedcert_1(ByteU5BU5D_t466969305* value)
	{
		___m_encodedcert_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_encodedcert_1), value);
	}

	inline static int32_t get_offset_of_m_from_2() { return static_cast<int32_t>(offsetof(X509Certificate_t2032595348, ___m_from_2)); }
	inline DateTime_t766348057  get_m_from_2() const { return ___m_from_2; }
	inline DateTime_t766348057 * get_address_of_m_from_2() { return &___m_from_2; }
	inline void set_m_from_2(DateTime_t766348057  value)
	{
		___m_from_2 = value;
	}

	inline static int32_t get_offset_of_m_until_3() { return static_cast<int32_t>(offsetof(X509Certificate_t2032595348, ___m_until_3)); }
	inline DateTime_t766348057  get_m_until_3() const { return ___m_until_3; }
	inline DateTime_t766348057 * get_address_of_m_until_3() { return &___m_until_3; }
	inline void set_m_until_3(DateTime_t766348057  value)
	{
		___m_until_3 = value;
	}

	inline static int32_t get_offset_of_issuer_4() { return static_cast<int32_t>(offsetof(X509Certificate_t2032595348, ___issuer_4)); }
	inline ASN1_t2224927521 * get_issuer_4() const { return ___issuer_4; }
	inline ASN1_t2224927521 ** get_address_of_issuer_4() { return &___issuer_4; }
	inline void set_issuer_4(ASN1_t2224927521 * value)
	{
		___issuer_4 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_4), value);
	}

	inline static int32_t get_offset_of_m_issuername_5() { return static_cast<int32_t>(offsetof(X509Certificate_t2032595348, ___m_issuername_5)); }
	inline String_t* get_m_issuername_5() const { return ___m_issuername_5; }
	inline String_t** get_address_of_m_issuername_5() { return &___m_issuername_5; }
	inline void set_m_issuername_5(String_t* value)
	{
		___m_issuername_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_issuername_5), value);
	}

	inline static int32_t get_offset_of_m_keyalgo_6() { return static_cast<int32_t>(offsetof(X509Certificate_t2032595348, ___m_keyalgo_6)); }
	inline String_t* get_m_keyalgo_6() const { return ___m_keyalgo_6; }
	inline String_t** get_address_of_m_keyalgo_6() { return &___m_keyalgo_6; }
	inline void set_m_keyalgo_6(String_t* value)
	{
		___m_keyalgo_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgo_6), value);
	}

	inline static int32_t get_offset_of_m_keyalgoparams_7() { return static_cast<int32_t>(offsetof(X509Certificate_t2032595348, ___m_keyalgoparams_7)); }
	inline ByteU5BU5D_t466969305* get_m_keyalgoparams_7() const { return ___m_keyalgoparams_7; }
	inline ByteU5BU5D_t466969305** get_address_of_m_keyalgoparams_7() { return &___m_keyalgoparams_7; }
	inline void set_m_keyalgoparams_7(ByteU5BU5D_t466969305* value)
	{
		___m_keyalgoparams_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgoparams_7), value);
	}

	inline static int32_t get_offset_of_subject_8() { return static_cast<int32_t>(offsetof(X509Certificate_t2032595348, ___subject_8)); }
	inline ASN1_t2224927521 * get_subject_8() const { return ___subject_8; }
	inline ASN1_t2224927521 ** get_address_of_subject_8() { return &___subject_8; }
	inline void set_subject_8(ASN1_t2224927521 * value)
	{
		___subject_8 = value;
		Il2CppCodeGenWriteBarrier((&___subject_8), value);
	}

	inline static int32_t get_offset_of_m_subject_9() { return static_cast<int32_t>(offsetof(X509Certificate_t2032595348, ___m_subject_9)); }
	inline String_t* get_m_subject_9() const { return ___m_subject_9; }
	inline String_t** get_address_of_m_subject_9() { return &___m_subject_9; }
	inline void set_m_subject_9(String_t* value)
	{
		___m_subject_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_subject_9), value);
	}

	inline static int32_t get_offset_of_m_publickey_10() { return static_cast<int32_t>(offsetof(X509Certificate_t2032595348, ___m_publickey_10)); }
	inline ByteU5BU5D_t466969305* get_m_publickey_10() const { return ___m_publickey_10; }
	inline ByteU5BU5D_t466969305** get_address_of_m_publickey_10() { return &___m_publickey_10; }
	inline void set_m_publickey_10(ByteU5BU5D_t466969305* value)
	{
		___m_publickey_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_publickey_10), value);
	}

	inline static int32_t get_offset_of_signature_11() { return static_cast<int32_t>(offsetof(X509Certificate_t2032595348, ___signature_11)); }
	inline ByteU5BU5D_t466969305* get_signature_11() const { return ___signature_11; }
	inline ByteU5BU5D_t466969305** get_address_of_signature_11() { return &___signature_11; }
	inline void set_signature_11(ByteU5BU5D_t466969305* value)
	{
		___signature_11 = value;
		Il2CppCodeGenWriteBarrier((&___signature_11), value);
	}

	inline static int32_t get_offset_of_m_signaturealgo_12() { return static_cast<int32_t>(offsetof(X509Certificate_t2032595348, ___m_signaturealgo_12)); }
	inline String_t* get_m_signaturealgo_12() const { return ___m_signaturealgo_12; }
	inline String_t** get_address_of_m_signaturealgo_12() { return &___m_signaturealgo_12; }
	inline void set_m_signaturealgo_12(String_t* value)
	{
		___m_signaturealgo_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgo_12), value);
	}

	inline static int32_t get_offset_of_m_signaturealgoparams_13() { return static_cast<int32_t>(offsetof(X509Certificate_t2032595348, ___m_signaturealgoparams_13)); }
	inline ByteU5BU5D_t466969305* get_m_signaturealgoparams_13() const { return ___m_signaturealgoparams_13; }
	inline ByteU5BU5D_t466969305** get_address_of_m_signaturealgoparams_13() { return &___m_signaturealgoparams_13; }
	inline void set_m_signaturealgoparams_13(ByteU5BU5D_t466969305* value)
	{
		___m_signaturealgoparams_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgoparams_13), value);
	}

	inline static int32_t get_offset_of_certhash_14() { return static_cast<int32_t>(offsetof(X509Certificate_t2032595348, ___certhash_14)); }
	inline ByteU5BU5D_t466969305* get_certhash_14() const { return ___certhash_14; }
	inline ByteU5BU5D_t466969305** get_address_of_certhash_14() { return &___certhash_14; }
	inline void set_certhash_14(ByteU5BU5D_t466969305* value)
	{
		___certhash_14 = value;
		Il2CppCodeGenWriteBarrier((&___certhash_14), value);
	}

	inline static int32_t get_offset_of__rsa_15() { return static_cast<int32_t>(offsetof(X509Certificate_t2032595348, ____rsa_15)); }
	inline RSA_t802230051 * get__rsa_15() const { return ____rsa_15; }
	inline RSA_t802230051 ** get_address_of__rsa_15() { return &____rsa_15; }
	inline void set__rsa_15(RSA_t802230051 * value)
	{
		____rsa_15 = value;
		Il2CppCodeGenWriteBarrier((&____rsa_15), value);
	}

	inline static int32_t get_offset_of__dsa_16() { return static_cast<int32_t>(offsetof(X509Certificate_t2032595348, ____dsa_16)); }
	inline DSA_t2182086069 * get__dsa_16() const { return ____dsa_16; }
	inline DSA_t2182086069 ** get_address_of__dsa_16() { return &____dsa_16; }
	inline void set__dsa_16(DSA_t2182086069 * value)
	{
		____dsa_16 = value;
		Il2CppCodeGenWriteBarrier((&____dsa_16), value);
	}

	inline static int32_t get_offset_of_version_17() { return static_cast<int32_t>(offsetof(X509Certificate_t2032595348, ___version_17)); }
	inline int32_t get_version_17() const { return ___version_17; }
	inline int32_t* get_address_of_version_17() { return &___version_17; }
	inline void set_version_17(int32_t value)
	{
		___version_17 = value;
	}

	inline static int32_t get_offset_of_serialnumber_18() { return static_cast<int32_t>(offsetof(X509Certificate_t2032595348, ___serialnumber_18)); }
	inline ByteU5BU5D_t466969305* get_serialnumber_18() const { return ___serialnumber_18; }
	inline ByteU5BU5D_t466969305** get_address_of_serialnumber_18() { return &___serialnumber_18; }
	inline void set_serialnumber_18(ByteU5BU5D_t466969305* value)
	{
		___serialnumber_18 = value;
		Il2CppCodeGenWriteBarrier((&___serialnumber_18), value);
	}

	inline static int32_t get_offset_of_issuerUniqueID_19() { return static_cast<int32_t>(offsetof(X509Certificate_t2032595348, ___issuerUniqueID_19)); }
	inline ByteU5BU5D_t466969305* get_issuerUniqueID_19() const { return ___issuerUniqueID_19; }
	inline ByteU5BU5D_t466969305** get_address_of_issuerUniqueID_19() { return &___issuerUniqueID_19; }
	inline void set_issuerUniqueID_19(ByteU5BU5D_t466969305* value)
	{
		___issuerUniqueID_19 = value;
		Il2CppCodeGenWriteBarrier((&___issuerUniqueID_19), value);
	}

	inline static int32_t get_offset_of_subjectUniqueID_20() { return static_cast<int32_t>(offsetof(X509Certificate_t2032595348, ___subjectUniqueID_20)); }
	inline ByteU5BU5D_t466969305* get_subjectUniqueID_20() const { return ___subjectUniqueID_20; }
	inline ByteU5BU5D_t466969305** get_address_of_subjectUniqueID_20() { return &___subjectUniqueID_20; }
	inline void set_subjectUniqueID_20(ByteU5BU5D_t466969305* value)
	{
		___subjectUniqueID_20 = value;
		Il2CppCodeGenWriteBarrier((&___subjectUniqueID_20), value);
	}

	inline static int32_t get_offset_of_extensions_21() { return static_cast<int32_t>(offsetof(X509Certificate_t2032595348, ___extensions_21)); }
	inline X509ExtensionCollection_t1850785610 * get_extensions_21() const { return ___extensions_21; }
	inline X509ExtensionCollection_t1850785610 ** get_address_of_extensions_21() { return &___extensions_21; }
	inline void set_extensions_21(X509ExtensionCollection_t1850785610 * value)
	{
		___extensions_21 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_21), value);
	}
};

struct X509Certificate_t2032595348_StaticFields
{
public:
	// System.String Mono.Security.X509.X509Certificate::encoding_error
	String_t* ___encoding_error_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$mapF
	Dictionary_2_t19767864 * ___U3CU3Ef__switchU24mapF_23;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$map10
	Dictionary_2_t19767864 * ___U3CU3Ef__switchU24map10_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$map11
	Dictionary_2_t19767864 * ___U3CU3Ef__switchU24map11_25;

public:
	inline static int32_t get_offset_of_encoding_error_22() { return static_cast<int32_t>(offsetof(X509Certificate_t2032595348_StaticFields, ___encoding_error_22)); }
	inline String_t* get_encoding_error_22() const { return ___encoding_error_22; }
	inline String_t** get_address_of_encoding_error_22() { return &___encoding_error_22; }
	inline void set_encoding_error_22(String_t* value)
	{
		___encoding_error_22 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_error_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapF_23() { return static_cast<int32_t>(offsetof(X509Certificate_t2032595348_StaticFields, ___U3CU3Ef__switchU24mapF_23)); }
	inline Dictionary_2_t19767864 * get_U3CU3Ef__switchU24mapF_23() const { return ___U3CU3Ef__switchU24mapF_23; }
	inline Dictionary_2_t19767864 ** get_address_of_U3CU3Ef__switchU24mapF_23() { return &___U3CU3Ef__switchU24mapF_23; }
	inline void set_U3CU3Ef__switchU24mapF_23(Dictionary_2_t19767864 * value)
	{
		___U3CU3Ef__switchU24mapF_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapF_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map10_24() { return static_cast<int32_t>(offsetof(X509Certificate_t2032595348_StaticFields, ___U3CU3Ef__switchU24map10_24)); }
	inline Dictionary_2_t19767864 * get_U3CU3Ef__switchU24map10_24() const { return ___U3CU3Ef__switchU24map10_24; }
	inline Dictionary_2_t19767864 ** get_address_of_U3CU3Ef__switchU24map10_24() { return &___U3CU3Ef__switchU24map10_24; }
	inline void set_U3CU3Ef__switchU24map10_24(Dictionary_2_t19767864 * value)
	{
		___U3CU3Ef__switchU24map10_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map10_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map11_25() { return static_cast<int32_t>(offsetof(X509Certificate_t2032595348_StaticFields, ___U3CU3Ef__switchU24map11_25)); }
	inline Dictionary_2_t19767864 * get_U3CU3Ef__switchU24map11_25() const { return ___U3CU3Ef__switchU24map11_25; }
	inline Dictionary_2_t19767864 ** get_address_of_U3CU3Ef__switchU24map11_25() { return &___U3CU3Ef__switchU24map11_25; }
	inline void set_U3CU3Ef__switchU24map11_25(Dictionary_2_t19767864 * value)
	{
		___U3CU3Ef__switchU24map11_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map11_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T2032595348_H
#ifndef HEADERHANDLER_T3798401692_H
#define HEADERHANDLER_T3798401692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.HeaderHandler
struct  HeaderHandler_t3798401692  : public MulticastDelegate_t1463945573
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADERHANDLER_T3798401692_H
#ifndef TYPEFILTER_T3245679084_H
#define TYPEFILTER_T3245679084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeFilter
struct  TypeFilter_t3245679084  : public MulticastDelegate_t1463945573
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEFILTER_T3245679084_H
#ifndef PRIMALITYTEST_T4170405862_H
#define PRIMALITYTEST_T4170405862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTest
struct  PrimalityTest_t4170405862  : public MulticastDelegate_t1463945573
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTEST_T4170405862_H
#ifndef MEMBERFILTER_T832737293_H
#define MEMBERFILTER_T832737293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberFilter
struct  MemberFilter_t832737293  : public MulticastDelegate_t1463945573
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERFILTER_T832737293_H
#ifndef KEYGENERATEDEVENTHANDLER_T601819501_H
#define KEYGENERATEDEVENTHANDLER_T601819501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct  KeyGeneratedEventHandler_t601819501  : public MulticastDelegate_t1463945573
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYGENERATEDEVENTHANDLER_T601819501_H
#ifndef WAITORTIMERCALLBACK_T2194108234_H
#define WAITORTIMERCALLBACK_T2194108234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitOrTimerCallback
struct  WaitOrTimerCallback_t2194108234  : public MulticastDelegate_t1463945573
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITORTIMERCALLBACK_T2194108234_H
#ifndef ARC4MANAGED_T2609255382_H
#define ARC4MANAGED_T2609255382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.ARC4Managed
struct  ARC4Managed_t2609255382  : public RC4_t218152229
{
public:
	// System.Byte[] Mono.Security.Cryptography.ARC4Managed::key
	ByteU5BU5D_t466969305* ___key_12;
	// System.Byte[] Mono.Security.Cryptography.ARC4Managed::state
	ByteU5BU5D_t466969305* ___state_13;
	// System.Byte Mono.Security.Cryptography.ARC4Managed::x
	uint8_t ___x_14;
	// System.Byte Mono.Security.Cryptography.ARC4Managed::y
	uint8_t ___y_15;
	// System.Boolean Mono.Security.Cryptography.ARC4Managed::m_disposed
	bool ___m_disposed_16;

public:
	inline static int32_t get_offset_of_key_12() { return static_cast<int32_t>(offsetof(ARC4Managed_t2609255382, ___key_12)); }
	inline ByteU5BU5D_t466969305* get_key_12() const { return ___key_12; }
	inline ByteU5BU5D_t466969305** get_address_of_key_12() { return &___key_12; }
	inline void set_key_12(ByteU5BU5D_t466969305* value)
	{
		___key_12 = value;
		Il2CppCodeGenWriteBarrier((&___key_12), value);
	}

	inline static int32_t get_offset_of_state_13() { return static_cast<int32_t>(offsetof(ARC4Managed_t2609255382, ___state_13)); }
	inline ByteU5BU5D_t466969305* get_state_13() const { return ___state_13; }
	inline ByteU5BU5D_t466969305** get_address_of_state_13() { return &___state_13; }
	inline void set_state_13(ByteU5BU5D_t466969305* value)
	{
		___state_13 = value;
		Il2CppCodeGenWriteBarrier((&___state_13), value);
	}

	inline static int32_t get_offset_of_x_14() { return static_cast<int32_t>(offsetof(ARC4Managed_t2609255382, ___x_14)); }
	inline uint8_t get_x_14() const { return ___x_14; }
	inline uint8_t* get_address_of_x_14() { return &___x_14; }
	inline void set_x_14(uint8_t value)
	{
		___x_14 = value;
	}

	inline static int32_t get_offset_of_y_15() { return static_cast<int32_t>(offsetof(ARC4Managed_t2609255382, ___y_15)); }
	inline uint8_t get_y_15() const { return ___y_15; }
	inline uint8_t* get_address_of_y_15() { return &___y_15; }
	inline void set_y_15(uint8_t value)
	{
		___y_15 = value;
	}

	inline static int32_t get_offset_of_m_disposed_16() { return static_cast<int32_t>(offsetof(ARC4Managed_t2609255382, ___m_disposed_16)); }
	inline bool get_m_disposed_16() const { return ___m_disposed_16; }
	inline bool* get_address_of_m_disposed_16() { return &___m_disposed_16; }
	inline void set_m_disposed_16(bool value)
	{
		___m_disposed_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARC4MANAGED_T2609255382_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize900 = { sizeof (StackOverflowException_t716485382), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize901 = { sizeof (StringComparer_t797898967), -1, sizeof(StringComparer_t797898967_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable901[4] = 
{
	StringComparer_t797898967_StaticFields::get_offset_of_invariantCultureIgnoreCase_0(),
	StringComparer_t797898967_StaticFields::get_offset_of_invariantCulture_1(),
	StringComparer_t797898967_StaticFields::get_offset_of_ordinalIgnoreCase_2(),
	StringComparer_t797898967_StaticFields::get_offset_of_ordinal_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize902 = { sizeof (CultureAwareComparer_t3027449413), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable902[2] = 
{
	CultureAwareComparer_t3027449413::get_offset_of__ignoreCase_4(),
	CultureAwareComparer_t3027449413::get_offset_of__compareInfo_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize903 = { sizeof (OrdinalComparer_t2020072125), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable903[1] = 
{
	OrdinalComparer_t2020072125::get_offset_of__ignoreCase_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize904 = { sizeof (StringComparison_t3285494484)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable904[7] = 
{
	StringComparison_t3285494484::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize905 = { sizeof (StringSplitOptions_t3854825625)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable905[3] = 
{
	StringSplitOptions_t3854825625::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize906 = { sizeof (SystemException_t2923610502), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize907 = { sizeof (ThreadStaticAttribute_t3578329800), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize908 = { sizeof (TimeSpan_t3906350454)+ sizeof (RuntimeObject), sizeof(TimeSpan_t3906350454 ), sizeof(TimeSpan_t3906350454_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable908[4] = 
{
	TimeSpan_t3906350454_StaticFields::get_offset_of_MaxValue_0(),
	TimeSpan_t3906350454_StaticFields::get_offset_of_MinValue_1(),
	TimeSpan_t3906350454_StaticFields::get_offset_of_Zero_2(),
	TimeSpan_t3906350454::get_offset_of__ticks_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize909 = { sizeof (TimeZone_t2867894493), -1, sizeof(TimeZone_t2867894493_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable909[3] = 
{
	TimeZone_t2867894493_StaticFields::get_offset_of_currentTimeZone_0(),
	TimeZone_t2867894493_StaticFields::get_offset_of_tz_lock_1(),
	TimeZone_t2867894493_StaticFields::get_offset_of_timezone_check_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize910 = { sizeof (CurrentSystemTimeZone_t1775509837), -1, sizeof(CurrentSystemTimeZone_t1775509837_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable910[8] = 
{
	CurrentSystemTimeZone_t1775509837::get_offset_of_m_standardName_3(),
	CurrentSystemTimeZone_t1775509837::get_offset_of_m_daylightName_4(),
	CurrentSystemTimeZone_t1775509837::get_offset_of_m_CachedDaylightChanges_5(),
	CurrentSystemTimeZone_t1775509837::get_offset_of_m_ticksOffset_6(),
	CurrentSystemTimeZone_t1775509837::get_offset_of_utcOffsetWithOutDLS_7(),
	CurrentSystemTimeZone_t1775509837::get_offset_of_utcOffsetWithDLS_8(),
	CurrentSystemTimeZone_t1775509837_StaticFields::get_offset_of_this_year_9(),
	CurrentSystemTimeZone_t1775509837_StaticFields::get_offset_of_this_year_dlt_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize911 = { sizeof (TypeCode_t2405418696)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable911[19] = 
{
	TypeCode_t2405418696::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize912 = { sizeof (TypeInitializationException_t3068863006), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable912[1] = 
{
	TypeInitializationException_t3068863006::get_offset_of_type_name_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize913 = { sizeof (TypeLoadException_t2088455762), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable913[3] = 
{
	0,
	TypeLoadException_t2088455762::get_offset_of_className_12(),
	TypeLoadException_t2088455762::get_offset_of_assemblyName_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize914 = { sizeof (UnauthorizedAccessException_t1189045023), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize915 = { sizeof (UnhandledExceptionEventArgs_t4172922190), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable915[2] = 
{
	UnhandledExceptionEventArgs_t4172922190::get_offset_of_exception_1(),
	UnhandledExceptionEventArgs_t4172922190::get_offset_of_m_isTerminating_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize916 = { sizeof (UnitySerializationHolder_t2346370618), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable916[3] = 
{
	UnitySerializationHolder_t2346370618::get_offset_of__data_0(),
	UnitySerializationHolder_t2346370618::get_offset_of__unityType_1(),
	UnitySerializationHolder_t2346370618::get_offset_of__assemblyName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize917 = { sizeof (UnityType_t617204191)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable917[5] = 
{
	UnityType_t617204191::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize918 = { sizeof (Version_t600668514), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable918[5] = 
{
	0,
	Version_t600668514::get_offset_of__Major_1(),
	Version_t600668514::get_offset_of__Minor_2(),
	Version_t600668514::get_offset_of__Build_3(),
	Version_t600668514::get_offset_of__Revision_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize919 = { sizeof (WeakReference_t2137783321), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable919[2] = 
{
	WeakReference_t2137783321::get_offset_of_isLongReference_0(),
	WeakReference_t2137783321::get_offset_of_gcHandle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize920 = { sizeof (PrimalityTest_t4170405862), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize921 = { sizeof (MemberFilter_t832737293), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize922 = { sizeof (ModuleResolveEventHandler_t461565601), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize923 = { sizeof (TypeFilter_t3245679084), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize924 = { sizeof (CrossContextDelegate_t183510640), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize925 = { sizeof (HeaderHandler_t3798401692), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize926 = { sizeof (SendOrPostCallback_t1416270015), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize927 = { sizeof (ThreadStart_t21365269), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize928 = { sizeof (TimerCallback_t2615453784), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize929 = { sizeof (WaitCallback_t1577453488), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize930 = { sizeof (WaitOrTimerCallback_t2194108234), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize931 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize932 = { sizeof (AppDomainInitializer_t346518984), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize933 = { sizeof (AssemblyLoadEventHandler_t870470840), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize934 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize935 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize936 = { sizeof (EventHandler_t3532888589), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize937 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize938 = { sizeof (ResolveEventHandler_t3158981135), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize939 = { sizeof (UnhandledExceptionEventHandler_t3725797814), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize940 = { sizeof (U3CPrivateImplementationDetailsU3E_t3518647784), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable940[53] = 
{
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D1_1(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D2_2(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D3_3(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D4_4(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D5_5(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D6_6(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D15_7(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D16_8(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D17_9(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D18_10(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D19_11(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D20_12(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D21_13(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D22_14(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D23_15(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D24_16(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D25_17(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D26_18(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D27_19(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D30_20(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D31_21(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D32_22(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D33_23(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D34_24(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D35_25(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D36_26(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D37_27(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D38_28(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D39_29(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D40_30(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D41_31(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D42_32(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D43_33(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D44_34(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D45_35(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D46_36(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D47_37(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D48_38(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D49_39(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D50_40(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D51_41(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D52_42(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D53_43(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D54_44(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D55_45(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D56_46(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D57_47(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D60_48(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D62_49(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D63_50(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D64_51(),
	U3CPrivateImplementationDetailsU3E_t3518647784_StaticFields::get_offset_of_U24U24fieldU2D65_52(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize941 = { sizeof (U24ArrayTypeU2456_t2611702527)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2456_t2611702527 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize942 = { sizeof (U24ArrayTypeU2424_t2381117128)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2424_t2381117128 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize943 = { sizeof (U24ArrayTypeU2416_t670941652)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2416_t670941652 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize944 = { sizeof (U24ArrayTypeU24120_t3821071721)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24120_t3821071721 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize945 = { sizeof (U24ArrayTypeU243132_t2623977881)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU243132_t2623977881 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize946 = { sizeof (U24ArrayTypeU2420_t2856031853)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2420_t2856031853 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize947 = { sizeof (U24ArrayTypeU2432_t1297477410)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2432_t1297477410 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize948 = { sizeof (U24ArrayTypeU2448_t2988351476)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2448_t2988351476 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize949 = { sizeof (U24ArrayTypeU2464_t1627758979)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2464_t1627758979 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize950 = { sizeof (U24ArrayTypeU2412_t1548214979)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2412_t1548214979 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize951 = { sizeof (U24ArrayTypeU24136_t1283388247)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24136_t1283388247 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize952 = { sizeof (U24ArrayTypeU248_t1650198573)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU248_t1650198573 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize953 = { sizeof (U24ArrayTypeU2472_t157471073)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2472_t157471073 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize954 = { sizeof (U24ArrayTypeU24124_t761950804)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24124_t761950804 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize955 = { sizeof (U24ArrayTypeU2496_t1404721456)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2496_t1404721456 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize956 = { sizeof (U24ArrayTypeU242048_t3807678207)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU242048_t3807678207 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize957 = { sizeof (U24ArrayTypeU24256_t3819817495)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24256_t3819817495 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize958 = { sizeof (U24ArrayTypeU241024_t2337138493)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU241024_t2337138493 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize959 = { sizeof (U24ArrayTypeU24640_t797511095)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24640_t797511095 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize960 = { sizeof (U24ArrayTypeU24128_t3381039606)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24128_t3381039606 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize961 = { sizeof (U24ArrayTypeU2452_t3781238388)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2452_t3781238388 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize962 = { sizeof (Il2CppComObject), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize963 = { sizeof (__Il2CppComDelegate_t1675011020), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize964 = { sizeof (U3CModuleU3E_t1018759185), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize965 = { sizeof (Locale_t1782976959), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize966 = { sizeof (BigInteger_t3204170028), -1, sizeof(BigInteger_t3204170028_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable966[4] = 
{
	BigInteger_t3204170028::get_offset_of_length_0(),
	BigInteger_t3204170028::get_offset_of_data_1(),
	BigInteger_t3204170028_StaticFields::get_offset_of_smallPrimes_2(),
	BigInteger_t3204170028_StaticFields::get_offset_of_rng_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize967 = { sizeof (Sign_t3531260297)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable967[4] = 
{
	Sign_t3531260297::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize968 = { sizeof (ModulusRing_t2373681658), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable968[2] = 
{
	ModulusRing_t2373681658::get_offset_of_mod_0(),
	ModulusRing_t2373681658::get_offset_of_constant_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize969 = { sizeof (Kernel_t4135366977), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize970 = { sizeof (ConfidenceFactor_t2561855851)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable970[7] = 
{
	ConfidenceFactor_t2561855851::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize971 = { sizeof (PrimalityTests_t761628407), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize972 = { sizeof (PrimeGeneratorBase_t3010235970), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize973 = { sizeof (SequentialSearchPrimeGeneratorBase_t2202442834), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize974 = { sizeof (ASN1_t2224927521), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable974[3] = 
{
	ASN1_t2224927521::get_offset_of_m_nTag_0(),
	ASN1_t2224927521::get_offset_of_m_aValue_1(),
	ASN1_t2224927521::get_offset_of_elist_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize975 = { sizeof (ASN1Convert_t828443782), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize976 = { sizeof (BitConverterLE_t1437339909), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize977 = { sizeof (PKCS7_t764342420), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize978 = { sizeof (ContentInfo_t631622637), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable978[2] = 
{
	ContentInfo_t631622637::get_offset_of_contentType_0(),
	ContentInfo_t631622637::get_offset_of_content_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize979 = { sizeof (EncryptedData_t844408430), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable979[4] = 
{
	EncryptedData_t844408430::get_offset_of__version_0(),
	EncryptedData_t844408430::get_offset_of__content_1(),
	EncryptedData_t844408430::get_offset_of__encryptionAlgorithm_2(),
	EncryptedData_t844408430::get_offset_of__encrypted_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize980 = { sizeof (ARC4Managed_t2609255382), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable980[5] = 
{
	ARC4Managed_t2609255382::get_offset_of_key_12(),
	ARC4Managed_t2609255382::get_offset_of_state_13(),
	ARC4Managed_t2609255382::get_offset_of_x_14(),
	ARC4Managed_t2609255382::get_offset_of_y_15(),
	ARC4Managed_t2609255382::get_offset_of_m_disposed_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize981 = { sizeof (CryptoConvert_t1051310958), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize982 = { sizeof (KeyBuilder_t81419354), -1, sizeof(KeyBuilder_t81419354_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable982[1] = 
{
	KeyBuilder_t81419354_StaticFields::get_offset_of_rng_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize983 = { sizeof (MD2_t592240490), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize984 = { sizeof (MD2Managed_t898587445), -1, sizeof(MD2Managed_t898587445_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable984[6] = 
{
	MD2Managed_t898587445::get_offset_of_state_4(),
	MD2Managed_t898587445::get_offset_of_checksum_5(),
	MD2Managed_t898587445::get_offset_of_buffer_6(),
	MD2Managed_t898587445::get_offset_of_count_7(),
	MD2Managed_t898587445::get_offset_of_x_8(),
	MD2Managed_t898587445_StaticFields::get_offset_of_PI_SUBST_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize985 = { sizeof (MD4_t2334591378), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize986 = { sizeof (MD4Managed_t1265460611), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable986[5] = 
{
	MD4Managed_t1265460611::get_offset_of_state_4(),
	MD4Managed_t1265460611::get_offset_of_buffer_5(),
	MD4Managed_t1265460611::get_offset_of_count_6(),
	MD4Managed_t1265460611::get_offset_of_x_7(),
	MD4Managed_t1265460611::get_offset_of_digest_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize987 = { sizeof (PKCS1_t3026136324), -1, sizeof(PKCS1_t3026136324_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable987[4] = 
{
	PKCS1_t3026136324_StaticFields::get_offset_of_emptySHA1_0(),
	PKCS1_t3026136324_StaticFields::get_offset_of_emptySHA256_1(),
	PKCS1_t3026136324_StaticFields::get_offset_of_emptySHA384_2(),
	PKCS1_t3026136324_StaticFields::get_offset_of_emptySHA512_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize988 = { sizeof (PKCS8_t2011378170), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize989 = { sizeof (PrivateKeyInfo_t2374843263), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable989[4] = 
{
	PrivateKeyInfo_t2374843263::get_offset_of__version_0(),
	PrivateKeyInfo_t2374843263::get_offset_of__algorithm_1(),
	PrivateKeyInfo_t2374843263::get_offset_of__key_2(),
	PrivateKeyInfo_t2374843263::get_offset_of__list_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize990 = { sizeof (EncryptedPrivateKeyInfo_t3432715548), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable990[4] = 
{
	EncryptedPrivateKeyInfo_t3432715548::get_offset_of__algorithm_0(),
	EncryptedPrivateKeyInfo_t3432715548::get_offset_of__salt_1(),
	EncryptedPrivateKeyInfo_t3432715548::get_offset_of__iterations_2(),
	EncryptedPrivateKeyInfo_t3432715548::get_offset_of__data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize991 = { sizeof (RC4_t218152229), -1, sizeof(RC4_t218152229_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable991[2] = 
{
	RC4_t218152229_StaticFields::get_offset_of_s_legalBlockSizes_10(),
	RC4_t218152229_StaticFields::get_offset_of_s_legalKeySizes_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize992 = { sizeof (RSAManaged_t3958925716), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable992[13] = 
{
	RSAManaged_t3958925716::get_offset_of_isCRTpossible_2(),
	RSAManaged_t3958925716::get_offset_of_keyBlinding_3(),
	RSAManaged_t3958925716::get_offset_of_keypairGenerated_4(),
	RSAManaged_t3958925716::get_offset_of_m_disposed_5(),
	RSAManaged_t3958925716::get_offset_of_d_6(),
	RSAManaged_t3958925716::get_offset_of_p_7(),
	RSAManaged_t3958925716::get_offset_of_q_8(),
	RSAManaged_t3958925716::get_offset_of_dp_9(),
	RSAManaged_t3958925716::get_offset_of_dq_10(),
	RSAManaged_t3958925716::get_offset_of_qInv_11(),
	RSAManaged_t3958925716::get_offset_of_n_12(),
	RSAManaged_t3958925716::get_offset_of_e_13(),
	RSAManaged_t3958925716::get_offset_of_KeyGenerated_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize993 = { sizeof (KeyGeneratedEventHandler_t601819501), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize994 = { sizeof (SafeBag_t110736807), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable994[2] = 
{
	SafeBag_t110736807::get_offset_of__bagOID_0(),
	SafeBag_t110736807::get_offset_of__asn1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize995 = { sizeof (PKCS12_t1146090091), -1, sizeof(PKCS12_t1146090091_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable995[17] = 
{
	PKCS12_t1146090091_StaticFields::get_offset_of_recommendedIterationCount_0(),
	PKCS12_t1146090091::get_offset_of__password_1(),
	PKCS12_t1146090091::get_offset_of__keyBags_2(),
	PKCS12_t1146090091::get_offset_of__secretBags_3(),
	PKCS12_t1146090091::get_offset_of__certs_4(),
	PKCS12_t1146090091::get_offset_of__keyBagsChanged_5(),
	PKCS12_t1146090091::get_offset_of__secretBagsChanged_6(),
	PKCS12_t1146090091::get_offset_of__certsChanged_7(),
	PKCS12_t1146090091::get_offset_of__iterations_8(),
	PKCS12_t1146090091::get_offset_of__safeBags_9(),
	PKCS12_t1146090091::get_offset_of__rng_10(),
	PKCS12_t1146090091_StaticFields::get_offset_of_password_max_length_11(),
	PKCS12_t1146090091_StaticFields::get_offset_of_U3CU3Ef__switchU24map5_12(),
	PKCS12_t1146090091_StaticFields::get_offset_of_U3CU3Ef__switchU24map6_13(),
	PKCS12_t1146090091_StaticFields::get_offset_of_U3CU3Ef__switchU24map7_14(),
	PKCS12_t1146090091_StaticFields::get_offset_of_U3CU3Ef__switchU24map8_15(),
	PKCS12_t1146090091_StaticFields::get_offset_of_U3CU3Ef__switchU24mapC_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize996 = { sizeof (DeriveBytes_t197687356), -1, sizeof(DeriveBytes_t197687356_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable996[7] = 
{
	DeriveBytes_t197687356_StaticFields::get_offset_of_keyDiversifier_0(),
	DeriveBytes_t197687356_StaticFields::get_offset_of_ivDiversifier_1(),
	DeriveBytes_t197687356_StaticFields::get_offset_of_macDiversifier_2(),
	DeriveBytes_t197687356::get_offset_of__hashName_3(),
	DeriveBytes_t197687356::get_offset_of__iterations_4(),
	DeriveBytes_t197687356::get_offset_of__password_5(),
	DeriveBytes_t197687356::get_offset_of__salt_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize997 = { sizeof (X501_t1019108771), -1, sizeof(X501_t1019108771_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable997[15] = 
{
	X501_t1019108771_StaticFields::get_offset_of_countryName_0(),
	X501_t1019108771_StaticFields::get_offset_of_organizationName_1(),
	X501_t1019108771_StaticFields::get_offset_of_organizationalUnitName_2(),
	X501_t1019108771_StaticFields::get_offset_of_commonName_3(),
	X501_t1019108771_StaticFields::get_offset_of_localityName_4(),
	X501_t1019108771_StaticFields::get_offset_of_stateOrProvinceName_5(),
	X501_t1019108771_StaticFields::get_offset_of_streetAddress_6(),
	X501_t1019108771_StaticFields::get_offset_of_domainComponent_7(),
	X501_t1019108771_StaticFields::get_offset_of_userid_8(),
	X501_t1019108771_StaticFields::get_offset_of_email_9(),
	X501_t1019108771_StaticFields::get_offset_of_dnQualifier_10(),
	X501_t1019108771_StaticFields::get_offset_of_title_11(),
	X501_t1019108771_StaticFields::get_offset_of_surname_12(),
	X501_t1019108771_StaticFields::get_offset_of_givenName_13(),
	X501_t1019108771_StaticFields::get_offset_of_initial_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize998 = { sizeof (X509Certificate_t2032595348), -1, sizeof(X509Certificate_t2032595348_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable998[26] = 
{
	X509Certificate_t2032595348::get_offset_of_decoder_0(),
	X509Certificate_t2032595348::get_offset_of_m_encodedcert_1(),
	X509Certificate_t2032595348::get_offset_of_m_from_2(),
	X509Certificate_t2032595348::get_offset_of_m_until_3(),
	X509Certificate_t2032595348::get_offset_of_issuer_4(),
	X509Certificate_t2032595348::get_offset_of_m_issuername_5(),
	X509Certificate_t2032595348::get_offset_of_m_keyalgo_6(),
	X509Certificate_t2032595348::get_offset_of_m_keyalgoparams_7(),
	X509Certificate_t2032595348::get_offset_of_subject_8(),
	X509Certificate_t2032595348::get_offset_of_m_subject_9(),
	X509Certificate_t2032595348::get_offset_of_m_publickey_10(),
	X509Certificate_t2032595348::get_offset_of_signature_11(),
	X509Certificate_t2032595348::get_offset_of_m_signaturealgo_12(),
	X509Certificate_t2032595348::get_offset_of_m_signaturealgoparams_13(),
	X509Certificate_t2032595348::get_offset_of_certhash_14(),
	X509Certificate_t2032595348::get_offset_of__rsa_15(),
	X509Certificate_t2032595348::get_offset_of__dsa_16(),
	X509Certificate_t2032595348::get_offset_of_version_17(),
	X509Certificate_t2032595348::get_offset_of_serialnumber_18(),
	X509Certificate_t2032595348::get_offset_of_issuerUniqueID_19(),
	X509Certificate_t2032595348::get_offset_of_subjectUniqueID_20(),
	X509Certificate_t2032595348::get_offset_of_extensions_21(),
	X509Certificate_t2032595348_StaticFields::get_offset_of_encoding_error_22(),
	X509Certificate_t2032595348_StaticFields::get_offset_of_U3CU3Ef__switchU24mapF_23(),
	X509Certificate_t2032595348_StaticFields::get_offset_of_U3CU3Ef__switchU24map10_24(),
	X509Certificate_t2032595348_StaticFields::get_offset_of_U3CU3Ef__switchU24map11_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize999 = { sizeof (X509CertificateCollection_t2441794254), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
