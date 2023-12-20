#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
struct Stack_1_tB155526EBB647758D350B0425053713147D2F56F;
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct XMLU5BU5D_tA7E5AFFFDD6F497FB66126A329A230A5AF5341EF;
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
struct MethodInfo_t;
struct String_t;
struct StringBuilder_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct TagHandler_tA48116092837B32FBBEFF520C19FDF737D9EA883;

IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tB155526EBB647758D350B0425053713147D2F56F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XMLUtils_tAD2D2581DD5D9BD785D3CAD502DE1F81132AF6B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XML_t282126975ED78D3583D57395230C9B9A7649ADDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral067D631C255D4E0E8E6A2125BB825F7560FC55E5;
IL2CPP_EXTERN_C String_t* _stringLiteral0EE5C75C762D2925310D5C8C6DE4A72136C79CC4;
IL2CPP_EXTERN_C String_t* _stringLiteral1710B4477A01FFE20514D8AA61891F364D71C25B;
IL2CPP_EXTERN_C String_t* _stringLiteral202D5AEF51C14B19CFE144337C7FDB3B9A7C7387;
IL2CPP_EXTERN_C String_t* _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3;
IL2CPP_EXTERN_C String_t* _stringLiteral35B44AA64754DEDC52915E7F763C081CF5B004D9;
IL2CPP_EXTERN_C String_t* _stringLiteral3C1BBBF61A4D1102347EC72F429616D233963501;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral513659CEF285C73478E9829E41D7E4C23DB53E12;
IL2CPP_EXTERN_C String_t* _stringLiteral651F3DD8CA1557E5BD9B2873C319D3BC64D3128C;
IL2CPP_EXTERN_C String_t* _stringLiteral6C6FDC4565162D67861B63909523AE24FE5E083E;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral7AE05DE7E37F7C0C46151B22648E1D7156C0F837;
IL2CPP_EXTERN_C String_t* _stringLiteral801E316126435DC3E90554FCF745B368C9D874FC;
IL2CPP_EXTERN_C String_t* _stringLiteral81FECCD01231D97EE6D7C17B8F5531FE1A6D533E;
IL2CPP_EXTERN_C String_t* _stringLiteral893D84FF4ED81AC205FBC0C67CBEE1C0C752B406;
IL2CPP_EXTERN_C String_t* _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
IL2CPP_EXTERN_C String_t* _stringLiteral96930EC8C6FD5250BB36A5E1040AB06A9588FD62;
IL2CPP_EXTERN_C String_t* _stringLiteralB0AADDDCB10777660C04FFF62EE090971E9CB5CA;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralC7AFC69BFA0D3853573E4A41A19EBA2C80E84642;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C;
IL2CPP_EXTERN_C String_t* _stringLiteralDE7270C80B176C288F0786D9BFAC99EED86E77F8;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF6D44CAE1E3BEFC39260D137678DC510676429C3;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m67FD6DC1354888E56DFE7AC0892A542D78E0A792_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys;
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values;
	RuntimeObject* ____syncRoot;
};
struct Stack_1_tB155526EBB647758D350B0425053713147D2F56F  : public RuntimeObject
{
	XMLU5BU5D_tA7E5AFFFDD6F497FB66126A329A230A5AF5341EF* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct U3CPrivateImplementationDetailsU3E_t82CF5D5BA976051977853C7FB9C15968839EC5A2  : public RuntimeObject
{
};
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets;
	int32_t ____count;
	int32_t ____occupancy;
	int32_t ____loadsize;
	float ____loadFactor;
	int32_t ____version;
	bool ____isWriterInProgress;
	RuntimeObject* ____keys;
	RuntimeObject* ____values;
	RuntimeObject* ____keycomparer;
	RuntimeObject* ____syncRoot;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct XML_t282126975ED78D3583D57395230C9B9A7649ADDF  : public RuntimeObject
{
};
struct XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862  : public RuntimeObject
{
};
struct XMLUtils_tAD2D2581DD5D9BD785D3CAD502DE1F81132AF6B4  : public RuntimeObject
{
};
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	RuntimeObject* ___key;
	RuntimeObject* ___value;
};
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	String_t* ___key;
	String_t* ___value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D216_t49461613A1E6AC6097F1ABD40E831A8D5C5DB650 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D216_t49461613A1E6AC6097F1ABD40E831A8D5C5DB650__padding[216];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D36_t0E04B5935435CAF50171A4F1755361825C118CF9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_t0E04B5935435CAF50171A4F1755361825C118CF9__padding[36];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D64_t428F26152D8BE0972DFF21E8A323086E14BE6D27 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t428F26152D8BE0972DFF21E8A323086E14BE6D27__padding[64];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D80_t0321C4434D88AAE86A22275ACEEB4F765B81DD87 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D80_t0321C4434D88AAE86A22275ACEEB4F765B81DD87__padding[80];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D96_t5190CCFC659FDFE592AA60EA5D9A2886879C12FD 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_t5190CCFC659FDFE592AA60EA5D9A2886879C12FD__padding[96];
	};
};
#pragma pack(pop, tp)
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 
{
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ____current;
	int32_t ____getEnumeratorRetType;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct TagHandler_tA48116092837B32FBBEFF520C19FDF737D9EA883  : public MulticastDelegate_t
{
};
struct U3CPrivateImplementationDetailsU3E_t82CF5D5BA976051977853C7FB9C15968839EC5A2_StaticFields
{
	int64_t ___0D53D986AC9AC138A39C2D64E1588FCD87299A81C8ADD9ED9FD9D98955C8CCC5;
	int64_t ___0EEE47048E50C250A2ADDB45A92446A0E929B91307560A759A5CFD44AD29DCE6;
	int64_t ___1F4870B08C47BFF9029BB6078DAD53700D95E592F9ED91103FD75B89C4537112;
	int64_t ___2B33DEA6CD38D4CE686C1D154716D6B7EF94321C797CBEB771D5581E59CC061F;
	int64_t ___3375C0EBF42EB9560D400FCA92E7407C27D6246AD87E3AFAFB4AA10F3EDDDD1A;
	int64_t ___33ABAB3973FDD2036D9F9287F624B6D9ABD5DA6BFA58A02DADB7932188EFFF07;
	int64_t ___3629E8CDF2D4F629072F8463B3C49CD3AB93F695C4D4E33A9CABA6FB18EA8BAE;
	int64_t ___3CDF0387EAFF6E6E4EFF901E9E6CC7B4FA6358CC5AD83FF2BECCDBE64C4AA021;
	int64_t ___429D2BF09BBACDEB57473E7C76B01E6BF292AD1523953244632D8B01D9FE9085;
	int64_t ___46CC7A59A429332A210CB4D933B1D4B5379398F0682CB775BC04F993C3D0B0AA;
	int64_t ___4F0AB0DA7BFC3F488135B803EF12279D108341F6F5872234676E438EA1F5BC44;
	int64_t ___50E92C11B512B57563B4519FC45CC36931BE5EBB5C58B969BAD1C740677C582D;
	int64_t ___6039A839576CB450A68D98D9B3803789853EEDB9111A2EA5E6BBA91F701FE191;
	int64_t ___6D62730626CCC8B49CA5CF81AF4F7D2EF875E741DA3D8C6570488AEA013473DA;
	int64_t ___72B74EFC99D3B924ADDEA31E8DF371AC2918DD200D914B018CB7350448F23F0C;
	int64_t ___7F5323E27833E5ACD4967E9A8E009CCC1465419B8A02C7D3C7EC3AA52E71B2D4;
	int64_t ___807911344F9807A1B582873D2F0F38B194E077DD886C3AFC830BC065EBF2CFAE;
	int64_t ___8908FCCC1DF13468816CA7A3A4FBB8A7F96FB3AC00BAA34D70C5397C9B88F9C4;
	int64_t ___89B71AE7D45DE935FC05FF4BF4987BE1426359E2C389AD6149699D8050D0F75B;
	int64_t ___8DCFC69C77BE23ED6C460B27389CCC94F51C0A43E2947AD4FDFCBAA6C13EC607;
	int64_t ___8EE9327ECC967FC1AB49834169C4F6C562D46189C5CFF4C25C084E82FB924BFA;
	int64_t ___8F8DDC25F7C3822D3BE8C39FF1DE83005C8BAE2572F324A2F1E0E53AD5588E1E;
	int64_t ___9291CB95205633E925E98E9CB0DB4912E4A7BF5B18F7557D52090962CC045ED1;
	__StaticArrayInitTypeSizeU3D64_t428F26152D8BE0972DFF21E8A323086E14BE6D27 ___98D1685B5E9C9FD24988D4F12B619330F10308FA20A82CC135A7D339A3B3F0CB;
	int64_t ___9C70DD87C645ADD1E55A15DD75BFC3980636D2EC17C832852F7616C8947C5524;
	__StaticArrayInitTypeSizeU3D80_t0321C4434D88AAE86A22275ACEEB4F765B81DD87 ___A0EAAFC684A8BCF5FEEDF47A528FCEACF98A57D5CE1A9FD18201BD07010ACA4A;
	int64_t ___A9C5757FBFD31E7C729ED509C347B743BED698564E003AEA467DBC483FA0F4D9;
	int64_t ___AD13E92D9C1D3305D4AFA5B2674500224AD34925FB6A767E825BD67C45332C3B;
	int64_t ___AE465A420BC05BA9297282F4201C8C25D7CBEFDCF3C220435F13110BCD642267;
	int64_t ___AFDFA8643900371FE41615B3C293ABD2511CC874390DF92EC2A79C227329333A;
	int64_t ___B3C846C9496A4C09CD134A48383754195F07F2CBB7FF09A5F7D053B31B03141B;
	int64_t ___B586AA924B045960FF6BBC3D68DEA0A98B4B1BFFC64F90B9029AB72A5841856B;
	int64_t ___B99CF1EB09EDB7DC1869D9E6F54A8D60795752019177C8CF5F4E2755758C846F;
	__StaticArrayInitTypeSizeU3D216_t49461613A1E6AC6097F1ABD40E831A8D5C5DB650 ___B99E19B575DAEA6926B690C9B8B622902A7992D460C7E78AE72C12DF8A1B76D9;
	int64_t ___C2AD3E40941848EBFD50C59D86CA2F0C6F10C5DBFAED314E8B3E49EB52C9B38E;
	int64_t ___C4508EFC736EAC1E91CA30F728EC3AE622E4360F93E6A7F557A5C7590C4E56DD;
	__StaticArrayInitTypeSizeU3D36_t0E04B5935435CAF50171A4F1755361825C118CF9 ___C4EB100C3C763F47842E818CE6C154E0FD34D2EC7108A3A68012BDB513BC7AE3;
	int64_t ___C94BE9E5997BFC7172BFF0E1698DA9ACC0DD14181040A90033F0AD0815979975;
	int64_t ___CAD276F8E0D6D4F23CBE291840AAC59B5D72E7D4A4078ED9719558145C37ADC3;
	int64_t ___CED93B5430FE4CAFC5BFFF7C0A499B024657650D5A67770FD16C5CCB8C0D3B3A;
	int64_t ___DAC2C0AEB7C896D6D8D4B54DBCA3B807C3ABAD013DCEDFF4C5D4DB412DD0F5A0;
	int64_t ___DDC0D2A22A9CB07513EDC1C5FE5890BD09CF5FBD58DAE047D70E9D3BBEC7BF33;
	int64_t ___E2CB7C37304F6E20D427BA14E13C306CB5FB7B6CC9E6541A165225961BC36562;
	int64_t ___E79ED44CAC3EC1E173133141A47D3BD3564B09E991F40E9F557DB8A1B064988B;
	int64_t ___EA544CA6FD079BF61EBA836428B5D9EF2662A238CE9DF540D8667148A53321B2;
	__StaticArrayInitTypeSizeU3D96_t5190CCFC659FDFE592AA60EA5D9A2886879C12FD ___F358F089F2B1C4134F6EA2EC349D724D1A21F0A73CDBEE63915B1AA162F93EDF;
};
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct XML_t282126975ED78D3583D57395230C9B9A7649ADDF_StaticFields
{
	Stack_1_tB155526EBB647758D350B0425053713147D2F56F* ___sNodeStack;
};
struct XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields
{
	String_t* ___tagName;
	int32_t ___tagType;
	String_t* ___lastTagName;
	String_t* ___source;
	int32_t ___sourceLen;
	int32_t ___parsePos;
	int32_t ___tagPos;
	int32_t ___tagLength;
	int32_t ___lastTagEnd;
	bool ___attrParsed;
	bool ___lowerCaseName;
	StringBuilder_t* ___buffer;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___attributes;
};
struct XMLUtils_tAD2D2581DD5D9BD785D3CAD502DE1F81132AF6B4_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___ESCAPES;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;

inline void Stack_1__ctor_m67FD6DC1354888E56DFE7AC0892A542D78E0A792 (Stack_1_tB155526EBB647758D350B0425053713147D2F56F* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tB155526EBB647758D350B0425053713147D2F56F*, const RuntimeMethod*))Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mCBADAB35416ED6F5F733DF46CC86C23E5C9E5A56 (String_t* __this, String_t* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924 (Il2CppChar ___0_c, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703 (StringBuilder_t* __this, String_t* ___0_value, int32_t ___1_startIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D (StringBuilder_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90 (StringBuilder_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4 (String_t* __this, Il2CppChar ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimEnd_m25B1EA658EE07ADFED51FED61D630E5625336AB5 (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XMLUtils_DecodeString_mCA6161BC8A0226A0F4DB5C7869041B03B0FE7AA1 (String_t* ___0_aSource, const RuntimeMethod* method) ;
inline void Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLIterator_ParseAttributes_mA03A1D8733F21A1188109689C4204BE07B0B7E63 (RuntimeObject* ___0_attrs, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XMLIterator_GetAttribute_mEF8D2DACFDA2DC44EC63EDAFF8E042EA47BA337C (String_t* ___0_attrName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___0_s, int32_t* ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) ;
inline Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
inline void Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438 (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_m805368CD9A01EDC14D8DE148128B4D808E99C7CA (String_t* ___0_value, int32_t ___1_fromBase, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_mBEB2BEB362FA7CF267170EA7C3195462A188128F (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Replace_mB0C05C33BEED1FB701AD826C0E1B3D08ADE66760 (StringBuilder_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60 (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLUtils_EncodeString_m7D5247D98584E25988CA48241CD9349379827F7E (StringBuilder_t* ___0_sb, int32_t ___1_start, bool ___2_isAttribute, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
String_t* TagHandler_Invoke_m2145687A02B808AF57E629812B983F9E648D4BAE_Multicast(TagHandler_tA48116092837B32FBBEFF520C19FDF737D9EA883* __this, String_t* ___0_tagName, bool ___1_end, String_t* ___2_attr, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	String_t* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TagHandler_tA48116092837B32FBBEFF520C19FDF737D9EA883* currentDelegate = reinterpret_cast<TagHandler_tA48116092837B32FBBEFF520C19FDF737D9EA883*>(delegatesToInvoke[i]);
		typedef String_t* (*FunctionPointerType) (RuntimeObject*, String_t*, bool, String_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_tagName, ___1_end, ___2_attr, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
String_t* TagHandler_Invoke_m2145687A02B808AF57E629812B983F9E648D4BAE_OpenInst(TagHandler_tA48116092837B32FBBEFF520C19FDF737D9EA883* __this, String_t* ___0_tagName, bool ___1_end, String_t* ___2_attr, const RuntimeMethod* method)
{
	NullCheck(___0_tagName);
	typedef String_t* (*FunctionPointerType) (String_t*, bool, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_tagName, ___1_end, ___2_attr, method);
}
String_t* TagHandler_Invoke_m2145687A02B808AF57E629812B983F9E648D4BAE_OpenStatic(TagHandler_tA48116092837B32FBBEFF520C19FDF737D9EA883* __this, String_t* ___0_tagName, bool ___1_end, String_t* ___2_attr, const RuntimeMethod* method)
{
	typedef String_t* (*FunctionPointerType) (String_t*, bool, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_tagName, ___1_end, ___2_attr, method);
}
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_TagHandler_tA48116092837B32FBBEFF520C19FDF737D9EA883 (TagHandler_tA48116092837B32FBBEFF520C19FDF737D9EA883* __this, String_t* ___0_tagName, bool ___1_end, String_t* ___2_attr, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc)(char*, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	char* ____0_tagName_marshaled = NULL;
	____0_tagName_marshaled = il2cpp_codegen_marshal_string(___0_tagName);

	char* ____2_attr_marshaled = NULL;
	____2_attr_marshaled = il2cpp_codegen_marshal_string(___2_attr);

	char* returnValue = il2cppPInvokeFunc(____0_tagName_marshaled, static_cast<int32_t>(___1_end), ____2_attr_marshaled);

	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	il2cpp_codegen_marshal_free(____0_tagName_marshaled);
	____0_tagName_marshaled = NULL;

	il2cpp_codegen_marshal_free(____2_attr_marshaled);
	____2_attr_marshaled = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TagHandler__ctor_m6FF6711E6CA59193D5AC50CD25A30E5DC8554AEE (TagHandler_tA48116092837B32FBBEFF520C19FDF737D9EA883* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&TagHandler_Invoke_m2145687A02B808AF57E629812B983F9E648D4BAE_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&TagHandler_Invoke_m2145687A02B808AF57E629812B983F9E648D4BAE_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&TagHandler_Invoke_m2145687A02B808AF57E629812B983F9E648D4BAE_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TagHandler_Invoke_m2145687A02B808AF57E629812B983F9E648D4BAE (TagHandler_tA48116092837B32FBBEFF520C19FDF737D9EA883* __this, String_t* ___0_tagName, bool ___1_end, String_t* ___2_attr, const RuntimeMethod* method) 
{
	typedef String_t* (*FunctionPointerType) (RuntimeObject*, String_t*, bool, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_tagName, ___1_end, ___2_attr, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XML__cctor_mBE9DE55C57097662B4058F9AB9F7302DDF77269E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m67FD6DC1354888E56DFE7AC0892A542D78E0A792_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tB155526EBB647758D350B0425053713147D2F56F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XML_t282126975ED78D3583D57395230C9B9A7649ADDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_tB155526EBB647758D350B0425053713147D2F56F* L_0 = (Stack_1_tB155526EBB647758D350B0425053713147D2F56F*)il2cpp_codegen_object_new(Stack_1_tB155526EBB647758D350B0425053713147D2F56F_il2cpp_TypeInfo_var);
		Stack_1__ctor_m67FD6DC1354888E56DFE7AC0892A542D78E0A792(L_0, Stack_1__ctor_m67FD6DC1354888E56DFE7AC0892A542D78E0A792_RuntimeMethod_var);
		((XML_t282126975ED78D3583D57395230C9B9A7649ADDF_StaticFields*)il2cpp_codegen_static_fields_for(XML_t282126975ED78D3583D57395230C9B9A7649ADDF_il2cpp_TypeInfo_var))->___sNodeStack = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((XML_t282126975ED78D3583D57395230C9B9A7649ADDF_StaticFields*)il2cpp_codegen_static_fields_for(XML_t282126975ED78D3583D57395230C9B9A7649ADDF_il2cpp_TypeInfo_var))->___sNodeStack), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLIterator_Begin_mC5F9234F7FBB3C28BC0F179487FE1E8E91878868 (String_t* ___0_source, bool ___1_lowerCaseName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___source), (void*)L_0);
		bool L_1 = ___1_lowerCaseName;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___lowerCaseName = L_1;
		String_t* L_2 = ___0_source;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___sourceLen = L_3;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___parsePos = 0;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___lastTagEnd = 0;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagPos = 0;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagLength = 0;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagName = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagName), (void*)(String_t*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XMLIterator_NextTag_mF77058FE003DE6AAAB519322E4B014EDBBCCA5EF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EE5C75C762D2925310D5C8C6DE4A72136C79CC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral651F3DD8CA1557E5BD9B2873C319D3BC64D3128C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral801E316126435DC3E90554FCF745B368C9D874FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0AADDDCB10777660C04FFF62EE090971E9CB5CA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagType = 0;
		StringBuilder_t* L_0 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___buffer;
		NullCheck(L_0);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_0, 0, NULL);
		int32_t L_1 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___parsePos;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___lastTagEnd = L_1;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___attrParsed = (bool)0;
		String_t* L_2 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagName;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___lastTagName = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___lastTagName), (void*)L_2);
		goto IL_02dc;
	}

IL_0030:
	{
		int32_t L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___parsePos = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		int32_t L_6 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___sourceLen;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_02f5;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		String_t* L_7 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___source;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		Il2CppChar L_9;
		L_9 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, L_8, NULL);
		V_1 = L_9;
		Il2CppChar L_10 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)33)))))
		{
			goto IL_0170;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		int32_t L_11 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___sourceLen;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)il2cpp_codegen_add(L_12, 7)))))
		{
			goto IL_00df;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		String_t* L_13 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___source;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, ((int32_t)il2cpp_codegen_subtract(L_14, 1)), ((int32_t)9), NULL);
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral651F3DD8CA1557E5BD9B2873C319D3BC64D3128C, NULL);
		if (!L_16)
		{
			goto IL_00df;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		String_t* L_17 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___source;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19;
		L_19 = String_IndexOf_mCBADAB35416ED6F5F733DF46CC86C23E5C9E5A56(L_17, _stringLiteral801E316126435DC3E90554FCF745B368C9D874FC, L_18, NULL);
		V_0 = L_19;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagType = 3;
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagName = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagName), (void*)L_20);
		int32_t L_21 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___parsePos;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagPos = L_21;
		int32_t L_22 = V_0;
		if ((!(((uint32_t)L_22) == ((uint32_t)(-1)))))
		{
			goto IL_00bf;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		int32_t L_23 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___sourceLen;
		int32_t L_24 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___parsePos;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagLength = ((int32_t)il2cpp_codegen_subtract(L_23, L_24));
		goto IL_00cd;
	}

IL_00bf:
	{
		int32_t L_25 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		int32_t L_26 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___parsePos;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagLength = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_25, 3)), L_26));
	}

IL_00cd:
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		int32_t L_27 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___parsePos;
		int32_t L_28 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagLength;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___parsePos = ((int32_t)il2cpp_codegen_add(L_27, L_28));
		return (bool)1;
	}

IL_00df:
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		int32_t L_29 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___sourceLen;
		int32_t L_30 = V_0;
		if ((((int32_t)L_29) <= ((int32_t)((int32_t)il2cpp_codegen_add(L_30, 2)))))
		{
			goto IL_0164;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		String_t* L_31 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___source;
		int32_t L_32 = V_0;
		NullCheck(L_31);
		String_t* L_33;
		L_33 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_31, ((int32_t)il2cpp_codegen_subtract(L_32, 1)), 4, NULL);
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral0EE5C75C762D2925310D5C8C6DE4A72136C79CC4, NULL);
		if (!L_34)
		{
			goto IL_0164;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		String_t* L_35 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___source;
		int32_t L_36 = V_0;
		NullCheck(L_35);
		int32_t L_37;
		L_37 = String_IndexOf_mCBADAB35416ED6F5F733DF46CC86C23E5C9E5A56(L_35, _stringLiteralB0AADDDCB10777660C04FFF62EE090971E9CB5CA, L_36, NULL);
		V_0 = L_37;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagType = 4;
		String_t* L_38 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagName = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagName), (void*)L_38);
		int32_t L_39 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___parsePos;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagPos = L_39;
		int32_t L_40 = V_0;
		if ((!(((uint32_t)L_40) == ((uint32_t)(-1)))))
		{
			goto IL_0144;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		int32_t L_41 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___sourceLen;
		int32_t L_42 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___parsePos;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagLength = ((int32_t)il2cpp_codegen_subtract(L_41, L_42));
		goto IL_0152;
	}

IL_0144:
	{
		int32_t L_43 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		int32_t L_44 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___parsePos;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagLength = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_43, 3)), L_44));
	}

IL_0152:
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		int32_t L_45 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___parsePos;
		int32_t L_46 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagLength;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___parsePos = ((int32_t)il2cpp_codegen_add(L_45, L_46));
		return (bool)1;
	}

IL_0164:
	{
		int32_t L_47 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagType = 5;
		goto IL_01b4;
	}

IL_0170:
	{
		Il2CppChar L_48 = V_1;
		if ((!(((uint32_t)L_48) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0181;
		}
	}
	{
		int32_t L_49 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagType = 1;
		goto IL_01b4;
	}

IL_0181:
	{
		Il2CppChar L_50 = V_1;
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_01b4;
		}
	}
	{
		int32_t L_51 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_51, 1));
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagType = 5;
		goto IL_01b4;
	}

IL_0192:
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		String_t* L_52 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___source;
		int32_t L_53 = V_0;
		NullCheck(L_52);
		Il2CppChar L_54;
		L_54 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_52, L_53, NULL);
		V_1 = L_54;
		Il2CppChar L_55 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924(L_55, NULL);
		if (L_56)
		{
			goto IL_01bc;
		}
	}
	{
		Il2CppChar L_57 = V_1;
		if ((((int32_t)L_57) == ((int32_t)((int32_t)62))))
		{
			goto IL_01bc;
		}
	}
	{
		Il2CppChar L_58 = V_1;
		if ((((int32_t)L_58) == ((int32_t)((int32_t)47))))
		{
			goto IL_01bc;
		}
	}
	{
		int32_t L_59 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_01b4:
	{
		int32_t L_60 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		int32_t L_61 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___sourceLen;
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_0192;
		}
	}

IL_01bc:
	{
		int32_t L_62 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		int32_t L_63 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___sourceLen;
		if ((((int32_t)L_62) == ((int32_t)L_63)))
		{
			goto IL_02f5;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		StringBuilder_t* L_64 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___buffer;
		String_t* L_65 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___source;
		int32_t L_66 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___parsePos;
		int32_t L_67 = V_0;
		int32_t L_68 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___parsePos;
		NullCheck(L_64);
		StringBuilder_t* L_69;
		L_69 = StringBuilder_Append_mE7CA22532FEF1545B8BC357CB7CAA304BA264703(L_64, L_65, ((int32_t)il2cpp_codegen_add(L_66, 1)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_67, L_68)), 1)), NULL);
		StringBuilder_t* L_70 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___buffer;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_70, NULL);
		if ((((int32_t)L_71) <= ((int32_t)0)))
		{
			goto IL_0210;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		StringBuilder_t* L_72 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___buffer;
		NullCheck(L_72);
		Il2CppChar L_73;
		L_73 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_72, 0, NULL);
		if ((!(((uint32_t)L_73) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0210;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		StringBuilder_t* L_74 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___buffer;
		NullCheck(L_74);
		StringBuilder_t* L_75;
		L_75 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_74, 0, 1, NULL);
	}

IL_0210:
	{
		V_2 = (bool)0;
		V_3 = (bool)0;
		V_4 = (-1);
		goto IL_025e;
	}

IL_0219:
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		String_t* L_76 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___source;
		int32_t L_77 = V_0;
		NullCheck(L_76);
		Il2CppChar L_78;
		L_78 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_76, L_77, NULL);
		V_1 = L_78;
		Il2CppChar L_79 = V_1;
		if ((!(((uint32_t)L_79) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0234;
		}
	}
	{
		bool L_80 = V_2;
		if (L_80)
		{
			goto IL_0241;
		}
	}
	{
		bool L_81 = V_3;
		V_3 = (bool)((((int32_t)L_81) == ((int32_t)0))? 1 : 0);
		goto IL_0241;
	}

IL_0234:
	{
		Il2CppChar L_82 = V_1;
		if ((!(((uint32_t)L_82) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_0241;
		}
	}
	{
		bool L_83 = V_3;
		if (L_83)
		{
			goto IL_0241;
		}
	}
	{
		bool L_84 = V_2;
		V_2 = (bool)((((int32_t)L_84) == ((int32_t)0))? 1 : 0);
	}

IL_0241:
	{
		Il2CppChar L_85 = V_1;
		if ((!(((uint32_t)L_85) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_0255;
		}
	}
	{
		bool L_86 = V_2;
		bool L_87 = V_3;
		if (((int32_t)((int32_t)L_86|(int32_t)L_87)))
		{
			goto IL_0250;
		}
	}
	{
		V_4 = (-1);
		goto IL_0266;
	}

IL_0250:
	{
		int32_t L_88 = V_0;
		V_4 = L_88;
		goto IL_025a;
	}

IL_0255:
	{
		Il2CppChar L_89 = V_1;
		if ((((int32_t)L_89) == ((int32_t)((int32_t)60))))
		{
			goto IL_0266;
		}
	}

IL_025a:
	{
		int32_t L_90 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_025e:
	{
		int32_t L_91 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		int32_t L_92 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___sourceLen;
		if ((((int32_t)L_91) < ((int32_t)L_92)))
		{
			goto IL_0219;
		}
	}

IL_0266:
	{
		int32_t L_93 = V_4;
		if ((((int32_t)L_93) == ((int32_t)(-1))))
		{
			goto IL_026e;
		}
	}
	{
		int32_t L_94 = V_4;
		V_0 = L_94;
	}

IL_026e:
	{
		int32_t L_95 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		int32_t L_96 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___sourceLen;
		if ((((int32_t)L_95) == ((int32_t)L_96)))
		{
			goto IL_02f5;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		String_t* L_97 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___source;
		int32_t L_98 = V_0;
		NullCheck(L_97);
		Il2CppChar L_99;
		L_99 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_97, ((int32_t)il2cpp_codegen_subtract(L_98, 1)), NULL);
		if ((!(((uint32_t)L_99) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_028d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagType = 2;
	}

IL_028d:
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		StringBuilder_t* L_100 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___buffer;
		NullCheck(L_100);
		String_t* L_101;
		L_101 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_100);
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagName = L_101;
		Il2CppCodeGenWriteBarrier((void**)(&((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagName), (void*)L_101);
		bool L_102 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___lowerCaseName;
		if (!L_102)
		{
			goto IL_02b2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		String_t* L_103 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagName;
		NullCheck(L_103);
		String_t* L_104;
		L_104 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_103, NULL);
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagName = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagName), (void*)L_104);
	}

IL_02b2:
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		int32_t L_105 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___parsePos;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagPos = L_105;
		int32_t L_106 = V_0;
		int32_t L_107 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___parsePos;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagLength = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_106, 1)), L_107));
		int32_t L_108 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___parsePos;
		int32_t L_109 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagLength;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___parsePos = ((int32_t)il2cpp_codegen_add(L_108, L_109));
		return (bool)1;
	}

IL_02dc:
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		String_t* L_110 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___source;
		int32_t L_111 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___parsePos;
		NullCheck(L_110);
		int32_t L_112;
		L_112 = String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4(L_110, ((int32_t)60), L_111, NULL);
		int32_t L_113 = L_112;
		V_0 = L_113;
		if ((!(((uint32_t)L_113) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}

IL_02f5:
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		int32_t L_114 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___sourceLen;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagPos = L_114;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagLength = 0;
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagName = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagName), (void*)(String_t*)NULL);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XMLIterator_GetText_m213E6B9D09010ED45A7FAE1D14570AFDB0AF6C96 (bool ___0_trim, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLUtils_tAD2D2581DD5D9BD785D3CAD502DE1F81132AF6B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		int32_t L_0 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___lastTagEnd;
		int32_t L_1 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagPos;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		return L_2;
	}

IL_0012:
	{
		bool L_3 = ___0_trim;
		if (!L_3)
		{
			goto IL_0066;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		int32_t L_4 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___lastTagEnd;
		V_0 = L_4;
		goto IL_0033;
	}

IL_001d:
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		String_t* L_5 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___source;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924(L_7, NULL);
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0033:
	{
		int32_t L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		int32_t L_11 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagPos;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_001d;
		}
	}

IL_003b:
	{
		int32_t L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		int32_t L_13 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagPos;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_14 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		return L_14;
	}

IL_0049:
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		String_t* L_15 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___source;
		int32_t L_16 = V_0;
		int32_t L_17 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagPos;
		int32_t L_18 = V_0;
		NullCheck(L_15);
		String_t* L_19;
		L_19 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_15, L_16, ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = String_TrimEnd_m25B1EA658EE07ADFED51FED61D630E5625336AB5(L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(XMLUtils_tAD2D2581DD5D9BD785D3CAD502DE1F81132AF6B4_il2cpp_TypeInfo_var);
		String_t* L_21;
		L_21 = XMLUtils_DecodeString_mCA6161BC8A0226A0F4DB5C7869041B03B0FE7AA1(L_20, NULL);
		return L_21;
	}

IL_0066:
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		String_t* L_22 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___source;
		int32_t L_23 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___lastTagEnd;
		int32_t L_24 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagPos;
		int32_t L_25 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___lastTagEnd;
		NullCheck(L_22);
		String_t* L_26;
		L_26 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_22, L_23, ((int32_t)il2cpp_codegen_subtract(L_24, L_25)), NULL);
		il2cpp_codegen_runtime_class_init_inline(XMLUtils_tAD2D2581DD5D9BD785D3CAD502DE1F81132AF6B4_il2cpp_TypeInfo_var);
		String_t* L_27;
		L_27 = XMLUtils_DecodeString_mCA6161BC8A0226A0F4DB5C7869041B03B0FE7AA1(L_26, NULL);
		return L_27;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XMLIterator_GetAttribute_mEF8D2DACFDA2DC44EC63EDAFF8E042EA47BA337C (String_t* ___0_attrName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		bool L_0 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___attrParsed;
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___attributes;
		NullCheck(L_1);
		Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586(L_1, Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___attributes;
		XMLIterator_ParseAttributes_mA03A1D8733F21A1188109689C4204BE07B0B7E63(L_2, NULL);
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___attrParsed = (bool)1;
	}

IL_0021:
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___attributes;
		String_t* L_4 = ___0_attrName;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB(L_3, L_4, (&V_0), Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_6 = V_0;
		return L_6;
	}

IL_0032:
	{
		return (String_t*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XMLIterator_GetAttribute_mF5DE0B6E3193097D2682EFBF0BF803FC830425EC (String_t* ___0_attrName, String_t* ___1_defValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___0_attrName;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = XMLIterator_GetAttribute_mEF8D2DACFDA2DC44EC63EDAFF8E042EA47BA337C(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		String_t* L_3 = V_0;
		return L_3;
	}

IL_000c:
	{
		String_t* L_4 = ___1_defValue;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XMLIterator_GetAttributeInt_mFB8453E503AD0271C34306F1B48DA95CD307B8B6 (String_t* ___0_attrName, int32_t ___1_defValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_attrName;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = XMLIterator_GetAttribute_mEF8D2DACFDA2DC44EC63EDAFF8E042EA47BA337C(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		int32_t L_5 = ___1_defValue;
		return L_5;
	}

IL_0014:
	{
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_6, (&V_1), NULL);
		if (!L_7)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_0020:
	{
		int32_t L_9 = ___1_defValue;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* XMLIterator_GetAttributes_m8B40BF5BD7CAD6844EA78D4A6882B02F56B1B9E9 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = ___0_result;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D(L_1, NULL);
		___0_result = L_1;
	}

IL_000a:
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		bool L_2 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___attrParsed;
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___attributes;
		NullCheck(L_3);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_4;
		L_4 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_3, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{
				Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_0), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_003a_1;
			}

IL_001e_1:
			{
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_5;
				L_5 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_0), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
				V_1 = L_5;
				Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_6 = ___0_result;
				String_t* L_7;
				L_7 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_1), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_8;
				L_8 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_1), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_6);
				VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(32, L_6, L_7, L_8);
			}

IL_003a_1:
			{
				bool L_9;
				L_9 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_0), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_0059;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0053:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_10 = ___0_result;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		XMLIterator_ParseAttributes_mA03A1D8733F21A1188109689C4204BE07B0B7E63(L_10, NULL);
	}

IL_0059:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_11 = ___0_result;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLIterator_ParseAttributes_mA03A1D8733F21A1188109689C4204BE07B0B7E63 (RuntimeObject* ___0_attrs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLUtils_tAD2D2581DD5D9BD785D3CAD502DE1F81132AF6B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Il2CppChar V_7 = 0x0;
	Il2CppChar V_8 = 0x0;
	int32_t V_9 = 0;
	Il2CppChar V_10 = 0x0;
	{
		V_3 = (bool)0;
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		StringBuilder_t* L_0 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___buffer;
		NullCheck(L_0);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_0, 0, NULL);
		int32_t L_1 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagPos;
		V_5 = L_1;
		int32_t L_2 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagPos;
		int32_t L_3 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___tagLength;
		V_6 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		int32_t L_4 = V_5;
		int32_t L_5 = V_6;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0211;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		String_t* L_6 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___source;
		int32_t L_7 = V_5;
		NullCheck(L_6);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, L_7, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_0211;
		}
	}
	{
		goto IL_0071;
	}

IL_003f:
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		String_t* L_9 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___source;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_9, L_10, NULL);
		V_7 = L_11;
		Il2CppChar L_12 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924(L_12, NULL);
		if (L_13)
		{
			goto IL_0211;
		}
	}
	{
		Il2CppChar L_14 = V_7;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)62))))
		{
			goto IL_0211;
		}
	}
	{
		Il2CppChar L_15 = V_7;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)47))))
		{
			goto IL_0211;
		}
	}
	{
		int32_t L_16 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0071:
	{
		int32_t L_17 = V_5;
		int32_t L_18 = V_6;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0211;
	}

IL_007c:
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		String_t* L_19 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___source;
		int32_t L_20 = V_5;
		NullCheck(L_19);
		Il2CppChar L_21;
		L_21 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_19, L_20, NULL);
		V_8 = L_21;
		Il2CppChar L_22 = V_8;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)61)))))
		{
			goto IL_018a;
		}
	}
	{
		V_1 = (-1);
		V_2 = (-1);
		V_4 = 0;
		int32_t L_23 = V_5;
		V_9 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		goto IL_0129;
	}

IL_00a5:
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		String_t* L_24 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___source;
		int32_t L_25 = V_9;
		NullCheck(L_24);
		Il2CppChar L_26;
		L_26 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_24, L_25, NULL);
		V_10 = L_26;
		Il2CppChar L_27 = V_10;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924(L_27, NULL);
		if (!L_28)
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) == ((int32_t)(-1))))
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_30 = V_4;
		if (L_30)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_31 = V_9;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		goto IL_0132;
	}

IL_00cb:
	{
		Il2CppChar L_32 = V_10;
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_33 = V_4;
		if (L_33)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_34 = V_9;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		goto IL_0132;
	}

IL_00dc:
	{
		Il2CppChar L_35 = V_10;
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_00fc;
		}
	}
	{
		int32_t L_36 = V_1;
		if ((((int32_t)L_36) == ((int32_t)(-1))))
		{
			goto IL_00f2;
		}
	}
	{
		int32_t L_37 = V_4;
		if ((((int32_t)L_37) == ((int32_t)1)))
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_38 = V_9;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
		goto IL_0132;
	}

IL_00f2:
	{
		V_4 = 2;
		int32_t L_39 = V_9;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		goto IL_0123;
	}

IL_00fc:
	{
		Il2CppChar L_40 = V_10;
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_41 = V_1;
		if ((((int32_t)L_41) == ((int32_t)(-1))))
		{
			goto IL_0112;
		}
	}
	{
		int32_t L_42 = V_4;
		if ((((int32_t)L_42) == ((int32_t)2)))
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_43 = V_9;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_43, 1));
		goto IL_0132;
	}

IL_0112:
	{
		V_4 = 1;
		int32_t L_44 = V_9;
		V_1 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		goto IL_0123;
	}

IL_011c:
	{
		int32_t L_45 = V_1;
		if ((!(((uint32_t)L_45) == ((uint32_t)(-1)))))
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_46 = V_9;
		V_1 = L_46;
	}

IL_0123:
	{
		int32_t L_47 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0129:
	{
		int32_t L_48 = V_9;
		int32_t L_49 = V_6;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_00a5;
		}
	}

IL_0132:
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) == ((int32_t)(-1))))
		{
			goto IL_021a;
		}
	}
	{
		int32_t L_51 = V_2;
		if ((((int32_t)L_51) == ((int32_t)(-1))))
		{
			goto IL_021a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		StringBuilder_t* L_52 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___buffer;
		NullCheck(L_52);
		String_t* L_53;
		L_53 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_52);
		V_0 = L_53;
		bool L_54 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___lowerCaseName;
		if (!L_54)
		{
			goto IL_0159;
		}
	}
	{
		String_t* L_55 = V_0;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_55, NULL);
		V_0 = L_56;
	}

IL_0159:
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		StringBuilder_t* L_57 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___buffer;
		NullCheck(L_57);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_57, 0, NULL);
		RuntimeObject* L_58 = ___0_attrs;
		String_t* L_59 = V_0;
		String_t* L_60 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___source;
		int32_t L_61 = V_1;
		int32_t L_62 = V_2;
		int32_t L_63 = V_1;
		NullCheck(L_60);
		String_t* L_64;
		L_64 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_60, L_61, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_62, L_63)), 1)), NULL);
		il2cpp_codegen_runtime_class_init_inline(XMLUtils_tAD2D2581DD5D9BD785D3CAD502DE1F81132AF6B4_il2cpp_TypeInfo_var);
		String_t* L_65;
		L_65 = XMLUtils_DecodeString_mCA6161BC8A0226A0F4DB5C7869041B03B0FE7AA1(L_64, NULL);
		NullCheck(L_58);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(1, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_58, L_59, L_65);
		int32_t L_66 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		goto IL_020b;
	}

IL_018a:
	{
		Il2CppChar L_67 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_68;
		L_68 = Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924(L_67, NULL);
		if (L_68)
		{
			goto IL_01fc;
		}
	}
	{
		bool L_69 = V_3;
		if (L_69)
		{
			goto IL_01a2;
		}
	}
	{
		Il2CppChar L_70 = V_8;
		if ((((int32_t)L_70) == ((int32_t)((int32_t)47))))
		{
			goto IL_01a2;
		}
	}
	{
		Il2CppChar L_71 = V_8;
		if ((!(((uint32_t)L_71) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_01e1;
		}
	}

IL_01a2:
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		StringBuilder_t* L_72 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___buffer;
		NullCheck(L_72);
		int32_t L_73;
		L_73 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_72, NULL);
		if ((((int32_t)L_73) <= ((int32_t)0)))
		{
			goto IL_01df;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		StringBuilder_t* L_74 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___buffer;
		NullCheck(L_74);
		String_t* L_75;
		L_75 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_74);
		V_0 = L_75;
		bool L_76 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___lowerCaseName;
		if (!L_76)
		{
			goto IL_01c8;
		}
	}
	{
		String_t* L_77 = V_0;
		NullCheck(L_77);
		String_t* L_78;
		L_78 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_77, NULL);
		V_0 = L_78;
	}

IL_01c8:
	{
		RuntimeObject* L_79 = ___0_attrs;
		String_t* L_80 = V_0;
		String_t* L_81 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		NullCheck(L_79);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(1, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_79, L_80, L_81);
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		StringBuilder_t* L_82 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___buffer;
		NullCheck(L_82);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_82, 0, NULL);
	}

IL_01df:
	{
		V_3 = (bool)0;
	}

IL_01e1:
	{
		Il2CppChar L_83 = V_8;
		if ((((int32_t)L_83) == ((int32_t)((int32_t)47))))
		{
			goto IL_020b;
		}
	}
	{
		Il2CppChar L_84 = V_8;
		if ((((int32_t)L_84) == ((int32_t)((int32_t)62))))
		{
			goto IL_020b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		StringBuilder_t* L_85 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___buffer;
		Il2CppChar L_86 = V_8;
		NullCheck(L_85);
		StringBuilder_t* L_87;
		L_87 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_85, L_86, NULL);
		goto IL_020b;
	}

IL_01fc:
	{
		il2cpp_codegen_runtime_class_init_inline(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		StringBuilder_t* L_88 = ((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___buffer;
		NullCheck(L_88);
		int32_t L_89;
		L_89 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_88, NULL);
		if ((((int32_t)L_89) <= ((int32_t)0)))
		{
			goto IL_020b;
		}
	}
	{
		V_3 = (bool)1;
	}

IL_020b:
	{
		int32_t L_90 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_0211:
	{
		int32_t L_91 = V_5;
		int32_t L_92 = V_6;
		if ((((int32_t)L_91) < ((int32_t)L_92)))
		{
			goto IL_007c;
		}
	}

IL_021a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLIterator__cctor_mA51EF27942A1A728A050B14E7C2201F5A11D1B42 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___buffer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___buffer), (void*)L_0);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_1, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___attributes = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_StaticFields*)il2cpp_codegen_static_fields_for(XMLIterator_t5910CE01865A3FDF60B0B8893C445B6A30879862_il2cpp_TypeInfo_var))->___attributes), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XMLUtils_DecodeString_mCA6161BC8A0226A0F4DB5C7869041B03B0FE7AA1 (String_t* ___0_aSource, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1710B4477A01FFE20514D8AA61891F364D71C25B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35B44AA64754DEDC52915E7F763C081CF5B004D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral513659CEF285C73478E9829E41D7E4C23DB53E12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C6FDC4565162D67861B63909523AE24FE5E083E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral893D84FF4ED81AC205FBC0C67CBEE1C0C752B406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96930EC8C6FD5250BB36A5E1040AB06A9588FD62);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringBuilder_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		String_t* L_0 = ___0_aSource;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		V_0 = L_1;
		StringBuilder_t* L_2 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_2, NULL);
		V_1 = L_2;
		V_2 = 0;
		V_3 = 0;
	}

IL_0011:
	{
		String_t* L_3 = ___0_aSource;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4(L_3, ((int32_t)38), L_4, NULL);
		V_3 = L_5;
		int32_t L_6 = V_3;
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_0032;
		}
	}
	{
		StringBuilder_t* L_7 = V_1;
		String_t* L_8 = ___0_aSource;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		String_t* L_10;
		L_10 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_8, L_9, NULL);
		NullCheck(L_7);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, L_10, NULL);
		goto IL_019a;
	}

IL_0032:
	{
		StringBuilder_t* L_12 = V_1;
		String_t* L_13 = ___0_aSource;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_2;
		NullCheck(L_13);
		String_t* L_17;
		L_17 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, L_14, ((int32_t)il2cpp_codegen_subtract(L_15, L_16)), NULL);
		NullCheck(L_12);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, L_17, NULL);
		int32_t L_19 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = V_2;
		V_3 = L_20;
		int32_t L_21 = V_0;
		int32_t L_22 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_23;
		L_23 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_21, ((int32_t)il2cpp_codegen_add(L_22, ((int32_t)10))), NULL);
		V_4 = L_23;
		goto IL_0066;
	}

IL_0057:
	{
		String_t* L_24 = ___0_aSource;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		Il2CppChar L_26;
		L_26 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_24, L_25, NULL);
		if ((((int32_t)L_26) == ((int32_t)((int32_t)59))))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0066:
	{
		int32_t L_28 = V_3;
		int32_t L_29 = V_4;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0057;
		}
	}

IL_006b:
	{
		int32_t L_30 = V_3;
		int32_t L_31 = V_4;
		if ((((int32_t)L_30) >= ((int32_t)L_31)))
		{
			goto IL_018c;
		}
	}
	{
		int32_t L_32 = V_3;
		int32_t L_33 = V_2;
		if ((((int32_t)L_32) <= ((int32_t)L_33)))
		{
			goto IL_018c;
		}
	}
	{
		String_t* L_34 = ___0_aSource;
		int32_t L_35 = V_2;
		int32_t L_36 = V_3;
		int32_t L_37 = V_2;
		NullCheck(L_34);
		String_t* L_38;
		L_38 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
		V_5 = L_38;
		V_6 = 0;
		String_t* L_39 = V_5;
		NullCheck(L_39);
		Il2CppChar L_40;
		L_40 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_39, 0, NULL);
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_00ee;
		}
	}
	{
		String_t* L_41 = V_5;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_41, NULL);
		if ((((int32_t)L_42) <= ((int32_t)1)))
		{
			goto IL_00e0;
		}
	}
	{
		String_t* L_43 = V_5;
		NullCheck(L_43);
		Il2CppChar L_44;
		L_44 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_43, 1, NULL);
		if ((!(((uint32_t)L_44) == ((uint32_t)((int32_t)120)))))
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_45 = V_5;
		NullCheck(L_45);
		String_t* L_46;
		L_46 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_45, 2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int16_t L_47;
		L_47 = Convert_ToInt16_m805368CD9A01EDC14D8DE148128B4D808E99C7CA(L_46, ((int32_t)16), NULL);
		V_6 = L_47;
		goto IL_00cd;
	}

IL_00be:
	{
		String_t* L_48 = V_5;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_48, 1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int16_t L_50;
		L_50 = Convert_ToInt16_mBEB2BEB362FA7CF267170EA7C3195462A188128F(L_49, NULL);
		V_6 = L_50;
	}

IL_00cd:
	{
		StringBuilder_t* L_51 = V_1;
		int32_t L_52 = V_6;
		NullCheck(L_51);
		StringBuilder_t* L_53;
		L_53 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_51, ((int32_t)(uint16_t)L_52), NULL);
		int32_t L_54 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		goto IL_0011;
	}

IL_00e0:
	{
		StringBuilder_t* L_55 = V_1;
		NullCheck(L_55);
		StringBuilder_t* L_56;
		L_56 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_55, ((int32_t)38), NULL);
		goto IL_0011;
	}

IL_00ee:
	{
		String_t* L_57 = V_5;
		bool L_58;
		L_58 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_57, _stringLiteral96930EC8C6FD5250BB36A5E1040AB06A9588FD62, NULL);
		if (L_58)
		{
			goto IL_0144;
		}
	}
	{
		String_t* L_59 = V_5;
		bool L_60;
		L_60 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_59, _stringLiteral513659CEF285C73478E9829E41D7E4C23DB53E12, NULL);
		if (L_60)
		{
			goto IL_014a;
		}
	}
	{
		String_t* L_61 = V_5;
		bool L_62;
		L_62 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_61, _stringLiteral1710B4477A01FFE20514D8AA61891F364D71C25B, NULL);
		if (L_62)
		{
			goto IL_0150;
		}
	}
	{
		String_t* L_63 = V_5;
		bool L_64;
		L_64 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_63, _stringLiteral35B44AA64754DEDC52915E7F763C081CF5B004D9, NULL);
		if (L_64)
		{
			goto IL_0156;
		}
	}
	{
		String_t* L_65 = V_5;
		bool L_66;
		L_66 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_65, _stringLiteral6C6FDC4565162D67861B63909523AE24FE5E083E, NULL);
		if (L_66)
		{
			goto IL_015c;
		}
	}
	{
		String_t* L_67 = V_5;
		bool L_68;
		L_68 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_67, _stringLiteral893D84FF4ED81AC205FBC0C67CBEE1C0C752B406, NULL);
		if (L_68)
		{
			goto IL_0162;
		}
	}
	{
		goto IL_0166;
	}

IL_0144:
	{
		V_6 = ((int32_t)38);
		goto IL_0166;
	}

IL_014a:
	{
		V_6 = ((int32_t)39);
		goto IL_0166;
	}

IL_0150:
	{
		V_6 = ((int32_t)62);
		goto IL_0166;
	}

IL_0156:
	{
		V_6 = ((int32_t)60);
		goto IL_0166;
	}

IL_015c:
	{
		V_6 = ((int32_t)32);
		goto IL_0166;
	}

IL_0162:
	{
		V_6 = ((int32_t)34);
	}

IL_0166:
	{
		int32_t L_69 = V_6;
		if ((((int32_t)L_69) <= ((int32_t)0)))
		{
			goto IL_017e;
		}
	}
	{
		StringBuilder_t* L_70 = V_1;
		int32_t L_71 = V_6;
		NullCheck(L_70);
		StringBuilder_t* L_72;
		L_72 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_70, ((int32_t)(uint16_t)L_71), NULL);
		int32_t L_73 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add(L_73, 1));
		goto IL_0011;
	}

IL_017e:
	{
		StringBuilder_t* L_74 = V_1;
		NullCheck(L_74);
		StringBuilder_t* L_75;
		L_75 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_74, ((int32_t)38), NULL);
		goto IL_0011;
	}

IL_018c:
	{
		StringBuilder_t* L_76 = V_1;
		NullCheck(L_76);
		StringBuilder_t* L_77;
		L_77 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_76, ((int32_t)38), NULL);
		goto IL_0011;
	}

IL_019a:
	{
		StringBuilder_t* L_78 = V_1;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_78);
		return L_79;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLUtils_EncodeString_m7D5247D98584E25988CA48241CD9349379827F7E (StringBuilder_t* ___0_sb, int32_t ___1_start, bool ___2_isAttribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLUtils_tAD2D2581DD5D9BD785D3CAD502DE1F81132AF6B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___2_isAttribute;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 6;
		goto IL_000d;
	}

IL_0006:
	{
		il2cpp_codegen_runtime_class_init_inline(XMLUtils_tAD2D2581DD5D9BD785D3CAD502DE1F81132AF6B4_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ((XMLUtils_tAD2D2581DD5D9BD785D3CAD502DE1F81132AF6B4_StaticFields*)il2cpp_codegen_static_fields_for(XMLUtils_tAD2D2581DD5D9BD785D3CAD502DE1F81132AF6B4_il2cpp_TypeInfo_var))->___ESCAPES;
		NullCheck(L_1);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
	}

IL_000d:
	{
		V_1 = G_B3_0;
		V_2 = 0;
		goto IL_0038;
	}

IL_0012:
	{
		StringBuilder_t* L_2 = ___0_sb;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_2, NULL);
		int32_t L_4 = ___1_start;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, L_4));
		StringBuilder_t* L_5 = ___0_sb;
		il2cpp_codegen_runtime_class_init_inline(XMLUtils_tAD2D2581DD5D9BD785D3CAD502DE1F81132AF6B4_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = ((XMLUtils_tAD2D2581DD5D9BD785D3CAD502DE1F81132AF6B4_StaticFields*)il2cpp_codegen_static_fields_for(XMLUtils_tAD2D2581DD5D9BD785D3CAD502DE1F81132AF6B4_il2cpp_TypeInfo_var))->___ESCAPES;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = ((XMLUtils_tAD2D2581DD5D9BD785D3CAD502DE1F81132AF6B4_StaticFields*)il2cpp_codegen_static_fields_for(XMLUtils_tAD2D2581DD5D9BD785D3CAD502DE1F81132AF6B4_il2cpp_TypeInfo_var))->___ESCAPES;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		String_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14 = ___1_start;
		int32_t L_15 = V_0;
		NullCheck(L_5);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Replace_mB0C05C33BEED1FB701AD826C0E1B3D08ADE66760(L_5, L_9, L_13, L_14, L_15, NULL);
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 2));
	}

IL_0038:
	{
		int32_t L_18 = V_2;
		int32_t L_19 = V_1;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XMLUtils_EncodeString_mB4A34F42D384962C700D0AF35471B8F44E2F2CBD (String_t* ___0_str, bool ___1_isAttribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLUtils_tAD2D2581DD5D9BD785D3CAD502DE1F81132AF6B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_str;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_000e:
	{
		String_t* L_2 = ___0_str;
		StringBuilder_t* L_3 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_3, L_2, NULL);
		StringBuilder_t* L_4 = L_3;
		il2cpp_codegen_runtime_class_init_inline(XMLUtils_tAD2D2581DD5D9BD785D3CAD502DE1F81132AF6B4_il2cpp_TypeInfo_var);
		XMLUtils_EncodeString_m7D5247D98584E25988CA48241CD9349379827F7E(L_4, 0, (bool)0, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XMLUtils__cctor_m298F678C26E6361E655DD9CCF82BC1D84C745783 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XMLUtils_tAD2D2581DD5D9BD785D3CAD502DE1F81132AF6B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral067D631C255D4E0E8E6A2125BB825F7560FC55E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral202D5AEF51C14B19CFE144337C7FDB3B9A7C7387);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C1BBBF61A4D1102347EC72F429616D233963501);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AE05DE7E37F7C0C46151B22648E1D7156C0F837);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81FECCD01231D97EE6D7C17B8F5531FE1A6D533E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7AFC69BFA0D3853573E4A41A19EBA2C80E84642);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE7270C80B176C288F0786D9BFAC99EED86E77F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6D44CAE1E3BEFC39260D137678DC510676429C3);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral202D5AEF51C14B19CFE144337C7FDB3B9A7C7387);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralDE7270C80B176C288F0786D9BFAC99EED86E77F8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral7AE05DE7E37F7C0C46151B22648E1D7156C0F837);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralC7AFC69BFA0D3853573E4A41A19EBA2C80E84642);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral81FECCD01231D97EE6D7C17B8F5531FE1A6D533E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteralF6D44CAE1E3BEFC39260D137678DC510676429C3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral3C1BBBF61A4D1102347EC72F429616D233963501);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteralDB5B55A9B215F744DB82517864984D073F2E8F8C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral067D631C255D4E0E8E6A2125BB825F7560FC55E5);
		((XMLUtils_tAD2D2581DD5D9BD785D3CAD502DE1F81132AF6B4_StaticFields*)il2cpp_codegen_static_fields_for(XMLUtils_tAD2D2581DD5D9BD785D3CAD502DE1F81132AF6B4_il2cpp_TypeInfo_var))->___ESCAPES = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((XMLUtils_tAD2D2581DD5D9BD785D3CAD502DE1F81132AF6B4_StaticFields*)il2cpp_codegen_static_fields_for(XMLUtils_tAD2D2581DD5D9BD785D3CAD502DE1F81132AF6B4_il2cpp_TypeInfo_var))->___ESCAPES), (void*)L_16);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mC0575179003D48E3FEC370AA8EE4C53419417136 (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___0_s;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___0_s;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___key;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value;
		return L_0;
	}
}
