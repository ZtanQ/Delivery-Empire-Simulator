#include "pch-cpp.hpp"





template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03;
struct IEnumerator_1_tC961DE61E6FC968A1093AC937E9C23B14B61597D;
struct IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1;
struct IEnumerator_1_t8FA46572A78639B858747F8601A87E15E3AD958F;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct IEnumerator_1_t29A8CA7355FCD9DC17EBB7F096703BD8AD63C49F;
struct IEnumerator_1_t737E5D96E5E3657734509E507812DBA5E7EDD547;
struct IEnumerator_1_tB41B292FAFD525FC5C54D7E469F0BA1A193CA8B1;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_t2AE506746DD40D1B5F17C877E00D1A2DC8E3EC13;
struct IEnumerator_1_t799F7647CE8230B0558DEEB1D972247C04382C50;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56;
struct Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D;
struct Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA;
struct Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA;
struct Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C;
struct Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F;
struct Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585;
struct Property_2_t77BD2AD223504355C87784ACF22E76208DA91020;
struct Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20;
struct Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9;
struct Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8;
struct Property_2_t113890ECA80F29325A033471911F4E8E45B619ED;
struct Property_2_t80A9EC2185AB0124FD682D8A7A9B82362F7D88A3;
struct Property_2_tFB89CACD8E6BB9B376CA29327AB088841172D029;
struct Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F;
struct Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89;
struct Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452;
struct Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A;
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3;
struct QueueDebugView_1_t8BB38E64819624DE272D7E28A299B19F779A6D9E;
struct Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D;
struct Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8;
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E;
struct Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9;
struct Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850;
struct Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF;
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41;
struct Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68;
struct Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1;
struct RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D;
struct RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81;
struct RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56;
struct TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7;
struct TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD;
struct TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689;
struct NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA;
struct NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653;
struct NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07;
struct TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3;
struct TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52;
struct TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9;
struct ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331;
struct AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct TypeU5BU5D_t386A95FC3A42CDDC6693AD26E6C6B717BEFC82B3;
struct EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8;
struct CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
struct Exception_t;
struct IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IPropertyVisitor_tF3D6EE64B9F811F9B4E5001E70D1EAEB3CA8B8FC;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MeshGenerationCallback_t9735BAFB971D361BCB27AB541F8205A7C0FFEF50;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0;
IL2CPP_EXTERN_C String_t* _stringLiteral26E2095A8B52212AA5C1E02D88D8E33A9DB72C3B;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA;
struct NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653;
struct TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3;
struct TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52;
struct ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331;
struct EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8;
struct CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EmptyArray_1_t692B58AFAED6F55B45924E251B036A18DA20E251  : public RuntimeObject
{
};
struct EmptyArray_1_t6CAC2B30CBBB3DF2C0516D226F177A7023251E16  : public RuntimeObject
{
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F  : public RuntimeObject
{
};
struct EmptyArray_1_t0D07744D06CBE1D5EFB0F376FCD9DE664680DB24  : public RuntimeObject
{
};
struct EmptyArray_1_t77BFDB090CFC6AE661834F0BD4ED43833F4F079D  : public RuntimeObject
{
};
struct EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5  : public RuntimeObject
{
};
struct EmptyArray_1_t77401F488985814E4B89684C1CCE07D59127CD6C  : public RuntimeObject
{
};
struct EmptyArray_1_t7C7E840E7790E897ABDA15ED3B9C6BB1AD74E6AF  : public RuntimeObject
{
};
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715  : public RuntimeObject
{
	AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t77BD2AD223504355C87784ACF22E76208DA91020  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t113890ECA80F29325A033471911F4E8E45B619ED  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t80A9EC2185AB0124FD682D8A7A9B82362F7D88A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tFB89CACD8E6BB9B376CA29327AB088841172D029  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct QueueDebugView_1_t8BB38E64819624DE272D7E28A299B19F779A6D9E  : public RuntimeObject
{
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ____queue;
};
struct Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D  : public RuntimeObject
{
	ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8  : public RuntimeObject
{
	EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9  : public RuntimeObject
{
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850  : public RuntimeObject
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68  : public RuntimeObject
{
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1  : public RuntimeObject
{
	CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7  : public RuntimeObject
{
	NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* ____slots;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____slotMap;
	int32_t ____inUseCount;
	int32_t ____pageId;
	int32_t ____nextFreeSlotLine;
};
struct TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD  : public RuntimeObject
{
	NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653* ____slots;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____slotMap;
	int32_t ____inUseCount;
	int32_t ____pageId;
	int32_t ____nextFreeSlotLine;
};
struct TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689  : public RuntimeObject
{
	NodeU5BU5D_t9EBDE2B4B8A6962AD214F9D2E76D66F654B07B07* ____slots;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____slotMap;
	int32_t ____inUseCount;
	int32_t ____pageId;
	int32_t ____nextFreeSlotLine;
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
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
struct Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 
{
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ____q;
	int32_t ____version;
	int32_t ____index;
	int32_t ____currentElement;
};
struct Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891 
{
	Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* ____q;
	int32_t ____version;
	int32_t ____index;
	uint32_t ____currentElement;
};
struct Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1 
{
	Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* ____q;
	int32_t ____version;
	int32_t ____index;
	Il2CppSharedGenericObject* ____currentElement;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C;
struct NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 
{
	int32_t ____nodeID;
	int32_t ____mainTreeNodeID;
};
struct NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF 
{
	int32_t ____nodeID;
	int32_t ____mainTreeNodeID;
};
struct NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813 
{
	int32_t ____nodeID;
	int32_t ____mainTreeNodeID;
};
struct RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115 
{
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* ____tree;
	int32_t ____version;
	int32_t ____index;
	int32_t ____mainTreeNodeId;
	int32_t ____current;
};
struct RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF 
{
	RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* ____tree;
	int32_t ____version;
	int32_t ____index;
	int32_t ____mainTreeNodeId;
	Il2CppSharedGenericObject* ____current;
};
typedef Il2CppFullySharedGenericStruct RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4;
struct ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 
{
	uint32_t ___Item1;
	uint32_t ___Item2;
};
struct AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE 
{
	RuntimeObject* ___m_Target;
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Previous;
};
struct AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE_marshaled_pinvoke
{
	RuntimeObject* ___m_Target;
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Previous;
};
struct AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE_marshaled_com
{
	RuntimeObject* ___m_Target;
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Previous;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E 
{
	int64_t ___Value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD 
{
	uint32_t ____state;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
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
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel;
};
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshaled_pinvoke
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel;
};
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshaled_com
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel;
};
struct CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 
{
	MeshGenerationCallback_t9735BAFB971D361BCB27AB541F8205A7C0FFEF50* ___callback;
	RuntimeObject* ___userData;
};
struct CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_marshaled_pinvoke
{
	Il2CppMethodPointer ___callback;
	Il2CppIUnknown* ___userData;
};
struct CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_marshaled_com
{
	Il2CppMethodPointer ___callback;
	Il2CppIUnknown* ___userData;
};
struct ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 
{
	uint32_t ____state;
};
struct U3CbuttonsU3Ee__FixedBuffer_t32316838CB3560CC83CB36DE00B3352EF9FF122F 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CbuttonsU3Ee__FixedBuffer_t32316838CB3560CC83CB36DE00B3352EF9FF122F__padding[40];
	};
};
struct Enumerator_t125C05E9FF652475E0BCF0E4A90A0DF5E495FD8C 
{
	Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* ____q;
	int32_t ____version;
	int32_t ____index;
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ____currentElement;
};
struct Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B 
{
	Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* ____q;
	int32_t ____version;
	int32_t ____index;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ____currentElement;
};
struct Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 
{
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ____q;
	int32_t ____version;
	int32_t ____index;
	EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 ____currentElement;
};
struct Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 
{
	Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* ____q;
	int32_t ____version;
	int32_t ____index;
	CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 ____currentElement;
};
struct NodeColor_t60CC6B48EF16CC76598762EF71BFEABD73151911 
{
	int32_t ___value__;
};
struct NodeColor_t3E6579E49ADCA0D1C69F8C6EB9E166F5EEC169EF 
{
	int32_t ___value__;
};
struct EventSource_t395F7AD9932CE73777C8DB122DE6638A61AAA07E 
{
	int32_t ___value__;
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
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	int32_t ___value__;
};
struct RBTreeError_t7F1B2496C83326D0832CBD24FB32282F348CD048 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct TreeAccessMethod_t93F641AE9C014E6ABDD0A2B1EA84068077F46CC5 
{
	int32_t ___value__;
};
struct Command_t8AE6C32AB4C4E5FC4B8C77082D0EE5275B3414B9 
{
	int32_t ___value__;
};
struct Type_t978C0427FF2CB3DE1CC7BB6CC19BAC9005EC519D 
{
	int32_t ___value__;
};
struct Type_tDE4005CDD70E001C9402FEE8D2F2431154FED092 
{
	int32_t ___value__;
};
struct ButtonsState_tDD5A3F9241886C7E1BA2975DF6E7045C321583E3 
{
	U3CbuttonsU3Ee__FixedBuffer_t32316838CB3560CC83CB36DE00B3352EF9FF122F ___buttons;
};
struct Type_tBD67F20EC8969784B5377C5DC8F261E207A14792 
{
	int32_t ___value__;
};
struct Direction_tCF5F04CE76DF556D8ABCA537FC7C977681A14996 
{
	int32_t ___value__;
};
struct Type_tDA196B70B848DC5CD4982EBF31E0945B199A68C7 
{
	int32_t ___value__;
};
struct Button_tA3E7AF5F245F630CB38476BAB013B509F53B35B8 
{
	uint32_t ___value__;
};
struct Type_tAD126B1DC1FD450FB4C782B18131374A55C28858 
{
	int32_t ___value__;
};
struct Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258 
{
	int32_t ____selfId;
	int32_t ____leftId;
	int32_t ____rightId;
	int32_t ____parentId;
	int32_t ____nextId;
	int32_t ____subTreeSize;
	int32_t ____keyOfNode;
	int32_t ____nodeColor;
};
struct Node_t299905C052EE0D8A835E38326073B23299A2B8A1 
{
	int32_t ____selfId;
	int32_t ____leftId;
	int32_t ____rightId;
	int32_t ____parentId;
	int32_t ____nextId;
	int32_t ____subTreeSize;
	Il2CppSharedGenericObject* ____keyOfNode;
	int32_t ____nodeColor;
};
struct RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D  : public RuntimeObject
{
	TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* ____pageTable;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____pageTableMap;
	int32_t ____inUsePageCount;
	int32_t ____nextFreePageLine;
	int32_t ___root;
	int32_t ____version;
	int32_t ____inUseNodeCount;
	int32_t ____inUseSatelliteTreeCount;
	int32_t ____accessMethod;
};
struct RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81  : public RuntimeObject
{
	TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* ____pageTable;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____pageTableMap;
	int32_t ____inUsePageCount;
	int32_t ____nextFreePageLine;
	int32_t ___root;
	int32_t ____version;
	int32_t ____inUseNodeCount;
	int32_t ____inUseSatelliteTreeCount;
	int32_t ____accessMethod;
};
struct RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56  : public RuntimeObject
{
	TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* ____pageTable;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____pageTableMap;
	int32_t ____inUsePageCount;
	int32_t ____nextFreePageLine;
	int32_t ___root;
	int32_t ____version;
	int32_t ____inUseNodeCount;
	int32_t ____inUseSatelliteTreeCount;
	int32_t ____accessMethod;
};
struct CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F 
{
	int32_t ___type;
	int32_t ___command;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 
{
	int32_t ___type;
	int32_t ___keyCode;
	ButtonsState_tDD5A3F9241886C7E1BA2975DF6E7045C321583E3 ___buttonsState;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD 
{
	int32_t ___type;
	int32_t ___direction;
	bool ___shouldBeUsed;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___direction;
	int32_t ___shouldBeUsed;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_com
{
	int32_t ___type;
	int32_t ___direction;
	int32_t ___shouldBeUsed;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___worldOrientation;
	float ___maxDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	bool ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___worldOrientation;
	float ___maxDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	int32_t ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_com
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___worldOrientation;
	float ___maxDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	int32_t ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A 
{
	Il2CppChar ___character;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_pinvoke
{
	uint8_t ___character;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_com
{
	uint8_t ___character;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ____type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ____type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____managedEvent_OffsetPadding[8];
			RuntimeObject* ____managedEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____managedEvent_OffsetPadding_forAlignmentOnly[8];
			RuntimeObject* ____managedEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____keyEvent_OffsetPadding[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____keyEvent_OffsetPadding_forAlignmentOnly[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____pointerEvent_OffsetPadding[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 ____pointerEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____pointerEvent_OffsetPadding_forAlignmentOnly[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 ____pointerEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____textInputEvent_OffsetPadding[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A ____textInputEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____textInputEvent_OffsetPadding_forAlignmentOnly[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A ____textInputEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____commandEvent_OffsetPadding[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____commandEvent_OffsetPadding_forAlignmentOnly[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____navigationEvent_OffsetPadding[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD ____navigationEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____navigationEvent_OffsetPadding_forAlignmentOnly[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD ____navigationEvent_forAlignmentOnly;
		};
	};
};
struct Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ____type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ____type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____managedEvent_OffsetPadding[8];
			Il2CppIUnknown* ____managedEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____managedEvent_OffsetPadding_forAlignmentOnly[8];
			Il2CppIUnknown* ____managedEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____keyEvent_OffsetPadding[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____keyEvent_OffsetPadding_forAlignmentOnly[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____pointerEvent_OffsetPadding[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_pinvoke ____pointerEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____pointerEvent_OffsetPadding_forAlignmentOnly[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_pinvoke ____pointerEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____textInputEvent_OffsetPadding[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_pinvoke ____textInputEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____textInputEvent_OffsetPadding_forAlignmentOnly[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_pinvoke ____textInputEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____commandEvent_OffsetPadding[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____commandEvent_OffsetPadding_forAlignmentOnly[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____navigationEvent_OffsetPadding[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_pinvoke ____navigationEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____navigationEvent_OffsetPadding_forAlignmentOnly[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_pinvoke ____navigationEvent_forAlignmentOnly;
		};
	};
};
struct Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ____type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ____type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____managedEvent_OffsetPadding[8];
			Il2CppIUnknown* ____managedEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____managedEvent_OffsetPadding_forAlignmentOnly[8];
			Il2CppIUnknown* ____managedEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____keyEvent_OffsetPadding[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____keyEvent_OffsetPadding_forAlignmentOnly[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____pointerEvent_OffsetPadding[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_com ____pointerEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____pointerEvent_OffsetPadding_forAlignmentOnly[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_com ____pointerEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____textInputEvent_OffsetPadding[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_com ____textInputEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____textInputEvent_OffsetPadding_forAlignmentOnly[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_com ____textInputEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____commandEvent_OffsetPadding[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____commandEvent_OffsetPadding_forAlignmentOnly[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____navigationEvent_OffsetPadding[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_com ____navigationEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____navigationEvent_OffsetPadding_forAlignmentOnly[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_com ____navigationEvent_forAlignmentOnly;
		};
	};
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 
{
	Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* ____q;
	int32_t ____version;
	int32_t ____index;
	Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 ____currentElement;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct EmptyArray_1_t692B58AFAED6F55B45924E251B036A18DA20E251_StaticFields
{
	ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* ___Value;
};
struct EmptyArray_1_t6CAC2B30CBBB3DF2C0516D226F177A7023251E16_StaticFields
{
	EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* ___Value;
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Value;
};
struct EmptyArray_1_t0D07744D06CBE1D5EFB0F376FCD9DE664680DB24_StaticFields
{
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* ___Value;
};
struct EmptyArray_1_t77BFDB090CFC6AE661834F0BD4ED43833F4F079D_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___Value;
};
struct EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___Value;
};
struct EmptyArray_1_t77401F488985814E4B89684C1CCE07D59127CD6C_StaticFields
{
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* ___Value;
};
struct EmptyArray_1_t7C7E840E7790E897ABDA15ED3B9C6BB1AD74E6AF_StaticFields
{
	CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* ___Value;
};
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_StaticFields
{
	AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* ___s_emptyArray;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
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
struct Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_StaticFields
{
	TypeU5BU5D_t386A95FC3A42CDDC6693AD26E6C6B717BEFC82B3* ___TypesWithState;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331  : public RuntimeArray
{
	ALIGN_FIELD (8) ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 m_Items[1];

	inline ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 value)
	{
		m_Items[index] = value;
	}
};
struct EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A  : public RuntimeArray
{
	ALIGN_FIELD (8) Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 m_Items[1];

	inline Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____managedEvent), (void*)NULL);
	}
	inline Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____managedEvent), (void*)NULL);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC  : public RuntimeArray
{
	ALIGN_FIELD (8) JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 m_Items[1];

	inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 value)
	{
		m_Items[index] = value;
	}
};
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8  : public RuntimeArray
{
	ALIGN_FIELD (8) EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 m_Items[1];

	inline EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Event), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Panel), (void*)NULL);
		#endif
	}
	inline EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Event), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Panel), (void*)NULL);
		#endif
	}
};
struct CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9  : public RuntimeArray
{
	ALIGN_FIELD (8) CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 m_Items[1];

	inline CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___callback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___userData), (void*)NULL);
		#endif
	}
	inline CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___callback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___userData), (void*)NULL);
		#endif
	}
};
struct TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3  : public RuntimeArray
{
	ALIGN_FIELD (8) TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* m_Items[1];

	inline TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA  : public RuntimeArray
{
	ALIGN_FIELD (8) Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258 m_Items[1];

	inline Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258 value)
	{
		m_Items[index] = value;
	}
};
struct TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52  : public RuntimeArray
{
	ALIGN_FIELD (8) TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* m_Items[1];

	inline TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653  : public RuntimeArray
{
	ALIGN_FIELD (8) Node_t299905C052EE0D8A835E38326073B23299A2B8A1 m_Items[1];

	inline Node_t299905C052EE0D8A835E38326073B23299A2B8A1 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Node_t299905C052EE0D8A835E38326073B23299A2B8A1* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Node_t299905C052EE0D8A835E38326073B23299A2B8A1 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____keyOfNode), (void*)NULL);
	}
	inline Node_t299905C052EE0D8A835E38326073B23299A2B8A1 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Node_t299905C052EE0D8A835E38326073B23299A2B8A1* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Node_t299905C052EE0D8A835E38326073B23299A2B8A1 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____keyOfNode), (void*)NULL);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* Array_Empty_TisValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8_m333097FF36C87F06696A8E782F14066A2841FE00_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9E9616183C1194AAFA6DDD531B97467EC333432F (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8A7ED6A2B52302D616E21E025FBA1620A1BB8CC5 (Enumerator_t125C05E9FF652475E0BCF0E4A90A0DF5E495FD8C* __this, Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m058F6E4F4E6EB759CA127F527926CEED7E30E380 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8_m4C53F9B0652D817DC94A124434E7349F0763D8A9 (ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* ___0_array, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* Array_Empty_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1AD513F77218E59FBB83B12CD05888A1BF6D54B0_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9C99B93C7AB97E316D1E8591BCF01B03FD5B9F1A (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m96AAB9F5DC5F6BBCB377A9459038CB7F0CF0875C (Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18* __this, Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4E22F11E12D35FD450ED05E4C4A7D959DDCC8E58 (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m783DEB1BEA7DFED9BEAA2878AE0FFC9E1A083B73 (EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* ___0_array, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mC239D559AF84CEE25E8EEADB05B96025C66ED6D5 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE (Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0* __this, Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9A483395EF3F401BC08314BDE9392BD26EBE444F (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886 (Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B* __this, Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_mCD89004E22CB4FEB73672DD2830E315DDA4DA3BE (JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* ___0_array, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mCA8E0FFC567DD0017C621A6B75027F8565CFA7E6 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m883CA17DC68406094FEFA9AAD8C40161CA35D1F3 (Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891* __this, Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m87C0DAA7B799FEF651F40F96BDB0A437E1D24CEE (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mFC8BDE74B86C42A57D89FDA28EED3DDEF7B67A17 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, uint32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m1549601D804B1A2FA09822B8FF6018C374086954_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m37472EFA972090AD3A35A3715208772B2F3F6339_gshared (Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1* __this, Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m6EF406DB0A9F8B868374ABDF966B343F281FEE1F_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, Il2CppSharedGenericObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB_fshared (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___0_q, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5115601B916B93D40CF5F1D0E701A44CE4AC00BD (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E (Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602* __this, Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0 (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mDA8ABF0C8CBC330E0DBA64B13F204111EAFA1294 (EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* ___0_array, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* Array_Empty_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mE74D581FD3F8DF5CFA50A5133DB5A6F7D16B99CD_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m225DAA2133CC2108D2F16C7EF47CA7368AE5E4E7 (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m076E60AA8F25CE906A72B6409796A0A68BEB99CB (Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710* __this, Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4A8990345304F038BC2D5F79896D4BED8CC2CD82 (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mF7378E0A466D44125A606D050C5AD75FCE4C819F (CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* ___0_array, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeNodeByIndex_m6AC21A1EB09BF6660EF47F4D771F47534F2F9751 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_index, int32_t* ___1_satelliteRootId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTree_1_Successor_mBE6CC011CC22FE54A564CB8AE8247BC43146D3EE (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t* ___0_nodeId, int32_t* ___1_mainTreeNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTreeEnumerator_MoveNext_mB00AE8BACE08D31B8BBB6420BC48380D35B58173 (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RBTreeEnumerator_get_Current_mCB9EE3BDCE8D688E0B6EA03B14E5D55ABF7E1325_inline (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_m51A6150BF88CB14DDE97B1EF33342869AEA55F6C (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m6EE5A4DE7A3C8DE01E59B4FACEE2DFD7F3FC45F4 (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeNodeByIndex_m35534B37511AF06371695E0CB5616BDB7E8E8EFD_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_index, int32_t* ___1_satelliteRootId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTree_1_Successor_mD782B968CE5256E83614B6E8445F37F5F9A9592B_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t* ___0_nodeId, int32_t* ___1_mainTreeNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTreeEnumerator_MoveNext_m81963E6532BC9A9B8B168732E868E47314C7B1AD_gshared (RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* RBTreeEnumerator_get_Current_mCA7EABFD3BB38F4E43C81EB2C51698DA685F4728_gshared_inline (RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mBAE1BA5BCC8CB428F7A30CA8F4F6B461F335E502_gshared (RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m735ED42F433ED59EB4B5B59651A8EDE7FCDD3AB8_gshared (RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_Dispose_m44368C76E9C0F3A17DB3342C808CA8F9582C5955_fshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTreeEnumerator_MoveNext_mB5562C7DBD432B39AC6CDE17139006D3141A2E7E_fshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RBTreeEnumerator_get_Current_m55E7496F0199640CB43772D3C21F0A10462AE734_fshared_inline (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mD023E34D3906399CCC1A8E8AB645C5C9810898FB_fshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m30C1ACC2356659BDDEC767619AA0D8B5EA06E470_fshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_InitTree_mCF091A660A304A14A09AB4C817AF26E1585EA323 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_size, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TreePage_set_InUseCount_mF6068EC2FA94F4B17098D5C83B965F4703FA033A_fshared_inline (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_MarkPageFree_mDFB2F31CD9B41FEAC6E15E8798687212440448EB (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* ___0_page, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TreePage_get_PageId_mB8F6DE559009BD1B1683DD96A132A8AF8229F6C7_fshared_inline (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexOfPageWithFreeSlot_m44B83E5017AC18424A1CABBB5B69F4334BCACABA (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, bool ___0_allocatedPage, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePage__ctor_m44F8EC22FAAB8146AC4E2D6E299F6A122DE40C83 (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, int32_t ___0_size, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TreePage_set_PageId_m106D0788C3D06308F04C6400B1B3D166396CF84D_fshared_inline (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TreePage_get_InUseCount_m54A6D752FBFA8E21B9BE911DEFEBB6EBE27F86B4_fshared_inline (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_FreePage_m428135A97F5257D955C88324EEC40540887A061C (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* ___0_page, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIntValueFromBitMap_m8F0068910A5B84B992C5C54617A5313C2736D58B_fshared (uint32_t ___0_bitMap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TreePage_AllocSlot_m98CE7C69F3225831EDC1F758AC133AFDBD631329 (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Minimum_m504331C88F6C6D70AA7930B661AC172AC26E1844 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Successor_mD725A36AE3B97C64315EA2030135F2ED92601A7B (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_rightNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_parentNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_nextNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_leftNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_IncreaseSize_m613975F4AD06761B3DD9F26BC8162B71413A26C8 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBInsert_m0B2330653BCF5430989431DAC32328E6EBBAED4E (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNodeID, int32_t ___3_position, bool ___4_append, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetNewNode_mF0CCB84B822853BFDC6AFE48116DDA1F77F10568 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_color, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_LeftRotate_mD49CD676DF4B79C1B56C4158BF78B239F3EBF7EE (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 RBTree_1_GetNodeByKey_mF4FE4024CADC8B1F8FABFA13EACA57E2B6F775F2 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 RBTree_1_GetNodeByIndex_m1925A1C6C371B002EE706C8EDEF3785E4AD148A8 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_userIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDeleteX_m6AEBE3413E7ECF37B61015F652AA07DF5C9A13AC (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_z_id, int32_t ___2_mainTreeNodeID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_RecomputeSize_mE849917C6B9CE571D95FFA5AE30E1E7CDB24310A (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_DecreaseSize_m2CC82F8846D718DBC61F565C78775A068556E52F (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDeleteFixup_m25667C31EC6662F3899EA7CDFF622F9DB394AF89 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_px_id, int32_t ___3_mainTreeNodeID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_FreeNode_m142FC91FA594DC91799F5231F7AE945DCC6922FD (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_SearchSubTree_m57C42F24D37D298A0566D530361F03F6F0EB76B2 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodePath__ctor_mA9A74612E0785F30CCC660C7936418FD57A9EB55_fshared (NodePath_tC3CDC05C2DFAD35988FD6B5F84FAD7417B313813* __this, int32_t ___0_nodeID, int32_t ___1_mainTreeNodeID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByNodePath_mF59D980A8D9F3D12CFE602F95AFDB04F6F6804C5 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeIndexByNode_mF54D314A27930CDEE19BE0B8DE58C63A7A6DABCD (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeIndexWithSatelliteByNode_m2A8640152375F25E6DFCB524E3C5E3762A819087 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeNodeByIndex_m1A87F9210DD3BF7304196AFC2FF45D6E3A507064 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_m2733AFDE89B7B2489A1BDA8AED77CB198FB6AE6E (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByNode_m88D61B019FE6CFCFF5BA5E43320983A7019BC297 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_node, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_IndexOf_m1A15AAD706F9931B99D4225D76D45140B09D6F74 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_InsertAt_mC52B6134B733A4D25B2F3621177144038C005B4F (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_position, int32_t ___1_item, bool ___2_append, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_DeleteByIndex_m46F2E47E9EE4CDEB58E225ED10A54A4C31F485B6 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_i, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_get_Count_mEEBAEC4856EDAB96F400E22D1AE495981435BD97_fshared (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_InitTree_mB4E9EFD37104F6D38AB761F3E4D895745AC2D002_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* RBTree_1_AllocPage_m84FC966EA9AFC28ED05DA34CC22340CD10A486FB_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_MarkPageFree_m5546C110128A1D0E80DC9D74B0425E7ACFAA9672_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* ___0_page, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexOfPageWithFreeSlot_m0379C10FF75C8AED424C8E0D9A5834A18BEBE710_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, bool ___0_allocatedPage, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePage__ctor_m8441E60D204F8F3B8FBF96726C918F8BFD088BD5_gshared (TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* __this, int32_t ___0_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_FreePage_m02920F187E1C52D2A7E325B08685D3BC171A55F9_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* ___0_page, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TreePage_AllocSlot_m03CBA01A6EC2A97DA8820AF6BA061837EF01856D_gshared (TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* __this, RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Minimum_m92638EC28D7B4C793E87489440C5381402073712_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_x_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Successor_m66C0B2AECF8F8BFE3CF4E25F4995C30C80474F62_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_x_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetRight_mCA90AE8051905DE68BD794277CB3A6F4D7273ED1_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, int32_t ___1_rightNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetParent_m5CA27D9474EC84E5A8823FE803C60CC047572643_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, int32_t ___1_parentNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetNext_mC0DDCD6E5A9738375AF9890D1F11478F03054565_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, int32_t ___1_nextNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetKey_m5B037F7426364C8491931FA06665AEBB3C22799B_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, Il2CppSharedGenericObject* ___1_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetLeft_m1053D96D9AE2E6EBF34B5C1D9A449C5531FA59B3_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, int32_t ___1_leftNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetSubTreeSize_mAC7E4B0847BE0A523FB81EC26F8E3C4C9698E7E5_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, int32_t ___1_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_IncreaseSize_m19487325BED667C17E3C544D743182B38C55CD1A_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBInsert_m0F7E610495314AF8E43945E519EE8BB599AA74BE_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNodeID, int32_t ___3_position, bool ___4_append, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetNewNode_m5863E283C2B738283FF751E044EC017FA269C542_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_color_mFB47C01E80DF20AD25C265811CEAB8E390F90912_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, int32_t ___1_color, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_LeftRotate_m55B3DB5BA7A99F3CE718200614DD64362EAB0895_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RightRotate_m3A85A41B4AC50DF21057340613BF2326A29B3E47_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF RBTree_1_GetNodeByKey_mB8EA5B24CEF71C3B51691EEE949E3A8E5E11A98A_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF RBTree_1_GetNodeByIndex_m83B266BF5647661945D158A8D908BF95B3A4F517_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_userIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDeleteX_mE94B389E8A2683A020564C9EEF29CA2B6A3D9E97_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_root_id, int32_t ___1_z_id, int32_t ___2_mainTreeNodeID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_RecomputeSize_mDBB0AAF0158D6FC0172754C8F2BFD25191BC86E8_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_DecreaseSize_m719AA62C29CBC6C387F371FB1D5D1E5C584ABA7B_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDeleteFixup_mF9C058080B3A889E3839D76BEDCFBC6BC0EC02D6_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_px_id, int32_t ___3_mainTreeNodeID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_FreeNode_m7220658BAE2D8425FEADC3455CD9435D1752BA21_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_SearchSubTree_m88D001B41787E2E6D1E2054C4206A65CEFB8F17D_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_root_id, Il2CppSharedGenericObject* ___1_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByNodePath_m1E21B59C97F89684CB754FC49B140B3AFCABA6BD_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeIndexByNode_m8DCD325BA4138BA6D3F73D307F6524B5AF39F4D2_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeIndexWithSatelliteByNode_m0932303093ACD655F4A9D131F16ED35D402579C4_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeNodeByIndex_m490DF9A8DC64CF750790A47BD75B4CA32CB99455_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_x_id, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_mFF09CA916CAF9842895161A5CCE9B5F6052358DE_gshared (RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF* __this, RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByNode_m46F19C443609B114C90100EE95489B06D7E0DF9E_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_node, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_IndexOf_m2978B5B3DDBFF5784C495F82EA569F3B67EA926E_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, Il2CppSharedGenericObject* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_InsertAt_mA323D5F4BBB074C3BB0A5AA90C195952F45836D0_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_position, Il2CppSharedGenericObject* ___1_item, bool ___2_append, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* RBTree_1_DeleteByIndex_m66215488DD926BD6C06D66BC1DEC77A2E4AFA36F_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_i, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
inline void List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66 (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*, const RuntimeMethod*))List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared)(__this, method);
}
inline void List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA*, const RuntimeMethod*))List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributesScope__ctor_m1FE303992C9EEDB9E18DCEF89A7124C353D65CB0 (AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE* __this, RuntimeObject* ___0_target, List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___1_attributes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* Array_Empty_TisValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8_m333097FF36C87F06696A8E782F14066A2841FE00_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9E9616183C1194AAFA6DDD531B97467EC333432F (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void Queue_1_MoveNext_m0174B1375CBCE5607C169FB96E6AB17DB97CB173 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8A7ED6A2B52302D616E21E025FBA1620A1BB8CC5 (Enumerator_t125C05E9FF652475E0BCF0E4A90A0DF5E495FD8C* __this, Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m058F6E4F4E6EB759CA127F527926CEED7E30E380 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8_m4C53F9B0652D817DC94A124434E7349F0763D8A9 (ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* ___0_array, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* Array_Empty_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1AD513F77218E59FBB83B12CD05888A1BF6D54B0_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9C99B93C7AB97E316D1E8591BCF01B03FD5B9F1A (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void Queue_1_MoveNext_m86C24E3D8D2B55FCD5FE49614EEC466771A8471F (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m96AAB9F5DC5F6BBCB377A9459038CB7F0CF0875C (Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18* __this, Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4E22F11E12D35FD450ED05E4C4A7D959DDCC8E58 (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m783DEB1BEA7DFED9BEAA2878AE0FFC9E1A083B73 (EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* ___0_array, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mC239D559AF84CEE25E8EEADB05B96025C66ED6D5 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void Queue_1_MoveNext_m30C57750EB5C9A1840E1F823928030E66FF1F961 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE (Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0* __this, Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9A483395EF3F401BC08314BDE9392BD26EBE444F (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390 (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886 (Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B* __this, Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_mCD89004E22CB4FEB73672DD2830E315DDA4DA3BE (JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* ___0_array, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mCA8E0FFC567DD0017C621A6B75027F8565CFA7E6 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void Queue_1_MoveNext_mE01938A89F813B0CCF58E0D82D23363114A97B85 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m883CA17DC68406094FEFA9AAD8C40161CA35D1F3 (Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891* __this, Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m87C0DAA7B799FEF651F40F96BDB0A437E1D24CEE (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mFC8BDE74B86C42A57D89FDA28EED3DDEF7B67A17 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, uint32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
inline __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_inline (const RuntimeMethod* method)
{
	return ((  __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m1549601D804B1A2FA09822B8FF6018C374086954 (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m1549601D804B1A2FA09822B8FF6018C374086954_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m097052B8552DED4A35D537D3AEB84510090C9E70 (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m37472EFA972090AD3A35A3715208772B2F3F6339 (Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1* __this, Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1*, Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF*, const RuntimeMethod*))Enumerator__ctor_m37472EFA972090AD3A35A3715208772B2F3F6339_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m6EF406DB0A9F8B868374ABDF966B343F281FEE1F (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m6EF406DB0A9F8B868374ABDF966B343F281FEE1F_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33 (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, Il2CppSharedGenericObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, Il2CppSharedGenericObject*, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB_fshared)(__this, ___0_q, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5115601B916B93D40CF5F1D0E701A44CE4AC00BD (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8 (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E (Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602* __this, Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0 (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mDA8ABF0C8CBC330E0DBA64B13F204111EAFA1294 (EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* ___0_array, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* Array_Empty_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mE74D581FD3F8DF5CFA50A5133DB5A6F7D16B99CD_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m225DAA2133CC2108D2F16C7EF47CA7368AE5E4E7 (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
inline void Queue_1_MoveNext_mF12756790A3C38E07F95BA2B920AE67A930962A8 (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m076E60AA8F25CE906A72B6409796A0A68BEB99CB (Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710* __this, Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4A8990345304F038BC2D5F79896D4BED8CC2CD82 (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mF7378E0A466D44125A606D050C5AD75FCE4C819F (CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* ___0_array, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeNodeByIndex_m6AC21A1EB09BF6660EF47F4D771F47534F2F9751 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_index, int32_t* ___1_satelliteRootId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462 (int32_t ___0_internalError, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionBuilder_EnumeratorModified_m8343A0E4D50C5143F6A15F0D562AB7838A3A96D1 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTree_1_Successor_mBE6CC011CC22FE54A564CB8AE8247BC43146D3EE (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t* ___0_nodeId, int32_t* ___1_mainTreeNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTreeEnumerator_MoveNext_mB00AE8BACE08D31B8BBB6420BC48380D35B58173 (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RBTreeEnumerator_get_Current_mCB9EE3BDCE8D688E0B6EA03B14E5D55ABF7E1325_inline (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_m51A6150BF88CB14DDE97B1EF33342869AEA55F6C (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m6EE5A4DE7A3C8DE01E59B4FACEE2DFD7F3FC45F4 (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method) ;
inline int32_t RBTree_1_ComputeNodeByIndex_m35534B37511AF06371695E0CB5616BDB7E8E8EFD (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_index, int32_t* ___1_satelliteRootId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, int32_t*, const RuntimeMethod*))RBTree_1_ComputeNodeByIndex_m35534B37511AF06371695E0CB5616BDB7E8E8EFD_gshared)(__this, ___0_index, ___1_satelliteRootId, method);
}
inline bool RBTree_1_Successor_mD782B968CE5256E83614B6E8445F37F5F9A9592B (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t* ___0_nodeId, int32_t* ___1_mainTreeNodeId, const RuntimeMethod* method)
{
	return ((  bool (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t*, int32_t*, const RuntimeMethod*))RBTree_1_Successor_mD782B968CE5256E83614B6E8445F37F5F9A9592B_gshared)(__this, ___0_nodeId, ___1_mainTreeNodeId, method);
}
inline Il2CppSharedGenericObject* RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, const RuntimeMethod*))RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99_gshared)(__this, ___0_nodeId, method);
}
inline bool RBTreeEnumerator_MoveNext_m81963E6532BC9A9B8B168732E868E47314C7B1AD (RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF*, const RuntimeMethod*))RBTreeEnumerator_MoveNext_m81963E6532BC9A9B8B168732E868E47314C7B1AD_gshared)(__this, method);
}
inline Il2CppSharedGenericObject* RBTreeEnumerator_get_Current_mCA7EABFD3BB38F4E43C81EB2C51698DA685F4728_inline (RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF*, const RuntimeMethod*))RBTreeEnumerator_get_Current_mCA7EABFD3BB38F4E43C81EB2C51698DA685F4728_gshared_inline)(__this, method);
}
inline RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mBAE1BA5BCC8CB428F7A30CA8F4F6B461F335E502 (RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF*, const RuntimeMethod*))RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mBAE1BA5BCC8CB428F7A30CA8F4F6B461F335E502_gshared)(__this, method);
}
inline void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m735ED42F433ED59EB4B5B59651A8EDE7FCDD3AB8 (RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF* __this, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF*, const RuntimeMethod*))RBTreeEnumerator_System_Collections_IEnumerator_Reset_m735ED42F433ED59EB4B5B59651A8EDE7FCDD3AB8_gshared)(__this, method);
}
inline void RBTreeEnumerator_Dispose_m44368C76E9C0F3A17DB3342C808CA8F9582C5955 (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*, const RuntimeMethod*))RBTreeEnumerator_Dispose_m44368C76E9C0F3A17DB3342C808CA8F9582C5955_fshared)(__this, method);
}
inline bool RBTreeEnumerator_MoveNext_mB5562C7DBD432B39AC6CDE17139006D3141A2E7E (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*, const RuntimeMethod*))RBTreeEnumerator_MoveNext_mB5562C7DBD432B39AC6CDE17139006D3141A2E7E_fshared)(__this, method);
}
inline void RBTreeEnumerator_get_Current_m55E7496F0199640CB43772D3C21F0A10462AE734_inline (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))RBTreeEnumerator_get_Current_m55E7496F0199640CB43772D3C21F0A10462AE734_fshared_inline)((RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*)__this, il2cppRetVal, method);
}
inline RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mD023E34D3906399CCC1A8E8AB645C5C9810898FB (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*, const RuntimeMethod*))RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mD023E34D3906399CCC1A8E8AB645C5C9810898FB_fshared)(__this, method);
}
inline void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m30C1ACC2356659BDDEC767619AA0D8B5EA06E470 (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*, const RuntimeMethod*))RBTreeEnumerator_System_Collections_IEnumerator_Reset_m30C1ACC2356659BDDEC767619AA0D8B5EA06E470_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_InitTree_mCF091A660A304A14A09AB4C817AF26E1585EA323 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_size, const RuntimeMethod* method) ;
inline void TreePage_set_InUseCount_m8FA6467AC39561006A23E87B162BA73D585BADDA_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*, int32_t, const RuntimeMethod*))TreePage_set_InUseCount_mF6068EC2FA94F4B17098D5C83B965F4703FA033A_fshared_inline)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_MarkPageFree_mDFB2F31CD9B41FEAC6E15E8798687212440448EB (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* ___0_page, const RuntimeMethod* method) ;
inline int32_t TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*, const RuntimeMethod*))TreePage_get_PageId_mB8F6DE559009BD1B1683DD96A132A8AF8229F6C7_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexOfPageWithFreeSlot_m44B83E5017AC18424A1CABBB5B69F4334BCACABA (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, bool ___0_allocatedPage, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePage__ctor_m44F8EC22FAAB8146AC4E2D6E299F6A122DE40C83 (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, int32_t ___0_size, const RuntimeMethod* method) ;
inline void TreePage_set_PageId_m60FCE18172BAC6C1B1479026018D6422F2B30A70_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*, int32_t, const RuntimeMethod*))TreePage_set_PageId_m106D0788C3D06308F04C6400B1B3D166396CF84D_fshared_inline)(__this, ___0_value, method);
}
inline int32_t TreePage_get_InUseCount_mEA19EFEDD63621D601EFFFE57C3D3297FC357EA4_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*, const RuntimeMethod*))TreePage_get_InUseCount_m54A6D752FBFA8E21B9BE911DEFEBB6EBE27F86B4_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_FreePage_m428135A97F5257D955C88324EEC40540887A061C (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* ___0_page, const RuntimeMethod* method) ;
inline int32_t RBTree_1_GetIntValueFromBitMap_m48B51C8E9FEE3BC3018EEABB1B7171C27550AF56 (uint32_t ___0_bitMap, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint32_t, const RuntimeMethod*))RBTree_1_GetIntValueFromBitMap_m8F0068910A5B84B992C5C54617A5313C2736D58B_fshared)(___0_bitMap, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TreePage_AllocSlot_m98CE7C69F3225831EDC1F758AC133AFDBD631329 (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Minimum_m504331C88F6C6D70AA7930B661AC172AC26E1844 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Successor_mD725A36AE3B97C64315EA2030135F2ED92601A7B (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_rightNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_parentNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_nextNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_leftNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_IncreaseSize_m613975F4AD06761B3DD9F26BC8162B71413A26C8 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBInsert_m0B2330653BCF5430989431DAC32328E6EBBAED4E (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNodeID, int32_t ___3_position, bool ___4_append, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetNewNode_mF0CCB84B822853BFDC6AFE48116DDA1F77F10568 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_color, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_LeftRotate_mD49CD676DF4B79C1B56C4158BF78B239F3EBF7EE (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 RBTree_1_GetNodeByKey_mF4FE4024CADC8B1F8FABFA13EACA57E2B6F775F2 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 RBTree_1_GetNodeByIndex_m1925A1C6C371B002EE706C8EDEF3785E4AD148A8 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_userIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDeleteX_m6AEBE3413E7ECF37B61015F652AA07DF5C9A13AC (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_z_id, int32_t ___2_mainTreeNodeID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_RecomputeSize_mE849917C6B9CE571D95FFA5AE30E1E7CDB24310A (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_DecreaseSize_m2CC82F8846D718DBC61F565C78775A068556E52F (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDeleteFixup_m25667C31EC6662F3899EA7CDFF622F9DB394AF89 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_px_id, int32_t ___3_mainTreeNodeID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_FreeNode_m142FC91FA594DC91799F5231F7AE945DCC6922FD (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_SearchSubTree_m57C42F24D37D298A0566D530361F03F6F0EB76B2 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_key, const RuntimeMethod* method) ;
inline void NodePath__ctor_m0FCF723AFBBA0142B8DC33B243EC222D8B3840F3 (NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50* __this, int32_t ___0_nodeID, int32_t ___1_mainTreeNodeID, const RuntimeMethod* method)
{
	((  void (*) (NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50*, int32_t, int32_t, const RuntimeMethod*))NodePath__ctor_mA9A74612E0785F30CCC660C7936418FD57A9EB55_fshared)(__this, ___0_nodeID, ___1_mainTreeNodeID, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B (int32_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByNodePath_mF59D980A8D9F3D12CFE602F95AFDB04F6F6804C5 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeIndexByNode_mF54D314A27930CDEE19BE0B8DE58C63A7A6DABCD (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeIndexWithSatelliteByNode_m2A8640152375F25E6DFCB524E3C5E3762A819087 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeNodeByIndex_m1A87F9210DD3BF7304196AFC2FF45D6E3A507064 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionBuilder_RowOutOfRange_m2F6883E5D2F9AF63A3F9DC5521799A7E270F1054 (int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_m2733AFDE89B7B2489A1BDA8AED77CB198FB6AE6E (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByNode_m88D61B019FE6CFCFF5BA5E43320983A7019BC297 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_node, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_IndexOf_m1A15AAD706F9931B99D4225D76D45140B09D6F74 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_InsertAt_mC52B6134B733A4D25B2F3621177144038C005B4F (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_position, int32_t ___1_item, bool ___2_append, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_DeleteByIndex_m46F2E47E9EE4CDEB58E225ED10A54A4C31F485B6 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_i, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionBuilder_ArgumentNull_m2F21453F5BE7814A0D05A058EAC09F2391F99DA8 (String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionBuilder_ArgumentOutOfRange_mEF2909680ADBD4B5228E611EDEBBA048D7DF219E (String_t* ___0_paramName, const RuntimeMethod* method) ;
inline int32_t RBTree_1_get_Count_mD78C552E837675F90BD804EFADB6BC40A38C0615 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, const RuntimeMethod*))RBTree_1_get_Count_mEEBAEC4856EDAB96F400E22D1AE495981435BD97_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionBuilder_InvalidOffsetLength_m25F593A3DD72EEDCF3B7F8616D41CD7677BD6073 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8 (RuntimeArray* __this, RuntimeObject* ___0_value, int32_t ___1_index, const RuntimeMethod* method) ;
inline void RBTree_1_InitTree_mB4E9EFD37104F6D38AB761F3E4D895745AC2D002 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, const RuntimeMethod*))RBTree_1_InitTree_mB4E9EFD37104F6D38AB761F3E4D895745AC2D002_gshared)(__this, method);
}
inline TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* RBTree_1_AllocPage_m84FC966EA9AFC28ED05DA34CC22340CD10A486FB (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_size, const RuntimeMethod* method)
{
	return ((  TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, const RuntimeMethod*))RBTree_1_AllocPage_m84FC966EA9AFC28ED05DA34CC22340CD10A486FB_gshared)(__this, ___0_size, method);
}
inline void TreePage_set_InUseCount_mFF2D7912FE4FB51AD029F4EA6EB15567F19A425D_inline (TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD*, int32_t, const RuntimeMethod*))TreePage_set_InUseCount_mF6068EC2FA94F4B17098D5C83B965F4703FA033A_fshared_inline)(__this, ___0_value, method);
}
inline void RBTree_1_MarkPageFree_m5546C110128A1D0E80DC9D74B0425E7ACFAA9672 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* ___0_page, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD*, const RuntimeMethod*))RBTree_1_MarkPageFree_m5546C110128A1D0E80DC9D74B0425E7ACFAA9672_gshared)(__this, ___0_page, method);
}
inline int32_t TreePage_get_PageId_m2959421A31AD502FB660044B7F735EAA89824FB2_inline (TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD*, const RuntimeMethod*))TreePage_get_PageId_mB8F6DE559009BD1B1683DD96A132A8AF8229F6C7_fshared_inline)(__this, method);
}
inline int32_t RBTree_1_GetIndexOfPageWithFreeSlot_m0379C10FF75C8AED424C8E0D9A5834A18BEBE710 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, bool ___0_allocatedPage, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, bool, const RuntimeMethod*))RBTree_1_GetIndexOfPageWithFreeSlot_m0379C10FF75C8AED424C8E0D9A5834A18BEBE710_gshared)(__this, ___0_allocatedPage, method);
}
inline void TreePage__ctor_m8441E60D204F8F3B8FBF96726C918F8BFD088BD5 (TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* __this, int32_t ___0_size, const RuntimeMethod* method)
{
	((  void (*) (TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD*, int32_t, const RuntimeMethod*))TreePage__ctor_m8441E60D204F8F3B8FBF96726C918F8BFD088BD5_gshared)(__this, ___0_size, method);
}
inline void TreePage_set_PageId_mFE29414DE74DE5AABA637BC8EE4168D233DC19A7_inline (TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD*, int32_t, const RuntimeMethod*))TreePage_set_PageId_m106D0788C3D06308F04C6400B1B3D166396CF84D_fshared_inline)(__this, ___0_value, method);
}
inline int32_t TreePage_get_InUseCount_mB47BCDDF9F5A3D9F15D5491982B20F7088EA9557_inline (TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD*, const RuntimeMethod*))TreePage_get_InUseCount_m54A6D752FBFA8E21B9BE911DEFEBB6EBE27F86B4_fshared_inline)(__this, method);
}
inline void RBTree_1_FreePage_m02920F187E1C52D2A7E325B08685D3BC171A55F9 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* ___0_page, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD*, const RuntimeMethod*))RBTree_1_FreePage_m02920F187E1C52D2A7E325B08685D3BC171A55F9_gshared)(__this, ___0_page, method);
}
inline int32_t RBTree_1_GetIntValueFromBitMap_m2A2C58CFA901D39A02C233D0BF42F3D7EFB44540 (uint32_t ___0_bitMap, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint32_t, const RuntimeMethod*))RBTree_1_GetIntValueFromBitMap_m8F0068910A5B84B992C5C54617A5313C2736D58B_fshared)(___0_bitMap, method);
}
inline int32_t TreePage_AllocSlot_m03CBA01A6EC2A97DA8820AF6BA061837EF01856D (TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* __this, RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* ___0_tree, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD*, RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, const RuntimeMethod*))TreePage_AllocSlot_m03CBA01A6EC2A97DA8820AF6BA061837EF01856D_gshared)(__this, ___0_tree, method);
}
inline int32_t RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, const RuntimeMethod*))RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_Minimum_m92638EC28D7B4C793E87489440C5381402073712 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_x_id, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, const RuntimeMethod*))RBTree_1_Minimum_m92638EC28D7B4C793E87489440C5381402073712_gshared)(__this, ___0_x_id, method);
}
inline int32_t RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, const RuntimeMethod*))RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_Successor_m66C0B2AECF8F8BFE3CF4E25F4995C30C80474F62 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_x_id, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, const RuntimeMethod*))RBTree_1_Successor_m66C0B2AECF8F8BFE3CF4E25F4995C30C80474F62_gshared)(__this, ___0_x_id, method);
}
inline int32_t RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, const RuntimeMethod*))RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, const RuntimeMethod*))RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8_gshared)(__this, ___0_nodeId, method);
}
inline void RBTree_1_SetRight_mCA90AE8051905DE68BD794277CB3A6F4D7273ED1 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, int32_t ___1_rightNodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SetRight_mCA90AE8051905DE68BD794277CB3A6F4D7273ED1_gshared)(__this, ___0_nodeId, ___1_rightNodeId, method);
}
inline void RBTree_1_SetParent_m5CA27D9474EC84E5A8823FE803C60CC047572643 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, int32_t ___1_parentNodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SetParent_m5CA27D9474EC84E5A8823FE803C60CC047572643_gshared)(__this, ___0_nodeId, ___1_parentNodeId, method);
}
inline void RBTree_1_SetNext_mC0DDCD6E5A9738375AF9890D1F11478F03054565 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, int32_t ___1_nextNodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SetNext_mC0DDCD6E5A9738375AF9890D1F11478F03054565_gshared)(__this, ___0_nodeId, ___1_nextNodeId, method);
}
inline void RBTree_1_SetKey_m5B037F7426364C8491931FA06665AEBB3C22799B (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, Il2CppSharedGenericObject* ___1_key, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, Il2CppSharedGenericObject*, const RuntimeMethod*))RBTree_1_SetKey_m5B037F7426364C8491931FA06665AEBB3C22799B_gshared)(__this, ___0_nodeId, ___1_key, method);
}
inline void RBTree_1_SetLeft_m1053D96D9AE2E6EBF34B5C1D9A449C5531FA59B3 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, int32_t ___1_leftNodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SetLeft_m1053D96D9AE2E6EBF34B5C1D9A449C5531FA59B3_gshared)(__this, ___0_nodeId, ___1_leftNodeId, method);
}
inline int32_t RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, const RuntimeMethod*))RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740_gshared)(__this, ___0_nodeId, method);
}
inline void RBTree_1_SetSubTreeSize_mAC7E4B0847BE0A523FB81EC26F8E3C4C9698E7E5 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, int32_t ___1_size, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SetSubTreeSize_mAC7E4B0847BE0A523FB81EC26F8E3C4C9698E7E5_gshared)(__this, ___0_nodeId, ___1_size, method);
}
inline void RBTree_1_IncreaseSize_m19487325BED667C17E3C544D743182B38C55CD1A (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, const RuntimeMethod*))RBTree_1_IncreaseSize_m19487325BED667C17E3C544D743182B38C55CD1A_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_RBInsert_m0F7E610495314AF8E43945E519EE8BB599AA74BE (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNodeID, int32_t ___3_position, bool ___4_append, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, int32_t, int32_t, int32_t, bool, const RuntimeMethod*))RBTree_1_RBInsert_m0F7E610495314AF8E43945E519EE8BB599AA74BE_gshared)(__this, ___0_root_id, ___1_x_id, ___2_mainTreeNodeID, ___3_position, ___4_append, method);
}
inline int32_t RBTree_1_GetNewNode_m5863E283C2B738283FF751E044EC017FA269C542 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, Il2CppSharedGenericObject*, const RuntimeMethod*))RBTree_1_GetNewNode_m5863E283C2B738283FF751E044EC017FA269C542_gshared)(__this, ___0_key, method);
}
inline int32_t RBTree_1_color_mFB47C01E80DF20AD25C265811CEAB8E390F90912 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, const RuntimeMethod*))RBTree_1_color_mFB47C01E80DF20AD25C265811CEAB8E390F90912_gshared)(__this, ___0_nodeId, method);
}
inline void RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, int32_t ___1_color, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2_gshared)(__this, ___0_nodeId, ___1_color, method);
}
inline int32_t RBTree_1_LeftRotate_m55B3DB5BA7A99F3CE718200614DD64362EAB0895 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, int32_t, int32_t, const RuntimeMethod*))RBTree_1_LeftRotate_m55B3DB5BA7A99F3CE718200614DD64362EAB0895_gshared)(__this, ___0_root_id, ___1_x_id, ___2_mainTreeNode, method);
}
inline int32_t RBTree_1_RightRotate_m3A85A41B4AC50DF21057340613BF2326A29B3E47 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, int32_t, int32_t, const RuntimeMethod*))RBTree_1_RightRotate_m3A85A41B4AC50DF21057340613BF2326A29B3E47_gshared)(__this, ___0_root_id, ___1_x_id, ___2_mainTreeNode, method);
}
inline NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF RBTree_1_GetNodeByKey_mB8EA5B24CEF71C3B51691EEE949E3A8E5E11A98A (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, Il2CppSharedGenericObject*, const RuntimeMethod*))RBTree_1_GetNodeByKey_mB8EA5B24CEF71C3B51691EEE949E3A8E5E11A98A_gshared)(__this, ___0_key, method);
}
inline NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF RBTree_1_GetNodeByIndex_m83B266BF5647661945D158A8D908BF95B3A4F517 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_userIndex, const RuntimeMethod* method)
{
	return ((  NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, const RuntimeMethod*))RBTree_1_GetNodeByIndex_m83B266BF5647661945D158A8D908BF95B3A4F517_gshared)(__this, ___0_userIndex, method);
}
inline int32_t RBTree_1_RBDeleteX_mE94B389E8A2683A020564C9EEF29CA2B6A3D9E97 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_root_id, int32_t ___1_z_id, int32_t ___2_mainTreeNodeID, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, int32_t, int32_t, const RuntimeMethod*))RBTree_1_RBDeleteX_mE94B389E8A2683A020564C9EEF29CA2B6A3D9E97_gshared)(__this, ___0_root_id, ___1_z_id, ___2_mainTreeNodeID, method);
}
inline void RBTree_1_RecomputeSize_mDBB0AAF0158D6FC0172754C8F2BFD25191BC86E8 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, const RuntimeMethod*))RBTree_1_RecomputeSize_mDBB0AAF0158D6FC0172754C8F2BFD25191BC86E8_gshared)(__this, ___0_nodeId, method);
}
inline void RBTree_1_DecreaseSize_m719AA62C29CBC6C387F371FB1D5D1E5C584ABA7B (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, const RuntimeMethod*))RBTree_1_DecreaseSize_m719AA62C29CBC6C387F371FB1D5D1E5C584ABA7B_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_RBDeleteFixup_mF9C058080B3A889E3839D76BEDCFBC6BC0EC02D6 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_px_id, int32_t ___3_mainTreeNodeID, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))RBTree_1_RBDeleteFixup_mF9C058080B3A889E3839D76BEDCFBC6BC0EC02D6_gshared)(__this, ___0_root_id, ___1_x_id, ___2_px_id, ___3_mainTreeNodeID, method);
}
inline void RBTree_1_FreeNode_m7220658BAE2D8425FEADC3455CD9435D1752BA21 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, const RuntimeMethod*))RBTree_1_FreeNode_m7220658BAE2D8425FEADC3455CD9435D1752BA21_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_SearchSubTree_m88D001B41787E2E6D1E2054C4206A65CEFB8F17D (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_root_id, Il2CppSharedGenericObject* ___1_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, Il2CppSharedGenericObject*, const RuntimeMethod*))RBTree_1_SearchSubTree_m88D001B41787E2E6D1E2054C4206A65CEFB8F17D_gshared)(__this, ___0_root_id, ___1_key, method);
}
inline void NodePath__ctor_m1C03760E0A5ADF5BAC0DADDF78FC6C6645F15398 (NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF* __this, int32_t ___0_nodeID, int32_t ___1_mainTreeNodeID, const RuntimeMethod* method)
{
	((  void (*) (NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF*, int32_t, int32_t, const RuntimeMethod*))NodePath__ctor_mA9A74612E0785F30CCC660C7936418FD57A9EB55_fshared)(__this, ___0_nodeID, ___1_mainTreeNodeID, method);
}
inline int32_t RBTree_1_GetIndexByNodePath_m1E21B59C97F89684CB754FC49B140B3AFCABA6BD (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF ___0_path, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF, const RuntimeMethod*))RBTree_1_GetIndexByNodePath_m1E21B59C97F89684CB754FC49B140B3AFCABA6BD_gshared)(__this, ___0_path, method);
}
inline int32_t RBTree_1_ComputeIndexByNode_m8DCD325BA4138BA6D3F73D307F6524B5AF39F4D2 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, const RuntimeMethod*))RBTree_1_ComputeIndexByNode_m8DCD325BA4138BA6D3F73D307F6524B5AF39F4D2_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_ComputeIndexWithSatelliteByNode_m0932303093ACD655F4A9D131F16ED35D402579C4 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, const RuntimeMethod*))RBTree_1_ComputeIndexWithSatelliteByNode_m0932303093ACD655F4A9D131F16ED35D402579C4_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_ComputeNodeByIndex_m490DF9A8DC64CF750790A47BD75B4CA32CB99455 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_x_id, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_ComputeNodeByIndex_m490DF9A8DC64CF750790A47BD75B4CA32CB99455_gshared)(__this, ___0_x_id, ___1_index, method);
}
inline void RBTreeEnumerator__ctor_mFF09CA916CAF9842895161A5CCE9B5F6052358DE (RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF* __this, RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* ___0_tree, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF*, RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, const RuntimeMethod*))RBTreeEnumerator__ctor_mFF09CA916CAF9842895161A5CCE9B5F6052358DE_gshared)(__this, ___0_tree, method);
}
inline int32_t RBTree_1_GetIndexByNode_m46F19C443609B114C90100EE95489B06D7E0DF9E (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_node, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, const RuntimeMethod*))RBTree_1_GetIndexByNode_m46F19C443609B114C90100EE95489B06D7E0DF9E_gshared)(__this, ___0_node, method);
}
inline int32_t RBTree_1_IndexOf_m2978B5B3DDBFF5784C495F82EA569F3B67EA926E (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, Il2CppSharedGenericObject* ___1_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, Il2CppSharedGenericObject*, const RuntimeMethod*))RBTree_1_IndexOf_m2978B5B3DDBFF5784C495F82EA569F3B67EA926E_gshared)(__this, ___0_nodeId, ___1_item, method);
}
inline int32_t RBTree_1_InsertAt_mA323D5F4BBB074C3BB0A5AA90C195952F45836D0 (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_position, Il2CppSharedGenericObject* ___1_item, bool ___2_append, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, Il2CppSharedGenericObject*, bool, const RuntimeMethod*))RBTree_1_InsertAt_mA323D5F4BBB074C3BB0A5AA90C195952F45836D0_gshared)(__this, ___0_position, ___1_item, ___2_append, method);
}
inline Il2CppSharedGenericObject* RBTree_1_DeleteByIndex_m66215488DD926BD6C06D66BC1DEC77A2E4AFA36F (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_i, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, int32_t, const RuntimeMethod*))RBTree_1_DeleteByIndex_m66215488DD926BD6C06D66BC1DEC77A2E4AFA36F_gshared)(__this, ___0_i, method);
}
inline int32_t RBTree_1_get_Count_mCCC9A110FA3CFC5542CD9056AE20466F86C2F39F (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81*, const RuntimeMethod*))RBTree_1_get_Count_mEEBAEC4856EDAB96F400E22D1AE495981435BD97_fshared)(__this, method);
}
inline void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared)(__this, ___0_item, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 82064
// Method Definition Index: 82065
// Method Definition Index: 82068
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m2C917DDD298E772C6CF5F21611F7F36C0F5CB7A1_gshared (Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 82069
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Accept_m8D7C642505E5636A7A6B51BBB9E075A38F44F87C_gshared (Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56* __this, RuntimeObject* ___0_visitor, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_visitor;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		GenericInterfaceActionInvoker2< Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56*, Il2CppSharedGenericObject** >::Invoke(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2), L_0, __this, L_1);
		return;
	}
}
// Method Definition Index: 82072
// Method Definition Index: 82073
// Method Definition Index: 82074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_mA94073B560FFE0B469FF490207E8983011125E69_gshared (Property_2_t353081F8EF1E43E9296A73E40768868E7EA16F56* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		void* L_2 = il2cpp_codegen_object_get_class(L_1);
		bool L_3 = (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var) == (L_2);
		if (!L_3)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		return;
	}

IL_001b:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_4 = __this->___m_Attributes;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_5 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_5, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_5);
	}

IL_002e:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_6 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_7 = ___0_attribute;
		NullCheck(L_6);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_6, L_7, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 82075
// Method Definition Index: 82078
// Method Definition Index: 82079
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 82064
// Method Definition Index: 82065
// Method Definition Index: 82068
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m0DAC4FA290131D45E8075D2E016C0F6858BB090E_gshared (Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 82069
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Accept_mCD61479AFB57B6D89C2EB01271BCB16CA21384B3_gshared (Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D* __this, RuntimeObject* ___0_visitor, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_visitor;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		GenericInterfaceActionInvoker2< Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D*, Il2CppSharedGenericObject** >::Invoke(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2), L_0, __this, L_1);
		return;
	}
}
// Method Definition Index: 82072
// Method Definition Index: 82073
// Method Definition Index: 82074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_mAD5F0858315C679CCCAE018322922498E35BDA1E_gshared (Property_2_tBC982FB431D692933D96ED6B1A93541944BFD88D* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		void* L_2 = il2cpp_codegen_object_get_class(L_1);
		bool L_3 = (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var) == (L_2);
		if (!L_3)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		return;
	}

IL_001b:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_4 = __this->___m_Attributes;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_5 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_5, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_5);
	}

IL_002e:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_6 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_7 = ___0_attribute;
		NullCheck(L_6);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_6, L_7, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 82075
// Method Definition Index: 82078
// Method Definition Index: 82079
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 82064
// Method Definition Index: 82065
// Method Definition Index: 82068
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m4AAAFF93BF53979C76C44B5B9ADBA16E3D77E460_gshared (Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 82069
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Accept_mA57C71BD10869067BE19AD1F822818683BDA43FA_gshared (Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA* __this, RuntimeObject* ___0_visitor, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_visitor;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		GenericInterfaceActionInvoker2< Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA*, Il2CppSharedGenericObject** >::Invoke(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2), L_0, __this, L_1);
		return;
	}
}
// Method Definition Index: 82072
// Method Definition Index: 82073
// Method Definition Index: 82074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m61FF1C0B8812258942314811A77283B45F74A031_gshared (Property_2_t76596A9922947B21F562C5681AFC26F707D74FEA* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		void* L_2 = il2cpp_codegen_object_get_class(L_1);
		bool L_3 = (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var) == (L_2);
		if (!L_3)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		return;
	}

IL_001b:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_4 = __this->___m_Attributes;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_5 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_5, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_5);
	}

IL_002e:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_6 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_7 = ___0_attribute;
		NullCheck(L_6);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_6, L_7, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 82075
// Method Definition Index: 82078
// Method Definition Index: 82079
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 82064
// Method Definition Index: 82065
// Method Definition Index: 82068
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m6CDFB67F116F2BB8DDC9FBF879A444ACF0CEA7C2_gshared (Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 82069
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Accept_m8FBE641239EFC8F7E698FF029B7CD92B92EC0E9E_gshared (Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA* __this, RuntimeObject* ___0_visitor, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_visitor;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		GenericInterfaceActionInvoker2< Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA*, Il2CppSharedGenericObject** >::Invoke(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2), L_0, __this, L_1);
		return;
	}
}
// Method Definition Index: 82072
// Method Definition Index: 82073
// Method Definition Index: 82074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m28216C0D8C323C6963B7D80153D334B94A2F9118_gshared (Property_2_tBEA15EB873AFCC82E3164CC410E0485269FB4AEA* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		void* L_2 = il2cpp_codegen_object_get_class(L_1);
		bool L_3 = (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var) == (L_2);
		if (!L_3)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		return;
	}

IL_001b:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_4 = __this->___m_Attributes;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_5 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_5, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_5);
	}

IL_002e:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_6 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_7 = ___0_attribute;
		NullCheck(L_6);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_6, L_7, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 82075
// Method Definition Index: 82078
// Method Definition Index: 82079
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 82064
// Method Definition Index: 82065
// Method Definition Index: 82068
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m4DB18C6BCB711661A2E845D4AC3C8362C86775E2_gshared (Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 82069
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Accept_m0AE57724DA221981A964DCE496C0091623133E2A_gshared (Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C* __this, RuntimeObject* ___0_visitor, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_visitor;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		GenericInterfaceActionInvoker2< Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C*, Il2CppSharedGenericObject** >::Invoke(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2), L_0, __this, L_1);
		return;
	}
}
// Method Definition Index: 82072
// Method Definition Index: 82073
// Method Definition Index: 82074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_mA6463FEF5473D82CAB0C92E81A9D20B1AFE9D508_gshared (Property_2_t6D73BE4B65302C9B57489517F4AE3D2A318BD64C* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		void* L_2 = il2cpp_codegen_object_get_class(L_1);
		bool L_3 = (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var) == (L_2);
		if (!L_3)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		return;
	}

IL_001b:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_4 = __this->___m_Attributes;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_5 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_5, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_5);
	}

IL_002e:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_6 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_7 = ___0_attribute;
		NullCheck(L_6);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_6, L_7, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 82075
// Method Definition Index: 82078
// Method Definition Index: 82079
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 82064
// Method Definition Index: 82065
// Method Definition Index: 82068
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_mCC93E7D39B9808FF6DF2BA8F83CD52686D1A0C0E_gshared (Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 82069
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Accept_mA1CF988AA319D2BE1F15FE63B2BFA6FD7F8BB781_gshared (Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F* __this, RuntimeObject* ___0_visitor, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_visitor;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		GenericInterfaceActionInvoker2< Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F*, Il2CppSharedGenericObject** >::Invoke(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2), L_0, __this, L_1);
		return;
	}
}
// Method Definition Index: 82072
// Method Definition Index: 82073
// Method Definition Index: 82074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_mCC7D0833AA8E82E9E55BDFED23C0C38900E9D66A_gshared (Property_2_t38AE5D89637EC3159596F1148758A0A5E8B3D40F* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		void* L_2 = il2cpp_codegen_object_get_class(L_1);
		bool L_3 = (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var) == (L_2);
		if (!L_3)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		return;
	}

IL_001b:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_4 = __this->___m_Attributes;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_5 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_5, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_5);
	}

IL_002e:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_6 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_7 = ___0_attribute;
		NullCheck(L_6);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_6, L_7, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 82075
// Method Definition Index: 82078
// Method Definition Index: 82079
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 82064
// Method Definition Index: 82065
// Method Definition Index: 82068
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m042F348B392F2C33B757E213695B930006E678F7_gshared (Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 82069
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Accept_m1C738ED5EFB4DC36A2113B3D26AA9D7104513552_gshared (Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585* __this, RuntimeObject* ___0_visitor, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_visitor;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		GenericInterfaceActionInvoker2< Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585*, Il2CppSharedGenericObject** >::Invoke(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2), L_0, __this, L_1);
		return;
	}
}
// Method Definition Index: 82072
// Method Definition Index: 82073
// Method Definition Index: 82074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_mE7948D8556CACF7AA5ECA907736FC849E1DF3621_gshared (Property_2_tB72D1FCEA344328DED796552B414FA8C5B11B585* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		void* L_2 = il2cpp_codegen_object_get_class(L_1);
		bool L_3 = (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var) == (L_2);
		if (!L_3)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		return;
	}

IL_001b:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_4 = __this->___m_Attributes;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_5 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_5, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_5);
	}

IL_002e:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_6 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_7 = ___0_attribute;
		NullCheck(L_6);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_6, L_7, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 82075
// Method Definition Index: 82078
// Method Definition Index: 82079
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 82064
// Method Definition Index: 82065
// Method Definition Index: 82068
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m92EB8D0BEE877FD94EF466BB441D985396C99867_gshared (Property_2_t77BD2AD223504355C87784ACF22E76208DA91020* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 82069
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Accept_mF64EA858F7BFF32CA88319D8BCAB5911EAEF45A0_gshared (Property_2_t77BD2AD223504355C87784ACF22E76208DA91020* __this, RuntimeObject* ___0_visitor, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_visitor;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		GenericInterfaceActionInvoker2< Property_2_t77BD2AD223504355C87784ACF22E76208DA91020*, Il2CppSharedGenericObject** >::Invoke(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2), L_0, __this, L_1);
		return;
	}
}
// Method Definition Index: 82072
// Method Definition Index: 82073
// Method Definition Index: 82074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m68060E57CE87E172368DD026ACB08C87CB6D3E33_gshared (Property_2_t77BD2AD223504355C87784ACF22E76208DA91020* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		void* L_2 = il2cpp_codegen_object_get_class(L_1);
		bool L_3 = (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var) == (L_2);
		if (!L_3)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		return;
	}

IL_001b:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_4 = __this->___m_Attributes;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_5 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_5, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_5);
	}

IL_002e:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_6 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_7 = ___0_attribute;
		NullCheck(L_6);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_6, L_7, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 82075
// Method Definition Index: 82078
// Method Definition Index: 82079
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 82064
// Method Definition Index: 82065
// Method Definition Index: 82068
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_mC3DFA5364C0EFD2F6DAE5297E817F4D48CAE5391_gshared (Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 82069
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Accept_mA7C0E846B530D54189507FEB95B3250F03AC31EF_gshared (Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20* __this, RuntimeObject* ___0_visitor, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_visitor;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		GenericInterfaceActionInvoker2< Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20*, Il2CppSharedGenericObject** >::Invoke(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2), L_0, __this, L_1);
		return;
	}
}
// Method Definition Index: 82072
// Method Definition Index: 82073
// Method Definition Index: 82074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m642330E4AA26019549FE43D9CBE62D6F323F0CCD_gshared (Property_2_tDF2807780330BFE58BF5076E5676AB9499F5AB20* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		void* L_2 = il2cpp_codegen_object_get_class(L_1);
		bool L_3 = (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var) == (L_2);
		if (!L_3)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		return;
	}

IL_001b:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_4 = __this->___m_Attributes;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_5 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_5, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_5);
	}

IL_002e:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_6 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_7 = ___0_attribute;
		NullCheck(L_6);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_6, L_7, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 82075
// Method Definition Index: 82078
// Method Definition Index: 82079
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 82064
// Method Definition Index: 82065
// Method Definition Index: 82068
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_mBB8CE7EC40906F3768F4D217E99EFF6A73FBBFCB_gshared (Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 82069
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Accept_m8DDAD5280C81C0F3739205FD70CBC74B85BFDB78_gshared (Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9* __this, RuntimeObject* ___0_visitor, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_visitor;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		GenericInterfaceActionInvoker2< Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9*, Il2CppSharedGenericObject** >::Invoke(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2), L_0, __this, L_1);
		return;
	}
}
// Method Definition Index: 82072
// Method Definition Index: 82073
// Method Definition Index: 82074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m53AA0F84DEBFF7852B8A8438AD85045582D625B6_gshared (Property_2_t9730F0C15883FE4743228D9D428BD8E9DF7553E9* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		void* L_2 = il2cpp_codegen_object_get_class(L_1);
		bool L_3 = (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var) == (L_2);
		if (!L_3)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		return;
	}

IL_001b:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_4 = __this->___m_Attributes;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_5 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_5, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_5);
	}

IL_002e:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_6 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_7 = ___0_attribute;
		NullCheck(L_6);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_6, L_7, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 82075
// Method Definition Index: 82078
// Method Definition Index: 82079
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 82064
// Method Definition Index: 82065
// Method Definition Index: 82068
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_mE9D69896A2381EA490AF6934DFD4FCCB6B1CCB2C_gshared (Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 82069
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Accept_mC32A1720B8B90AEF6CA9B2B657B2202E8100F360_gshared (Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8* __this, RuntimeObject* ___0_visitor, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_visitor;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		GenericInterfaceActionInvoker2< Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8*, Il2CppSharedGenericObject** >::Invoke(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2), L_0, __this, L_1);
		return;
	}
}
// Method Definition Index: 82072
// Method Definition Index: 82073
// Method Definition Index: 82074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m12A206523FFFF3FDF36D29B2FD55D80098F3A938_gshared (Property_2_tC1AD28B5C773659A28A98D8B607D5DC6E6316FB8* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		void* L_2 = il2cpp_codegen_object_get_class(L_1);
		bool L_3 = (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var) == (L_2);
		if (!L_3)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		return;
	}

IL_001b:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_4 = __this->___m_Attributes;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_5 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_5, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_5);
	}

IL_002e:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_6 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_7 = ___0_attribute;
		NullCheck(L_6);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_6, L_7, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 82075
// Method Definition Index: 82078
// Method Definition Index: 82079
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 82064
// Method Definition Index: 82065
// Method Definition Index: 82068
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_mEB87C1F5CA3887B6D105B955E17B843B53AC0F2E_gshared (Property_2_t113890ECA80F29325A033471911F4E8E45B619ED* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 82069
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Accept_m5FFAED461769F68DD7FFAFCF55F9B8B1EACAD503_gshared (Property_2_t113890ECA80F29325A033471911F4E8E45B619ED* __this, RuntimeObject* ___0_visitor, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_visitor;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		GenericInterfaceActionInvoker2< Property_2_t113890ECA80F29325A033471911F4E8E45B619ED*, Il2CppSharedGenericObject** >::Invoke(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2), L_0, __this, L_1);
		return;
	}
}
// Method Definition Index: 82072
// Method Definition Index: 82073
// Method Definition Index: 82074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m3AA073A6832E034BF19947C2CA7A93FAEBB3993B_gshared (Property_2_t113890ECA80F29325A033471911F4E8E45B619ED* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		void* L_2 = il2cpp_codegen_object_get_class(L_1);
		bool L_3 = (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var) == (L_2);
		if (!L_3)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		return;
	}

IL_001b:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_4 = __this->___m_Attributes;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_5 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_5, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_5);
	}

IL_002e:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_6 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_7 = ___0_attribute;
		NullCheck(L_6);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_6, L_7, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 82075
// Method Definition Index: 82078
// Method Definition Index: 82079
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 82064
// Method Definition Index: 82065
// Method Definition Index: 82068
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m5DCDB8EB2BD862F49559AD9C1189416593750ABE_gshared (Property_2_t80A9EC2185AB0124FD682D8A7A9B82362F7D88A3* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 82069
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Accept_mFB3B1CE626E67D3CC586C8474717BD918116E139_gshared (Property_2_t80A9EC2185AB0124FD682D8A7A9B82362F7D88A3* __this, RuntimeObject* ___0_visitor, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_visitor;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		GenericInterfaceActionInvoker2< Property_2_t80A9EC2185AB0124FD682D8A7A9B82362F7D88A3*, Il2CppSharedGenericObject** >::Invoke(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2), L_0, __this, L_1);
		return;
	}
}
// Method Definition Index: 82072
// Method Definition Index: 82073
// Method Definition Index: 82074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m6E045A8A9F386FC77107E0502CBF312C80A1733B_gshared (Property_2_t80A9EC2185AB0124FD682D8A7A9B82362F7D88A3* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		void* L_2 = il2cpp_codegen_object_get_class(L_1);
		bool L_3 = (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var) == (L_2);
		if (!L_3)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		return;
	}

IL_001b:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_4 = __this->___m_Attributes;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_5 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_5, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_5);
	}

IL_002e:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_6 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_7 = ___0_attribute;
		NullCheck(L_6);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_6, L_7, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 82075
// Method Definition Index: 82078
// Method Definition Index: 82079
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 82064
// Method Definition Index: 82065
// Method Definition Index: 82068
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m28961D0CEEB1CF1AB068A099F2B12C0DDFB87196_gshared (Property_2_tFB89CACD8E6BB9B376CA29327AB088841172D029* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 82069
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Accept_mBA4B5C331F6255FF16FB725C343148A3387F9BC1_gshared (Property_2_tFB89CACD8E6BB9B376CA29327AB088841172D029* __this, RuntimeObject* ___0_visitor, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_visitor;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		GenericInterfaceActionInvoker2< Property_2_tFB89CACD8E6BB9B376CA29327AB088841172D029*, Il2CppSharedGenericObject** >::Invoke(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2), L_0, __this, L_1);
		return;
	}
}
// Method Definition Index: 82072
// Method Definition Index: 82073
// Method Definition Index: 82074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_mE3A49918D03BA2F5E46463D7183C0731472F80BA_gshared (Property_2_tFB89CACD8E6BB9B376CA29327AB088841172D029* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		void* L_2 = il2cpp_codegen_object_get_class(L_1);
		bool L_3 = (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var) == (L_2);
		if (!L_3)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		return;
	}

IL_001b:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_4 = __this->___m_Attributes;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_5 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_5, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_5);
	}

IL_002e:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_6 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_7 = ___0_attribute;
		NullCheck(L_6);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_6, L_7, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 82075
// Method Definition Index: 82078
// Method Definition Index: 82079
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 82064
// Method Definition Index: 82065
// Method Definition Index: 82068
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m370F25921D1B6E2D3E2F418BFA63F59362FD7ED4_gshared (Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 82069
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Accept_m0E7CE82A2BBF67031FC59BD706600BCC09618AE9_gshared (Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F* __this, RuntimeObject* ___0_visitor, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_visitor;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		GenericInterfaceActionInvoker2< Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F*, Il2CppSharedGenericObject** >::Invoke(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2), L_0, __this, L_1);
		return;
	}
}
// Method Definition Index: 82072
// Method Definition Index: 82073
// Method Definition Index: 82074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_mADB77756ACFB860F1F0E2C1C0A4A659A07DF8BA3_gshared (Property_2_tD7AFFCB70951DEDCF60F56E7C45655BDCDE8FA7F* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		void* L_2 = il2cpp_codegen_object_get_class(L_1);
		bool L_3 = (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var) == (L_2);
		if (!L_3)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		return;
	}

IL_001b:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_4 = __this->___m_Attributes;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_5 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_5, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_5);
	}

IL_002e:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_6 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_7 = ___0_attribute;
		NullCheck(L_6);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_6, L_7, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 82075
// Method Definition Index: 82078
// Method Definition Index: 82079
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 82064
// Method Definition Index: 82065
// Method Definition Index: 82068
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_mC3EEDEECF644C83465D3A4D9424E409046187C6D_gshared (Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 82069
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Accept_m321A24F7CF0C157D76525C45DF908FDB79D9B407_gshared (Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89* __this, RuntimeObject* ___0_visitor, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_visitor;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		GenericInterfaceActionInvoker2< Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89*, Il2CppSharedGenericObject** >::Invoke(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2), L_0, __this, L_1);
		return;
	}
}
// Method Definition Index: 82072
// Method Definition Index: 82073
// Method Definition Index: 82074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m8CE380B346EC2650202BCA9009E41EE8E7726C2C_gshared (Property_2_t0574D158EF72CB34157EDF2AF9F8631AAF162D89* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		void* L_2 = il2cpp_codegen_object_get_class(L_1);
		bool L_3 = (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var) == (L_2);
		if (!L_3)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		return;
	}

IL_001b:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_4 = __this->___m_Attributes;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_5 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_5, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_5);
	}

IL_002e:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_6 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_7 = ___0_attribute;
		NullCheck(L_6);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_6, L_7, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 82075
// Method Definition Index: 82078
// Method Definition Index: 82079
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 82064
// Method Definition Index: 82065
// Method Definition Index: 82068
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_mC457AE6BA3DF17755976E840C397D374D7D7EDEC_gshared (Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 82069
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Accept_m916FEAEDA5BD504D1533DFD544FBB8BFBEF74FCD_gshared (Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452* __this, RuntimeObject* ___0_visitor, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_visitor;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		GenericInterfaceActionInvoker2< Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452*, Il2CppSharedGenericObject** >::Invoke(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2), L_0, __this, L_1);
		return;
	}
}
// Method Definition Index: 82072
// Method Definition Index: 82073
// Method Definition Index: 82074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m657228C2F4602957450C5F56CA663ABD5BC31DA5_gshared (Property_2_t833C32B493A630BBF1EB496B9E469E8F0DBFB452* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		void* L_2 = il2cpp_codegen_object_get_class(L_1);
		bool L_3 = (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var) == (L_2);
		if (!L_3)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		return;
	}

IL_001b:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_4 = __this->___m_Attributes;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_5 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_5, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_5);
	}

IL_002e:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_6 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_7 = ___0_attribute;
		NullCheck(L_6);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_6, L_7, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 82075
// Method Definition Index: 82078
// Method Definition Index: 82079
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 82064
// Method Definition Index: 82065
// Method Definition Index: 82068
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_mAD02CE45AE6504B8829A7303CC882051CCFAFAF8_gshared (Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 82069
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Accept_m3237A7F145BCBAADB162F0D652DF8F751CDD5AA1_gshared (Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A* __this, RuntimeObject* ___0_visitor, Il2CppSharedGenericObject** ___1_container, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_visitor;
		Il2CppSharedGenericObject** L_1 = ___1_container;
		NullCheck(L_0);
		GenericInterfaceActionInvoker2< Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A*, Il2CppSharedGenericObject** >::Invoke(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2), L_0, __this, L_1);
		return;
	}
}
// Method Definition Index: 82072
// Method Definition Index: 82073
// Method Definition Index: 82074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m758881D5418A4CFF60B307E645929BA164F55454_gshared (Property_2_t6A3DB395A7FACB3B98EA460259D98696B1350A7A* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		void* L_2 = il2cpp_codegen_object_get_class(L_1);
		bool L_3 = (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var) == (L_2);
		if (!L_3)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		return;
	}

IL_001b:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_4 = __this->___m_Attributes;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_5 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_5, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_5);
	}

IL_002e:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_6 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_7 = ___0_attribute;
		NullCheck(L_6);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_6, L_7, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 82075
// Method Definition Index: 82078
// Method Definition Index: 82079
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 82064
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* Property_2_Unity_Properties_Internal_IAttributes_get_Attributes_mB5BEA151053797C0EC206AA4B22729F696E09B54_fshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = __this->___m_Attributes;
		return L_0;
	}
}
// Method Definition Index: 82065
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_set_Attributes_m34F7859EEEE56C767652ED8733BF972A4B9C0E4D_fshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = ___0_value;
		__this->___m_Attributes = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_0);
		return;
	}
}
// Method Definition Index: 82068
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Property_2_DeclaredValueType_m717E818AD74F7A7F438B2FAD3245F1EA356FF56F_fshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 82069
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Accept_m5D78BEC83087B7BBA88EEFAB54EE1BCE444E40DD_fshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_visitor;
		Il2CppFullySharedGenericAny* L_1 = ___1_container;
		NullCheck(L_0);
		GenericInterfaceActionInvoker2< Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2), L_0, __this, L_1);
		return;
	}
}
// Method Definition Index: 82072
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttribute_m75165CE23F4A7B2FD33F74E1A314A52E08EB1F86_fshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(2, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
// Method Definition Index: 82073
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_AddAttributes_m254A38D0DF492D61248F7D514EDB66AD2D326B88_fshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_attributes;
		NullCheck((RuntimeObject*)__this);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, (RuntimeObject*)__this, L_0);
		return;
	}
}
// Method Definition Index: 82074
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttribute_m9E71F32C6B3BEF8989578C42B418007964A3DB3C_fshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* ___0_attribute, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_0 = ___0_attribute;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_1 = ___0_attribute;
		void* L_2 = il2cpp_codegen_object_get_class(L_1);
		bool L_3 = (CreatePropertyAttribute_t481619BD84F5E29767718DE127DD1E781A3B6F92_il2cpp_TypeInfo_var) == (L_2);
		if (!L_3)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		return;
	}

IL_001b:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_4 = __this->___m_Attributes;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_5 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_5, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_5);
	}

IL_002e:
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_6 = __this->___m_Attributes;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_7 = ___0_attribute;
		NullCheck(L_6);
		List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_6, L_7, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 82075
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2_Unity_Properties_Internal_IAttributes_AddAttributes_m90125868491C6BC90AE0CF95472AAC2567340CD5_fshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_1 = NULL;
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_0 = __this->___m_Attributes;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_1 = (List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)il2cpp_codegen_object_new(List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715_il2cpp_TypeInfo_var);
		List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66(L_1, List_1__ctor_m8735FFC7B95F1AA11A04DC5F5E6AA77BAAD94D66_RuntimeMethod_var);
		__this->___m_Attributes = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Attributes), (void*)L_1);
	}

IL_0013:
	{
		RuntimeObject* L_2 = ___0_attributes;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003c:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0045;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0045:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0032_1;
			}

IL_001c_1:
			{
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_7;
				L_7 = InterfaceFuncInvoker0< Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0, IEnumerator_1_tE3FBD2D20AA88C9A0F855ADC37B0F385A3ADC2C1_il2cpp_TypeInfo_var, L_6);
				V_1 = L_7;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_8 = V_1;
				if (!L_8)
				{
					goto IL_0032_1;
				}
			}
			{
				List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_9 = __this->___m_Attributes;
				Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10 = V_1;
				NullCheck(L_9);
				List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_inline(L_9, L_10, List_1_Add_mB0CF48862666913FBBF40D44568593A6D82F7EA2_RuntimeMethod_var);
			}

IL_0032_1:
			{
				RuntimeObject* L_11 = V_0;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_0046;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		return;
	}
}
// Method Definition Index: 82078
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE Property_2_Unity_Properties_Internal_IAttributes_CreateAttributesScope_m7B441C8FDA76E0E96B467C77200560B68FA40856_fshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, RuntimeObject* ___0_attributes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* G_B2_0 = NULL;
	Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* G_B1_0 = NULL;
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* G_B3_0 = NULL;
	Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_attributes;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = ((List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715*)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_attributes;
		NullCheck(L_1);
		List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* L_2;
		L_2 = InterfaceFuncInvoker0< List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* >::Invoke(0, IAttributes_t699EF2D1D5A022C91D27888CE70518262A25928D_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		AttributesScope_t5A89FFE050A95DD67BD15C00A4D072EABAA376AE L_3;
		memset((&L_3), 0, sizeof(L_3));
		AttributesScope__ctor_m1FE303992C9EEDB9E18DCEF89A7124C353D65CB0((&L_3), (RuntimeObject*)G_B3_1, G_B3_0, NULL);
		return L_3;
	}
}
// Method Definition Index: 82079
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_m1B14349D578BF83C39983D2898529964F8906986_fshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
// Method Definition Index: 11536
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueueDebugView_1__ctor_m5BED8A79886FE8FC41265AEFE9E49359FCF9CD51_fshared (QueueDebugView_1_t8BB38E64819624DE272D7E28A299B19F779A6D9E* __this, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___0_queue, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_0 = ___0_queue;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral26E2095A8B52212AA5C1E02D88D8E33A9DB72C3B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = ___0_queue;
		__this->____queue = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____queue), (void*)L_2);
		return;
	}
}
// Method Definition Index: 11537
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* QueueDebugView_1_get_Items_m40CEA51D3341696D2675BA8401D968731793C48F_fshared (QueueDebugView_1_t8BB38E64819624DE272D7E28A299B19F779A6D9E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_0 = __this->____queue;
		NullCheck(L_0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
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
// Method Definition Index: 11510
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mB66785D5972BBBE6EB22E282C3D5D4E1131A0A09 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_0;
		L_0 = Array_Empty_TisValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8_m333097FF36C87F06696A8E782F14066A2841FE00_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11511
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m8549173980C70BE8390703ED0FBF7803C835E802 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_6 = (ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331*)(ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11512
// Method Definition Index: 11513
// Method Definition Index: 11514
// Method Definition Index: 11515
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mAC5D0885BE3A9D6B8CDF27E55BD1E52DCCA78A57 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
// Method Definition Index: 11516
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mF08075E4C5DE7AB9CF1B1E6706C7D884A70D385F (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11517
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m4160841F977D4A75E865A957E4F415C2085AD2EA (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m9E9616183C1194AAFA6DDD531B97467EC333432F(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
	}

IL_0045:
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m0174B1375CBCE5607C169FB96E6AB17DB97CB173(__this, L_18, NULL);
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11518
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t125C05E9FF652475E0BCF0E4A90A0DF5E495FD8C Queue_1_GetEnumerator_mD84BB8798A2C242B37E4CDF9B88AE53A8D100956 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t125C05E9FF652475E0BCF0E4A90A0DF5E495FD8C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8A7ED6A2B52302D616E21E025FBA1620A1BB8CC5((&L_0), __this, NULL);
		return L_0;
	}
}
// Method Definition Index: 11519
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9B797638694B2CA21CDD36D4BE4AC6285AB25602 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t125C05E9FF652475E0BCF0E4A90A0DF5E495FD8C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8A7ED6A2B52302D616E21E025FBA1620A1BB8CC5((&L_0), __this, NULL);
		Enumerator_t125C05E9FF652475E0BCF0E4A90A0DF5E495FD8C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11520
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mA316196029DAAFDD3EB5D15E023D36D8CB44901F (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t125C05E9FF652475E0BCF0E4A90A0DF5E495FD8C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m8A7ED6A2B52302D616E21E025FBA1620A1BB8CC5((&L_0), __this, NULL);
		Enumerator_t125C05E9FF652475E0BCF0E4A90A0DF5E495FD8C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11521
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 Queue_1_Dequeue_m15F61A320AE0B8C554F254B3013FECEDDF880E2E (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* V_1 = NULL;
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m058F6E4F4E6EB759CA127F527926CEED7E30E380(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
	}

IL_001c:
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m0174B1375CBCE5607C169FB96E6AB17DB97CB173(__this, L_7, NULL);
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
// Method Definition Index: 11522
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 Queue_1_Peek_m43F47D835421140C248A9E1EDA4BED1C51E88051 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m058F6E4F4E6EB759CA127F527926CEED7E30E380(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
	}

IL_000e:
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 11523
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m07BE4F109761367CBC4658D965AF6F2B14DF3F90 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8));
		return (bool)0;
	}

IL_0011:
	{
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8* L_2 = ___0_result;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8*)L_2 = L_6;
		return (bool)1;
	}
}
// Method Definition Index: 11524
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m7F4521E7749EB6102F434314CFB63CD2E3136EB2 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_3 = __this->____array;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8_m4C53F9B0652D817DC94A124434E7349F0763D8A9(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_8 = __this->____array;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = __this->____head;
		int32_t L_14;
		L_14 = Array_IndexOf_TisValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8_m4C53F9B0652D817DC94A124434E7349F0763D8A9(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_15 = __this->____array;
		ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 L_16 = ___0_item;
		int32_t L_17 = __this->____tail;
		int32_t L_18;
		L_18 = Array_IndexOf_TisValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8_m4C53F9B0652D817DC94A124434E7349F0763D8A9(L_15, L_16, 0, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11525
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* Queue_1_ToArray_m3C17572356B065C664FB62FAF0EE4A8CAF6BFE09 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_1;
		L_1 = Array_Empty_TisValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8_m333097FF36C87F06696A8E782F14066A2841FE00_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_3 = (ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331*)(ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_12 = V_0;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_16 = __this->____array;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_17 = V_0;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11526
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9E9616183C1194AAFA6DDD531B97467EC333432F (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* V_0 = NULL;
	Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* G_B6_0 = NULL;
	Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_1 = (ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331*)(ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_11 = V_0;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_15 = __this->____array;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_16 = V_0;
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11527
// Method Definition Index: 11528
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m058F6E4F4E6EB759CA127F527926CEED7E30E380 (Queue_1_t63037725B83E7C5E96B041EA4781114821080C5D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 11510
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mC2547198A54AB222EA96E649C3A653C21785EE72 (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_0;
		L_0 = Array_Empty_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1AD513F77218E59FBB83B12CD05888A1BF6D54B0_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11511
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mE3D16BAC10E3E8310BFD91E86E73A47FC415AF97 (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_6 = (EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A*)(EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11512
// Method Definition Index: 11513
// Method Definition Index: 11514
// Method Definition Index: 11515
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m74A7CE2E9F16893B7218F9F108F0C4F1328058A4 (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_11 = __this->____array;
		int32_t L_12 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_11, 0, L_12, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_13 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		return;
	}
}
// Method Definition Index: 11516
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mECF47CAE501BB0443EBE564E6C9EEC9AE8C41969 (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11517
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mEA83B1259F57F18E4BF86A4CC43BAEC33D2FCA41 (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m9C99B93C7AB97E316D1E8591BCF01B03FD5B9F1A(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
	}

IL_0045:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m86C24E3D8D2B55FCD5FE49614EEC466771A8471F(__this, L_18, NULL);
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11518
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 Queue_1_GetEnumerator_m4464DDCF024AA5806E45E241C0BC8BF2F71D574F (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m96AAB9F5DC5F6BBCB377A9459038CB7F0CF0875C((&L_0), __this, NULL);
		return L_0;
	}
}
// Method Definition Index: 11519
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m278165306205AA6C5E604C7DEECAEF450220A964 (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m96AAB9F5DC5F6BBCB377A9459038CB7F0CF0875C((&L_0), __this, NULL);
		Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11520
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mA381A953C70DED15A56D8D12CB61B2DCC32EB94C (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m96AAB9F5DC5F6BBCB377A9459038CB7F0CF0875C((&L_0), __this, NULL);
		Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11521
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 Queue_1_Dequeue_m841B28D2AD7F6CEFF71B159D6B4B9526C4858780 (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* V_1 = NULL;
	Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m4E22F11E12D35FD450ED05E4C4A7D959DDCC8E58(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
	}

IL_001c:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215));
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m86C24E3D8D2B55FCD5FE49614EEC466771A8471F(__this, L_10, NULL);
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
// Method Definition Index: 11522
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 Queue_1_Peek_mAA48A0CAF08E80D6DA532EECF0EB0DF69E895DA7 (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m4E22F11E12D35FD450ED05E4C4A7D959DDCC8E58(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
	}

IL_000e:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 11523
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_mCF4D52D6B62F812F3A2C439D275CEC009E609FD4 (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215));
		return (bool)0;
	}

IL_0011:
	{
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215* L_2 = ___0_result;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215*)L_2)->____managedEvent), (void*)NULL);
		return (bool)1;
	}
}
// Method Definition Index: 11524
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mAB1CDDA12BB6C3AC86CF1086B6A1AE04FA0A533B (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_3 = __this->____array;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m783DEB1BEA7DFED9BEAA2878AE0FFC9E1A083B73(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_8 = __this->____array;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = __this->____head;
		int32_t L_14;
		L_14 = Array_IndexOf_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m783DEB1BEA7DFED9BEAA2878AE0FFC9E1A083B73(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_15 = __this->____array;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_16 = ___0_item;
		int32_t L_17 = __this->____tail;
		int32_t L_18;
		L_18 = Array_IndexOf_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m783DEB1BEA7DFED9BEAA2878AE0FFC9E1A083B73(L_15, L_16, 0, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11525
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* Queue_1_ToArray_m41B953E9C03B9D934ED24354C0DD5F1AC440466D (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_1;
		L_1 = Array_Empty_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1AD513F77218E59FBB83B12CD05888A1BF6D54B0_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_3 = (EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A*)(EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_12 = V_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_16 = __this->____array;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_17 = V_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11526
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9C99B93C7AB97E316D1E8591BCF01B03FD5B9F1A (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* V_0 = NULL;
	Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* G_B6_0 = NULL;
	Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_1 = (EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A*)(EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_11 = V_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_15 = __this->____array;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_16 = V_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11527
// Method Definition Index: 11528
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4E22F11E12D35FD450ED05E4C4A7D959DDCC8E58 (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 11510
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11511
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mCFBB78D8B30A0F7F62B7B13B48794314CF472D4D (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11512
// Method Definition Index: 11513
// Method Definition Index: 11514
// Method Definition Index: 11515
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
// Method Definition Index: 11516
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m951B065722F6BAD8756DF930F0E77EFC01865B73 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11517
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_mC239D559AF84CEE25E8EEADB05B96025C66ED6D5(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
	}

IL_0045:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		int32_t L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (int32_t)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m30C57750EB5C9A1840E1F823928030E66FF1F961(__this, L_18, NULL);
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11518
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 Queue_1_GetEnumerator_mC56A5519A861A13B2DFF0857D4908B7A495970D5 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE((&L_0), __this, NULL);
		return L_0;
	}
}
// Method Definition Index: 11519
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m00D02E02E64C0C3A402468A862ED63F52FC4360D (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE((&L_0), __this, NULL);
		Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11520
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mB64344DD889D2DA18EA20A979560574BBB7CCE0B (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE((&L_0), __this, NULL);
		Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11521
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B4_0 = 0;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
	}

IL_001c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m30C57750EB5C9A1840E1F823928030E66FF1F961(__this, L_7, NULL);
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
// Method Definition Index: 11522
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_Peek_m670D85E9DC1BD3A794F6006EE07A20E4AC33C08C (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 11523
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m19D64AA56C1A7B16E6F20797C91B7F6F159731E7 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(int32_t));
		return (bool)0;
	}

IL_0011:
	{
		int32_t* L_2 = ___0_result;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(int32_t*)L_2 = L_6;
		return (bool)1;
	}
}
// Method Definition Index: 11524
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m3ABAE00CC43C9B6561CE5F94724ED2FCD962BD64 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____array;
		int32_t L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____array;
		int32_t L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = __this->____head;
		int32_t L_14;
		L_14 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____array;
		int32_t L_16 = ___0_item;
		int32_t L_17 = __this->____tail;
		int32_t L_18;
		L_18 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3(L_15, L_16, 0, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11525
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Queue_1_ToArray_mCB86607434F2C40D8E444E595A9748C0E72255BA (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->____array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11526
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mC239D559AF84CEE25E8EEADB05B96025C66ED6D5 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* G_B6_0 = NULL;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11527
// Method Definition Index: 11528
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 11510
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m3A126C80D91B2EB3C8E8BE072438D3C3640A5A75 (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_0;
		L_0 = Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11511
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mA6D219FBF1F11E55D74C0545DBF6AA18C5AF85B3 (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_6 = (JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)(JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11512
// Method Definition Index: 11513
// Method Definition Index: 11514
// Method Definition Index: 11515
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m9B8DBB3F3DCFAE1306C2A604E8C4FCB5E80E4E59 (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
// Method Definition Index: 11516
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mEEF9060CB1702EEB6695F115562EFB3DAA29992D (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11517
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m7ACC3D9CAAB2E747FE32FCB2928ED5886A5B33B1 (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m9A483395EF3F401BC08314BDE9392BD26EBE444F(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
	}

IL_0045:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390(__this, L_18, NULL);
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11518
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B Queue_1_GetEnumerator_m092DE77C76645AFDD839F99DB6DB0C8A9FFD0B05 (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886((&L_0), __this, NULL);
		return L_0;
	}
}
// Method Definition Index: 11519
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3BAEC4F450BC7747422D37AA9ADE3D522E3B6AA4 (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886((&L_0), __this, NULL);
		Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11520
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mB5643D90AE44533169A70ECBF4FB8D9BABC22A78 (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886((&L_0), __this, NULL);
		Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11521
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 Queue_1_Dequeue_mAB6FF2BF6F12E3AD12C7524DB9EB640CB5C3750E (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* V_1 = NULL;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_2;
	memset((&V_2), 0, sizeof(V_2));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
	}

IL_001c:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390(__this, L_7, NULL);
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
// Method Definition Index: 11522
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 Queue_1_Peek_m639CC79FAC9BD961981FAD7C71CBC8FD7F122EDC (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
	}

IL_000e:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 11523
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m94AB487054E12FD562B8AA2E2A4D4F718BCF4AB6 (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		return (bool)0;
	}

IL_0011:
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_2 = ___0_result;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08*)L_2 = L_6;
		return (bool)1;
	}
}
// Method Definition Index: 11524
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mF17839D3523CFFAF643E06BD857B5FCB26EB9312 (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_3 = __this->____array;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_mCD89004E22CB4FEB73672DD2830E315DDA4DA3BE(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_8 = __this->____array;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = __this->____head;
		int32_t L_14;
		L_14 = Array_IndexOf_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_mCD89004E22CB4FEB73672DD2830E315DDA4DA3BE(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_15 = __this->____array;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_16 = ___0_item;
		int32_t L_17 = __this->____tail;
		int32_t L_18;
		L_18 = Array_IndexOf_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_mCD89004E22CB4FEB73672DD2830E315DDA4DA3BE(L_15, L_16, 0, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11525
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* Queue_1_ToArray_m37BDB9698F8E57DC78F53E21C3E964A6A0CDA62A (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1;
		L_1 = Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_3 = (JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)(JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_12 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_16 = __this->____array;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_17 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11526
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9A483395EF3F401BC08314BDE9392BD26EBE444F (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* V_0 = NULL;
	Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* G_B6_0 = NULL;
	Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1 = (JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)(JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_11 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_15 = __this->____array;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_16 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11527
// Method Definition Index: 11528
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 11510
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m55FB0BDDDBD29B76BE8E6E743B21DD26D6E4F4E4 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11511
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m8FDD9C089831C7940194DA60CA2E1969FEFF9DB4 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11512
// Method Definition Index: 11513
// Method Definition Index: 11514
// Method Definition Index: 11515
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m782A85157C5B67F4C19D851FF84FF5BCEB69978B (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
// Method Definition Index: 11516
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m1D3DF3EFD4164BD00A592079F5C2EC3A396DE35A (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11517
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m51CF9D36A7BD34DFA8CF476CCF7B22E8A4E626C3 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_mCA8E0FFC567DD0017C621A6B75027F8565CFA7E6(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
	}

IL_0045:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		uint32_t L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint32_t)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mE01938A89F813B0CCF58E0D82D23363114A97B85(__this, L_18, NULL);
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11518
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891 Queue_1_GetEnumerator_m8B7B7C3BD711ABD06C5D30756D552489D173A7A7 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m883CA17DC68406094FEFA9AAD8C40161CA35D1F3((&L_0), __this, NULL);
		return L_0;
	}
}
// Method Definition Index: 11519
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m5685E7A12DE80A72117F12A7887758E9C0B68788 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m883CA17DC68406094FEFA9AAD8C40161CA35D1F3((&L_0), __this, NULL);
		Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11520
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m0FE44563F84F3DC68BA9D00F81D9F78E76F5C559 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m883CA17DC68406094FEFA9AAD8C40161CA35D1F3((&L_0), __this, NULL);
		Enumerator_t85344E4ACE131A91BC38A5761E3E64011789C891 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11521
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Queue_1_Dequeue_m8A2F84DC9CFD109881590CBFA0EC18DF2136C556 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t G_B4_0 = 0;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m87C0DAA7B799FEF651F40F96BDB0A437E1D24CEE(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
	}

IL_001c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mE01938A89F813B0CCF58E0D82D23363114A97B85(__this, L_7, NULL);
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
// Method Definition Index: 11522
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Queue_1_Peek_m6F1B03E72E4E3D23CC965CE849A9D09ABFF616D8 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m87C0DAA7B799FEF651F40F96BDB0A437E1D24CEE(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
	}

IL_000e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 11523
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m021FEAB780F0532926C8B609B8679AFFB6953229 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, uint32_t* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		uint32_t* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(uint32_t));
		return (bool)0;
	}

IL_0011:
	{
		uint32_t* L_2 = ___0_result;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(uint32_t*)L_2 = L_6;
		return (bool)1;
	}
}
// Method Definition Index: 11524
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mD1D4688926A2E0D1CABBF2D24DEE9464BDAB2CDF (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->____array;
		uint32_t L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mFC8BDE74B86C42A57D89FDA28EED3DDEF7B67A17(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = __this->____array;
		uint32_t L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = __this->____head;
		int32_t L_14;
		L_14 = Array_IndexOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mFC8BDE74B86C42A57D89FDA28EED3DDEF7B67A17(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = __this->____array;
		uint32_t L_16 = ___0_item;
		int32_t L_17 = __this->____tail;
		int32_t L_18;
		L_18 = Array_IndexOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mFC8BDE74B86C42A57D89FDA28EED3DDEF7B67A17(L_15, L_16, 0, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11525
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Queue_1_ToArray_m559AF0C0E111A34796930C61F395F697D51E04A0 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = __this->____array;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11526
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mCA8E0FFC567DD0017C621A6B75027F8565CFA7E6 (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* G_B6_0 = NULL;
	Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = __this->____array;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11527
// Method Definition Index: 11528
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m87C0DAA7B799FEF651F40F96BDB0A437E1D24CEE (Queue_1_tA93BCCFDEFF25FCF9C491D240D49B2B8B9C37850* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 11510
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m1437114CDC49136515E8EDDF0D770364E0F3EA67_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0;
		L_0 = Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11511
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m11C42D9546F5F11DF318235A97C3478958DE9555_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11512
// Method Definition Index: 11513
// Method Definition Index: 11514
// Method Definition Index: 11515
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m7399BCFE5F893D371CC3CDF389727B01EE0421D7_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_11 = __this->____array;
		int32_t L_12 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_11, 0, L_12, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_13 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		return;
	}
}
// Method Definition Index: 11516
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m3DBDE5E03C6C52F1CBB9E4D93E590A8CC6D6EAB2_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11517
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m16F75E528EE6527E8B9E76AE7D7E455D5476C606_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m1549601D804B1A2FA09822B8FF6018C374086954(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
	}

IL_0045:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		Il2CppSharedGenericObject* L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Il2CppSharedGenericObject*)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m097052B8552DED4A35D537D3AEB84510090C9E70(__this, L_18, NULL);
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11518
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1 Queue_1_GetEnumerator_m931CF5C152723DE6DD0786DF3D5606A59C1BB1BF_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m37472EFA972090AD3A35A3715208772B2F3F6339((&L_0), __this, NULL);
		return L_0;
	}
}
// Method Definition Index: 11519
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2EC91485BA815E5429D3028BF5E4FCB425A30A54_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m37472EFA972090AD3A35A3715208772B2F3F6339((&L_0), __this, NULL);
		Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11520
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mFE2846F2C99D73CD09293F03A64D9A14150610D4_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m37472EFA972090AD3A35A3715208772B2F3F6339((&L_0), __this, NULL);
		Enumerator_t539AC62A1BE9934C67FD41CBB84103B4E3E98AC1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11521
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Queue_1_Dequeue_m1ECED0A4B619428F2561AA3D053E73A097A10193_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_1 = NULL;
	Il2CppSharedGenericObject* V_2 = NULL;
	Il2CppSharedGenericObject* G_B4_0 = NULL;
	Il2CppSharedGenericObject* G_B3_0 = NULL;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m6EF406DB0A9F8B868374ABDF966B343F281FEE1F(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
	}

IL_001c:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Il2CppSharedGenericObject* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Il2CppSharedGenericObject*)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m097052B8552DED4A35D537D3AEB84510090C9E70(__this, L_10, NULL);
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
// Method Definition Index: 11522
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Queue_1_Peek_m5B2A289CDE4717E92A0BD9DAC12B70F42E833B93_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m6EF406DB0A9F8B868374ABDF966B343F281FEE1F(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
	}

IL_000e:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Il2CppSharedGenericObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 11523
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_mF81C93E369F7FA8068EDAEDC682B48646FBE72D7_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, Il2CppSharedGenericObject** ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Il2CppSharedGenericObject** L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}

IL_0011:
	{
		Il2CppSharedGenericObject** L_2 = ___0_result;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Il2CppSharedGenericObject* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(Il2CppSharedGenericObject**)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_2, (void*)L_6);
		return (bool)1;
	}
}
// Method Definition Index: 11524
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mE3790371A44789AC06DD08E9262C6E17C5B0434F_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____array;
		Il2CppSharedGenericObject* L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_8 = __this->____array;
		Il2CppSharedGenericObject* L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = __this->____head;
		int32_t L_14;
		L_14 = Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_15 = __this->____array;
		Il2CppSharedGenericObject* L_16 = ___0_item;
		int32_t L_17 = __this->____tail;
		int32_t L_18;
		L_18 = Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33(L_15, L_16, 0, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11525
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Queue_1_ToArray_m371E1FC76DD63BE6BA88DC598EA21757CE693440_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1;
		L_1 = Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_12 = V_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_16 = __this->____array;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_17 = V_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11526
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m1549601D804B1A2FA09822B8FF6018C374086954_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* G_B6_0 = NULL;
	Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_11 = V_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_15 = __this->____array;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_16 = V_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11527
// Method Definition Index: 11528
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m6EF406DB0A9F8B868374ABDF966B343F281FEE1F_gshared (Queue_1_tF7C2F79F3487A05259C04F0FA9E0DE6DB85009FF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 11510
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m657BFA58DFD6AB5B1B4B69AA6E963CD569637EAD_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0;
		L_0 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11511
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m2A01859D57AB64CDCAECDF68089FD2236759976C_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11512
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mE6103188ACDEC07F90F2D2986554730D18029750_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 11513
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m1E7DDED94ADEB25172891CED1F68DFC880B66415_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)0;
	}
}
// Method Definition Index: 11514
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m8E5ACA13B4BA41CC3230927ACEB3CF68820A8A05_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = il2cpp_intrinsic_interlocked_compare_exchange(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
// Method Definition Index: 11515
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mF3F6BB3C909C58BB9407AA3FFA131CC73E1287AA_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if (!L_1)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_2 = __this->____head;
		int32_t L_3 = __this->____tail;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0036;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____array;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, L_5, L_6, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->____array;
		int32_t L_8 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____array;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		int32_t L_11 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_10, L_11)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____array;
		int32_t L_13 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_12, 0, L_13, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
// Method Definition Index: 11516
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m8ACB04592D3C4936139A90C1CE9B708BA3F7D47F_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11517
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m9159DC6A9BC5528A3444329C408F4101004CF652_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)))(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
	}

IL_0045:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_item : &___0_item), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		NullCheck(L_15);
		il2cpp_codegen_memcpy((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)), L_17, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), (void**)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)), (void*)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(__this, L_18, NULL);
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11518
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_GetEnumerator_m6C532F76552CCD7154B74816F66DA3CE367BD90D_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C L_0 = alloca(SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
	//<source_info:<no-source>:1>
	{
		memset(L_0, 0, SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
		Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB((Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*)L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
		return;
	}
}
// Method Definition Index: 11519
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m926D620709AEF33612E061F359920FA5A7F33D2F_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C L_0 = alloca(SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
	//<source_info:<no-source>:1>
	{
		memset(L_0, 0, SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
		Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB((Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*)L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), L_0);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 11520
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mD615C747AA1C683E461CA820560E002427466EB8_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C L_0 = alloca(SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
	//<source_info:<no-source>:1>
	{
		memset(L_0, 0, SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
		Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB((Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*)L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), L_0);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 11521
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Dequeue_m80C152387A53656EC4AEF450BCBA9087DC51EEE3_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	const Il2CppFullySharedGenericAny L_10 = L_6;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	memset(V_2, 0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	Il2CppFullySharedGenericAny G_B4_0 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	memset(G_B4_0, 0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	memset(G_B3_0, 0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
	}

IL_001c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		bool L_7;
		L_7 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if (!L_7)
		{
			il2cpp_codegen_memcpy(G_B4_0, L_6, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
			goto IL_003a;
		}
		il2cpp_codegen_memcpy(G_B3_0, L_6, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = V_1;
		int32_t L_9 = V_0;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		il2cpp_codegen_memcpy(L_10, V_2, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		NullCheck(L_8);
		il2cpp_codegen_memcpy((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), L_10, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), (void**)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), (void*)L_10);
		il2cpp_codegen_memcpy(G_B4_0, G_B3_0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	}

IL_003a:
	{
		int32_t* L_11 = (int32_t*)(&__this->____head);
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(__this, L_11, NULL);
		int32_t L_12 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		int32_t L_13 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, G_B4_0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		return;
	}
}
// Method Definition Index: 11522
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Peek_mC16DCF76985FF167BAB542F92D9AA03C1E210D8C_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		return;
	}
}
// Method Definition Index: 11523
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_mA759DB49FBC988FD410603976DE2E9C0C693E500_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny* ___0_result, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		return (bool)0;
	}

IL_0011:
	{
		Il2CppFullySharedGenericAny* L_2 = ___0_result;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_2, L_6, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), (void**)(Il2CppFullySharedGenericAny*)L_2, (void*)L_6);
		return (bool)1;
	}
}
// Method Definition Index: 11524
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m18A922A2A41A33641FC69FAB29C41657375E682F_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	const Il2CppFullySharedGenericAny L_9 = L_4;
	const Il2CppFullySharedGenericAny L_16 = L_4;
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____array;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_item : &___0_item), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9), NULL, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_4: *(void**)L_4), L_5, L_6);
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____array;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_item : &___0_item), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		int32_t L_10 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = __this->____head;
		int32_t L_14;
		L_14 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9), NULL, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_9: *(void**)L_9), L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = __this->____array;
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_item : &___0_item), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		int32_t L_17 = __this->____tail;
		int32_t L_18;
		L_18 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9), NULL, L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_16: *(void**)L_16), 0, L_17);
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11525
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Queue_1_ToArray_m6E3371A83B60239A394CB7E49FFB3380C75C5E52_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = __this->____array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11526
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5368BB1720798CB76A62CDC47D91036C4B07BBEB_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* G_B6_0 = NULL;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = __this->____array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11527
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_5 = ___0_index;
		int32_t L_6 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_5, (int32_t)L_6);
		return;
	}
}
// Method Definition Index: 11528
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4A409F6A724BB2356563FCEA1FD83322718EE8C9_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 11510
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m5793B48CD425E5D7A93313DF986956BBAA8B65C7 (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_0;
		L_0 = Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11511
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m98E586DB678570DC3A40CF92702290F1519727DC (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_6 = (EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)(EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11512
// Method Definition Index: 11513
// Method Definition Index: 11514
// Method Definition Index: 11515
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mA1E2EE278988F339DC3EC2FA17F909904DE3C974 (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_11 = __this->____array;
		int32_t L_12 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_11, 0, L_12, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_13 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		return;
	}
}
// Method Definition Index: 11516
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mD31AA840A14A0863D14662B3432C6F244F3ED007 (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11517
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mBF44A4060F486104A2FC16D28D0BDBD08BC83491 (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m5115601B916B93D40CF5F1D0E701A44CE4AC00BD(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
	}

IL_0045:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8(__this, L_18, NULL);
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11518
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 Queue_1_GetEnumerator_m6811DC2FBA9AB8EEA103F351BF62C1CC4510F9C2 (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E((&L_0), __this, NULL);
		return L_0;
	}
}
// Method Definition Index: 11519
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m72D68C500677FCC7AD2E98F73EE2F4C101BFFBB3 (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E((&L_0), __this, NULL);
		Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11520
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mF93C321C59477A3AD51B3070041130177696ED5F (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E((&L_0), __this, NULL);
		Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11521
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 Queue_1_Dequeue_m90F123DA1976DFBC4D8B331B07B1EB833A2E4509 (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* V_1 = NULL;
	EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
	}

IL_001c:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2));
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8(__this, L_10, NULL);
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
// Method Definition Index: 11522
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 Queue_1_Peek_m1C5E26653158385CA6B819CCC6C0B2E54FE805F5 (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
	}

IL_000e:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 11523
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m438D67BB89E5C9DE5D0B0F6D7C954F77F7C4D694 (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2));
		return (bool)0;
	}

IL_0011:
	{
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2* L_2 = ___0_result;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2*)L_2)->___m_Event), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2*)L_2)->___m_Panel), (void*)NULL);
		#endif
		return (bool)1;
	}
}
// Method Definition Index: 11524
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mC42C579A978F3B1371A7380402643611828E9E4B (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = __this->____array;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mDA8ABF0C8CBC330E0DBA64B13F204111EAFA1294(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_8 = __this->____array;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = __this->____head;
		int32_t L_14;
		L_14 = Array_IndexOf_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mDA8ABF0C8CBC330E0DBA64B13F204111EAFA1294(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_15 = __this->____array;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_16 = ___0_item;
		int32_t L_17 = __this->____tail;
		int32_t L_18;
		L_18 = Array_IndexOf_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mDA8ABF0C8CBC330E0DBA64B13F204111EAFA1294(L_15, L_16, 0, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11525
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* Queue_1_ToArray_m09076A35A3E2BDFFFB21BCF0AA9E6AAE78901DE9 (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1;
		L_1 = Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = (EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)(EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_12 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_16 = __this->____array;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_17 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11526
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5115601B916B93D40CF5F1D0E701A44CE4AC00BD (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* V_0 = NULL;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* G_B6_0 = NULL;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1 = (EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)(EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_11 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_15 = __this->____array;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_16 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11527
// Method Definition Index: 11528
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0 (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 11510
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m305184BC0CC0E383E8001B97DA4AEEA7D0CE1B2C (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_0;
		L_0 = Array_Empty_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mE74D581FD3F8DF5CFA50A5133DB5A6F7D16B99CD_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11511
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mBB24ED246DAAA77C2092ED6A2D2C77DC7BE23B5B (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_6 = (CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9*)(CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
// Method Definition Index: 11512
// Method Definition Index: 11513
// Method Definition Index: 11514
// Method Definition Index: 11515
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m6DB16A4E0D88DC23DD547CFFA96F8E3C5CEBADD4 (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_11 = __this->____array;
		int32_t L_12 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_11, 0, L_12, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_13 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		return;
	}
}
// Method Definition Index: 11516
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mF3012F58E434209795ED06755BE79FAB1E66A38C (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
			int32_t L_25 = __this->____head;
			int32_t L_26 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_24, L_25))) < ((int32_t)L_26)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_27 = V_1;
			G_B17_0 = L_27;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_28 = __this->____array;
			NullCheck(L_28);
			int32_t L_29 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_28)->max_length),NULL));
			int32_t L_30 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(L_29, L_30));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_31 = __this->____array;
			int32_t L_32 = __this->____head;
			RuntimeArray* L_33 = ___0_array;
			int32_t L_34 = ___1_index;
			int32_t L_35 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_31, L_32, L_33, L_34, L_35, NULL);
			int32_t L_36 = V_1;
			int32_t L_37 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_36, L_37));
			int32_t L_38 = V_1;
			if ((((int32_t)L_38) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_39 = __this->____array;
			RuntimeArray* L_40 = ___0_array;
			int32_t L_41 = ___1_index;
			CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_42 = __this->____array;
			NullCheck(L_42);
			int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
			int32_t L_44 = __this->____head;
			int32_t L_45 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, L_40, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_43)), L_44)), L_45, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_46 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, method);
	}

IL_00fa:
	{
		return;
	}
}
// Method Definition Index: 11517
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m4415CE3E59110C01F3959FF645AEB9D0A12D5A82 (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_1 = __this->____array;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_3 = __this->____array;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)200),NULL));
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)100),NULL));
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(((int64_t)il2cpp_codegen_multiply(L_5, L_6))/L_7)),NULL));
		V_0 = L_8;
		int32_t L_9 = V_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_10 = __this->____array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 4)))))
		{
			goto IL_003e;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 4));
	}

IL_003e:
	{
		int32_t L_14 = V_0;
		Queue_1_SetCapacity_m225DAA2133CC2108D2F16C7EF47CA7368AE5E4E7(__this, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
	}

IL_0045:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_15 = __this->____array;
		int32_t L_16 = __this->____tail;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_17 = ___0_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08)L_17);
		int32_t* L_18 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mF12756790A3C38E07F95BA2B920AE67A930962A8(__this, L_18, NULL);
		int32_t L_19 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		return;
	}
}
// Method Definition Index: 11518
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 Queue_1_GetEnumerator_m38AA4049D7E2398FD0D7490310D72C80155D9C88 (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m076E60AA8F25CE906A72B6409796A0A68BEB99CB((&L_0), __this, NULL);
		return L_0;
	}
}
// Method Definition Index: 11519
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m81EB5E36D293C068CC238E2CAB700B4E8810DA26 (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m076E60AA8F25CE906A72B6409796A0A68BEB99CB((&L_0), __this, NULL);
		Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11520
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m0A5DEDAEF2B64E21F4E9E0B8EBE60C7889972167 (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m076E60AA8F25CE906A72B6409796A0A68BEB99CB((&L_0), __this, NULL);
		Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11521
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 Queue_1_Dequeue_m464B10B3191E4D7B20542EB8FA1A47DEF1027D84 (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* V_1 = NULL;
	CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 V_2;
	memset((&V_2), 0, sizeof(V_2));
	CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m4A8990345304F038BC2D5F79896D4BED8CC2CD82(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
	}

IL_001c:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08));
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mF12756790A3C38E07F95BA2B920AE67A930962A8(__this, L_10, NULL);
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
// Method Definition Index: 11522
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 Queue_1_Peek_m2DE035C032FAA2FA38A1716B4BFA0D3D362ABA4A (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m4A8990345304F038BC2D5F79896D4BED8CC2CD82(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
	}

IL_000e:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 11523
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryPeek_m357476993A9FFA086425C89D3DF7AA0EF94EFE37 (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08* ___0_result, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08* L_1 = ___0_result;
		il2cpp_codegen_initobj(L_1, sizeof(CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08));
		return (bool)0;
	}

IL_0011:
	{
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08* L_2 = ___0_result;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*(CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08*)L_2)->___callback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08*)L_2)->___userData), (void*)NULL);
		#endif
		return (bool)1;
	}
}
// Method Definition Index: 11524
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m2E18774C6607F2A29D55C05D9BC6A1A04390B96B (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_3 = __this->____array;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mF7378E0A466D44125A606D050C5AD75FCE4C819F(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_8 = __this->____array;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		int32_t L_13 = __this->____head;
		int32_t L_14;
		L_14 = Array_IndexOf_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mF7378E0A466D44125A606D050C5AD75FCE4C819F(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_15 = __this->____array;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_16 = ___0_item;
		int32_t L_17 = __this->____tail;
		int32_t L_18;
		L_18 = Array_IndexOf_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mF7378E0A466D44125A606D050C5AD75FCE4C819F(L_15, L_16, 0, L_17, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
// Method Definition Index: 11525
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* Queue_1_ToArray_mB908DFB1E373CF2C238A1C581E6E614B483E862F (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_1;
		L_1 = Array_Empty_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mE74D581FD3F8DF5CFA50A5133DB5A6F7D16B99CD_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_3 = (CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9*)(CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_12 = V_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		int32_t L_15 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_16 = __this->____array;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_17 = V_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_18 = __this->____array;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		int32_t L_20 = __this->____head;
		int32_t L_21 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, 0, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21, NULL);
	}

IL_0087:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 11526
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m225DAA2133CC2108D2F16C7EF47CA7368AE5E4E7 (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* V_0 = NULL;
	Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* G_B6_0 = NULL;
	Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_1 = (CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9*)(CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_11 = V_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_15 = __this->____array;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_16 = V_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		int32_t L_19 = __this->____head;
		int32_t L_20 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), L_20, NULL);
	}

IL_007d:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_21 = V_0;
		__this->____array = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_21);
		__this->____head = 0;
		int32_t L_22 = __this->____size;
		int32_t L_23 = ___0_capacity;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_24 = __this->____size;
		G_B7_0 = L_24;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_25 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
// Method Definition Index: 11527
// Method Definition Index: 11528
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4A8990345304F038BC2D5F79896D4BED8CC2CD82 (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
// Method Definition Index: 60428
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_m2733AFDE89B7B2489A1BDA8AED77CB198FB6AE6E (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* ___0_tree, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* L_0 = ___0_tree;
		__this->____tree = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tree), (void*)L_0);
		RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* L_1 = ___0_tree;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		__this->____version = L_2;
		__this->____index = 0;
		RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* L_3 = ___0_tree;
		NullCheck(L_3);
		int32_t L_4 = L_3->___root;
		__this->____mainTreeNodeId = L_4;
		int32_t* L_5 = (int32_t*)(&__this->____current);
		il2cpp_codegen_initobj(L_5, sizeof(int32_t));
		return;
	}
}
// Method Definition Index: 60429
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_m464484068CE1D76DCBFD781DDD4C8D310620B4DA (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* ___0_tree, int32_t ___1_position, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* L_0 = ___0_tree;
		__this->____tree = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tree), (void*)L_0);
		RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* L_1 = ___0_tree;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		__this->____version = L_2;
		int32_t L_3 = ___1_position;
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		__this->____index = 0;
		RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* L_4 = ___0_tree;
		NullCheck(L_4);
		int32_t L_5 = L_4->___root;
		__this->____mainTreeNodeId = L_5;
		goto IL_0050;
	}

IL_002b:
	{
		RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* L_6 = ___0_tree;
		int32_t L_7 = ___1_position;
		int32_t* L_8 = (int32_t*)(&__this->____mainTreeNodeId);
		NullCheck(L_6);
		int32_t L_9;
		L_9 = RBTree_1_ComputeNodeByIndex_m6AC21A1EB09BF6660EF47F4D771F47534F2F9751(L_6, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), L_8, NULL);
		__this->____index = L_9;
		int32_t L_10 = __this->____index;
		if (L_10)
		{
			goto IL_0050;
		}
	}
	{
		Exception_t* L_11;
		L_11 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(((int32_t)13), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0050:
	{
		int32_t* L_12 = (int32_t*)(&__this->____current);
		il2cpp_codegen_initobj(L_12, sizeof(int32_t));
		return;
	}
}
// Method Definition Index: 60430
// Method Definition Index: 60431
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTreeEnumerator_MoveNext_mB00AE8BACE08D31B8BBB6420BC48380D35B58173 (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____version;
		RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* L_1 = __this->____tree;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_EnumeratorModified_m8343A0E4D50C5143F6A15F0D562AB7838A3A96D1(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0019:
	{
		RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* L_4 = __this->____tree;
		int32_t* L_5 = (int32_t*)(&__this->____index);
		int32_t* L_6 = (int32_t*)(&__this->____mainTreeNodeId);
		NullCheck(L_4);
		bool L_7;
		L_7 = RBTree_1_Successor_mBE6CC011CC22FE54A564CB8AE8247BC43146D3EE(L_4, L_5, L_6, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* L_8 = __this->____tree;
		int32_t L_9 = __this->____index;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(L_8, L_9, NULL);
		__this->____current = L_10;
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool RBTreeEnumerator_MoveNext_mB00AE8BACE08D31B8BBB6420BC48380D35B58173_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115>(__this);
	bool _returnValue;
	_returnValue = RBTreeEnumerator_MoveNext_mB00AE8BACE08D31B8BBB6420BC48380D35B58173(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 60432
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTreeEnumerator_get_Current_mCB9EE3BDCE8D688E0B6EA03B14E5D55ABF7E1325 (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t RBTreeEnumerator_get_Current_mCB9EE3BDCE8D688E0B6EA03B14E5D55ABF7E1325_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115>(__this);
	int32_t _returnValue;
	_returnValue = RBTreeEnumerator_get_Current_mCB9EE3BDCE8D688E0B6EA03B14E5D55ABF7E1325_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 60433
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_m51A6150BF88CB14DDE97B1EF33342869AEA55F6C (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0;
		L_0 = RBTreeEnumerator_get_Current_mCB9EE3BDCE8D688E0B6EA03B14E5D55ABF7E1325_inline(__this, NULL);
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_m51A6150BF88CB14DDE97B1EF33342869AEA55F6C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115>(__this);
	RuntimeObject* _returnValue;
	_returnValue = RBTreeEnumerator_System_Collections_IEnumerator_get_Current_m51A6150BF88CB14DDE97B1EF33342869AEA55F6C(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 60434
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m6EE5A4DE7A3C8DE01E59B4FACEE2DFD7F3FC45F4 (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____version;
		RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* L_1 = __this->____tree;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_EnumeratorModified_m8343A0E4D50C5143F6A15F0D562AB7838A3A96D1(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0019:
	{
		__this->____index = 0;
		RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* L_4 = __this->____tree;
		NullCheck(L_4);
		int32_t L_5 = L_4->___root;
		__this->____mainTreeNodeId = L_5;
		int32_t* L_6 = (int32_t*)(&__this->____current);
		il2cpp_codegen_initobj(L_6, sizeof(int32_t));
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m6EE5A4DE7A3C8DE01E59B4FACEE2DFD7F3FC45F4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115>(__this);
	RBTreeEnumerator_System_Collections_IEnumerator_Reset_m6EE5A4DE7A3C8DE01E59B4FACEE2DFD7F3FC45F4(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 60428
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_mFF09CA916CAF9842895161A5CCE9B5F6052358DE_gshared (RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF* __this, RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* ___0_tree, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* L_0 = ___0_tree;
		__this->____tree = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tree), (void*)L_0);
		RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* L_1 = ___0_tree;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		__this->____version = L_2;
		__this->____index = 0;
		RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* L_3 = ___0_tree;
		NullCheck(L_3);
		int32_t L_4 = L_3->___root;
		__this->____mainTreeNodeId = L_4;
		Il2CppSharedGenericObject** L_5 = (Il2CppSharedGenericObject**)(&__this->____current);
		il2cpp_codegen_initobj(L_5, sizeof(Il2CppSharedGenericObject*));
		return;
	}
}
// Method Definition Index: 60429
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_m69CBDF7BBB263D821E7F9F3F706D08BD240309BD_gshared (RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF* __this, RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* ___0_tree, int32_t ___1_position, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* L_0 = ___0_tree;
		__this->____tree = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tree), (void*)L_0);
		RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* L_1 = ___0_tree;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		__this->____version = L_2;
		int32_t L_3 = ___1_position;
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		__this->____index = 0;
		RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* L_4 = ___0_tree;
		NullCheck(L_4);
		int32_t L_5 = L_4->___root;
		__this->____mainTreeNodeId = L_5;
		goto IL_0050;
	}

IL_002b:
	{
		RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* L_6 = ___0_tree;
		int32_t L_7 = ___1_position;
		int32_t* L_8 = (int32_t*)(&__this->____mainTreeNodeId);
		NullCheck(L_6);
		int32_t L_9;
		L_9 = RBTree_1_ComputeNodeByIndex_m35534B37511AF06371695E0CB5616BDB7E8E8EFD(L_6, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), L_8, NULL);
		__this->____index = L_9;
		int32_t L_10 = __this->____index;
		if (L_10)
		{
			goto IL_0050;
		}
	}
	{
		Exception_t* L_11;
		L_11 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(((int32_t)13), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0050:
	{
		Il2CppSharedGenericObject** L_12 = (Il2CppSharedGenericObject**)(&__this->____current);
		il2cpp_codegen_initobj(L_12, sizeof(Il2CppSharedGenericObject*));
		return;
	}
}
// Method Definition Index: 60430
// Method Definition Index: 60431
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTreeEnumerator_MoveNext_m81963E6532BC9A9B8B168732E868E47314C7B1AD_gshared (RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____version;
		RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* L_1 = __this->____tree;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_EnumeratorModified_m8343A0E4D50C5143F6A15F0D562AB7838A3A96D1(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0019:
	{
		RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* L_4 = __this->____tree;
		int32_t* L_5 = (int32_t*)(&__this->____index);
		int32_t* L_6 = (int32_t*)(&__this->____mainTreeNodeId);
		NullCheck(L_4);
		bool L_7;
		L_7 = RBTree_1_Successor_mD782B968CE5256E83614B6E8445F37F5F9A9592B(L_4, L_5, L_6, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* L_8 = __this->____tree;
		int32_t L_9 = __this->____index;
		NullCheck(L_8);
		Il2CppSharedGenericObject* L_10;
		L_10 = RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99(L_8, L_9, NULL);
		__this->____current = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____current), (void*)L_10);
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool RBTreeEnumerator_MoveNext_m81963E6532BC9A9B8B168732E868E47314C7B1AD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF>(__this);
	bool _returnValue;
	_returnValue = RBTreeEnumerator_MoveNext_m81963E6532BC9A9B8B168732E868E47314C7B1AD(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 60432
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* RBTreeEnumerator_get_Current_mCA7EABFD3BB38F4E43C81EB2C51698DA685F4728_gshared (RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Il2CppSharedGenericObject* RBTreeEnumerator_get_Current_mCA7EABFD3BB38F4E43C81EB2C51698DA685F4728_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF>(__this);
	Il2CppSharedGenericObject* _returnValue;
	_returnValue = RBTreeEnumerator_get_Current_mCA7EABFD3BB38F4E43C81EB2C51698DA685F4728_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 60433
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mBAE1BA5BCC8CB428F7A30CA8F4F6B461F335E502_gshared (RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = RBTreeEnumerator_get_Current_mCA7EABFD3BB38F4E43C81EB2C51698DA685F4728_inline(__this, NULL);
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mBAE1BA5BCC8CB428F7A30CA8F4F6B461F335E502_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF>(__this);
	RuntimeObject* _returnValue;
	_returnValue = RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mBAE1BA5BCC8CB428F7A30CA8F4F6B461F335E502(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 60434
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m735ED42F433ED59EB4B5B59651A8EDE7FCDD3AB8_gshared (RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____version;
		RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* L_1 = __this->____tree;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_EnumeratorModified_m8343A0E4D50C5143F6A15F0D562AB7838A3A96D1(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0019:
	{
		__this->____index = 0;
		RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* L_4 = __this->____tree;
		NullCheck(L_4);
		int32_t L_5 = L_4->___root;
		__this->____mainTreeNodeId = L_5;
		Il2CppSharedGenericObject** L_6 = (Il2CppSharedGenericObject**)(&__this->____current);
		il2cpp_codegen_initobj(L_6, sizeof(Il2CppSharedGenericObject*));
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m735ED42F433ED59EB4B5B59651A8EDE7FCDD3AB8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF>(__this);
	RBTreeEnumerator_System_Collections_IEnumerator_Reset_m735ED42F433ED59EB4B5B59651A8EDE7FCDD3AB8(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 60428
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_m4F958B5E04B28EDEA0C7B8FB8E7CF4ED0739BBEB_fshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* ___0_tree, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	//<source_info:<no-source>:1>
	{
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_0 = ___0_tree;
		il2cpp_codegen_write_field_data<RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_0);
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_1 = ___0_tree;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_2);
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), 0);
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_3 = ___0_tree;
		NullCheck(L_3);
		int32_t L_4 = L_3->___root;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_4);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))), SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
		return;
	}
}
// Method Definition Index: 60429
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_mC7027B6747A32BD6A978E0DA6DE74FA6DB6AEA5C_fshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* ___0_tree, int32_t ___1_position, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	//<source_info:<no-source>:1>
	{
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_0 = ___0_tree;
		il2cpp_codegen_write_field_data<RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_0);
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_1 = ___0_tree;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_2);
		int32_t L_3 = ___1_position;
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), 0);
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_4 = ___0_tree;
		NullCheck(L_4);
		int32_t L_5 = L_4->___root;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_5);
		goto IL_0050;
	}

IL_002b:
	{
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_6 = ___0_tree;
		int32_t L_7 = ___1_position;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))(L_6, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), (((int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_8);
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if (L_9)
		{
			goto IL_0050;
		}
	}
	{
		Exception_t* L_10;
		L_10 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(((int32_t)13), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0050:
	{
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))), SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
		return;
	}
}
// Method Definition Index: 60430
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_Dispose_m44368C76E9C0F3A17DB3342C808CA8F9582C5955_fshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator_Dispose_m44368C76E9C0F3A17DB3342C808CA8F9582C5955_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4>(__this);
	RBTreeEnumerator_Dispose_m44368C76E9C0F3A17DB3342C808CA8F9582C5955(_thisAdjusted, method);
}
// Method Definition Index: 60431
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTreeEnumerator_MoveNext_mB5562C7DBD432B39AC6CDE17139006D3141A2E7E_fshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_1 = *(RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_EnumeratorModified_m8343A0E4D50C5143F6A15F0D562AB7838A3A96D1(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0019:
	{
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_4 = *(RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		NullCheck(L_4);
		bool L_5;
		L_5 = ((  bool (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))(L_4, (((int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)))), (((int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_6 = *(RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		NullCheck(L_6);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_6, L_7, (Il2CppFullySharedGenericAny*)L_8);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),4), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), L_8, SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool RBTreeEnumerator_MoveNext_mB5562C7DBD432B39AC6CDE17139006D3141A2E7E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4>(__this);
	bool _returnValue;
	_returnValue = RBTreeEnumerator_MoveNext_mB5562C7DBD432B39AC6CDE17139006D3141A2E7E(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 60432
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_get_Current_m55E7496F0199640CB43772D3C21F0A10462AE734_fshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator_get_Current_m55E7496F0199640CB43772D3C21F0A10462AE734_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4>(__this);
	RBTreeEnumerator_get_Current_m55E7496F0199640CB43772D3C21F0A10462AE734_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
// Method Definition Index: 60433
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mD023E34D3906399CCC1A8E8AB645C5C9810898FB_fshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
	//<source_info:<no-source>:1>
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10), __this, (Il2CppFullySharedGenericAny*)L_0);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mD023E34D3906399CCC1A8E8AB645C5C9810898FB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4>(__this);
	RuntimeObject* _returnValue;
	_returnValue = RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mD023E34D3906399CCC1A8E8AB645C5C9810898FB(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 60434
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m30C1ACC2356659BDDEC767619AA0D8B5EA06E470_fshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_1 = *(RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_EnumeratorModified_m8343A0E4D50C5143F6A15F0D562AB7838A3A96D1(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0019:
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), 0);
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_4 = *(RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		NullCheck(L_4);
		int32_t L_5 = L_4->___root;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_5);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))), SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m30C1ACC2356659BDDEC767619AA0D8B5EA06E470_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4>(__this);
	RBTreeEnumerator_System_Collections_IEnumerator_Reset_m30C1ACC2356659BDDEC767619AA0D8B5EA06E470(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 60360
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1__ctor_m94D0C9F06C7211AEA1E7596028FE173C1C787497 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_accessMethod, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_accessMethod;
		__this->____accessMethod = L_0;
		RBTree_1_InitTree_mCF091A660A304A14A09AB4C817AF26E1585EA323(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 60361
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_InitTree_mCF091A660A304A14A09AB4C817AF26E1585EA323 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		__this->___root = 0;
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = (TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3*)(TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)((int32_t)32));
		__this->____pageTable = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageTable), (void*)L_0);
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_1 = __this->____pageTable;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_2, ((int32_t)32))), 1))/((int32_t)32))));
		__this->____pageTableMap = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageTableMap), (void*)L_3);
		__this->____inUsePageCount = 0;
		__this->____nextFreePageLine = 0;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_4;
		L_4 = RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA(__this, ((int32_t)32), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_5 = __this->____pageTable;
		NullCheck(L_5);
		int32_t L_6 = 0;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_8 = L_7->____slots;
		NullCheck(L_8);
		((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->____nodeColor = 1;
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_9 = __this->____pageTable;
		NullCheck(L_9);
		int32_t L_10 = 0;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = L_11->____slotMap;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_13 = __this->____pageTable;
		NullCheck(L_13);
		int32_t L_14 = 0;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		TreePage_set_InUseCount_m8FA6467AC39561006A23E87B162BA73D585BADDA_inline(L_15, 1, NULL);
		__this->____inUseNodeCount = 1;
		__this->____inUseSatelliteTreeCount = 0;
		return;
	}
}
// Method Definition Index: 60362
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_FreePage_m428135A97F5257D955C88324EEC40540887A061C (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* ___0_page, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_0 = ___0_page;
		RBTree_1_MarkPageFree_mDFB2F31CD9B41FEAC6E15E8798687212440448EB(__this, L_0, NULL);
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_1 = __this->____pageTable;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_2 = ___0_page;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_inline(L_2, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, NULL);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*)NULL);
		int32_t L_4 = __this->____inUsePageCount;
		__this->____inUsePageCount = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		return;
	}
}
// Method Definition Index: 60363
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	{
		int32_t L_0;
		L_0 = RBTree_1_GetIndexOfPageWithFreeSlot_m44B83E5017AC18424A1CABBB5B69F4334BCACABA(__this, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_2 = __this->____pageTable;
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_size;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_5 = (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
		TreePage__ctor_m44F8EC22FAAB8146AC4E2D6E299F6A122DE40C83(L_5, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*)L_5);
		int32_t L_6 = V_0;
		__this->____nextFreePageLine = ((int32_t)(L_6/((int32_t)32)));
		goto IL_00a9;
	}

IL_0029:
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_7 = __this->____pageTable;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_9 = (TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3*)(TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)((int32_t)il2cpp_codegen_multiply(L_8, 2)));
		V_1 = L_9;
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_10 = __this->____pageTable;
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_11 = V_1;
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_12 = __this->____pageTable;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, 0, (RuntimeArray*)L_11, 0, L_13, NULL);
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_15, ((int32_t)32))), 1))/((int32_t)32))));
		V_2 = L_16;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->____pageTableMap;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->____pageTableMap;
		NullCheck(L_19);
		int32_t L_20 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_19)->max_length),NULL));
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_17, 0, (RuntimeArray*)L_18, 0, L_20, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____pageTableMap;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		__this->____nextFreePageLine = L_22;
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_23 = __this->____pageTable;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		V_0 = L_24;
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_25 = V_1;
		__this->____pageTable = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageTable), (void*)L_25);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_2;
		__this->____pageTableMap = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageTableMap), (void*)L_26);
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_27 = __this->____pageTable;
		int32_t L_28 = V_0;
		int32_t L_29 = ___0_size;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_30 = (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
		TreePage__ctor_m44F8EC22FAAB8146AC4E2D6E299F6A122DE40C83(L_30, L_29, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*)L_30);
	}

IL_00a9:
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_31 = __this->____pageTable;
		int32_t L_32 = V_0;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = V_0;
		NullCheck(L_34);
		TreePage_set_PageId_m60FCE18172BAC6C1B1479026018D6422F2B30A70_inline(L_34, L_35, NULL);
		int32_t L_36 = __this->____inUsePageCount;
		__this->____inUsePageCount = ((int32_t)il2cpp_codegen_add(L_36, 1));
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_37 = __this->____pageTable;
		int32_t L_38 = V_0;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		return L_40;
	}
}
// Method Definition Index: 60364
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_MarkPageFull_mC50FFD42DDEC1D8C70AB4B76EA8E765F43D1A138 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* ___0_page, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____pageTableMap;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_1 = ___0_page;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_inline(L_1, NULL);
		NullCheck(L_0);
		int32_t* L_3 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_2/((int32_t)32))))));
		int32_t L_4 = il2cpp_codegen_ldind<int32_t, int32_t>(L_3);
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_5 = ___0_page;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_inline(L_5, NULL);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_3, (int32_t)((int32_t)(L_4|((int32_t)(1<<((int32_t)(((int32_t)(L_6%((int32_t)32)))&((int32_t)31))))))));
		return;
	}
}
// Method Definition Index: 60365
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_MarkPageFree_mDFB2F31CD9B41FEAC6E15E8798687212440448EB (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* ___0_page, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____pageTableMap;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_1 = ___0_page;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_inline(L_1, NULL);
		NullCheck(L_0);
		int32_t* L_3 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_2/((int32_t)32))))));
		int32_t L_4 = il2cpp_codegen_ldind<int32_t, int32_t>(L_3);
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_5 = ___0_page;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_inline(L_5, NULL);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_3, (int32_t)((int32_t)(L_4&((~((int32_t)(1<<((int32_t)(((int32_t)(L_6%((int32_t)32)))&((int32_t)31))))))))));
		return;
	}
}
// Method Definition Index: 60366
// Method Definition Index: 60367
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_FreeNode_m142FC91FA594DC91799F5231F7AE945DCC6922FD (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		int32_t L_4 = ___0_nodeId;
		V_1 = ((int32_t)(L_4&((int32_t)65535)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_5 = V_0;
		NullCheck(L_5);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_6 = L_5->____slots;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_initobj(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), sizeof(Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_8 = V_0;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->____slotMap;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t* L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/((int32_t)32))))));
		int32_t L_12 = il2cpp_codegen_ldind<int32_t, int32_t>(L_11);
		int32_t L_13 = V_1;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_11, (int32_t)((int32_t)(L_12&((~((int32_t)(1<<((int32_t)(((int32_t)(L_13%((int32_t)32)))&((int32_t)31))))))))));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_14 = V_0;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = TreePage_get_InUseCount_mEA19EFEDD63621D601EFFFE57C3D3297FC357EA4_inline(L_15, NULL);
		V_2 = L_16;
		int32_t L_17 = V_2;
		NullCheck(L_15);
		TreePage_set_InUseCount_m8FA6467AC39561006A23E87B162BA73D585BADDA_inline(L_15, ((int32_t)il2cpp_codegen_subtract(L_17, 1)), NULL);
		int32_t L_18 = __this->____inUseNodeCount;
		__this->____inUseNodeCount = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = TreePage_get_InUseCount_mEA19EFEDD63621D601EFFFE57C3D3297FC357EA4_inline(L_19, NULL);
		if (L_20)
		{
			goto IL_0071;
		}
	}
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_21 = V_0;
		RBTree_1_FreePage_m428135A97F5257D955C88324EEC40540887A061C(__this, L_21, NULL);
		return;
	}

IL_0071:
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = TreePage_get_InUseCount_mEA19EFEDD63621D601EFFFE57C3D3297FC357EA4_inline(L_22, NULL);
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_24 = V_0;
		NullCheck(L_24);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_25 = L_24->____slots;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_26, 1))))))
		{
			goto IL_008a;
		}
	}
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_27 = V_0;
		RBTree_1_MarkPageFree_mDFB2F31CD9B41FEAC6E15E8798687212440448EB(__this, L_27, NULL);
	}

IL_008a:
	{
		return;
	}
}
// Method Definition Index: 60368
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexOfPageWithFreeSlot_m44B83E5017AC18424A1CABBB5B69F4334BCACABA (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, bool ___0_allocatedPage, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		int32_t L_0 = __this->____nextFreePageLine;
		V_0 = L_0;
		V_1 = (-1);
		goto IL_0073;
	}

IL_000b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____pageTableMap;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((!(((uint32_t)L_4) < ((uint32_t)(-1)))))
		{
			goto IL_006f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____pageTableMap;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		goto IL_006a;
	}

IL_0021:
	{
		uint32_t L_9 = V_2;
		uint32_t L_10 = V_2;
		V_3 = ((int32_t)(((~((int32_t)L_9)))&((int32_t)il2cpp_codegen_add((int32_t)L_10, 1))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____pageTableMap;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int64_t L_15 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_14,NULL));
		uint32_t L_16 = V_3;
		uint64_t L_17 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_16,NULL));
		if (!((int64_t)(L_15&(int64_t)L_17)))
		{
			goto IL_003d;
		}
	}
	{
		Exception_t* L_18;
		L_18 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_003d:
	{
		int32_t L_19 = V_0;
		uint32_t L_20 = V_3;
		int32_t L_21;
		L_21 = RBTree_1_GetIntValueFromBitMap_m48B51C8E9FEE3BC3018EEABB1B7171C27550AF56(L_20, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_19, ((int32_t)32))), L_21));
		bool L_22 = ___0_allocatedPage;
		if (!L_22)
		{
			goto IL_0058;
		}
	}
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_23 = __this->____pageTable;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		if (!L_26)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_27 = V_1;
		return L_27;
	}

IL_0058:
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_28 = __this->____pageTable;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		if (L_31)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_32 = V_1;
		return L_32;
	}

IL_0064:
	{
		V_1 = (-1);
		uint32_t L_33 = V_2;
		uint32_t L_34 = V_3;
		V_2 = ((int32_t)((int32_t)L_33|(int32_t)L_34));
	}

IL_006a:
	{
		uint32_t L_35 = V_2;
		if (((int32_t)((int32_t)L_35^(-1))))
		{
			goto IL_0021;
		}
	}

IL_006f:
	{
		int32_t L_36 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_0073:
	{
		int32_t L_37 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____pageTableMap;
		NullCheck(L_38);
		int32_t L_39 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_38)->max_length),NULL));
		if ((((int32_t)L_37) < ((int32_t)L_39)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_40 = __this->____nextFreePageLine;
		if (!L_40)
		{
			goto IL_0095;
		}
	}
	{
		__this->____nextFreePageLine = 0;
		bool L_41 = ___0_allocatedPage;
		int32_t L_42;
		L_42 = RBTree_1_GetIndexOfPageWithFreeSlot_m44B83E5017AC18424A1CABBB5B69F4334BCACABA(__this, L_41, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_1 = L_42;
	}

IL_0095:
	{
		int32_t L_43 = V_1;
		return L_43;
	}
}
// Method Definition Index: 60369
// Method Definition Index: 60370
// Method Definition Index: 60371
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetNewNode_mF0CCB84B822853BFDC6AFE48116DDA1F77F10568 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*)NULL;
		int32_t L_0;
		L_0 = RBTree_1_GetIndexOfPageWithFreeSlot_m44B83E5017AC18424A1CABBB5B69F4334BCACABA(__this, (bool)1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_1 = L_0;
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_001c;
		}
	}
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_2 = __this->____pageTable;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		goto IL_00a5;
	}

IL_001c:
	{
		int32_t L_6 = __this->____inUsePageCount;
		if ((((int32_t)L_6) >= ((int32_t)4)))
		{
			goto IL_0030;
		}
	}
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_7;
		L_7 = RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA(__this, ((int32_t)32), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_0 = L_7;
		goto IL_00a5;
	}

IL_0030:
	{
		int32_t L_8 = __this->____inUsePageCount;
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)32))))
		{
			goto IL_0048;
		}
	}
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_9;
		L_9 = RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA(__this, ((int32_t)256), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_0 = L_9;
		goto IL_00a5;
	}

IL_0048:
	{
		int32_t L_10 = __this->____inUsePageCount;
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0063;
		}
	}
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_11;
		L_11 = RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA(__this, ((int32_t)1024), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_0 = L_11;
		goto IL_00a5;
	}

IL_0063:
	{
		int32_t L_12 = __this->____inUsePageCount;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)4096))))
		{
			goto IL_007e;
		}
	}
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_13;
		L_13 = RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA(__this, ((int32_t)4096), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_0 = L_13;
		goto IL_00a5;
	}

IL_007e:
	{
		int32_t L_14 = __this->____inUsePageCount;
		if ((((int32_t)L_14) >= ((int32_t)((int32_t)32768))))
		{
			goto IL_0099;
		}
	}
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_15;
		L_15 = RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA(__this, ((int32_t)8192), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_0 = L_15;
		goto IL_00a5;
	}

IL_0099:
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_16;
		L_16 = RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA(__this, ((int32_t)65536), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_0 = L_16;
	}

IL_00a5:
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = TreePage_AllocSlot_m98CE7C69F3225831EDC1F758AC133AFDBD631329(L_17, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		V_2 = L_18;
		int32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_00b8;
		}
	}
	{
		Exception_t* L_20;
		L_20 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_00b8:
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_21 = V_0;
		NullCheck(L_21);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_22 = L_21->____slots;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_inline(L_24, NULL);
		int32_t L_26 = V_2;
		((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->____selfId = ((int32_t)(((int32_t)(L_25<<((int32_t)16)))|L_26));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_27 = V_0;
		NullCheck(L_27);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_28 = L_27->____slots;
		int32_t L_29 = V_2;
		NullCheck(L_28);
		((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->____subTreeSize = 1;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_30 = V_0;
		NullCheck(L_30);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_31 = L_30->____slots;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		int32_t L_33 = ___0_key;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->____keyOfNode = L_33;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_34 = V_0;
		NullCheck(L_34);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_35 = L_34->____slots;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		int32_t L_37 = ((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->____selfId;
		return L_37;
	}
}
// Method Definition Index: 60372
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Successor_mD725A36AE3B97C64315EA2030135F2ED92601A7B (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_x_id;
		int32_t L_1;
		L_1 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = ___0_x_id;
		int32_t L_3;
		L_3 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_2, NULL);
		int32_t L_4;
		L_4 = RBTree_1_Minimum_m504331C88F6C6D70AA7930B661AC172AC26E1844(__this, L_3, NULL);
		return L_4;
	}

IL_0017:
	{
		int32_t L_5 = ___0_x_id;
		int32_t L_6;
		L_6 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_5, NULL);
		V_0 = L_6;
		goto IL_002c;
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		___0_x_id = L_7;
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_8, NULL);
		V_0 = L_9;
	}

IL_002c:
	{
		int32_t L_10 = V_0;
		if (!L_10)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_11 = ___0_x_id;
		int32_t L_12 = V_0;
		int32_t L_13;
		L_13 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_12, NULL);
		if ((((int32_t)L_11) == ((int32_t)L_13)))
		{
			goto IL_0021;
		}
	}

IL_0039:
	{
		int32_t L_14 = V_0;
		return L_14;
	}
}
// Method Definition Index: 60373
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTree_1_Successor_mBE6CC011CC22FE54A564CB8AE8247BC43146D3EE (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t* ___0_nodeId, int32_t* ___1_mainTreeNodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t* L_0 = ___0_nodeId;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t* L_2 = ___0_nodeId;
		int32_t* L_3 = ___1_mainTreeNodeId;
		int32_t L_4 = il2cpp_codegen_ldind<int32_t, int32_t>(L_3);
		int32_t L_5;
		L_5 = RBTree_1_Minimum_m504331C88F6C6D70AA7930B661AC172AC26E1844(__this, L_4, NULL);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_2, (int32_t)L_5);
		int32_t* L_6 = ___1_mainTreeNodeId;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_6, (int32_t)0);
		goto IL_0032;
	}

IL_0013:
	{
		int32_t* L_7 = ___0_nodeId;
		int32_t* L_8 = ___0_nodeId;
		int32_t L_9 = il2cpp_codegen_ldind<int32_t, int32_t>(L_8);
		int32_t L_10;
		L_10 = RBTree_1_Successor_mD725A36AE3B97C64315EA2030135F2ED92601A7B(__this, L_9, NULL);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_7, (int32_t)L_10);
		int32_t* L_11 = ___0_nodeId;
		int32_t L_12 = il2cpp_codegen_ldind<int32_t, int32_t>(L_11);
		if (L_12)
		{
			goto IL_0032;
		}
	}
	{
		int32_t* L_13 = ___1_mainTreeNodeId;
		int32_t L_14 = il2cpp_codegen_ldind<int32_t, int32_t>(L_13);
		if (!L_14)
		{
			goto IL_0032;
		}
	}
	{
		int32_t* L_15 = ___0_nodeId;
		int32_t* L_16 = ___1_mainTreeNodeId;
		int32_t L_17 = il2cpp_codegen_ldind<int32_t, int32_t>(L_16);
		int32_t L_18;
		L_18 = RBTree_1_Successor_mD725A36AE3B97C64315EA2030135F2ED92601A7B(__this, L_17, NULL);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_15, (int32_t)L_18);
		int32_t* L_19 = ___1_mainTreeNodeId;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_19, (int32_t)0);
	}

IL_0032:
	{
		int32_t* L_20 = ___0_nodeId;
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(L_20);
		if (!L_21)
		{
			goto IL_0062;
		}
	}
	{
		int32_t* L_22 = ___0_nodeId;
		int32_t L_23 = il2cpp_codegen_ldind<int32_t, int32_t>(L_22);
		int32_t L_24;
		L_24 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_23, NULL);
		if (!L_24)
		{
			goto IL_0060;
		}
	}
	{
		int32_t* L_25 = ___1_mainTreeNodeId;
		int32_t L_26 = il2cpp_codegen_ldind<int32_t, int32_t>(L_25);
		if (!L_26)
		{
			goto IL_004c;
		}
	}
	{
		Exception_t* L_27;
		L_27 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(((int32_t)21), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, method);
	}

IL_004c:
	{
		int32_t* L_28 = ___1_mainTreeNodeId;
		int32_t* L_29 = ___0_nodeId;
		int32_t L_30 = il2cpp_codegen_ldind<int32_t, int32_t>(L_29);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_28, (int32_t)L_30);
		int32_t* L_31 = ___0_nodeId;
		int32_t* L_32 = ___0_nodeId;
		int32_t L_33 = il2cpp_codegen_ldind<int32_t, int32_t>(L_32);
		int32_t L_34;
		L_34 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_33, NULL);
		int32_t L_35;
		L_35 = RBTree_1_Minimum_m504331C88F6C6D70AA7930B661AC172AC26E1844(__this, L_34, NULL);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_31, (int32_t)L_35);
	}

IL_0060:
	{
		return (bool)1;
	}

IL_0062:
	{
		return (bool)0;
	}
}
// Method Definition Index: 60374
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Minimum_m504331C88F6C6D70AA7930B661AC172AC26E1844 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_000b;
	}

IL_0002:
	{
		int32_t L_0 = ___0_x_id;
		int32_t L_1;
		L_1 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_0, NULL);
		___0_x_id = L_1;
	}

IL_000b:
	{
		int32_t L_2 = ___0_x_id;
		int32_t L_3;
		L_3 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_2, NULL);
		if (L_3)
		{
			goto IL_0002;
		}
	}
	{
		int32_t L_4 = ___0_x_id;
		return L_4;
	}
}
// Method Definition Index: 60375
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_LeftRotate_mD49CD676DF4B79C1B56C4158BF78B239F3EBF7EE (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B12_2 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B11_2 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B13_3 = NULL;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B17_2 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B16_2 = NULL;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B18_3 = NULL;
	{
		int32_t L_0 = ___1_x_id;
		int32_t L_1;
		L_1 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = ___1_x_id;
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_3, NULL);
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_2, L_4, NULL);
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_5, NULL);
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_7, NULL);
		int32_t L_9 = ___1_x_id;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_8, L_9, NULL);
	}

IL_002d:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_x_id;
		int32_t L_12;
		L_12 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_11, NULL);
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_10, L_12, NULL);
		int32_t L_13 = ___1_x_id;
		int32_t L_14;
		L_14 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_13, NULL);
		if (L_14)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_15 = ___0_root_id;
		if (L_15)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_16 = V_0;
		__this->___root = L_16;
		goto IL_0099;
	}

IL_0050:
	{
		int32_t L_17 = ___2_mainTreeNode;
		int32_t L_18 = V_0;
		RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8(__this, L_17, L_18, NULL);
		int32_t L_19 = ___2_mainTreeNode;
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_20, NULL);
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_19, L_21, NULL);
		int32_t L_22 = V_0;
		___0_root_id = L_22;
		goto IL_0099;
	}

IL_006b:
	{
		int32_t L_23 = ___1_x_id;
		int32_t L_24 = ___1_x_id;
		int32_t L_25;
		L_25 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_24, NULL);
		int32_t L_26;
		L_26 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_25, NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_26))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_27 = ___1_x_id;
		int32_t L_28;
		L_28 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_27, NULL);
		int32_t L_29 = V_0;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_28, L_29, NULL);
		goto IL_0099;
	}

IL_008b:
	{
		int32_t L_30 = ___1_x_id;
		int32_t L_31;
		L_31 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_30, NULL);
		int32_t L_32 = V_0;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_31, L_32, NULL);
	}

IL_0099:
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___1_x_id;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_33, L_34, NULL);
		int32_t L_35 = ___1_x_id;
		int32_t L_36 = V_0;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_35, L_36, NULL);
		int32_t L_37 = ___1_x_id;
		if (!L_37)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_38 = ___1_x_id;
		int32_t L_39 = ___1_x_id;
		int32_t L_40;
		L_40 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_39, NULL);
		int32_t L_41;
		L_41 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_40, NULL);
		int32_t L_42 = ___1_x_id;
		int32_t L_43;
		L_43 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_42, NULL);
		int32_t L_44;
		L_44 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_43, NULL);
		int32_t L_45 = ___1_x_id;
		int32_t L_46;
		L_46 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_45, NULL);
		if (!L_46)
		{
			G_B12_0 = ((int32_t)il2cpp_codegen_add(L_41, L_44));
			G_B12_1 = L_38;
			G_B12_2 = __this;
			goto IL_00e1;
		}
		G_B11_0 = ((int32_t)il2cpp_codegen_add(L_41, L_44));
		G_B11_1 = L_38;
		G_B11_2 = __this;
	}
	{
		int32_t L_47 = ___1_x_id;
		int32_t L_48;
		L_48 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_47, NULL);
		int32_t L_49;
		L_49 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_48, NULL);
		G_B13_0 = L_49;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		G_B13_3 = G_B11_2;
		goto IL_00e2;
	}

IL_00e1:
	{
		G_B13_0 = 1;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
	}

IL_00e2:
	{
		NullCheck(G_B13_3);
		RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55(G_B13_3, G_B13_2, ((int32_t)il2cpp_codegen_add(G_B13_1, G_B13_0)), NULL);
	}

IL_00e8:
	{
		int32_t L_50 = V_0;
		if (!L_50)
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_51 = V_0;
		int32_t L_52 = V_0;
		int32_t L_53;
		L_53 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_52, NULL);
		int32_t L_54;
		L_54 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_53, NULL);
		int32_t L_55 = V_0;
		int32_t L_56;
		L_56 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_55, NULL);
		int32_t L_57;
		L_57 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_56, NULL);
		int32_t L_58 = V_0;
		int32_t L_59;
		L_59 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_58, NULL);
		if (!L_59)
		{
			G_B17_0 = ((int32_t)il2cpp_codegen_add(L_54, L_57));
			G_B17_1 = L_51;
			G_B17_2 = __this;
			goto IL_0120;
		}
		G_B16_0 = ((int32_t)il2cpp_codegen_add(L_54, L_57));
		G_B16_1 = L_51;
		G_B16_2 = __this;
	}
	{
		int32_t L_60 = V_0;
		int32_t L_61;
		L_61 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_60, NULL);
		int32_t L_62;
		L_62 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_61, NULL);
		G_B18_0 = L_62;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		goto IL_0121;
	}

IL_0120:
	{
		G_B18_0 = 1;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
	}

IL_0121:
	{
		NullCheck(G_B18_3);
		RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55(G_B18_3, G_B18_2, ((int32_t)il2cpp_codegen_add(G_B18_1, G_B18_0)), NULL);
	}

IL_0127:
	{
		int32_t L_63 = ___0_root_id;
		return L_63;
	}
}
// Method Definition Index: 60376
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B12_2 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B11_2 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B13_3 = NULL;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B17_2 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B16_2 = NULL;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B18_3 = NULL;
	{
		int32_t L_0 = ___1_x_id;
		int32_t L_1;
		L_1 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = ___1_x_id;
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_3, NULL);
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_2, L_4, NULL);
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_5, NULL);
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_7, NULL);
		int32_t L_9 = ___1_x_id;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_8, L_9, NULL);
	}

IL_002d:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_x_id;
		int32_t L_12;
		L_12 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_11, NULL);
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_10, L_12, NULL);
		int32_t L_13 = ___1_x_id;
		int32_t L_14;
		L_14 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_13, NULL);
		if (L_14)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_15 = ___0_root_id;
		if (L_15)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_16 = V_0;
		__this->___root = L_16;
		goto IL_0099;
	}

IL_0050:
	{
		int32_t L_17 = ___2_mainTreeNode;
		int32_t L_18 = V_0;
		RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8(__this, L_17, L_18, NULL);
		int32_t L_19 = ___2_mainTreeNode;
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_20, NULL);
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_19, L_21, NULL);
		int32_t L_22 = V_0;
		___0_root_id = L_22;
		goto IL_0099;
	}

IL_006b:
	{
		int32_t L_23 = ___1_x_id;
		int32_t L_24 = ___1_x_id;
		int32_t L_25;
		L_25 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_24, NULL);
		int32_t L_26;
		L_26 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_25, NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_26))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_27 = ___1_x_id;
		int32_t L_28;
		L_28 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_27, NULL);
		int32_t L_29 = V_0;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_28, L_29, NULL);
		goto IL_0099;
	}

IL_008b:
	{
		int32_t L_30 = ___1_x_id;
		int32_t L_31;
		L_31 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_30, NULL);
		int32_t L_32 = V_0;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_31, L_32, NULL);
	}

IL_0099:
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___1_x_id;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_33, L_34, NULL);
		int32_t L_35 = ___1_x_id;
		int32_t L_36 = V_0;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_35, L_36, NULL);
		int32_t L_37 = ___1_x_id;
		if (!L_37)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_38 = ___1_x_id;
		int32_t L_39 = ___1_x_id;
		int32_t L_40;
		L_40 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_39, NULL);
		int32_t L_41;
		L_41 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_40, NULL);
		int32_t L_42 = ___1_x_id;
		int32_t L_43;
		L_43 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_42, NULL);
		int32_t L_44;
		L_44 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_43, NULL);
		int32_t L_45 = ___1_x_id;
		int32_t L_46;
		L_46 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_45, NULL);
		if (!L_46)
		{
			G_B12_0 = ((int32_t)il2cpp_codegen_add(L_41, L_44));
			G_B12_1 = L_38;
			G_B12_2 = __this;
			goto IL_00e1;
		}
		G_B11_0 = ((int32_t)il2cpp_codegen_add(L_41, L_44));
		G_B11_1 = L_38;
		G_B11_2 = __this;
	}
	{
		int32_t L_47 = ___1_x_id;
		int32_t L_48;
		L_48 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_47, NULL);
		int32_t L_49;
		L_49 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_48, NULL);
		G_B13_0 = L_49;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		G_B13_3 = G_B11_2;
		goto IL_00e2;
	}

IL_00e1:
	{
		G_B13_0 = 1;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
	}

IL_00e2:
	{
		NullCheck(G_B13_3);
		RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55(G_B13_3, G_B13_2, ((int32_t)il2cpp_codegen_add(G_B13_1, G_B13_0)), NULL);
	}

IL_00e8:
	{
		int32_t L_50 = V_0;
		if (!L_50)
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_51 = V_0;
		int32_t L_52 = V_0;
		int32_t L_53;
		L_53 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_52, NULL);
		int32_t L_54;
		L_54 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_53, NULL);
		int32_t L_55 = V_0;
		int32_t L_56;
		L_56 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_55, NULL);
		int32_t L_57;
		L_57 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_56, NULL);
		int32_t L_58 = V_0;
		int32_t L_59;
		L_59 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_58, NULL);
		if (!L_59)
		{
			G_B17_0 = ((int32_t)il2cpp_codegen_add(L_54, L_57));
			G_B17_1 = L_51;
			G_B17_2 = __this;
			goto IL_0120;
		}
		G_B16_0 = ((int32_t)il2cpp_codegen_add(L_54, L_57));
		G_B16_1 = L_51;
		G_B16_2 = __this;
	}
	{
		int32_t L_60 = V_0;
		int32_t L_61;
		L_61 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_60, NULL);
		int32_t L_62;
		L_62 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_61, NULL);
		G_B18_0 = L_62;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		goto IL_0121;
	}

IL_0120:
	{
		G_B18_0 = 1;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
	}

IL_0121:
	{
		NullCheck(G_B18_3);
		RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55(G_B18_3, G_B18_2, ((int32_t)il2cpp_codegen_add(G_B18_1, G_B18_0)), NULL);
	}

IL_0127:
	{
		int32_t L_63 = ___0_root_id;
		return L_63;
	}
}
// Method Definition Index: 60377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBInsert_m0B2330653BCF5430989431DAC32328E6EBBAED4E (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNodeID, int32_t ___3_position, bool ___4_append, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B54_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		V_0 = 0;
		int32_t L_1 = ___0_root_id;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___0_root_id;
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		int32_t L_3 = __this->___root;
		G_B3_0 = L_3;
	}

IL_001c:
	{
		V_1 = G_B3_0;
		int32_t L_4 = __this->____accessMethod;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_01f8;
		}
	}
	{
		bool L_5 = ___4_append;
		if (L_5)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_01f0;
	}

IL_0035:
	{
		int32_t L_6 = V_1;
		RBTree_1_IncreaseSize_m613975F4AD06761B3DD9F26BC8162B71413A26C8(__this, L_6, NULL);
		int32_t L_7 = V_1;
		V_0 = L_7;
		int32_t L_8 = ___0_root_id;
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_9 = ___1_x_id;
		int32_t L_10;
		L_10 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_9, NULL);
		int32_t L_11 = V_1;
		int32_t L_12;
		L_12 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_11, NULL);
		int32_t L_13;
		L_13 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, __this, L_10, L_12);
		G_B9_0 = L_13;
		goto IL_006b;
	}

IL_0057:
	{
		int32_t L_14 = ___1_x_id;
		int32_t L_15;
		L_15 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_14, NULL);
		int32_t L_16 = V_1;
		int32_t L_17;
		L_17 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_16, NULL);
		int32_t L_18;
		L_18 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5, __this, L_15, L_17);
		G_B9_0 = L_18;
	}

IL_006b:
	{
		V_2 = G_B9_0;
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_20 = V_1;
		int32_t L_21;
		L_21 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_20, NULL);
		V_1 = L_21;
		goto IL_01f0;
	}

IL_007d:
	{
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_23 = V_1;
		int32_t L_24;
		L_24 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_23, NULL);
		V_1 = L_24;
		goto IL_01f0;
	}

IL_008e:
	{
		int32_t L_25 = ___0_root_id;
		if (!L_25)
		{
			goto IL_0098;
		}
	}
	{
		Exception_t* L_26;
		L_26 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, method);
	}

IL_0098:
	{
		int32_t L_27 = V_1;
		int32_t L_28;
		L_28 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_27, NULL);
		if (!L_28)
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_29 = V_1;
		int32_t L_30;
		L_30 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_29, NULL);
		int32_t L_31 = ___1_x_id;
		int32_t L_32 = V_1;
		int32_t L_33;
		L_33 = RBTree_1_RBInsert_m0B2330653BCF5430989431DAC32328E6EBBAED4E(__this, L_30, L_31, L_32, (-1), (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		___0_root_id = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_1;
		int32_t L_36;
		L_36 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_35, NULL);
		int32_t L_37;
		L_37 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_36, NULL);
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_34, L_37, NULL);
		goto IL_01ee;
	}

IL_00cd:
	{
		V_3 = 0;
		int32_t L_38 = V_1;
		int32_t L_39;
		L_39 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_38, NULL);
		int32_t L_40;
		L_40 = RBTree_1_GetNewNode_mF0CCB84B822853BFDC6AFE48116DDA1F77F10568(__this, L_39, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		V_3 = L_40;
		int32_t L_41 = __this->____inUseSatelliteTreeCount;
		__this->____inUseSatelliteTreeCount = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = V_3;
		int32_t L_43 = V_1;
		RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8(__this, L_42, L_43, NULL);
		int32_t L_44 = V_3;
		int32_t L_45 = V_1;
		int32_t L_46;
		L_46 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_45, NULL);
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_44, L_46, NULL);
		int32_t L_47 = V_3;
		int32_t L_48 = V_1;
		int32_t L_49;
		L_49 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_48, NULL);
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_47, L_49, NULL);
		int32_t L_50 = V_3;
		int32_t L_51 = V_1;
		int32_t L_52;
		L_52 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_51, NULL);
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_50, L_52, NULL);
		int32_t L_53 = V_3;
		int32_t L_54 = V_1;
		int32_t L_55;
		L_55 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_54, NULL);
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_53, L_55, NULL);
		int32_t L_56 = V_1;
		int32_t L_57;
		L_57 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_56, NULL);
		int32_t L_58;
		L_58 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_57, NULL);
		int32_t L_59 = V_1;
		if ((!(((uint32_t)L_58) == ((uint32_t)L_59))))
		{
			goto IL_014b;
		}
	}
	{
		int32_t L_60 = V_1;
		int32_t L_61;
		L_61 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_60, NULL);
		int32_t L_62 = V_3;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_61, L_62, NULL);
		goto IL_0169;
	}

IL_014b:
	{
		int32_t L_63 = V_1;
		int32_t L_64;
		L_64 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_63, NULL);
		int32_t L_65;
		L_65 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_64, NULL);
		int32_t L_66 = V_1;
		if ((!(((uint32_t)L_65) == ((uint32_t)L_66))))
		{
			goto IL_0169;
		}
	}
	{
		int32_t L_67 = V_1;
		int32_t L_68;
		L_68 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_67, NULL);
		int32_t L_69 = V_3;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_68, L_69, NULL);
	}

IL_0169:
	{
		int32_t L_70 = V_1;
		int32_t L_71;
		L_71 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_70, NULL);
		if (!L_71)
		{
			goto IL_0180;
		}
	}
	{
		int32_t L_72 = V_1;
		int32_t L_73;
		L_73 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_72, NULL);
		int32_t L_74 = V_3;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_73, L_74, NULL);
	}

IL_0180:
	{
		int32_t L_75 = V_1;
		int32_t L_76;
		L_76 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_75, NULL);
		if (!L_76)
		{
			goto IL_0197;
		}
	}
	{
		int32_t L_77 = V_1;
		int32_t L_78;
		L_78 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_77, NULL);
		int32_t L_79 = V_3;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_78, L_79, NULL);
	}

IL_0197:
	{
		int32_t L_80 = __this->___root;
		int32_t L_81 = V_1;
		if ((!(((uint32_t)L_80) == ((uint32_t)L_81))))
		{
			goto IL_01a7;
		}
	}
	{
		int32_t L_82 = V_3;
		__this->___root = L_82;
	}

IL_01a7:
	{
		int32_t L_83 = V_1;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_83, 1, NULL);
		int32_t L_84 = V_1;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_84, 0, NULL);
		int32_t L_85 = V_1;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_85, 0, NULL);
		int32_t L_86 = V_1;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_86, 0, NULL);
		int32_t L_87 = V_1;
		int32_t L_88;
		L_88 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_87, NULL);
		V_4 = L_88;
		int32_t L_89 = V_1;
		RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55(__this, L_89, 1, NULL);
		int32_t L_90 = V_1;
		int32_t L_91 = ___1_x_id;
		int32_t L_92 = V_3;
		int32_t L_93;
		L_93 = RBTree_1_RBInsert_m0B2330653BCF5430989431DAC32328E6EBBAED4E(__this, L_90, L_91, L_92, (-1), (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		___0_root_id = L_93;
		int32_t L_94 = V_3;
		int32_t L_95 = V_4;
		RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55(__this, L_94, L_95, NULL);
	}

IL_01ee:
	{
		int32_t L_96 = ___0_root_id;
		return L_96;
	}

IL_01f0:
	{
		int32_t L_97 = V_1;
		if (L_97)
		{
			goto IL_0035;
		}
	}
	{
		goto IL_0263;
	}

IL_01f8:
	{
		int32_t L_98 = __this->____accessMethod;
		bool L_99 = ___4_append;
		if (!((int32_t)(((((int32_t)L_98) == ((int32_t)2))? 1 : 0)|(int32_t)L_99)))
		{
			goto IL_025b;
		}
	}
	{
		int32_t L_100 = ___3_position;
		if ((!(((uint32_t)L_100) == ((uint32_t)(-1)))))
		{
			goto IL_0256;
		}
	}
	{
		int32_t L_101 = __this->___root;
		int32_t L_102;
		L_102 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_101, NULL);
		___3_position = L_102;
		goto IL_0256;
	}

IL_021b:
	{
		int32_t L_103 = V_1;
		RBTree_1_IncreaseSize_m613975F4AD06761B3DD9F26BC8162B71413A26C8(__this, L_103, NULL);
		int32_t L_104 = V_1;
		V_0 = L_104;
		int32_t L_105 = ___3_position;
		int32_t L_106 = V_0;
		int32_t L_107;
		L_107 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_106, NULL);
		int32_t L_108;
		L_108 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_107, NULL);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_105, L_108));
		int32_t L_109 = V_5;
		if ((((int32_t)L_109) > ((int32_t)0)))
		{
			goto IL_0245;
		}
	}
	{
		int32_t L_110 = V_1;
		int32_t L_111;
		L_111 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_110, NULL);
		V_1 = L_111;
		goto IL_0256;
	}

IL_0245:
	{
		int32_t L_112 = V_1;
		int32_t L_113;
		L_113 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_112, NULL);
		V_1 = L_113;
		int32_t L_114 = V_1;
		if (!L_114)
		{
			goto IL_0256;
		}
	}
	{
		int32_t L_115 = V_5;
		___3_position = ((int32_t)il2cpp_codegen_subtract(L_115, 1));
	}

IL_0256:
	{
		int32_t L_116 = V_1;
		if (L_116)
		{
			goto IL_021b;
		}
	}
	{
		goto IL_0263;
	}

IL_025b:
	{
		Exception_t* L_117;
		L_117 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(((int32_t)15), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_117, method);
	}

IL_0263:
	{
		int32_t L_118 = ___1_x_id;
		int32_t L_119 = V_0;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_118, L_119, NULL);
		int32_t L_120 = V_0;
		if (L_120)
		{
			goto IL_0298;
		}
	}
	{
		int32_t L_121 = ___0_root_id;
		if (L_121)
		{
			goto IL_027d;
		}
	}
	{
		int32_t L_122 = ___1_x_id;
		__this->___root = L_122;
		goto IL_030a;
	}

IL_027d:
	{
		int32_t L_123 = ___2_mainTreeNodeID;
		int32_t L_124 = ___1_x_id;
		RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8(__this, L_123, L_124, NULL);
		int32_t L_125 = ___2_mainTreeNodeID;
		int32_t L_126 = ___1_x_id;
		int32_t L_127;
		L_127 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_126, NULL);
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_125, L_127, NULL);
		int32_t L_128 = ___1_x_id;
		___0_root_id = L_128;
		goto IL_030a;
	}

IL_0298:
	{
		V_6 = 0;
		int32_t L_129 = __this->____accessMethod;
		if ((!(((uint32_t)L_129) == ((uint32_t)1))))
		{
			goto IL_02d5;
		}
	}
	{
		int32_t L_130 = ___0_root_id;
		if (!L_130)
		{
			goto IL_02bd;
		}
	}
	{
		int32_t L_131 = ___1_x_id;
		int32_t L_132;
		L_132 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_131, NULL);
		int32_t L_133 = V_0;
		int32_t L_134;
		L_134 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_133, NULL);
		int32_t L_135;
		L_135 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, __this, L_132, L_134);
		G_B49_0 = L_135;
		goto IL_02d1;
	}

IL_02bd:
	{
		int32_t L_136 = ___1_x_id;
		int32_t L_137;
		L_137 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_136, NULL);
		int32_t L_138 = V_0;
		int32_t L_139;
		L_139 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_138, NULL);
		int32_t L_140;
		L_140 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5, __this, L_137, L_139);
		G_B49_0 = L_140;
	}

IL_02d1:
	{
		V_6 = G_B49_0;
		goto IL_02f3;
	}

IL_02d5:
	{
		int32_t L_141 = __this->____accessMethod;
		if ((!(((uint32_t)L_141) == ((uint32_t)2))))
		{
			goto IL_02eb;
		}
	}
	{
		int32_t L_142 = ___3_position;
		if ((((int32_t)L_142) <= ((int32_t)0)))
		{
			goto IL_02e6;
		}
	}
	{
		G_B54_0 = 1;
		goto IL_02e7;
	}

IL_02e6:
	{
		G_B54_0 = (-1);
	}

IL_02e7:
	{
		V_6 = G_B54_0;
		goto IL_02f3;
	}

IL_02eb:
	{
		Exception_t* L_143;
		L_143 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(((int32_t)16), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_143, method);
	}

IL_02f3:
	{
		int32_t L_144 = V_6;
		if ((((int32_t)L_144) >= ((int32_t)0)))
		{
			goto IL_0302;
		}
	}
	{
		int32_t L_145 = V_0;
		int32_t L_146 = ___1_x_id;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_145, L_146, NULL);
		goto IL_030a;
	}

IL_0302:
	{
		int32_t L_147 = V_0;
		int32_t L_148 = ___1_x_id;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_147, L_148, NULL);
	}

IL_030a:
	{
		int32_t L_149 = ___1_x_id;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_149, 0, NULL);
		int32_t L_150 = ___1_x_id;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_150, 0, NULL);
		int32_t L_151 = ___1_x_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_151, 0, NULL);
		int32_t L_152 = ___1_x_id;
		V_1 = L_152;
		goto IL_04ba;
	}

IL_0329:
	{
		int32_t L_153 = ___1_x_id;
		int32_t L_154;
		L_154 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_153, NULL);
		int32_t L_155 = ___1_x_id;
		int32_t L_156;
		L_156 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_155, NULL);
		int32_t L_157;
		L_157 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_156, NULL);
		int32_t L_158;
		L_158 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_157, NULL);
		if ((!(((uint32_t)L_154) == ((uint32_t)L_158))))
		{
			goto IL_0405;
		}
	}
	{
		int32_t L_159 = ___1_x_id;
		int32_t L_160;
		L_160 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_159, NULL);
		int32_t L_161;
		L_161 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_160, NULL);
		int32_t L_162;
		L_162 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_161, NULL);
		V_0 = L_162;
		int32_t L_163 = V_0;
		int32_t L_164;
		L_164 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_163, NULL);
		if (L_164)
		{
			goto IL_03a3;
		}
	}
	{
		int32_t L_165 = ___1_x_id;
		int32_t L_166;
		L_166 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_165, NULL);
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_166, 1, NULL);
		int32_t L_167 = V_0;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_167, 1, NULL);
		int32_t L_168 = ___1_x_id;
		int32_t L_169;
		L_169 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_168, NULL);
		int32_t L_170;
		L_170 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_169, NULL);
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_170, 0, NULL);
		int32_t L_171 = ___1_x_id;
		int32_t L_172;
		L_172 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_171, NULL);
		int32_t L_173;
		L_173 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_172, NULL);
		___1_x_id = L_173;
		goto IL_04ba;
	}

IL_03a3:
	{
		int32_t L_174 = ___1_x_id;
		int32_t L_175 = ___1_x_id;
		int32_t L_176;
		L_176 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_175, NULL);
		int32_t L_177;
		L_177 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_176, NULL);
		if ((!(((uint32_t)L_174) == ((uint32_t)L_177))))
		{
			goto IL_03c7;
		}
	}
	{
		int32_t L_178 = ___1_x_id;
		int32_t L_179;
		L_179 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_178, NULL);
		___1_x_id = L_179;
		int32_t L_180 = ___0_root_id;
		int32_t L_181 = ___1_x_id;
		int32_t L_182 = ___2_mainTreeNodeID;
		int32_t L_183;
		L_183 = RBTree_1_LeftRotate_mD49CD676DF4B79C1B56C4158BF78B239F3EBF7EE(__this, L_180, L_181, L_182, NULL);
		___0_root_id = L_183;
	}

IL_03c7:
	{
		int32_t L_184 = ___1_x_id;
		int32_t L_185;
		L_185 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_184, NULL);
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_185, 1, NULL);
		int32_t L_186 = ___1_x_id;
		int32_t L_187;
		L_187 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_186, NULL);
		int32_t L_188;
		L_188 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_187, NULL);
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_188, 0, NULL);
		int32_t L_189 = ___0_root_id;
		int32_t L_190 = ___1_x_id;
		int32_t L_191;
		L_191 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_190, NULL);
		int32_t L_192;
		L_192 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_191, NULL);
		int32_t L_193 = ___2_mainTreeNodeID;
		int32_t L_194;
		L_194 = RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2(__this, L_189, L_192, L_193, NULL);
		___0_root_id = L_194;
		goto IL_04ba;
	}

IL_0405:
	{
		int32_t L_195 = ___1_x_id;
		int32_t L_196;
		L_196 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_195, NULL);
		int32_t L_197;
		L_197 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_196, NULL);
		int32_t L_198;
		L_198 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_197, NULL);
		V_0 = L_198;
		int32_t L_199 = V_0;
		int32_t L_200;
		L_200 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_199, NULL);
		if (L_200)
		{
			goto IL_045d;
		}
	}
	{
		int32_t L_201 = ___1_x_id;
		int32_t L_202;
		L_202 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_201, NULL);
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_202, 1, NULL);
		int32_t L_203 = V_0;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_203, 1, NULL);
		int32_t L_204 = ___1_x_id;
		int32_t L_205;
		L_205 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_204, NULL);
		int32_t L_206;
		L_206 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_205, NULL);
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_206, 0, NULL);
		int32_t L_207 = ___1_x_id;
		int32_t L_208;
		L_208 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_207, NULL);
		int32_t L_209;
		L_209 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_208, NULL);
		___1_x_id = L_209;
		goto IL_04ba;
	}

IL_045d:
	{
		int32_t L_210 = ___1_x_id;
		int32_t L_211 = ___1_x_id;
		int32_t L_212;
		L_212 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_211, NULL);
		int32_t L_213;
		L_213 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_212, NULL);
		if ((!(((uint32_t)L_210) == ((uint32_t)L_213))))
		{
			goto IL_0481;
		}
	}
	{
		int32_t L_214 = ___1_x_id;
		int32_t L_215;
		L_215 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_214, NULL);
		___1_x_id = L_215;
		int32_t L_216 = ___0_root_id;
		int32_t L_217 = ___1_x_id;
		int32_t L_218 = ___2_mainTreeNodeID;
		int32_t L_219;
		L_219 = RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2(__this, L_216, L_217, L_218, NULL);
		___0_root_id = L_219;
	}

IL_0481:
	{
		int32_t L_220 = ___1_x_id;
		int32_t L_221;
		L_221 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_220, NULL);
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_221, 1, NULL);
		int32_t L_222 = ___1_x_id;
		int32_t L_223;
		L_223 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_222, NULL);
		int32_t L_224;
		L_224 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_223, NULL);
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_224, 0, NULL);
		int32_t L_225 = ___0_root_id;
		int32_t L_226 = ___1_x_id;
		int32_t L_227;
		L_227 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_226, NULL);
		int32_t L_228;
		L_228 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_227, NULL);
		int32_t L_229 = ___2_mainTreeNodeID;
		int32_t L_230;
		L_230 = RBTree_1_LeftRotate_mD49CD676DF4B79C1B56C4158BF78B239F3EBF7EE(__this, L_225, L_228, L_229, NULL);
		___0_root_id = L_230;
	}

IL_04ba:
	{
		int32_t L_231 = ___1_x_id;
		int32_t L_232;
		L_232 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_231, NULL);
		int32_t L_233;
		L_233 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_232, NULL);
		if (!L_233)
		{
			goto IL_0329;
		}
	}
	{
		int32_t L_234 = ___0_root_id;
		if (L_234)
		{
			goto IL_04de;
		}
	}
	{
		int32_t L_235 = __this->___root;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_235, 1, NULL);
		goto IL_04e6;
	}

IL_04de:
	{
		int32_t L_236 = ___0_root_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_236, 1, NULL);
	}

IL_04e6:
	{
		int32_t L_237 = ___0_root_id;
		return L_237;
	}
}
// Method Definition Index: 60378
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_UpdateNodeKey_m90FF8C96E5A0A272D878A6CB88DEE893A34E6830 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_currentKey, int32_t ___1_newKey, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_currentKey;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_1;
		L_1 = RBTree_1_GetNodeByKey_mF4FE4024CADC8B1F8FABFA13EACA57E2B6F775F2(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
		V_0 = L_1;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_2 = V_0;
		int32_t L_3 = L_2.____nodeID;
		int32_t L_4;
		L_4 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_3, NULL);
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_5 = V_0;
		int32_t L_6 = L_5.____nodeID;
		int32_t L_7 = __this->___root;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0031;
		}
	}
	{
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_8 = V_0;
		int32_t L_9 = L_8.____mainTreeNodeID;
		int32_t L_10 = ___1_newKey;
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_9, L_10, NULL);
	}

IL_0031:
	{
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_11 = V_0;
		int32_t L_12 = L_11.____nodeID;
		int32_t L_13 = ___1_newKey;
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_12, L_13, NULL);
		return;
	}
}
// Method Definition Index: 60379
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_DeleteByIndex_m46F2E47E9EE4CDEB58E225ED10A54A4C31F485B6 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_i;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_1;
		L_1 = RBTree_1_GetNodeByIndex_m1925A1C6C371B002EE706C8EDEF3785E4AD148A8(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 42));
		V_0 = L_1;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_2 = V_0;
		int32_t L_3 = L_2.____nodeID;
		int32_t L_4;
		L_4 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_3, NULL);
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_5 = V_0;
		int32_t L_6 = L_5.____nodeID;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_7 = V_0;
		int32_t L_8 = L_7.____mainTreeNodeID;
		int32_t L_9;
		L_9 = RBTree_1_RBDeleteX_m6AEBE3413E7ECF37B61015F652AA07DF5C9A13AC(__this, 0, L_6, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 43));
		return L_4;
	}
}
// Method Definition Index: 60380
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDelete_mD650E7F92013005A24CE586C4FC1B71EE3D279C7 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_z_id, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_z_id;
		int32_t L_1;
		L_1 = RBTree_1_RBDeleteX_m6AEBE3413E7ECF37B61015F652AA07DF5C9A13AC(__this, 0, L_0, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 43));
		return L_1;
	}
}
// Method Definition Index: 60381
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDeleteX_m6AEBE3413E7ECF37B61015F652AA07DF5C9A13AC (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_z_id, int32_t ___2_mainTreeNodeID, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t G_B5_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___1_z_id;
		int32_t L_1;
		L_1 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = ___1_z_id;
		int32_t L_3;
		L_3 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_2, NULL);
		int32_t L_4 = ___1_z_id;
		int32_t L_5;
		L_5 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_4, NULL);
		int32_t L_6 = ___1_z_id;
		int32_t L_7;
		L_7 = RBTree_1_RBDeleteX_m6AEBE3413E7ECF37B61015F652AA07DF5C9A13AC(__this, L_3, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 43));
		return L_7;
	}

IL_0021:
	{
		V_3 = (bool)0;
		int32_t L_8 = __this->____accessMethod;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = ___1_z_id;
		G_B5_0 = L_9;
		goto IL_0030;
	}

IL_002f:
	{
		int32_t L_10 = ___2_mainTreeNodeID;
		G_B5_0 = L_10;
	}

IL_0030:
	{
		V_4 = G_B5_0;
		int32_t L_11 = V_4;
		int32_t L_12;
		L_12 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_11, NULL);
		if (!L_12)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_13 = V_4;
		int32_t L_14;
		L_14 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_13, NULL);
		___0_root_id = L_14;
	}

IL_0046:
	{
		int32_t L_15 = V_4;
		int32_t L_16;
		L_16 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_15, NULL);
		int32_t L_17;
		L_17 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_16, NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_005b;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0073;
	}

IL_005b:
	{
		int32_t L_18 = V_4;
		int32_t L_19;
		L_19 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_18, NULL);
		int32_t L_20;
		L_20 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_19, NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		Exception_t* L_21;
		L_21 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_0073:
	{
		int32_t L_22 = ___1_z_id;
		int32_t L_23;
		L_23 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_22, NULL);
		if (!L_23)
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_24 = ___1_z_id;
		int32_t L_25;
		L_25 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_24, NULL);
		if (L_25)
		{
			goto IL_0089;
		}
	}

IL_0085:
	{
		int32_t L_26 = ___1_z_id;
		V_1 = L_26;
		goto IL_0091;
	}

IL_0089:
	{
		int32_t L_27 = ___1_z_id;
		int32_t L_28;
		L_28 = RBTree_1_Successor_mD725A36AE3B97C64315EA2030135F2ED92601A7B(__this, L_27, NULL);
		V_1 = L_28;
	}

IL_0091:
	{
		int32_t L_29 = V_1;
		int32_t L_30;
		L_30 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_29, NULL);
		if (!L_30)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_31 = V_1;
		int32_t L_32;
		L_32 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_31, NULL);
		V_0 = L_32;
		goto IL_00ac;
	}

IL_00a4:
	{
		int32_t L_33 = V_1;
		int32_t L_34;
		L_34 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_33, NULL);
		V_0 = L_34;
	}

IL_00ac:
	{
		int32_t L_35 = V_1;
		int32_t L_36;
		L_36 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_35, NULL);
		V_2 = L_36;
		int32_t L_37 = V_0;
		if (!L_37)
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_38 = V_0;
		int32_t L_39 = V_2;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_38, L_39, NULL);
	}

IL_00bf:
	{
		int32_t L_40 = V_2;
		if (L_40)
		{
			goto IL_00d3;
		}
	}
	{
		int32_t L_41 = ___0_root_id;
		if (L_41)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_42 = V_0;
		__this->___root = L_42;
		goto IL_00ef;
	}

IL_00ce:
	{
		int32_t L_43 = V_0;
		___0_root_id = L_43;
		goto IL_00ef;
	}

IL_00d3:
	{
		int32_t L_44 = V_1;
		int32_t L_45 = V_2;
		int32_t L_46;
		L_46 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_45, NULL);
		if ((!(((uint32_t)L_44) == ((uint32_t)L_46))))
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_47 = V_2;
		int32_t L_48 = V_0;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_47, L_48, NULL);
		goto IL_00ef;
	}

IL_00e7:
	{
		int32_t L_49 = V_2;
		int32_t L_50 = V_0;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_49, L_50, NULL);
	}

IL_00ef:
	{
		int32_t L_51 = V_1;
		int32_t L_52 = ___1_z_id;
		if ((((int32_t)L_51) == ((int32_t)L_52)))
		{
			goto IL_010f;
		}
	}
	{
		int32_t L_53 = ___1_z_id;
		int32_t L_54 = V_1;
		int32_t L_55;
		L_55 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_54, NULL);
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_53, L_55, NULL);
		int32_t L_56 = ___1_z_id;
		int32_t L_57 = V_1;
		int32_t L_58;
		L_58 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_57, NULL);
		RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8(__this, L_56, L_58, NULL);
	}

IL_010f:
	{
		int32_t L_59 = V_4;
		int32_t L_60;
		L_60 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_59, NULL);
		if (!L_60)
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_61 = ___0_root_id;
		if (L_61)
		{
			goto IL_0128;
		}
	}
	{
		int32_t L_62 = ___1_z_id;
		int32_t L_63 = V_4;
		if ((((int32_t)L_62) == ((int32_t)L_63)))
		{
			goto IL_0128;
		}
	}
	{
		Exception_t* L_64;
		L_64 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_64, method);
	}

IL_0128:
	{
		int32_t L_65 = ___0_root_id;
		if (!L_65)
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_66 = V_4;
		int32_t L_67 = ___0_root_id;
		RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8(__this, L_66, L_67, NULL);
		int32_t L_68 = V_4;
		int32_t L_69 = ___0_root_id;
		int32_t L_70;
		L_70 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_69, NULL);
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_68, L_70, NULL);
	}

IL_0143:
	{
		int32_t L_71 = V_2;
		V_5 = L_71;
		goto IL_015a;
	}

IL_0148:
	{
		int32_t L_72 = V_5;
		RBTree_1_RecomputeSize_mE849917C6B9CE571D95FFA5AE30E1E7CDB24310A(__this, L_72, NULL);
		int32_t L_73 = V_5;
		int32_t L_74;
		L_74 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_73, NULL);
		V_5 = L_74;
	}

IL_015a:
	{
		int32_t L_75 = V_5;
		if (L_75)
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_76 = ___0_root_id;
		if (!L_76)
		{
			goto IL_017d;
		}
	}
	{
		int32_t L_77 = V_4;
		V_6 = L_77;
		goto IL_0179;
	}

IL_0167:
	{
		int32_t L_78 = V_6;
		RBTree_1_DecreaseSize_m2CC82F8846D718DBC61F565C78775A068556E52F(__this, L_78, NULL);
		int32_t L_79 = V_6;
		int32_t L_80;
		L_80 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_79, NULL);
		V_6 = L_80;
	}

IL_0179:
	{
		int32_t L_81 = V_6;
		if (L_81)
		{
			goto IL_0167;
		}
	}

IL_017d:
	{
		int32_t L_82 = V_1;
		int32_t L_83;
		L_83 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_82, NULL);
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_0193;
		}
	}
	{
		int32_t L_84 = ___0_root_id;
		int32_t L_85 = V_0;
		int32_t L_86 = V_2;
		int32_t L_87 = ___2_mainTreeNodeID;
		int32_t L_88;
		L_88 = RBTree_1_RBDeleteFixup_m25667C31EC6662F3899EA7CDFF622F9DB394AF89(__this, L_84, L_85, L_86, L_87, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46));
		___0_root_id = L_88;
	}

IL_0193:
	{
		bool L_89 = V_3;
		if (!L_89)
		{
			goto IL_02af;
		}
	}
	{
		int32_t L_90 = V_4;
		if (!L_90)
		{
			goto IL_01ae;
		}
	}
	{
		int32_t L_91 = V_4;
		int32_t L_92;
		L_92 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_91, NULL);
		int32_t L_93;
		L_93 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_92, NULL);
		if ((((int32_t)L_93) == ((int32_t)1)))
		{
			goto IL_01b6;
		}
	}

IL_01ae:
	{
		Exception_t* L_94;
		L_94 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(((int32_t)9), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_94, method);
	}

IL_01b6:
	{
		int32_t L_95 = __this->____inUseSatelliteTreeCount;
		__this->____inUseSatelliteTreeCount = ((int32_t)il2cpp_codegen_subtract(L_95, 1));
		int32_t L_96 = V_4;
		int32_t L_97;
		L_97 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_96, NULL);
		V_7 = L_97;
		int32_t L_98 = V_7;
		int32_t L_99 = V_4;
		int32_t L_100;
		L_100 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_99, NULL);
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_98, L_100, NULL);
		int32_t L_101 = V_7;
		int32_t L_102 = V_4;
		int32_t L_103;
		L_103 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_102, NULL);
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_101, L_103, NULL);
		int32_t L_104 = V_7;
		int32_t L_105 = V_4;
		int32_t L_106;
		L_106 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_105, NULL);
		RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55(__this, L_104, L_106, NULL);
		int32_t L_107 = V_7;
		int32_t L_108 = V_4;
		int32_t L_109;
		L_109 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_108, NULL);
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_107, L_109, NULL);
		int32_t L_110 = V_4;
		int32_t L_111;
		L_111 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_110, NULL);
		if (!L_111)
		{
			goto IL_025c;
		}
	}
	{
		int32_t L_112 = V_7;
		int32_t L_113 = V_4;
		int32_t L_114;
		L_114 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_113, NULL);
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_112, L_114, NULL);
		int32_t L_115 = V_4;
		int32_t L_116;
		L_116 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_115, NULL);
		int32_t L_117;
		L_117 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_116, NULL);
		int32_t L_118 = V_4;
		if ((!(((uint32_t)L_117) == ((uint32_t)L_118))))
		{
			goto IL_024c;
		}
	}
	{
		int32_t L_119 = V_4;
		int32_t L_120;
		L_120 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_119, NULL);
		int32_t L_121 = V_7;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_120, L_121, NULL);
		goto IL_025c;
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		int32_t L_123;
		L_123 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_122, NULL);
		int32_t L_124 = V_7;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_123, L_124, NULL);
	}

IL_025c:
	{
		int32_t L_125 = V_4;
		int32_t L_126;
		L_126 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_125, NULL);
		if (!L_126)
		{
			goto IL_0276;
		}
	}
	{
		int32_t L_127 = V_4;
		int32_t L_128;
		L_128 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_127, NULL);
		int32_t L_129 = V_7;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_128, L_129, NULL);
	}

IL_0276:
	{
		int32_t L_130 = V_4;
		int32_t L_131;
		L_131 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_130, NULL);
		if (!L_131)
		{
			goto IL_0290;
		}
	}
	{
		int32_t L_132 = V_4;
		int32_t L_133;
		L_133 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_132, NULL);
		int32_t L_134 = V_7;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_133, L_134, NULL);
	}

IL_0290:
	{
		int32_t L_135 = __this->___root;
		int32_t L_136 = V_4;
		if ((!(((uint32_t)L_135) == ((uint32_t)L_136))))
		{
			goto IL_02a2;
		}
	}
	{
		int32_t L_137 = V_7;
		__this->___root = L_137;
	}

IL_02a2:
	{
		int32_t L_138 = V_4;
		RBTree_1_FreeNode_m142FC91FA594DC91799F5231F7AE945DCC6922FD(__this, L_138, NULL);
		V_4 = 0;
		goto IL_02e4;
	}

IL_02af:
	{
		int32_t L_139 = V_4;
		int32_t L_140;
		L_140 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_139, NULL);
		if (!L_140)
		{
			goto IL_02e4;
		}
	}
	{
		int32_t L_141 = ___0_root_id;
		if (L_141)
		{
			goto IL_02c9;
		}
	}
	{
		int32_t L_142 = ___1_z_id;
		int32_t L_143 = V_4;
		if ((((int32_t)L_142) == ((int32_t)L_143)))
		{
			goto IL_02c9;
		}
	}
	{
		Exception_t* L_144;
		L_144 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(((int32_t)10), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_144, method);
	}

IL_02c9:
	{
		int32_t L_145 = ___0_root_id;
		if (!L_145)
		{
			goto IL_02e4;
		}
	}
	{
		int32_t L_146 = V_4;
		int32_t L_147 = ___0_root_id;
		RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8(__this, L_146, L_147, NULL);
		int32_t L_148 = V_4;
		int32_t L_149 = ___0_root_id;
		int32_t L_150;
		L_150 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_149, NULL);
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_148, L_150, NULL);
	}

IL_02e4:
	{
		int32_t L_151 = V_1;
		int32_t L_152 = ___1_z_id;
		if ((((int32_t)L_151) == ((int32_t)L_152)))
		{
			goto IL_03d1;
		}
	}
	{
		int32_t L_153 = V_1;
		int32_t L_154 = ___1_z_id;
		int32_t L_155;
		L_155 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_154, NULL);
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_153, L_155, NULL);
		int32_t L_156 = V_1;
		int32_t L_157 = ___1_z_id;
		int32_t L_158;
		L_158 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_157, NULL);
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_156, L_158, NULL);
		int32_t L_159 = V_1;
		int32_t L_160 = ___1_z_id;
		int32_t L_161;
		L_161 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_160, NULL);
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_159, L_161, NULL);
		int32_t L_162 = V_1;
		int32_t L_163 = ___1_z_id;
		int32_t L_164;
		L_164 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_163, NULL);
		RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55(__this, L_162, L_164, NULL);
		int32_t L_165 = ___1_z_id;
		int32_t L_166;
		L_166 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_165, NULL);
		if (!L_166)
		{
			goto IL_036a;
		}
	}
	{
		int32_t L_167 = V_1;
		int32_t L_168 = ___1_z_id;
		int32_t L_169;
		L_169 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_168, NULL);
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_167, L_169, NULL);
		int32_t L_170 = ___1_z_id;
		int32_t L_171;
		L_171 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_170, NULL);
		int32_t L_172;
		L_172 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_171, NULL);
		int32_t L_173 = ___1_z_id;
		if ((!(((uint32_t)L_172) == ((uint32_t)L_173))))
		{
			goto IL_035a;
		}
	}
	{
		int32_t L_174 = ___1_z_id;
		int32_t L_175;
		L_175 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_174, NULL);
		int32_t L_176 = V_1;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_175, L_176, NULL);
		goto IL_0372;
	}

IL_035a:
	{
		int32_t L_177 = ___1_z_id;
		int32_t L_178;
		L_178 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_177, NULL);
		int32_t L_179 = V_1;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_178, L_179, NULL);
		goto IL_0372;
	}

IL_036a:
	{
		int32_t L_180 = V_1;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_180, 0, NULL);
	}

IL_0372:
	{
		int32_t L_181 = ___1_z_id;
		int32_t L_182;
		L_182 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_181, NULL);
		if (!L_182)
		{
			goto IL_0389;
		}
	}
	{
		int32_t L_183 = ___1_z_id;
		int32_t L_184;
		L_184 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_183, NULL);
		int32_t L_185 = V_1;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_184, L_185, NULL);
	}

IL_0389:
	{
		int32_t L_186 = ___1_z_id;
		int32_t L_187;
		L_187 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_186, NULL);
		if (!L_187)
		{
			goto IL_03a0;
		}
	}
	{
		int32_t L_188 = ___1_z_id;
		int32_t L_189;
		L_189 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_188, NULL);
		int32_t L_190 = V_1;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_189, L_190, NULL);
	}

IL_03a0:
	{
		int32_t L_191 = __this->___root;
		int32_t L_192 = ___1_z_id;
		if ((!(((uint32_t)L_191) == ((uint32_t)L_192))))
		{
			goto IL_03b2;
		}
	}
	{
		int32_t L_193 = V_1;
		__this->___root = L_193;
		goto IL_03b9;
	}

IL_03b2:
	{
		int32_t L_194 = ___0_root_id;
		int32_t L_195 = ___1_z_id;
		if ((!(((uint32_t)L_194) == ((uint32_t)L_195))))
		{
			goto IL_03b9;
		}
	}
	{
		int32_t L_196 = V_1;
		___0_root_id = L_196;
	}

IL_03b9:
	{
		int32_t L_197 = V_4;
		if (!L_197)
		{
			goto IL_03d1;
		}
	}
	{
		int32_t L_198 = V_4;
		int32_t L_199;
		L_199 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_198, NULL);
		int32_t L_200 = ___1_z_id;
		if ((!(((uint32_t)L_199) == ((uint32_t)L_200))))
		{
			goto IL_03d1;
		}
	}
	{
		int32_t L_201 = V_4;
		int32_t L_202 = V_1;
		RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8(__this, L_201, L_202, NULL);
	}

IL_03d1:
	{
		int32_t L_203 = ___1_z_id;
		RBTree_1_FreeNode_m142FC91FA594DC91799F5231F7AE945DCC6922FD(__this, L_203, NULL);
		int32_t L_204 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_204, 1));
		int32_t L_205 = ___1_z_id;
		return L_205;
	}
}
// Method Definition Index: 60382
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDeleteFixup_m25667C31EC6662F3899EA7CDFF622F9DB394AF89 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_px_id, int32_t ___3_mainTreeNodeID, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B47_0 = 0;
	int32_t G_B52_0 = 0;
	int32_t G_B56_0 = 0;
	int32_t G_B60_0 = 0;
	{
		int32_t L_0 = ___1_x_id;
		if (L_0)
		{
			goto IL_0305;
		}
	}
	{
		int32_t L_1 = ___2_px_id;
		if (L_1)
		{
			goto IL_0305;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		int32_t L_2 = ___1_x_id;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = ___1_x_id;
		int32_t L_4 = ___1_x_id;
		int32_t L_5;
		L_5 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_4, NULL);
		int32_t L_6;
		L_6 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_5, NULL);
		if ((((int32_t)L_3) == ((int32_t)L_6)))
		{
			goto IL_0033;
		}
	}

IL_0021:
	{
		int32_t L_7 = ___1_x_id;
		if (L_7)
		{
			goto IL_0168;
		}
	}
	{
		int32_t L_8 = ___2_px_id;
		int32_t L_9;
		L_9 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_8, NULL);
		if (L_9)
		{
			goto IL_0168;
		}
	}

IL_0033:
	{
		int32_t L_10 = ___1_x_id;
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_11 = ___1_x_id;
		int32_t L_12;
		L_12 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_11, NULL);
		int32_t L_13;
		L_13 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_12, NULL);
		G_B10_0 = L_13;
		goto IL_004c;
	}

IL_0045:
	{
		int32_t L_14 = ___2_px_id;
		int32_t L_15;
		L_15 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_14, NULL);
		G_B10_0 = L_15;
	}

IL_004c:
	{
		V_0 = G_B10_0;
		int32_t L_16 = V_0;
		if (L_16)
		{
			goto IL_0058;
		}
	}
	{
		Exception_t* L_17;
		L_17 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(((int32_t)14), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_0058:
	{
		int32_t L_18 = V_0;
		int32_t L_19;
		L_19 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_18, NULL);
		if (L_19)
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_20 = V_0;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_20, 1, NULL);
		int32_t L_21 = ___2_px_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_21, 0, NULL);
		int32_t L_22 = ___0_root_id;
		int32_t L_23 = ___2_px_id;
		int32_t L_24 = ___3_mainTreeNodeID;
		int32_t L_25;
		L_25 = RBTree_1_LeftRotate_mD49CD676DF4B79C1B56C4158BF78B239F3EBF7EE(__this, L_22, L_23, L_24, NULL);
		___0_root_id = L_25;
		int32_t L_26 = ___1_x_id;
		if (!L_26)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_27 = ___1_x_id;
		int32_t L_28;
		L_28 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_27, NULL);
		int32_t L_29;
		L_29 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_28, NULL);
		G_B16_0 = L_29;
		goto IL_0096;
	}

IL_008f:
	{
		int32_t L_30 = ___2_px_id;
		int32_t L_31;
		L_31 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_30, NULL);
		G_B16_0 = L_31;
	}

IL_0096:
	{
		V_0 = G_B16_0;
	}

IL_0097:
	{
		int32_t L_32 = V_0;
		int32_t L_33;
		L_33 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_32, NULL);
		int32_t L_34;
		L_34 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_33, NULL);
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_00d0;
		}
	}
	{
		int32_t L_35 = V_0;
		int32_t L_36;
		L_36 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_35, NULL);
		int32_t L_37;
		L_37 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_36, NULL);
		if ((!(((uint32_t)L_37) == ((uint32_t)1))))
		{
			goto IL_00d0;
		}
	}
	{
		int32_t L_38 = V_0;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_38, 0, NULL);
		int32_t L_39 = ___2_px_id;
		___1_x_id = L_39;
		int32_t L_40 = ___2_px_id;
		int32_t L_41;
		L_41 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_40, NULL);
		___2_px_id = L_41;
		goto IL_0305;
	}

IL_00d0:
	{
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_42, NULL);
		int32_t L_44;
		L_44 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_43, NULL);
		if ((!(((uint32_t)L_44) == ((uint32_t)1))))
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_45 = V_0;
		int32_t L_46;
		L_46 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_45, NULL);
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_46, 1, NULL);
		int32_t L_47 = V_0;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_47, 0, NULL);
		int32_t L_48 = ___0_root_id;
		int32_t L_49 = V_0;
		int32_t L_50 = ___3_mainTreeNodeID;
		int32_t L_51;
		L_51 = RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2(__this, L_48, L_49, L_50, NULL);
		___0_root_id = L_51;
		int32_t L_52 = ___1_x_id;
		if (!L_52)
		{
			goto IL_0114;
		}
	}
	{
		int32_t L_53 = ___1_x_id;
		int32_t L_54;
		L_54 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_53, NULL);
		int32_t L_55;
		L_55 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_54, NULL);
		G_B24_0 = L_55;
		goto IL_011b;
	}

IL_0114:
	{
		int32_t L_56 = ___2_px_id;
		int32_t L_57;
		L_57 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_56, NULL);
		G_B24_0 = L_57;
	}

IL_011b:
	{
		V_0 = G_B24_0;
	}

IL_011c:
	{
		int32_t L_58 = V_0;
		int32_t L_59 = ___2_px_id;
		int32_t L_60;
		L_60 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_59, NULL);
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_58, L_60, NULL);
		int32_t L_61 = ___2_px_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_61, 1, NULL);
		int32_t L_62 = V_0;
		int32_t L_63;
		L_63 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_62, NULL);
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_63, 1, NULL);
		int32_t L_64 = ___0_root_id;
		int32_t L_65 = ___2_px_id;
		int32_t L_66 = ___3_mainTreeNodeID;
		int32_t L_67;
		L_67 = RBTree_1_LeftRotate_mD49CD676DF4B79C1B56C4158BF78B239F3EBF7EE(__this, L_64, L_65, L_66, NULL);
		___0_root_id = L_67;
		int32_t L_68 = ___0_root_id;
		if (!L_68)
		{
			goto IL_0152;
		}
	}
	{
		int32_t L_69 = ___0_root_id;
		G_B28_0 = L_69;
		goto IL_0158;
	}

IL_0152:
	{
		int32_t L_70 = __this->___root;
		G_B28_0 = L_70;
	}

IL_0158:
	{
		___1_x_id = G_B28_0;
		int32_t L_71 = ___1_x_id;
		int32_t L_72;
		L_72 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_71, NULL);
		___2_px_id = L_72;
		goto IL_0305;
	}

IL_0168:
	{
		int32_t L_73 = ___2_px_id;
		int32_t L_74;
		L_74 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_73, NULL);
		V_0 = L_74;
		int32_t L_75 = V_0;
		int32_t L_76;
		L_76 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_75, NULL);
		if (L_76)
		{
			goto IL_01ed;
		}
	}
	{
		int32_t L_77 = V_0;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_77, 1, NULL);
		int32_t L_78 = ___1_x_id;
		if (!L_78)
		{
			goto IL_01b4;
		}
	}
	{
		int32_t L_79 = ___2_px_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_79, 0, NULL);
		int32_t L_80 = ___0_root_id;
		int32_t L_81 = ___2_px_id;
		int32_t L_82 = ___3_mainTreeNodeID;
		int32_t L_83;
		L_83 = RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2(__this, L_80, L_81, L_82, NULL);
		___0_root_id = L_83;
		int32_t L_84 = ___1_x_id;
		if (!L_84)
		{
			goto IL_01aa;
		}
	}
	{
		int32_t L_85 = ___1_x_id;
		int32_t L_86;
		L_86 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_85, NULL);
		int32_t L_87;
		L_87 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_86, NULL);
		G_B34_0 = L_87;
		goto IL_01b1;
	}

IL_01aa:
	{
		int32_t L_88 = ___2_px_id;
		int32_t L_89;
		L_89 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_88, NULL);
		G_B34_0 = L_89;
	}

IL_01b1:
	{
		V_0 = G_B34_0;
		goto IL_01ed;
	}

IL_01b4:
	{
		int32_t L_90 = ___2_px_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_90, 0, NULL);
		int32_t L_91 = ___0_root_id;
		int32_t L_92 = ___2_px_id;
		int32_t L_93 = ___3_mainTreeNodeID;
		int32_t L_94;
		L_94 = RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2(__this, L_91, L_92, L_93, NULL);
		___0_root_id = L_94;
		int32_t L_95 = ___1_x_id;
		if (!L_95)
		{
			goto IL_01da;
		}
	}
	{
		int32_t L_96 = ___1_x_id;
		int32_t L_97;
		L_97 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_96, NULL);
		int32_t L_98;
		L_98 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_97, NULL);
		G_B38_0 = L_98;
		goto IL_01e1;
	}

IL_01da:
	{
		int32_t L_99 = ___2_px_id;
		int32_t L_100;
		L_100 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_99, NULL);
		G_B38_0 = L_100;
	}

IL_01e1:
	{
		V_0 = G_B38_0;
		int32_t L_101 = V_0;
		if (L_101)
		{
			goto IL_01ed;
		}
	}
	{
		Exception_t* L_102;
		L_102 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(((int32_t)11), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_102, method);
	}

IL_01ed:
	{
		int32_t L_103 = V_0;
		int32_t L_104;
		L_104 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_103, NULL);
		int32_t L_105;
		L_105 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_104, NULL);
		if ((!(((uint32_t)L_105) == ((uint32_t)1))))
		{
			goto IL_0226;
		}
	}
	{
		int32_t L_106 = V_0;
		int32_t L_107;
		L_107 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_106, NULL);
		int32_t L_108;
		L_108 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_107, NULL);
		if ((!(((uint32_t)L_108) == ((uint32_t)1))))
		{
			goto IL_0226;
		}
	}
	{
		int32_t L_109 = V_0;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_109, 0, NULL);
		int32_t L_110 = ___2_px_id;
		___1_x_id = L_110;
		int32_t L_111 = ___2_px_id;
		int32_t L_112;
		L_112 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_111, NULL);
		___2_px_id = L_112;
		goto IL_0305;
	}

IL_0226:
	{
		int32_t L_113 = V_0;
		int32_t L_114;
		L_114 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_113, NULL);
		int32_t L_115;
		L_115 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_114, NULL);
		if ((!(((uint32_t)L_115) == ((uint32_t)1))))
		{
			goto IL_0272;
		}
	}
	{
		int32_t L_116 = V_0;
		int32_t L_117;
		L_117 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_116, NULL);
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_117, 1, NULL);
		int32_t L_118 = V_0;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_118, 0, NULL);
		int32_t L_119 = ___0_root_id;
		int32_t L_120 = V_0;
		int32_t L_121 = ___3_mainTreeNodeID;
		int32_t L_122;
		L_122 = RBTree_1_LeftRotate_mD49CD676DF4B79C1B56C4158BF78B239F3EBF7EE(__this, L_119, L_120, L_121, NULL);
		___0_root_id = L_122;
		int32_t L_123 = ___1_x_id;
		if (!L_123)
		{
			goto IL_026a;
		}
	}
	{
		int32_t L_124 = ___1_x_id;
		int32_t L_125;
		L_125 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_124, NULL);
		int32_t L_126;
		L_126 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_125, NULL);
		G_B47_0 = L_126;
		goto IL_0271;
	}

IL_026a:
	{
		int32_t L_127 = ___2_px_id;
		int32_t L_128;
		L_128 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_127, NULL);
		G_B47_0 = L_128;
	}

IL_0271:
	{
		V_0 = G_B47_0;
	}

IL_0272:
	{
		int32_t L_129 = ___1_x_id;
		if (!L_129)
		{
			goto IL_02be;
		}
	}
	{
		int32_t L_130 = V_0;
		int32_t L_131 = ___2_px_id;
		int32_t L_132;
		L_132 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_131, NULL);
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_130, L_132, NULL);
		int32_t L_133 = ___2_px_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_133, 1, NULL);
		int32_t L_134 = V_0;
		int32_t L_135;
		L_135 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_134, NULL);
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_135, 1, NULL);
		int32_t L_136 = ___0_root_id;
		int32_t L_137 = ___2_px_id;
		int32_t L_138 = ___3_mainTreeNodeID;
		int32_t L_139;
		L_139 = RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2(__this, L_136, L_137, L_138, NULL);
		___0_root_id = L_139;
		int32_t L_140 = ___0_root_id;
		if (!L_140)
		{
			goto IL_02ab;
		}
	}
	{
		int32_t L_141 = ___0_root_id;
		G_B52_0 = L_141;
		goto IL_02b1;
	}

IL_02ab:
	{
		int32_t L_142 = __this->___root;
		G_B52_0 = L_142;
	}

IL_02b1:
	{
		___1_x_id = G_B52_0;
		int32_t L_143 = ___1_x_id;
		int32_t L_144;
		L_144 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_143, NULL);
		___2_px_id = L_144;
		goto IL_0305;
	}

IL_02be:
	{
		int32_t L_145 = V_0;
		int32_t L_146 = ___2_px_id;
		int32_t L_147;
		L_147 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_146, NULL);
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_145, L_147, NULL);
		int32_t L_148 = ___2_px_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_148, 1, NULL);
		int32_t L_149 = V_0;
		int32_t L_150;
		L_150 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_149, NULL);
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_150, 1, NULL);
		int32_t L_151 = ___0_root_id;
		int32_t L_152 = ___2_px_id;
		int32_t L_153 = ___3_mainTreeNodeID;
		int32_t L_154;
		L_154 = RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2(__this, L_151, L_152, L_153, NULL);
		___0_root_id = L_154;
		int32_t L_155 = ___0_root_id;
		if (!L_155)
		{
			goto IL_02f4;
		}
	}
	{
		int32_t L_156 = ___0_root_id;
		G_B56_0 = L_156;
		goto IL_02fa;
	}

IL_02f4:
	{
		int32_t L_157 = __this->___root;
		G_B56_0 = L_157;
	}

IL_02fa:
	{
		___1_x_id = G_B56_0;
		int32_t L_158 = ___1_x_id;
		int32_t L_159;
		L_159 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_158, NULL);
		___2_px_id = L_159;
	}

IL_0305:
	{
		int32_t L_160 = ___0_root_id;
		if (!L_160)
		{
			goto IL_030b;
		}
	}
	{
		int32_t L_161 = ___0_root_id;
		G_B60_0 = L_161;
		goto IL_0311;
	}

IL_030b:
	{
		int32_t L_162 = __this->___root;
		G_B60_0 = L_162;
	}

IL_0311:
	{
		int32_t L_163 = ___1_x_id;
		if ((((int32_t)G_B60_0) == ((int32_t)L_163)))
		{
			goto IL_0321;
		}
	}
	{
		int32_t L_164 = ___1_x_id;
		int32_t L_165;
		L_165 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_164, NULL);
		if ((((int32_t)L_165) == ((int32_t)1)))
		{
			goto IL_000e;
		}
	}

IL_0321:
	{
		int32_t L_166 = ___1_x_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_166, 1, NULL);
		int32_t L_167 = ___0_root_id;
		return L_167;
	}
}
// Method Definition Index: 60383
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_SearchSubTree_m57C42F24D37D298A0566D530361F03F6F0EB76B2 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B10_0 = 0;
	{
		int32_t L_0 = ___0_root_id;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = __this->____accessMethod;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		Exception_t* L_2;
		L_2 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(((int32_t)17), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_root_id;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = ___0_root_id;
		G_B6_0 = L_4;
		goto IL_0020;
	}

IL_001a:
	{
		int32_t L_5 = __this->___root;
		G_B6_0 = L_5;
	}

IL_0020:
	{
		V_0 = G_B6_0;
		goto IL_005e;
	}

IL_0023:
	{
		int32_t L_6 = ___0_root_id;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___1_key;
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_8, NULL);
		int32_t L_10;
		L_10 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, __this, L_7, L_9);
		G_B10_0 = L_10;
		goto IL_0044;
	}

IL_0036:
	{
		int32_t L_11 = ___1_key;
		int32_t L_12 = V_0;
		int32_t L_13;
		L_13 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_12, NULL);
		int32_t L_14;
		L_14 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5, __this, L_11, L_13);
		G_B10_0 = L_14;
	}

IL_0044:
	{
		V_1 = G_B10_0;
		int32_t L_15 = V_1;
		if (!L_15)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_17 = V_0;
		int32_t L_18;
		L_18 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_17, NULL);
		V_0 = L_18;
		goto IL_005e;
	}

IL_0056:
	{
		int32_t L_19 = V_0;
		int32_t L_20;
		L_20 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_19, NULL);
		V_0 = L_20;
	}

IL_005e:
	{
		int32_t L_21 = V_0;
		if (L_21)
		{
			goto IL_0023;
		}
	}

IL_0061:
	{
		int32_t L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 60384
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_get_Item_m6CB743851EBBBD1D9007D28700324EA0002F3107 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_1;
		L_1 = RBTree_1_GetNodeByIndex_m1925A1C6C371B002EE706C8EDEF3785E4AD148A8(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 42));
		int32_t L_2 = L_1.____nodeID;
		int32_t L_3;
		L_3 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 60385
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 RBTree_1_GetNodeByKey_mF4FE4024CADC8B1F8FABFA13EACA57E2B6F775F2 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = RBTree_1_SearchSubTree_m57C42F24D37D298A0566D530361F03F6F0EB76B2(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 48));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_2, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_4, NULL);
		int32_t L_6 = ___0_key;
		int32_t L_7;
		L_7 = RBTree_1_SearchSubTree_m57C42F24D37D298A0566D530361F03F6F0EB76B2(__this, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 48));
		int32_t L_8 = V_0;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_9;
		memset((&L_9), 0, sizeof(L_9));
		NodePath__ctor_m0FCF723AFBBA0142B8DC33B243EC222D8B3840F3((&L_9), L_7, L_8, NULL);
		return L_9;
	}

IL_0027:
	{
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = ___0_key;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18), &L_13);
		bool L_15;
		L_15 = Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B((&V_1), L_14, NULL);
		if (L_15)
		{
			goto IL_0046;
		}
	}
	{
		V_0 = 0;
	}

IL_0046:
	{
		int32_t L_16 = V_0;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_17;
		memset((&L_17), 0, sizeof(L_17));
		NodePath__ctor_m0FCF723AFBBA0142B8DC33B243EC222D8B3840F3((&L_17), L_16, 0, NULL);
		return L_17;
	}
}
// Method Definition Index: 60386
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByKey_mB3893DE20533883A9097426F8B65C6548CE78176 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (-1);
		int32_t L_0 = ___0_key;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_1;
		L_1 = RBTree_1_GetNodeByKey_mF4FE4024CADC8B1F8FABFA13EACA57E2B6F775F2(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
		V_1 = L_1;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_2 = V_1;
		int32_t L_3 = L_2.____nodeID;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_4 = V_1;
		int32_t L_5;
		L_5 = RBTree_1_GetIndexByNodePath_mF59D980A8D9F3D12CFE602F95AFDB04F6F6804C5(__this, L_4, NULL);
		V_0 = L_5;
	}

IL_001a:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 60387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByNode_m88D61B019FE6CFCFF5BA5E43320983A7019BC297 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_node, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____inUseSatelliteTreeCount;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___0_node;
		int32_t L_2;
		L_2 = RBTree_1_ComputeIndexByNode_mF54D314A27930CDEE19BE0B8DE58C63A7A6DABCD(__this, L_1, NULL);
		return L_2;
	}

IL_0010:
	{
		int32_t L_3 = ___0_node;
		int32_t L_4;
		L_4 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_3, NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_5 = ___0_node;
		int32_t L_6;
		L_6 = RBTree_1_ComputeIndexWithSatelliteByNode_m2A8640152375F25E6DFCB524E3C5E3762A819087(__this, L_5, NULL);
		return L_6;
	}

IL_0021:
	{
		int32_t L_7 = ___0_node;
		int32_t L_8;
		L_8 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_7, NULL);
		int32_t L_9;
		L_9 = RBTree_1_SearchSubTree_m57C42F24D37D298A0566D530361F03F6F0EB76B2(__this, 0, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 48));
		V_0 = L_9;
		int32_t L_10 = V_0;
		int32_t L_11 = ___0_node;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_12 = ___0_node;
		int32_t L_13;
		L_13 = RBTree_1_ComputeIndexWithSatelliteByNode_m2A8640152375F25E6DFCB524E3C5E3762A819087(__this, L_12, NULL);
		return L_13;
	}

IL_003c:
	{
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = RBTree_1_ComputeIndexWithSatelliteByNode_m2A8640152375F25E6DFCB524E3C5E3762A819087(__this, L_14, NULL);
		int32_t L_16 = ___0_node;
		int32_t L_17;
		L_17 = RBTree_1_ComputeIndexByNode_mF54D314A27930CDEE19BE0B8DE58C63A7A6DABCD(__this, L_16, NULL);
		return ((int32_t)il2cpp_codegen_add(L_15, L_17));
	}
}
// Method Definition Index: 60388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByNodePath_mF59D980A8D9F3D12CFE602F95AFDB04F6F6804C5 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 ___0_path, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____inUseSatelliteTreeCount;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_1 = ___0_path;
		int32_t L_2 = L_1.____nodeID;
		int32_t L_3;
		L_3 = RBTree_1_ComputeIndexByNode_mF54D314A27930CDEE19BE0B8DE58C63A7A6DABCD(__this, L_2, NULL);
		return L_3;
	}

IL_0015:
	{
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_4 = ___0_path;
		int32_t L_5 = L_4.____mainTreeNodeID;
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_6 = ___0_path;
		int32_t L_7 = L_6.____nodeID;
		int32_t L_8;
		L_8 = RBTree_1_ComputeIndexWithSatelliteByNode_m2A8640152375F25E6DFCB524E3C5E3762A819087(__this, L_7, NULL);
		return L_8;
	}

IL_002a:
	{
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_9 = ___0_path;
		int32_t L_10 = L_9.____mainTreeNodeID;
		int32_t L_11;
		L_11 = RBTree_1_ComputeIndexWithSatelliteByNode_m2A8640152375F25E6DFCB524E3C5E3762A819087(__this, L_10, NULL);
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_12 = ___0_path;
		int32_t L_13 = L_12.____nodeID;
		int32_t L_14;
		L_14 = RBTree_1_ComputeIndexByNode_mF54D314A27930CDEE19BE0B8DE58C63A7A6DABCD(__this, L_13, NULL);
		return ((int32_t)il2cpp_codegen_add(L_11, L_14));
	}
}
// Method Definition Index: 60389
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeIndexByNode_mF54D314A27930CDEE19BE0B8DE58C63A7A6DABCD (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_nodeId;
		int32_t L_1;
		L_1 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_0, NULL);
		int32_t L_2;
		L_2 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_1, NULL);
		V_0 = L_2;
		goto IL_0037;
	}

IL_0010:
	{
		int32_t L_3 = ___0_nodeId;
		int32_t L_4;
		L_4 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_3, NULL);
		V_1 = L_4;
		int32_t L_5 = ___0_nodeId;
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_6, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_9, NULL);
		int32_t L_11;
		L_11 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_10, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)il2cpp_codegen_add(L_11, 1))));
	}

IL_0034:
	{
		int32_t L_12 = V_1;
		___0_nodeId = L_12;
	}

IL_0037:
	{
		int32_t L_13 = ___0_nodeId;
		if (L_13)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_14 = V_0;
		return L_14;
	}
}
// Method Definition Index: 60390
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeIndexWithSatelliteByNode_m2A8640152375F25E6DFCB524E3C5E3762A819087 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	int32_t G_B5_2 = 0;
	{
		int32_t L_0 = ___0_nodeId;
		int32_t L_1;
		L_1 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_0, NULL);
		int32_t L_2;
		L_2 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_1, NULL);
		V_0 = L_2;
		goto IL_004f;
	}

IL_0010:
	{
		int32_t L_3 = ___0_nodeId;
		int32_t L_4;
		L_4 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_3, NULL);
		V_1 = L_4;
		int32_t L_5 = ___0_nodeId;
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_6, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_9, NULL);
		int32_t L_11;
		L_11 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_10, NULL);
		int32_t L_12 = V_1;
		int32_t L_13;
		L_13 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_12, NULL);
		if (!L_13)
		{
			G_B4_0 = L_11;
			G_B4_1 = L_8;
			goto IL_0048;
		}
		G_B3_0 = L_11;
		G_B3_1 = L_8;
	}
	{
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_14, NULL);
		int32_t L_16;
		L_16 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_15, NULL);
		G_B5_0 = L_16;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0049;
	}

IL_0048:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0049:
	{
		V_0 = ((int32_t)il2cpp_codegen_add(G_B5_2, ((int32_t)il2cpp_codegen_add(G_B5_1, G_B5_0))));
	}

IL_004c:
	{
		int32_t L_17 = V_1;
		___0_nodeId = L_17;
	}

IL_004f:
	{
		int32_t L_18 = ___0_nodeId;
		if (L_18)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_19 = V_0;
		return L_19;
	}
}
// Method Definition Index: 60391
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 RBTree_1_GetNodeByIndex_m1925A1C6C371B002EE706C8EDEF3785E4AD148A8 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_userIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____inUseSatelliteTreeCount;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = __this->___root;
		int32_t L_2 = ___0_userIndex;
		int32_t L_3;
		L_3 = RBTree_1_ComputeNodeByIndex_m1A87F9210DD3BF7304196AFC2FF45D6E3A507064(__this, L_1, ((int32_t)il2cpp_codegen_add(L_2, 1)), NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0026;
	}

IL_001c:
	{
		int32_t L_4 = ___0_userIndex;
		int32_t L_5;
		L_5 = RBTree_1_ComputeNodeByIndex_m6AC21A1EB09BF6660EF47F4D771F47534F2F9751(__this, L_4, (&V_1), NULL);
		V_0 = L_5;
	}

IL_0026:
	{
		int32_t L_6 = V_0;
		if (L_6)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_7 = __this->____accessMethod;
		if ((!(((uint32_t)2) == ((uint32_t)L_7))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = ___0_userIndex;
		Exception_t* L_9;
		L_9 = ExceptionBuilder_RowOutOfRange_m2F6883E5D2F9AF63A3F9DC5521799A7E270F1054(L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0039:
	{
		Exception_t* L_10;
		L_10 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(((int32_t)13), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0041:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_13;
		memset((&L_13), 0, sizeof(L_13));
		NodePath__ctor_m0FCF723AFBBA0142B8DC33B243EC222D8B3840F3((&L_13), L_11, L_12, NULL);
		return L_13;
	}
}
// Method Definition Index: 60392
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeNodeByIndex_m6AC21A1EB09BF6660EF47F4D771F47534F2F9751 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_index, int32_t* ___1_satelliteRootId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_index;
		___0_index = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t* L_1 = ___1_satelliteRootId;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_1, (int32_t)0);
		int32_t L_2 = __this->___root;
		V_0 = L_2;
		V_1 = (-1);
		goto IL_0088;
	}

IL_0013:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = V_1;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_5, NULL);
		V_0 = L_6;
		goto IL_0088;
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_7, NULL);
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_9 = ___0_index;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ___0_index;
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		int32_t L_14;
		L_14 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_13, NULL);
		int32_t L_15;
		L_15 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_14, NULL);
		if ((((int32_t)L_11) > ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_12, L_15)), 1)))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t* L_16 = ___1_satelliteRootId;
		int32_t L_17 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_16, (int32_t)L_17);
		int32_t L_18 = ___0_index;
		int32_t L_19 = V_1;
		___0_index = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_18, L_19)), 1));
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_20, NULL);
		int32_t L_22 = ___0_index;
		int32_t L_23;
		L_23 = RBTree_1_ComputeNodeByIndex_m1A87F9210DD3BF7304196AFC2FF45D6E3A507064(__this, L_21, L_22, NULL);
		return L_23;
	}

IL_005b:
	{
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_24, NULL);
		if (L_25)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_26 = ___0_index;
		int32_t L_27 = V_1;
		___0_index = ((int32_t)il2cpp_codegen_subtract(L_26, L_27));
		goto IL_0080;
	}

IL_006b:
	{
		int32_t L_28 = ___0_index;
		int32_t L_29 = V_1;
		int32_t L_30 = V_0;
		int32_t L_31;
		L_31 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_30, NULL);
		int32_t L_32;
		L_32 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_31, NULL);
		___0_index = ((int32_t)il2cpp_codegen_subtract(L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, L_32)), 1))));
	}

IL_0080:
	{
		int32_t L_33 = V_0;
		int32_t L_34;
		L_34 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_33, NULL);
		V_0 = L_34;
	}

IL_0088:
	{
		int32_t L_35 = V_0;
		if (!L_35)
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_36 = V_0;
		int32_t L_37;
		L_37 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_36, NULL);
		int32_t L_38;
		L_38 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_37, NULL);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		V_1 = L_39;
		int32_t L_40 = ___0_index;
		if ((!(((uint32_t)L_39) == ((uint32_t)L_40))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_41 = V_0;
		int32_t L_42;
		L_42 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_41, NULL);
		if (L_42)
		{
			goto IL_0013;
		}
	}

IL_00ae:
	{
		int32_t L_43 = V_0;
		return L_43;
	}
}
// Method Definition Index: 60393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeNodeByIndex_m1A87F9210DD3BF7304196AFC2FF45D6E3A507064 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		goto IL_002f;
	}

IL_0002:
	{
		int32_t L_0 = ___0_x_id;
		int32_t L_1;
		L_1 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_2, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = ___1_index;
		int32_t L_5 = V_1;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_6 = V_0;
		___0_x_id = L_6;
		goto IL_002f;
	}

IL_001d:
	{
		int32_t L_7 = V_1;
		int32_t L_8 = ___1_index;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_9 = ___0_x_id;
		int32_t L_10;
		L_10 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_9, NULL);
		___0_x_id = L_10;
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_1;
		___1_index = ((int32_t)il2cpp_codegen_subtract(L_11, L_12));
	}

IL_002f:
	{
		int32_t L_13 = ___0_x_id;
		if (L_13)
		{
			goto IL_0002;
		}
	}

IL_0032:
	{
		int32_t L_14 = ___0_x_id;
		return L_14;
	}
}
// Method Definition Index: 60394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Insert_m42434109EC7D9962C6C5C151208BB39B7F503419 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_item;
		int32_t L_1;
		L_1 = RBTree_1_GetNewNode_mF0CCB84B822853BFDC6AFE48116DDA1F77F10568(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = RBTree_1_RBInsert_m0B2330653BCF5430989431DAC32328E6EBBAED4E(__this, 0, L_2, 0, (-1), (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 60395
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Add_m89D1F5C6465A94C01A47855B3966C06B69E55969 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_item;
		int32_t L_1;
		L_1 = RBTree_1_GetNewNode_mF0CCB84B822853BFDC6AFE48116DDA1F77F10568(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = RBTree_1_RBInsert_m0B2330653BCF5430989431DAC32328E6EBBAED4E(__this, 0, L_2, 0, (-1), (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 60396
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTree_1_GetEnumerator_m69FD7C9F88127D1B135BFEA11640F79995101010 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115 L_0;
		memset((&L_0), 0, sizeof(L_0));
		RBTreeEnumerator__ctor_m2733AFDE89B7B2489A1BDA8AED77CB198FB6AE6E((&L_0), __this, NULL);
		RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 56), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 60397
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_IndexOf_m1A15AAD706F9931B99D4225D76D45140B09D6F74 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		int32_t L_0 = ___0_nodeId;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_1 = ___0_nodeId;
		int32_t L_2;
		L_2 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_1, NULL);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18), &L_3);
		int32_t L_5 = ___1_item;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18), &L_6);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(RuntimeObject*)L_7))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_8 = ___0_nodeId;
		int32_t L_9;
		L_9 = RBTree_1_GetIndexByNode_m88D61B019FE6CFCFF5BA5E43320983A7019BC297(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 58));
		return L_9;
	}

IL_0021:
	{
		int32_t L_10 = ___0_nodeId;
		int32_t L_11;
		L_11 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_10, NULL);
		int32_t L_12 = ___1_item;
		int32_t L_13;
		L_13 = RBTree_1_IndexOf_m1A15AAD706F9931B99D4225D76D45140B09D6F74(__this, L_11, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 59));
		int32_t L_14 = L_13;
		V_0 = L_14;
		if ((((int32_t)L_14) == ((int32_t)(-1))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_15 = V_0;
		return L_15;
	}

IL_0036:
	{
		int32_t L_16 = ___0_nodeId;
		int32_t L_17;
		L_17 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_16, NULL);
		int32_t L_18 = ___1_item;
		int32_t L_19;
		L_19 = RBTree_1_IndexOf_m1A15AAD706F9931B99D4225D76D45140B09D6F74(__this, L_17, L_18, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 59));
		int32_t L_20 = L_19;
		V_0 = L_20;
		int32_t L_21 = V_0;
		return L_21;
	}

IL_004b:
	{
		int32_t L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 60398
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Insert_m0A0F524F3BD046708BD7A5DB13A4AA939D96D31C (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_position, int32_t ___1_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_position;
		int32_t L_1 = ___1_item;
		int32_t L_2;
		L_2 = RBTree_1_InsertAt_mC52B6134B733A4D25B2F3621177144038C005B4F(__this, L_0, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 60));
		return L_2;
	}
}
// Method Definition Index: 60399
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_InsertAt_mC52B6134B733A4D25B2F3621177144038C005B4F (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_position, int32_t ___1_item, bool ___2_append, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_item;
		int32_t L_1;
		L_1 = RBTree_1_GetNewNode_mF0CCB84B822853BFDC6AFE48116DDA1F77F10568(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___0_position;
		bool L_4 = ___2_append;
		int32_t L_5;
		L_5 = RBTree_1_RBInsert_m0B2330653BCF5430989431DAC32328E6EBBAED4E(__this, 0, L_2, 0, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 60400
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_RemoveAt_m08FF17CF03AA93867AE42791691F967386AFB716 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_position;
		int32_t L_1;
		L_1 = RBTree_1_DeleteByIndex_m46F2E47E9EE4CDEB58E225ED10A54A4C31F485B6(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 61));
		return;
	}
}
// Method Definition Index: 60401
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_Clear_m2FC29230F5DF876A67B0ABDCA2D2DE205166C385 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RBTree_1_InitTree_mCF091A660A304A14A09AB4C817AF26E1585EA323(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
// Method Definition Index: 60402
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_CopyTo_m8A396AD86818911F4C70E42BB8969FC6584093A3 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t* L_1;
		L_1 = ExceptionBuilder_ArgumentNull_m2F21453F5BE7814A0D05A058EAC09F2391F99DA8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_ArgumentOutOfRange_mEF2909680ADBD4B5228E611EDEBBA048D7DF219E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001d:
	{
		int32_t L_4;
		L_4 = RBTree_1_get_Count_mD78C552E837675F90BD804EFADB6BC40A38C0615(__this, NULL);
		V_0 = L_4;
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = il2cpp_codegen_array_get_length(L_5);
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = RBTree_1_get_Count_mD78C552E837675F90BD804EFADB6BC40A38C0615(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7))) >= ((int32_t)L_8)))
		{
			goto IL_003a;
		}
	}
	{
		Exception_t* L_9;
		L_9 = ExceptionBuilder_InvalidOffsetLength_m25F593A3DD72EEDCF3B7F8616D41CD7677BD6073(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_003a:
	{
		int32_t L_10 = __this->___root;
		int32_t L_11;
		L_11 = RBTree_1_Minimum_m504331C88F6C6D70AA7930B661AC172AC26E1844(__this, L_10, NULL);
		V_1 = L_11;
		V_2 = 0;
		goto IL_006c;
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		int32_t L_13 = V_1;
		int32_t L_14;
		L_14 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_13, NULL);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18), &L_15);
		int32_t L_17 = ___1_index;
		int32_t L_18 = V_2;
		NullCheck(L_12);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_12, L_16, ((int32_t)il2cpp_codegen_add(L_17, L_18)), NULL);
		int32_t L_19 = V_1;
		int32_t L_20;
		L_20 = RBTree_1_Successor_mD725A36AE3B97C64315EA2030135F2ED92601A7B(__this, L_19, NULL);
		V_1 = L_20;
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_006c:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004b;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 60403
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_CopyTo_mF41FDE1C3EB16CBA24B3F43FB7590B27E8612500 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t* L_1;
		L_1 = ExceptionBuilder_ArgumentNull_m2F21453F5BE7814A0D05A058EAC09F2391F99DA8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_ArgumentOutOfRange_mEF2909680ADBD4B5228E611EDEBBA048D7DF219E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001d:
	{
		int32_t L_4;
		L_4 = RBTree_1_get_Count_mD78C552E837675F90BD804EFADB6BC40A38C0615(__this, NULL);
		V_0 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = RBTree_1_get_Count_mD78C552E837675F90BD804EFADB6BC40A38C0615(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0037;
		}
	}
	{
		Exception_t* L_9;
		L_9 = ExceptionBuilder_InvalidOffsetLength_m25F593A3DD72EEDCF3B7F8616D41CD7677BD6073(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0037:
	{
		int32_t L_10 = __this->___root;
		int32_t L_11;
		L_11 = RBTree_1_Minimum_m504331C88F6C6D70AA7930B661AC172AC26E1844(__this, L_10, NULL);
		V_1 = L_11;
		V_2 = 0;
		goto IL_0064;
	}

IL_0048:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = V_2;
		int32_t L_15 = V_1;
		int32_t L_16;
		L_16 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_15, NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, L_14))), (int32_t)L_16);
		int32_t L_17 = V_1;
		int32_t L_18;
		L_18 = RBTree_1_Successor_mD725A36AE3B97C64315EA2030135F2ED92601A7B(__this, L_17, NULL);
		V_1 = L_18;
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0064:
	{
		int32_t L_20 = V_2;
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0048;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 60404
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_rightNodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_rightNodeId;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____rightId = L_6;
		return;
	}
}
// Method Definition Index: 60405
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_leftNodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_leftNodeId;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____leftId = L_6;
		return;
	}
}
// Method Definition Index: 60406
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_parentNodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_parentNodeId;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____parentId = L_6;
		return;
	}
}
// Method Definition Index: 60407
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_color, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_color;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____nodeColor = L_6;
		return;
	}
}
// Method Definition Index: 60408
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_key;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____keyOfNode = L_6;
		return;
	}
}
// Method Definition Index: 60409
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_nextNodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_nextNodeId;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____nextId = L_6;
		return;
	}
}
// Method Definition Index: 60410
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_size, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_size;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____subTreeSize = L_6;
		return;
	}
}
// Method Definition Index: 60411
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_IncreaseSize_m613975F4AD06761B3DD9F26BC8162B71413A26C8 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t* L_6 = (int32_t*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____subTreeSize);
		int32_t* L_7 = L_6;
		int32_t L_8 = il2cpp_codegen_ldind<int32_t, int32_t>(L_7);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_7, (int32_t)((int32_t)il2cpp_codegen_add(L_8, 1)));
		return;
	}
}
// Method Definition Index: 60412
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_RecomputeSize_mE849917C6B9CE571D95FFA5AE30E1E7CDB24310A (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		int32_t L_0 = ___0_nodeId;
		int32_t L_1;
		L_1 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_0, NULL);
		int32_t L_2;
		L_2 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_1, NULL);
		int32_t L_3 = ___0_nodeId;
		int32_t L_4;
		L_4 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_3, NULL);
		int32_t L_5;
		L_5 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_4, NULL);
		int32_t L_6 = ___0_nodeId;
		int32_t L_7;
		L_7 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_6, NULL);
		if (!L_7)
		{
			G_B2_0 = ((int32_t)il2cpp_codegen_add(L_2, L_5));
			goto IL_0033;
		}
		G_B1_0 = ((int32_t)il2cpp_codegen_add(L_2, L_5));
	}
	{
		int32_t L_8 = ___0_nodeId;
		int32_t L_9;
		L_9 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_8, NULL);
		int32_t L_10;
		L_10 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_9, NULL);
		G_B3_0 = L_10;
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		V_0 = ((int32_t)il2cpp_codegen_add(G_B3_1, G_B3_0));
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_11 = __this->____pageTable;
		int32_t L_12 = ___0_nodeId;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)(L_12>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_15 = L_14->____slots;
		int32_t L_16 = ___0_nodeId;
		NullCheck(L_15);
		int32_t L_17 = V_0;
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_16&((int32_t)65535))))))->____subTreeSize = L_17;
		return;
	}
}
// Method Definition Index: 60413
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_DecreaseSize_m2CC82F8846D718DBC61F565C78775A068556E52F (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t* L_6 = (int32_t*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____subTreeSize);
		int32_t* L_7 = L_6;
		int32_t L_8 = il2cpp_codegen_ldind<int32_t, int32_t>(L_7);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_7, (int32_t)((int32_t)il2cpp_codegen_subtract(L_8, 1)));
		return;
	}
}
// Method Definition Index: 60414
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____rightId;
		return L_6;
	}
}
// Method Definition Index: 60415
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____leftId;
		return L_6;
	}
}
// Method Definition Index: 60416
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____parentId;
		return L_6;
	}
}
// Method Definition Index: 60417
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____nodeColor;
		return L_6;
	}
}
// Method Definition Index: 60418
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____nextId;
		return L_6;
	}
}
// Method Definition Index: 60419
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____subTreeSize;
		return L_6;
	}
}
// Method Definition Index: 60420
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____keyOfNode;
		return L_6;
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
// Method Definition Index: 60360
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1__ctor_mB1EAE820984022B1FAA81A64D531D3EB6F6E8571_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_accessMethod, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_accessMethod;
		__this->____accessMethod = L_0;
		RBTree_1_InitTree_mB4E9EFD37104F6D38AB761F3E4D895745AC2D002(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 60361
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_InitTree_mB4E9EFD37104F6D38AB761F3E4D895745AC2D002_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		__this->___root = 0;
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_0 = (TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52*)(TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)((int32_t)32));
		__this->____pageTable = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageTable), (void*)L_0);
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_1 = __this->____pageTable;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_2, ((int32_t)32))), 1))/((int32_t)32))));
		__this->____pageTableMap = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageTableMap), (void*)L_3);
		__this->____inUsePageCount = 0;
		__this->____nextFreePageLine = 0;
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_4;
		L_4 = RBTree_1_AllocPage_m84FC966EA9AFC28ED05DA34CC22340CD10A486FB(__this, ((int32_t)32), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_5 = __this->____pageTable;
		NullCheck(L_5);
		int32_t L_6 = 0;
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653* L_8 = L_7->____slots;
		NullCheck(L_8);
		((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->____nodeColor = (int32_t)1;
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_9 = __this->____pageTable;
		NullCheck(L_9);
		int32_t L_10 = 0;
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = L_11->____slotMap;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_13 = __this->____pageTable;
		NullCheck(L_13);
		int32_t L_14 = 0;
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		TreePage_set_InUseCount_mFF2D7912FE4FB51AD029F4EA6EB15567F19A425D_inline(L_15, 1, NULL);
		__this->____inUseNodeCount = 1;
		__this->____inUseSatelliteTreeCount = 0;
		return;
	}
}
// Method Definition Index: 60362
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_FreePage_m02920F187E1C52D2A7E325B08685D3BC171A55F9_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* ___0_page, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_0 = ___0_page;
		RBTree_1_MarkPageFree_m5546C110128A1D0E80DC9D74B0425E7ACFAA9672(__this, L_0, NULL);
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_1 = __this->____pageTable;
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_2 = ___0_page;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = TreePage_get_PageId_m2959421A31AD502FB660044B7F735EAA89824FB2_inline(L_2, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, NULL);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD*)NULL);
		int32_t L_4 = __this->____inUsePageCount;
		__this->____inUsePageCount = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		return;
	}
}
// Method Definition Index: 60363
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* RBTree_1_AllocPage_m84FC966EA9AFC28ED05DA34CC22340CD10A486FB_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	{
		int32_t L_0;
		L_0 = RBTree_1_GetIndexOfPageWithFreeSlot_m0379C10FF75C8AED424C8E0D9A5834A18BEBE710(__this, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_2 = __this->____pageTable;
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_size;
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_5 = (TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
		TreePage__ctor_m8441E60D204F8F3B8FBF96726C918F8BFD088BD5(L_5, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD*)L_5);
		int32_t L_6 = V_0;
		__this->____nextFreePageLine = ((int32_t)(L_6/((int32_t)32)));
		goto IL_00a9;
	}

IL_0029:
	{
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_7 = __this->____pageTable;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_9 = (TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52*)(TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)((int32_t)il2cpp_codegen_multiply(L_8, 2)));
		V_1 = L_9;
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_10 = __this->____pageTable;
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_11 = V_1;
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_12 = __this->____pageTable;
		NullCheck(L_12);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, 0, (RuntimeArray*)L_11, 0, L_13, NULL);
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_15, ((int32_t)32))), 1))/((int32_t)32))));
		V_2 = L_16;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->____pageTableMap;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = __this->____pageTableMap;
		NullCheck(L_19);
		int32_t L_20 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_19)->max_length),NULL));
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_17, 0, (RuntimeArray*)L_18, 0, L_20, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____pageTableMap;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		__this->____nextFreePageLine = L_22;
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_23 = __this->____pageTable;
		NullCheck(L_23);
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		V_0 = L_24;
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_25 = V_1;
		__this->____pageTable = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageTable), (void*)L_25);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_2;
		__this->____pageTableMap = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageTableMap), (void*)L_26);
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_27 = __this->____pageTable;
		int32_t L_28 = V_0;
		int32_t L_29 = ___0_size;
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_30 = (TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
		TreePage__ctor_m8441E60D204F8F3B8FBF96726C918F8BFD088BD5(L_30, L_29, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD*)L_30);
	}

IL_00a9:
	{
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_31 = __this->____pageTable;
		int32_t L_32 = V_0;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = V_0;
		NullCheck(L_34);
		TreePage_set_PageId_mFE29414DE74DE5AABA637BC8EE4168D233DC19A7_inline(L_34, L_35, NULL);
		int32_t L_36 = __this->____inUsePageCount;
		__this->____inUsePageCount = ((int32_t)il2cpp_codegen_add(L_36, 1));
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_37 = __this->____pageTable;
		int32_t L_38 = V_0;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		return L_40;
	}
}
// Method Definition Index: 60364
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_MarkPageFull_mC5C22ADF52DD1D5CC81247F63F85E0612C05BBFB_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* ___0_page, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____pageTableMap;
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_1 = ___0_page;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = TreePage_get_PageId_m2959421A31AD502FB660044B7F735EAA89824FB2_inline(L_1, NULL);
		NullCheck(L_0);
		int32_t* L_3 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_2/((int32_t)32))))));
		int32_t L_4 = il2cpp_codegen_ldind<int32_t, int32_t>(L_3);
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_5 = ___0_page;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = TreePage_get_PageId_m2959421A31AD502FB660044B7F735EAA89824FB2_inline(L_5, NULL);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_3, (int32_t)((int32_t)(L_4|((int32_t)(1<<((int32_t)(((int32_t)(L_6%((int32_t)32)))&((int32_t)31))))))));
		return;
	}
}
// Method Definition Index: 60365
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_MarkPageFree_m5546C110128A1D0E80DC9D74B0425E7ACFAA9672_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* ___0_page, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____pageTableMap;
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_1 = ___0_page;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = TreePage_get_PageId_m2959421A31AD502FB660044B7F735EAA89824FB2_inline(L_1, NULL);
		NullCheck(L_0);
		int32_t* L_3 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_2/((int32_t)32))))));
		int32_t L_4 = il2cpp_codegen_ldind<int32_t, int32_t>(L_3);
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_5 = ___0_page;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = TreePage_get_PageId_m2959421A31AD502FB660044B7F735EAA89824FB2_inline(L_5, NULL);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_3, (int32_t)((int32_t)(L_4&((~((int32_t)(1<<((int32_t)(((int32_t)(L_6%((int32_t)32)))&((int32_t)31))))))))));
		return;
	}
}
// Method Definition Index: 60366
// Method Definition Index: 60367
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_FreeNode_m7220658BAE2D8425FEADC3455CD9435D1752BA21_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		int32_t L_4 = ___0_nodeId;
		V_1 = ((int32_t)(L_4&((int32_t)65535)));
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_5 = V_0;
		NullCheck(L_5);
		NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653* L_6 = L_5->____slots;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_initobj(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), sizeof(Node_t299905C052EE0D8A835E38326073B23299A2B8A1));
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_8 = V_0;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->____slotMap;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t* L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/((int32_t)32))))));
		int32_t L_12 = il2cpp_codegen_ldind<int32_t, int32_t>(L_11);
		int32_t L_13 = V_1;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_11, (int32_t)((int32_t)(L_12&((~((int32_t)(1<<((int32_t)(((int32_t)(L_13%((int32_t)32)))&((int32_t)31))))))))));
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_14 = V_0;
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = TreePage_get_InUseCount_mB47BCDDF9F5A3D9F15D5491982B20F7088EA9557_inline(L_15, NULL);
		V_2 = L_16;
		int32_t L_17 = V_2;
		NullCheck(L_15);
		TreePage_set_InUseCount_mFF2D7912FE4FB51AD029F4EA6EB15567F19A425D_inline(L_15, ((int32_t)il2cpp_codegen_subtract(L_17, 1)), NULL);
		int32_t L_18 = __this->____inUseNodeCount;
		__this->____inUseNodeCount = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = TreePage_get_InUseCount_mB47BCDDF9F5A3D9F15D5491982B20F7088EA9557_inline(L_19, NULL);
		if (L_20)
		{
			goto IL_0071;
		}
	}
	{
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_21 = V_0;
		RBTree_1_FreePage_m02920F187E1C52D2A7E325B08685D3BC171A55F9(__this, L_21, NULL);
		return;
	}

IL_0071:
	{
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = TreePage_get_InUseCount_mB47BCDDF9F5A3D9F15D5491982B20F7088EA9557_inline(L_22, NULL);
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_24 = V_0;
		NullCheck(L_24);
		NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653* L_25 = L_24->____slots;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_26, 1))))))
		{
			goto IL_008a;
		}
	}
	{
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_27 = V_0;
		RBTree_1_MarkPageFree_m5546C110128A1D0E80DC9D74B0425E7ACFAA9672(__this, L_27, NULL);
	}

IL_008a:
	{
		return;
	}
}
// Method Definition Index: 60368
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexOfPageWithFreeSlot_m0379C10FF75C8AED424C8E0D9A5834A18BEBE710_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, bool ___0_allocatedPage, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		int32_t L_0 = __this->____nextFreePageLine;
		V_0 = L_0;
		V_1 = (-1);
		goto IL_0073;
	}

IL_000b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____pageTableMap;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((!(((uint32_t)L_4) < ((uint32_t)(-1)))))
		{
			goto IL_006f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____pageTableMap;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		goto IL_006a;
	}

IL_0021:
	{
		uint32_t L_9 = V_2;
		uint32_t L_10 = V_2;
		V_3 = ((int32_t)(((~((int32_t)L_9)))&((int32_t)il2cpp_codegen_add((int32_t)L_10, 1))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____pageTableMap;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int64_t L_15 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_14,NULL));
		uint32_t L_16 = V_3;
		uint64_t L_17 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_16,NULL));
		if (!((int64_t)(L_15&(int64_t)L_17)))
		{
			goto IL_003d;
		}
	}
	{
		Exception_t* L_18;
		L_18 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_003d:
	{
		int32_t L_19 = V_0;
		uint32_t L_20 = V_3;
		int32_t L_21;
		L_21 = RBTree_1_GetIntValueFromBitMap_m2A2C58CFA901D39A02C233D0BF42F3D7EFB44540(L_20, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_19, ((int32_t)32))), L_21));
		bool L_22 = ___0_allocatedPage;
		if (!L_22)
		{
			goto IL_0058;
		}
	}
	{
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_23 = __this->____pageTable;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		if (!L_26)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_27 = V_1;
		return L_27;
	}

IL_0058:
	{
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_28 = __this->____pageTable;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		if (L_31)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_32 = V_1;
		return L_32;
	}

IL_0064:
	{
		V_1 = (-1);
		uint32_t L_33 = V_2;
		uint32_t L_34 = V_3;
		V_2 = ((int32_t)((int32_t)L_33|(int32_t)L_34));
	}

IL_006a:
	{
		uint32_t L_35 = V_2;
		if (((int32_t)((int32_t)L_35^(-1))))
		{
			goto IL_0021;
		}
	}

IL_006f:
	{
		int32_t L_36 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_0073:
	{
		int32_t L_37 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____pageTableMap;
		NullCheck(L_38);
		int32_t L_39 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_38)->max_length),NULL));
		if ((((int32_t)L_37) < ((int32_t)L_39)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_40 = __this->____nextFreePageLine;
		if (!L_40)
		{
			goto IL_0095;
		}
	}
	{
		__this->____nextFreePageLine = 0;
		bool L_41 = ___0_allocatedPage;
		int32_t L_42;
		L_42 = RBTree_1_GetIndexOfPageWithFreeSlot_m0379C10FF75C8AED424C8E0D9A5834A18BEBE710(__this, L_41, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_1 = L_42;
	}

IL_0095:
	{
		int32_t L_43 = V_1;
		return L_43;
	}
}
// Method Definition Index: 60369
// Method Definition Index: 60370
// Method Definition Index: 60371
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetNewNode_m5863E283C2B738283FF751E044EC017FA269C542_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD*)NULL;
		int32_t L_0;
		L_0 = RBTree_1_GetIndexOfPageWithFreeSlot_m0379C10FF75C8AED424C8E0D9A5834A18BEBE710(__this, (bool)1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_1 = L_0;
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_001c;
		}
	}
	{
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_2 = __this->____pageTable;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		goto IL_00a5;
	}

IL_001c:
	{
		int32_t L_6 = __this->____inUsePageCount;
		if ((((int32_t)L_6) >= ((int32_t)4)))
		{
			goto IL_0030;
		}
	}
	{
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_7;
		L_7 = RBTree_1_AllocPage_m84FC966EA9AFC28ED05DA34CC22340CD10A486FB(__this, ((int32_t)32), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_0 = L_7;
		goto IL_00a5;
	}

IL_0030:
	{
		int32_t L_8 = __this->____inUsePageCount;
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)32))))
		{
			goto IL_0048;
		}
	}
	{
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_9;
		L_9 = RBTree_1_AllocPage_m84FC966EA9AFC28ED05DA34CC22340CD10A486FB(__this, ((int32_t)256), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_0 = L_9;
		goto IL_00a5;
	}

IL_0048:
	{
		int32_t L_10 = __this->____inUsePageCount;
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0063;
		}
	}
	{
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_11;
		L_11 = RBTree_1_AllocPage_m84FC966EA9AFC28ED05DA34CC22340CD10A486FB(__this, ((int32_t)1024), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_0 = L_11;
		goto IL_00a5;
	}

IL_0063:
	{
		int32_t L_12 = __this->____inUsePageCount;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)4096))))
		{
			goto IL_007e;
		}
	}
	{
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_13;
		L_13 = RBTree_1_AllocPage_m84FC966EA9AFC28ED05DA34CC22340CD10A486FB(__this, ((int32_t)4096), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_0 = L_13;
		goto IL_00a5;
	}

IL_007e:
	{
		int32_t L_14 = __this->____inUsePageCount;
		if ((((int32_t)L_14) >= ((int32_t)((int32_t)32768))))
		{
			goto IL_0099;
		}
	}
	{
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_15;
		L_15 = RBTree_1_AllocPage_m84FC966EA9AFC28ED05DA34CC22340CD10A486FB(__this, ((int32_t)8192), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_0 = L_15;
		goto IL_00a5;
	}

IL_0099:
	{
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_16;
		L_16 = RBTree_1_AllocPage_m84FC966EA9AFC28ED05DA34CC22340CD10A486FB(__this, ((int32_t)65536), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_0 = L_16;
	}

IL_00a5:
	{
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = TreePage_AllocSlot_m03CBA01A6EC2A97DA8820AF6BA061837EF01856D(L_17, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		V_2 = L_18;
		int32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_00b8;
		}
	}
	{
		Exception_t* L_20;
		L_20 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_00b8:
	{
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_21 = V_0;
		NullCheck(L_21);
		NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653* L_22 = L_21->____slots;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = TreePage_get_PageId_m2959421A31AD502FB660044B7F735EAA89824FB2_inline(L_24, NULL);
		int32_t L_26 = V_2;
		((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->____selfId = ((int32_t)(((int32_t)(L_25<<((int32_t)16)))|L_26));
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_27 = V_0;
		NullCheck(L_27);
		NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653* L_28 = L_27->____slots;
		int32_t L_29 = V_2;
		NullCheck(L_28);
		((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->____subTreeSize = 1;
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_30 = V_0;
		NullCheck(L_30);
		NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653* L_31 = L_30->____slots;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		Il2CppSharedGenericObject* L_33 = ___0_key;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->____keyOfNode = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->____keyOfNode), (void*)L_33);
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_34 = V_0;
		NullCheck(L_34);
		NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653* L_35 = L_34->____slots;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		int32_t L_37 = ((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->____selfId;
		return L_37;
	}
}
// Method Definition Index: 60372
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Successor_m66C0B2AECF8F8BFE3CF4E25F4995C30C80474F62_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_x_id, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_x_id;
		int32_t L_1;
		L_1 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = ___0_x_id;
		int32_t L_3;
		L_3 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_2, NULL);
		int32_t L_4;
		L_4 = RBTree_1_Minimum_m92638EC28D7B4C793E87489440C5381402073712(__this, L_3, NULL);
		return L_4;
	}

IL_0017:
	{
		int32_t L_5 = ___0_x_id;
		int32_t L_6;
		L_6 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_5, NULL);
		V_0 = L_6;
		goto IL_002c;
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		___0_x_id = L_7;
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_8, NULL);
		V_0 = L_9;
	}

IL_002c:
	{
		int32_t L_10 = V_0;
		if (!L_10)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_11 = ___0_x_id;
		int32_t L_12 = V_0;
		int32_t L_13;
		L_13 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_12, NULL);
		if ((((int32_t)L_11) == ((int32_t)L_13)))
		{
			goto IL_0021;
		}
	}

IL_0039:
	{
		int32_t L_14 = V_0;
		return L_14;
	}
}
// Method Definition Index: 60373
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTree_1_Successor_mD782B968CE5256E83614B6E8445F37F5F9A9592B_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t* ___0_nodeId, int32_t* ___1_mainTreeNodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t* L_0 = ___0_nodeId;
		int32_t L_1 = il2cpp_codegen_ldind<int32_t, int32_t>(L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t* L_2 = ___0_nodeId;
		int32_t* L_3 = ___1_mainTreeNodeId;
		int32_t L_4 = il2cpp_codegen_ldind<int32_t, int32_t>(L_3);
		int32_t L_5;
		L_5 = RBTree_1_Minimum_m92638EC28D7B4C793E87489440C5381402073712(__this, L_4, NULL);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_2, (int32_t)L_5);
		int32_t* L_6 = ___1_mainTreeNodeId;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_6, (int32_t)0);
		goto IL_0032;
	}

IL_0013:
	{
		int32_t* L_7 = ___0_nodeId;
		int32_t* L_8 = ___0_nodeId;
		int32_t L_9 = il2cpp_codegen_ldind<int32_t, int32_t>(L_8);
		int32_t L_10;
		L_10 = RBTree_1_Successor_m66C0B2AECF8F8BFE3CF4E25F4995C30C80474F62(__this, L_9, NULL);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_7, (int32_t)L_10);
		int32_t* L_11 = ___0_nodeId;
		int32_t L_12 = il2cpp_codegen_ldind<int32_t, int32_t>(L_11);
		if (L_12)
		{
			goto IL_0032;
		}
	}
	{
		int32_t* L_13 = ___1_mainTreeNodeId;
		int32_t L_14 = il2cpp_codegen_ldind<int32_t, int32_t>(L_13);
		if (!L_14)
		{
			goto IL_0032;
		}
	}
	{
		int32_t* L_15 = ___0_nodeId;
		int32_t* L_16 = ___1_mainTreeNodeId;
		int32_t L_17 = il2cpp_codegen_ldind<int32_t, int32_t>(L_16);
		int32_t L_18;
		L_18 = RBTree_1_Successor_m66C0B2AECF8F8BFE3CF4E25F4995C30C80474F62(__this, L_17, NULL);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_15, (int32_t)L_18);
		int32_t* L_19 = ___1_mainTreeNodeId;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_19, (int32_t)0);
	}

IL_0032:
	{
		int32_t* L_20 = ___0_nodeId;
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(L_20);
		if (!L_21)
		{
			goto IL_0062;
		}
	}
	{
		int32_t* L_22 = ___0_nodeId;
		int32_t L_23 = il2cpp_codegen_ldind<int32_t, int32_t>(L_22);
		int32_t L_24;
		L_24 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_23, NULL);
		if (!L_24)
		{
			goto IL_0060;
		}
	}
	{
		int32_t* L_25 = ___1_mainTreeNodeId;
		int32_t L_26 = il2cpp_codegen_ldind<int32_t, int32_t>(L_25);
		if (!L_26)
		{
			goto IL_004c;
		}
	}
	{
		Exception_t* L_27;
		L_27 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(((int32_t)21), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, method);
	}

IL_004c:
	{
		int32_t* L_28 = ___1_mainTreeNodeId;
		int32_t* L_29 = ___0_nodeId;
		int32_t L_30 = il2cpp_codegen_ldind<int32_t, int32_t>(L_29);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_28, (int32_t)L_30);
		int32_t* L_31 = ___0_nodeId;
		int32_t* L_32 = ___0_nodeId;
		int32_t L_33 = il2cpp_codegen_ldind<int32_t, int32_t>(L_32);
		int32_t L_34;
		L_34 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_33, NULL);
		int32_t L_35;
		L_35 = RBTree_1_Minimum_m92638EC28D7B4C793E87489440C5381402073712(__this, L_34, NULL);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_31, (int32_t)L_35);
	}

IL_0060:
	{
		return (bool)1;
	}

IL_0062:
	{
		return (bool)0;
	}
}
// Method Definition Index: 60374
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Minimum_m92638EC28D7B4C793E87489440C5381402073712_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_x_id, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		goto IL_000b;
	}

IL_0002:
	{
		int32_t L_0 = ___0_x_id;
		int32_t L_1;
		L_1 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_0, NULL);
		___0_x_id = L_1;
	}

IL_000b:
	{
		int32_t L_2 = ___0_x_id;
		int32_t L_3;
		L_3 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_2, NULL);
		if (L_3)
		{
			goto IL_0002;
		}
	}
	{
		int32_t L_4 = ___0_x_id;
		return L_4;
	}
}
// Method Definition Index: 60375
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_LeftRotate_m55B3DB5BA7A99F3CE718200614DD64362EAB0895_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* G_B12_2 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* G_B11_2 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* G_B13_3 = NULL;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* G_B17_2 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* G_B16_2 = NULL;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* G_B18_3 = NULL;
	{
		int32_t L_0 = ___1_x_id;
		int32_t L_1;
		L_1 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = ___1_x_id;
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_3, NULL);
		RBTree_1_SetRight_mCA90AE8051905DE68BD794277CB3A6F4D7273ED1(__this, L_2, L_4, NULL);
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_5, NULL);
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_7, NULL);
		int32_t L_9 = ___1_x_id;
		RBTree_1_SetParent_m5CA27D9474EC84E5A8823FE803C60CC047572643(__this, L_8, L_9, NULL);
	}

IL_002d:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_x_id;
		int32_t L_12;
		L_12 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_11, NULL);
		RBTree_1_SetParent_m5CA27D9474EC84E5A8823FE803C60CC047572643(__this, L_10, L_12, NULL);
		int32_t L_13 = ___1_x_id;
		int32_t L_14;
		L_14 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_13, NULL);
		if (L_14)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_15 = ___0_root_id;
		if (L_15)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_16 = V_0;
		__this->___root = L_16;
		goto IL_0099;
	}

IL_0050:
	{
		int32_t L_17 = ___2_mainTreeNode;
		int32_t L_18 = V_0;
		RBTree_1_SetNext_mC0DDCD6E5A9738375AF9890D1F11478F03054565(__this, L_17, L_18, NULL);
		int32_t L_19 = ___2_mainTreeNode;
		int32_t L_20 = V_0;
		Il2CppSharedGenericObject* L_21;
		L_21 = RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99(__this, L_20, NULL);
		RBTree_1_SetKey_m5B037F7426364C8491931FA06665AEBB3C22799B(__this, L_19, L_21, NULL);
		int32_t L_22 = V_0;
		___0_root_id = L_22;
		goto IL_0099;
	}

IL_006b:
	{
		int32_t L_23 = ___1_x_id;
		int32_t L_24 = ___1_x_id;
		int32_t L_25;
		L_25 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_24, NULL);
		int32_t L_26;
		L_26 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_25, NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_26))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_27 = ___1_x_id;
		int32_t L_28;
		L_28 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_27, NULL);
		int32_t L_29 = V_0;
		RBTree_1_SetLeft_m1053D96D9AE2E6EBF34B5C1D9A449C5531FA59B3(__this, L_28, L_29, NULL);
		goto IL_0099;
	}

IL_008b:
	{
		int32_t L_30 = ___1_x_id;
		int32_t L_31;
		L_31 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_30, NULL);
		int32_t L_32 = V_0;
		RBTree_1_SetRight_mCA90AE8051905DE68BD794277CB3A6F4D7273ED1(__this, L_31, L_32, NULL);
	}

IL_0099:
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___1_x_id;
		RBTree_1_SetLeft_m1053D96D9AE2E6EBF34B5C1D9A449C5531FA59B3(__this, L_33, L_34, NULL);
		int32_t L_35 = ___1_x_id;
		int32_t L_36 = V_0;
		RBTree_1_SetParent_m5CA27D9474EC84E5A8823FE803C60CC047572643(__this, L_35, L_36, NULL);
		int32_t L_37 = ___1_x_id;
		if (!L_37)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_38 = ___1_x_id;
		int32_t L_39 = ___1_x_id;
		int32_t L_40;
		L_40 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_39, NULL);
		int32_t L_41;
		L_41 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_40, NULL);
		int32_t L_42 = ___1_x_id;
		int32_t L_43;
		L_43 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_42, NULL);
		int32_t L_44;
		L_44 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_43, NULL);
		int32_t L_45 = ___1_x_id;
		int32_t L_46;
		L_46 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_45, NULL);
		if (!L_46)
		{
			G_B12_0 = ((int32_t)il2cpp_codegen_add(L_41, L_44));
			G_B12_1 = L_38;
			G_B12_2 = __this;
			goto IL_00e1;
		}
		G_B11_0 = ((int32_t)il2cpp_codegen_add(L_41, L_44));
		G_B11_1 = L_38;
		G_B11_2 = __this;
	}
	{
		int32_t L_47 = ___1_x_id;
		int32_t L_48;
		L_48 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_47, NULL);
		int32_t L_49;
		L_49 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_48, NULL);
		G_B13_0 = L_49;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		G_B13_3 = G_B11_2;
		goto IL_00e2;
	}

IL_00e1:
	{
		G_B13_0 = 1;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
	}

IL_00e2:
	{
		NullCheck(G_B13_3);
		RBTree_1_SetSubTreeSize_mAC7E4B0847BE0A523FB81EC26F8E3C4C9698E7E5(G_B13_3, G_B13_2, ((int32_t)il2cpp_codegen_add(G_B13_1, G_B13_0)), NULL);
	}

IL_00e8:
	{
		int32_t L_50 = V_0;
		if (!L_50)
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_51 = V_0;
		int32_t L_52 = V_0;
		int32_t L_53;
		L_53 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_52, NULL);
		int32_t L_54;
		L_54 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_53, NULL);
		int32_t L_55 = V_0;
		int32_t L_56;
		L_56 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_55, NULL);
		int32_t L_57;
		L_57 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_56, NULL);
		int32_t L_58 = V_0;
		int32_t L_59;
		L_59 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_58, NULL);
		if (!L_59)
		{
			G_B17_0 = ((int32_t)il2cpp_codegen_add(L_54, L_57));
			G_B17_1 = L_51;
			G_B17_2 = __this;
			goto IL_0120;
		}
		G_B16_0 = ((int32_t)il2cpp_codegen_add(L_54, L_57));
		G_B16_1 = L_51;
		G_B16_2 = __this;
	}
	{
		int32_t L_60 = V_0;
		int32_t L_61;
		L_61 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_60, NULL);
		int32_t L_62;
		L_62 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_61, NULL);
		G_B18_0 = L_62;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		goto IL_0121;
	}

IL_0120:
	{
		G_B18_0 = 1;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
	}

IL_0121:
	{
		NullCheck(G_B18_3);
		RBTree_1_SetSubTreeSize_mAC7E4B0847BE0A523FB81EC26F8E3C4C9698E7E5(G_B18_3, G_B18_2, ((int32_t)il2cpp_codegen_add(G_B18_1, G_B18_0)), NULL);
	}

IL_0127:
	{
		int32_t L_63 = ___0_root_id;
		return L_63;
	}
}
// Method Definition Index: 60376
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RightRotate_m3A85A41B4AC50DF21057340613BF2326A29B3E47_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* G_B12_2 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* G_B11_2 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* G_B13_3 = NULL;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* G_B17_2 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* G_B16_2 = NULL;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* G_B18_3 = NULL;
	{
		int32_t L_0 = ___1_x_id;
		int32_t L_1;
		L_1 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = ___1_x_id;
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_3, NULL);
		RBTree_1_SetLeft_m1053D96D9AE2E6EBF34B5C1D9A449C5531FA59B3(__this, L_2, L_4, NULL);
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_5, NULL);
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_7, NULL);
		int32_t L_9 = ___1_x_id;
		RBTree_1_SetParent_m5CA27D9474EC84E5A8823FE803C60CC047572643(__this, L_8, L_9, NULL);
	}

IL_002d:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_x_id;
		int32_t L_12;
		L_12 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_11, NULL);
		RBTree_1_SetParent_m5CA27D9474EC84E5A8823FE803C60CC047572643(__this, L_10, L_12, NULL);
		int32_t L_13 = ___1_x_id;
		int32_t L_14;
		L_14 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_13, NULL);
		if (L_14)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_15 = ___0_root_id;
		if (L_15)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_16 = V_0;
		__this->___root = L_16;
		goto IL_0099;
	}

IL_0050:
	{
		int32_t L_17 = ___2_mainTreeNode;
		int32_t L_18 = V_0;
		RBTree_1_SetNext_mC0DDCD6E5A9738375AF9890D1F11478F03054565(__this, L_17, L_18, NULL);
		int32_t L_19 = ___2_mainTreeNode;
		int32_t L_20 = V_0;
		Il2CppSharedGenericObject* L_21;
		L_21 = RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99(__this, L_20, NULL);
		RBTree_1_SetKey_m5B037F7426364C8491931FA06665AEBB3C22799B(__this, L_19, L_21, NULL);
		int32_t L_22 = V_0;
		___0_root_id = L_22;
		goto IL_0099;
	}

IL_006b:
	{
		int32_t L_23 = ___1_x_id;
		int32_t L_24 = ___1_x_id;
		int32_t L_25;
		L_25 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_24, NULL);
		int32_t L_26;
		L_26 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_25, NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_26))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_27 = ___1_x_id;
		int32_t L_28;
		L_28 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_27, NULL);
		int32_t L_29 = V_0;
		RBTree_1_SetLeft_m1053D96D9AE2E6EBF34B5C1D9A449C5531FA59B3(__this, L_28, L_29, NULL);
		goto IL_0099;
	}

IL_008b:
	{
		int32_t L_30 = ___1_x_id;
		int32_t L_31;
		L_31 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_30, NULL);
		int32_t L_32 = V_0;
		RBTree_1_SetRight_mCA90AE8051905DE68BD794277CB3A6F4D7273ED1(__this, L_31, L_32, NULL);
	}

IL_0099:
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___1_x_id;
		RBTree_1_SetRight_mCA90AE8051905DE68BD794277CB3A6F4D7273ED1(__this, L_33, L_34, NULL);
		int32_t L_35 = ___1_x_id;
		int32_t L_36 = V_0;
		RBTree_1_SetParent_m5CA27D9474EC84E5A8823FE803C60CC047572643(__this, L_35, L_36, NULL);
		int32_t L_37 = ___1_x_id;
		if (!L_37)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_38 = ___1_x_id;
		int32_t L_39 = ___1_x_id;
		int32_t L_40;
		L_40 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_39, NULL);
		int32_t L_41;
		L_41 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_40, NULL);
		int32_t L_42 = ___1_x_id;
		int32_t L_43;
		L_43 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_42, NULL);
		int32_t L_44;
		L_44 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_43, NULL);
		int32_t L_45 = ___1_x_id;
		int32_t L_46;
		L_46 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_45, NULL);
		if (!L_46)
		{
			G_B12_0 = ((int32_t)il2cpp_codegen_add(L_41, L_44));
			G_B12_1 = L_38;
			G_B12_2 = __this;
			goto IL_00e1;
		}
		G_B11_0 = ((int32_t)il2cpp_codegen_add(L_41, L_44));
		G_B11_1 = L_38;
		G_B11_2 = __this;
	}
	{
		int32_t L_47 = ___1_x_id;
		int32_t L_48;
		L_48 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_47, NULL);
		int32_t L_49;
		L_49 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_48, NULL);
		G_B13_0 = L_49;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		G_B13_3 = G_B11_2;
		goto IL_00e2;
	}

IL_00e1:
	{
		G_B13_0 = 1;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
	}

IL_00e2:
	{
		NullCheck(G_B13_3);
		RBTree_1_SetSubTreeSize_mAC7E4B0847BE0A523FB81EC26F8E3C4C9698E7E5(G_B13_3, G_B13_2, ((int32_t)il2cpp_codegen_add(G_B13_1, G_B13_0)), NULL);
	}

IL_00e8:
	{
		int32_t L_50 = V_0;
		if (!L_50)
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_51 = V_0;
		int32_t L_52 = V_0;
		int32_t L_53;
		L_53 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_52, NULL);
		int32_t L_54;
		L_54 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_53, NULL);
		int32_t L_55 = V_0;
		int32_t L_56;
		L_56 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_55, NULL);
		int32_t L_57;
		L_57 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_56, NULL);
		int32_t L_58 = V_0;
		int32_t L_59;
		L_59 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_58, NULL);
		if (!L_59)
		{
			G_B17_0 = ((int32_t)il2cpp_codegen_add(L_54, L_57));
			G_B17_1 = L_51;
			G_B17_2 = __this;
			goto IL_0120;
		}
		G_B16_0 = ((int32_t)il2cpp_codegen_add(L_54, L_57));
		G_B16_1 = L_51;
		G_B16_2 = __this;
	}
	{
		int32_t L_60 = V_0;
		int32_t L_61;
		L_61 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_60, NULL);
		int32_t L_62;
		L_62 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_61, NULL);
		G_B18_0 = L_62;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		goto IL_0121;
	}

IL_0120:
	{
		G_B18_0 = 1;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
	}

IL_0121:
	{
		NullCheck(G_B18_3);
		RBTree_1_SetSubTreeSize_mAC7E4B0847BE0A523FB81EC26F8E3C4C9698E7E5(G_B18_3, G_B18_2, ((int32_t)il2cpp_codegen_add(G_B18_1, G_B18_0)), NULL);
	}

IL_0127:
	{
		int32_t L_63 = ___0_root_id;
		return L_63;
	}
}
// Method Definition Index: 60377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBInsert_m0F7E610495314AF8E43945E519EE8BB599AA74BE_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNodeID, int32_t ___3_position, bool ___4_append, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B54_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		V_0 = 0;
		int32_t L_1 = ___0_root_id;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___0_root_id;
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		int32_t L_3 = __this->___root;
		G_B3_0 = L_3;
	}

IL_001c:
	{
		V_1 = G_B3_0;
		int32_t L_4 = __this->____accessMethod;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_01f8;
		}
	}
	{
		bool L_5 = ___4_append;
		if (L_5)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_01f0;
	}

IL_0035:
	{
		int32_t L_6 = V_1;
		RBTree_1_IncreaseSize_m19487325BED667C17E3C544D743182B38C55CD1A(__this, L_6, NULL);
		int32_t L_7 = V_1;
		V_0 = L_7;
		int32_t L_8 = ___0_root_id;
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_9 = ___1_x_id;
		Il2CppSharedGenericObject* L_10;
		L_10 = RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99(__this, L_9, NULL);
		int32_t L_11 = V_1;
		Il2CppSharedGenericObject* L_12;
		L_12 = RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99(__this, L_11, NULL);
		int32_t L_13;
		L_13 = VirtualFuncInvoker2< int32_t, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(6, __this, L_10, L_12);
		G_B9_0 = L_13;
		goto IL_006b;
	}

IL_0057:
	{
		int32_t L_14 = ___1_x_id;
		Il2CppSharedGenericObject* L_15;
		L_15 = RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99(__this, L_14, NULL);
		int32_t L_16 = V_1;
		Il2CppSharedGenericObject* L_17;
		L_17 = RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99(__this, L_16, NULL);
		int32_t L_18;
		L_18 = VirtualFuncInvoker2< int32_t, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(5, __this, L_15, L_17);
		G_B9_0 = L_18;
	}

IL_006b:
	{
		V_2 = G_B9_0;
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_20 = V_1;
		int32_t L_21;
		L_21 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_20, NULL);
		V_1 = L_21;
		goto IL_01f0;
	}

IL_007d:
	{
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_23 = V_1;
		int32_t L_24;
		L_24 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_23, NULL);
		V_1 = L_24;
		goto IL_01f0;
	}

IL_008e:
	{
		int32_t L_25 = ___0_root_id;
		if (!L_25)
		{
			goto IL_0098;
		}
	}
	{
		Exception_t* L_26;
		L_26 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, method);
	}

IL_0098:
	{
		int32_t L_27 = V_1;
		int32_t L_28;
		L_28 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_27, NULL);
		if (!L_28)
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_29 = V_1;
		int32_t L_30;
		L_30 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_29, NULL);
		int32_t L_31 = ___1_x_id;
		int32_t L_32 = V_1;
		int32_t L_33;
		L_33 = RBTree_1_RBInsert_m0F7E610495314AF8E43945E519EE8BB599AA74BE(__this, L_30, L_31, L_32, (-1), (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		___0_root_id = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_1;
		int32_t L_36;
		L_36 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_35, NULL);
		Il2CppSharedGenericObject* L_37;
		L_37 = RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99(__this, L_36, NULL);
		RBTree_1_SetKey_m5B037F7426364C8491931FA06665AEBB3C22799B(__this, L_34, L_37, NULL);
		goto IL_01ee;
	}

IL_00cd:
	{
		V_3 = 0;
		int32_t L_38 = V_1;
		Il2CppSharedGenericObject* L_39;
		L_39 = RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99(__this, L_38, NULL);
		int32_t L_40;
		L_40 = RBTree_1_GetNewNode_m5863E283C2B738283FF751E044EC017FA269C542(__this, L_39, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		V_3 = L_40;
		int32_t L_41 = __this->____inUseSatelliteTreeCount;
		__this->____inUseSatelliteTreeCount = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = V_3;
		int32_t L_43 = V_1;
		RBTree_1_SetNext_mC0DDCD6E5A9738375AF9890D1F11478F03054565(__this, L_42, L_43, NULL);
		int32_t L_44 = V_3;
		int32_t L_45 = V_1;
		int32_t L_46;
		L_46 = RBTree_1_color_mFB47C01E80DF20AD25C265811CEAB8E390F90912(__this, L_45, NULL);
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_44, L_46, NULL);
		int32_t L_47 = V_3;
		int32_t L_48 = V_1;
		int32_t L_49;
		L_49 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_48, NULL);
		RBTree_1_SetParent_m5CA27D9474EC84E5A8823FE803C60CC047572643(__this, L_47, L_49, NULL);
		int32_t L_50 = V_3;
		int32_t L_51 = V_1;
		int32_t L_52;
		L_52 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_51, NULL);
		RBTree_1_SetLeft_m1053D96D9AE2E6EBF34B5C1D9A449C5531FA59B3(__this, L_50, L_52, NULL);
		int32_t L_53 = V_3;
		int32_t L_54 = V_1;
		int32_t L_55;
		L_55 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_54, NULL);
		RBTree_1_SetRight_mCA90AE8051905DE68BD794277CB3A6F4D7273ED1(__this, L_53, L_55, NULL);
		int32_t L_56 = V_1;
		int32_t L_57;
		L_57 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_56, NULL);
		int32_t L_58;
		L_58 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_57, NULL);
		int32_t L_59 = V_1;
		if ((!(((uint32_t)L_58) == ((uint32_t)L_59))))
		{
			goto IL_014b;
		}
	}
	{
		int32_t L_60 = V_1;
		int32_t L_61;
		L_61 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_60, NULL);
		int32_t L_62 = V_3;
		RBTree_1_SetLeft_m1053D96D9AE2E6EBF34B5C1D9A449C5531FA59B3(__this, L_61, L_62, NULL);
		goto IL_0169;
	}

IL_014b:
	{
		int32_t L_63 = V_1;
		int32_t L_64;
		L_64 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_63, NULL);
		int32_t L_65;
		L_65 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_64, NULL);
		int32_t L_66 = V_1;
		if ((!(((uint32_t)L_65) == ((uint32_t)L_66))))
		{
			goto IL_0169;
		}
	}
	{
		int32_t L_67 = V_1;
		int32_t L_68;
		L_68 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_67, NULL);
		int32_t L_69 = V_3;
		RBTree_1_SetRight_mCA90AE8051905DE68BD794277CB3A6F4D7273ED1(__this, L_68, L_69, NULL);
	}

IL_0169:
	{
		int32_t L_70 = V_1;
		int32_t L_71;
		L_71 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_70, NULL);
		if (!L_71)
		{
			goto IL_0180;
		}
	}
	{
		int32_t L_72 = V_1;
		int32_t L_73;
		L_73 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_72, NULL);
		int32_t L_74 = V_3;
		RBTree_1_SetParent_m5CA27D9474EC84E5A8823FE803C60CC047572643(__this, L_73, L_74, NULL);
	}

IL_0180:
	{
		int32_t L_75 = V_1;
		int32_t L_76;
		L_76 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_75, NULL);
		if (!L_76)
		{
			goto IL_0197;
		}
	}
	{
		int32_t L_77 = V_1;
		int32_t L_78;
		L_78 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_77, NULL);
		int32_t L_79 = V_3;
		RBTree_1_SetParent_m5CA27D9474EC84E5A8823FE803C60CC047572643(__this, L_78, L_79, NULL);
	}

IL_0197:
	{
		int32_t L_80 = __this->___root;
		int32_t L_81 = V_1;
		if ((!(((uint32_t)L_80) == ((uint32_t)L_81))))
		{
			goto IL_01a7;
		}
	}
	{
		int32_t L_82 = V_3;
		__this->___root = L_82;
	}

IL_01a7:
	{
		int32_t L_83 = V_1;
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_83, (int32_t)1, NULL);
		int32_t L_84 = V_1;
		RBTree_1_SetParent_m5CA27D9474EC84E5A8823FE803C60CC047572643(__this, L_84, 0, NULL);
		int32_t L_85 = V_1;
		RBTree_1_SetLeft_m1053D96D9AE2E6EBF34B5C1D9A449C5531FA59B3(__this, L_85, 0, NULL);
		int32_t L_86 = V_1;
		RBTree_1_SetRight_mCA90AE8051905DE68BD794277CB3A6F4D7273ED1(__this, L_86, 0, NULL);
		int32_t L_87 = V_1;
		int32_t L_88;
		L_88 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_87, NULL);
		V_4 = L_88;
		int32_t L_89 = V_1;
		RBTree_1_SetSubTreeSize_mAC7E4B0847BE0A523FB81EC26F8E3C4C9698E7E5(__this, L_89, 1, NULL);
		int32_t L_90 = V_1;
		int32_t L_91 = ___1_x_id;
		int32_t L_92 = V_3;
		int32_t L_93;
		L_93 = RBTree_1_RBInsert_m0F7E610495314AF8E43945E519EE8BB599AA74BE(__this, L_90, L_91, L_92, (-1), (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		___0_root_id = L_93;
		int32_t L_94 = V_3;
		int32_t L_95 = V_4;
		RBTree_1_SetSubTreeSize_mAC7E4B0847BE0A523FB81EC26F8E3C4C9698E7E5(__this, L_94, L_95, NULL);
	}

IL_01ee:
	{
		int32_t L_96 = ___0_root_id;
		return L_96;
	}

IL_01f0:
	{
		int32_t L_97 = V_1;
		if (L_97)
		{
			goto IL_0035;
		}
	}
	{
		goto IL_0263;
	}

IL_01f8:
	{
		int32_t L_98 = __this->____accessMethod;
		bool L_99 = ___4_append;
		if (!((int32_t)(((((int32_t)L_98) == ((int32_t)2))? 1 : 0)|(int32_t)L_99)))
		{
			goto IL_025b;
		}
	}
	{
		int32_t L_100 = ___3_position;
		if ((!(((uint32_t)L_100) == ((uint32_t)(-1)))))
		{
			goto IL_0256;
		}
	}
	{
		int32_t L_101 = __this->___root;
		int32_t L_102;
		L_102 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_101, NULL);
		___3_position = L_102;
		goto IL_0256;
	}

IL_021b:
	{
		int32_t L_103 = V_1;
		RBTree_1_IncreaseSize_m19487325BED667C17E3C544D743182B38C55CD1A(__this, L_103, NULL);
		int32_t L_104 = V_1;
		V_0 = L_104;
		int32_t L_105 = ___3_position;
		int32_t L_106 = V_0;
		int32_t L_107;
		L_107 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_106, NULL);
		int32_t L_108;
		L_108 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_107, NULL);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_105, L_108));
		int32_t L_109 = V_5;
		if ((((int32_t)L_109) > ((int32_t)0)))
		{
			goto IL_0245;
		}
	}
	{
		int32_t L_110 = V_1;
		int32_t L_111;
		L_111 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_110, NULL);
		V_1 = L_111;
		goto IL_0256;
	}

IL_0245:
	{
		int32_t L_112 = V_1;
		int32_t L_113;
		L_113 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_112, NULL);
		V_1 = L_113;
		int32_t L_114 = V_1;
		if (!L_114)
		{
			goto IL_0256;
		}
	}
	{
		int32_t L_115 = V_5;
		___3_position = ((int32_t)il2cpp_codegen_subtract(L_115, 1));
	}

IL_0256:
	{
		int32_t L_116 = V_1;
		if (L_116)
		{
			goto IL_021b;
		}
	}
	{
		goto IL_0263;
	}

IL_025b:
	{
		Exception_t* L_117;
		L_117 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(((int32_t)15), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_117, method);
	}

IL_0263:
	{
		int32_t L_118 = ___1_x_id;
		int32_t L_119 = V_0;
		RBTree_1_SetParent_m5CA27D9474EC84E5A8823FE803C60CC047572643(__this, L_118, L_119, NULL);
		int32_t L_120 = V_0;
		if (L_120)
		{
			goto IL_0298;
		}
	}
	{
		int32_t L_121 = ___0_root_id;
		if (L_121)
		{
			goto IL_027d;
		}
	}
	{
		int32_t L_122 = ___1_x_id;
		__this->___root = L_122;
		goto IL_030a;
	}

IL_027d:
	{
		int32_t L_123 = ___2_mainTreeNodeID;
		int32_t L_124 = ___1_x_id;
		RBTree_1_SetNext_mC0DDCD6E5A9738375AF9890D1F11478F03054565(__this, L_123, L_124, NULL);
		int32_t L_125 = ___2_mainTreeNodeID;
		int32_t L_126 = ___1_x_id;
		Il2CppSharedGenericObject* L_127;
		L_127 = RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99(__this, L_126, NULL);
		RBTree_1_SetKey_m5B037F7426364C8491931FA06665AEBB3C22799B(__this, L_125, L_127, NULL);
		int32_t L_128 = ___1_x_id;
		___0_root_id = L_128;
		goto IL_030a;
	}

IL_0298:
	{
		V_6 = 0;
		int32_t L_129 = __this->____accessMethod;
		if ((!(((uint32_t)L_129) == ((uint32_t)1))))
		{
			goto IL_02d5;
		}
	}
	{
		int32_t L_130 = ___0_root_id;
		if (!L_130)
		{
			goto IL_02bd;
		}
	}
	{
		int32_t L_131 = ___1_x_id;
		Il2CppSharedGenericObject* L_132;
		L_132 = RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99(__this, L_131, NULL);
		int32_t L_133 = V_0;
		Il2CppSharedGenericObject* L_134;
		L_134 = RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99(__this, L_133, NULL);
		int32_t L_135;
		L_135 = VirtualFuncInvoker2< int32_t, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(6, __this, L_132, L_134);
		G_B49_0 = L_135;
		goto IL_02d1;
	}

IL_02bd:
	{
		int32_t L_136 = ___1_x_id;
		Il2CppSharedGenericObject* L_137;
		L_137 = RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99(__this, L_136, NULL);
		int32_t L_138 = V_0;
		Il2CppSharedGenericObject* L_139;
		L_139 = RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99(__this, L_138, NULL);
		int32_t L_140;
		L_140 = VirtualFuncInvoker2< int32_t, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(5, __this, L_137, L_139);
		G_B49_0 = L_140;
	}

IL_02d1:
	{
		V_6 = G_B49_0;
		goto IL_02f3;
	}

IL_02d5:
	{
		int32_t L_141 = __this->____accessMethod;
		if ((!(((uint32_t)L_141) == ((uint32_t)2))))
		{
			goto IL_02eb;
		}
	}
	{
		int32_t L_142 = ___3_position;
		if ((((int32_t)L_142) <= ((int32_t)0)))
		{
			goto IL_02e6;
		}
	}
	{
		G_B54_0 = 1;
		goto IL_02e7;
	}

IL_02e6:
	{
		G_B54_0 = (-1);
	}

IL_02e7:
	{
		V_6 = G_B54_0;
		goto IL_02f3;
	}

IL_02eb:
	{
		Exception_t* L_143;
		L_143 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(((int32_t)16), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_143, method);
	}

IL_02f3:
	{
		int32_t L_144 = V_6;
		if ((((int32_t)L_144) >= ((int32_t)0)))
		{
			goto IL_0302;
		}
	}
	{
		int32_t L_145 = V_0;
		int32_t L_146 = ___1_x_id;
		RBTree_1_SetLeft_m1053D96D9AE2E6EBF34B5C1D9A449C5531FA59B3(__this, L_145, L_146, NULL);
		goto IL_030a;
	}

IL_0302:
	{
		int32_t L_147 = V_0;
		int32_t L_148 = ___1_x_id;
		RBTree_1_SetRight_mCA90AE8051905DE68BD794277CB3A6F4D7273ED1(__this, L_147, L_148, NULL);
	}

IL_030a:
	{
		int32_t L_149 = ___1_x_id;
		RBTree_1_SetLeft_m1053D96D9AE2E6EBF34B5C1D9A449C5531FA59B3(__this, L_149, 0, NULL);
		int32_t L_150 = ___1_x_id;
		RBTree_1_SetRight_mCA90AE8051905DE68BD794277CB3A6F4D7273ED1(__this, L_150, 0, NULL);
		int32_t L_151 = ___1_x_id;
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_151, (int32_t)0, NULL);
		int32_t L_152 = ___1_x_id;
		V_1 = L_152;
		goto IL_04ba;
	}

IL_0329:
	{
		int32_t L_153 = ___1_x_id;
		int32_t L_154;
		L_154 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_153, NULL);
		int32_t L_155 = ___1_x_id;
		int32_t L_156;
		L_156 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_155, NULL);
		int32_t L_157;
		L_157 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_156, NULL);
		int32_t L_158;
		L_158 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_157, NULL);
		if ((!(((uint32_t)L_154) == ((uint32_t)L_158))))
		{
			goto IL_0405;
		}
	}
	{
		int32_t L_159 = ___1_x_id;
		int32_t L_160;
		L_160 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_159, NULL);
		int32_t L_161;
		L_161 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_160, NULL);
		int32_t L_162;
		L_162 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_161, NULL);
		V_0 = L_162;
		int32_t L_163 = V_0;
		int32_t L_164;
		L_164 = RBTree_1_color_mFB47C01E80DF20AD25C265811CEAB8E390F90912(__this, L_163, NULL);
		if (L_164)
		{
			goto IL_03a3;
		}
	}
	{
		int32_t L_165 = ___1_x_id;
		int32_t L_166;
		L_166 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_165, NULL);
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_166, (int32_t)1, NULL);
		int32_t L_167 = V_0;
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_167, (int32_t)1, NULL);
		int32_t L_168 = ___1_x_id;
		int32_t L_169;
		L_169 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_168, NULL);
		int32_t L_170;
		L_170 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_169, NULL);
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_170, (int32_t)0, NULL);
		int32_t L_171 = ___1_x_id;
		int32_t L_172;
		L_172 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_171, NULL);
		int32_t L_173;
		L_173 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_172, NULL);
		___1_x_id = L_173;
		goto IL_04ba;
	}

IL_03a3:
	{
		int32_t L_174 = ___1_x_id;
		int32_t L_175 = ___1_x_id;
		int32_t L_176;
		L_176 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_175, NULL);
		int32_t L_177;
		L_177 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_176, NULL);
		if ((!(((uint32_t)L_174) == ((uint32_t)L_177))))
		{
			goto IL_03c7;
		}
	}
	{
		int32_t L_178 = ___1_x_id;
		int32_t L_179;
		L_179 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_178, NULL);
		___1_x_id = L_179;
		int32_t L_180 = ___0_root_id;
		int32_t L_181 = ___1_x_id;
		int32_t L_182 = ___2_mainTreeNodeID;
		int32_t L_183;
		L_183 = RBTree_1_LeftRotate_m55B3DB5BA7A99F3CE718200614DD64362EAB0895(__this, L_180, L_181, L_182, NULL);
		___0_root_id = L_183;
	}

IL_03c7:
	{
		int32_t L_184 = ___1_x_id;
		int32_t L_185;
		L_185 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_184, NULL);
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_185, (int32_t)1, NULL);
		int32_t L_186 = ___1_x_id;
		int32_t L_187;
		L_187 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_186, NULL);
		int32_t L_188;
		L_188 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_187, NULL);
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_188, (int32_t)0, NULL);
		int32_t L_189 = ___0_root_id;
		int32_t L_190 = ___1_x_id;
		int32_t L_191;
		L_191 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_190, NULL);
		int32_t L_192;
		L_192 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_191, NULL);
		int32_t L_193 = ___2_mainTreeNodeID;
		int32_t L_194;
		L_194 = RBTree_1_RightRotate_m3A85A41B4AC50DF21057340613BF2326A29B3E47(__this, L_189, L_192, L_193, NULL);
		___0_root_id = L_194;
		goto IL_04ba;
	}

IL_0405:
	{
		int32_t L_195 = ___1_x_id;
		int32_t L_196;
		L_196 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_195, NULL);
		int32_t L_197;
		L_197 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_196, NULL);
		int32_t L_198;
		L_198 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_197, NULL);
		V_0 = L_198;
		int32_t L_199 = V_0;
		int32_t L_200;
		L_200 = RBTree_1_color_mFB47C01E80DF20AD25C265811CEAB8E390F90912(__this, L_199, NULL);
		if (L_200)
		{
			goto IL_045d;
		}
	}
	{
		int32_t L_201 = ___1_x_id;
		int32_t L_202;
		L_202 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_201, NULL);
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_202, (int32_t)1, NULL);
		int32_t L_203 = V_0;
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_203, (int32_t)1, NULL);
		int32_t L_204 = ___1_x_id;
		int32_t L_205;
		L_205 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_204, NULL);
		int32_t L_206;
		L_206 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_205, NULL);
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_206, (int32_t)0, NULL);
		int32_t L_207 = ___1_x_id;
		int32_t L_208;
		L_208 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_207, NULL);
		int32_t L_209;
		L_209 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_208, NULL);
		___1_x_id = L_209;
		goto IL_04ba;
	}

IL_045d:
	{
		int32_t L_210 = ___1_x_id;
		int32_t L_211 = ___1_x_id;
		int32_t L_212;
		L_212 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_211, NULL);
		int32_t L_213;
		L_213 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_212, NULL);
		if ((!(((uint32_t)L_210) == ((uint32_t)L_213))))
		{
			goto IL_0481;
		}
	}
	{
		int32_t L_214 = ___1_x_id;
		int32_t L_215;
		L_215 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_214, NULL);
		___1_x_id = L_215;
		int32_t L_216 = ___0_root_id;
		int32_t L_217 = ___1_x_id;
		int32_t L_218 = ___2_mainTreeNodeID;
		int32_t L_219;
		L_219 = RBTree_1_RightRotate_m3A85A41B4AC50DF21057340613BF2326A29B3E47(__this, L_216, L_217, L_218, NULL);
		___0_root_id = L_219;
	}

IL_0481:
	{
		int32_t L_220 = ___1_x_id;
		int32_t L_221;
		L_221 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_220, NULL);
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_221, (int32_t)1, NULL);
		int32_t L_222 = ___1_x_id;
		int32_t L_223;
		L_223 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_222, NULL);
		int32_t L_224;
		L_224 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_223, NULL);
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_224, (int32_t)0, NULL);
		int32_t L_225 = ___0_root_id;
		int32_t L_226 = ___1_x_id;
		int32_t L_227;
		L_227 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_226, NULL);
		int32_t L_228;
		L_228 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_227, NULL);
		int32_t L_229 = ___2_mainTreeNodeID;
		int32_t L_230;
		L_230 = RBTree_1_LeftRotate_m55B3DB5BA7A99F3CE718200614DD64362EAB0895(__this, L_225, L_228, L_229, NULL);
		___0_root_id = L_230;
	}

IL_04ba:
	{
		int32_t L_231 = ___1_x_id;
		int32_t L_232;
		L_232 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_231, NULL);
		int32_t L_233;
		L_233 = RBTree_1_color_mFB47C01E80DF20AD25C265811CEAB8E390F90912(__this, L_232, NULL);
		if (!L_233)
		{
			goto IL_0329;
		}
	}
	{
		int32_t L_234 = ___0_root_id;
		if (L_234)
		{
			goto IL_04de;
		}
	}
	{
		int32_t L_235 = __this->___root;
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_235, (int32_t)1, NULL);
		goto IL_04e6;
	}

IL_04de:
	{
		int32_t L_236 = ___0_root_id;
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_236, (int32_t)1, NULL);
	}

IL_04e6:
	{
		int32_t L_237 = ___0_root_id;
		return L_237;
	}
}
// Method Definition Index: 60378
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_UpdateNodeKey_mC7638F81552D081E1FA0F1FB2E2633779E30064B_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, Il2CppSharedGenericObject* ___0_currentKey, Il2CppSharedGenericObject* ___1_newKey, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppSharedGenericObject* L_0 = ___0_currentKey;
		NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF L_1;
		L_1 = RBTree_1_GetNodeByKey_mB8EA5B24CEF71C3B51691EEE949E3A8E5E11A98A(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
		V_0 = L_1;
		NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF L_2 = V_0;
		int32_t L_3 = L_2.____nodeID;
		int32_t L_4;
		L_4 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_3, NULL);
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF L_5 = V_0;
		int32_t L_6 = L_5.____nodeID;
		int32_t L_7 = __this->___root;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0031;
		}
	}
	{
		NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF L_8 = V_0;
		int32_t L_9 = L_8.____mainTreeNodeID;
		Il2CppSharedGenericObject* L_10 = ___1_newKey;
		RBTree_1_SetKey_m5B037F7426364C8491931FA06665AEBB3C22799B(__this, L_9, L_10, NULL);
	}

IL_0031:
	{
		NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF L_11 = V_0;
		int32_t L_12 = L_11.____nodeID;
		Il2CppSharedGenericObject* L_13 = ___1_newKey;
		RBTree_1_SetKey_m5B037F7426364C8491931FA06665AEBB3C22799B(__this, L_12, L_13, NULL);
		return;
	}
}
// Method Definition Index: 60379
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* RBTree_1_DeleteByIndex_m66215488DD926BD6C06D66BC1DEC77A2E4AFA36F_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_i;
		NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF L_1;
		L_1 = RBTree_1_GetNodeByIndex_m83B266BF5647661945D158A8D908BF95B3A4F517(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 42));
		V_0 = L_1;
		NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF L_2 = V_0;
		int32_t L_3 = L_2.____nodeID;
		Il2CppSharedGenericObject* L_4;
		L_4 = RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99(__this, L_3, NULL);
		NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF L_5 = V_0;
		int32_t L_6 = L_5.____nodeID;
		NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF L_7 = V_0;
		int32_t L_8 = L_7.____mainTreeNodeID;
		int32_t L_9;
		L_9 = RBTree_1_RBDeleteX_mE94B389E8A2683A020564C9EEF29CA2B6A3D9E97(__this, 0, L_6, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 43));
		return L_4;
	}
}
// Method Definition Index: 60380
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDelete_mE8A094CE2C78213D05809F099C0076865B4BD8D3_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_z_id, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_z_id;
		int32_t L_1;
		L_1 = RBTree_1_RBDeleteX_mE94B389E8A2683A020564C9EEF29CA2B6A3D9E97(__this, 0, L_0, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 43));
		return L_1;
	}
}
// Method Definition Index: 60381
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDeleteX_mE94B389E8A2683A020564C9EEF29CA2B6A3D9E97_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_root_id, int32_t ___1_z_id, int32_t ___2_mainTreeNodeID, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t G_B5_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___1_z_id;
		int32_t L_1;
		L_1 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_0, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = ___1_z_id;
		int32_t L_3;
		L_3 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_2, NULL);
		int32_t L_4 = ___1_z_id;
		int32_t L_5;
		L_5 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_4, NULL);
		int32_t L_6 = ___1_z_id;
		int32_t L_7;
		L_7 = RBTree_1_RBDeleteX_mE94B389E8A2683A020564C9EEF29CA2B6A3D9E97(__this, L_3, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 43));
		return L_7;
	}

IL_0021:
	{
		V_3 = (bool)0;
		int32_t L_8 = __this->____accessMethod;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = ___1_z_id;
		G_B5_0 = L_9;
		goto IL_0030;
	}

IL_002f:
	{
		int32_t L_10 = ___2_mainTreeNodeID;
		G_B5_0 = L_10;
	}

IL_0030:
	{
		V_4 = G_B5_0;
		int32_t L_11 = V_4;
		int32_t L_12;
		L_12 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_11, NULL);
		if (!L_12)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_13 = V_4;
		int32_t L_14;
		L_14 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_13, NULL);
		___0_root_id = L_14;
	}

IL_0046:
	{
		int32_t L_15 = V_4;
		int32_t L_16;
		L_16 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_15, NULL);
		int32_t L_17;
		L_17 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_16, NULL);
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_005b;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0073;
	}

IL_005b:
	{
		int32_t L_18 = V_4;
		int32_t L_19;
		L_19 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_18, NULL);
		int32_t L_20;
		L_20 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_19, NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		Exception_t* L_21;
		L_21 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_0073:
	{
		int32_t L_22 = ___1_z_id;
		int32_t L_23;
		L_23 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_22, NULL);
		if (!L_23)
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_24 = ___1_z_id;
		int32_t L_25;
		L_25 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_24, NULL);
		if (L_25)
		{
			goto IL_0089;
		}
	}

IL_0085:
	{
		int32_t L_26 = ___1_z_id;
		V_1 = L_26;
		goto IL_0091;
	}

IL_0089:
	{
		int32_t L_27 = ___1_z_id;
		int32_t L_28;
		L_28 = RBTree_1_Successor_m66C0B2AECF8F8BFE3CF4E25F4995C30C80474F62(__this, L_27, NULL);
		V_1 = L_28;
	}

IL_0091:
	{
		int32_t L_29 = V_1;
		int32_t L_30;
		L_30 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_29, NULL);
		if (!L_30)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_31 = V_1;
		int32_t L_32;
		L_32 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_31, NULL);
		V_0 = L_32;
		goto IL_00ac;
	}

IL_00a4:
	{
		int32_t L_33 = V_1;
		int32_t L_34;
		L_34 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_33, NULL);
		V_0 = L_34;
	}

IL_00ac:
	{
		int32_t L_35 = V_1;
		int32_t L_36;
		L_36 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_35, NULL);
		V_2 = L_36;
		int32_t L_37 = V_0;
		if (!L_37)
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_38 = V_0;
		int32_t L_39 = V_2;
		RBTree_1_SetParent_m5CA27D9474EC84E5A8823FE803C60CC047572643(__this, L_38, L_39, NULL);
	}

IL_00bf:
	{
		int32_t L_40 = V_2;
		if (L_40)
		{
			goto IL_00d3;
		}
	}
	{
		int32_t L_41 = ___0_root_id;
		if (L_41)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_42 = V_0;
		__this->___root = L_42;
		goto IL_00ef;
	}

IL_00ce:
	{
		int32_t L_43 = V_0;
		___0_root_id = L_43;
		goto IL_00ef;
	}

IL_00d3:
	{
		int32_t L_44 = V_1;
		int32_t L_45 = V_2;
		int32_t L_46;
		L_46 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_45, NULL);
		if ((!(((uint32_t)L_44) == ((uint32_t)L_46))))
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_47 = V_2;
		int32_t L_48 = V_0;
		RBTree_1_SetLeft_m1053D96D9AE2E6EBF34B5C1D9A449C5531FA59B3(__this, L_47, L_48, NULL);
		goto IL_00ef;
	}

IL_00e7:
	{
		int32_t L_49 = V_2;
		int32_t L_50 = V_0;
		RBTree_1_SetRight_mCA90AE8051905DE68BD794277CB3A6F4D7273ED1(__this, L_49, L_50, NULL);
	}

IL_00ef:
	{
		int32_t L_51 = V_1;
		int32_t L_52 = ___1_z_id;
		if ((((int32_t)L_51) == ((int32_t)L_52)))
		{
			goto IL_010f;
		}
	}
	{
		int32_t L_53 = ___1_z_id;
		int32_t L_54 = V_1;
		Il2CppSharedGenericObject* L_55;
		L_55 = RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99(__this, L_54, NULL);
		RBTree_1_SetKey_m5B037F7426364C8491931FA06665AEBB3C22799B(__this, L_53, L_55, NULL);
		int32_t L_56 = ___1_z_id;
		int32_t L_57 = V_1;
		int32_t L_58;
		L_58 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_57, NULL);
		RBTree_1_SetNext_mC0DDCD6E5A9738375AF9890D1F11478F03054565(__this, L_56, L_58, NULL);
	}

IL_010f:
	{
		int32_t L_59 = V_4;
		int32_t L_60;
		L_60 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_59, NULL);
		if (!L_60)
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_61 = ___0_root_id;
		if (L_61)
		{
			goto IL_0128;
		}
	}
	{
		int32_t L_62 = ___1_z_id;
		int32_t L_63 = V_4;
		if ((((int32_t)L_62) == ((int32_t)L_63)))
		{
			goto IL_0128;
		}
	}
	{
		Exception_t* L_64;
		L_64 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_64, method);
	}

IL_0128:
	{
		int32_t L_65 = ___0_root_id;
		if (!L_65)
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_66 = V_4;
		int32_t L_67 = ___0_root_id;
		RBTree_1_SetNext_mC0DDCD6E5A9738375AF9890D1F11478F03054565(__this, L_66, L_67, NULL);
		int32_t L_68 = V_4;
		int32_t L_69 = ___0_root_id;
		Il2CppSharedGenericObject* L_70;
		L_70 = RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99(__this, L_69, NULL);
		RBTree_1_SetKey_m5B037F7426364C8491931FA06665AEBB3C22799B(__this, L_68, L_70, NULL);
	}

IL_0143:
	{
		int32_t L_71 = V_2;
		V_5 = L_71;
		goto IL_015a;
	}

IL_0148:
	{
		int32_t L_72 = V_5;
		RBTree_1_RecomputeSize_mDBB0AAF0158D6FC0172754C8F2BFD25191BC86E8(__this, L_72, NULL);
		int32_t L_73 = V_5;
		int32_t L_74;
		L_74 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_73, NULL);
		V_5 = L_74;
	}

IL_015a:
	{
		int32_t L_75 = V_5;
		if (L_75)
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_76 = ___0_root_id;
		if (!L_76)
		{
			goto IL_017d;
		}
	}
	{
		int32_t L_77 = V_4;
		V_6 = L_77;
		goto IL_0179;
	}

IL_0167:
	{
		int32_t L_78 = V_6;
		RBTree_1_DecreaseSize_m719AA62C29CBC6C387F371FB1D5D1E5C584ABA7B(__this, L_78, NULL);
		int32_t L_79 = V_6;
		int32_t L_80;
		L_80 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_79, NULL);
		V_6 = L_80;
	}

IL_0179:
	{
		int32_t L_81 = V_6;
		if (L_81)
		{
			goto IL_0167;
		}
	}

IL_017d:
	{
		int32_t L_82 = V_1;
		int32_t L_83;
		L_83 = RBTree_1_color_mFB47C01E80DF20AD25C265811CEAB8E390F90912(__this, L_82, NULL);
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_0193;
		}
	}
	{
		int32_t L_84 = ___0_root_id;
		int32_t L_85 = V_0;
		int32_t L_86 = V_2;
		int32_t L_87 = ___2_mainTreeNodeID;
		int32_t L_88;
		L_88 = RBTree_1_RBDeleteFixup_mF9C058080B3A889E3839D76BEDCFBC6BC0EC02D6(__this, L_84, L_85, L_86, L_87, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46));
		___0_root_id = L_88;
	}

IL_0193:
	{
		bool L_89 = V_3;
		if (!L_89)
		{
			goto IL_02af;
		}
	}
	{
		int32_t L_90 = V_4;
		if (!L_90)
		{
			goto IL_01ae;
		}
	}
	{
		int32_t L_91 = V_4;
		int32_t L_92;
		L_92 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_91, NULL);
		int32_t L_93;
		L_93 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_92, NULL);
		if ((((int32_t)L_93) == ((int32_t)1)))
		{
			goto IL_01b6;
		}
	}

IL_01ae:
	{
		Exception_t* L_94;
		L_94 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(((int32_t)9), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_94, method);
	}

IL_01b6:
	{
		int32_t L_95 = __this->____inUseSatelliteTreeCount;
		__this->____inUseSatelliteTreeCount = ((int32_t)il2cpp_codegen_subtract(L_95, 1));
		int32_t L_96 = V_4;
		int32_t L_97;
		L_97 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_96, NULL);
		V_7 = L_97;
		int32_t L_98 = V_7;
		int32_t L_99 = V_4;
		int32_t L_100;
		L_100 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_99, NULL);
		RBTree_1_SetLeft_m1053D96D9AE2E6EBF34B5C1D9A449C5531FA59B3(__this, L_98, L_100, NULL);
		int32_t L_101 = V_7;
		int32_t L_102 = V_4;
		int32_t L_103;
		L_103 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_102, NULL);
		RBTree_1_SetRight_mCA90AE8051905DE68BD794277CB3A6F4D7273ED1(__this, L_101, L_103, NULL);
		int32_t L_104 = V_7;
		int32_t L_105 = V_4;
		int32_t L_106;
		L_106 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_105, NULL);
		RBTree_1_SetSubTreeSize_mAC7E4B0847BE0A523FB81EC26F8E3C4C9698E7E5(__this, L_104, L_106, NULL);
		int32_t L_107 = V_7;
		int32_t L_108 = V_4;
		int32_t L_109;
		L_109 = RBTree_1_color_mFB47C01E80DF20AD25C265811CEAB8E390F90912(__this, L_108, NULL);
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_107, L_109, NULL);
		int32_t L_110 = V_4;
		int32_t L_111;
		L_111 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_110, NULL);
		if (!L_111)
		{
			goto IL_025c;
		}
	}
	{
		int32_t L_112 = V_7;
		int32_t L_113 = V_4;
		int32_t L_114;
		L_114 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_113, NULL);
		RBTree_1_SetParent_m5CA27D9474EC84E5A8823FE803C60CC047572643(__this, L_112, L_114, NULL);
		int32_t L_115 = V_4;
		int32_t L_116;
		L_116 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_115, NULL);
		int32_t L_117;
		L_117 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_116, NULL);
		int32_t L_118 = V_4;
		if ((!(((uint32_t)L_117) == ((uint32_t)L_118))))
		{
			goto IL_024c;
		}
	}
	{
		int32_t L_119 = V_4;
		int32_t L_120;
		L_120 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_119, NULL);
		int32_t L_121 = V_7;
		RBTree_1_SetLeft_m1053D96D9AE2E6EBF34B5C1D9A449C5531FA59B3(__this, L_120, L_121, NULL);
		goto IL_025c;
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		int32_t L_123;
		L_123 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_122, NULL);
		int32_t L_124 = V_7;
		RBTree_1_SetRight_mCA90AE8051905DE68BD794277CB3A6F4D7273ED1(__this, L_123, L_124, NULL);
	}

IL_025c:
	{
		int32_t L_125 = V_4;
		int32_t L_126;
		L_126 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_125, NULL);
		if (!L_126)
		{
			goto IL_0276;
		}
	}
	{
		int32_t L_127 = V_4;
		int32_t L_128;
		L_128 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_127, NULL);
		int32_t L_129 = V_7;
		RBTree_1_SetParent_m5CA27D9474EC84E5A8823FE803C60CC047572643(__this, L_128, L_129, NULL);
	}

IL_0276:
	{
		int32_t L_130 = V_4;
		int32_t L_131;
		L_131 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_130, NULL);
		if (!L_131)
		{
			goto IL_0290;
		}
	}
	{
		int32_t L_132 = V_4;
		int32_t L_133;
		L_133 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_132, NULL);
		int32_t L_134 = V_7;
		RBTree_1_SetParent_m5CA27D9474EC84E5A8823FE803C60CC047572643(__this, L_133, L_134, NULL);
	}

IL_0290:
	{
		int32_t L_135 = __this->___root;
		int32_t L_136 = V_4;
		if ((!(((uint32_t)L_135) == ((uint32_t)L_136))))
		{
			goto IL_02a2;
		}
	}
	{
		int32_t L_137 = V_7;
		__this->___root = L_137;
	}

IL_02a2:
	{
		int32_t L_138 = V_4;
		RBTree_1_FreeNode_m7220658BAE2D8425FEADC3455CD9435D1752BA21(__this, L_138, NULL);
		V_4 = 0;
		goto IL_02e4;
	}

IL_02af:
	{
		int32_t L_139 = V_4;
		int32_t L_140;
		L_140 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_139, NULL);
		if (!L_140)
		{
			goto IL_02e4;
		}
	}
	{
		int32_t L_141 = ___0_root_id;
		if (L_141)
		{
			goto IL_02c9;
		}
	}
	{
		int32_t L_142 = ___1_z_id;
		int32_t L_143 = V_4;
		if ((((int32_t)L_142) == ((int32_t)L_143)))
		{
			goto IL_02c9;
		}
	}
	{
		Exception_t* L_144;
		L_144 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(((int32_t)10), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_144, method);
	}

IL_02c9:
	{
		int32_t L_145 = ___0_root_id;
		if (!L_145)
		{
			goto IL_02e4;
		}
	}
	{
		int32_t L_146 = V_4;
		int32_t L_147 = ___0_root_id;
		RBTree_1_SetNext_mC0DDCD6E5A9738375AF9890D1F11478F03054565(__this, L_146, L_147, NULL);
		int32_t L_148 = V_4;
		int32_t L_149 = ___0_root_id;
		Il2CppSharedGenericObject* L_150;
		L_150 = RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99(__this, L_149, NULL);
		RBTree_1_SetKey_m5B037F7426364C8491931FA06665AEBB3C22799B(__this, L_148, L_150, NULL);
	}

IL_02e4:
	{
		int32_t L_151 = V_1;
		int32_t L_152 = ___1_z_id;
		if ((((int32_t)L_151) == ((int32_t)L_152)))
		{
			goto IL_03d1;
		}
	}
	{
		int32_t L_153 = V_1;
		int32_t L_154 = ___1_z_id;
		int32_t L_155;
		L_155 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_154, NULL);
		RBTree_1_SetLeft_m1053D96D9AE2E6EBF34B5C1D9A449C5531FA59B3(__this, L_153, L_155, NULL);
		int32_t L_156 = V_1;
		int32_t L_157 = ___1_z_id;
		int32_t L_158;
		L_158 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_157, NULL);
		RBTree_1_SetRight_mCA90AE8051905DE68BD794277CB3A6F4D7273ED1(__this, L_156, L_158, NULL);
		int32_t L_159 = V_1;
		int32_t L_160 = ___1_z_id;
		int32_t L_161;
		L_161 = RBTree_1_color_mFB47C01E80DF20AD25C265811CEAB8E390F90912(__this, L_160, NULL);
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_159, L_161, NULL);
		int32_t L_162 = V_1;
		int32_t L_163 = ___1_z_id;
		int32_t L_164;
		L_164 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_163, NULL);
		RBTree_1_SetSubTreeSize_mAC7E4B0847BE0A523FB81EC26F8E3C4C9698E7E5(__this, L_162, L_164, NULL);
		int32_t L_165 = ___1_z_id;
		int32_t L_166;
		L_166 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_165, NULL);
		if (!L_166)
		{
			goto IL_036a;
		}
	}
	{
		int32_t L_167 = V_1;
		int32_t L_168 = ___1_z_id;
		int32_t L_169;
		L_169 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_168, NULL);
		RBTree_1_SetParent_m5CA27D9474EC84E5A8823FE803C60CC047572643(__this, L_167, L_169, NULL);
		int32_t L_170 = ___1_z_id;
		int32_t L_171;
		L_171 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_170, NULL);
		int32_t L_172;
		L_172 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_171, NULL);
		int32_t L_173 = ___1_z_id;
		if ((!(((uint32_t)L_172) == ((uint32_t)L_173))))
		{
			goto IL_035a;
		}
	}
	{
		int32_t L_174 = ___1_z_id;
		int32_t L_175;
		L_175 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_174, NULL);
		int32_t L_176 = V_1;
		RBTree_1_SetLeft_m1053D96D9AE2E6EBF34B5C1D9A449C5531FA59B3(__this, L_175, L_176, NULL);
		goto IL_0372;
	}

IL_035a:
	{
		int32_t L_177 = ___1_z_id;
		int32_t L_178;
		L_178 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_177, NULL);
		int32_t L_179 = V_1;
		RBTree_1_SetRight_mCA90AE8051905DE68BD794277CB3A6F4D7273ED1(__this, L_178, L_179, NULL);
		goto IL_0372;
	}

IL_036a:
	{
		int32_t L_180 = V_1;
		RBTree_1_SetParent_m5CA27D9474EC84E5A8823FE803C60CC047572643(__this, L_180, 0, NULL);
	}

IL_0372:
	{
		int32_t L_181 = ___1_z_id;
		int32_t L_182;
		L_182 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_181, NULL);
		if (!L_182)
		{
			goto IL_0389;
		}
	}
	{
		int32_t L_183 = ___1_z_id;
		int32_t L_184;
		L_184 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_183, NULL);
		int32_t L_185 = V_1;
		RBTree_1_SetParent_m5CA27D9474EC84E5A8823FE803C60CC047572643(__this, L_184, L_185, NULL);
	}

IL_0389:
	{
		int32_t L_186 = ___1_z_id;
		int32_t L_187;
		L_187 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_186, NULL);
		if (!L_187)
		{
			goto IL_03a0;
		}
	}
	{
		int32_t L_188 = ___1_z_id;
		int32_t L_189;
		L_189 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_188, NULL);
		int32_t L_190 = V_1;
		RBTree_1_SetParent_m5CA27D9474EC84E5A8823FE803C60CC047572643(__this, L_189, L_190, NULL);
	}

IL_03a0:
	{
		int32_t L_191 = __this->___root;
		int32_t L_192 = ___1_z_id;
		if ((!(((uint32_t)L_191) == ((uint32_t)L_192))))
		{
			goto IL_03b2;
		}
	}
	{
		int32_t L_193 = V_1;
		__this->___root = L_193;
		goto IL_03b9;
	}

IL_03b2:
	{
		int32_t L_194 = ___0_root_id;
		int32_t L_195 = ___1_z_id;
		if ((!(((uint32_t)L_194) == ((uint32_t)L_195))))
		{
			goto IL_03b9;
		}
	}
	{
		int32_t L_196 = V_1;
		___0_root_id = L_196;
	}

IL_03b9:
	{
		int32_t L_197 = V_4;
		if (!L_197)
		{
			goto IL_03d1;
		}
	}
	{
		int32_t L_198 = V_4;
		int32_t L_199;
		L_199 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_198, NULL);
		int32_t L_200 = ___1_z_id;
		if ((!(((uint32_t)L_199) == ((uint32_t)L_200))))
		{
			goto IL_03d1;
		}
	}
	{
		int32_t L_201 = V_4;
		int32_t L_202 = V_1;
		RBTree_1_SetNext_mC0DDCD6E5A9738375AF9890D1F11478F03054565(__this, L_201, L_202, NULL);
	}

IL_03d1:
	{
		int32_t L_203 = ___1_z_id;
		RBTree_1_FreeNode_m7220658BAE2D8425FEADC3455CD9435D1752BA21(__this, L_203, NULL);
		int32_t L_204 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_204, 1));
		int32_t L_205 = ___1_z_id;
		return L_205;
	}
}
// Method Definition Index: 60382
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDeleteFixup_mF9C058080B3A889E3839D76BEDCFBC6BC0EC02D6_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_px_id, int32_t ___3_mainTreeNodeID, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B47_0 = 0;
	int32_t G_B52_0 = 0;
	int32_t G_B56_0 = 0;
	int32_t G_B60_0 = 0;
	{
		int32_t L_0 = ___1_x_id;
		if (L_0)
		{
			goto IL_0305;
		}
	}
	{
		int32_t L_1 = ___2_px_id;
		if (L_1)
		{
			goto IL_0305;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		int32_t L_2 = ___1_x_id;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = ___1_x_id;
		int32_t L_4 = ___1_x_id;
		int32_t L_5;
		L_5 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_4, NULL);
		int32_t L_6;
		L_6 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_5, NULL);
		if ((((int32_t)L_3) == ((int32_t)L_6)))
		{
			goto IL_0033;
		}
	}

IL_0021:
	{
		int32_t L_7 = ___1_x_id;
		if (L_7)
		{
			goto IL_0168;
		}
	}
	{
		int32_t L_8 = ___2_px_id;
		int32_t L_9;
		L_9 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_8, NULL);
		if (L_9)
		{
			goto IL_0168;
		}
	}

IL_0033:
	{
		int32_t L_10 = ___1_x_id;
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_11 = ___1_x_id;
		int32_t L_12;
		L_12 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_11, NULL);
		int32_t L_13;
		L_13 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_12, NULL);
		G_B10_0 = L_13;
		goto IL_004c;
	}

IL_0045:
	{
		int32_t L_14 = ___2_px_id;
		int32_t L_15;
		L_15 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_14, NULL);
		G_B10_0 = L_15;
	}

IL_004c:
	{
		V_0 = G_B10_0;
		int32_t L_16 = V_0;
		if (L_16)
		{
			goto IL_0058;
		}
	}
	{
		Exception_t* L_17;
		L_17 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(((int32_t)14), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_0058:
	{
		int32_t L_18 = V_0;
		int32_t L_19;
		L_19 = RBTree_1_color_mFB47C01E80DF20AD25C265811CEAB8E390F90912(__this, L_18, NULL);
		if (L_19)
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_20 = V_0;
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_20, (int32_t)1, NULL);
		int32_t L_21 = ___2_px_id;
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_21, (int32_t)0, NULL);
		int32_t L_22 = ___0_root_id;
		int32_t L_23 = ___2_px_id;
		int32_t L_24 = ___3_mainTreeNodeID;
		int32_t L_25;
		L_25 = RBTree_1_LeftRotate_m55B3DB5BA7A99F3CE718200614DD64362EAB0895(__this, L_22, L_23, L_24, NULL);
		___0_root_id = L_25;
		int32_t L_26 = ___1_x_id;
		if (!L_26)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_27 = ___1_x_id;
		int32_t L_28;
		L_28 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_27, NULL);
		int32_t L_29;
		L_29 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_28, NULL);
		G_B16_0 = L_29;
		goto IL_0096;
	}

IL_008f:
	{
		int32_t L_30 = ___2_px_id;
		int32_t L_31;
		L_31 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_30, NULL);
		G_B16_0 = L_31;
	}

IL_0096:
	{
		V_0 = G_B16_0;
	}

IL_0097:
	{
		int32_t L_32 = V_0;
		int32_t L_33;
		L_33 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_32, NULL);
		int32_t L_34;
		L_34 = RBTree_1_color_mFB47C01E80DF20AD25C265811CEAB8E390F90912(__this, L_33, NULL);
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_00d0;
		}
	}
	{
		int32_t L_35 = V_0;
		int32_t L_36;
		L_36 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_35, NULL);
		int32_t L_37;
		L_37 = RBTree_1_color_mFB47C01E80DF20AD25C265811CEAB8E390F90912(__this, L_36, NULL);
		if ((!(((uint32_t)L_37) == ((uint32_t)1))))
		{
			goto IL_00d0;
		}
	}
	{
		int32_t L_38 = V_0;
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_38, (int32_t)0, NULL);
		int32_t L_39 = ___2_px_id;
		___1_x_id = L_39;
		int32_t L_40 = ___2_px_id;
		int32_t L_41;
		L_41 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_40, NULL);
		___2_px_id = L_41;
		goto IL_0305;
	}

IL_00d0:
	{
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_42, NULL);
		int32_t L_44;
		L_44 = RBTree_1_color_mFB47C01E80DF20AD25C265811CEAB8E390F90912(__this, L_43, NULL);
		if ((!(((uint32_t)L_44) == ((uint32_t)1))))
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_45 = V_0;
		int32_t L_46;
		L_46 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_45, NULL);
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_46, (int32_t)1, NULL);
		int32_t L_47 = V_0;
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_47, (int32_t)0, NULL);
		int32_t L_48 = ___0_root_id;
		int32_t L_49 = V_0;
		int32_t L_50 = ___3_mainTreeNodeID;
		int32_t L_51;
		L_51 = RBTree_1_RightRotate_m3A85A41B4AC50DF21057340613BF2326A29B3E47(__this, L_48, L_49, L_50, NULL);
		___0_root_id = L_51;
		int32_t L_52 = ___1_x_id;
		if (!L_52)
		{
			goto IL_0114;
		}
	}
	{
		int32_t L_53 = ___1_x_id;
		int32_t L_54;
		L_54 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_53, NULL);
		int32_t L_55;
		L_55 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_54, NULL);
		G_B24_0 = L_55;
		goto IL_011b;
	}

IL_0114:
	{
		int32_t L_56 = ___2_px_id;
		int32_t L_57;
		L_57 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_56, NULL);
		G_B24_0 = L_57;
	}

IL_011b:
	{
		V_0 = G_B24_0;
	}

IL_011c:
	{
		int32_t L_58 = V_0;
		int32_t L_59 = ___2_px_id;
		int32_t L_60;
		L_60 = RBTree_1_color_mFB47C01E80DF20AD25C265811CEAB8E390F90912(__this, L_59, NULL);
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_58, L_60, NULL);
		int32_t L_61 = ___2_px_id;
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_61, (int32_t)1, NULL);
		int32_t L_62 = V_0;
		int32_t L_63;
		L_63 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_62, NULL);
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_63, (int32_t)1, NULL);
		int32_t L_64 = ___0_root_id;
		int32_t L_65 = ___2_px_id;
		int32_t L_66 = ___3_mainTreeNodeID;
		int32_t L_67;
		L_67 = RBTree_1_LeftRotate_m55B3DB5BA7A99F3CE718200614DD64362EAB0895(__this, L_64, L_65, L_66, NULL);
		___0_root_id = L_67;
		int32_t L_68 = ___0_root_id;
		if (!L_68)
		{
			goto IL_0152;
		}
	}
	{
		int32_t L_69 = ___0_root_id;
		G_B28_0 = L_69;
		goto IL_0158;
	}

IL_0152:
	{
		int32_t L_70 = __this->___root;
		G_B28_0 = L_70;
	}

IL_0158:
	{
		___1_x_id = G_B28_0;
		int32_t L_71 = ___1_x_id;
		int32_t L_72;
		L_72 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_71, NULL);
		___2_px_id = L_72;
		goto IL_0305;
	}

IL_0168:
	{
		int32_t L_73 = ___2_px_id;
		int32_t L_74;
		L_74 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_73, NULL);
		V_0 = L_74;
		int32_t L_75 = V_0;
		int32_t L_76;
		L_76 = RBTree_1_color_mFB47C01E80DF20AD25C265811CEAB8E390F90912(__this, L_75, NULL);
		if (L_76)
		{
			goto IL_01ed;
		}
	}
	{
		int32_t L_77 = V_0;
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_77, (int32_t)1, NULL);
		int32_t L_78 = ___1_x_id;
		if (!L_78)
		{
			goto IL_01b4;
		}
	}
	{
		int32_t L_79 = ___2_px_id;
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_79, (int32_t)0, NULL);
		int32_t L_80 = ___0_root_id;
		int32_t L_81 = ___2_px_id;
		int32_t L_82 = ___3_mainTreeNodeID;
		int32_t L_83;
		L_83 = RBTree_1_RightRotate_m3A85A41B4AC50DF21057340613BF2326A29B3E47(__this, L_80, L_81, L_82, NULL);
		___0_root_id = L_83;
		int32_t L_84 = ___1_x_id;
		if (!L_84)
		{
			goto IL_01aa;
		}
	}
	{
		int32_t L_85 = ___1_x_id;
		int32_t L_86;
		L_86 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_85, NULL);
		int32_t L_87;
		L_87 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_86, NULL);
		G_B34_0 = L_87;
		goto IL_01b1;
	}

IL_01aa:
	{
		int32_t L_88 = ___2_px_id;
		int32_t L_89;
		L_89 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_88, NULL);
		G_B34_0 = L_89;
	}

IL_01b1:
	{
		V_0 = G_B34_0;
		goto IL_01ed;
	}

IL_01b4:
	{
		int32_t L_90 = ___2_px_id;
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_90, (int32_t)0, NULL);
		int32_t L_91 = ___0_root_id;
		int32_t L_92 = ___2_px_id;
		int32_t L_93 = ___3_mainTreeNodeID;
		int32_t L_94;
		L_94 = RBTree_1_RightRotate_m3A85A41B4AC50DF21057340613BF2326A29B3E47(__this, L_91, L_92, L_93, NULL);
		___0_root_id = L_94;
		int32_t L_95 = ___1_x_id;
		if (!L_95)
		{
			goto IL_01da;
		}
	}
	{
		int32_t L_96 = ___1_x_id;
		int32_t L_97;
		L_97 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_96, NULL);
		int32_t L_98;
		L_98 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_97, NULL);
		G_B38_0 = L_98;
		goto IL_01e1;
	}

IL_01da:
	{
		int32_t L_99 = ___2_px_id;
		int32_t L_100;
		L_100 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_99, NULL);
		G_B38_0 = L_100;
	}

IL_01e1:
	{
		V_0 = G_B38_0;
		int32_t L_101 = V_0;
		if (L_101)
		{
			goto IL_01ed;
		}
	}
	{
		Exception_t* L_102;
		L_102 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(((int32_t)11), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_102, method);
	}

IL_01ed:
	{
		int32_t L_103 = V_0;
		int32_t L_104;
		L_104 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_103, NULL);
		int32_t L_105;
		L_105 = RBTree_1_color_mFB47C01E80DF20AD25C265811CEAB8E390F90912(__this, L_104, NULL);
		if ((!(((uint32_t)L_105) == ((uint32_t)1))))
		{
			goto IL_0226;
		}
	}
	{
		int32_t L_106 = V_0;
		int32_t L_107;
		L_107 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_106, NULL);
		int32_t L_108;
		L_108 = RBTree_1_color_mFB47C01E80DF20AD25C265811CEAB8E390F90912(__this, L_107, NULL);
		if ((!(((uint32_t)L_108) == ((uint32_t)1))))
		{
			goto IL_0226;
		}
	}
	{
		int32_t L_109 = V_0;
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_109, (int32_t)0, NULL);
		int32_t L_110 = ___2_px_id;
		___1_x_id = L_110;
		int32_t L_111 = ___2_px_id;
		int32_t L_112;
		L_112 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_111, NULL);
		___2_px_id = L_112;
		goto IL_0305;
	}

IL_0226:
	{
		int32_t L_113 = V_0;
		int32_t L_114;
		L_114 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_113, NULL);
		int32_t L_115;
		L_115 = RBTree_1_color_mFB47C01E80DF20AD25C265811CEAB8E390F90912(__this, L_114, NULL);
		if ((!(((uint32_t)L_115) == ((uint32_t)1))))
		{
			goto IL_0272;
		}
	}
	{
		int32_t L_116 = V_0;
		int32_t L_117;
		L_117 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_116, NULL);
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_117, (int32_t)1, NULL);
		int32_t L_118 = V_0;
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_118, (int32_t)0, NULL);
		int32_t L_119 = ___0_root_id;
		int32_t L_120 = V_0;
		int32_t L_121 = ___3_mainTreeNodeID;
		int32_t L_122;
		L_122 = RBTree_1_LeftRotate_m55B3DB5BA7A99F3CE718200614DD64362EAB0895(__this, L_119, L_120, L_121, NULL);
		___0_root_id = L_122;
		int32_t L_123 = ___1_x_id;
		if (!L_123)
		{
			goto IL_026a;
		}
	}
	{
		int32_t L_124 = ___1_x_id;
		int32_t L_125;
		L_125 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_124, NULL);
		int32_t L_126;
		L_126 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_125, NULL);
		G_B47_0 = L_126;
		goto IL_0271;
	}

IL_026a:
	{
		int32_t L_127 = ___2_px_id;
		int32_t L_128;
		L_128 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_127, NULL);
		G_B47_0 = L_128;
	}

IL_0271:
	{
		V_0 = G_B47_0;
	}

IL_0272:
	{
		int32_t L_129 = ___1_x_id;
		if (!L_129)
		{
			goto IL_02be;
		}
	}
	{
		int32_t L_130 = V_0;
		int32_t L_131 = ___2_px_id;
		int32_t L_132;
		L_132 = RBTree_1_color_mFB47C01E80DF20AD25C265811CEAB8E390F90912(__this, L_131, NULL);
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_130, L_132, NULL);
		int32_t L_133 = ___2_px_id;
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_133, (int32_t)1, NULL);
		int32_t L_134 = V_0;
		int32_t L_135;
		L_135 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_134, NULL);
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_135, (int32_t)1, NULL);
		int32_t L_136 = ___0_root_id;
		int32_t L_137 = ___2_px_id;
		int32_t L_138 = ___3_mainTreeNodeID;
		int32_t L_139;
		L_139 = RBTree_1_RightRotate_m3A85A41B4AC50DF21057340613BF2326A29B3E47(__this, L_136, L_137, L_138, NULL);
		___0_root_id = L_139;
		int32_t L_140 = ___0_root_id;
		if (!L_140)
		{
			goto IL_02ab;
		}
	}
	{
		int32_t L_141 = ___0_root_id;
		G_B52_0 = L_141;
		goto IL_02b1;
	}

IL_02ab:
	{
		int32_t L_142 = __this->___root;
		G_B52_0 = L_142;
	}

IL_02b1:
	{
		___1_x_id = G_B52_0;
		int32_t L_143 = ___1_x_id;
		int32_t L_144;
		L_144 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_143, NULL);
		___2_px_id = L_144;
		goto IL_0305;
	}

IL_02be:
	{
		int32_t L_145 = V_0;
		int32_t L_146 = ___2_px_id;
		int32_t L_147;
		L_147 = RBTree_1_color_mFB47C01E80DF20AD25C265811CEAB8E390F90912(__this, L_146, NULL);
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_145, L_147, NULL);
		int32_t L_148 = ___2_px_id;
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_148, (int32_t)1, NULL);
		int32_t L_149 = V_0;
		int32_t L_150;
		L_150 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_149, NULL);
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_150, (int32_t)1, NULL);
		int32_t L_151 = ___0_root_id;
		int32_t L_152 = ___2_px_id;
		int32_t L_153 = ___3_mainTreeNodeID;
		int32_t L_154;
		L_154 = RBTree_1_RightRotate_m3A85A41B4AC50DF21057340613BF2326A29B3E47(__this, L_151, L_152, L_153, NULL);
		___0_root_id = L_154;
		int32_t L_155 = ___0_root_id;
		if (!L_155)
		{
			goto IL_02f4;
		}
	}
	{
		int32_t L_156 = ___0_root_id;
		G_B56_0 = L_156;
		goto IL_02fa;
	}

IL_02f4:
	{
		int32_t L_157 = __this->___root;
		G_B56_0 = L_157;
	}

IL_02fa:
	{
		___1_x_id = G_B56_0;
		int32_t L_158 = ___1_x_id;
		int32_t L_159;
		L_159 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_158, NULL);
		___2_px_id = L_159;
	}

IL_0305:
	{
		int32_t L_160 = ___0_root_id;
		if (!L_160)
		{
			goto IL_030b;
		}
	}
	{
		int32_t L_161 = ___0_root_id;
		G_B60_0 = L_161;
		goto IL_0311;
	}

IL_030b:
	{
		int32_t L_162 = __this->___root;
		G_B60_0 = L_162;
	}

IL_0311:
	{
		int32_t L_163 = ___1_x_id;
		if ((((int32_t)G_B60_0) == ((int32_t)L_163)))
		{
			goto IL_0321;
		}
	}
	{
		int32_t L_164 = ___1_x_id;
		int32_t L_165;
		L_165 = RBTree_1_color_mFB47C01E80DF20AD25C265811CEAB8E390F90912(__this, L_164, NULL);
		if ((((int32_t)L_165) == ((int32_t)1)))
		{
			goto IL_000e;
		}
	}

IL_0321:
	{
		int32_t L_166 = ___1_x_id;
		RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2(__this, L_166, (int32_t)1, NULL);
		int32_t L_167 = ___0_root_id;
		return L_167;
	}
}
// Method Definition Index: 60383
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_SearchSubTree_m88D001B41787E2E6D1E2054C4206A65CEFB8F17D_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_root_id, Il2CppSharedGenericObject* ___1_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B10_0 = 0;
	{
		int32_t L_0 = ___0_root_id;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = __this->____accessMethod;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		Exception_t* L_2;
		L_2 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(((int32_t)17), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_root_id;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = ___0_root_id;
		G_B6_0 = L_4;
		goto IL_0020;
	}

IL_001a:
	{
		int32_t L_5 = __this->___root;
		G_B6_0 = L_5;
	}

IL_0020:
	{
		V_0 = G_B6_0;
		goto IL_005e;
	}

IL_0023:
	{
		int32_t L_6 = ___0_root_id;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		Il2CppSharedGenericObject* L_7 = ___1_key;
		int32_t L_8 = V_0;
		Il2CppSharedGenericObject* L_9;
		L_9 = RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99(__this, L_8, NULL);
		int32_t L_10;
		L_10 = VirtualFuncInvoker2< int32_t, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(6, __this, L_7, L_9);
		G_B10_0 = L_10;
		goto IL_0044;
	}

IL_0036:
	{
		Il2CppSharedGenericObject* L_11 = ___1_key;
		int32_t L_12 = V_0;
		Il2CppSharedGenericObject* L_13;
		L_13 = RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99(__this, L_12, NULL);
		int32_t L_14;
		L_14 = VirtualFuncInvoker2< int32_t, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(5, __this, L_11, L_13);
		G_B10_0 = L_14;
	}

IL_0044:
	{
		V_1 = G_B10_0;
		int32_t L_15 = V_1;
		if (!L_15)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_17 = V_0;
		int32_t L_18;
		L_18 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_17, NULL);
		V_0 = L_18;
		goto IL_005e;
	}

IL_0056:
	{
		int32_t L_19 = V_0;
		int32_t L_20;
		L_20 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_19, NULL);
		V_0 = L_20;
	}

IL_005e:
	{
		int32_t L_21 = V_0;
		if (L_21)
		{
			goto IL_0023;
		}
	}

IL_0061:
	{
		int32_t L_22 = V_0;
		return L_22;
	}
}
// Method Definition Index: 60384
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* RBTree_1_get_Item_m4DC8D6E83EDAFC2FADEAF6741DDDE35C6FD26842_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF L_1;
		L_1 = RBTree_1_GetNodeByIndex_m83B266BF5647661945D158A8D908BF95B3A4F517(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 42));
		int32_t L_2 = L_1.____nodeID;
		Il2CppSharedGenericObject* L_3;
		L_3 = RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99(__this, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 60385
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF RBTree_1_GetNodeByKey_mB8EA5B24CEF71C3B51691EEE949E3A8E5E11A98A_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = RBTree_1_SearchSubTree_m88D001B41787E2E6D1E2054C4206A65CEFB8F17D(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 48));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_2, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_4, NULL);
		Il2CppSharedGenericObject* L_6 = ___0_key;
		int32_t L_7;
		L_7 = RBTree_1_SearchSubTree_m88D001B41787E2E6D1E2054C4206A65CEFB8F17D(__this, L_5, L_6, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 48));
		int32_t L_8 = V_0;
		NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF L_9;
		memset((&L_9), 0, sizeof(L_9));
		NodePath__ctor_m1C03760E0A5ADF5BAC0DADDF78FC6C6645F15398((&L_9), L_7, L_8, NULL);
		return L_9;
	}

IL_0027:
	{
		int32_t L_10 = V_0;
		Il2CppSharedGenericObject* L_11;
		L_11 = RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99(__this, L_10, NULL);
		V_1 = L_11;
		Il2CppSharedGenericObject* L_12 = ___0_key;
		NullCheck((RuntimeObject*)(V_1));
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)(V_1), (RuntimeObject*)L_12);
		if (L_13)
		{
			goto IL_0046;
		}
	}
	{
		V_0 = 0;
	}

IL_0046:
	{
		int32_t L_14 = V_0;
		NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF L_15;
		memset((&L_15), 0, sizeof(L_15));
		NodePath__ctor_m1C03760E0A5ADF5BAC0DADDF78FC6C6645F15398((&L_15), L_14, 0, NULL);
		return L_15;
	}
}
// Method Definition Index: 60386
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByKey_mF4C827C5F92B0D715455DF10D2DDF8077444B56E_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (-1);
		Il2CppSharedGenericObject* L_0 = ___0_key;
		NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF L_1;
		L_1 = RBTree_1_GetNodeByKey_mB8EA5B24CEF71C3B51691EEE949E3A8E5E11A98A(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
		V_1 = L_1;
		NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF L_2 = V_1;
		int32_t L_3 = L_2.____nodeID;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF L_4 = V_1;
		int32_t L_5;
		L_5 = RBTree_1_GetIndexByNodePath_m1E21B59C97F89684CB754FC49B140B3AFCABA6BD(__this, L_4, NULL);
		V_0 = L_5;
	}

IL_001a:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 60387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByNode_m46F19C443609B114C90100EE95489B06D7E0DF9E_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_node, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____inUseSatelliteTreeCount;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___0_node;
		int32_t L_2;
		L_2 = RBTree_1_ComputeIndexByNode_m8DCD325BA4138BA6D3F73D307F6524B5AF39F4D2(__this, L_1, NULL);
		return L_2;
	}

IL_0010:
	{
		int32_t L_3 = ___0_node;
		int32_t L_4;
		L_4 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_3, NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_5 = ___0_node;
		int32_t L_6;
		L_6 = RBTree_1_ComputeIndexWithSatelliteByNode_m0932303093ACD655F4A9D131F16ED35D402579C4(__this, L_5, NULL);
		return L_6;
	}

IL_0021:
	{
		int32_t L_7 = ___0_node;
		Il2CppSharedGenericObject* L_8;
		L_8 = RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99(__this, L_7, NULL);
		int32_t L_9;
		L_9 = RBTree_1_SearchSubTree_m88D001B41787E2E6D1E2054C4206A65CEFB8F17D(__this, 0, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 48));
		V_0 = L_9;
		int32_t L_10 = V_0;
		int32_t L_11 = ___0_node;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_12 = ___0_node;
		int32_t L_13;
		L_13 = RBTree_1_ComputeIndexWithSatelliteByNode_m0932303093ACD655F4A9D131F16ED35D402579C4(__this, L_12, NULL);
		return L_13;
	}

IL_003c:
	{
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = RBTree_1_ComputeIndexWithSatelliteByNode_m0932303093ACD655F4A9D131F16ED35D402579C4(__this, L_14, NULL);
		int32_t L_16 = ___0_node;
		int32_t L_17;
		L_17 = RBTree_1_ComputeIndexByNode_m8DCD325BA4138BA6D3F73D307F6524B5AF39F4D2(__this, L_16, NULL);
		return ((int32_t)il2cpp_codegen_add(L_15, L_17));
	}
}
// Method Definition Index: 60388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByNodePath_m1E21B59C97F89684CB754FC49B140B3AFCABA6BD_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF ___0_path, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____inUseSatelliteTreeCount;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF L_1 = ___0_path;
		int32_t L_2 = L_1.____nodeID;
		int32_t L_3;
		L_3 = RBTree_1_ComputeIndexByNode_m8DCD325BA4138BA6D3F73D307F6524B5AF39F4D2(__this, L_2, NULL);
		return L_3;
	}

IL_0015:
	{
		NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF L_4 = ___0_path;
		int32_t L_5 = L_4.____mainTreeNodeID;
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF L_6 = ___0_path;
		int32_t L_7 = L_6.____nodeID;
		int32_t L_8;
		L_8 = RBTree_1_ComputeIndexWithSatelliteByNode_m0932303093ACD655F4A9D131F16ED35D402579C4(__this, L_7, NULL);
		return L_8;
	}

IL_002a:
	{
		NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF L_9 = ___0_path;
		int32_t L_10 = L_9.____mainTreeNodeID;
		int32_t L_11;
		L_11 = RBTree_1_ComputeIndexWithSatelliteByNode_m0932303093ACD655F4A9D131F16ED35D402579C4(__this, L_10, NULL);
		NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF L_12 = ___0_path;
		int32_t L_13 = L_12.____nodeID;
		int32_t L_14;
		L_14 = RBTree_1_ComputeIndexByNode_m8DCD325BA4138BA6D3F73D307F6524B5AF39F4D2(__this, L_13, NULL);
		return ((int32_t)il2cpp_codegen_add(L_11, L_14));
	}
}
// Method Definition Index: 60389
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeIndexByNode_m8DCD325BA4138BA6D3F73D307F6524B5AF39F4D2_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_nodeId;
		int32_t L_1;
		L_1 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_0, NULL);
		int32_t L_2;
		L_2 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_1, NULL);
		V_0 = L_2;
		goto IL_0037;
	}

IL_0010:
	{
		int32_t L_3 = ___0_nodeId;
		int32_t L_4;
		L_4 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_3, NULL);
		V_1 = L_4;
		int32_t L_5 = ___0_nodeId;
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_6, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_9, NULL);
		int32_t L_11;
		L_11 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_10, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)il2cpp_codegen_add(L_11, 1))));
	}

IL_0034:
	{
		int32_t L_12 = V_1;
		___0_nodeId = L_12;
	}

IL_0037:
	{
		int32_t L_13 = ___0_nodeId;
		if (L_13)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_14 = V_0;
		return L_14;
	}
}
// Method Definition Index: 60390
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeIndexWithSatelliteByNode_m0932303093ACD655F4A9D131F16ED35D402579C4_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	int32_t G_B5_2 = 0;
	{
		int32_t L_0 = ___0_nodeId;
		int32_t L_1;
		L_1 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_0, NULL);
		int32_t L_2;
		L_2 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_1, NULL);
		V_0 = L_2;
		goto IL_004f;
	}

IL_0010:
	{
		int32_t L_3 = ___0_nodeId;
		int32_t L_4;
		L_4 = RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319(__this, L_3, NULL);
		V_1 = L_4;
		int32_t L_5 = ___0_nodeId;
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_6, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_9, NULL);
		int32_t L_11;
		L_11 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_10, NULL);
		int32_t L_12 = V_1;
		int32_t L_13;
		L_13 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_12, NULL);
		if (!L_13)
		{
			G_B4_0 = L_11;
			G_B4_1 = L_8;
			goto IL_0048;
		}
		G_B3_0 = L_11;
		G_B3_1 = L_8;
	}
	{
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_14, NULL);
		int32_t L_16;
		L_16 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_15, NULL);
		G_B5_0 = L_16;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0049;
	}

IL_0048:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0049:
	{
		V_0 = ((int32_t)il2cpp_codegen_add(G_B5_2, ((int32_t)il2cpp_codegen_add(G_B5_1, G_B5_0))));
	}

IL_004c:
	{
		int32_t L_17 = V_1;
		___0_nodeId = L_17;
	}

IL_004f:
	{
		int32_t L_18 = ___0_nodeId;
		if (L_18)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_19 = V_0;
		return L_19;
	}
}
// Method Definition Index: 60391
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF RBTree_1_GetNodeByIndex_m83B266BF5647661945D158A8D908BF95B3A4F517_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_userIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____inUseSatelliteTreeCount;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = __this->___root;
		int32_t L_2 = ___0_userIndex;
		int32_t L_3;
		L_3 = RBTree_1_ComputeNodeByIndex_m490DF9A8DC64CF750790A47BD75B4CA32CB99455(__this, L_1, ((int32_t)il2cpp_codegen_add(L_2, 1)), NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0026;
	}

IL_001c:
	{
		int32_t L_4 = ___0_userIndex;
		int32_t L_5;
		L_5 = RBTree_1_ComputeNodeByIndex_m35534B37511AF06371695E0CB5616BDB7E8E8EFD(__this, L_4, (&V_1), NULL);
		V_0 = L_5;
	}

IL_0026:
	{
		int32_t L_6 = V_0;
		if (L_6)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_7 = __this->____accessMethod;
		if ((!(((uint32_t)2) == ((uint32_t)L_7))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = ___0_userIndex;
		Exception_t* L_9;
		L_9 = ExceptionBuilder_RowOutOfRange_m2F6883E5D2F9AF63A3F9DC5521799A7E270F1054(L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0039:
	{
		Exception_t* L_10;
		L_10 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462(((int32_t)13), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0041:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		NodePath_t71966ED9436E95A8961841AF77E3F94C1E3F15AF L_13;
		memset((&L_13), 0, sizeof(L_13));
		NodePath__ctor_m1C03760E0A5ADF5BAC0DADDF78FC6C6645F15398((&L_13), L_11, L_12, NULL);
		return L_13;
	}
}
// Method Definition Index: 60392
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeNodeByIndex_m35534B37511AF06371695E0CB5616BDB7E8E8EFD_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_index, int32_t* ___1_satelliteRootId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_index;
		___0_index = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t* L_1 = ___1_satelliteRootId;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_1, (int32_t)0);
		int32_t L_2 = __this->___root;
		V_0 = L_2;
		V_1 = (-1);
		goto IL_0088;
	}

IL_0013:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = V_1;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_5, NULL);
		V_0 = L_6;
		goto IL_0088;
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_7, NULL);
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_9 = ___0_index;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ___0_index;
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		int32_t L_14;
		L_14 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_13, NULL);
		int32_t L_15;
		L_15 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_14, NULL);
		if ((((int32_t)L_11) > ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_12, L_15)), 1)))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t* L_16 = ___1_satelliteRootId;
		int32_t L_17 = V_0;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_16, (int32_t)L_17);
		int32_t L_18 = ___0_index;
		int32_t L_19 = V_1;
		___0_index = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_18, L_19)), 1));
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_20, NULL);
		int32_t L_22 = ___0_index;
		int32_t L_23;
		L_23 = RBTree_1_ComputeNodeByIndex_m490DF9A8DC64CF750790A47BD75B4CA32CB99455(__this, L_21, L_22, NULL);
		return L_23;
	}

IL_005b:
	{
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_24, NULL);
		if (L_25)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_26 = ___0_index;
		int32_t L_27 = V_1;
		___0_index = ((int32_t)il2cpp_codegen_subtract(L_26, L_27));
		goto IL_0080;
	}

IL_006b:
	{
		int32_t L_28 = ___0_index;
		int32_t L_29 = V_1;
		int32_t L_30 = V_0;
		int32_t L_31;
		L_31 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_30, NULL);
		int32_t L_32;
		L_32 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_31, NULL);
		___0_index = ((int32_t)il2cpp_codegen_subtract(L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, L_32)), 1))));
	}

IL_0080:
	{
		int32_t L_33 = V_0;
		int32_t L_34;
		L_34 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_33, NULL);
		V_0 = L_34;
	}

IL_0088:
	{
		int32_t L_35 = V_0;
		if (!L_35)
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_36 = V_0;
		int32_t L_37;
		L_37 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_36, NULL);
		int32_t L_38;
		L_38 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_37, NULL);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		V_1 = L_39;
		int32_t L_40 = ___0_index;
		if ((!(((uint32_t)L_39) == ((uint32_t)L_40))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_41 = V_0;
		int32_t L_42;
		L_42 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_41, NULL);
		if (L_42)
		{
			goto IL_0013;
		}
	}

IL_00ae:
	{
		int32_t L_43 = V_0;
		return L_43;
	}
}
// Method Definition Index: 60393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeNodeByIndex_m490DF9A8DC64CF750790A47BD75B4CA32CB99455_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_x_id, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		goto IL_002f;
	}

IL_0002:
	{
		int32_t L_0 = ___0_x_id;
		int32_t L_1;
		L_1 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_2, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = ___1_index;
		int32_t L_5 = V_1;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_6 = V_0;
		___0_x_id = L_6;
		goto IL_002f;
	}

IL_001d:
	{
		int32_t L_7 = V_1;
		int32_t L_8 = ___1_index;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_9 = ___0_x_id;
		int32_t L_10;
		L_10 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_9, NULL);
		___0_x_id = L_10;
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_1;
		___1_index = ((int32_t)il2cpp_codegen_subtract(L_11, L_12));
	}

IL_002f:
	{
		int32_t L_13 = ___0_x_id;
		if (L_13)
		{
			goto IL_0002;
		}
	}

IL_0032:
	{
		int32_t L_14 = ___0_x_id;
		return L_14;
	}
}
// Method Definition Index: 60394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Insert_m674D9D719DD69B001F85CF623E11C5662CFB9F02_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_item;
		int32_t L_1;
		L_1 = RBTree_1_GetNewNode_m5863E283C2B738283FF751E044EC017FA269C542(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = RBTree_1_RBInsert_m0F7E610495314AF8E43945E519EE8BB599AA74BE(__this, 0, L_2, 0, (-1), (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 60395
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Add_m1FD4415756D9A1621764B014564733DA7439CB74_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_item;
		int32_t L_1;
		L_1 = RBTree_1_GetNewNode_m5863E283C2B738283FF751E044EC017FA269C542(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = RBTree_1_RBInsert_m0F7E610495314AF8E43945E519EE8BB599AA74BE(__this, 0, L_2, 0, (-1), (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 60396
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTree_1_GetEnumerator_m42B4AD4A4947D36B004375B54B9146492D5EB816_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF L_0;
		memset((&L_0), 0, sizeof(L_0));
		RBTreeEnumerator__ctor_mFF09CA916CAF9842895161A5CCE9B5F6052358DE((&L_0), __this, NULL);
		RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 56), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 60397
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_IndexOf_m2978B5B3DDBFF5784C495F82EA569F3B67EA926E_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, Il2CppSharedGenericObject* ___1_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		int32_t L_0 = ___0_nodeId;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_1 = ___0_nodeId;
		Il2CppSharedGenericObject* L_2;
		L_2 = RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99(__this, L_1, NULL);
		Il2CppSharedGenericObject* L_3 = ___1_item;
		if ((!(((RuntimeObject*)(Il2CppSharedGenericObject*)L_2) == ((RuntimeObject*)(Il2CppSharedGenericObject*)L_3))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4 = ___0_nodeId;
		int32_t L_5;
		L_5 = RBTree_1_GetIndexByNode_m46F19C443609B114C90100EE95489B06D7E0DF9E(__this, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 58));
		return L_5;
	}

IL_0021:
	{
		int32_t L_6 = ___0_nodeId;
		int32_t L_7;
		L_7 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_6, NULL);
		Il2CppSharedGenericObject* L_8 = ___1_item;
		int32_t L_9;
		L_9 = RBTree_1_IndexOf_m2978B5B3DDBFF5784C495F82EA569F3B67EA926E(__this, L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 59));
		int32_t L_10 = L_9;
		V_0 = L_10;
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_11 = V_0;
		return L_11;
	}

IL_0036:
	{
		int32_t L_12 = ___0_nodeId;
		int32_t L_13;
		L_13 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_12, NULL);
		Il2CppSharedGenericObject* L_14 = ___1_item;
		int32_t L_15;
		L_15 = RBTree_1_IndexOf_m2978B5B3DDBFF5784C495F82EA569F3B67EA926E(__this, L_13, L_14, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 59));
		int32_t L_16 = L_15;
		V_0 = L_16;
		int32_t L_17 = V_0;
		return L_17;
	}

IL_004b:
	{
		int32_t L_18 = V_0;
		return L_18;
	}
}
// Method Definition Index: 60398
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Insert_m55DD22526F20EBD9092A5C9B1EAFD9A4B99DC9FF_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_position, Il2CppSharedGenericObject* ___1_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_position;
		Il2CppSharedGenericObject* L_1 = ___1_item;
		int32_t L_2;
		L_2 = RBTree_1_InsertAt_mA323D5F4BBB074C3BB0A5AA90C195952F45836D0(__this, L_0, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 60));
		return L_2;
	}
}
// Method Definition Index: 60399
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_InsertAt_mA323D5F4BBB074C3BB0A5AA90C195952F45836D0_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_position, Il2CppSharedGenericObject* ___1_item, bool ___2_append, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___1_item;
		int32_t L_1;
		L_1 = RBTree_1_GetNewNode_m5863E283C2B738283FF751E044EC017FA269C542(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___0_position;
		bool L_4 = ___2_append;
		int32_t L_5;
		L_5 = RBTree_1_RBInsert_m0F7E610495314AF8E43945E519EE8BB599AA74BE(__this, 0, L_2, 0, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 60400
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_RemoveAt_m6FCA9040299A9638224F4531FF74C5ACB2DB3AD1_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_position;
		Il2CppSharedGenericObject* L_1;
		L_1 = RBTree_1_DeleteByIndex_m66215488DD926BD6C06D66BC1DEC77A2E4AFA36F(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 61));
		return;
	}
}
// Method Definition Index: 60401
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_Clear_m2140E8692C5C2E6B07EAA27FAEF1226E11A458AB_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RBTree_1_InitTree_mB4E9EFD37104F6D38AB761F3E4D895745AC2D002(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
// Method Definition Index: 60402
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_CopyTo_m17BA2BF087CD49C3EC42C54748C788B0D36FEE0E_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t* L_1;
		L_1 = ExceptionBuilder_ArgumentNull_m2F21453F5BE7814A0D05A058EAC09F2391F99DA8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_ArgumentOutOfRange_mEF2909680ADBD4B5228E611EDEBBA048D7DF219E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001d:
	{
		int32_t L_4;
		L_4 = RBTree_1_get_Count_mCCC9A110FA3CFC5542CD9056AE20466F86C2F39F(__this, NULL);
		V_0 = L_4;
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = il2cpp_codegen_array_get_length(L_5);
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = RBTree_1_get_Count_mCCC9A110FA3CFC5542CD9056AE20466F86C2F39F(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7))) >= ((int32_t)L_8)))
		{
			goto IL_003a;
		}
	}
	{
		Exception_t* L_9;
		L_9 = ExceptionBuilder_InvalidOffsetLength_m25F593A3DD72EEDCF3B7F8616D41CD7677BD6073(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_003a:
	{
		int32_t L_10 = __this->___root;
		int32_t L_11;
		L_11 = RBTree_1_Minimum_m92638EC28D7B4C793E87489440C5381402073712(__this, L_10, NULL);
		V_1 = L_11;
		V_2 = 0;
		goto IL_006c;
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		int32_t L_13 = V_1;
		Il2CppSharedGenericObject* L_14;
		L_14 = RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99(__this, L_13, NULL);
		int32_t L_15 = ___1_index;
		int32_t L_16 = V_2;
		NullCheck(L_12);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_12, (RuntimeObject*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), NULL);
		int32_t L_17 = V_1;
		int32_t L_18;
		L_18 = RBTree_1_Successor_m66C0B2AECF8F8BFE3CF4E25F4995C30C80474F62(__this, L_17, NULL);
		V_1 = L_18;
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_006c:
	{
		int32_t L_20 = V_2;
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_004b;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 60403
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_CopyTo_m337ED8C9859880431EBED7067A6F40ADDAA31626_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t* L_1;
		L_1 = ExceptionBuilder_ArgumentNull_m2F21453F5BE7814A0D05A058EAC09F2391F99DA8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_ArgumentOutOfRange_mEF2909680ADBD4B5228E611EDEBBA048D7DF219E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001d:
	{
		int32_t L_4;
		L_4 = RBTree_1_get_Count_mCCC9A110FA3CFC5542CD9056AE20466F86C2F39F(__this, NULL);
		V_0 = L_4;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = RBTree_1_get_Count_mCCC9A110FA3CFC5542CD9056AE20466F86C2F39F(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0037;
		}
	}
	{
		Exception_t* L_9;
		L_9 = ExceptionBuilder_InvalidOffsetLength_m25F593A3DD72EEDCF3B7F8616D41CD7677BD6073(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0037:
	{
		int32_t L_10 = __this->___root;
		int32_t L_11;
		L_11 = RBTree_1_Minimum_m92638EC28D7B4C793E87489440C5381402073712(__this, L_10, NULL);
		V_1 = L_11;
		V_2 = 0;
		goto IL_0064;
	}

IL_0048:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_12 = ___0_array;
		int32_t L_13 = ___1_index;
		int32_t L_14 = V_2;
		int32_t L_15 = V_1;
		Il2CppSharedGenericObject* L_16;
		L_16 = RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99(__this, L_15, NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, L_14))), (Il2CppSharedGenericObject*)L_16);
		int32_t L_17 = V_1;
		int32_t L_18;
		L_18 = RBTree_1_Successor_m66C0B2AECF8F8BFE3CF4E25F4995C30C80474F62(__this, L_17, NULL);
		V_1 = L_18;
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0064:
	{
		int32_t L_20 = V_2;
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0048;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 60404
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetRight_mCA90AE8051905DE68BD794277CB3A6F4D7273ED1_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, int32_t ___1_rightNodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_rightNodeId;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____rightId = L_6;
		return;
	}
}
// Method Definition Index: 60405
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetLeft_m1053D96D9AE2E6EBF34B5C1D9A449C5531FA59B3_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, int32_t ___1_leftNodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_leftNodeId;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____leftId = L_6;
		return;
	}
}
// Method Definition Index: 60406
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetParent_m5CA27D9474EC84E5A8823FE803C60CC047572643_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, int32_t ___1_parentNodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_parentNodeId;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____parentId = L_6;
		return;
	}
}
// Method Definition Index: 60407
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetColor_m1AA617688F48F5608F3BFE15736592501D7C56E2_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, int32_t ___1_color, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_color;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____nodeColor = L_6;
		return;
	}
}
// Method Definition Index: 60408
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetKey_m5B037F7426364C8491931FA06665AEBB3C22799B_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, Il2CppSharedGenericObject* ___1_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ___1_key;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____keyOfNode = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____keyOfNode), (void*)L_6);
		return;
	}
}
// Method Definition Index: 60409
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetNext_mC0DDCD6E5A9738375AF9890D1F11478F03054565_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, int32_t ___1_nextNodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_nextNodeId;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____nextId = L_6;
		return;
	}
}
// Method Definition Index: 60410
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetSubTreeSize_mAC7E4B0847BE0A523FB81EC26F8E3C4C9698E7E5_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, int32_t ___1_size, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_size;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____subTreeSize = L_6;
		return;
	}
}
// Method Definition Index: 60411
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_IncreaseSize_m19487325BED667C17E3C544D743182B38C55CD1A_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t* L_6 = (int32_t*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____subTreeSize);
		int32_t* L_7 = L_6;
		int32_t L_8 = il2cpp_codegen_ldind<int32_t, int32_t>(L_7);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_7, (int32_t)((int32_t)il2cpp_codegen_add(L_8, 1)));
		return;
	}
}
// Method Definition Index: 60412
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_RecomputeSize_mDBB0AAF0158D6FC0172754C8F2BFD25191BC86E8_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		int32_t L_0 = ___0_nodeId;
		int32_t L_1;
		L_1 = RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8(__this, L_0, NULL);
		int32_t L_2;
		L_2 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_1, NULL);
		int32_t L_3 = ___0_nodeId;
		int32_t L_4;
		L_4 = RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF(__this, L_3, NULL);
		int32_t L_5;
		L_5 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_4, NULL);
		int32_t L_6 = ___0_nodeId;
		int32_t L_7;
		L_7 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_6, NULL);
		if (!L_7)
		{
			G_B2_0 = ((int32_t)il2cpp_codegen_add(L_2, L_5));
			goto IL_0033;
		}
		G_B1_0 = ((int32_t)il2cpp_codegen_add(L_2, L_5));
	}
	{
		int32_t L_8 = ___0_nodeId;
		int32_t L_9;
		L_9 = RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB(__this, L_8, NULL);
		int32_t L_10;
		L_10 = RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740(__this, L_9, NULL);
		G_B3_0 = L_10;
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		V_0 = ((int32_t)il2cpp_codegen_add(G_B3_1, G_B3_0));
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_11 = __this->____pageTable;
		int32_t L_12 = ___0_nodeId;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)(L_12>>((int32_t)16)));
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653* L_15 = L_14->____slots;
		int32_t L_16 = ___0_nodeId;
		NullCheck(L_15);
		int32_t L_17 = V_0;
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_16&((int32_t)65535))))))->____subTreeSize = L_17;
		return;
	}
}
// Method Definition Index: 60413
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_DecreaseSize_m719AA62C29CBC6C387F371FB1D5D1E5C584ABA7B_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t* L_6 = (int32_t*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____subTreeSize);
		int32_t* L_7 = L_6;
		int32_t L_8 = il2cpp_codegen_ldind<int32_t, int32_t>(L_7);
		il2cpp_codegen_stind<int32_t>((int32_t*)L_7, (int32_t)((int32_t)il2cpp_codegen_subtract(L_8, 1)));
		return;
	}
}
// Method Definition Index: 60414
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Right_m8345131D2DAAF56EB67726A01913A6AE213BDFCF_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____rightId;
		return L_6;
	}
}
// Method Definition Index: 60415
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Left_mE22B9DE51468DB30B9AA6DCC943BA55CB5FE35D8_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____leftId;
		return L_6;
	}
}
// Method Definition Index: 60416
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Parent_m581B36C5DAE9077161A7459DA50AE4A9CAB71319_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____parentId;
		return L_6;
	}
}
// Method Definition Index: 60417
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_color_mFB47C01E80DF20AD25C265811CEAB8E390F90912_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____nodeColor;
		return L_6;
	}
}
// Method Definition Index: 60418
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Next_mA6C2D4B5BD374789C8648A8A26C65A6A0E65C5FB_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____nextId;
		return L_6;
	}
}
// Method Definition Index: 60419
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_SubTreeSize_m2F8A093D01302774EC35FA6E43E5274569B53740_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____subTreeSize;
		return L_6;
	}
}
// Method Definition Index: 60420
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* RBTree_1_Key_m9D6F664243506ABCAE2758113317AA7666108B99_gshared (RBTree_1_t0BF58CE37145553BFFABBB0ADAD27CF95360CB81* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		TreePageU5BU5D_t5B14094ED066775C9BEA79E766639A899E80AF52* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_tF4AE104F96E2A268C75BD9A73D84DABD1D55D6CD* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t5E8D875F4E9D23A467AF98B63F8F978483F33653* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		Il2CppSharedGenericObject* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____keyOfNode;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 11419
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = V_0;
		int32_t L_8 = V_1;
		Il2CppSharedGenericObject* L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Il2CppSharedGenericObject*)L_9);
		return;
	}

IL_0034:
	{
		Il2CppSharedGenericObject* L_10 = ___0_item;
		List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
// Method Definition Index: 3309
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* Array_Empty_TisValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8_m333097FF36C87F06696A8E782F14066A2841FE00_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		ValueTuple_2U5BU5D_t344907FAD0257B96F1EFE69664D672E9C45B7331* L_0 = ((EmptyArray_1_t692B58AFAED6F55B45924E251B036A18DA20E251_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 3309
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* Array_Empty_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1AD513F77218E59FBB83B12CD05888A1BF6D54B0_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_0 = ((EmptyArray_1_t6CAC2B30CBBB3DF2C0516D226F177A7023251E16_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 3309
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 3309
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_0 = ((EmptyArray_1_t0D07744D06CBE1D5EFB0F376FCD9DE664680DB24_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 3309
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Array_Empty_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8B0170B3C9368D9BDB90A666E2DF5549423C160C_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((EmptyArray_1_t77BFDB090CFC6AE661834F0BD4ED43833F4F079D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 3309
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ((EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 3309
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_0 = ((EmptyArray_1_t77401F488985814E4B89684C1CCE07D59127CD6C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 3309
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* Array_Empty_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mE74D581FD3F8DF5CFA50A5133DB5A6F7D16B99CD_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_0 = ((EmptyArray_1_t7C7E840E7790E897ABDA15ED3B9C6BB1AD74E6AF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 60432
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RBTreeEnumerator_get_Current_mCB9EE3BDCE8D688E0B6EA03B14E5D55ABF7E1325_inline (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____current;
		return L_0;
	}
}
// Method Definition Index: 60432
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* RBTreeEnumerator_get_Current_mCA7EABFD3BB38F4E43C81EB2C51698DA685F4728_gshared_inline (RBTreeEnumerator_t0E8BDA901C4E1E2B1225208B209F9CC75DE74AAF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->____current;
		return L_0;
	}
}
// Method Definition Index: 60432
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RBTreeEnumerator_get_Current_m55E7496F0199640CB43772D3C21F0A10462AE734_fshared_inline (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
		return;
	}
}
// Method Definition Index: 60425
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TreePage_set_InUseCount_mF6068EC2FA94F4B17098D5C83B965F4703FA033A_fshared_inline (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->____inUseCount = L_0;
		return;
	}
}
// Method Definition Index: 60426
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TreePage_get_PageId_mB8F6DE559009BD1B1683DD96A132A8AF8229F6C7_fshared_inline (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____pageId;
		return L_0;
	}
}
// Method Definition Index: 60427
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TreePage_set_PageId_m106D0788C3D06308F04C6400B1B3D166396CF84D_fshared_inline (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_value;
		__this->____pageId = L_0;
		return;
	}
}
// Method Definition Index: 60424
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TreePage_get_InUseCount_m54A6D752FBFA8E21B9BE911DEFEBB6EBE27F86B4_fshared_inline (TreePage_tF4637AF4FFA85E17BF2F4D25064C7D17EF8DC689* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____inUseCount;
		return L_0;
	}
}
