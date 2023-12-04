#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
struct IComparer_1_tC0A12A847AF97F369A5CE9A0CCE71CE18EE1440E;
struct IComparer_1_tFF82757E61ADB2F43ADCC4569ED37780CD25F77C;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_t597CBCE5CEF49705B4A36C4C8EEB338379AE5D37;
struct List_1_t93708B96299F4A940ABC0B448E614CD079399B24;
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct ZipGenericExtraFieldU5BU5D_tED0C9EBD3CD7407C703C0270ADF664031EFB66AA;
struct PartInfoU5BU5D_t06472AD6405EA62478C3500C64FB6C18E9D2FA93;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
struct CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD;
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct Exception_t;
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
struct OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A;
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0;
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
struct String_t;
struct StringBuilder_t;
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
struct SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013;
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t93708B96299F4A940ABC0B448E614CD079399B24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0791B09CABC0E68E7F2304266905D44E98CEDC7E;
IL2CPP_EXTERN_C String_t* _stringLiteral0B528BD170B49C3CB8F50BDEAD2B38212C231624;
IL2CPP_EXTERN_C String_t* _stringLiteral15063F649207A4502DFEDF591587E7346BAB3F68;
IL2CPP_EXTERN_C String_t* _stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F;
IL2CPP_EXTERN_C String_t* _stringLiteral4A35711F04591C991A81A9D22E0CDE9259A87DCA;
IL2CPP_EXTERN_C String_t* _stringLiteral500F60EB9E3DE018FD863ABFD829D66AD1729E7A;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral61C5FAF86CDC709F2F0702EF222D96C07CC6BE35;
IL2CPP_EXTERN_C String_t* _stringLiteral623990995459AA52EC886FD82EF05F80DEA9ED84;
IL2CPP_EXTERN_C String_t* _stringLiteral636EB8D73825D70BDF3A172729D5FB93E26F1C50;
IL2CPP_EXTERN_C String_t* _stringLiteral68509826B9B4E2C36849372302835C2CD03B9DDF;
IL2CPP_EXTERN_C String_t* _stringLiteral692393D5247888503911656CF899688704CC9517;
IL2CPP_EXTERN_C String_t* _stringLiteral6CCCDA0389221703BED57A3EE0D8A609EA17BAB9;
IL2CPP_EXTERN_C String_t* _stringLiteral731311D2159DAC2D5B655503F1BB10A3F2B9929F;
IL2CPP_EXTERN_C String_t* _stringLiteral73A0C07EF772937789C242D3D453CD9350FB99F0;
IL2CPP_EXTERN_C String_t* _stringLiteral786C8B84D2A3CE650648FDFADD258EC78845513D;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral88707C058082A5D2B2C76E6CB545AB47CC9CB812;
IL2CPP_EXTERN_C String_t* _stringLiteral9B52EC354AB10F26E2AE0B6F5773BB8F5D98BB01;
IL2CPP_EXTERN_C String_t* _stringLiteral9F2F1003AD681D270AFDD661A98E96EA8A697B9F;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB891AD4DFE6DB50C48C0DF3C4AB1A58196AE55EA;
IL2CPP_EXTERN_C String_t* _stringLiteralC29D2239559EB0FC1E59107D531B6B1A1C368377;
IL2CPP_EXTERN_C String_t* _stringLiteralD13F98CE1E9F61828B3C7915C0847C1BC062140E;
IL2CPP_EXTERN_C String_t* _stringLiteralD1BC37757802217E304B7B515215AC6EE461954E;
IL2CPP_EXTERN_C String_t* _stringLiteralD2AA0D72C00724D4B7AF59A93BF30C2FD4391EA1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDFF3F023C4F679C61BE466F496005BC400BAD358;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralFBBA55520D2870374A577C846902E49D31C1E467;
IL2CPP_EXTERN_C String_t* _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A;
IL2CPP_EXTERN_C const RuntimeMethod* ApkImpl_GetStreamingAssetsInfoFromJar_mAB288AA309341670EB0E5001CB3D3206506E9C4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_BinarySearch_TisString_t_m1813BE3ED368569F175E1081B32D1D43F284F743_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_BinarySearch_m255516D27773CAB514B4E14DC21C29A900375964_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m4663EF87406A87696D170E2F4594CDB8C316DB49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_mECB93A26B63235C4C4D07154AF3EA66EBA84F4CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mAD6DF10DA37B80DF82F96009D5D1417A8F13A5B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4265981BE0D128C3FF9E47376F89C037F6F5F326_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC9F8B93F67AFC1ED97B9CE427850FC247868E3F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC55C5B522F951A232520E4165B84B0113AB3FDC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mBA8FDDC14C62895FD9F034CB24C5F5E1D1160B70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PathUtil_NormalizeRelativePath_m7B439205813D27F5E907C20AFAA7161A66D9A57E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubReadOnlyStream_Flush_m4E08C253CC94AB9DF38549032DA11F64FFC6F04D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubReadOnlyStream_SetLength_m285C445F9FAEA57944E5814121EAE303A9C891B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubReadOnlyStream_ThrowIfCantRead_mB7D02BA6EC5188328DA0F0C59EA951C8B2E536D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubReadOnlyStream_ThrowIfDisposed_mDE35106D407CCDE36BC6F250294E65AFD036F29B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubReadOnlyStream_Write_mB2D856675271393DE307AFBA830A88101513ECF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubReadOnlyStream__ctor_m36D814130033DC43E86FD1FA83961EE9E3BE4549_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubReadOnlyStream__ctor_m9A64726FC38861B5B4762B1163DB5B911513A5AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Zip64ExtraField_TryGetZip64BlockFromGenericExtraField_m85A7520BE5A9F86324E3E7B1F6831EE6C1B58211_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipHelper_AdvanceToPosition_m5A4492EBB0D4AA1F633A9E349C76C5844ABD755B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipHelper_ReadBytes_m873AAC59C7D65FF9CE77ED66B7012D7770A8EC2B_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct PartInfoU5BU5D_t06472AD6405EA62478C3500C64FB6C18E9D2FA93;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tCDD6217B64AC66A9A5C56F0D53F95372BC0F36C5 
{
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t597CBCE5CEF49705B4A36C4C8EEB338379AE5D37  : public RuntimeObject
{
	ZipGenericExtraFieldU5BU5D_tED0C9EBD3CD7407C703C0270ADF664031EFB66AA* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t93708B96299F4A940ABC0B448E614CD079399B24  : public RuntimeObject
{
	PartInfoU5BU5D_t06472AD6405EA62478C3500C64FB6C18E9D2FA93* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct BetterStreamingAssets_t84724D489C99A9573CD7D596B20006279EA48A1E  : public RuntimeObject
{
};
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer;
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer;
	int32_t ___m_maxCharsSize;
	bool ___m_2BytesPerChar;
	bool ___m_isMemoryStream;
	bool ___m_leaveOpen;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	int32_t ___m_codePage;
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem;
	bool ___m_deserializedFromEverett;
	bool ___m_isReadOnly;
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback;
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct PathUtil_tDDF679C9AAB0F8DB09575AC5925AAE3E8769C1C0  : public RuntimeObject
{
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
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06  : public RuntimeObject
{
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
struct ZipArchiveUtils_tFAEEC2018BDD36DA8409BCBB137AC03D0EB162A2  : public RuntimeObject
{
};
struct ZipHelper_t32B0AFB4ADB176A49CE1FA50F337DAAF12387DF9  : public RuntimeObject
{
};
struct ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506  : public RuntimeObject
{
};
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	bool ___hasValue;
	int32_t ___value;
};
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	bool ___hasValue;
	int64_t ___value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170  : public StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06
{
	bool ____ignoreCase;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
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
struct Zip64EndOfCentralDirectoryLocator_t992C6B9D349AB3E16CF1E56834BAE57D241F4E79 
{
	uint32_t ___NumberOfDiskWithZip64EOCD;
	uint64_t ___OffsetOfZip64EOCD;
	uint32_t ___TotalNumberOfDisks;
};
struct Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66 
{
	uint64_t ___SizeOfThisRecord;
	uint16_t ___VersionMadeBy;
	uint16_t ___VersionNeededToExtract;
	uint32_t ___NumberOfThisDisk;
	uint32_t ___NumberOfDiskWithStartOfCD;
	uint64_t ___NumberOfEntriesOnThisDisk;
	uint64_t ___NumberOfEntriesTotal;
	uint64_t ___SizeOfCentralDirectory;
	uint64_t ___OffsetOfCentralDirectory;
};
struct ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC 
{
	uint8_t ___VersionMadeByCompatibility;
	uint8_t ___VersionMadeBySpecification;
	uint16_t ___VersionNeededToExtract;
	uint16_t ___GeneralPurposeBitFlag;
	uint16_t ___CompressionMethod;
	uint32_t ___LastModified;
	uint32_t ___Crc32;
	int64_t ___CompressedSize;
	int64_t ___UncompressedSize;
	uint16_t ___FilenameLength;
	uint16_t ___ExtraFieldLength;
	uint16_t ___FileCommentLength;
	int32_t ___DiskNumberStart;
	uint16_t ___InternalFileAttributes;
	uint32_t ___ExternalFileAttributes;
	int64_t ___RelativeOffsetOfLocalHeader;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Filename;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FileComment;
	List_1_t597CBCE5CEF49705B4A36C4C8EEB338379AE5D37* ___ExtraFields;
};
struct ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshaled_pinvoke
{
	uint8_t ___VersionMadeByCompatibility;
	uint8_t ___VersionMadeBySpecification;
	uint16_t ___VersionNeededToExtract;
	uint16_t ___GeneralPurposeBitFlag;
	uint16_t ___CompressionMethod;
	uint32_t ___LastModified;
	uint32_t ___Crc32;
	int64_t ___CompressedSize;
	int64_t ___UncompressedSize;
	uint16_t ___FilenameLength;
	uint16_t ___ExtraFieldLength;
	uint16_t ___FileCommentLength;
	int32_t ___DiskNumberStart;
	uint16_t ___InternalFileAttributes;
	uint32_t ___ExternalFileAttributes;
	int64_t ___RelativeOffsetOfLocalHeader;
	Il2CppSafeArray* ___Filename;
	Il2CppSafeArray* ___FileComment;
	List_1_t597CBCE5CEF49705B4A36C4C8EEB338379AE5D37* ___ExtraFields;
};
struct ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshaled_com
{
	uint8_t ___VersionMadeByCompatibility;
	uint8_t ___VersionMadeBySpecification;
	uint16_t ___VersionNeededToExtract;
	uint16_t ___GeneralPurposeBitFlag;
	uint16_t ___CompressionMethod;
	uint32_t ___LastModified;
	uint32_t ___Crc32;
	int64_t ___CompressedSize;
	int64_t ___UncompressedSize;
	uint16_t ___FilenameLength;
	uint16_t ___ExtraFieldLength;
	uint16_t ___FileCommentLength;
	int32_t ___DiskNumberStart;
	uint16_t ___InternalFileAttributes;
	uint32_t ___ExternalFileAttributes;
	int64_t ___RelativeOffsetOfLocalHeader;
	Il2CppSafeArray* ___Filename;
	Il2CppSafeArray* ___FileComment;
	List_1_t597CBCE5CEF49705B4A36C4C8EEB338379AE5D37* ___ExtraFields;
};
struct ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036 
{
	uint32_t ___Signature;
	uint16_t ___NumberOfThisDisk;
	uint16_t ___NumberOfTheDiskWithTheStartOfTheCentralDirectory;
	uint16_t ___NumberOfEntriesInTheCentralDirectoryOnThisDisk;
	uint16_t ___NumberOfEntriesInTheCentralDirectory;
	uint32_t ___SizeOfCentralDirectory;
	uint32_t ___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ArchiveComment;
};
struct ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshaled_pinvoke
{
	uint32_t ___Signature;
	uint16_t ___NumberOfThisDisk;
	uint16_t ___NumberOfTheDiskWithTheStartOfTheCentralDirectory;
	uint16_t ___NumberOfEntriesInTheCentralDirectoryOnThisDisk;
	uint16_t ___NumberOfEntriesInTheCentralDirectory;
	uint32_t ___SizeOfCentralDirectory;
	uint32_t ___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber;
	Il2CppSafeArray* ___ArchiveComment;
};
struct ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshaled_com
{
	uint32_t ___Signature;
	uint16_t ___NumberOfThisDisk;
	uint16_t ___NumberOfTheDiskWithTheStartOfTheCentralDirectory;
	uint16_t ___NumberOfEntriesInTheCentralDirectoryOnThisDisk;
	uint16_t ___NumberOfEntriesInTheCentralDirectory;
	uint32_t ___SizeOfCentralDirectory;
	uint32_t ___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber;
	Il2CppSafeArray* ___ArchiveComment;
};
struct ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724 
{
	uint16_t ____tag;
	uint16_t ____size;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____data;
};
struct ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshaled_pinvoke
{
	uint16_t ____tag;
	uint16_t ____size;
	Il2CppSafeArray* ____data;
};
struct ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshaled_com
{
	uint16_t ____tag;
	uint16_t ____size;
	Il2CppSafeArray* ____data;
};
struct ZipLocalFileHeader_t44ECEA3266CB2DE89DCED8BEC262BF526604D370 
{
	union
	{
		struct
		{
		};
		uint8_t ZipLocalFileHeader_t44ECEA3266CB2DE89DCED8BEC262BF526604D370__padding[1];
	};
};
struct ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642 
{
	String_t* ___readPath;
	int64_t ___size;
	int64_t ___offset;
	uint32_t ___crc32;
};
struct ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshaled_pinvoke
{
	char* ___readPath;
	int64_t ___size;
	int64_t ___offset;
	uint32_t ___crc32;
};
struct ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshaled_com
{
	Il2CppChar* ___readPath;
	int64_t ___size;
	int64_t ___offset;
	uint32_t ___crc32;
};
struct PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D 
{
	int64_t ___size;
	int64_t ___offset;
	uint32_t ___crc32;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf;
	String_t* ___name;
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle;
	bool ___isExposed;
	int64_t ___append_startpos;
	int32_t ___access;
	bool ___owner;
	bool ___async;
	bool ___canseek;
	bool ___anonymous;
	bool ___buf_dirty;
	int32_t ___buf_size;
	int32_t ___buf_length;
	int32_t ___buf_offset;
	int64_t ___buf_start;
};
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer;
	int32_t ____origin;
	int32_t ____position;
	int32_t ____length;
	int32_t ____capacity;
	bool ____expandable;
	bool ____writable;
	bool ____exposable;
	bool ____isOpen;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask;
};
struct OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0  : public OrdinalComparer_tBB06915E213A5D4C8C617ED5478E8BF30C2B2170
{
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	int64_t ___m_offset;
	bool ___m_leaveOpen;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___m_length;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_actualStream;
	int64_t ___m_position;
};
struct Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9 
{
	uint16_t ____size;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____uncompressedSize;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____compressedSize;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____localHeaderOffset;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____startDiskNumber;
};
struct Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshaled_pinvoke
{
	uint16_t ____size;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____uncompressedSize;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____compressedSize;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____localHeaderOffset;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____startDiskNumber;
};
struct Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshaled_com
{
	uint16_t ____size;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____uncompressedSize;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____compressedSize;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ____localHeaderOffset;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____startDiskNumber;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013  : public Exception_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
};
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	String_t* ____objectName;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray;
};
struct List_1_t597CBCE5CEF49705B4A36C4C8EEB338379AE5D37_StaticFields
{
	ZipGenericExtraFieldU5BU5D_tED0C9EBD3CD7407C703C0270ADF664031EFB66AA* ___s_emptyArray;
};
struct List_1_t93708B96299F4A940ABC0B448E614CD079399B24_StaticFields
{
	PartInfoU5BU5D_t06472AD6405EA62478C3500C64FB6C18E9D2FA93* ___s_emptyArray;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding;
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings;
	RuntimeObject* ___s_InternalSyncObject;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields
{
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCulture;
	CultureAwareComparer_t5822A6535A6EB4C448D1B7736067D1188BAEE8CD* ___s_invariantCultureIgnoreCase;
	OrdinalCaseSensitiveComparer_t581CA7CB51DCF00B6012A697A4B4B3067144521A* ___s_ordinal;
	OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* ___s_ordinalIgnoreCase;
};
struct ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_paths;
	PartInfoU5BU5D_t06472AD6405EA62478C3500C64FB6C18E9D2FA93* ___s_streamingAssets;
	String_t* ___s_root;
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
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle;
	RuntimeObject* ___buf_recycle_lock;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct PartInfoU5BU5D_t06472AD6405EA62478C3500C64FB6C18E9D2FA93  : public RuntimeArray
{
	ALIGN_FIELD (8) PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D m_Items[1];

	inline PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D value)
	{
		m_Items[index] = value;
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m4265981BE0D128C3FF9E47376F89C037F6F5F326_gshared (List_1_t93708B96299F4A940ABC0B448E614CD079399B24* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartInfoU5BU5D_t06472AD6405EA62478C3500C64FB6C18E9D2FA93* List_1_ToArray_mAD6DF10DA37B80DF82F96009D5D1417A8F13A5B5_gshared (List_1_t93708B96299F4A940ABC0B448E614CD079399B24* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisRuntimeObject_mE25EE59ABB20AC401C5EC394D3A4497C9BA27C9D_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m4F1B6B4A07B00B2E604D0A793600C10835E40513_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mECB93A26B63235C4C4D07154AF3EA66EBA84F4CD_gshared (List_1_t93708B96299F4A940ABC0B448E614CD079399B24* __this, int32_t ___0_index, PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D List_1_get_Item_mC55C5B522F951A232520E4165B84B0113AB3FDC1_gshared (List_1_t93708B96299F4A940ABC0B448E614CD079399B24* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mBA8FDDC14C62895FD9F034CB24C5F5E1D1160B70_gshared (List_1_t93708B96299F4A940ABC0B448E614CD079399B24* __this, int32_t ___0_index, PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mC9F8B93F67AFC1ED97B9CE427850FC247868E3F3_gshared_inline (List_1_t93708B96299F4A940ABC0B448E614CD079399B24* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_gshared (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_gshared (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApkImpl_Initialize_m85A1F593BC7C607B44732020F54B462BFE4B0A83 (String_t* ___0_dataPath, String_t* ___1_streamingAssetsPath, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ApkImpl_TryGetInfo_m2E7B7BB7CBEFFC68B5D2CC76CD8A8BA638D1D3BB (String_t* ___0_path, ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642* ___1_info, const RuntimeMethod* method) ;
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
inline void List_1__ctor_m4265981BE0D128C3FF9E47376F89C037F6F5F326 (List_1_t93708B96299F4A940ABC0B448E614CD079399B24* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t93708B96299F4A940ABC0B448E614CD079399B24*, const RuntimeMethod*))List_1__ctor_m4265981BE0D128C3FF9E47376F89C037F6F5F326_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApkImpl_GetStreamingAssetsInfoFromJar_mAB288AA309341670EB0E5001CB3D3206506E9C4E (String_t* ___0_apkPath, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___1_paths, List_1_t93708B96299F4A940ABC0B448E614CD079399B24* ___2_parts, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6 (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6 (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___0_path, const RuntimeMethod* method) ;
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
inline PartInfoU5BU5D_t06472AD6405EA62478C3500C64FB6C18E9D2FA93* List_1_ToArray_mAD6DF10DA37B80DF82F96009D5D1417A8F13A5B5 (List_1_t93708B96299F4A940ABC0B448E614CD079399B24* __this, const RuntimeMethod* method)
{
	return ((  PartInfoU5BU5D_t06472AD6405EA62478C3500C64FB6C18E9D2FA93* (*) (List_1_t93708B96299F4A940ABC0B448E614CD079399B24*, const RuntimeMethod*))List_1_ToArray_mAD6DF10DA37B80DF82F96009D5D1417A8F13A5B5_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathUtil_NormalizeRelativePath_m7B439205813D27F5E907C20AFAA7161A66D9A57E (String_t* ___0_relative, bool ___1_forceTrailingSlash, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline (const RuntimeMethod* method) ;
inline int32_t Array_BinarySearch_TisString_t_m1813BE3ED368569F175E1081B32D1D43F284F743 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_array, String_t* ___1_value, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, String_t*, RuntimeObject*, const RuntimeMethod*))Array_BinarySearch_TisRuntimeObject_mE25EE59ABB20AC401C5EC394D3A4497C9BA27C9D_gshared)(___0_array, ___1_value, ___2_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_OpenRead_m6181B052EB0E98D2E18FAC79E7744D766BA4244C (String_t* ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___1_reader, int64_t* ___2_expectedNumberOfEntries, int64_t* ___3_centralDirectoryStart, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
inline int32_t List_1_BinarySearch_m255516D27773CAB514B4E14DC21C29A900375964 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, RuntimeObject*, const RuntimeMethod*))List_1_BinarySearch_m4F1B6B4A07B00B2E604D0A793600C10835E40513_gshared)(__this, ___0_item, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void List_1_Insert_m4663EF87406A87696D170E2F4594CDB8C316DB49 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___0_index, String_t* ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, String_t*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_Insert_mECB93A26B63235C4C4D07154AF3EA66EBA84F4CD (List_1_t93708B96299F4A940ABC0B448E614CD079399B24* __this, int32_t ___0_index, PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t93708B96299F4A940ABC0B448E614CD079399B24*, int32_t, PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D, const RuntimeMethod*))List_1_Insert_mECB93A26B63235C4C4D07154AF3EA66EBA84F4CD_gshared)(__this, ___0_index, ___1_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipCentralDirectoryFileHeader_TryReadBlock_mCC57C7A3DB7E627C07703FE56A23977904D87243 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* ___1_header, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* __this, String_t* ___0_msg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipArchiveException__ctor_m3049042ABD37E1BBE6970CE41F390DD532955AED (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* __this, String_t* ___0_msg, Exception_t* ___1_inner, const RuntimeMethod* method) ;
inline PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D List_1_get_Item_mC55C5B522F951A232520E4165B84B0113AB3FDC1 (List_1_t93708B96299F4A940ABC0B448E614CD079399B24* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D (*) (List_1_t93708B96299F4A940ABC0B448E614CD079399B24*, int32_t, const RuntimeMethod*))List_1_get_Item_mC55C5B522F951A232520E4165B84B0113AB3FDC1_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipLocalFileHeader_TrySkipBlock_m58F32F4479333BE5F4730EB6E4CD4FD4B53C45AB (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, const RuntimeMethod* method) ;
inline void List_1_set_Item_mBA8FDDC14C62895FD9F034CB24C5F5E1D1160B70 (List_1_t93708B96299F4A940ABC0B448E614CD079399B24* __this, int32_t ___0_index, PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t93708B96299F4A940ABC0B448E614CD079399B24*, int32_t, PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D, const RuntimeMethod*))List_1_set_Item_mBA8FDDC14C62895FD9F034CB24C5F5E1D1160B70_gshared)(__this, ___0_index, ___1_value, method);
}
inline int32_t List_1_get_Count_mC9F8B93F67AFC1ED97B9CE427850FC247868E3F3_inline (List_1_t93708B96299F4A940ABC0B448E614CD079399B24* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t93708B96299F4A940ABC0B448E614CD079399B24*, const RuntimeMethod*))List_1_get_Count_mC9F8B93F67AFC1ED97B9CE427850FC247868E3F3_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D (StringBuilder_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90 (StringBuilder_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PathUtil_IsValidCharacter_mB61FAF3517472920384EC1280D78D48E2E629E6E (Il2CppChar ___0_c, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubReadOnlyStream__ctor_m36D814130033DC43E86FD1FA83961EE9E3BE4549 (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_actualStream, bool ___1_leaveOpen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1 (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, int64_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, int64_t, const RuntimeMethod*))Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubReadOnlyStream_ThrowIfDisposed_mDE35106D407CCDE36BC6F250294E65AFD036F29B (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, const RuntimeMethod* method) ;
inline bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline)(__this, method);
}
inline int64_t Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubReadOnlyStream_ThrowIfCantRead_mB7D02BA6EC5188328DA0F0C59EA951C8B2E536D1 (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, bool ___0_disposing, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_m5C356C25295E89559C120CB4562783AAF7F41C84 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___0_objectName, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ZipGenericExtraField_get_Tag_m759B6ECFDBC6D044352C08FB434AEC491B3E41E4_inline (ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ZipGenericExtraField_get_Size_mFEE59D1C38FA6DDB6FEDF1607A19FF167B4B7422_inline (ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ZipGenericExtraField_get_Data_mF8133FF89E762F3B70FCF61010858511B7137296_inline (ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Zip64ExtraField_get_UncompressedSize_m6DCFFD258F31202A9EDE82F260B284F2CBAC641F_inline (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Zip64ExtraField_get_CompressedSize_m990D9DD08B3C53024636DF0802E25B88075D603D_inline (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Zip64ExtraField_get_LocalHeaderOffset_m232842FCC1BF48E123B2716FBAC8B769F0B2B07A_inline (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 Zip64ExtraField_get_StartDiskNumber_m6A797299BED711B7BDBC42993C746F14BE2C49D8_inline (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Zip64ExtraField_TryGetZip64BlockFromGenericExtraField_m85A7520BE5A9F86324E3E7B1F6831EE6C1B58211 (ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724 ___0_extraField, bool ___1_readUncompressedSize, bool ___2_readCompressedSize, bool ___3_readLocalHeaderOffset, bool ___4_readStartDiskNumber, Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* ___5_zip64Block, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipGenericExtraField_TryReadBlock_m2BB3B9A85BF63DD87C5F97A456C5C00ECD168CEB (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, int64_t ___1_endExtraField, ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* ___2_field, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___0_value, method);
}
inline int64_t Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_gshared_inline)(__this, method);
}
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline)(__this, method);
}
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubReadOnlyStream__ctor_m9A64726FC38861B5B4762B1163DB5B911513A5AA (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_actualStream, int64_t ___1_offset, int64_t ___2_length, bool ___3_leaveOpen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9 Zip64ExtraField_GetJustZip64Block_m6EE1037758B78F91059CBC864A95D2912BACCE78 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_extraFieldStream, bool ___1_readUncompressedSize, bool ___2_readCompressedSize, bool ___3_readLocalHeaderOffset, bool ___4_readStartDiskNumber, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipHelper_AdvanceToPosition_m5A4492EBB0D4AA1F633A9E349C76C5844ABD755B (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int64_t ___1_position, const RuntimeMethod* method) ;
inline int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mF001EA9B9B8DBFBDD9B63B97A5CC6F0D7FD9F2B3 (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipHelper_SeekBackwardsAndRead_mFA8B804E147D2F19F68002F7353639C92CBC411D (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t* ___2_bufferPointer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipHelper_ReadBytes_m873AAC59C7D65FF9CE77ED66B7012D7770A8EC2B (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t ___2_bytesToRead, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipHelper_SeekBackwardsToSignature_m3465A2A9A461BCF8F8E8D82579B17182338C4B4D (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, uint32_t ___1_signatureToFind, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipEndOfCentralDirectoryBlock_TryReadBlock_mEEBDCF160CD99D8A41EC4A6C0363F16EF7E3FB4C (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036* ___1_eocdBlock, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Zip64EndOfCentralDirectoryLocator_TryReadBlock_mC1CFF884A9974D065D505E6FBA8DE963B0A9B096 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, Zip64EndOfCentralDirectoryLocator_t992C6B9D349AB3E16CF1E56834BAE57D241F4E79* ___1_zip64EOCDLocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Zip64EndOfCentralDirectoryRecord_TryReadBlock_mA35089F309255B687FFD1A07C4B553FC83045FF3 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66* ___1_zip64EOCDRecord, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BetterStreamingAssets_Initialize_m4734FAB5D4C3B306447B4FB96033F4D6506E7CF8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7(NULL);
		String_t* L_1;
		L_1 = Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5(NULL);
		ApkImpl_Initialize_m85A1F593BC7C607B44732020F54B462BFE4B0A83(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BetterStreamingAssets_FileExists_m9DB4D4860ED3C0090C0005DEBA238A80E24A77E1 (String_t* ___0_path, const RuntimeMethod* method) 
{
	ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___0_path;
		bool L_1;
		L_1 = ApkImpl_TryGetInfo_m2E7B7BB7CBEFFC68B5D2CC76CD8A8BA638D1D3BB(L_0, (&V_0), NULL);
		return L_1;
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
IL2CPP_EXTERN_C void ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshal_pinvoke(const ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642& unmarshaled, ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshaled_pinvoke& marshaled)
{
	marshaled.___readPath = il2cpp_codegen_marshal_string(unmarshaled.___readPath);
	marshaled.___size = unmarshaled.___size;
	marshaled.___offset = unmarshaled.___offset;
	marshaled.___crc32 = unmarshaled.___crc32;
}
IL2CPP_EXTERN_C void ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshal_pinvoke_back(const ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshaled_pinvoke& marshaled, ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642& unmarshaled)
{
	unmarshaled.___readPath = il2cpp_codegen_marshal_string_result(marshaled.___readPath);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___readPath), (void*)il2cpp_codegen_marshal_string_result(marshaled.___readPath));
	int64_t unmarshaledsize_temp_1 = 0;
	unmarshaledsize_temp_1 = marshaled.___size;
	unmarshaled.___size = unmarshaledsize_temp_1;
	int64_t unmarshaledoffset_temp_2 = 0;
	unmarshaledoffset_temp_2 = marshaled.___offset;
	unmarshaled.___offset = unmarshaledoffset_temp_2;
	uint32_t unmarshaledcrc32_temp_3 = 0;
	unmarshaledcrc32_temp_3 = marshaled.___crc32;
	unmarshaled.___crc32 = unmarshaledcrc32_temp_3;
}
IL2CPP_EXTERN_C void ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshal_pinvoke_cleanup(ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___readPath);
	marshaled.___readPath = NULL;
}
IL2CPP_EXTERN_C void ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshal_com(const ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642& unmarshaled, ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshaled_com& marshaled)
{
	marshaled.___readPath = il2cpp_codegen_marshal_bstring(unmarshaled.___readPath);
	marshaled.___size = unmarshaled.___size;
	marshaled.___offset = unmarshaled.___offset;
	marshaled.___crc32 = unmarshaled.___crc32;
}
IL2CPP_EXTERN_C void ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshal_com_back(const ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshaled_com& marshaled, ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642& unmarshaled)
{
	unmarshaled.___readPath = il2cpp_codegen_marshal_bstring_result(marshaled.___readPath);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___readPath), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___readPath));
	int64_t unmarshaledsize_temp_1 = 0;
	unmarshaledsize_temp_1 = marshaled.___size;
	unmarshaled.___size = unmarshaledsize_temp_1;
	int64_t unmarshaledoffset_temp_2 = 0;
	unmarshaledoffset_temp_2 = marshaled.___offset;
	unmarshaled.___offset = unmarshaledoffset_temp_2;
	uint32_t unmarshaledcrc32_temp_3 = 0;
	unmarshaledcrc32_temp_3 = marshaled.___crc32;
	unmarshaled.___crc32 = unmarshaledcrc32_temp_3;
}
IL2CPP_EXTERN_C void ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshal_com_cleanup(ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___readPath);
	marshaled.___readPath = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApkImpl_Initialize_m85A1F593BC7C607B44732020F54B462BFE4B0A83 (String_t* ___0_dataPath, String_t* ___1_streamingAssetsPath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mAD6DF10DA37B80DF82F96009D5D1417A8F13A5B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4265981BE0D128C3FF9E47376F89C037F6F5F326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t93708B96299F4A940ABC0B448E614CD079399B24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CCCDA0389221703BED57A3EE0D8A609EA17BAB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB891AD4DFE6DB50C48C0DF3C4AB1A58196AE55EA);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	List_1_t93708B96299F4A940ABC0B448E614CD079399B24* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		String_t* L_0 = ___0_dataPath;
		((ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_StaticFields*)il2cpp_codegen_static_fields_for(ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_il2cpp_TypeInfo_var))->___s_root = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_StaticFields*)il2cpp_codegen_static_fields_for(ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_il2cpp_TypeInfo_var))->___s_root), (void*)L_0);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t93708B96299F4A940ABC0B448E614CD079399B24* L_2 = (List_1_t93708B96299F4A940ABC0B448E614CD079399B24*)il2cpp_codegen_object_new(List_1_t93708B96299F4A940ABC0B448E614CD079399B24_il2cpp_TypeInfo_var);
		List_1__ctor_m4265981BE0D128C3FF9E47376F89C037F6F5F326(L_2, List_1__ctor_m4265981BE0D128C3FF9E47376F89C037F6F5F326_RuntimeMethod_var);
		V_1 = L_2;
		String_t* L_3 = ((ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_StaticFields*)il2cpp_codegen_static_fields_for(ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_il2cpp_TypeInfo_var))->___s_root;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = V_0;
		List_1_t93708B96299F4A940ABC0B448E614CD079399B24* L_5 = V_1;
		ApkImpl_GetStreamingAssetsInfoFromJar_mAB288AA309341670EB0E5001CB3D3206506E9C4E(L_3, L_4, L_5, NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_6, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0066;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (L_8)
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_9 = ___0_dataPath;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6(L_9, NULL);
		bool L_11;
		L_11 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_10, _stringLiteral6CCCDA0389221703BED57A3EE0D8A609EA17BAB9, NULL);
		if (!L_11)
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_12 = ___0_dataPath;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_13;
		L_13 = Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6(L_12, NULL);
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_13, _stringLiteralB891AD4DFE6DB50C48C0DF3C4AB1A58196AE55EA, NULL);
		V_2 = L_14;
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_15, NULL);
		if (!L_16)
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_17 = V_2;
		((ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_StaticFields*)il2cpp_codegen_static_fields_for(ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_il2cpp_TypeInfo_var))->___s_root = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_StaticFields*)il2cpp_codegen_static_fields_for(ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_il2cpp_TypeInfo_var))->___s_root), (void*)L_17);
		String_t* L_18 = V_2;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = V_0;
		List_1_t93708B96299F4A940ABC0B448E614CD079399B24* L_20 = V_1;
		ApkImpl_GetStreamingAssetsInfoFromJar_mAB288AA309341670EB0E5001CB3D3206506E9C4E(L_18, L_19, L_20, NULL);
	}

IL_0066:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21 = V_0;
		NullCheck(L_21);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22;
		L_22 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_21, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		((ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_StaticFields*)il2cpp_codegen_static_fields_for(ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_il2cpp_TypeInfo_var))->___s_paths = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_StaticFields*)il2cpp_codegen_static_fields_for(ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_il2cpp_TypeInfo_var))->___s_paths), (void*)L_22);
		List_1_t93708B96299F4A940ABC0B448E614CD079399B24* L_23 = V_1;
		NullCheck(L_23);
		PartInfoU5BU5D_t06472AD6405EA62478C3500C64FB6C18E9D2FA93* L_24;
		L_24 = List_1_ToArray_mAD6DF10DA37B80DF82F96009D5D1417A8F13A5B5(L_23, List_1_ToArray_mAD6DF10DA37B80DF82F96009D5D1417A8F13A5B5_RuntimeMethod_var);
		((ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_StaticFields*)il2cpp_codegen_static_fields_for(ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_il2cpp_TypeInfo_var))->___s_streamingAssets = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_StaticFields*)il2cpp_codegen_static_fields_for(ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_il2cpp_TypeInfo_var))->___s_streamingAssets), (void*)L_24);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ApkImpl_TryGetInfo_m2E7B7BB7CBEFFC68B5D2CC76CD8A8BA638D1D3BB (String_t* ___0_path, ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642* ___1_info, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_BinarySearch_TisString_t_m1813BE3ED368569F175E1081B32D1D43F284F743_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0 = ___0_path;
		String_t* L_1;
		L_1 = PathUtil_NormalizeRelativePath_m7B439205813D27F5E907C20AFAA7161A66D9A57E(L_0, (bool)0, NULL);
		___0_path = L_1;
		ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642* L_2 = ___1_info;
		il2cpp_codegen_initobj(L_2, sizeof(ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ((ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_StaticFields*)il2cpp_codegen_static_fields_for(ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_il2cpp_TypeInfo_var))->___s_paths;
		String_t* L_4 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_5;
		L_5 = StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline(NULL);
		int32_t L_6;
		L_6 = Array_BinarySearch_TisString_t_m1813BE3ED368569F175E1081B32D1D43F284F743(L_3, L_4, L_5, Array_BinarySearch_TisString_t_m1813BE3ED368569F175E1081B32D1D43F284F743_RuntimeMethod_var);
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		return (bool)0;
	}

IL_0027:
	{
		PartInfoU5BU5D_t06472AD6405EA62478C3500C64FB6C18E9D2FA93* L_8 = ((ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_StaticFields*)il2cpp_codegen_static_fields_for(ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_il2cpp_TypeInfo_var))->___s_streamingAssets;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = L_11;
		ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642* L_12 = ___1_info;
		PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D L_13 = V_1;
		uint32_t L_14 = L_13.___crc32;
		L_12->___crc32 = L_14;
		ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642* L_15 = ___1_info;
		PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D L_16 = V_1;
		int64_t L_17 = L_16.___offset;
		L_15->___offset = L_17;
		ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642* L_18 = ___1_info;
		PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D L_19 = V_1;
		int64_t L_20 = L_19.___size;
		L_18->___size = L_20;
		ReadInfo_t6C1BF9B2D953AC1D17F64D3C63EF47B6D6BD6642* L_21 = ___1_info;
		String_t* L_22 = ((ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_StaticFields*)il2cpp_codegen_static_fields_for(ApkImpl_t194892F1572A5525CFC41F87C30244CBE0B28506_il2cpp_TypeInfo_var))->___s_root;
		L_21->___readPath = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___readPath), (void*)L_22);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApkImpl_GetStreamingAssetsInfoFromJar_mAB288AA309341670EB0E5001CB3D3206506E9C4E (String_t* ___0_apkPath, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___1_paths, List_1_t93708B96299F4A940ABC0B448E614CD079399B24* ___2_parts, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_BinarySearch_m255516D27773CAB514B4E14DC21C29A900375964_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m4663EF87406A87696D170E2F4594CDB8C316DB49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_mECB93A26B63235C4C4D07154AF3EA66EBA84F4CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC9F8B93F67AFC1ED97B9CE427850FC247868E3F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC55C5B522F951A232520E4165B84B0113AB3FDC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mBA8FDDC14C62895FD9F034CB24C5F5E1D1160B70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F2F1003AD681D270AFDD661A98E96EA8A697B9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2AA0D72C00724D4B7AF59A93BF30C2FD4391EA1);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* V_1 = NULL;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t V_4 = 0;
	ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC V_5;
	memset((&V_5), 0, sizeof(V_5));
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D V_10;
	memset((&V_10), 0, sizeof(V_10));
	EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* V_11 = NULL;
	int32_t V_12 = 0;
	PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D V_13;
	memset((&V_13), 0, sizeof(V_13));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = ___0_apkPath;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1;
		L_1 = File_OpenRead_m6181B052EB0E98D2E18FAC79E7744D766BA4244C(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01b2:
			{
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_2 = V_0;
					if (!L_2)
					{
						goto IL_01bb;
					}
				}
				{
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_01bb:
				{
					return;
				}
			}
		});
		try
		{
			{
				FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_4 = V_0;
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_5 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
				BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_5, L_4, NULL);
				V_1 = L_5;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_01a8_1:
					{
						{
							BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_6 = V_1;
							if (!L_6)
							{
								goto IL_01b1_1;
							}
						}
						{
							BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = V_1;
							NullCheck(L_7);
							InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
						}

IL_01b1_1:
						{
							return;
						}
					}
				});
				try
				{
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_8 = V_0;
						NullCheck(L_8);
						bool L_9;
						L_9 = VirtualFuncInvoker0< bool >::Invoke(9, L_8);
						if (L_9)
						{
							goto IL_001c_2;
						}
					}
					{
						ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
						ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_10, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApkImpl_GetStreamingAssetsInfoFromJar_mAB288AA309341670EB0E5001CB3D3206506E9C4E_RuntimeMethod_var)));
					}

IL_001c_2:
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_11 = V_0;
						NullCheck(L_11);
						bool L_12;
						L_12 = VirtualFuncInvoker0< bool >::Invoke(10, L_11);
						if (L_12)
						{
							goto IL_002a_2;
						}
					}
					{
						ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
						ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_13, NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApkImpl_GetStreamingAssetsInfoFromJar_mAB288AA309341670EB0E5001CB3D3206506E9C4E_RuntimeMethod_var)));
					}

IL_002a_2:
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_14 = V_0;
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_15 = V_1;
						ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662(L_14, L_15, (&V_2), (&V_3), NULL);
					}
					try
					{
						{
							FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_16 = V_0;
							int64_t L_17 = V_3;
							NullCheck(L_16);
							int64_t L_18;
							L_18 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(35, L_16, L_17, 0);
							V_4 = ((int64_t)0);
							goto IL_0120_3;
						}

IL_0047_3:
						{
							ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC L_19 = V_5;
							int64_t L_20 = L_19.___CompressedSize;
							ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC L_21 = V_5;
							int64_t L_22 = L_21.___UncompressedSize;
							if ((!(((uint64_t)L_20) == ((uint64_t)L_22))))
							{
								goto IL_0119_3;
							}
						}
						{
							Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_23;
							L_23 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
							ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC L_24 = V_5;
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = L_24.___Filename;
							NullCheck(L_23);
							String_t* L_26;
							L_26 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(47, L_23, L_25);
							V_6 = L_26;
							String_t* L_27 = V_6;
							NullCheck(L_27);
							bool L_28;
							L_28 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_27, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, NULL);
							if (L_28)
							{
								goto IL_0119_3;
							}
						}
						{
							String_t* L_29 = V_6;
							NullCheck(L_29);
							bool L_30;
							L_30 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_29, _stringLiteral9F2F1003AD681D270AFDD661A98E96EA8A697B9F, NULL);
							if (!L_30)
							{
								goto IL_0119_3;
							}
						}
						{
							String_t* L_31 = V_6;
							NullCheck(L_31);
							bool L_32;
							L_32 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_31, _stringLiteralD2AA0D72C00724D4B7AF59A93BF30C2FD4391EA1, NULL);
							if (L_32)
							{
								goto IL_0119_3;
							}
						}
						{
							String_t* L_33 = V_6;
							NullCheck(L_33);
							String_t* L_34;
							L_34 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_33, 6, NULL);
							V_7 = L_34;
							il2cpp_codegen_initobj((&V_10), sizeof(PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D));
							ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC L_35 = V_5;
							uint32_t L_36 = L_35.___Crc32;
							(&V_10)->___crc32 = L_36;
							ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC L_37 = V_5;
							int64_t L_38 = L_37.___RelativeOffsetOfLocalHeader;
							(&V_10)->___offset = L_38;
							ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC L_39 = V_5;
							int64_t L_40 = L_39.___UncompressedSize;
							(&V_10)->___size = L_40;
							PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D L_41 = V_10;
							V_8 = L_41;
							List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_42 = ___1_paths;
							String_t* L_43 = V_7;
							il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
							StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* L_44;
							L_44 = StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline(NULL);
							NullCheck(L_42);
							int32_t L_45;
							L_45 = List_1_BinarySearch_m255516D27773CAB514B4E14DC21C29A900375964(L_42, L_43, L_44, List_1_BinarySearch_m255516D27773CAB514B4E14DC21C29A900375964_RuntimeMethod_var);
							V_9 = L_45;
							int32_t L_46 = V_9;
							if ((((int32_t)L_46) < ((int32_t)0)))
							{
								goto IL_0103_3;
							}
						}
						{
							String_t* L_47 = V_6;
							String_t* L_48;
							L_48 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral786C8B84D2A3CE650648FDFADD258EC78845513D)), L_47, NULL);
							InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_49 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
							InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_49, L_48, NULL);
							IL2CPP_RAISE_MANAGED_EXCEPTION(L_49, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApkImpl_GetStreamingAssetsInfoFromJar_mAB288AA309341670EB0E5001CB3D3206506E9C4E_RuntimeMethod_var)));
						}

IL_0103_3:
						{
							List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_50 = ___1_paths;
							int32_t L_51 = V_9;
							String_t* L_52 = V_7;
							NullCheck(L_50);
							List_1_Insert_m4663EF87406A87696D170E2F4594CDB8C316DB49(L_50, ((~L_51)), L_52, List_1_Insert_m4663EF87406A87696D170E2F4594CDB8C316DB49_RuntimeMethod_var);
							List_1_t93708B96299F4A940ABC0B448E614CD079399B24* L_53 = ___2_parts;
							int32_t L_54 = V_9;
							PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D L_55 = V_8;
							NullCheck(L_53);
							List_1_Insert_mECB93A26B63235C4C4D07154AF3EA66EBA84F4CD(L_53, ((~L_54)), L_55, List_1_Insert_mECB93A26B63235C4C4D07154AF3EA66EBA84F4CD_RuntimeMethod_var);
						}

IL_0119_3:
						{
							int64_t L_56 = V_4;
							V_4 = ((int64_t)il2cpp_codegen_add(L_56, ((int64_t)1)));
						}

IL_0120_3:
						{
							BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_57 = V_1;
							bool L_58;
							L_58 = ZipCentralDirectoryFileHeader_TryReadBlock_mCC57C7A3DB7E627C07703FE56A23977904D87243(L_57, (&V_5), NULL);
							if (L_58)
							{
								goto IL_0047_3;
							}
						}
						{
							int64_t L_59 = V_4;
							int64_t L_60 = V_2;
							if ((((int64_t)L_59) == ((int64_t)L_60)))
							{
								goto IL_013d_3;
							}
						}
						{
							ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_61 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
							ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_61, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral500F60EB9E3DE018FD863ABFD829D66AD1729E7A)), NULL);
							IL2CPP_RAISE_MANAGED_EXCEPTION(L_61, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApkImpl_GetStreamingAssetsInfoFromJar_mAB288AA309341670EB0E5001CB3D3206506E9C4E_RuntimeMethod_var)));
						}

IL_013d_3:
						{
							goto IL_014e_2;
						}
					}
					catch(Il2CppExceptionWrapper& e)
					{
						if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
						{
							IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
							goto CATCH_013f_2;
						}
						throw e;
					}

CATCH_013f_2:
					{
						EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* L_62 = ((EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*)IL2CPP_GET_ACTIVE_EXCEPTION(EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*));;
						V_11 = L_62;
						EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* L_63 = V_11;
						ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_64 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
						ZipArchiveException__ctor_m3049042ABD37E1BBE6970CE41F390DD532955AED(L_64, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88707C058082A5D2B2C76E6CB545AB47CC9CB812)), L_63, NULL);
						IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_64, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApkImpl_GetStreamingAssetsInfoFromJar_mAB288AA309341670EB0E5001CB3D3206506E9C4E_RuntimeMethod_var)));
					}

IL_014e_2:
					{
						V_12 = 0;
						goto IL_019c_2;
					}

IL_0153_2:
					{
						List_1_t93708B96299F4A940ABC0B448E614CD079399B24* L_65 = ___2_parts;
						int32_t L_66 = V_12;
						NullCheck(L_65);
						PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D L_67;
						L_67 = List_1_get_Item_mC55C5B522F951A232520E4165B84B0113AB3FDC1(L_65, L_66, List_1_get_Item_mC55C5B522F951A232520E4165B84B0113AB3FDC1_RuntimeMethod_var);
						V_13 = L_67;
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_68 = V_0;
						PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D L_69 = V_13;
						int64_t L_70 = L_69.___offset;
						NullCheck(L_68);
						int64_t L_71;
						L_71 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(35, L_68, L_70, 0);
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_72 = V_1;
						bool L_73;
						L_73 = ZipLocalFileHeader_TrySkipBlock_m58F32F4479333BE5F4730EB6E4CD4FD4B53C45AB(L_72, NULL);
						if (L_73)
						{
							goto IL_017f_2;
						}
					}
					{
						ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_74 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
						ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_74, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral61C5FAF86CDC709F2F0702EF222D96C07CC6BE35)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_74, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApkImpl_GetStreamingAssetsInfoFromJar_mAB288AA309341670EB0E5001CB3D3206506E9C4E_RuntimeMethod_var)));
					}

IL_017f_2:
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_75 = V_0;
						NullCheck(L_75);
						int64_t L_76;
						L_76 = VirtualFuncInvoker0< int64_t >::Invoke(14, L_75);
						(&V_13)->___offset = L_76;
						List_1_t93708B96299F4A940ABC0B448E614CD079399B24* L_77 = ___2_parts;
						int32_t L_78 = V_12;
						PartInfo_t9EBED362D2C6C3B3C5568472A8F5E42668D4968D L_79 = V_13;
						NullCheck(L_77);
						List_1_set_Item_mBA8FDDC14C62895FD9F034CB24C5F5E1D1160B70(L_77, L_78, L_79, List_1_set_Item_mBA8FDDC14C62895FD9F034CB24C5F5E1D1160B70_RuntimeMethod_var);
						int32_t L_80 = V_12;
						V_12 = ((int32_t)il2cpp_codegen_add(L_80, 1));
					}

IL_019c_2:
					{
						int32_t L_81 = V_12;
						List_1_t93708B96299F4A940ABC0B448E614CD079399B24* L_82 = ___2_parts;
						NullCheck(L_82);
						int32_t L_83;
						L_83 = List_1_get_Count_mC9F8B93F67AFC1ED97B9CE427850FC247868E3F3_inline(L_82, List_1_get_Count_mC9F8B93F67AFC1ED97B9CE427850FC247868E3F3_RuntimeMethod_var);
						if ((((int32_t)L_81) < ((int32_t)L_83)))
						{
							goto IL_0153_2;
						}
					}
					{
						goto IL_01bc;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01bc:
	{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PathUtil_NormalizeRelativePath_m7B439205813D27F5E907C20AFAA7161A66D9A57E (String_t* ___0_relative, bool ___1_forceTrailingSlash, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		String_t* L_0 = ___0_relative;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD1BC37757802217E304B7B515215AC6EE461954E)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral623990995459AA52EC886FD82EF05F80DEA9ED84)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PathUtil_NormalizeRelativePath_m7B439205813D27F5E907C20AFAA7161A66D9A57E_RuntimeMethod_var)));
	}

IL_0018:
	{
		String_t* L_3 = ___0_relative;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		StringBuilder_t* L_5 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_5, L_4, NULL);
		V_0 = L_5;
		V_1 = 0;
		StringBuilder_t* L_6 = V_0;
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_6, ((int32_t)47), NULL);
		V_2 = 0;
		String_t* L_8 = ___0_relative;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		V_3 = L_9;
		String_t* L_10 = ___0_relative;
		NullCheck(L_10);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, 0, NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_12 = ___0_relative;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		if ((((int32_t)L_13) <= ((int32_t)2)))
		{
			goto IL_0066;
		}
	}
	{
		String_t* L_14 = ___0_relative;
		String_t* L_15 = ___0_relative;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_15, NULL);
		NullCheck(L_14);
		Il2CppChar L_17;
		L_17 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_14, ((int32_t)il2cpp_codegen_subtract(L_16, 1)), NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_0066:
	{
		int32_t L_20 = V_2;
		V_4 = L_20;
		goto IL_019c;
	}

IL_006e:
	{
		int32_t L_21 = V_4;
		int32_t L_22 = V_3;
		if ((((int32_t)L_21) == ((int32_t)L_22)))
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_23 = ___0_relative;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		Il2CppChar L_25;
		L_25 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_23, L_24, NULL);
		if ((((int32_t)L_25) == ((int32_t)((int32_t)47))))
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_26 = ___0_relative;
		int32_t L_27 = V_4;
		NullCheck(L_26);
		Il2CppChar L_28;
		L_28 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_26, L_27, NULL);
		if ((!(((uint32_t)L_28) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0112;
		}
	}

IL_008e:
	{
		int32_t L_29 = V_1;
		if (!L_29)
		{
			goto IL_010b;
		}
	}
	{
		int32_t L_30 = V_1;
		if ((((int32_t)L_30) == ((int32_t)1)))
		{
			goto IL_010b;
		}
	}
	{
		int32_t L_31 = V_1;
		if ((!(((uint32_t)L_31) == ((uint32_t)2))))
		{
			goto IL_00f9;
		}
	}
	{
		StringBuilder_t* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_32, NULL);
		if ((!(((uint32_t)L_33) == ((uint32_t)1))))
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_34;
		L_34 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_35;
		L_35 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15063F649207A4502DFEDF591587E7346BAB3F68)), L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_36 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_36, L_35, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PathUtil_NormalizeRelativePath_m7B439205813D27F5E907C20AFAA7161A66D9A57E_RuntimeMethod_var)));
	}

IL_00be:
	{
		StringBuilder_t* L_37 = V_0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_37, NULL);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_38, 2));
		goto IL_00d0;
	}

IL_00ca:
	{
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
	}

IL_00d0:
	{
		int32_t L_40 = V_5;
		if ((((int32_t)L_40) < ((int32_t)0)))
		{
			goto IL_00e1;
		}
	}
	{
		StringBuilder_t* L_41 = V_0;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		Il2CppChar L_43;
		L_43 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_41, L_42, NULL);
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00ca;
		}
	}

IL_00e1:
	{
		StringBuilder_t* L_44 = V_0;
		int32_t L_45 = V_5;
		StringBuilder_t* L_46 = V_0;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_46, NULL);
		int32_t L_48 = V_5;
		NullCheck(L_44);
		StringBuilder_t* L_49;
		L_49 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_44, ((int32_t)il2cpp_codegen_add(L_45, 1)), ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_47, L_48)), 1)), NULL);
		goto IL_010b;
	}

IL_00f9:
	{
		int32_t L_50 = V_4;
		int32_t L_51 = V_3;
		bool L_52 = ___1_forceTrailingSlash;
		if (!((int32_t)(((((int32_t)L_50) < ((int32_t)L_51))? 1 : 0)|(int32_t)L_52)))
		{
			goto IL_010b;
		}
	}
	{
		StringBuilder_t* L_53 = V_0;
		NullCheck(L_53);
		StringBuilder_t* L_54;
		L_54 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_53, ((int32_t)47), NULL);
	}

IL_010b:
	{
		V_1 = 0;
		goto IL_0196;
	}

IL_0112:
	{
		String_t* L_55 = ___0_relative;
		int32_t L_56 = V_4;
		NullCheck(L_55);
		Il2CppChar L_57;
		L_57 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_55, L_56, NULL);
		if ((!(((uint32_t)L_57) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_58 = V_1;
		if (L_58)
		{
			goto IL_0125;
		}
	}
	{
		V_1 = 1;
		goto IL_0196;
	}

IL_0125:
	{
		int32_t L_59 = V_1;
		if ((!(((uint32_t)L_59) == ((uint32_t)1))))
		{
			goto IL_012d;
		}
	}
	{
		V_1 = 2;
		goto IL_0196;
	}

IL_012d:
	{
		int32_t L_60 = V_1;
		if ((!(((uint32_t)L_60) == ((uint32_t)2))))
		{
			goto IL_0141;
		}
	}
	{
		V_1 = 3;
		StringBuilder_t* L_61 = V_0;
		NullCheck(L_61);
		StringBuilder_t* L_62;
		L_62 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_61, _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A, NULL);
		goto IL_0196;
	}

IL_0141:
	{
		StringBuilder_t* L_63 = V_0;
		NullCheck(L_63);
		StringBuilder_t* L_64;
		L_64 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_63, ((int32_t)46), NULL);
		goto IL_0196;
	}

IL_014c:
	{
		int32_t L_65 = V_1;
		if ((!(((uint32_t)L_65) == ((uint32_t)1))))
		{
			goto IL_015b;
		}
	}
	{
		StringBuilder_t* L_66 = V_0;
		NullCheck(L_66);
		StringBuilder_t* L_67;
		L_67 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_66, ((int32_t)46), NULL);
		goto IL_016b;
	}

IL_015b:
	{
		int32_t L_68 = V_1;
		if ((!(((uint32_t)L_68) == ((uint32_t)2))))
		{
			goto IL_016b;
		}
	}
	{
		StringBuilder_t* L_69 = V_0;
		NullCheck(L_69);
		StringBuilder_t* L_70;
		L_70 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_69, _stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F, NULL);
	}

IL_016b:
	{
		String_t* L_71 = ___0_relative;
		int32_t L_72 = V_4;
		NullCheck(L_71);
		Il2CppChar L_73;
		L_73 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_71, L_72, NULL);
		bool L_74;
		L_74 = PathUtil_IsValidCharacter_mB61FAF3517472920384EC1280D78D48E2E629E6E(L_73, NULL);
		if (L_74)
		{
			goto IL_0185;
		}
	}
	{
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_75 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_75, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73A0C07EF772937789C242D3D453CD9350FB99F0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_75, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PathUtil_NormalizeRelativePath_m7B439205813D27F5E907C20AFAA7161A66D9A57E_RuntimeMethod_var)));
	}

IL_0185:
	{
		StringBuilder_t* L_76 = V_0;
		String_t* L_77 = ___0_relative;
		int32_t L_78 = V_4;
		NullCheck(L_77);
		Il2CppChar L_79;
		L_79 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_77, L_78, NULL);
		NullCheck(L_76);
		StringBuilder_t* L_80;
		L_80 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_76, L_79, NULL);
		V_1 = 3;
	}

IL_0196:
	{
		int32_t L_81 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_81, 1));
	}

IL_019c:
	{
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		if ((((int32_t)L_82) <= ((int32_t)L_83)))
		{
			goto IL_006e;
		}
	}
	{
		StringBuilder_t* L_84 = V_0;
		NullCheck(L_84);
		String_t* L_85;
		L_85 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_84);
		return L_85;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PathUtil_IsValidCharacter_mB61FAF3517472920384EC1280D78D48E2E629E6E (Il2CppChar ___0_c, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___0_c;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)34))))
		{
			goto IL_0028;
		}
	}
	{
		Il2CppChar L_1 = ___0_c;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)60))))
		{
			goto IL_0028;
		}
	}
	{
		Il2CppChar L_2 = ___0_c;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)62))))
		{
			goto IL_0028;
		}
	}
	{
		Il2CppChar L_3 = ___0_c;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)124))))
		{
			goto IL_0028;
		}
	}
	{
		Il2CppChar L_4 = ___0_c;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)32))))
		{
			goto IL_0028;
		}
	}
	{
		Il2CppChar L_5 = ___0_c;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)58))))
		{
			goto IL_0028;
		}
	}
	{
		Il2CppChar L_6 = ___0_c;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)42))))
		{
			goto IL_0028;
		}
	}
	{
		Il2CppChar L_7 = ___0_c;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_002a;
		}
	}

IL_0028:
	{
		return (bool)0;
	}

IL_002a:
	{
		return (bool)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubReadOnlyStream__ctor_m36D814130033DC43E86FD1FA83961EE9E3BE4549 (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_actualStream, bool ___1_leaveOpen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_actualStream;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD13F98CE1E9F61828B3C7915C0847C1BC062140E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SubReadOnlyStream__ctor_m36D814130033DC43E86FD1FA83961EE9E3BE4549_RuntimeMethod_var)));
	}

IL_0014:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_actualStream;
		__this->___m_actualStream = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_actualStream), (void*)L_2);
		bool L_3 = ___1_leaveOpen;
		__this->___m_leaveOpen = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubReadOnlyStream__ctor_m9A64726FC38861B5B4762B1163DB5B911513A5AA (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_actualStream, int64_t ___1_offset, int64_t ___2_length, bool ___3_leaveOpen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_actualStream;
		bool L_1 = ___3_leaveOpen;
		SubReadOnlyStream__ctor_m36D814130033DC43E86FD1FA83961EE9E3BE4549(__this, L_0, L_1, NULL);
		int64_t L_2 = ___1_offset;
		if ((((int64_t)L_2) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0019;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SubReadOnlyStream__ctor_m9A64726FC38861B5B4762B1163DB5B911513A5AA_RuntimeMethod_var)));
	}

IL_0019:
	{
		int64_t L_4 = ___2_length;
		if ((((int64_t)L_4) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0029;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SubReadOnlyStream__ctor_m9A64726FC38861B5B4762B1163DB5B911513A5AA_RuntimeMethod_var)));
	}

IL_0029:
	{
		int64_t L_6 = ___1_offset;
		__this->___m_offset = L_6;
		int64_t L_7 = ___1_offset;
		__this->___m_position = L_7;
		int64_t L_8 = ___2_length;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_9), L_8, Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		__this->___m_length = L_9;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SubReadOnlyStream_get_Length_m5C8FDE24597F36E230F510442AFFE3D9C38FF4AE (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubReadOnlyStream_ThrowIfDisposed_mDE35106D407CCDE36BC6F250294E65AFD036F29B(__this, NULL);
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_0 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___m_length);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline(L_0, Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___m_actualStream;
		NullCheck(L_2);
		int64_t L_3;
		L_3 = VirtualFuncInvoker0< int64_t >::Invoke(13, L_2);
		int64_t L_4 = __this->___m_offset;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_5), ((int64_t)il2cpp_codegen_subtract(L_3, L_4)), Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		__this->___m_length = L_5;
	}

IL_0030:
	{
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_6 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___m_length);
		int64_t L_7;
		L_7 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC(L_6, Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SubReadOnlyStream_get_Position_mEC1BE398131DC6ED98F52AF28B8F3026A5F6871F (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, const RuntimeMethod* method) 
{
	{
		SubReadOnlyStream_ThrowIfDisposed_mDE35106D407CCDE36BC6F250294E65AFD036F29B(__this, NULL);
		int64_t L_0 = __this->___m_position;
		int64_t L_1 = __this->___m_offset;
		return ((int64_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubReadOnlyStream_set_Position_mFEDF684B502EA2294B0D9510CB115515685ED8F0 (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		SubReadOnlyStream_ThrowIfDisposed_mDE35106D407CCDE36BC6F250294E65AFD036F29B(__this, NULL);
		int64_t L_0 = __this->___m_offset;
		int64_t L_1 = ___0_value;
		__this->___m_position = ((int64_t)il2cpp_codegen_add(L_0, L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubReadOnlyStream_get_CanRead_mA36DCCF02891479AB697DCBDDA5F70F654A7192F (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___m_actualStream;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(9, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubReadOnlyStream_get_CanSeek_mEB3CC5374850ACC85C9607DA7C7870F724ACD2BC (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___m_actualStream;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(10, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubReadOnlyStream_get_CanWrite_mB46777BC5F1C88FEE0336385274A5C9D8959C8B5 (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubReadOnlyStream_Read_mCB1F911211ECFC3B22689D0E01B0F5E2F3480CCD (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	{
		SubReadOnlyStream_ThrowIfCantRead_mB7D02BA6EC5188328DA0F0C59EA951C8B2E536D1(__this, NULL);
		SubReadOnlyStream_ThrowIfDisposed_mDE35106D407CCDE36BC6F250294E65AFD036F29B(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___m_actualStream;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(14, L_0);
		int64_t L_2 = __this->___m_position;
		if ((((int64_t)L_1) == ((int64_t)L_2)))
		{
			goto IL_0032;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->___m_actualStream;
		int64_t L_4 = __this->___m_position;
		NullCheck(L_3);
		int64_t L_5;
		L_5 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(35, L_3, L_4, 0);
	}

IL_0032:
	{
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_6 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___m_length);
		bool L_7;
		L_7 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline(L_6, Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0069;
		}
	}
	{
		int64_t L_8 = __this->___m_offset;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_9 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&__this->___m_length);
		int64_t L_10;
		L_10 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC(L_9, Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		V_1 = ((int64_t)il2cpp_codegen_add(L_8, L_10));
		int64_t L_11 = __this->___m_position;
		int32_t L_12 = ___2_count;
		int64_t L_13 = V_1;
		if ((((int64_t)((int64_t)il2cpp_codegen_add(L_11, ((int64_t)L_12)))) <= ((int64_t)L_13)))
		{
			goto IL_0069;
		}
	}
	{
		int64_t L_14 = V_1;
		int64_t L_15 = __this->___m_position;
		___2_count = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_14, L_15)));
	}

IL_0069:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16 = __this->___m_actualStream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___0_buffer;
		int32_t L_18 = ___1_offset;
		int32_t L_19 = ___2_count;
		NullCheck(L_16);
		int32_t L_20;
		L_20 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37, L_16, L_17, L_18, L_19);
		V_0 = L_20;
		int64_t L_21 = __this->___m_position;
		int32_t L_22 = V_0;
		__this->___m_position = ((int64_t)il2cpp_codegen_add(L_21, ((int64_t)L_22)));
		int32_t L_23 = V_0;
		return L_23;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SubReadOnlyStream_Seek_m6F82922EAE1FEBFBBB70F66E7860E054335C0124 (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, int64_t ___0_offset, int32_t ___1_origin, const RuntimeMethod* method) 
{
	{
		SubReadOnlyStream_ThrowIfDisposed_mDE35106D407CCDE36BC6F250294E65AFD036F29B(__this, NULL);
		int32_t L_0 = ___1_origin;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___m_actualStream;
		int64_t L_2 = __this->___m_offset;
		int64_t L_3 = ___0_offset;
		NullCheck(L_1);
		int64_t L_4;
		L_4 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(35, L_1, ((int64_t)il2cpp_codegen_add(L_2, L_3)), 0);
		__this->___m_position = L_4;
		goto IL_005f;
	}

IL_0025:
	{
		int32_t L_5 = ___1_origin;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_004c;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = __this->___m_actualStream;
		int64_t L_7 = __this->___m_offset;
		int64_t L_8;
		L_8 = VirtualFuncInvoker0< int64_t >::Invoke(13, __this);
		int64_t L_9 = ___0_offset;
		NullCheck(L_6);
		int64_t L_10;
		L_10 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(35, L_6, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_7, L_8)), L_9)), 0);
		__this->___m_position = L_10;
		goto IL_005f;
	}

IL_004c:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11 = __this->___m_actualStream;
		int64_t L_12 = ___0_offset;
		NullCheck(L_11);
		int64_t L_13;
		L_13 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(35, L_11, L_12, 1);
		__this->___m_position = L_13;
	}

IL_005f:
	{
		int64_t L_14 = __this->___m_position;
		int64_t L_15 = __this->___m_offset;
		return ((int64_t)il2cpp_codegen_subtract(L_14, L_15));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubReadOnlyStream_SetLength_m285C445F9FAEA57944E5814121EAE303A9C891B8 (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SubReadOnlyStream_SetLength_m285C445F9FAEA57944E5814121EAE303A9C891B8_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubReadOnlyStream_Write_mB2D856675271393DE307AFBA830A88101513ECF7 (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SubReadOnlyStream_Write_mB2D856675271393DE307AFBA830A88101513ECF7_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubReadOnlyStream_Flush_m4E08C253CC94AB9DF38549032DA11F64FFC6F04D (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SubReadOnlyStream_Flush_m4E08C253CC94AB9DF38549032DA11F64FFC6F04D_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubReadOnlyStream_Dispose_mBFA3C3783F999D3344D4BADAF8ED57BCB3BE16B1 (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_disposing;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___m_actualStream;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		bool L_2 = __this->___m_leaveOpen;
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->___m_actualStream;
		NullCheck(L_3);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_3, NULL);
	}

IL_001e:
	{
		__this->___m_actualStream = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_actualStream), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
	}

IL_0025:
	{
		bool L_4 = ___0_disposing;
		Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubReadOnlyStream_ThrowIfDisposed_mDE35106D407CCDE36BC6F250294E65AFD036F29B (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___m_actualStream;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_m5C356C25295E89559C120CB4562783AAF7F41C84(L_3, L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SubReadOnlyStream_ThrowIfDisposed_mDE35106D407CCDE36BC6F250294E65AFD036F29B_RuntimeMethod_var)));
	}

IL_001e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubReadOnlyStream_ThrowIfCantRead_mB7D02BA6EC5188328DA0F0C59EA951C8B2E536D1 (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(9, __this);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SubReadOnlyStream_ThrowIfCantRead_mB7D02BA6EC5188328DA0F0C59EA951C8B2E536D1_RuntimeMethod_var)));
	}

IL_000e:
	{
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
IL2CPP_EXTERN_C void ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshal_pinvoke(const ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724& unmarshaled, ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshaled_pinvoke& marshaled)
{
	marshaled.____tag = unmarshaled.____tag;
	marshaled.____size = unmarshaled.____size;
	marshaled.____data = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.____data);
}
IL2CPP_EXTERN_C void ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshal_pinvoke_back(const ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshaled_pinvoke& marshaled, ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t unmarshaled_tag_temp_0 = 0;
	unmarshaled_tag_temp_0 = marshaled.____tag;
	unmarshaled.____tag = unmarshaled_tag_temp_0;
	uint16_t unmarshaled_size_temp_1 = 0;
	unmarshaled_size_temp_1 = marshaled.____size;
	unmarshaled.____size = unmarshaled_size_temp_1;
	unmarshaled.____data = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.____data);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____data), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.____data));
}
IL2CPP_EXTERN_C void ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshal_pinvoke_cleanup(ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.____data);
	marshaled.____data = NULL;
}
IL2CPP_EXTERN_C void ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshal_com(const ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724& unmarshaled, ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshaled_com& marshaled)
{
	marshaled.____tag = unmarshaled.____tag;
	marshaled.____size = unmarshaled.____size;
	marshaled.____data = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.____data);
}
IL2CPP_EXTERN_C void ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshal_com_back(const ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshaled_com& marshaled, ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t unmarshaled_tag_temp_0 = 0;
	unmarshaled_tag_temp_0 = marshaled.____tag;
	unmarshaled.____tag = unmarshaled_tag_temp_0;
	uint16_t unmarshaled_size_temp_1 = 0;
	unmarshaled_size_temp_1 = marshaled.____size;
	unmarshaled.____size = unmarshaled_size_temp_1;
	unmarshaled.____data = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.____data);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____data), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.____data));
}
IL2CPP_EXTERN_C void ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshal_com_cleanup(ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.____data);
	marshaled.____data = NULL;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ZipGenericExtraField_get_Tag_m759B6ECFDBC6D044352C08FB434AEC491B3E41E4 (ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->____tag;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint16_t ZipGenericExtraField_get_Tag_m759B6ECFDBC6D044352C08FB434AEC491B3E41E4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724*>(__this + _offset);
	uint16_t _returnValue;
	_returnValue = ZipGenericExtraField_get_Tag_m759B6ECFDBC6D044352C08FB434AEC491B3E41E4_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t ZipGenericExtraField_get_Size_mFEE59D1C38FA6DDB6FEDF1607A19FF167B4B7422 (ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint16_t ZipGenericExtraField_get_Size_mFEE59D1C38FA6DDB6FEDF1607A19FF167B4B7422_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724*>(__this + _offset);
	uint16_t _returnValue;
	_returnValue = ZipGenericExtraField_get_Size_mFEE59D1C38FA6DDB6FEDF1607A19FF167B4B7422_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ZipGenericExtraField_get_Data_mF8133FF89E762F3B70FCF61010858511B7137296 (ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data;
		return L_0;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ZipGenericExtraField_get_Data_mF8133FF89E762F3B70FCF61010858511B7137296_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = ZipGenericExtraField_get_Data_mF8133FF89E762F3B70FCF61010858511B7137296_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipGenericExtraField_TryReadBlock_m2BB3B9A85BF63DD87C5F97A456C5C00ECD168CEB (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, int64_t ___1_endExtraField, ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* ___2_field, const RuntimeMethod* method) 
{
	{
		ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* L_0 = ___2_field;
		il2cpp_codegen_initobj(L_0, sizeof(ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724));
		int64_t L_1 = ___1_endExtraField;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = ___0_reader;
		NullCheck(L_2);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3;
		L_3 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5, L_2);
		NullCheck(L_3);
		int64_t L_4;
		L_4 = VirtualFuncInvoker0< int64_t >::Invoke(14, L_3);
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract(L_1, L_4))) >= ((int64_t)((int64_t)4))))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* L_5 = ___2_field;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_6 = ___0_reader;
		NullCheck(L_6);
		uint16_t L_7;
		L_7 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_6);
		L_5->____tag = L_7;
		ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* L_8 = ___2_field;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_9 = ___0_reader;
		NullCheck(L_9);
		uint16_t L_10;
		L_10 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_9);
		L_8->____size = L_10;
		int64_t L_11 = ___1_endExtraField;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_12 = ___0_reader;
		NullCheck(L_12);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_13;
		L_13 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5, L_12);
		NullCheck(L_13);
		int64_t L_14;
		L_14 = VirtualFuncInvoker0< int64_t >::Invoke(14, L_13);
		ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* L_15 = ___2_field;
		uint16_t L_16 = L_15->____size;
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract(L_11, L_14))) >= ((int64_t)((int64_t)(uint64_t)L_16))))
		{
			goto IL_004a;
		}
	}
	{
		return (bool)0;
	}

IL_004a:
	{
		ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* L_17 = ___2_field;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_18 = ___0_reader;
		ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* L_19 = ___2_field;
		uint16_t L_20 = L_19->____size;
		NullCheck(L_18);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21;
		L_21 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(29, L_18, L_20);
		L_17->____data = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->____data), (void*)L_21);
		return (bool)1;
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
IL2CPP_EXTERN_C void Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshal_pinvoke(const Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9& unmarshaled, Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshaled_pinvoke& marshaled)
{
	Exception_t* ____uncompressedSizeException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_uncompressedSize' of type 'Zip64ExtraField'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____uncompressedSizeException, NULL);
}
IL2CPP_EXTERN_C void Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshal_pinvoke_back(const Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshaled_pinvoke& marshaled, Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9& unmarshaled)
{
	Exception_t* ____uncompressedSizeException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_uncompressedSize' of type 'Zip64ExtraField'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____uncompressedSizeException, NULL);
}
IL2CPP_EXTERN_C void Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshal_pinvoke_cleanup(Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshal_com(const Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9& unmarshaled, Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshaled_com& marshaled)
{
	Exception_t* ____uncompressedSizeException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_uncompressedSize' of type 'Zip64ExtraField'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____uncompressedSizeException, NULL);
}
IL2CPP_EXTERN_C void Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshal_com_back(const Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshaled_com& marshaled, Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9& unmarshaled)
{
	Exception_t* ____uncompressedSizeException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_uncompressedSize' of type 'Zip64ExtraField'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____uncompressedSizeException, NULL);
}
IL2CPP_EXTERN_C void Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshal_com_cleanup(Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Zip64ExtraField_get_UncompressedSize_m6DCFFD258F31202A9EDE82F260B284F2CBAC641F (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = __this->____uncompressedSize;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Zip64ExtraField_get_UncompressedSize_m6DCFFD258F31202A9EDE82F260B284F2CBAC641F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9*>(__this + _offset);
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 _returnValue;
	_returnValue = Zip64ExtraField_get_UncompressedSize_m6DCFFD258F31202A9EDE82F260B284F2CBAC641F_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Zip64ExtraField_get_CompressedSize_m990D9DD08B3C53024636DF0802E25B88075D603D (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = __this->____compressedSize;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Zip64ExtraField_get_CompressedSize_m990D9DD08B3C53024636DF0802E25B88075D603D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9*>(__this + _offset);
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 _returnValue;
	_returnValue = Zip64ExtraField_get_CompressedSize_m990D9DD08B3C53024636DF0802E25B88075D603D_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Zip64ExtraField_get_LocalHeaderOffset_m232842FCC1BF48E123B2716FBAC8B769F0B2B07A (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = __this->____localHeaderOffset;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Zip64ExtraField_get_LocalHeaderOffset_m232842FCC1BF48E123B2716FBAC8B769F0B2B07A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9*>(__this + _offset);
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 _returnValue;
	_returnValue = Zip64ExtraField_get_LocalHeaderOffset_m232842FCC1BF48E123B2716FBAC8B769F0B2B07A_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 Zip64ExtraField_get_StartDiskNumber_m6A797299BED711B7BDBC42993C746F14BE2C49D8 (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->____startDiskNumber;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 Zip64ExtraField_get_StartDiskNumber_m6A797299BED711B7BDBC42993C746F14BE2C49D8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9*>(__this + _offset);
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 _returnValue;
	_returnValue = Zip64ExtraField_get_StartDiskNumber_m6A797299BED711B7BDBC42993C746F14BE2C49D8_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9 Zip64ExtraField_GetJustZip64Block_m6EE1037758B78F91059CBC864A95D2912BACCE78 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_extraFieldStream, bool ___1_readUncompressedSize, bool ___2_readCompressedSize, bool ___3_readLocalHeaderOffset, bool ___4_readStartDiskNumber, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* V_1 = NULL;
	ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_extraFieldStream;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_1, L_0, NULL);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002e:
			{
				{
					BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = V_1;
					if (!L_2)
					{
						goto IL_0037;
					}
				}
				{
					BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_3 = V_1;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0037:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_001c_1;
			}

IL_0009_1:
			{
				ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724 L_4 = V_2;
				bool L_5 = ___1_readUncompressedSize;
				bool L_6 = ___2_readCompressedSize;
				bool L_7 = ___3_readLocalHeaderOffset;
				bool L_8 = ___4_readStartDiskNumber;
				bool L_9;
				L_9 = Zip64ExtraField_TryGetZip64BlockFromGenericExtraField_m85A7520BE5A9F86324E3E7B1F6831EE6C1B58211(L_4, L_5, L_6, L_7, L_8, (&V_0), NULL);
				if (!L_9)
				{
					goto IL_001c_1;
				}
			}
			{
				Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9 L_10 = V_0;
				V_3 = L_10;
				goto IL_0076;
			}

IL_001c_1:
			{
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_11 = V_1;
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12 = ___0_extraFieldStream;
				NullCheck(L_12);
				int64_t L_13;
				L_13 = VirtualFuncInvoker0< int64_t >::Invoke(13, L_12);
				bool L_14;
				L_14 = ZipGenericExtraField_TryReadBlock_m2BB3B9A85BF63DD87C5F97A456C5C00ECD168CEB(L_11, L_13, (&V_2), NULL);
				if (L_14)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0038;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9));
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_15 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&(&V_0)->____compressedSize);
		il2cpp_codegen_initobj(L_15, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_16 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&(&V_0)->____uncompressedSize);
		il2cpp_codegen_initobj(L_16, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_17 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&(&V_0)->____localHeaderOffset);
		il2cpp_codegen_initobj(L_17, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_18 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&(&V_0)->____startDiskNumber);
		il2cpp_codegen_initobj(L_18, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9 L_19 = V_0;
		return L_19;
	}

IL_0076:
	{
		Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9 L_20 = V_3;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Zip64ExtraField_TryGetZip64BlockFromGenericExtraField_m85A7520BE5A9F86324E3E7B1F6831EE6C1B58211 (ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724 ___0_extraField, bool ___1_readUncompressedSize, bool ___2_readCompressedSize, bool ___3_readLocalHeaderOffset, bool ___4_readStartDiskNumber, Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* ___5_zip64Block, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* V_1 = NULL;
	uint16_t V_2 = 0;
	bool V_3 = false;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int64_t V_5 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	{
		Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_0 = ___5_zip64Block;
		il2cpp_codegen_initobj(L_0, sizeof(Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9));
		Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_1 = ___5_zip64Block;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_2 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&L_1->____compressedSize);
		il2cpp_codegen_initobj(L_2, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
		Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_3 = ___5_zip64Block;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_4 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&L_3->____uncompressedSize);
		il2cpp_codegen_initobj(L_4, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
		Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_5 = ___5_zip64Block;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* L_6 = (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*)(&L_5->____localHeaderOffset);
		il2cpp_codegen_initobj(L_6, sizeof(Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17));
		Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_7 = ___5_zip64Block;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_8 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&L_7->____startDiskNumber);
		il2cpp_codegen_initobj(L_8, sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		uint16_t L_9;
		L_9 = ZipGenericExtraField_get_Tag_m759B6ECFDBC6D044352C08FB434AEC491B3E41E4_inline((&___0_extraField), NULL);
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0048:
	{
		V_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)NULL;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01b8:
			{
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_10 = V_0;
					if (!L_10)
					{
						goto IL_01c1;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = V_0;
					NullCheck(L_11);
					Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_11, NULL);
				}

IL_01c1:
				{
					return;
				}
			}
		});
		try
		{
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
				L_12 = ZipGenericExtraField_get_Data_mF8133FF89E762F3B70FCF61010858511B7137296_inline((&___0_extraField), NULL);
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_13 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
				MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_13, L_12, NULL);
				V_0 = L_13;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_14 = V_0;
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_15 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
				BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_15, L_14, NULL);
				V_1 = L_15;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_01ae_1:
					{
						{
							BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_16 = V_1;
							if (!L_16)
							{
								goto IL_01b7_1;
							}
						}
						{
							BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_17 = V_1;
							NullCheck(L_17);
							InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_17);
						}

IL_01b7_1:
						{
							return;
						}
					}
				});
				try
				{
					{
						V_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)NULL;
						Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_18 = ___5_zip64Block;
						uint16_t L_19;
						L_19 = ZipGenericExtraField_get_Size_mFEE59D1C38FA6DDB6FEDF1607A19FF167B4B7422_inline((&___0_extraField), NULL);
						L_18->____size = L_19;
						V_2 = (uint16_t)0;
						bool L_20 = ___1_readUncompressedSize;
						if (!L_20)
						{
							goto IL_0078_2;
						}
					}
					{
						uint16_t L_21 = V_2;
						V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, 8)));
					}

IL_0078_2:
					{
						bool L_22 = ___2_readCompressedSize;
						if (!L_22)
						{
							goto IL_0080_2;
						}
					}
					{
						uint16_t L_23 = V_2;
						V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_23, 8)));
					}

IL_0080_2:
					{
						bool L_24 = ___3_readLocalHeaderOffset;
						if (!L_24)
						{
							goto IL_0088_2;
						}
					}
					{
						uint16_t L_25 = V_2;
						V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, 8)));
					}

IL_0088_2:
					{
						bool L_26 = ___4_readStartDiskNumber;
						if (!L_26)
						{
							goto IL_0091_2;
						}
					}
					{
						uint16_t L_27 = V_2;
						V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, 4)));
					}

IL_0091_2:
					{
						uint16_t L_28 = V_2;
						Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_29 = ___5_zip64Block;
						uint16_t L_30 = L_29->____size;
						if ((((int32_t)L_28) == ((int32_t)L_30)))
						{
							goto IL_00a2_2;
						}
					}
					{
						V_3 = (bool)0;
						goto IL_01c2;
					}

IL_00a2_2:
					{
						bool L_31 = ___1_readUncompressedSize;
						if (!L_31)
						{
							goto IL_00b7_2;
						}
					}
					{
						Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_32 = ___5_zip64Block;
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_33 = V_1;
						NullCheck(L_33);
						int64_t L_34;
						L_34 = VirtualFuncInvoker0< int64_t >::Invoke(18, L_33);
						Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_35;
						memset((&L_35), 0, sizeof(L_35));
						Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_35), L_34, Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
						L_32->____uncompressedSize = L_35;
					}

IL_00b7_2:
					{
						bool L_36 = ___2_readCompressedSize;
						if (!L_36)
						{
							goto IL_00cc_2;
						}
					}
					{
						Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_37 = ___5_zip64Block;
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_38 = V_1;
						NullCheck(L_38);
						int64_t L_39;
						L_39 = VirtualFuncInvoker0< int64_t >::Invoke(18, L_38);
						Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_40;
						memset((&L_40), 0, sizeof(L_40));
						Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_40), L_39, Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
						L_37->____compressedSize = L_40;
					}

IL_00cc_2:
					{
						bool L_41 = ___3_readLocalHeaderOffset;
						if (!L_41)
						{
							goto IL_00e1_2;
						}
					}
					{
						Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_42 = ___5_zip64Block;
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_43 = V_1;
						NullCheck(L_43);
						int64_t L_44;
						L_44 = VirtualFuncInvoker0< int64_t >::Invoke(18, L_43);
						Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_45;
						memset((&L_45), 0, sizeof(L_45));
						Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1((&L_45), L_44, Nullable_1__ctor_m117BE9EF6DBC76B088B52AFB80634B9195D384A1_RuntimeMethod_var);
						L_42->____localHeaderOffset = L_45;
					}

IL_00e1_2:
					{
						bool L_46 = ___4_readStartDiskNumber;
						if (!L_46)
						{
							goto IL_00f7_2;
						}
					}
					{
						Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_47 = ___5_zip64Block;
						BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_48 = V_1;
						NullCheck(L_48);
						int32_t L_49;
						L_49 = VirtualFuncInvoker0< int32_t >::Invoke(16, L_48);
						Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_50;
						memset((&L_50), 0, sizeof(L_50));
						Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_50), L_49, Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
						L_47->____startDiskNumber = L_50;
					}

IL_00f7_2:
					{
						Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_51 = ___5_zip64Block;
						Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_52 = L_51->____uncompressedSize;
						V_4 = L_52;
						V_5 = ((int64_t)0);
						int64_t L_53;
						L_53 = Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline((&V_4), Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
						int64_t L_54 = V_5;
						bool L_55;
						L_55 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_4), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
						if (!((int32_t)(((((int64_t)L_53) < ((int64_t)L_54))? 1 : 0)&(int32_t)L_55)))
						{
							goto IL_0124_2;
						}
					}
					{
						ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_56 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
						ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_56, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0791B09CABC0E68E7F2304266905D44E98CEDC7E)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_56, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Zip64ExtraField_TryGetZip64BlockFromGenericExtraField_m85A7520BE5A9F86324E3E7B1F6831EE6C1B58211_RuntimeMethod_var)));
					}

IL_0124_2:
					{
						Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_57 = ___5_zip64Block;
						Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_58 = L_57->____compressedSize;
						V_4 = L_58;
						V_5 = ((int64_t)0);
						int64_t L_59;
						L_59 = Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline((&V_4), Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
						int64_t L_60 = V_5;
						bool L_61;
						L_61 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_4), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
						if (!((int32_t)(((((int64_t)L_59) < ((int64_t)L_60))? 1 : 0)&(int32_t)L_61)))
						{
							goto IL_0151_2;
						}
					}
					{
						ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_62 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
						ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_62, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral692393D5247888503911656CF899688704CC9517)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_62, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Zip64ExtraField_TryGetZip64BlockFromGenericExtraField_m85A7520BE5A9F86324E3E7B1F6831EE6C1B58211_RuntimeMethod_var)));
					}

IL_0151_2:
					{
						Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_63 = ___5_zip64Block;
						Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_64 = L_63->____localHeaderOffset;
						V_4 = L_64;
						V_5 = ((int64_t)0);
						int64_t L_65;
						L_65 = Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_inline((&V_4), Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_RuntimeMethod_var);
						int64_t L_66 = V_5;
						bool L_67;
						L_67 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_4), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
						if (!((int32_t)(((((int64_t)L_65) < ((int64_t)L_66))? 1 : 0)&(int32_t)L_67)))
						{
							goto IL_017e_2;
						}
					}
					{
						ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_68 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
						ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_68, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC29D2239559EB0FC1E59107D531B6B1A1C368377)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_68, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Zip64ExtraField_TryGetZip64BlockFromGenericExtraField_m85A7520BE5A9F86324E3E7B1F6831EE6C1B58211_RuntimeMethod_var)));
					}

IL_017e_2:
					{
						Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* L_69 = ___5_zip64Block;
						Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_70 = L_69->____startDiskNumber;
						V_6 = L_70;
						V_7 = 0;
						int32_t L_71;
						L_71 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_6), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
						int32_t L_72 = V_7;
						bool L_73;
						L_73 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_6), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
						if (!((int32_t)(((((int32_t)L_71) < ((int32_t)L_72))? 1 : 0)&(int32_t)L_73)))
						{
							goto IL_01aa_2;
						}
					}
					{
						ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_74 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
						ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_74, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBBA55520D2870374A577C846902E49D31C1E467)), NULL);
						IL2CPP_RAISE_MANAGED_EXCEPTION(L_74, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Zip64ExtraField_TryGetZip64BlockFromGenericExtraField_m85A7520BE5A9F86324E3E7B1F6831EE6C1B58211_RuntimeMethod_var)));
					}

IL_01aa_2:
					{
						V_3 = (bool)1;
						goto IL_01c2;
					}
				}
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01c2:
	{
		bool L_75 = V_3;
		return L_75;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Zip64EndOfCentralDirectoryLocator_TryReadBlock_mC1CFF884A9974D065D505E6FBA8DE963B0A9B096 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, Zip64EndOfCentralDirectoryLocator_t992C6B9D349AB3E16CF1E56834BAE57D241F4E79* ___1_zip64EOCDLocator, const RuntimeMethod* method) 
{
	{
		Zip64EndOfCentralDirectoryLocator_t992C6B9D349AB3E16CF1E56834BAE57D241F4E79* L_0 = ___1_zip64EOCDLocator;
		il2cpp_codegen_initobj(L_0, sizeof(Zip64EndOfCentralDirectoryLocator_t992C6B9D349AB3E16CF1E56834BAE57D241F4E79));
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___0_reader;
		NullCheck(L_1);
		uint32_t L_2;
		L_2 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_1);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)117853008))))
		{
			goto IL_0016;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		Zip64EndOfCentralDirectoryLocator_t992C6B9D349AB3E16CF1E56834BAE57D241F4E79* L_3 = ___1_zip64EOCDLocator;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = ___0_reader;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_4);
		L_3->___NumberOfDiskWithZip64EOCD = L_5;
		Zip64EndOfCentralDirectoryLocator_t992C6B9D349AB3E16CF1E56834BAE57D241F4E79* L_6 = ___1_zip64EOCDLocator;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = ___0_reader;
		NullCheck(L_7);
		uint64_t L_8;
		L_8 = VirtualFuncInvoker0< uint64_t >::Invoke(19, L_7);
		L_6->___OffsetOfZip64EOCD = L_8;
		Zip64EndOfCentralDirectoryLocator_t992C6B9D349AB3E16CF1E56834BAE57D241F4E79* L_9 = ___1_zip64EOCDLocator;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_10 = ___0_reader;
		NullCheck(L_10);
		uint32_t L_11;
		L_11 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_10);
		L_9->___TotalNumberOfDisks = L_11;
		return (bool)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Zip64EndOfCentralDirectoryRecord_TryReadBlock_mA35089F309255B687FFD1A07C4B553FC83045FF3 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66* ___1_zip64EOCDRecord, const RuntimeMethod* method) 
{
	{
		Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66* L_0 = ___1_zip64EOCDRecord;
		il2cpp_codegen_initobj(L_0, sizeof(Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66));
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___0_reader;
		NullCheck(L_1);
		uint32_t L_2;
		L_2 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_1);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)101075792))))
		{
			goto IL_0016;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66* L_3 = ___1_zip64EOCDRecord;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = ___0_reader;
		NullCheck(L_4);
		uint64_t L_5;
		L_5 = VirtualFuncInvoker0< uint64_t >::Invoke(19, L_4);
		L_3->___SizeOfThisRecord = L_5;
		Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66* L_6 = ___1_zip64EOCDRecord;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = ___0_reader;
		NullCheck(L_7);
		uint16_t L_8;
		L_8 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_7);
		L_6->___VersionMadeBy = L_8;
		Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66* L_9 = ___1_zip64EOCDRecord;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_10 = ___0_reader;
		NullCheck(L_10);
		uint16_t L_11;
		L_11 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_10);
		L_9->___VersionNeededToExtract = L_11;
		Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66* L_12 = ___1_zip64EOCDRecord;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_13 = ___0_reader;
		NullCheck(L_13);
		uint32_t L_14;
		L_14 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_13);
		L_12->___NumberOfThisDisk = L_14;
		Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66* L_15 = ___1_zip64EOCDRecord;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_16 = ___0_reader;
		NullCheck(L_16);
		uint32_t L_17;
		L_17 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_16);
		L_15->___NumberOfDiskWithStartOfCD = L_17;
		Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66* L_18 = ___1_zip64EOCDRecord;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_19 = ___0_reader;
		NullCheck(L_19);
		uint64_t L_20;
		L_20 = VirtualFuncInvoker0< uint64_t >::Invoke(19, L_19);
		L_18->___NumberOfEntriesOnThisDisk = L_20;
		Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66* L_21 = ___1_zip64EOCDRecord;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_22 = ___0_reader;
		NullCheck(L_22);
		uint64_t L_23;
		L_23 = VirtualFuncInvoker0< uint64_t >::Invoke(19, L_22);
		L_21->___NumberOfEntriesTotal = L_23;
		Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66* L_24 = ___1_zip64EOCDRecord;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_25 = ___0_reader;
		NullCheck(L_25);
		uint64_t L_26;
		L_26 = VirtualFuncInvoker0< uint64_t >::Invoke(19, L_25);
		L_24->___SizeOfCentralDirectory = L_26;
		Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66* L_27 = ___1_zip64EOCDRecord;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_28 = ___0_reader;
		NullCheck(L_28);
		uint64_t L_29;
		L_29 = VirtualFuncInvoker0< uint64_t >::Invoke(19, L_28);
		L_27->___OffsetOfCentralDirectory = L_29;
		return (bool)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipLocalFileHeader_TrySkipBlock_m58F32F4479333BE5F4730EB6E4CD4FD4B53C45AB (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___0_reader;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_0);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)67324752))))
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = ___0_reader;
		NullCheck(L_2);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3;
		L_3 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5, L_2);
		NullCheck(L_3);
		int64_t L_4;
		L_4 = VirtualFuncInvoker0< int64_t >::Invoke(13, L_3);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_5 = ___0_reader;
		NullCheck(L_5);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6;
		L_6 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5, L_5);
		NullCheck(L_6);
		int64_t L_7;
		L_7 = VirtualFuncInvoker0< int64_t >::Invoke(14, L_6);
		if ((((int64_t)L_4) >= ((int64_t)((int64_t)il2cpp_codegen_add(L_7, ((int64_t)((int32_t)22)))))))
		{
			goto IL_002d;
		}
	}
	{
		return (bool)0;
	}

IL_002d:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_8 = ___0_reader;
		NullCheck(L_8);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9;
		L_9 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5, L_8);
		NullCheck(L_9);
		int64_t L_10;
		L_10 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(35, L_9, ((int64_t)((int32_t)22)), 1);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_11 = ___0_reader;
		NullCheck(L_11);
		uint16_t L_12;
		L_12 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_11);
		V_0 = L_12;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_13 = ___0_reader;
		NullCheck(L_13);
		uint16_t L_14;
		L_14 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_13);
		V_1 = L_14;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_15 = ___0_reader;
		NullCheck(L_15);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16;
		L_16 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5, L_15);
		NullCheck(L_16);
		int64_t L_17;
		L_17 = VirtualFuncInvoker0< int64_t >::Invoke(13, L_16);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_18 = ___0_reader;
		NullCheck(L_18);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_19;
		L_19 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5, L_18);
		NullCheck(L_19);
		int64_t L_20;
		L_20 = VirtualFuncInvoker0< int64_t >::Invoke(14, L_19);
		uint16_t L_21 = V_0;
		uint16_t L_22 = V_1;
		if ((((int64_t)L_17) >= ((int64_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_20, ((int64_t)(uint64_t)L_21))), ((int64_t)(uint64_t)L_22))))))
		{
			goto IL_006b;
		}
	}
	{
		return (bool)0;
	}

IL_006b:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_23 = ___0_reader;
		NullCheck(L_23);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_24;
		L_24 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5, L_23);
		uint16_t L_25 = V_0;
		uint16_t L_26 = V_1;
		NullCheck(L_24);
		int64_t L_27;
		L_27 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(35, L_24, ((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)L_26))), 1);
		return (bool)1;
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
IL2CPP_EXTERN_C void ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshal_pinvoke(const ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC& unmarshaled, ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshaled_pinvoke& marshaled)
{
	Exception_t* ___ExtraFieldsException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ExtraFields' of type 'ZipCentralDirectoryFileHeader'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ExtraFieldsException, NULL);
}
IL2CPP_EXTERN_C void ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshal_pinvoke_back(const ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshaled_pinvoke& marshaled, ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC& unmarshaled)
{
	Exception_t* ___ExtraFieldsException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ExtraFields' of type 'ZipCentralDirectoryFileHeader'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ExtraFieldsException, NULL);
}
IL2CPP_EXTERN_C void ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshal_pinvoke_cleanup(ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshal_com(const ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC& unmarshaled, ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshaled_com& marshaled)
{
	Exception_t* ___ExtraFieldsException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ExtraFields' of type 'ZipCentralDirectoryFileHeader'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ExtraFieldsException, NULL);
}
IL2CPP_EXTERN_C void ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshal_com_back(const ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshaled_com& marshaled, ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC& unmarshaled)
{
	Exception_t* ___ExtraFieldsException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ExtraFields' of type 'ZipCentralDirectoryFileHeader'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ExtraFieldsException, NULL);
}
IL2CPP_EXTERN_C void ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshal_com_cleanup(ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipCentralDirectoryFileHeader_TryReadBlock_mCC57C7A3DB7E627C07703FE56A23977904D87243 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* ___1_header, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint16_t V_2 = 0;
	uint32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int64_t V_9 = 0;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_10 = NULL;
	Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_12;
	memset((&V_12), 0, sizeof(V_12));
	ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* G_B9_0 = NULL;
	ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* G_B8_0 = NULL;
	int64_t G_B10_0 = 0;
	ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* G_B10_1 = NULL;
	ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* G_B12_0 = NULL;
	ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* G_B11_0 = NULL;
	int64_t G_B13_0 = 0;
	ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* G_B13_1 = NULL;
	ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* G_B15_0 = NULL;
	ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* G_B14_0 = NULL;
	int64_t G_B16_0 = 0;
	ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* G_B16_1 = NULL;
	ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* G_B18_0 = NULL;
	ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* G_B19_1 = NULL;
	{
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_0 = ___1_header;
		il2cpp_codegen_initobj(L_0, sizeof(ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC));
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___0_reader;
		NullCheck(L_1);
		uint32_t L_2;
		L_2 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_1);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)33639248))))
		{
			goto IL_0016;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_3 = ___1_header;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = ___0_reader;
		NullCheck(L_4);
		uint8_t L_5;
		L_5 = VirtualFuncInvoker0< uint8_t >::Invoke(11, L_4);
		L_3->___VersionMadeBySpecification = L_5;
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_6 = ___1_header;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = ___0_reader;
		NullCheck(L_7);
		uint8_t L_8;
		L_8 = VirtualFuncInvoker0< uint8_t >::Invoke(11, L_7);
		L_6->___VersionMadeByCompatibility = L_8;
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_9 = ___1_header;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_10 = ___0_reader;
		NullCheck(L_10);
		uint16_t L_11;
		L_11 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_10);
		L_9->___VersionNeededToExtract = L_11;
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_12 = ___1_header;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_13 = ___0_reader;
		NullCheck(L_13);
		uint16_t L_14;
		L_14 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_13);
		L_12->___GeneralPurposeBitFlag = L_14;
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_15 = ___1_header;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_16 = ___0_reader;
		NullCheck(L_16);
		uint16_t L_17;
		L_17 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_16);
		L_15->___CompressionMethod = L_17;
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_18 = ___1_header;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_19 = ___0_reader;
		NullCheck(L_19);
		uint32_t L_20;
		L_20 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_19);
		L_18->___LastModified = L_20;
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_21 = ___1_header;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_22 = ___0_reader;
		NullCheck(L_22);
		uint32_t L_23;
		L_23 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_22);
		L_21->___Crc32 = L_23;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_24 = ___0_reader;
		NullCheck(L_24);
		uint32_t L_25;
		L_25 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_24);
		V_0 = L_25;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_26 = ___0_reader;
		NullCheck(L_26);
		uint32_t L_27;
		L_27 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_26);
		V_1 = L_27;
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_28 = ___1_header;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_29 = ___0_reader;
		NullCheck(L_29);
		uint16_t L_30;
		L_30 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_29);
		L_28->___FilenameLength = L_30;
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_31 = ___1_header;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_32 = ___0_reader;
		NullCheck(L_32);
		uint16_t L_33;
		L_33 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_32);
		L_31->___ExtraFieldLength = L_33;
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_34 = ___1_header;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_35 = ___0_reader;
		NullCheck(L_35);
		uint16_t L_36;
		L_36 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_35);
		L_34->___FileCommentLength = L_36;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_37 = ___0_reader;
		NullCheck(L_37);
		uint16_t L_38;
		L_38 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_37);
		V_2 = L_38;
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_39 = ___1_header;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_40 = ___0_reader;
		NullCheck(L_40);
		uint16_t L_41;
		L_41 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_40);
		L_39->___InternalFileAttributes = L_41;
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_42 = ___1_header;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_43 = ___0_reader;
		NullCheck(L_43);
		uint32_t L_44;
		L_44 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_43);
		L_42->___ExternalFileAttributes = L_44;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_45 = ___0_reader;
		NullCheck(L_45);
		uint32_t L_46;
		L_46 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_45);
		V_3 = L_46;
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_47 = ___1_header;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_48 = ___0_reader;
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_49 = ___1_header;
		uint16_t L_50 = L_49->___FilenameLength;
		NullCheck(L_48);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51;
		L_51 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(29, L_48, L_50);
		L_47->___Filename = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&L_47->___Filename), (void*)L_51);
		uint32_t L_52 = V_1;
		V_4 = (bool)((((int32_t)L_52) == ((int32_t)(-1)))? 1 : 0);
		uint32_t L_53 = V_0;
		V_5 = (bool)((((int32_t)L_53) == ((int32_t)(-1)))? 1 : 0);
		uint32_t L_54 = V_3;
		V_6 = (bool)((((int32_t)L_54) == ((int32_t)(-1)))? 1 : 0);
		uint16_t L_55 = V_2;
		V_7 = (bool)((((int32_t)L_55) == ((int32_t)((int32_t)65535)))? 1 : 0);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_56 = ___0_reader;
		NullCheck(L_56);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_57;
		L_57 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5, L_56);
		NullCheck(L_57);
		int64_t L_58;
		L_58 = VirtualFuncInvoker0< int64_t >::Invoke(14, L_57);
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_59 = ___1_header;
		uint16_t L_60 = L_59->___ExtraFieldLength;
		V_9 = ((int64_t)il2cpp_codegen_add(L_58, ((int64_t)(uint64_t)L_60)));
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_61 = ___0_reader;
		NullCheck(L_61);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_62;
		L_62 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5, L_61);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_63 = ___0_reader;
		NullCheck(L_63);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_64;
		L_64 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5, L_63);
		NullCheck(L_64);
		int64_t L_65;
		L_65 = VirtualFuncInvoker0< int64_t >::Invoke(14, L_64);
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_66 = ___1_header;
		uint16_t L_67 = L_66->___ExtraFieldLength;
		SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A* L_68 = (SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A*)il2cpp_codegen_object_new(SubReadOnlyStream_tF94D328FE917F26B8993351C9711DE7BE373E60A_il2cpp_TypeInfo_var);
		SubReadOnlyStream__ctor_m9A64726FC38861B5B4762B1163DB5B911513A5AA(L_68, L_62, L_65, ((int64_t)(uint64_t)L_67), (bool)1, NULL);
		V_10 = L_68;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_013f:
			{
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_69 = V_10;
					if (!L_69)
					{
						goto IL_014a;
					}
				}
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_70 = V_10;
					NullCheck(L_70);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_70);
				}

IL_014a:
				{
					return;
				}
			}
		});
		try
		{
			ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_71 = ___1_header;
			L_71->___ExtraFields = (List_1_t597CBCE5CEF49705B4A36C4C8EEB338379AE5D37*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&L_71->___ExtraFields), (void*)(List_1_t597CBCE5CEF49705B4A36C4C8EEB338379AE5D37*)NULL);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_72 = V_10;
			bool L_73 = V_4;
			bool L_74 = V_5;
			bool L_75 = V_6;
			bool L_76 = V_7;
			Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9 L_77;
			L_77 = Zip64ExtraField_GetJustZip64Block_m6EE1037758B78F91059CBC864A95D2912BACCE78(L_72, L_73, L_74, L_75, L_76, NULL);
			V_8 = L_77;
			goto IL_014b;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014b:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_78 = ___0_reader;
		NullCheck(L_78);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_79;
		L_79 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5, L_78);
		int64_t L_80 = V_9;
		ZipHelper_AdvanceToPosition_m5A4492EBB0D4AA1F633A9E349C76C5844ABD755B(L_79, L_80, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_81 = ___0_reader;
		NullCheck(L_81);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_82;
		L_82 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5, L_81);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_83 = L_82;
		NullCheck(L_83);
		int64_t L_84;
		L_84 = VirtualFuncInvoker0< int64_t >::Invoke(14, L_83);
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_85 = ___1_header;
		uint16_t L_86 = L_85->___FileCommentLength;
		NullCheck(L_83);
		VirtualActionInvoker1< int64_t >::Invoke(15, L_83, ((int64_t)il2cpp_codegen_add(L_84, ((int64_t)(uint64_t)L_86))));
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_87 = ___1_header;
		L_87->___FileComment = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_87->___FileComment), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_88 = ___1_header;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_89;
		L_89 = Zip64ExtraField_get_UncompressedSize_m6DCFFD258F31202A9EDE82F260B284F2CBAC641F_inline((&V_8), NULL);
		V_11 = L_89;
		bool L_90;
		L_90 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_11), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		if (!L_90)
		{
			G_B9_0 = L_88;
			goto IL_019d;
		}
		G_B8_0 = L_88;
	}
	{
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_91;
		L_91 = Zip64ExtraField_get_UncompressedSize_m6DCFFD258F31202A9EDE82F260B284F2CBAC641F_inline((&V_8), NULL);
		V_11 = L_91;
		int64_t L_92;
		L_92 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC((&V_11), Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		G_B10_0 = L_92;
		G_B10_1 = G_B8_0;
		goto IL_019f;
	}

IL_019d:
	{
		uint32_t L_93 = V_1;
		G_B10_0 = ((int64_t)(uint64_t)L_93);
		G_B10_1 = G_B9_0;
	}

IL_019f:
	{
		G_B10_1->___UncompressedSize = G_B10_0;
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_94 = ___1_header;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_95;
		L_95 = Zip64ExtraField_get_CompressedSize_m990D9DD08B3C53024636DF0802E25B88075D603D_inline((&V_8), NULL);
		V_11 = L_95;
		bool L_96;
		L_96 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_11), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		if (!L_96)
		{
			G_B12_0 = L_94;
			goto IL_01c9;
		}
		G_B11_0 = L_94;
	}
	{
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_97;
		L_97 = Zip64ExtraField_get_CompressedSize_m990D9DD08B3C53024636DF0802E25B88075D603D_inline((&V_8), NULL);
		V_11 = L_97;
		int64_t L_98;
		L_98 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC((&V_11), Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		G_B13_0 = L_98;
		G_B13_1 = G_B11_0;
		goto IL_01cb;
	}

IL_01c9:
	{
		uint32_t L_99 = V_0;
		G_B13_0 = ((int64_t)(uint64_t)L_99);
		G_B13_1 = G_B12_0;
	}

IL_01cb:
	{
		G_B13_1->___CompressedSize = G_B13_0;
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_100 = ___1_header;
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_101;
		L_101 = Zip64ExtraField_get_LocalHeaderOffset_m232842FCC1BF48E123B2716FBAC8B769F0B2B07A_inline((&V_8), NULL);
		V_11 = L_101;
		bool L_102;
		L_102 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&V_11), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		if (!L_102)
		{
			G_B15_0 = L_100;
			goto IL_01f5;
		}
		G_B14_0 = L_100;
	}
	{
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_103;
		L_103 = Zip64ExtraField_get_LocalHeaderOffset_m232842FCC1BF48E123B2716FBAC8B769F0B2B07A_inline((&V_8), NULL);
		V_11 = L_103;
		int64_t L_104;
		L_104 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC((&V_11), Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		G_B16_0 = L_104;
		G_B16_1 = G_B14_0;
		goto IL_01f7;
	}

IL_01f5:
	{
		uint32_t L_105 = V_3;
		G_B16_0 = ((int64_t)(uint64_t)L_105);
		G_B16_1 = G_B15_0;
	}

IL_01f7:
	{
		G_B16_1->___RelativeOffsetOfLocalHeader = G_B16_0;
		ZipCentralDirectoryFileHeader_t46F20F45869FE65A9BBB1D39A1ABCE12D6B634CC* L_106 = ___1_header;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_107;
		L_107 = Zip64ExtraField_get_StartDiskNumber_m6A797299BED711B7BDBC42993C746F14BE2C49D8_inline((&V_8), NULL);
		V_12 = L_107;
		bool L_108;
		L_108 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_12), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!L_108)
		{
			G_B18_0 = L_106;
			goto IL_0221;
		}
		G_B17_0 = L_106;
	}
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_109;
		L_109 = Zip64ExtraField_get_StartDiskNumber_m6A797299BED711B7BDBC42993C746F14BE2C49D8_inline((&V_8), NULL);
		V_12 = L_109;
		int32_t L_110;
		L_110 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_12), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		G_B19_0 = L_110;
		G_B19_1 = G_B17_0;
		goto IL_0222;
	}

IL_0221:
	{
		uint16_t L_111 = V_2;
		G_B19_0 = ((int32_t)(L_111));
		G_B19_1 = G_B18_0;
	}

IL_0222:
	{
		G_B19_1->___DiskNumberStart = G_B19_0;
		return (bool)1;
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
IL2CPP_EXTERN_C void ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshal_pinvoke(const ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036& unmarshaled, ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshaled_pinvoke& marshaled)
{
	marshaled.___Signature = unmarshaled.___Signature;
	marshaled.___NumberOfThisDisk = unmarshaled.___NumberOfThisDisk;
	marshaled.___NumberOfTheDiskWithTheStartOfTheCentralDirectory = unmarshaled.___NumberOfTheDiskWithTheStartOfTheCentralDirectory;
	marshaled.___NumberOfEntriesInTheCentralDirectoryOnThisDisk = unmarshaled.___NumberOfEntriesInTheCentralDirectoryOnThisDisk;
	marshaled.___NumberOfEntriesInTheCentralDirectory = unmarshaled.___NumberOfEntriesInTheCentralDirectory;
	marshaled.___SizeOfCentralDirectory = unmarshaled.___SizeOfCentralDirectory;
	marshaled.___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber = unmarshaled.___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber;
	marshaled.___ArchiveComment = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___ArchiveComment);
}
IL2CPP_EXTERN_C void ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshal_pinvoke_back(const ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshaled_pinvoke& marshaled, ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t unmarshaledSignature_temp_0 = 0;
	unmarshaledSignature_temp_0 = marshaled.___Signature;
	unmarshaled.___Signature = unmarshaledSignature_temp_0;
	uint16_t unmarshaledNumberOfThisDisk_temp_1 = 0;
	unmarshaledNumberOfThisDisk_temp_1 = marshaled.___NumberOfThisDisk;
	unmarshaled.___NumberOfThisDisk = unmarshaledNumberOfThisDisk_temp_1;
	uint16_t unmarshaledNumberOfTheDiskWithTheStartOfTheCentralDirectory_temp_2 = 0;
	unmarshaledNumberOfTheDiskWithTheStartOfTheCentralDirectory_temp_2 = marshaled.___NumberOfTheDiskWithTheStartOfTheCentralDirectory;
	unmarshaled.___NumberOfTheDiskWithTheStartOfTheCentralDirectory = unmarshaledNumberOfTheDiskWithTheStartOfTheCentralDirectory_temp_2;
	uint16_t unmarshaledNumberOfEntriesInTheCentralDirectoryOnThisDisk_temp_3 = 0;
	unmarshaledNumberOfEntriesInTheCentralDirectoryOnThisDisk_temp_3 = marshaled.___NumberOfEntriesInTheCentralDirectoryOnThisDisk;
	unmarshaled.___NumberOfEntriesInTheCentralDirectoryOnThisDisk = unmarshaledNumberOfEntriesInTheCentralDirectoryOnThisDisk_temp_3;
	uint16_t unmarshaledNumberOfEntriesInTheCentralDirectory_temp_4 = 0;
	unmarshaledNumberOfEntriesInTheCentralDirectory_temp_4 = marshaled.___NumberOfEntriesInTheCentralDirectory;
	unmarshaled.___NumberOfEntriesInTheCentralDirectory = unmarshaledNumberOfEntriesInTheCentralDirectory_temp_4;
	uint32_t unmarshaledSizeOfCentralDirectory_temp_5 = 0;
	unmarshaledSizeOfCentralDirectory_temp_5 = marshaled.___SizeOfCentralDirectory;
	unmarshaled.___SizeOfCentralDirectory = unmarshaledSizeOfCentralDirectory_temp_5;
	uint32_t unmarshaledOffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber_temp_6 = 0;
	unmarshaledOffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber_temp_6 = marshaled.___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber;
	unmarshaled.___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber = unmarshaledOffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber_temp_6;
	unmarshaled.___ArchiveComment = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___ArchiveComment);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ArchiveComment), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___ArchiveComment));
}
IL2CPP_EXTERN_C void ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshal_pinvoke_cleanup(ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___ArchiveComment);
	marshaled.___ArchiveComment = NULL;
}
IL2CPP_EXTERN_C void ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshal_com(const ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036& unmarshaled, ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshaled_com& marshaled)
{
	marshaled.___Signature = unmarshaled.___Signature;
	marshaled.___NumberOfThisDisk = unmarshaled.___NumberOfThisDisk;
	marshaled.___NumberOfTheDiskWithTheStartOfTheCentralDirectory = unmarshaled.___NumberOfTheDiskWithTheStartOfTheCentralDirectory;
	marshaled.___NumberOfEntriesInTheCentralDirectoryOnThisDisk = unmarshaled.___NumberOfEntriesInTheCentralDirectoryOnThisDisk;
	marshaled.___NumberOfEntriesInTheCentralDirectory = unmarshaled.___NumberOfEntriesInTheCentralDirectory;
	marshaled.___SizeOfCentralDirectory = unmarshaled.___SizeOfCentralDirectory;
	marshaled.___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber = unmarshaled.___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber;
	marshaled.___ArchiveComment = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___ArchiveComment);
}
IL2CPP_EXTERN_C void ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshal_com_back(const ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshaled_com& marshaled, ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t unmarshaledSignature_temp_0 = 0;
	unmarshaledSignature_temp_0 = marshaled.___Signature;
	unmarshaled.___Signature = unmarshaledSignature_temp_0;
	uint16_t unmarshaledNumberOfThisDisk_temp_1 = 0;
	unmarshaledNumberOfThisDisk_temp_1 = marshaled.___NumberOfThisDisk;
	unmarshaled.___NumberOfThisDisk = unmarshaledNumberOfThisDisk_temp_1;
	uint16_t unmarshaledNumberOfTheDiskWithTheStartOfTheCentralDirectory_temp_2 = 0;
	unmarshaledNumberOfTheDiskWithTheStartOfTheCentralDirectory_temp_2 = marshaled.___NumberOfTheDiskWithTheStartOfTheCentralDirectory;
	unmarshaled.___NumberOfTheDiskWithTheStartOfTheCentralDirectory = unmarshaledNumberOfTheDiskWithTheStartOfTheCentralDirectory_temp_2;
	uint16_t unmarshaledNumberOfEntriesInTheCentralDirectoryOnThisDisk_temp_3 = 0;
	unmarshaledNumberOfEntriesInTheCentralDirectoryOnThisDisk_temp_3 = marshaled.___NumberOfEntriesInTheCentralDirectoryOnThisDisk;
	unmarshaled.___NumberOfEntriesInTheCentralDirectoryOnThisDisk = unmarshaledNumberOfEntriesInTheCentralDirectoryOnThisDisk_temp_3;
	uint16_t unmarshaledNumberOfEntriesInTheCentralDirectory_temp_4 = 0;
	unmarshaledNumberOfEntriesInTheCentralDirectory_temp_4 = marshaled.___NumberOfEntriesInTheCentralDirectory;
	unmarshaled.___NumberOfEntriesInTheCentralDirectory = unmarshaledNumberOfEntriesInTheCentralDirectory_temp_4;
	uint32_t unmarshaledSizeOfCentralDirectory_temp_5 = 0;
	unmarshaledSizeOfCentralDirectory_temp_5 = marshaled.___SizeOfCentralDirectory;
	unmarshaled.___SizeOfCentralDirectory = unmarshaledSizeOfCentralDirectory_temp_5;
	uint32_t unmarshaledOffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber_temp_6 = 0;
	unmarshaledOffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber_temp_6 = marshaled.___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber;
	unmarshaled.___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber = unmarshaledOffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber_temp_6;
	unmarshaled.___ArchiveComment = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___ArchiveComment);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ArchiveComment), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___ArchiveComment));
}
IL2CPP_EXTERN_C void ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshal_com_cleanup(ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___ArchiveComment);
	marshaled.___ArchiveComment = NULL;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipEndOfCentralDirectoryBlock_TryReadBlock_mEEBDCF160CD99D8A41EC4A6C0363F16EF7E3FB4C (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___0_reader, ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036* ___1_eocdBlock, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036* L_0 = ___1_eocdBlock;
		il2cpp_codegen_initobj(L_0, sizeof(ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036));
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___0_reader;
		NullCheck(L_1);
		uint32_t L_2;
		L_2 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_1);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)101010256))))
		{
			goto IL_0016;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036* L_3 = ___1_eocdBlock;
		L_3->___Signature = ((int32_t)101010256);
		ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036* L_4 = ___1_eocdBlock;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_5 = ___0_reader;
		NullCheck(L_5);
		uint16_t L_6;
		L_6 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_5);
		L_4->___NumberOfThisDisk = L_6;
		ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036* L_7 = ___1_eocdBlock;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_8 = ___0_reader;
		NullCheck(L_8);
		uint16_t L_9;
		L_9 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_8);
		L_7->___NumberOfTheDiskWithTheStartOfTheCentralDirectory = L_9;
		ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036* L_10 = ___1_eocdBlock;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_11 = ___0_reader;
		NullCheck(L_11);
		uint16_t L_12;
		L_12 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_11);
		L_10->___NumberOfEntriesInTheCentralDirectoryOnThisDisk = L_12;
		ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036* L_13 = ___1_eocdBlock;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_14 = ___0_reader;
		NullCheck(L_14);
		uint16_t L_15;
		L_15 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_14);
		L_13->___NumberOfEntriesInTheCentralDirectory = L_15;
		ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036* L_16 = ___1_eocdBlock;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_17 = ___0_reader;
		NullCheck(L_17);
		uint32_t L_18;
		L_18 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_17);
		L_16->___SizeOfCentralDirectory = L_18;
		ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036* L_19 = ___1_eocdBlock;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_20 = ___0_reader;
		NullCheck(L_20);
		uint32_t L_21;
		L_21 = VirtualFuncInvoker0< uint32_t >::Invoke(17, L_20);
		L_19->___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber = L_21;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_22 = ___0_reader;
		NullCheck(L_22);
		uint16_t L_23;
		L_23 = VirtualFuncInvoker0< uint16_t >::Invoke(15, L_22);
		V_0 = L_23;
		ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036* L_24 = ___1_eocdBlock;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_25 = ___0_reader;
		uint16_t L_26 = V_0;
		NullCheck(L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
		L_27 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(29, L_25, L_26);
		L_24->___ArchiveComment = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->___ArchiveComment), (void*)L_27);
		return (bool)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipHelper_ReadBytes_m873AAC59C7D65FF9CE77ED66B7012D7770A8EC2B (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t ___2_bytesToRead, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_bytesToRead;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0021;
	}

IL_0006:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_stream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_buffer;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_1);
		int32_t L_5;
		L_5 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37, L_1, L_2, L_3, L_4);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_0019;
		}
	}
	{
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_7 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		IOException__ctor_mF001EA9B9B8DBFBDD9B63B97A5CC6F0D7FD9F2B3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipHelper_ReadBytes_m873AAC59C7D65FF9CE77ED66B7012D7770A8EC2B_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, L_9));
		int32_t L_10 = V_0;
		int32_t L_11 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_10, L_11));
	}

IL_0021:
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipHelper_SeekBackwardsToSignature_m3465A2A9A461BCF8F8E8D82579B17182338C4B4D (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, uint32_t ___1_signatureToFind, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		V_0 = 0;
		V_1 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_2 = L_0;
		V_3 = (bool)0;
		V_4 = (bool)0;
		goto IL_003c;
	}

IL_0013:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_stream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_2;
		bool L_3;
		L_3 = ZipHelper_SeekBackwardsAndRead_mFA8B804E147D2F19F68002F7353639C92CBC411D(L_1, L_2, (&V_0), NULL);
		V_3 = L_3;
		goto IL_0034;
	}

IL_001f:
	{
		uint32_t L_4 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_2;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = ((int32_t)(((int32_t)((int32_t)L_4<<8))|(int32_t)L_8));
		uint32_t L_9 = V_1;
		uint32_t L_10 = ___1_signatureToFind;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0030;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_0034;
	}

IL_0030:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_0034:
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_001f;
		}
	}

IL_003c:
	{
		bool L_14 = V_4;
		if (L_14)
		{
			goto IL_0043;
		}
	}
	{
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0013;
		}
	}

IL_0043:
	{
		bool L_16 = V_4;
		if (L_16)
		{
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}

IL_0049:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_17 = ___0_stream;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int64_t L_19;
		L_19 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(35, L_17, ((int64_t)L_18), 1);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipHelper_AdvanceToPosition_m5A4492EBB0D4AA1F633A9E349C76C5844ABD755B (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int64_t ___1_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B4_0 = 0;
	{
		int64_t L_0 = ___1_position;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_stream;
		NullCheck(L_1);
		int64_t L_2;
		L_2 = VirtualFuncInvoker0< int64_t >::Invoke(14, L_1);
		V_0 = ((int64_t)il2cpp_codegen_subtract(L_0, L_2));
		goto IL_0036;
	}

IL_000b:
	{
		int64_t L_3 = V_0;
		if ((((int64_t)L_3) > ((int64_t)((int64_t)((int32_t)64)))))
		{
			goto IL_0015;
		}
	}
	{
		int64_t L_4 = V_0;
		G_B4_0 = ((int32_t)L_4);
		goto IL_0017;
	}

IL_0015:
	{
		G_B4_0 = ((int32_t)64);
	}

IL_0017:
	{
		V_1 = G_B4_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = ___0_stream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		int32_t L_7 = V_1;
		NullCheck(L_5);
		int32_t L_8;
		L_8 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37, L_5, L_6, 0, L_7);
		V_2 = L_8;
		int32_t L_9 = V_2;
		if (L_9)
		{
			goto IL_0031;
		}
	}
	{
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_10 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		IOException__ctor_mF001EA9B9B8DBFBDD9B63B97A5CC6F0D7FD9F2B3(L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipHelper_AdvanceToPosition_m5A4492EBB0D4AA1F633A9E349C76C5844ABD755B_RuntimeMethod_var)));
	}

IL_0031:
	{
		int64_t L_11 = V_0;
		int32_t L_12 = V_2;
		V_0 = ((int64_t)il2cpp_codegen_subtract(L_11, ((int64_t)L_12)));
	}

IL_0036:
	{
		int64_t L_13 = V_0;
		if (L_13)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ZipHelper_SeekBackwardsAndRead_mFA8B804E147D2F19F68002F7353639C92CBC411D (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int32_t* ___2_bufferPointer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(14, L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_buffer;
		NullCheck(L_2);
		if ((((int64_t)L_1) < ((int64_t)((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_0039;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___0_stream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_buffer;
		NullCheck(L_4);
		NullCheck(L_3);
		int64_t L_5;
		L_5 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(35, L_3, ((int64_t)((-((int32_t)(((RuntimeArray*)L_4)->max_length))))), 1);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___0_stream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___1_buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___1_buffer;
		NullCheck(L_8);
		ZipHelper_ReadBytes_m873AAC59C7D65FF9CE77ED66B7012D7770A8EC2B(L_6, L_7, ((int32_t)(((RuntimeArray*)L_8)->max_length)), NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = ___0_stream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___1_buffer;
		NullCheck(L_10);
		NullCheck(L_9);
		int64_t L_11;
		L_11 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(35, L_9, ((int64_t)((-((int32_t)(((RuntimeArray*)L_10)->max_length))))), 1);
		int32_t* L_12 = ___2_bufferPointer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___1_buffer;
		NullCheck(L_13);
		*((int32_t*)L_12) = (int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), 1));
		return (bool)0;
	}

IL_0039:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_14 = ___0_stream;
		NullCheck(L_14);
		int64_t L_15;
		L_15 = VirtualFuncInvoker0< int64_t >::Invoke(14, L_14);
		V_0 = ((int32_t)L_15);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16 = ___0_stream;
		NullCheck(L_16);
		int64_t L_17;
		L_17 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(35, L_16, ((int64_t)0), 0);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_18 = ___0_stream;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___1_buffer;
		int32_t L_20 = V_0;
		ZipHelper_ReadBytes_m873AAC59C7D65FF9CE77ED66B7012D7770A8EC2B(L_18, L_19, L_20, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_21 = ___0_stream;
		NullCheck(L_21);
		int64_t L_22;
		L_22 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(35, L_21, ((int64_t)0), 0);
		int32_t* L_23 = ___2_bufferPointer;
		int32_t L_24 = V_0;
		*((int32_t*)L_23) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_24, 1));
		return (bool)1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* __this, String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipArchiveException__ctor_m3049042ABD37E1BBE6970CE41F390DD532955AED (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* __this, String_t* ___0_msg, Exception_t* ___1_inner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_msg;
		Exception_t* L_1 = ___1_inner;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___1_reader, int64_t* ___2_expectedNumberOfEntries, int64_t* ___3_centralDirectoryStart, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Zip64EndOfCentralDirectoryLocator_t992C6B9D349AB3E16CF1E56834BAE57D241F4E79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int64_t V_3 = 0;
	Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66 V_4;
	memset((&V_4), 0, sizeof(V_4));
	EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* V_5 = NULL;
	IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		{
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
			NullCheck(L_0);
			int64_t L_1;
			L_1 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(35, L_0, ((int64_t)((int32_t)-18)), 2);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_stream;
			bool L_3;
			L_3 = ZipHelper_SeekBackwardsToSignature_m3465A2A9A461BCF8F8E8D82579B17182338C4B4D(L_2, ((int32_t)101010256), NULL);
			if (L_3)
			{
				goto IL_0023_1;
			}
		}
		{
			ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_4 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
			ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0B528BD170B49C3CB8F50BDEAD2B38212C231624)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662_RuntimeMethod_var)));
		}

IL_0023_1:
		{
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = ___0_stream;
			NullCheck(L_5);
			int64_t L_6;
			L_6 = VirtualFuncInvoker0< int64_t >::Invoke(14, L_5);
			V_0 = L_6;
			BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = ___1_reader;
			bool L_8;
			L_8 = ZipEndOfCentralDirectoryBlock_TryReadBlock_mEEBDCF160CD99D8A41EC4A6C0363F16EF7E3FB4C(L_7, (&V_1), NULL);
			ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036 L_9 = V_1;
			uint16_t L_10 = L_9.___NumberOfThisDisk;
			ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036 L_11 = V_1;
			uint16_t L_12 = L_11.___NumberOfTheDiskWithTheStartOfTheCentralDirectory;
			if ((((int32_t)L_10) == ((int32_t)L_12)))
			{
				goto IL_004c_1;
			}
		}
		{
			ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_13 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
			ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4A35711F04591C991A81A9D22E0CDE9259A87DCA)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662_RuntimeMethod_var)));
		}

IL_004c_1:
		{
			int64_t* L_14 = ___3_centralDirectoryStart;
			ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036 L_15 = V_1;
			uint32_t L_16 = L_15.___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber;
			*((int64_t*)L_14) = (int64_t)((int64_t)(uint64_t)L_16);
			ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036 L_17 = V_1;
			uint16_t L_18 = L_17.___NumberOfEntriesInTheCentralDirectory;
			ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036 L_19 = V_1;
			uint16_t L_20 = L_19.___NumberOfEntriesInTheCentralDirectoryOnThisDisk;
			if ((((int32_t)L_18) == ((int32_t)L_20)))
			{
				goto IL_006e_1;
			}
		}
		{
			ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_21 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
			ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4A35711F04591C991A81A9D22E0CDE9259A87DCA)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662_RuntimeMethod_var)));
		}

IL_006e_1:
		{
			int64_t* L_22 = ___2_expectedNumberOfEntries;
			ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036 L_23 = V_1;
			uint16_t L_24 = L_23.___NumberOfEntriesInTheCentralDirectory;
			*((int64_t*)L_22) = (int64_t)((int64_t)(uint64_t)L_24);
			ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036 L_25 = V_1;
			uint16_t L_26 = L_25.___NumberOfThisDisk;
			if ((((int32_t)L_26) == ((int32_t)((int32_t)65535))))
			{
				goto IL_009d_1;
			}
		}
		{
			ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036 L_27 = V_1;
			uint32_t L_28 = L_27.___OffsetOfStartOfCentralDirectoryWithRespectToTheStartingDiskNumber;
			if ((((int32_t)L_28) == ((int32_t)(-1))))
			{
				goto IL_009d_1;
			}
		}
		{
			ZipEndOfCentralDirectoryBlock_t6356C0605EBE3BCC59F5FC70D1676B42801F2036 L_29 = V_1;
			uint16_t L_30 = L_29.___NumberOfEntriesInTheCentralDirectory;
			if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)65535)))))
			{
				goto IL_016b_1;
			}
		}

IL_009d_1:
		{
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_31 = ___0_stream;
			int64_t L_32 = V_0;
			NullCheck(L_31);
			int64_t L_33;
			L_33 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(35, L_31, ((int64_t)il2cpp_codegen_subtract(L_32, ((int64_t)((int32_t)16)))), 0);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_34 = ___0_stream;
			bool L_35;
			L_35 = ZipHelper_SeekBackwardsToSignature_m3465A2A9A461BCF8F8E8D82579B17182338C4B4D(L_34, ((int32_t)117853008), NULL);
			if (!L_35)
			{
				goto IL_016b_1;
			}
		}
		{
			BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_36 = ___1_reader;
			bool L_37;
			L_37 = Zip64EndOfCentralDirectoryLocator_TryReadBlock_mC1CFF884A9974D065D505E6FBA8DE963B0A9B096(L_36, (&V_2), NULL);
			Zip64EndOfCentralDirectoryLocator_t992C6B9D349AB3E16CF1E56834BAE57D241F4E79 L_38 = V_2;
			uint64_t L_39 = L_38.___OffsetOfZip64EOCD;
			if ((!(((uint64_t)L_39) > ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
			{
				goto IL_00df_1;
			}
		}
		{
			ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_40 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
			ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_40, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral636EB8D73825D70BDF3A172729D5FB93E26F1C50)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662_RuntimeMethod_var)));
		}

IL_00df_1:
		{
			Zip64EndOfCentralDirectoryLocator_t992C6B9D349AB3E16CF1E56834BAE57D241F4E79 L_41 = V_2;
			uint64_t L_42 = L_41.___OffsetOfZip64EOCD;
			V_3 = L_42;
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_43 = ___0_stream;
			int64_t L_44 = V_3;
			NullCheck(L_43);
			int64_t L_45;
			L_45 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(35, L_43, L_44, 0);
			BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_46 = ___1_reader;
			bool L_47;
			L_47 = Zip64EndOfCentralDirectoryRecord_TryReadBlock_mA35089F309255B687FFD1A07C4B553FC83045FF3(L_46, (&V_4), NULL);
			if (L_47)
			{
				goto IL_0104_1;
			}
		}
		{
			ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_48 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
			ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_48, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral731311D2159DAC2D5B655503F1BB10A3F2B9929F)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_48, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662_RuntimeMethod_var)));
		}

IL_0104_1:
		{
			Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66 L_49 = V_4;
			uint64_t L_50 = L_49.___NumberOfEntriesTotal;
			if ((!(((uint64_t)L_50) > ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
			{
				goto IL_0121_1;
			}
		}
		{
			ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_51 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
			ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_51, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDFF3F023C4F679C61BE466F496005BC400BAD358)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_51, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662_RuntimeMethod_var)));
		}

IL_0121_1:
		{
			Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66 L_52 = V_4;
			uint64_t L_53 = L_52.___OffsetOfCentralDirectory;
			if ((!(((uint64_t)L_53) > ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
			{
				goto IL_013e_1;
			}
		}
		{
			ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_54 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
			ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_54, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9B52EC354AB10F26E2AE0B6F5773BB8F5D98BB01)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662_RuntimeMethod_var)));
		}

IL_013e_1:
		{
			Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66 L_55 = V_4;
			uint64_t L_56 = L_55.___NumberOfEntriesTotal;
			Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66 L_57 = V_4;
			uint64_t L_58 = L_57.___NumberOfEntriesOnThisDisk;
			if ((((int64_t)L_56) == ((int64_t)L_58)))
			{
				goto IL_0159_1;
			}
		}
		{
			ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_59 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
			ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_59, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4A35711F04591C991A81A9D22E0CDE9259A87DCA)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_59, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662_RuntimeMethod_var)));
		}

IL_0159_1:
		{
			int64_t* L_60 = ___2_expectedNumberOfEntries;
			Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66 L_61 = V_4;
			uint64_t L_62 = L_61.___NumberOfEntriesTotal;
			*((int64_t*)L_60) = (int64_t)L_62;
			int64_t* L_63 = ___3_centralDirectoryStart;
			Zip64EndOfCentralDirectoryRecord_t365B04D1A8A97E65C3CA6ED0667CA57B901B7E66 L_64 = V_4;
			uint64_t L_65 = L_64.___OffsetOfCentralDirectory;
			*((int64_t*)L_63) = (int64_t)L_65;
		}

IL_016b_1:
		{
			int64_t* L_66 = ___3_centralDirectoryStart;
			int64_t L_67 = *((int64_t*)L_66);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_68 = ___0_stream;
			NullCheck(L_68);
			int64_t L_69;
			L_69 = VirtualFuncInvoker0< int64_t >::Invoke(13, L_68);
			if ((((int64_t)L_67) <= ((int64_t)L_69)))
			{
				goto IL_0180_1;
			}
		}
		{
			ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_70 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
			ZipArchiveException__ctor_m7B18E6B16AF3CA22A6596F0A85F53D4610B8B64E(L_70, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9B52EC354AB10F26E2AE0B6F5773BB8F5D98BB01)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_70, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662_RuntimeMethod_var)));
		}

IL_0180_1:
		{
			goto IL_01a0;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0182;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0191;
		}
		throw e;
	}

CATCH_0182:
	{
		EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* L_71 = ((EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*)IL2CPP_GET_ACTIVE_EXCEPTION(EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*));;
		V_5 = L_71;
		EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* L_72 = V_5;
		ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_73 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
		ZipArchiveException__ctor_m3049042ABD37E1BBE6970CE41F390DD532955AED(L_73, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68509826B9B4E2C36849372302835C2CD03B9DDF)), L_72, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_73, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662_RuntimeMethod_var)));
	}

CATCH_0191:
	{
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_74 = ((IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)IL2CPP_GET_ACTIVE_EXCEPTION(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*));;
		V_6 = L_74;
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_75 = V_6;
		ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013* L_76 = (ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveException_tE87C4498E8D7901F783E955433FE495E5C1C0013_il2cpp_TypeInfo_var)));
		ZipArchiveException__ctor_m3049042ABD37E1BBE6970CE41F390DD532955AED(L_76, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68509826B9B4E2C36849372302835C2CD03B9DDF)), L_75, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_76, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipArchiveUtils_ReadEndOfCentralDirectory_mC619CF1C279EE4193982C0991D499BE603975662_RuntimeMethod_var)));
	}

IL_01a0:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* StringComparer_get_OrdinalIgnoreCase_m071AA1B1747345CCA058A3879EBDEBBA2EA4B169_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var);
		OrdinalIgnoreCaseComparer_t8BAE11990A4C855D3BCBBFB42F4EF8D45088FBB0* L_0 = ((StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06_il2cpp_TypeInfo_var))->___s_ordinalIgnoreCase;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ZipGenericExtraField_get_Tag_m759B6ECFDBC6D044352C08FB434AEC491B3E41E4_inline (ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->____tag;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ZipGenericExtraField_get_Size_mFEE59D1C38FA6DDB6FEDF1607A19FF167B4B7422_inline (ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ZipGenericExtraField_get_Data_mF8133FF89E762F3B70FCF61010858511B7137296_inline (ZipGenericExtraField_t1156D6C5F852D978B4B809EE0741A38BE4FC6724* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Zip64ExtraField_get_UncompressedSize_m6DCFFD258F31202A9EDE82F260B284F2CBAC641F_inline (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = __this->____uncompressedSize;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Zip64ExtraField_get_CompressedSize_m990D9DD08B3C53024636DF0802E25B88075D603D_inline (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = __this->____compressedSize;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 Zip64ExtraField_get_LocalHeaderOffset_m232842FCC1BF48E123B2716FBAC8B769F0B2B07A_inline (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 L_0 = __this->____localHeaderOffset;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 Zip64ExtraField_get_StartDiskNumber_m6A797299BED711B7BDBC42993C746F14BE2C49D8_inline (Zip64ExtraField_tB2AEAE7CFD68E1CE7E374306B6FFA59C3DB457C9* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->____startDiskNumber;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mC9F8B93F67AFC1ED97B9CE427850FC247868E3F3_gshared_inline (List_1_t93708B96299F4A940ABC0B448E614CD079399B24* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Nullable_1_GetValueOrDefault_m5270672823A1917D6D56F5ACF4AC1BA37A103FC5_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue;
		return L_0;
	}
}
