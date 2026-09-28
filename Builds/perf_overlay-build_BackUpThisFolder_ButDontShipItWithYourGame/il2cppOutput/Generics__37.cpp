#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
struct ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E;
struct Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074;
struct Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8;
struct Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5;
struct Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D;
struct Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct EqualityComparer_1_t609C7F4FCDDC30DC5F20B7722F1FDEFB0AA1C2C5;
struct EqualityComparer_1_t17A804F4FB1CFE2AD73A277BBCD4BAFB6D8848DB;
struct EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438;
struct EqualityComparer_1_t7E0C7EEBA33D44A0D43BFEA1C6FA2C4ADA3A6C2A;
struct EqualityComparer_1_tAE8B4F16F447C069F655AA64CF2C6000FD15BD47;
struct ICollection_1_t21DA71CDF0D7CA0C77564C8D4FE356DD9A0375F0;
struct ICollection_1_t4DEC6BF655778130D16B8AE31E32AE5B76EE3FBB;
struct ICollection_1_tD65596C49EB191526CE60754B26ADF578CF5BF18;
struct ICollection_1_tF08DECDC5080762BEBB2D1B46DB80DC0B34118BB;
struct ICollection_1_tC58499B5A0A159B62FC354A3C19AC0B3F9B84380;
struct ICollection_1_tB0CC5FD2892D4488D48931413E5F6A82FC6ECABA;
struct ICollection_1_t58D5B5A564BF08CD3C8EE106100AC0D7B8C4508B;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct ICollection_1_t5F093E691DFA3E2508F3E73AA722D02FD06F5A36;
struct ICollection_1_tBBD8AAE9653DCA0BB2AB138B6C66DB88704C35F6;
struct ICollection_1_tA8D345556E14BBE34609998E496EE280468EB0DD;
struct ICollection_1_t1243F8957FDE2873562C7FCE77378AEAAD62F0E3;
struct ICollection_1_t54DDADC780F2F70345D9C3A435D11856601E3DF0;
struct IDictionary_2_tFA9112B693A70C5D288C44A8E022E274965D2D89;
struct IDictionary_2_t26CBF86F6F7DB0BE776C71CACCD1BC01808332AC;
struct IDictionary_2_tA0F7D49C8BE8AAFB35AFDFB926D8B2C546B1706E;
struct IDictionary_2_t04D4DC59CFD11298FF0E38B8E0DCC0FAEAC7CDFB;
struct IDictionary_2_tF39B8B289D803A6DFD2DB705FD2A76D13D524A6D;
struct IDictionary_2_t4D3B65115D85F2C21975A2BBF4A23860F8BCD02F;
struct IEnumerable_1_tD14E2E6D4448FC02EEB50A306F6C22CAC3281815;
struct IEnumerable_1_t9AAEFE363B66F07D111049F03FBD89907DE60185;
struct IEnumerable_1_t24D06ADFA7282C558826C0F98DDE40752825EF90;
struct IEnumerable_1_t00DD74845B326CD708FEFFF600A3628DB42661D5;
struct IEnumerable_1_t36DE6C34B2502F2FB1F7B8CC1CF42C7F073A89FE;
struct IEnumerable_1_tC9B78BD09596EB85FA82FA63B091B4F61900F530;
struct IEnumerable_1_t6D5FFB1B4A97F30426C5D394135AD0D2FAEAE680;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerable_1_t7886238EF7DC77A68D0FBB352FED1C732EF306A0;
struct IEnumerable_1_t86CC126A7BDC0DB1E3DC38F39FF2C26153316D84;
struct IEnumerable_1_tF416B7691EB6641A380D2DABC15AD1C4FE03C61C;
struct IEnumerable_1_t4662B0E6B67A941A610740DA7467A2C0A454A07B;
struct IEnumerable_1_tB2C3BB9FA2E35A6B1BEB000560F739FD824804B8;
struct IEnumerator_1_tC027B9C75091151E01521B33507D9483DDF76923;
struct IEnumerator_1_t4CD5000AE84EEBD36906C9FF585CAD5EE3CE3FB2;
struct IEnumerator_1_t8FE7A5E5B40CE06FE8D63C015308C48A5F488B1C;
struct IEnumerator_1_tCFFF6A9809CA202EA4BEF6BF0A32EF8D621B57B8;
struct IEnumerator_1_t363F286198BDE0ED0FE2697539032D871746366E;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEqualityComparer_1_t95351C62AE7A3DC1F5A634C37AF7444A078B5B99;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct KeyCollection_t56B61032EF9B470E2684BD0A6C2D570105F9FC35;
struct KeyCollection_t84D05CC571A5B34D646C9C7F719F1913F9A65E84;
struct KeyCollection_t945190B48E85011C084A91C20858D236ABBCB887;
struct KeyCollection_tE6F533AA064BC6E35BFB035F4A8150D5C4D66789;
struct KeyCollection_tDDC92BC5522FB87485368E61B8DE31D7A29A9E14;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A;
struct ValueCollection_t69B2D43505C54B4CA2B032CE046446F1D6139923;
struct ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88;
struct ValueCollection_t088AFADCACA3AB2259B91A247AE941BD4BB8DA2C;
struct ValueCollection_t84542E3DD580360E9BEC89E6D5173270C22BBAB1;
struct ValueCollection_t913C7FDC829EFFA2FD9D38CDD1D9621FD97C3999;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2;
struct EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F;
struct EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D;
struct EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228;
struct EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61;
struct KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2;
struct KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E;
struct KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA;
struct KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct UIAnimationBinder_t144240AB0391801DF6223A9A19BDAA7E44B1AA62;
struct UIAnimationClip_tFB53C6186F959E95BDF9FC388D9F67925289363A;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2;
struct EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F;
struct EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D;
struct EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228;
struct EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61;
struct KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2;
struct KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E;
struct KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA;
struct KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data;
	RuntimeObject* ____lock;
	int32_t ___size;
};
struct Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t56B61032EF9B470E2684BD0A6C2D570105F9FC35* ____keys;
	ValueCollection_t69B2D43505C54B4CA2B032CE046446F1D6139923* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t84D05CC571A5B34D646C9C7F719F1913F9A65E84* ____keys;
	ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t945190B48E85011C084A91C20858D236ABBCB887* ____keys;
	ValueCollection_t088AFADCACA3AB2259B91A247AE941BD4BB8DA2C* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tE6F533AA064BC6E35BFB035F4A8150D5C4D66789* ____keys;
	ValueCollection_t84542E3DD580360E9BEC89E6D5173270C22BBAB1* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tDDC92BC5522FB87485368E61B8DE31D7A29A9E14* ____keys;
	ValueCollection_t913C7FDC829EFFA2FD9D38CDD1D9621FD97C3999* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* ____keys;
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* ____values;
	RuntimeObject* ____syncRoot;
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct EqualityComparer_1_t609C7F4FCDDC30DC5F20B7722F1FDEFB0AA1C2C5  : public RuntimeObject
{
};
struct EqualityComparer_1_t17A804F4FB1CFE2AD73A277BBCD4BAFB6D8848DB  : public RuntimeObject
{
};
struct EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438  : public RuntimeObject
{
};
struct EqualityComparer_1_t7E0C7EEBA33D44A0D43BFEA1C6FA2C4ADA3A6C2A  : public RuntimeObject
{
};
struct EqualityComparer_1_tAE8B4F16F447C069F655AA64CF2C6000FD15BD47  : public RuntimeObject
{
};
struct KeyCollection_t56B61032EF9B470E2684BD0A6C2D570105F9FC35  : public RuntimeObject
{
	Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* ____dictionary;
};
struct KeyCollection_t84D05CC571A5B34D646C9C7F719F1913F9A65E84  : public RuntimeObject
{
	Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* ____dictionary;
};
struct KeyCollection_t945190B48E85011C084A91C20858D236ABBCB887  : public RuntimeObject
{
	Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* ____dictionary;
};
struct KeyCollection_tE6F533AA064BC6E35BFB035F4A8150D5C4D66789  : public RuntimeObject
{
	Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* ____dictionary;
};
struct KeyCollection_tDDC92BC5522FB87485368E61B8DE31D7A29A9E14  : public RuntimeObject
{
	Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* ____dictionary;
};
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55  : public RuntimeObject
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ____dictionary;
};
struct ValueCollection_t69B2D43505C54B4CA2B032CE046446F1D6139923  : public RuntimeObject
{
	Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* ____dictionary;
};
struct ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88  : public RuntimeObject
{
	Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* ____dictionary;
};
struct ValueCollection_t088AFADCACA3AB2259B91A247AE941BD4BB8DA2C  : public RuntimeObject
{
	Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* ____dictionary;
};
struct ValueCollection_t84542E3DD580360E9BEC89E6D5173270C22BBAB1  : public RuntimeObject
{
	Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* ____dictionary;
};
struct ValueCollection_t913C7FDC829EFFA2FD9D38CDD1D9621FD97C3999  : public RuntimeObject
{
	Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* ____dictionary;
};
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40  : public RuntimeObject
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ____dictionary;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
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
typedef Il2CppFullySharedGenericStruct Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3;
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
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
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849 
{
	String_t* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke
{
	char* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com
{
	Il2CppChar* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
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
struct ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 
{
	UIAnimationClip_tFB53C6186F959E95BDF9FC388D9F67925289363A* ___clip;
	UIAnimationBinder_t144240AB0391801DF6223A9A19BDAA7E44B1AA62* ___binder;
	double ___startTime;
	float ___clipLength;
	bool ___isLooping;
	bool ___isPaused;
	float ___pausedElapsed;
};
struct ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244_marshaled_pinvoke
{
	UIAnimationClip_tFB53C6186F959E95BDF9FC388D9F67925289363A* ___clip;
	UIAnimationBinder_t144240AB0391801DF6223A9A19BDAA7E44B1AA62* ___binder;
	double ___startTime;
	float ___clipLength;
	int32_t ___isLooping;
	int32_t ___isPaused;
	float ___pausedElapsed;
};
struct ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244_marshaled_com
{
	UIAnimationClip_tFB53C6186F959E95BDF9FC388D9F67925289363A* ___clip;
	UIAnimationBinder_t144240AB0391801DF6223A9A19BDAA7E44B1AA62* ___binder;
	double ___startTime;
	float ___clipLength;
	int32_t ___isLooping;
	int32_t ___isPaused;
	float ___pausedElapsed;
};
struct Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289 
{
	int32_t ___hashCode;
	int32_t ___next;
	Il2CppSharedGenericObject* ___key;
	ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 ___value;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;
struct KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80 
{
	Il2CppSharedGenericObject* ___key;
	ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 ___value;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
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
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
struct InsertionBehavior_tAD0393881947C559238D7041A36917BEE6E2C7B1 
{
	uint8_t ___value__;
};
struct PseudoStates_tF4AB056E8743741BCE464A0983A060A53AAB7E4D 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB 
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___text;
	bool ___hasEscapes;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke ___text;
	int32_t ___hasEscapes;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com ___text;
	int32_t ___hasEscapes;
};
struct JsonValueType_t36BA339F107E5E9C0966C45F896E27F3BCC5A2AB 
{
	int32_t ___value__;
};
struct ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D 
{
	intptr_t ___ptr;
};
struct Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B 
{
	int32_t ___hashCode;
	int32_t ___next;
	Il2CppSharedGenericObject* ___key;
	ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D ___value;
};
struct Enumerator_t04AD2E161333718026A8FD2EA5F16659FB0CC2FC 
{
	Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80 ____current;
	int32_t ____getEnumeratorRetType;
};
struct KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39 
{
	Il2CppSharedGenericObject* ___key;
	ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D ___value;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2 
{
	int32_t ___type;
	bool ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	RuntimeObject* ___anyValue;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	Il2CppIUnknown* ___anyValue;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_com
{
	int32_t ___type;
	int32_t ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	Il2CppIUnknown* ___anyValue;
};
struct PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 
{
	int32_t ___state;
	bool ___negate;
};
struct PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshaled_pinvoke
{
	int32_t ___state;
	int32_t ___negate;
};
struct PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_marshaled_com
{
	int32_t ___state;
	int32_t ___negate;
};
struct Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536 
{
	int32_t ___hashCode;
	int32_t ___next;
	Il2CppSharedGenericObject* ___key;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___value;
};
struct Entry_t614B564AA4C598513CB9285E06C11A527DFB081D 
{
	int32_t ___hashCode;
	int32_t ___next;
	Il2CppSharedGenericObject* ___key;
	PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___value;
};
struct Enumerator_tA44F63A19268F1FC34B9785A995AB2BF9089D7E3 
{
	Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39 ____current;
	int32_t ____getEnumeratorRetType;
};
struct KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 
{
	Il2CppSharedGenericObject* ___key;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___value;
};
struct KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B 
{
	Il2CppSharedGenericObject* ___key;
	PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___value;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 
{
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 ___shL0L1RxData;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___shL1GL1RyData;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___shL1BL1RzData;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___shL2Data_0;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___shL2Data_1;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___shL2Data_2;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___shL2Data_3;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___probeOcclusion;
};
struct Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC 
{
	int32_t ___hashCode;
	int32_t ___next;
	Il2CppSharedGenericObject* ___key;
	PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 ___value;
};
struct Enumerator_t6A9C4E5DD7EF59069473AD9444EBEB19D131A6AF 
{
	Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 ____current;
	int32_t ____getEnumeratorRetType;
};
struct Enumerator_tE13A7EE7185C5ADF0A4FA33A023D6FE54E6C2AD0 
{
	Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B ____current;
	int32_t ____getEnumeratorRetType;
};
struct KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C 
{
	Il2CppSharedGenericObject* ___key;
	PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 ___value;
};
struct Enumerator_t4FF2773B2EB3C2F00542662CE1B334D4CB93055F 
{
	Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* ____dictionary;
	int32_t ____version;
	int32_t ____index;
	KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C ____current;
	int32_t ____getEnumeratorRetType;
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields
{
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct EqualityComparer_1_t609C7F4FCDDC30DC5F20B7722F1FDEFB0AA1C2C5_StaticFields
{
	EqualityComparer_1_t609C7F4FCDDC30DC5F20B7722F1FDEFB0AA1C2C5* ___defaultComparer;
};
struct EqualityComparer_1_t17A804F4FB1CFE2AD73A277BBCD4BAFB6D8848DB_StaticFields
{
	EqualityComparer_1_t17A804F4FB1CFE2AD73A277BBCD4BAFB6D8848DB* ___defaultComparer;
};
struct EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438_StaticFields
{
	EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* ___defaultComparer;
};
struct EqualityComparer_1_t7E0C7EEBA33D44A0D43BFEA1C6FA2C4ADA3A6C2A_StaticFields
{
	EqualityComparer_1_t7E0C7EEBA33D44A0D43BFEA1C6FA2C4ADA3A6C2A* ___defaultComparer;
};
struct EqualityComparer_1_tAE8B4F16F447C069F655AA64CF2C6000FD15BD47_StaticFields
{
	EqualityComparer_1_tAE8B4F16F447C069F655AA64CF2C6000FD15BD47* ___defaultComparer;
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
struct EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536 m_Items[1];

	inline Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___anyValue), (void*)NULL);
		#endif
	}
	inline Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___anyValue), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 m_Items[1];

	inline KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___anyValue), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___anyValue), (void*)NULL);
		#endif
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
struct DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533  : public RuntimeArray
{
	ALIGN_FIELD (8) DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB m_Items[1];

	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value), (void*)NULL);
		#endif
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B m_Items[1];

	inline Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
	inline Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39 m_Items[1];

	inline KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
	inline KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
};
struct EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t614B564AA4C598513CB9285E06C11A527DFB081D m_Items[1];

	inline Entry_t614B564AA4C598513CB9285E06C11A527DFB081D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t614B564AA4C598513CB9285E06C11A527DFB081D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
	inline Entry_t614B564AA4C598513CB9285E06C11A527DFB081D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t614B564AA4C598513CB9285E06C11A527DFB081D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B m_Items[1];

	inline KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
	inline KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
};
struct EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289 m_Items[1];

	inline Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___clip), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___binder), (void*)NULL);
		#endif
	}
	inline Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___clip), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___binder), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80 m_Items[1];

	inline KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___clip), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___binder), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___clip), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___binder), (void*)NULL);
		#endif
	}
};
struct EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC m_Items[1];

	inline Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
	inline Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C m_Items[1];

	inline KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
	inline KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
};
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3  : public RuntimeArray
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
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57  : public RuntimeArray
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF97C57493D1C2253954D9F46A5D43A2CFA20EF41_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m86E069C9AA8F87497D017C95A4B438B1E7BB3990_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7979990E022156F05DC158E59E754376C9F242FA_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m5A1F3979609A916C3D83B123706C97BC68876BDA_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, Il2CppSharedGenericObject* ___0_key, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m05AD863CEF17FADC4EDD109FB1D7352B27E86DD4_gshared_inline (KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonValue_t01DB320267C848E729A400EF2345979978F851D2 KeyValuePair_2_get_Value_m6EE16BBDAFF7D590DFBDCB7315A9E7EF43B5F1FE_gshared_inline (KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE0B5E76A847AE2222B66E98746EF54E144067725_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m20CF0CCCAC4A4C8BE19A8ACB2B5A090EC6F9BAB6_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m4EB941034B80B1F81FE9CB823402B1DE78FBACE1_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, Il2CppSharedGenericObject* ___0_key, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t609C7F4FCDDC30DC5F20B7722F1FDEFB0AA1C2C5* EqualityComparer_1_get_Default_m04E2D986A0F8FE3F0F86019C6460ABFBBFEA64EF_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m8BD322115B90C7CB88D6117575765AFE910098BB_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD7F6D2E0ED102C5EA276B356E61DC9D07A8D4804_gshared (KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764* __this, Il2CppSharedGenericObject* ___0_key, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m67DBDCABC6DA9A508B35F4257895DA0FE581040B_gshared (Enumerator_t6A9C4E5DD7EF59069473AD9444EBEB19D131A6AF* __this, Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mEBDEB667A27614330BD412ADE0CE7BD1AB521B0E_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m262F40EA62AAF285FDEBB1524142204FB894258B_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_m90CA5ADAC109E3D265A2A6AD8B5165727D9605D2_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_Remove_m035485E631710955A475F95DE3800BBD2EBD20B5_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m565098B1589D4003676949E73C30335823220410_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t56B61032EF9B470E2684BD0A6C2D570105F9FC35* Dictionary_2_get_Keys_m7B0E4D58C46C0513871AC772A19DD656DE228F32_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t69B2D43505C54B4CA2B032CE046446F1D6139923* Dictionary_2_get_Values_m5FA42DF72D008F69C57E9B7DE22BF04ED32EB4D6_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m22B7AB9440C32CF55F20B89E05342114F0D9ECEA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisJsonValue_t01DB320267C848E729A400EF2345979978F851D2_m0FC4F60029EC7C3D02862A6537BC2B27F0D72DE0 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m9E412ED46D660DD336FD30F5355F434A63FC4FEE_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, Il2CppSharedGenericObject* ___0_key, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m3F671995C893D1894A3380B2289AFFA38E8F7296_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5D7914E4F7E0C8BFA13CCC02B861B2C27C85633E_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mE7BC1634BF34E4C92ADCE6CA4F129711AA05B85C_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m022C3A189C5D99B3C6BCFEDB8C2DBE5C2C6FF157_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mFCBA508C5B0FC8B01FDBE26DFB745A876CB199CE_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, Il2CppSharedGenericObject* ___0_key, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m88176A32E2C9831A50FFF20A93F88E06CD5E8454_gshared_inline (KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D KeyValuePair_2_get_Value_mEB35D03F01963B96DAE24D1F07F970606C3F329D_gshared_inline (KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE50673590D0AF85DED5078999EF9076FAE6D6319_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mB6560A071BFF8D6005016897AE4A249483202650_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mA6367E1363A4C5BFE0755F7209AEE60C123D6830_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, Il2CppSharedGenericObject* ___0_key, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t17A804F4FB1CFE2AD73A277BBCD4BAFB6D8848DB* EqualityComparer_1_get_Default_m163A04098A9AAAA833E90E9CDF272086CBBC86F2_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m010CFA57FECECEB570F2AAC6A8BEFE4D7F0634F7_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mEE51B27EA255D8646F72872F4E82403029154D46_gshared (KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39* __this, Il2CppSharedGenericObject* ___0_key, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m4F175ABAB966024EBBB77711F601AD2DC138FB80_gshared (Enumerator_tA44F63A19268F1FC34B9785A995AB2BF9089D7E3* __this, Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mA3AE600B24256FAAA93F82BE5C7967820BD801BF_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m8F1860B651A77969F0AA678EC51DBD43BCA2E0C4_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m1CDD8BF0D456482C7F2E2D249DC281B52937979A_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t84D05CC571A5B34D646C9C7F719F1913F9A65E84* Dictionary_2_get_Keys_m7E6DF684A626C0E96F5B9C7FCEF24C03C4B47111_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88* Dictionary_2_get_Values_mFC6B4740B4188CC2F63AE4F8677A92D2F6228651_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mFA6FE58A77CC193C29CF3D6B81599DA554C0E42B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D_m237AC2C08DE06EC2EEB543C922F234B578919699 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m800FD26FDA0119447DFEB5DF39D92EFF7E4A8E3C_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, Il2CppSharedGenericObject* ___0_key, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m1767765184CE3BCC2018267D5600085E351C161F_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBDDEABE0D59F655A122956FD4D0FB2FBCCA8ABF3_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mDBBFFF17D48F61048069691D8F842CAD43C172AA_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5EF645AFCC082925C0DDC9B496BAF9C86228376C_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m63AA6477A52F199AD0E81F7E0D08DB88312B7442_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, Il2CppSharedGenericObject* ___0_key, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_mA49393E9626BD22A0596302CDAE76FF764271B48_gshared_inline (KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 KeyValuePair_2_get_Value_m174B96961312514153A649AE56841392A24B5AEC_gshared_inline (KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD8C4D4794807149C4C3B33696BA53B6928718B35_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m92DD73F0529EFEB90FDE0E961A778373251E7EB6_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m2D97ED8125427AE8A273C51D22B4578D29500E83_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, Il2CppSharedGenericObject* ___0_key, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* EqualityComparer_1_get_Default_mAEFB6D58B5FB5D08A3774D5EC5AE38DFFBF280CA_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m3C4C5715882231683A7F6C1541CFDEE5706C4800_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m2E35EF529E1E4FB3873EFCAF2E7868450B1F7226_gshared (KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B* __this, Il2CppSharedGenericObject* ___0_key, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m21AA05C1023CAAC822A77D71229F6EED2204C52F_gshared (Enumerator_tE13A7EE7185C5ADF0A4FA33A023D6FE54E6C2AD0* __this, Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m81A0369C628B15FEFD3D887FD80C3E296D8E174A_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA8E3BB98EFFD36D38DA4808528AB3A46055B42F0_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m09EAA80EE584BD755D68E35A65F1CF67B89C7449_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t945190B48E85011C084A91C20858D236ABBCB887* Dictionary_2_get_Keys_mCD28FA1EDD017A3DA4BB34F0C927190DF2E304C3_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t088AFADCACA3AB2259B91A247AE941BD4BB8DA2C* Dictionary_2_get_Values_m5096013C7B2D59752D833466EE2CE1614B089F22_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m239CA995DF920408F826C1B09FBAD9111926575E_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_mF8E7B468A54C6AC70A820852EE7460D3CAFF77FC (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m6D123F8BB54F746D68BC0B5C556448E219358364_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, Il2CppSharedGenericObject* ___0_key, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m7F0D3D513B7FE1BAA4DD5133320D5C5FE05F7C6F_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5485B42465A46B52E0DE92EBDB846727D1FB024C_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mBAB2ADDD75D6A4D3A612BBA2DFE44D849F8D55A8_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1BB943535ACA7B0785EFAC2B7E9C99BA8259C322_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m164E62363701567DF11BCF035A4CC05DC0D297A8_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, Il2CppSharedGenericObject* ___0_key, ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_mA6FA6FE4E7642BC54EAF21AADECB615F6FF243EB_gshared_inline (KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 KeyValuePair_2_get_Value_mCFA751814A4E8628334ABFA53DBC00B3AC50BF30_gshared_inline (KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1691B37239B9221051C92FA435FD20DD6667C44F_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m5EB815222BAF6145DD1AFA76DC4F40C1515A7928_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m7259D7EAE53BE879212DE576CDD0D360B6E6A124_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, Il2CppSharedGenericObject* ___0_key, ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7E0C7EEBA33D44A0D43BFEA1C6FA2C4ADA3A6C2A* EqualityComparer_1_get_Default_mBC6EC48AEA71CAE94CF8657F17A6288B993FE252_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mD1AB40C316C2E958E9B7AD3B2BA17583075EB910_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m35D9FA2776A46EA70F42A62D3001D945417621E3_gshared (KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80* __this, Il2CppSharedGenericObject* ___0_key, ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mCB277E15EDC0038B3BFA9E04BDC59938B02419C3_gshared (Enumerator_t04AD2E161333718026A8FD2EA5F16659FB0CC2FC* __this, Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mA6010BD6E1FE617ED61B098CD2C60F5EFD9B505D_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m93834F44790498E60B5D0D30B73C65B5F76AC230_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD4C6C2D6C87D7115BCC243A736CFD0D4ABCBC9CE_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tE6F533AA064BC6E35BFB035F4A8150D5C4D66789* Dictionary_2_get_Keys_mA6C2D3629CC406CB0B0149C293FFF4E8A3757465_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t84542E3DD580360E9BEC89E6D5173270C22BBAB1* Dictionary_2_get_Values_mFA814573E0FA1F0A13345900E02870018D508868_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mE9CF9EAC4C2C638435D1B2AB5D378860A9230294_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244_mC58DD2C43061B18F9614D49AFB4544789F10CC70 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mB5A45EBEBFCC40B707B461C7ABCA775BC6BACA52_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, Il2CppSharedGenericObject* ___0_key, ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m5B813EEF6752A0B9DC425B9B0358CDD9FF444CC9_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBE6B4EA16EABEA93D814278F537C1160EE6901CA_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m2173A38983FBA0FA8078B9DB9EEA8F54BEE1C3FC_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAD0EDB365809AE1188C161D694A07A8EBD8C0889_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m84B2C31E46D1B34FD994AC15857C2F524CD35723_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, Il2CppSharedGenericObject* ___0_key, PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_mDE6EBB5E13C994979C9F16F6A1185D1719BC2609_gshared_inline (KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 KeyValuePair_2_get_Value_m73D79C3513B3F85604EE011537EFB1F01F5AD4FD_gshared_inline (KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m528E65093CEEF8029719B9F24AB702E16A672180_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m756839801A9CE21D7A69DCEBCB5A94CABAB765A1_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m3947B50EA21C490D5ABDF7391DC0695E6AA3F8EE_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, Il2CppSharedGenericObject* ___0_key, PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAE8B4F16F447C069F655AA64CF2C6000FD15BD47* EqualityComparer_1_get_Default_mFC11E751ABDC51479FADCFFDE7BC0CA498A3416D_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m142361FBB854A5E49B418EDBE8A10CF40257429F_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mFF7A2DEA079DFBF3188610A432E9C41E648C6431_gshared (KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C* __this, Il2CppSharedGenericObject* ___0_key, PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mFBE71A9FB96AE9B4BB91931E3B63B40398380C0D_gshared (Enumerator_t4FF2773B2EB3C2F00542662CE1B334D4CB93055F* __this, Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m0EA6E202CDCDD89090685990E9823673387A5656_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m67B7CFF00A3B25945A499DF62E0CF4E6DF1918BB_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m31E09E2EEED0C2BEE644E149ACC367CB8B9FB9D2_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tDDC92BC5522FB87485368E61B8DE31D7A29A9E14* Dictionary_2_get_Keys_mAB2E0586FB36EA7BCC55C4EB76EB9B73C09886B6_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t913C7FDC829EFFA2FD9D38CDD1D9621FD97C3999* Dictionary_2_get_Values_mD79B71FF05F87047C3E201657004D5C7648B02BD_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mD84AE664F3F606FD24A6EBEF4D9659BC4CF5D564_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55_mD4A68170D902375602302A675425D4FCD4AE38A5 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m696D60B08100005DA90FC0604C779FA900ECB6D9_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, Il2CppSharedGenericObject* ___0_key, PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA7E583CEF0854C8249304C0D0843651299DD371B_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_m0E15783C5C4D648412273FE8259A7A644F5A2CD0_gshared (ConditionalWeakTable_2_tDA4DD9BAFAF3114A73F0B4D6AA3049208A3B288B* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_fshared (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1_fshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t609C7F4FCDDC30DC5F20B7722F1FDEFB0AA1C2C5* EqualityComparer_1_CreateComparer_m73E7F699BEC0FD641A6E44DFA4C82247A06EB890 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t17A804F4FB1CFE2AD73A277BBCD4BAFB6D8848DB* EqualityComparer_1_CreateComparer_mE310EABD0C2BE554160ED45EE2EE1CCEEBA9788B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* EqualityComparer_1_CreateComparer_m357353584C6FF3B48BF7970D070BFEA81C8F65F9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t7E0C7EEBA33D44A0D43BFEA1C6FA2C4ADA3A6C2A* EqualityComparer_1_CreateComparer_m42C1D54F504A3FBD4A29FF6AA675FB5B6074F273 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tAE8B4F16F447C069F655AA64CF2C6000FD15BD47* EqualityComparer_1_CreateComparer_mAE9E347B86D0FB94E4195E7079077FD0D056B304 (const RuntimeMethod* method) ;

inline void Dictionary_2__ctor_mF97C57493D1C2253954D9F46A5D43A2CFA20EF41 (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mF97C57493D1C2253954D9F46A5D43A2CFA20EF41_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97 (int32_t ___0_argument, const RuntimeMethod* method) ;
inline int32_t Dictionary_2_Initialize_m86E069C9AA8F87497D017C95A4B438B1E7BB3990 (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m86E069C9AA8F87497D017C95A4B438B1E7BB3990_gshared)(__this, ___0_capacity, method);
}
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline)(method);
}
inline void Dictionary_2__ctor_m7979990E022156F05DC158E59E754376C9F242FA (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m7979990E022156F05DC158E59E754376C9F242FA_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
inline void Dictionary_2_Add_m5A1F3979609A916C3D83B123706C97BC68876BDA (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, Il2CppSharedGenericObject* ___0_key, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074*, Il2CppSharedGenericObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))Dictionary_2_Add_m5A1F3979609A916C3D83B123706C97BC68876BDA_gshared)(__this, ___0_key, ___1_value, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m05AD863CEF17FADC4EDD109FB1D7352B27E86DD4_inline (KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764*, const RuntimeMethod*))KeyValuePair_2_get_Key_m05AD863CEF17FADC4EDD109FB1D7352B27E86DD4_gshared_inline)(__this, method);
}
inline JsonValue_t01DB320267C848E729A400EF2345979978F851D2 KeyValuePair_2_get_Value_m6EE16BBDAFF7D590DFBDCB7315A9E7EF43B5F1FE_inline (KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764* __this, const RuntimeMethod* method)
{
	return ((  JsonValue_t01DB320267C848E729A400EF2345979978F851D2 (*) (KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764*, const RuntimeMethod*))KeyValuePair_2_get_Value_m6EE16BBDAFF7D590DFBDCB7315A9E7EF43B5F1FE_gshared_inline)(__this, method);
}
inline void Dictionary_2__ctor_mE0B5E76A847AE2222B66E98746EF54E144067725 (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mE0B5E76A847AE2222B66E98746EF54E144067725_gshared)(__this, ___0_collection, ___1_comparer, method);
}
inline void KeyCollection__ctor_m1CE214FD2D7BFE70EA3084C2AAAF90D3F8F2262B (KeyCollection_t56B61032EF9B470E2684BD0A6C2D570105F9FC35* __this, Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t56B61032EF9B470E2684BD0A6C2D570105F9FC35*, Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074*, const RuntimeMethod*))KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m95A9FD88749627CF8A60EF35DBBE07DDA4CC20C9 (ValueCollection_t69B2D43505C54B4CA2B032CE046446F1D6139923* __this, Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t69B2D43505C54B4CA2B032CE046446F1D6139923*, Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074*, const RuntimeMethod*))ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m20CF0CCCAC4A4C8BE19A8ACB2B5A090EC6F9BAB6 (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_FindEntry_m20CF0CCCAC4A4C8BE19A8ACB2B5A090EC6F9BAB6_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline bool Dictionary_2_TryInsert_m4EB941034B80B1F81FE9CB823402B1DE78FBACE1 (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, Il2CppSharedGenericObject* ___0_key, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074*, Il2CppSharedGenericObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m4EB941034B80B1F81FE9CB823402B1DE78FBACE1_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t609C7F4FCDDC30DC5F20B7722F1FDEFB0AA1C2C5* EqualityComparer_1_get_Default_m04E2D986A0F8FE3F0F86019C6460ABFBBFEA64EF_inline (const RuntimeMethod* method) ;
inline bool Dictionary_2_Remove_m8BD322115B90C7CB88D6117575765AFE910098BB (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_Remove_m8BD322115B90C7CB88D6117575765AFE910098BB_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_m3B97F0207D6EAEDFC2EA570B686DCA1C71B81D3B (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_mD7F6D2E0ED102C5EA276B356E61DC9D07A8D4804 (KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764* __this, Il2CppSharedGenericObject* ___0_key, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764*, Il2CppSharedGenericObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))KeyValuePair_2__ctor_mD7F6D2E0ED102C5EA276B356E61DC9D07A8D4804_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m67DBDCABC6DA9A508B35F4257895DA0FE581040B (Enumerator_t6A9C4E5DD7EF59069473AD9444EBEB19D131A6AF* __this, Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6A9C4E5DD7EF59069473AD9444EBEB19D131A6AF*, Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074*, int32_t, const RuntimeMethod*))Enumerator__ctor_m67DBDCABC6DA9A508B35F4257895DA0FE581040B_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
inline void Dictionary_2_CopyTo_mEBDEB667A27614330BD412ADE0CE7BD1AB521B0E (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074*, KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mEBDEB667A27614330BD412ADE0CE7BD1AB521B0E_gshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5 (RuntimeObject* ___0_key, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m262F40EA62AAF285FDEBB1524142204FB894258B (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074*, const RuntimeMethod*))Dictionary_2_Resize_m262F40EA62AAF285FDEBB1524142204FB894258B_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F (const RuntimeMethod* method) ;
inline bool ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_m90CA5ADAC109E3D265A2A6AD8B5165727D9605D2_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16 (int32_t ___0_resource, const RuntimeMethod* method) ;
inline bool ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, const RuntimeMethod*))ConditionalWeakTable_2_Remove_m035485E631710955A475F95DE3800BBD2EBD20B5_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
inline void Dictionary_2_Resize_m565098B1589D4003676949E73C30335823220410 (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m565098B1589D4003676949E73C30335823220410_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline KeyCollection_t56B61032EF9B470E2684BD0A6C2D570105F9FC35* Dictionary_2_get_Keys_m7B0E4D58C46C0513871AC772A19DD656DE228F32 (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t56B61032EF9B470E2684BD0A6C2D570105F9FC35* (*) (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074*, const RuntimeMethod*))Dictionary_2_get_Keys_m7B0E4D58C46C0513871AC772A19DD656DE228F32_gshared)(__this, method);
}
inline ValueCollection_t69B2D43505C54B4CA2B032CE046446F1D6139923* Dictionary_2_get_Values_m5FA42DF72D008F69C57E9B7DE22BF04ED32EB4D6 (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t69B2D43505C54B4CA2B032CE046446F1D6139923* (*) (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074*, const RuntimeMethod*))Dictionary_2_get_Values_m5FA42DF72D008F69C57E9B7DE22BF04ED32EB4D6_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_m22B7AB9440C32CF55F20B89E05342114F0D9ECEA (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m22B7AB9440C32CF55F20B89E05342114F0D9ECEA_gshared)(___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisJsonValue_t01DB320267C848E729A400EF2345979978F851D2_m0FC4F60029EC7C3D02862A6537BC2B27F0D72DE0 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
inline void Dictionary_2_set_Item_m9E412ED46D660DD336FD30F5355F434A63FC4FEE (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, Il2CppSharedGenericObject* ___0_key, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074*, Il2CppSharedGenericObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))Dictionary_2_set_Item_m9E412ED46D660DD336FD30F5355F434A63FC4FEE_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982 (RuntimeObject* ___0_key, Type_t* ___1_targetType, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_m3F671995C893D1894A3380B2289AFFA38E8F7296 (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_ContainsKey_m3F671995C893D1894A3380B2289AFFA38E8F7296_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m5D7914E4F7E0C8BFA13CCC02B861B2C27C85633E (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m5D7914E4F7E0C8BFA13CCC02B861B2C27C85633E_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mE7BC1634BF34E4C92ADCE6CA4F129711AA05B85C (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mE7BC1634BF34E4C92ADCE6CA4F129711AA05B85C_gshared)(__this, ___0_capacity, method);
}
inline void Dictionary_2__ctor_m022C3A189C5D99B3C6BCFEDB8C2DBE5C2C6FF157 (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m022C3A189C5D99B3C6BCFEDB8C2DBE5C2C6FF157_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_mFCBA508C5B0FC8B01FDBE26DFB745A876CB199CE (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, Il2CppSharedGenericObject* ___0_key, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8*, Il2CppSharedGenericObject*, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D, const RuntimeMethod*))Dictionary_2_Add_mFCBA508C5B0FC8B01FDBE26DFB745A876CB199CE_gshared)(__this, ___0_key, ___1_value, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m88176A32E2C9831A50FFF20A93F88E06CD5E8454_inline (KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39*, const RuntimeMethod*))KeyValuePair_2_get_Key_m88176A32E2C9831A50FFF20A93F88E06CD5E8454_gshared_inline)(__this, method);
}
inline ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D KeyValuePair_2_get_Value_mEB35D03F01963B96DAE24D1F07F970606C3F329D_inline (KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39* __this, const RuntimeMethod* method)
{
	return ((  ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D (*) (KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39*, const RuntimeMethod*))KeyValuePair_2_get_Value_mEB35D03F01963B96DAE24D1F07F970606C3F329D_gshared_inline)(__this, method);
}
inline void Dictionary_2__ctor_mE50673590D0AF85DED5078999EF9076FAE6D6319 (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mE50673590D0AF85DED5078999EF9076FAE6D6319_gshared)(__this, ___0_collection, ___1_comparer, method);
}
inline void KeyCollection__ctor_m1AE58FDEE971C60C577576203ECDF8CCB324A73A (KeyCollection_t84D05CC571A5B34D646C9C7F719F1913F9A65E84* __this, Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t84D05CC571A5B34D646C9C7F719F1913F9A65E84*, Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8*, const RuntimeMethod*))KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m3668355B9084F070AB970D1E4A2F4846158E6C6C (ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88* __this, Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88*, Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8*, const RuntimeMethod*))ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_mB6560A071BFF8D6005016897AE4A249483202650 (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_FindEntry_mB6560A071BFF8D6005016897AE4A249483202650_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_mA6367E1363A4C5BFE0755F7209AEE60C123D6830 (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, Il2CppSharedGenericObject* ___0_key, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8*, Il2CppSharedGenericObject*, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_mA6367E1363A4C5BFE0755F7209AEE60C123D6830_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t17A804F4FB1CFE2AD73A277BBCD4BAFB6D8848DB* EqualityComparer_1_get_Default_m163A04098A9AAAA833E90E9CDF272086CBBC86F2_inline (const RuntimeMethod* method) ;
inline bool Dictionary_2_Remove_m010CFA57FECECEB570F2AAC6A8BEFE4D7F0634F7 (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_Remove_m010CFA57FECECEB570F2AAC6A8BEFE4D7F0634F7_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m4623426B34C938BD4399892C44613928D14F0001 (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mEE51B27EA255D8646F72872F4E82403029154D46 (KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39* __this, Il2CppSharedGenericObject* ___0_key, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39*, Il2CppSharedGenericObject*, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D, const RuntimeMethod*))KeyValuePair_2__ctor_mEE51B27EA255D8646F72872F4E82403029154D46_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m4F175ABAB966024EBBB77711F601AD2DC138FB80 (Enumerator_tA44F63A19268F1FC34B9785A995AB2BF9089D7E3* __this, Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA44F63A19268F1FC34B9785A995AB2BF9089D7E3*, Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8*, int32_t, const RuntimeMethod*))Enumerator__ctor_m4F175ABAB966024EBBB77711F601AD2DC138FB80_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mA3AE600B24256FAAA93F82BE5C7967820BD801BF (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8*, KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mA3AE600B24256FAAA93F82BE5C7967820BD801BF_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_m8F1860B651A77969F0AA678EC51DBD43BCA2E0C4 (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8*, const RuntimeMethod*))Dictionary_2_Resize_m8F1860B651A77969F0AA678EC51DBD43BCA2E0C4_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m1CDD8BF0D456482C7F2E2D249DC281B52937979A (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m1CDD8BF0D456482C7F2E2D249DC281B52937979A_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_t84D05CC571A5B34D646C9C7F719F1913F9A65E84* Dictionary_2_get_Keys_m7E6DF684A626C0E96F5B9C7FCEF24C03C4B47111 (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t84D05CC571A5B34D646C9C7F719F1913F9A65E84* (*) (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8*, const RuntimeMethod*))Dictionary_2_get_Keys_m7E6DF684A626C0E96F5B9C7FCEF24C03C4B47111_gshared)(__this, method);
}
inline ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88* Dictionary_2_get_Values_mFC6B4740B4188CC2F63AE4F8677A92D2F6228651 (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88* (*) (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8*, const RuntimeMethod*))Dictionary_2_get_Values_mFC6B4740B4188CC2F63AE4F8677A92D2F6228651_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_mFA6FE58A77CC193C29CF3D6B81599DA554C0E42B (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mFA6FE58A77CC193C29CF3D6B81599DA554C0E42B_gshared)(___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D_m237AC2C08DE06EC2EEB543C922F234B578919699 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
inline void Dictionary_2_set_Item_m800FD26FDA0119447DFEB5DF39D92EFF7E4A8E3C (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, Il2CppSharedGenericObject* ___0_key, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8*, Il2CppSharedGenericObject*, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D, const RuntimeMethod*))Dictionary_2_set_Item_m800FD26FDA0119447DFEB5DF39D92EFF7E4A8E3C_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m1767765184CE3BCC2018267D5600085E351C161F (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_ContainsKey_m1767765184CE3BCC2018267D5600085E351C161F_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mBDDEABE0D59F655A122956FD4D0FB2FBCCA8ABF3 (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mBDDEABE0D59F655A122956FD4D0FB2FBCCA8ABF3_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mDBBFFF17D48F61048069691D8F842CAD43C172AA (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mDBBFFF17D48F61048069691D8F842CAD43C172AA_gshared)(__this, ___0_capacity, method);
}
inline void Dictionary_2__ctor_m5EF645AFCC082925C0DDC9B496BAF9C86228376C (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m5EF645AFCC082925C0DDC9B496BAF9C86228376C_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m63AA6477A52F199AD0E81F7E0D08DB88312B7442 (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, Il2CppSharedGenericObject* ___0_key, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5*, Il2CppSharedGenericObject*, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, const RuntimeMethod*))Dictionary_2_Add_m63AA6477A52F199AD0E81F7E0D08DB88312B7442_gshared)(__this, ___0_key, ___1_value, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Key_mA49393E9626BD22A0596302CDAE76FF764271B48_inline (KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B*, const RuntimeMethod*))KeyValuePair_2_get_Key_mA49393E9626BD22A0596302CDAE76FF764271B48_gshared_inline)(__this, method);
}
inline PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 KeyValuePair_2_get_Value_m174B96961312514153A649AE56841392A24B5AEC_inline (KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B* __this, const RuntimeMethod* method)
{
	return ((  PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 (*) (KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B*, const RuntimeMethod*))KeyValuePair_2_get_Value_m174B96961312514153A649AE56841392A24B5AEC_gshared_inline)(__this, method);
}
inline void Dictionary_2__ctor_mD8C4D4794807149C4C3B33696BA53B6928718B35 (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mD8C4D4794807149C4C3B33696BA53B6928718B35_gshared)(__this, ___0_collection, ___1_comparer, method);
}
inline void KeyCollection__ctor_m78A0F952D3E0A3BB0E157B76AAA65C5F14639AA8 (KeyCollection_t945190B48E85011C084A91C20858D236ABBCB887* __this, Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_t945190B48E85011C084A91C20858D236ABBCB887*, Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5*, const RuntimeMethod*))KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m74011055CC3E8F2B628D05A491CD4CF3C48694D7 (ValueCollection_t088AFADCACA3AB2259B91A247AE941BD4BB8DA2C* __this, Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t088AFADCACA3AB2259B91A247AE941BD4BB8DA2C*, Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5*, const RuntimeMethod*))ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m92DD73F0529EFEB90FDE0E961A778373251E7EB6 (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_FindEntry_m92DD73F0529EFEB90FDE0E961A778373251E7EB6_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m2D97ED8125427AE8A273C51D22B4578D29500E83 (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, Il2CppSharedGenericObject* ___0_key, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5*, Il2CppSharedGenericObject*, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m2D97ED8125427AE8A273C51D22B4578D29500E83_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* EqualityComparer_1_get_Default_mAEFB6D58B5FB5D08A3774D5EC5AE38DFFBF280CA_inline (const RuntimeMethod* method) ;
inline bool Dictionary_2_Remove_m3C4C5715882231683A7F6C1541CFDEE5706C4800 (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_Remove_m3C4C5715882231683A7F6C1541CFDEE5706C4800_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m56C96986661B0AB3097CA328F754F2D0CE55E5A3 (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m2E35EF529E1E4FB3873EFCAF2E7868450B1F7226 (KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B* __this, Il2CppSharedGenericObject* ___0_key, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B*, Il2CppSharedGenericObject*, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, const RuntimeMethod*))KeyValuePair_2__ctor_m2E35EF529E1E4FB3873EFCAF2E7868450B1F7226_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m21AA05C1023CAAC822A77D71229F6EED2204C52F (Enumerator_tE13A7EE7185C5ADF0A4FA33A023D6FE54E6C2AD0* __this, Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE13A7EE7185C5ADF0A4FA33A023D6FE54E6C2AD0*, Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5*, int32_t, const RuntimeMethod*))Enumerator__ctor_m21AA05C1023CAAC822A77D71229F6EED2204C52F_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m81A0369C628B15FEFD3D887FD80C3E296D8E174A (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5*, KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m81A0369C628B15FEFD3D887FD80C3E296D8E174A_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_mA8E3BB98EFFD36D38DA4808528AB3A46055B42F0 (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5*, const RuntimeMethod*))Dictionary_2_Resize_mA8E3BB98EFFD36D38DA4808528AB3A46055B42F0_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m09EAA80EE584BD755D68E35A65F1CF67B89C7449 (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m09EAA80EE584BD755D68E35A65F1CF67B89C7449_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_t945190B48E85011C084A91C20858D236ABBCB887* Dictionary_2_get_Keys_mCD28FA1EDD017A3DA4BB34F0C927190DF2E304C3 (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t945190B48E85011C084A91C20858D236ABBCB887* (*) (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5*, const RuntimeMethod*))Dictionary_2_get_Keys_mCD28FA1EDD017A3DA4BB34F0C927190DF2E304C3_gshared)(__this, method);
}
inline ValueCollection_t088AFADCACA3AB2259B91A247AE941BD4BB8DA2C* Dictionary_2_get_Values_m5096013C7B2D59752D833466EE2CE1614B089F22 (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t088AFADCACA3AB2259B91A247AE941BD4BB8DA2C* (*) (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5*, const RuntimeMethod*))Dictionary_2_get_Values_m5096013C7B2D59752D833466EE2CE1614B089F22_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_m239CA995DF920408F826C1B09FBAD9111926575E (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_m239CA995DF920408F826C1B09FBAD9111926575E_gshared)(___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_mF8E7B468A54C6AC70A820852EE7460D3CAFF77FC (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
inline void Dictionary_2_set_Item_m6D123F8BB54F746D68BC0B5C556448E219358364 (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, Il2CppSharedGenericObject* ___0_key, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5*, Il2CppSharedGenericObject*, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, const RuntimeMethod*))Dictionary_2_set_Item_m6D123F8BB54F746D68BC0B5C556448E219358364_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m7F0D3D513B7FE1BAA4DD5133320D5C5FE05F7C6F (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_ContainsKey_m7F0D3D513B7FE1BAA4DD5133320D5C5FE05F7C6F_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_m5485B42465A46B52E0DE92EBDB846727D1FB024C (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m5485B42465A46B52E0DE92EBDB846727D1FB024C_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_mBAB2ADDD75D6A4D3A612BBA2DFE44D849F8D55A8 (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_mBAB2ADDD75D6A4D3A612BBA2DFE44D849F8D55A8_gshared)(__this, ___0_capacity, method);
}
inline void Dictionary_2__ctor_m1BB943535ACA7B0785EFAC2B7E9C99BA8259C322 (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m1BB943535ACA7B0785EFAC2B7E9C99BA8259C322_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m164E62363701567DF11BCF035A4CC05DC0D297A8 (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, Il2CppSharedGenericObject* ___0_key, ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D*, Il2CppSharedGenericObject*, ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244, const RuntimeMethod*))Dictionary_2_Add_m164E62363701567DF11BCF035A4CC05DC0D297A8_gshared)(__this, ___0_key, ___1_value, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Key_mA6FA6FE4E7642BC54EAF21AADECB615F6FF243EB_inline (KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80*, const RuntimeMethod*))KeyValuePair_2_get_Key_mA6FA6FE4E7642BC54EAF21AADECB615F6FF243EB_gshared_inline)(__this, method);
}
inline ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 KeyValuePair_2_get_Value_mCFA751814A4E8628334ABFA53DBC00B3AC50BF30_inline (KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80* __this, const RuntimeMethod* method)
{
	return ((  ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 (*) (KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80*, const RuntimeMethod*))KeyValuePair_2_get_Value_mCFA751814A4E8628334ABFA53DBC00B3AC50BF30_gshared_inline)(__this, method);
}
inline void Dictionary_2__ctor_m1691B37239B9221051C92FA435FD20DD6667C44F (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m1691B37239B9221051C92FA435FD20DD6667C44F_gshared)(__this, ___0_collection, ___1_comparer, method);
}
inline void KeyCollection__ctor_mB833A0F9C2F37EE48F9D4352A63435E9F9672B82 (KeyCollection_tE6F533AA064BC6E35BFB035F4A8150D5C4D66789* __this, Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tE6F533AA064BC6E35BFB035F4A8150D5C4D66789*, Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D*, const RuntimeMethod*))KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m63BF3189ADD55C613C739B0ACF27C4DC083A72FA (ValueCollection_t84542E3DD580360E9BEC89E6D5173270C22BBAB1* __this, Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t84542E3DD580360E9BEC89E6D5173270C22BBAB1*, Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D*, const RuntimeMethod*))ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m5EB815222BAF6145DD1AFA76DC4F40C1515A7928 (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_FindEntry_m5EB815222BAF6145DD1AFA76DC4F40C1515A7928_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m7259D7EAE53BE879212DE576CDD0D360B6E6A124 (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, Il2CppSharedGenericObject* ___0_key, ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D*, Il2CppSharedGenericObject*, ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m7259D7EAE53BE879212DE576CDD0D360B6E6A124_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7E0C7EEBA33D44A0D43BFEA1C6FA2C4ADA3A6C2A* EqualityComparer_1_get_Default_mBC6EC48AEA71CAE94CF8657F17A6288B993FE252_inline (const RuntimeMethod* method) ;
inline bool Dictionary_2_Remove_mD1AB40C316C2E958E9B7AD3B2BA17583075EB910 (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_Remove_mD1AB40C316C2E958E9B7AD3B2BA17583075EB910_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_m103318A6BF334914529F062925F23BF551FCC70D (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
inline void KeyValuePair_2__ctor_m35D9FA2776A46EA70F42A62D3001D945417621E3 (KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80* __this, Il2CppSharedGenericObject* ___0_key, ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80*, Il2CppSharedGenericObject*, ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244, const RuntimeMethod*))KeyValuePair_2__ctor_m35D9FA2776A46EA70F42A62D3001D945417621E3_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_mCB277E15EDC0038B3BFA9E04BDC59938B02419C3 (Enumerator_t04AD2E161333718026A8FD2EA5F16659FB0CC2FC* __this, Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t04AD2E161333718026A8FD2EA5F16659FB0CC2FC*, Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D*, int32_t, const RuntimeMethod*))Enumerator__ctor_mCB277E15EDC0038B3BFA9E04BDC59938B02419C3_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_mA6010BD6E1FE617ED61B098CD2C60F5EFD9B505D (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D*, KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_mA6010BD6E1FE617ED61B098CD2C60F5EFD9B505D_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_m93834F44790498E60B5D0D30B73C65B5F76AC230 (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D*, const RuntimeMethod*))Dictionary_2_Resize_m93834F44790498E60B5D0D30B73C65B5F76AC230_gshared)(__this, method);
}
inline void Dictionary_2_Resize_mD4C6C2D6C87D7115BCC243A736CFD0D4ABCBC9CE (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_mD4C6C2D6C87D7115BCC243A736CFD0D4ABCBC9CE_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_tE6F533AA064BC6E35BFB035F4A8150D5C4D66789* Dictionary_2_get_Keys_mA6C2D3629CC406CB0B0149C293FFF4E8A3757465 (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tE6F533AA064BC6E35BFB035F4A8150D5C4D66789* (*) (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D*, const RuntimeMethod*))Dictionary_2_get_Keys_mA6C2D3629CC406CB0B0149C293FFF4E8A3757465_gshared)(__this, method);
}
inline ValueCollection_t84542E3DD580360E9BEC89E6D5173270C22BBAB1* Dictionary_2_get_Values_mFA814573E0FA1F0A13345900E02870018D508868 (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t84542E3DD580360E9BEC89E6D5173270C22BBAB1* (*) (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D*, const RuntimeMethod*))Dictionary_2_get_Values_mFA814573E0FA1F0A13345900E02870018D508868_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_mE9CF9EAC4C2C638435D1B2AB5D378860A9230294 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mE9CF9EAC4C2C638435D1B2AB5D378860A9230294_gshared)(___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244_mC58DD2C43061B18F9614D49AFB4544789F10CC70 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
inline void Dictionary_2_set_Item_mB5A45EBEBFCC40B707B461C7ABCA775BC6BACA52 (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, Il2CppSharedGenericObject* ___0_key, ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D*, Il2CppSharedGenericObject*, ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244, const RuntimeMethod*))Dictionary_2_set_Item_mB5A45EBEBFCC40B707B461C7ABCA775BC6BACA52_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_m5B813EEF6752A0B9DC425B9B0358CDD9FF444CC9 (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_ContainsKey_m5B813EEF6752A0B9DC425B9B0358CDD9FF444CC9_gshared)(__this, ___0_key, method);
}
inline void Dictionary_2__ctor_mBE6B4EA16EABEA93D814278F537C1160EE6901CA (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mBE6B4EA16EABEA93D814278F537C1160EE6901CA_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline int32_t Dictionary_2_Initialize_m2173A38983FBA0FA8078B9DB9EEA8F54BEE1C3FC (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6*, int32_t, const RuntimeMethod*))Dictionary_2_Initialize_m2173A38983FBA0FA8078B9DB9EEA8F54BEE1C3FC_gshared)(__this, ___0_capacity, method);
}
inline void Dictionary_2__ctor_mAD0EDB365809AE1188C161D694A07A8EBD8C0889 (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_mAD0EDB365809AE1188C161D694A07A8EBD8C0889_gshared)(__this, ___0_dictionary, ___1_comparer, method);
}
inline void Dictionary_2_Add_m84B2C31E46D1B34FD994AC15857C2F524CD35723 (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, Il2CppSharedGenericObject* ___0_key, PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6*, Il2CppSharedGenericObject*, PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55, const RuntimeMethod*))Dictionary_2_Add_m84B2C31E46D1B34FD994AC15857C2F524CD35723_gshared)(__this, ___0_key, ___1_value, method);
}
inline Il2CppSharedGenericObject* KeyValuePair_2_get_Key_mDE6EBB5E13C994979C9F16F6A1185D1719BC2609_inline (KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C*, const RuntimeMethod*))KeyValuePair_2_get_Key_mDE6EBB5E13C994979C9F16F6A1185D1719BC2609_gshared_inline)(__this, method);
}
inline PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 KeyValuePair_2_get_Value_m73D79C3513B3F85604EE011537EFB1F01F5AD4FD_inline (KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C* __this, const RuntimeMethod* method)
{
	return ((  PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 (*) (KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C*, const RuntimeMethod*))KeyValuePair_2_get_Value_m73D79C3513B3F85604EE011537EFB1F01F5AD4FD_gshared_inline)(__this, method);
}
inline void Dictionary_2__ctor_m528E65093CEEF8029719B9F24AB702E16A672180 (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m528E65093CEEF8029719B9F24AB702E16A672180_gshared)(__this, ___0_collection, ___1_comparer, method);
}
inline void KeyCollection__ctor_mE014D210AB20DEFE331E5CE84C40DE329F4584CC (KeyCollection_tDDC92BC5522FB87485368E61B8DE31D7A29A9E14* __this, Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (KeyCollection_tDDC92BC5522FB87485368E61B8DE31D7A29A9E14*, Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6*, const RuntimeMethod*))KeyCollection__ctor_m7AF8E4ED6C5228B083FFB423B7DC792CA7C5DD1F_fshared)(__this, ___0_dictionary, method);
}
inline void ValueCollection__ctor_m8AB7CA8F9C657783E065269D572C586F5B71A545 (ValueCollection_t913C7FDC829EFFA2FD9D38CDD1D9621FD97C3999* __this, Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_t913C7FDC829EFFA2FD9D38CDD1D9621FD97C3999*, Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6*, const RuntimeMethod*))ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared)(__this, ___0_dictionary, method);
}
inline int32_t Dictionary_2_FindEntry_m756839801A9CE21D7A69DCEBCB5A94CABAB765A1 (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_FindEntry_m756839801A9CE21D7A69DCEBCB5A94CABAB765A1_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryInsert_m3947B50EA21C490D5ABDF7391DC0695E6AA3F8EE (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, Il2CppSharedGenericObject* ___0_key, PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6*, Il2CppSharedGenericObject*, PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55, uint8_t, const RuntimeMethod*))Dictionary_2_TryInsert_m3947B50EA21C490D5ABDF7391DC0695E6AA3F8EE_gshared)(__this, ___0_key, ___1_value, ___2_behavior, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAE8B4F16F447C069F655AA64CF2C6000FD15BD47* EqualityComparer_1_get_Default_mFC11E751ABDC51479FADCFFDE7BC0CA498A3416D_inline (const RuntimeMethod* method) ;
inline bool Dictionary_2_Remove_m142361FBB854A5E49B418EDBE8A10CF40257429F (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_Remove_m142361FBB854A5E49B418EDBE8A10CF40257429F_gshared)(__this, ___0_key, method);
}
inline int32_t Dictionary_2_get_Count_mB11C9E41ADB94CD4F1E73F487D0E3D9FC6179A83 (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
inline void KeyValuePair_2__ctor_mFF7A2DEA079DFBF3188610A432E9C41E648C6431 (KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C* __this, Il2CppSharedGenericObject* ___0_key, PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C*, Il2CppSharedGenericObject*, PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55, const RuntimeMethod*))KeyValuePair_2__ctor_mFF7A2DEA079DFBF3188610A432E9C41E648C6431_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_mFBE71A9FB96AE9B4BB91931E3B63B40398380C0D (Enumerator_t4FF2773B2EB3C2F00542662CE1B334D4CB93055F* __this, Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4FF2773B2EB3C2F00542662CE1B334D4CB93055F*, Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6*, int32_t, const RuntimeMethod*))Enumerator__ctor_mFBE71A9FB96AE9B4BB91931E3B63B40398380C0D_gshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline void Dictionary_2_CopyTo_m0EA6E202CDCDD89090685990E9823673387A5656 (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6*, KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF*, int32_t, const RuntimeMethod*))Dictionary_2_CopyTo_m0EA6E202CDCDD89090685990E9823673387A5656_gshared)(__this, ___0_array, ___1_index, method);
}
inline void Dictionary_2_Resize_m67B7CFF00A3B25945A499DF62E0CF4E6DF1918BB (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6*, const RuntimeMethod*))Dictionary_2_Resize_m67B7CFF00A3B25945A499DF62E0CF4E6DF1918BB_gshared)(__this, method);
}
inline void Dictionary_2_Resize_m31E09E2EEED0C2BEE644E149ACC367CB8B9FB9D2 (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6*, int32_t, bool, const RuntimeMethod*))Dictionary_2_Resize_m31E09E2EEED0C2BEE644E149ACC367CB8B9FB9D2_gshared)(__this, ___0_newSize, ___1_forceNewHashCodes, method);
}
inline KeyCollection_tDDC92BC5522FB87485368E61B8DE31D7A29A9E14* Dictionary_2_get_Keys_mAB2E0586FB36EA7BCC55C4EB76EB9B73C09886B6 (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tDDC92BC5522FB87485368E61B8DE31D7A29A9E14* (*) (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6*, const RuntimeMethod*))Dictionary_2_get_Keys_mAB2E0586FB36EA7BCC55C4EB76EB9B73C09886B6_gshared)(__this, method);
}
inline ValueCollection_t913C7FDC829EFFA2FD9D38CDD1D9621FD97C3999* Dictionary_2_get_Values_mD79B71FF05F87047C3E201657004D5C7648B02BD (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t913C7FDC829EFFA2FD9D38CDD1D9621FD97C3999* (*) (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6*, const RuntimeMethod*))Dictionary_2_get_Values_mD79B71FF05F87047C3E201657004D5C7648B02BD_gshared)(__this, method);
}
inline bool Dictionary_2_IsCompatibleKey_mD84AE664F3F606FD24A6EBEF4D9659BC4CF5D564 (RuntimeObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Dictionary_2_IsCompatibleKey_mD84AE664F3F606FD24A6EBEF4D9659BC4CF5D564_gshared)(___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55_mD4A68170D902375602302A675425D4FCD4AE38A5 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
inline void Dictionary_2_set_Item_m696D60B08100005DA90FC0604C779FA900ECB6D9 (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, Il2CppSharedGenericObject* ___0_key, PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6*, Il2CppSharedGenericObject*, PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55, const RuntimeMethod*))Dictionary_2_set_Item_m696D60B08100005DA90FC0604C779FA900ECB6D9_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Dictionary_2_ContainsKey_mA7E583CEF0854C8249304C0D0843651299DD371B (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6*, Il2CppSharedGenericObject*, const RuntimeMethod*))Dictionary_2_ContainsKey_mA7E583CEF0854C8249304C0D0843651299DD371B_gshared)(__this, ___0_key, method);
}
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___0_key, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_m0E15783C5C4D648412273FE8259A7A644F5A2CD0_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_fshared)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1 (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1_fshared)(__this, ___0_dictionary, ___1_getEnumeratorRetType, method);
}
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t609C7F4FCDDC30DC5F20B7722F1FDEFB0AA1C2C5* EqualityComparer_1_CreateComparer_m73E7F699BEC0FD641A6E44DFA4C82247A06EB890 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t17A804F4FB1CFE2AD73A277BBCD4BAFB6D8848DB* EqualityComparer_1_CreateComparer_mE310EABD0C2BE554160ED45EE2EE1CCEEBA9788B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* EqualityComparer_1_CreateComparer_m357353584C6FF3B48BF7970D070BFEA81C8F65F9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t7E0C7EEBA33D44A0D43BFEA1C6FA2C4ADA3A6C2A* EqualityComparer_1_CreateComparer_m42C1D54F504A3FBD4A29FF6AA675FB5B6074F273 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tAE8B4F16F447C069F655AA64CF2C6000FD15BD47* EqualityComparer_1_CreateComparer_mAE9E347B86D0FB94E4195E7079077FD0D056B304 (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11248
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m72F66F0DDFD0A5222C803FFB12ACBE3AD918EAB8_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Dictionary_2__ctor_mF97C57493D1C2253954D9F46A5D43A2CFA20EF41(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11249
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC25A8ED461D547E241213966F6F5FD8B562F909A_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mF97C57493D1C2253954D9F46A5D43A2CFA20EF41(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11250
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2D2AB047ED5C9413602A159312E3FA0CCDD677FF_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mF97C57493D1C2253954D9F46A5D43A2CFA20EF41(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11251
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF97C57493D1C2253954D9F46A5D43A2CFA20EF41_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m86E069C9AA8F87497D017C95A4B438B1E7BB3990(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_5;
		L_5 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// Method Definition Index: 11252
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAAABE936E6DAAC69C2E88B9FF1496803D3165A68_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m7979990E022156F05DC158E59E754376C9F242FA(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
// Method Definition Index: 11253
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7979990E022156F05DC158E59E754376C9F242FA_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* G_B2_0 = NULL;
	Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mF97C57493D1C2253954D9F46A5D43A2CFA20EF41(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* L_9 = ((Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		NullCheck(L_9);
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		NullCheck(L_9);
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		Il2CppSharedGenericObject* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___value;
		Dictionary_2_Add_m5A1F3979609A916C3D83B123706C97BC68876BDA(__this, L_17, L_20, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), (RuntimeObject*)L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				NullCheck(L_28);
				KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 L_29;
				L_29 = InterfaceFuncInvoker0< KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_28);
				V_4 = L_29;
				Il2CppSharedGenericObject* L_30;
				L_30 = KeyValuePair_2_get_Key_m05AD863CEF17FADC4EDD109FB1D7352B27E86DD4_inline((&V_4), NULL);
				JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_31;
				L_31 = KeyValuePair_2_get_Value_m6EE16BBDAFF7D590DFBDCB7315A9E7EF43B5F1FE_inline((&V_4), NULL);
				Dictionary_2_Add_m5A1F3979609A916C3D83B123706C97BC68876BDA(__this, L_30, L_31, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				NullCheck((RuntimeObject*)L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
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

IL_00b9:
	{
		return;
	}
}
// Method Definition Index: 11254
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4606D4EDDBC662193021A4270DB59D03B71C629E_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_collection;
		Dictionary_2__ctor_mE0B5E76A847AE2222B66E98746EF54E144067725(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		return;
	}
}
// Method Definition Index: 11255
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE0B5E76A847AE2222B66E98746EF54E144067725_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* G_B2_0 = NULL;
	Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_collection;
		RuntimeObject* L_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000e;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_1;
		goto IL_0013;
	}

IL_000e:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), G_B2_0);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_1;
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mF97C57493D1C2253954D9F46A5D43A2CFA20EF41(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_collection;
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___0_collection;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), L_5);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{
				{
					RuntimeObject* L_7 = V_0;
					if (!L_7)
					{
						goto IL_0059;
					}
				}
				{
					RuntimeObject* L_8 = V_0;
					NullCheck((RuntimeObject*)L_8);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				}

IL_0059:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0046_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 L_10;
				L_10 = InterfaceFuncInvoker0< KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_9);
				V_1 = L_10;
				Il2CppSharedGenericObject* L_11;
				L_11 = KeyValuePair_2_get_Key_m05AD863CEF17FADC4EDD109FB1D7352B27E86DD4_inline((&V_1), NULL);
				JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12;
				L_12 = KeyValuePair_2_get_Value_m6EE16BBDAFF7D590DFBDCB7315A9E7EF43B5F1FE_inline((&V_1), NULL);
				Dictionary_2_Add_m5A1F3979609A916C3D83B123706C97BC68876BDA(__this, L_11, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_0046_1:
			{
				RuntimeObject* L_13 = V_0;
				NullCheck((RuntimeObject*)L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
				if (L_14)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_005a;
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

IL_005a:
	{
		return;
	}
}
// Method Definition Index: 11256
// Method Definition Index: 11257
// Method Definition Index: 11258
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t56B61032EF9B470E2684BD0A6C2D570105F9FC35* Dictionary_2_get_Keys_m7B0E4D58C46C0513871AC772A19DD656DE228F32_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t56B61032EF9B470E2684BD0A6C2D570105F9FC35* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t56B61032EF9B470E2684BD0A6C2D570105F9FC35* L_1 = (KeyCollection_t56B61032EF9B470E2684BD0A6C2D570105F9FC35*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		KeyCollection__ctor_m1CE214FD2D7BFE70EA3084C2AAAF90D3F8F2262B(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t56B61032EF9B470E2684BD0A6C2D570105F9FC35* L_2 = __this->____keys;
		return L_2;
	}
}
// Method Definition Index: 11259
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mAECFF53EA464B8A78C47A8C80B9FD2CA704D211B_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t56B61032EF9B470E2684BD0A6C2D570105F9FC35* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t56B61032EF9B470E2684BD0A6C2D570105F9FC35* L_1 = (KeyCollection_t56B61032EF9B470E2684BD0A6C2D570105F9FC35*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		KeyCollection__ctor_m1CE214FD2D7BFE70EA3084C2AAAF90D3F8F2262B(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t56B61032EF9B470E2684BD0A6C2D570105F9FC35* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11260
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m998102A1F30F21A74C7D1A74BDD18B974EDD26AA_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t56B61032EF9B470E2684BD0A6C2D570105F9FC35* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t56B61032EF9B470E2684BD0A6C2D570105F9FC35* L_1 = (KeyCollection_t56B61032EF9B470E2684BD0A6C2D570105F9FC35*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		KeyCollection__ctor_m1CE214FD2D7BFE70EA3084C2AAAF90D3F8F2262B(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t56B61032EF9B470E2684BD0A6C2D570105F9FC35* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11261
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t69B2D43505C54B4CA2B032CE046446F1D6139923* Dictionary_2_get_Values_m5FA42DF72D008F69C57E9B7DE22BF04ED32EB4D6_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t69B2D43505C54B4CA2B032CE046446F1D6139923* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t69B2D43505C54B4CA2B032CE046446F1D6139923* L_1 = (ValueCollection_t69B2D43505C54B4CA2B032CE046446F1D6139923*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		ValueCollection__ctor_m95A9FD88749627CF8A60EF35DBBE07DDA4CC20C9(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t69B2D43505C54B4CA2B032CE046446F1D6139923* L_2 = __this->____values;
		return L_2;
	}
}
// Method Definition Index: 11262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m42CCE6577BACCC0267295DC9E40DE4A6CBE2F8A2_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t69B2D43505C54B4CA2B032CE046446F1D6139923* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t69B2D43505C54B4CA2B032CE046446F1D6139923* L_1 = (ValueCollection_t69B2D43505C54B4CA2B032CE046446F1D6139923*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		ValueCollection__ctor_m95A9FD88749627CF8A60EF35DBBE07DDA4CC20C9(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t69B2D43505C54B4CA2B032CE046446F1D6139923* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11263
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mDFF953969DFC36895B309CB57C9595E083676DD1_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t69B2D43505C54B4CA2B032CE046446F1D6139923* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t69B2D43505C54B4CA2B032CE046446F1D6139923* L_1 = (ValueCollection_t69B2D43505C54B4CA2B032CE046446F1D6139923*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		ValueCollection__ctor_m95A9FD88749627CF8A60EF35DBBE07DDA4CC20C9(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t69B2D43505C54B4CA2B032CE046446F1D6139923* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11264
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Dictionary_2_get_Item_m07669CE6BA1C55270A4893F1D82D383F1F383ECA_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m20CF0CCCAC4A4C8BE19A8ACB2B5A090EC6F9BAB6(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Il2CppSharedGenericObject* L_6 = ___0_key;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7((RuntimeObject*)L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(JsonValue_t01DB320267C848E729A400EF2345979978F851D2));
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 11265
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m9E412ED46D660DD336FD30F5355F434A63FC4FEE_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, Il2CppSharedGenericObject* ___0_key, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m4EB941034B80B1F81FE9CB823402B1DE78FBACE1(__this, L_0, L_1, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		return;
	}
}
// Method Definition Index: 11266
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m5A1F3979609A916C3D83B123706C97BC68876BDA_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, Il2CppSharedGenericObject* ___0_key, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m4EB941034B80B1F81FE9CB823402B1DE78FBACE1(__this, L_0, L_1, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		return;
	}
}
// Method Definition Index: 11267
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m89DF7CE42E694C8167AC8F34C65EDC8D42AD3F42_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m05AD863CEF17FADC4EDD109FB1D7352B27E86DD4_inline((&___0_keyValuePair), NULL);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_1;
		L_1 = KeyValuePair_2_get_Value_m6EE16BBDAFF7D590DFBDCB7315A9E7EF43B5F1FE_inline((&___0_keyValuePair), NULL);
		Dictionary_2_Add_m5A1F3979609A916C3D83B123706C97BC68876BDA(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return;
	}
}
// Method Definition Index: 11268
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8BB97A02996748B3F2FD6D0382FC6F3AE8C67DB9_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m05AD863CEF17FADC4EDD109FB1D7352B27E86DD4_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m20CF0CCCAC4A4C8BE19A8ACB2B5A090EC6F9BAB6(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t609C7F4FCDDC30DC5F20B7722F1FDEFB0AA1C2C5* L_3;
		L_3 = EqualityComparer_1_get_Default_m04E2D986A0F8FE3F0F86019C6460ABFBBFEA64EF_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_7;
		L_7 = KeyValuePair_2_get_Value_m6EE16BBDAFF7D590DFBDCB7315A9E7EF43B5F1FE_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11269
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m89C4851EAF83980C608305AA31786D5E50D036FA_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m05AD863CEF17FADC4EDD109FB1D7352B27E86DD4_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m20CF0CCCAC4A4C8BE19A8ACB2B5A090EC6F9BAB6(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t609C7F4FCDDC30DC5F20B7722F1FDEFB0AA1C2C5* L_3;
		L_3 = EqualityComparer_1_get_Default_m04E2D986A0F8FE3F0F86019C6460ABFBBFEA64EF_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_7;
		L_7 = KeyValuePair_2_get_Value_m6EE16BBDAFF7D590DFBDCB7315A9E7EF43B5F1FE_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Il2CppSharedGenericObject* L_9;
		L_9 = KeyValuePair_2_get_Key_m05AD863CEF17FADC4EDD109FB1D7352B27E86DD4_inline((&___0_keyValuePair), NULL);
		bool L_10;
		L_10 = Dictionary_2_Remove_m8BD322115B90C7CB88D6117575765AFE910098BB(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11270
// Method Definition Index: 11271
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m3F671995C893D1894A3380B2289AFFA38E8F7296_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m20CF0CCCAC4A4C8BE19A8ACB2B5A090EC6F9BAB6(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 11272
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mBC4601F8978EAF5E8F11EB8416A4EEF3E7C60108_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* V_0 = NULL;
	int32_t V_1 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t609C7F4FCDDC30DC5F20B7722F1FDEFB0AA1C2C5* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(JsonValue_t01DB320267C848E729A400EF2345979978F851D2));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t609C7F4FCDDC30DC5F20B7722F1FDEFB0AA1C2C5* L_6;
		L_6 = EqualityComparer_1_get_Default_m04E2D986A0F8FE3F0F86019C6460ABFBBFEA64EF_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11273
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mEBDEB667A27614330BD412ADE0CE7BD1AB521B0E_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_m3B97F0207D6EAEDFC2EA570B686DCA1C71B81D3B(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_mD7F6D2E0ED102C5EA276B356E61DC9D07A8D4804((&L_22), L_18, L_21, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11274
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6A9C4E5DD7EF59069473AD9444EBEB19D131A6AF Dictionary_2_GetEnumerator_m6FEE93A861A85671DD4B54777F01D178E38921EC_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t6A9C4E5DD7EF59069473AD9444EBEB19D131A6AF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m67DBDCABC6DA9A508B35F4257895DA0FE581040B((&L_0), __this, 2, NULL);
		return L_0;
	}
}
// Method Definition Index: 11275
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mAA856EC866ACFA21EB7873676F7250D84923D739_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t6A9C4E5DD7EF59069473AD9444EBEB19D131A6AF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m67DBDCABC6DA9A508B35F4257895DA0FE581040B((&L_0), __this, 2, NULL);
		Enumerator_t6A9C4E5DD7EF59069473AD9444EBEB19D131A6AF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11276
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m4BAF9692D5F17BE371F2E9F38E50A7E5965E7908_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_6;
		L_6 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 35)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_m3B97F0207D6EAEDFC2EA570B686DCA1C71B81D3B(__this, NULL);
		KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* L_15 = (KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61*)(KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* L_16 = V_0;
		Dictionary_2_CopyTo_mEBDEB667A27614330BD412ADE0CE7BD1AB521B0E(__this, L_16, 0, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 39)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
// Method Definition Index: 11277
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m20CF0CCCAC4A4C8BE19A8ACB2B5A090EC6F9BAB6_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Il2CppSharedGenericObject* V_6 = NULL;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_7 = NULL;
	int32_t V_8 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		NullCheck(L_7);
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_13 = V_6;
		if (!L_13)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_17 = V_2;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_22 = V_2;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		Il2CppSharedGenericObject* L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		Il2CppSharedGenericObject* L_25 = ___0_key;
		NullCheck(L_21);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_27 = V_2;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_34;
		L_34 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_7 = L_34;
	}

IL_00c0:
	{
		int32_t L_35 = V_0;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_36)->max_length),NULL));
		if ((!(((uint32_t)L_35) < ((uint32_t)L_37))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_38 = V_2;
		int32_t L_39 = V_0;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___hashCode;
		int32_t L_41 = V_5;
		if ((!(((uint32_t)L_40) == ((uint32_t)L_41))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_42 = V_7;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_43 = V_2;
		int32_t L_44 = V_0;
		NullCheck(L_43);
		Il2CppSharedGenericObject* L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___key;
		Il2CppSharedGenericObject* L_46 = ___0_key;
		NullCheck(L_42);
		bool L_47;
		L_47 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_42, L_45, L_46);
		if (L_47)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_48 = V_2;
		int32_t L_49 = V_0;
		NullCheck(L_48);
		int32_t L_50 = ((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___next;
		V_0 = L_50;
		int32_t L_51 = V_3;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_52 = V_2;
		NullCheck(L_52);
		int32_t L_53 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_52)->max_length),NULL));
		if ((((int32_t)L_51) < ((int32_t)L_53)))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_54 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_55 = V_4;
		Il2CppSharedGenericObject* L_56 = ___0_key;
		NullCheck(L_55);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_55, L_56);
		V_8 = ((int32_t)(L_57&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_1;
		int32_t L_59 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_1;
		NullCheck(L_60);
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		NullCheck(L_58);
		int32_t L_62 = ((int32_t)(L_59%L_61));
		int32_t L_63 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_63, 1));
	}

IL_012b:
	{
		int32_t L_64 = V_0;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_65)->max_length),NULL));
		if ((!(((uint32_t)L_64) < ((uint32_t)L_66))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_67 = V_2;
		int32_t L_68 = V_0;
		NullCheck(L_67);
		int32_t L_69 = ((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68)))->___hashCode;
		int32_t L_70 = V_8;
		if ((!(((uint32_t)L_69) == ((uint32_t)L_70))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_71 = V_4;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_72 = V_2;
		int32_t L_73 = V_0;
		NullCheck(L_72);
		Il2CppSharedGenericObject* L_74 = ((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_73)))->___key;
		Il2CppSharedGenericObject* L_75 = ___0_key;
		NullCheck(L_71);
		bool L_76;
		L_76 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_71, L_74, L_75);
		if (L_76)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_77 = V_2;
		int32_t L_78 = V_0;
		NullCheck(L_77);
		int32_t L_79 = ((L_77)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_78)))->___next;
		V_0 = L_79;
		int32_t L_80 = V_3;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_81 = V_2;
		NullCheck(L_81);
		int32_t L_82 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_81)->max_length),NULL));
		if ((((int32_t)L_80) < ((int32_t)L_82)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_83 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_83, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_84 = V_0;
		return L_84;
	}
}
// Method Definition Index: 11278
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m86E069C9AA8F87497D017C95A4B438B1E7BB3990_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_5 = (EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2*)(EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 44), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 11279
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m4EB941034B80B1F81FE9CB823402B1DE78FBACE1_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, Il2CppSharedGenericObject* ___0_key, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* V_10 = NULL;
	Il2CppSharedGenericObject* V_11 = NULL;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m86E069C9AA8F87497D017C95A4B438B1E7BB3990(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_002c:
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Il2CppSharedGenericObject* L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_18 = V_11;
		if (!L_18)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_22 = V_0;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_26;
		L_26 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_27 = V_0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		Il2CppSharedGenericObject* L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		Il2CppSharedGenericObject* L_30 = ___0_key;
		NullCheck(L_26);
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_33 = V_0;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_35 = ___1_value;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value))->___stringValue))->___text))->___m_String), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value))->___anyValue), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Il2CppSharedGenericObject* L_37 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_42 = V_0;
		NullCheck(L_42);
		int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_45;
		L_45 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_12 = L_45;
	}

IL_0111:
	{
		int32_t L_46 = V_5;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_47 = V_0;
		NullCheck(L_47);
		int32_t L_48 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_47)->max_length),NULL));
		if ((!(((uint32_t)L_46) < ((uint32_t)L_48))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_49 = V_0;
		int32_t L_50 = V_5;
		NullCheck(L_49);
		int32_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___hashCode;
		int32_t L_52 = V_2;
		if ((!(((uint32_t)L_51) == ((uint32_t)L_52))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_53 = V_12;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_54 = V_0;
		int32_t L_55 = V_5;
		NullCheck(L_54);
		Il2CppSharedGenericObject* L_56 = ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)))->___key;
		Il2CppSharedGenericObject* L_57 = ___0_key;
		NullCheck(L_53);
		bool L_58;
		L_58 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_53, L_56, L_57);
		if (!L_58)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_59 = ___2_behavior;
		if ((!(((uint32_t)L_59) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_60 = V_0;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_62 = ___1_value;
		((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___value = L_62;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___value))->___stringValue))->___text))->___m_String), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___value))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___value))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___value))->___anyValue), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_63 = ___2_behavior;
		if ((!(((uint32_t)L_63) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		Il2CppSharedGenericObject* L_64 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_69 = V_0;
		NullCheck(L_69);
		int32_t L_70 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_69)->max_length),NULL));
		if ((((int32_t)L_68) < ((int32_t)L_70)))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_71 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_72 = V_5;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_73 = V_0;
		NullCheck(L_73);
		int32_t L_74 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_73)->max_length),NULL));
		if ((!(((uint32_t)L_72) < ((uint32_t)L_74))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_75 = V_0;
		int32_t L_76 = V_5;
		NullCheck(L_75);
		int32_t L_77 = ((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_76)))->___hashCode;
		int32_t L_78 = V_2;
		if ((!(((uint32_t)L_77) == ((uint32_t)L_78))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_79 = V_1;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		Il2CppSharedGenericObject* L_82 = ((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___key;
		Il2CppSharedGenericObject* L_83 = ___0_key;
		NullCheck(L_79);
		bool L_84;
		L_84 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_79, L_82, L_83);
		if (!L_84)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_85 = ___2_behavior;
		if ((!(((uint32_t)L_85) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_86 = V_0;
		int32_t L_87 = V_5;
		NullCheck(L_86);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_88 = ___1_value;
		((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)))->___value = L_88;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)))->___value))->___stringValue))->___text))->___m_String), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)))->___value))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)))->___value))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)))->___value))->___anyValue), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_89 = ___2_behavior;
		if ((!(((uint32_t)L_89) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Il2CppSharedGenericObject* L_90 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_95 = V_0;
		NullCheck(L_95);
		int32_t L_96 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_95)->max_length),NULL));
		if ((((int32_t)L_94) < ((int32_t)L_96)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_97 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_97, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_98 = __this->____freeCount;
		if ((((int32_t)L_98) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_99 = __this->____freeList;
		V_8 = L_99;
		V_7 = (bool)1;
		int32_t L_100 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_101 = __this->____count;
		V_13 = L_101;
		int32_t L_102 = V_13;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_103 = V_0;
		NullCheck(L_103);
		int32_t L_104 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_103)->max_length),NULL));
		if ((!(((uint32_t)L_102) == ((uint32_t)L_104))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m262F40EA62AAF285FDEBB1524142204FB894258B(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_105 = V_13;
		V_8 = L_105;
		int32_t L_106 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_106, 1));
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_107 = __this->____entries;
		V_0 = L_107;
	}

IL_0250:
	{
		bool L_108 = V_6;
		if (L_108)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_109 = V_4;
		G_B51_0 = L_109;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets;
		int32_t L_111 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_112 = __this->____buckets;
		NullCheck(L_112);
		int32_t L_113 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_112)->max_length),NULL));
		NullCheck(L_110);
		G_B51_0 = ((L_110)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_111%L_113)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_114 = V_0;
		int32_t L_115 = V_8;
		NullCheck(L_114);
		V_10 = ((L_114)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_115)));
		bool L_116 = V_7;
		if (!L_116)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* L_117 = V_10;
		int32_t L_118 = L_117->___next;
		__this->____freeList = L_118;
	}

IL_028a:
	{
		Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* L_119 = V_10;
		int32_t L_120 = V_2;
		L_119->___hashCode = L_120;
		Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* L_121 = V_10;
		int32_t* L_122 = V_9;
		int32_t L_123 = il2cpp_codegen_ldind<int32_t, int32_t>(L_122);
		L_121->___next = ((int32_t)il2cpp_codegen_subtract(L_123, 1));
		Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* L_124 = V_10;
		Il2CppSharedGenericObject* L_125 = ___0_key;
		L_124->___key = L_125;
		Il2CppCodeGenWriteBarrier((void**)(&L_124->___key), (void*)L_125);
		Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* L_126 = V_10;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_127 = ___1_value;
		L_126->___value = L_127;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_126->___value))->___stringValue))->___text))->___m_String), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_126->___value))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_126->___value))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_126->___value))->___anyValue), (void*)NULL);
		#endif
		int32_t* L_128 = V_9;
		int32_t L_129 = V_8;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_128, (int32_t)((int32_t)il2cpp_codegen_add(L_129, 1)));
		return (bool)1;
	}
}
// Method Definition Index: 11280
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mFAE8BD981F5523CEA9D92EEA627630FD21FB247C_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* V_3 = NULL;
	int32_t V_4 = 0;
	{
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 35)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m86E069C9AA8F87497D017C95A4B438B1E7BB3990(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 39)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61*)CastclassSealed((RuntimeObject*)L_17, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37)));
		KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Il2CppSharedGenericObject* L_21;
		L_21 = KeyValuePair_2_get_Key_m05AD863CEF17FADC4EDD109FB1D7352B27E86DD4_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), NULL);
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Il2CppSharedGenericObject* L_24;
		L_24 = KeyValuePair_2_get_Key_m05AD863CEF17FADC4EDD109FB1D7352B27E86DD4_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), NULL);
		KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_27;
		L_27 = KeyValuePair_2_get_Value_m6EE16BBDAFF7D590DFBDCB7315A9E7EF43B5F1FE_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), NULL);
		Dictionary_2_Add_m5A1F3979609A916C3D83B123706C97BC68876BDA(__this, L_24, L_27, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 11281
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m262F40EA62AAF285FDEBB1524142204FB894258B_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m565098B1589D4003676949E73C30335823220410(__this, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46));
		return;
	}
}
// Method Definition Index: 11282
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m565098B1589D4003676949E73C30335823220410_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppSharedGenericObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_3 = (EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2*)(EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_5 = __this->____entries;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(Il2CppSharedGenericObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Il2CppSharedGenericObject** L_17 = (Il2CppSharedGenericObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		NullCheck((RuntimeObject*)(*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
// Method Definition Index: 11283
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m8BD322115B90C7CB88D6117575765AFE910098BB_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Il2CppSharedGenericObject* L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* L_22 = V_4;
		Il2CppSharedGenericObject* L_23 = L_22->___key;
		Il2CppSharedGenericObject* L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* L_26 = V_4;
		Il2CppSharedGenericObject* L_27 = L_26->___key;
		Il2CppSharedGenericObject* L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
	}
	{
		Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* L_42 = V_4;
		Il2CppSharedGenericObject** L_43 = (Il2CppSharedGenericObject**)(&L_42->___key);
		il2cpp_codegen_initobj(L_43, sizeof(Il2CppSharedGenericObject*));
	}

IL_00ff:
	{
	}
	{
		Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* L_44 = V_4;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2* L_45 = (JsonValue_t01DB320267C848E729A400EF2345979978F851D2*)(&L_44->___value);
		il2cpp_codegen_initobj(L_45, sizeof(JsonValue_t01DB320267C848E729A400EF2345979978F851D2));
	}

IL_0113:
	{
		int32_t L_46 = V_3;
		__this->____freeList = L_46;
		int32_t L_47 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_47, 1));
		int32_t L_48 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_48, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_49 = V_3;
		V_2 = L_49;
		Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* L_50 = V_4;
		int32_t L_51 = L_50->___next;
		V_3 = L_51;
	}

IL_0142:
	{
		int32_t L_52 = V_3;
		if ((((int32_t)L_52) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11284
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m77BB09E8E48FF8C290230A2AF362DA301CBB06DF_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, Il2CppSharedGenericObject* ___0_key, JsonValue_t01DB320267C848E729A400EF2345979978F851D2* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Il2CppSharedGenericObject* L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* L_22 = V_4;
		Il2CppSharedGenericObject* L_23 = L_22->___key;
		Il2CppSharedGenericObject* L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* L_26 = V_4;
		Il2CppSharedGenericObject* L_27 = L_26->___key;
		Il2CppSharedGenericObject* L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2* L_39 = ___1_value;
		Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* L_40 = V_4;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_41 = L_40->___value;
		*(JsonValue_t01DB320267C848E729A400EF2345979978F851D2*)L_39 = L_41;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((JsonValue_t01DB320267C848E729A400EF2345979978F851D2*)L_39)->___stringValue))->___text))->___m_String), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((JsonValue_t01DB320267C848E729A400EF2345979978F851D2*)L_39)->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((JsonValue_t01DB320267C848E729A400EF2345979978F851D2*)L_39)->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((JsonValue_t01DB320267C848E729A400EF2345979978F851D2*)L_39)->___anyValue), (void*)NULL);
		#endif
		Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
	}
	{
		Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* L_45 = V_4;
		Il2CppSharedGenericObject** L_46 = (Il2CppSharedGenericObject**)(&L_45->___key);
		il2cpp_codegen_initobj(L_46, sizeof(Il2CppSharedGenericObject*));
	}

IL_010c:
	{
	}
	{
		Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* L_47 = V_4;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2* L_48 = (JsonValue_t01DB320267C848E729A400EF2345979978F851D2*)(&L_47->___value);
		il2cpp_codegen_initobj(L_48, sizeof(JsonValue_t01DB320267C848E729A400EF2345979978F851D2));
	}

IL_0120:
	{
		int32_t L_49 = V_3;
		__this->____freeList = L_49;
		int32_t L_50 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_50, 1));
		int32_t L_51 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_51, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_52 = V_3;
		V_2 = L_52;
		Entry_tAD0FF92A2B56B0F960AF3B0BFB8BF31CE5637536* L_53 = V_4;
		int32_t L_54 = L_53->___next;
		V_3 = L_54;
	}

IL_014f:
	{
		int32_t L_55 = V_3;
		if ((((int32_t)L_55) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2* L_56 = ___1_value;
		il2cpp_codegen_initobj(L_56, sizeof(JsonValue_t01DB320267C848E729A400EF2345979978F851D2));
		return (bool)0;
	}
}
// Method Definition Index: 11285
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mDEEBE2D75F2B92026012BD5EFB02C725408BF477_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, Il2CppSharedGenericObject* ___0_key, JsonValue_t01DB320267C848E729A400EF2345979978F851D2* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m20CF0CCCAC4A4C8BE19A8ACB2B5A090EC6F9BAB6(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2* L_3 = ___1_value;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(JsonValue_t01DB320267C848E729A400EF2345979978F851D2*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((JsonValue_t01DB320267C848E729A400EF2345979978F851D2*)L_3)->___stringValue))->___text))->___m_String), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((JsonValue_t01DB320267C848E729A400EF2345979978F851D2*)L_3)->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((JsonValue_t01DB320267C848E729A400EF2345979978F851D2*)L_3)->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((JsonValue_t01DB320267C848E729A400EF2345979978F851D2*)L_3)->___anyValue), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0025:
	{
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(JsonValue_t01DB320267C848E729A400EF2345979978F851D2));
		return (bool)0;
	}
}
// Method Definition Index: 11286
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mD40D80A580FA2E9F06656AE7D8EE5EDD0D4764EF_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, Il2CppSharedGenericObject* ___0_key, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m4EB941034B80B1F81FE9CB823402B1DE78FBACE1(__this, L_0, L_1, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		return L_2;
	}
}
// Method Definition Index: 11287
// Method Definition Index: 11288
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9CD2C67DF6243AA061294070BB710116699B08C1_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mEBDEB667A27614330BD412ADE0CE7BD1AB521B0E(__this, L_0, L_1, NULL);
		return;
	}
}
// Method Definition Index: 11289
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m371C2FBB9A3F437ED533CC9FD148ECD447A22D59_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m3B97F0207D6EAEDFC2EA570B686DCA1C71B81D3B(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61*)IsInstSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37)));
		KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mEBDEB667A27614330BD412ADE0CE7BD1AB521B0E(__this, L_14, L_15, NULL);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Il2CppSharedGenericObject* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_28 = V_2;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___value;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), &L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), (RuntimeObject*)L_27, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			Il2CppSharedGenericObject* L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mD7F6D2E0ED102C5EA276B356E61DC9D07A8D4804((&L_53), L_49, L_52, NULL);
			KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
// Method Definition Index: 11290
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m72FA984E4B3D22135A91E0238C1ED6728F7C0432_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t6A9C4E5DD7EF59069473AD9444EBEB19D131A6AF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m67DBDCABC6DA9A508B35F4257895DA0FE581040B((&L_0), __this, 2, NULL);
		Enumerator_t6A9C4E5DD7EF59069473AD9444EBEB19D131A6AF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11291
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_mC4EC80602C18B86FF67FAC1455383DBB162FE2F2_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_m86E069C9AA8F87497D017C95A4B438B1E7BB3990(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_m565098B1589D4003676949E73C30335823220410(__this, L_12, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46));
		int32_t L_13 = V_1;
		return L_13;
	}
}
// Method Definition Index: 11292
// Method Definition Index: 11293
// Method Definition Index: 11294
// Method Definition Index: 11295
// Method Definition Index: 11296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m944F07358C69CE850012FCD9389B6895464E4FB9_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t56B61032EF9B470E2684BD0A6C2D570105F9FC35* L_0;
		L_0 = Dictionary_2_get_Keys_m7B0E4D58C46C0513871AC772A19DD656DE228F32(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_mEF2225098DF8B3C53CEE4E8EDFE50AE7EBCA9475_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t69B2D43505C54B4CA2B032CE046446F1D6139923* L_0;
		L_0 = Dictionary_2_get_Values_m5FA42DF72D008F69C57E9B7DE22BF04ED32EB4D6(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 50));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m324F8C78DF614A67FAF428F063769415756738FC_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m22B7AB9440C32CF55F20B89E05342114F0D9ECEA(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m20CF0CCCAC4A4C8BE19A8ACB2B5A090EC6F9BAB6(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t11A9CFB5C655033E790B0E34EE0953C067087DF2* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// Method Definition Index: 11299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mBF8CAE0226BFD421FD817D4531996D657E496132_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisJsonValue_t01DB320267C848E729A400EF2345979978F851D2_m0FC4F60029EC7C3D02862A6537BC2B27F0D72DE0(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)));
		}
		try
		{
			Il2CppSharedGenericObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m9E412ED46D660DD336FD30F5355F434A63FC4FEE(__this, L_3, ((*(JsonValue_t01DB320267C848E729A400EF2345979978F851D2*)UnBox(L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 53));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 54)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 55)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 11300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m22B7AB9440C32CF55F20B89E05342114F0D9ECEA_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(Il2CppSharedGenericObject*)((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 11301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_mF8C02495801CCCC9B8BEA3D71BB6BA2F7369E14B_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisJsonValue_t01DB320267C848E729A400EF2345979978F851D2_m0FC4F60029EC7C3D02862A6537BC2B27F0D72DE0(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)));
		}
		try
		{
			Il2CppSharedGenericObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_Add_m5A1F3979609A916C3D83B123706C97BC68876BDA(__this, L_3, ((*(JsonValue_t01DB320267C848E729A400EF2345979978F851D2*)UnBox(L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 54)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 55)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 11302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m8C59092511B433AEFAA5B5111F094EBCB9370F6F_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m22B7AB9440C32CF55F20B89E05342114F0D9ECEA(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m3F671995C893D1894A3380B2289AFFA38E8F7296(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mC055A7636DC0386E1472D93F05AA6D916973B9EF_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t6A9C4E5DD7EF59069473AD9444EBEB19D131A6AF L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m67DBDCABC6DA9A508B35F4257895DA0FE581040B((&L_0), __this, 1, NULL);
		Enumerator_t6A9C4E5DD7EF59069473AD9444EBEB19D131A6AF L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11304
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_mD401A1CEC8C25D6251D661B94988640A53E37AA6_gshared (Dictionary_2_t02DB686A85708DB1E4F8AFE2762BB0974C8ED074* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m22B7AB9440C32CF55F20B89E05342114F0D9ECEA(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_m8BD322115B90C7CB88D6117575765AFE910098BB(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
	}

IL_0015:
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
// Method Definition Index: 11248
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5326BD107F591D95E92A92FB91CAE972FBA83296_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Dictionary_2__ctor_m5D7914E4F7E0C8BFA13CCC02B861B2C27C85633E(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11249
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3F16898C476EF557AE6E4BC3B8731F456F618D88_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m5D7914E4F7E0C8BFA13CCC02B861B2C27C85633E(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11250
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2BC7EA0CA46B2AA7E61DB9F8739EB0FC767E55B9_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m5D7914E4F7E0C8BFA13CCC02B861B2C27C85633E(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11251
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5D7914E4F7E0C8BFA13CCC02B861B2C27C85633E_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mE7BC1634BF34E4C92ADCE6CA4F129711AA05B85C(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_5;
		L_5 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// Method Definition Index: 11252
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m308C96FCC70049BB89A19800AA4AE56A79B2F27B_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m022C3A189C5D99B3C6BCFEDB8C2DBE5C2C6FF157(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
// Method Definition Index: 11253
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m022C3A189C5D99B3C6BCFEDB8C2DBE5C2C6FF157_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* G_B2_0 = NULL;
	Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m5D7914E4F7E0C8BFA13CCC02B861B2C27C85633E(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* L_9 = ((Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		NullCheck(L_9);
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		NullCheck(L_9);
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		Il2CppSharedGenericObject* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___value;
		Dictionary_2_Add_mFCBA508C5B0FC8B01FDBE26DFB745A876CB199CE(__this, L_17, L_20, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), (RuntimeObject*)L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				NullCheck(L_28);
				KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39 L_29;
				L_29 = InterfaceFuncInvoker0< KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_28);
				V_4 = L_29;
				Il2CppSharedGenericObject* L_30;
				L_30 = KeyValuePair_2_get_Key_m88176A32E2C9831A50FFF20A93F88E06CD5E8454_inline((&V_4), NULL);
				ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_31;
				L_31 = KeyValuePair_2_get_Value_mEB35D03F01963B96DAE24D1F07F970606C3F329D_inline((&V_4), NULL);
				Dictionary_2_Add_mFCBA508C5B0FC8B01FDBE26DFB745A876CB199CE(__this, L_30, L_31, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				NullCheck((RuntimeObject*)L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
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

IL_00b9:
	{
		return;
	}
}
// Method Definition Index: 11254
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m67D8CDFBEF862727524EFC5AED40507CAFB84FC7_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_collection;
		Dictionary_2__ctor_mE50673590D0AF85DED5078999EF9076FAE6D6319(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		return;
	}
}
// Method Definition Index: 11255
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE50673590D0AF85DED5078999EF9076FAE6D6319_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* G_B2_0 = NULL;
	Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_collection;
		RuntimeObject* L_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000e;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_1;
		goto IL_0013;
	}

IL_000e:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), G_B2_0);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_1;
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m5D7914E4F7E0C8BFA13CCC02B861B2C27C85633E(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_collection;
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___0_collection;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), L_5);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{
				{
					RuntimeObject* L_7 = V_0;
					if (!L_7)
					{
						goto IL_0059;
					}
				}
				{
					RuntimeObject* L_8 = V_0;
					NullCheck((RuntimeObject*)L_8);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				}

IL_0059:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0046_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39 L_10;
				L_10 = InterfaceFuncInvoker0< KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_9);
				V_1 = L_10;
				Il2CppSharedGenericObject* L_11;
				L_11 = KeyValuePair_2_get_Key_m88176A32E2C9831A50FFF20A93F88E06CD5E8454_inline((&V_1), NULL);
				ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_12;
				L_12 = KeyValuePair_2_get_Value_mEB35D03F01963B96DAE24D1F07F970606C3F329D_inline((&V_1), NULL);
				Dictionary_2_Add_mFCBA508C5B0FC8B01FDBE26DFB745A876CB199CE(__this, L_11, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_0046_1:
			{
				RuntimeObject* L_13 = V_0;
				NullCheck((RuntimeObject*)L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
				if (L_14)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_005a;
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

IL_005a:
	{
		return;
	}
}
// Method Definition Index: 11256
// Method Definition Index: 11257
// Method Definition Index: 11258
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t84D05CC571A5B34D646C9C7F719F1913F9A65E84* Dictionary_2_get_Keys_m7E6DF684A626C0E96F5B9C7FCEF24C03C4B47111_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t84D05CC571A5B34D646C9C7F719F1913F9A65E84* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t84D05CC571A5B34D646C9C7F719F1913F9A65E84* L_1 = (KeyCollection_t84D05CC571A5B34D646C9C7F719F1913F9A65E84*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		KeyCollection__ctor_m1AE58FDEE971C60C577576203ECDF8CCB324A73A(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t84D05CC571A5B34D646C9C7F719F1913F9A65E84* L_2 = __this->____keys;
		return L_2;
	}
}
// Method Definition Index: 11259
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mCBAD445E98AC434E24D2B277076BD20AA6C1A01D_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t84D05CC571A5B34D646C9C7F719F1913F9A65E84* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t84D05CC571A5B34D646C9C7F719F1913F9A65E84* L_1 = (KeyCollection_t84D05CC571A5B34D646C9C7F719F1913F9A65E84*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		KeyCollection__ctor_m1AE58FDEE971C60C577576203ECDF8CCB324A73A(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t84D05CC571A5B34D646C9C7F719F1913F9A65E84* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11260
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m70CB97F9381C85100664FB1CF0DE058E6D27D852_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t84D05CC571A5B34D646C9C7F719F1913F9A65E84* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t84D05CC571A5B34D646C9C7F719F1913F9A65E84* L_1 = (KeyCollection_t84D05CC571A5B34D646C9C7F719F1913F9A65E84*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		KeyCollection__ctor_m1AE58FDEE971C60C577576203ECDF8CCB324A73A(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t84D05CC571A5B34D646C9C7F719F1913F9A65E84* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11261
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88* Dictionary_2_get_Values_mFC6B4740B4188CC2F63AE4F8677A92D2F6228651_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88* L_1 = (ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		ValueCollection__ctor_m3668355B9084F070AB970D1E4A2F4846158E6C6C(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88* L_2 = __this->____values;
		return L_2;
	}
}
// Method Definition Index: 11262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m18B5C5BB905E486EDA5AAD06763BB6363F454543_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88* L_1 = (ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		ValueCollection__ctor_m3668355B9084F070AB970D1E4A2F4846158E6C6C(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11263
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m0E0EC5CB6F58F6581418B9E19809032DD15ECCC8_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88* L_1 = (ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		ValueCollection__ctor_m3668355B9084F070AB970D1E4A2F4846158E6C6C(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11264
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D Dictionary_2_get_Item_m5FD863557A00F722717F3E8E7AAC5F4104DCC587_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB6560A071BFF8D6005016897AE4A249483202650(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Il2CppSharedGenericObject* L_6 = ___0_key;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7((RuntimeObject*)L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D));
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 11265
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m800FD26FDA0119447DFEB5DF39D92EFF7E4A8E3C_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, Il2CppSharedGenericObject* ___0_key, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mA6367E1363A4C5BFE0755F7209AEE60C123D6830(__this, L_0, L_1, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		return;
	}
}
// Method Definition Index: 11266
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mFCBA508C5B0FC8B01FDBE26DFB745A876CB199CE_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, Il2CppSharedGenericObject* ___0_key, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mA6367E1363A4C5BFE0755F7209AEE60C123D6830(__this, L_0, L_1, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		return;
	}
}
// Method Definition Index: 11267
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m41FD726D7B726BEE54456302B147A57985994E82_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m88176A32E2C9831A50FFF20A93F88E06CD5E8454_inline((&___0_keyValuePair), NULL);
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_1;
		L_1 = KeyValuePair_2_get_Value_mEB35D03F01963B96DAE24D1F07F970606C3F329D_inline((&___0_keyValuePair), NULL);
		Dictionary_2_Add_mFCBA508C5B0FC8B01FDBE26DFB745A876CB199CE(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return;
	}
}
// Method Definition Index: 11268
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16A1B61AD7F5F13F116390F4597E1CE7DD9CE9B2_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m88176A32E2C9831A50FFF20A93F88E06CD5E8454_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB6560A071BFF8D6005016897AE4A249483202650(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t17A804F4FB1CFE2AD73A277BBCD4BAFB6D8848DB* L_3;
		L_3 = EqualityComparer_1_get_Default_m163A04098A9AAAA833E90E9CDF272086CBBC86F2_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_7;
		L_7 = KeyValuePair_2_get_Value_mEB35D03F01963B96DAE24D1F07F970606C3F329D_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11269
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mB44154123B5F7FD7678E8B9681218FBDBA74DB67_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_m88176A32E2C9831A50FFF20A93F88E06CD5E8454_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB6560A071BFF8D6005016897AE4A249483202650(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t17A804F4FB1CFE2AD73A277BBCD4BAFB6D8848DB* L_3;
		L_3 = EqualityComparer_1_get_Default_m163A04098A9AAAA833E90E9CDF272086CBBC86F2_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_7;
		L_7 = KeyValuePair_2_get_Value_mEB35D03F01963B96DAE24D1F07F970606C3F329D_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Il2CppSharedGenericObject* L_9;
		L_9 = KeyValuePair_2_get_Key_m88176A32E2C9831A50FFF20A93F88E06CD5E8454_inline((&___0_keyValuePair), NULL);
		bool L_10;
		L_10 = Dictionary_2_Remove_m010CFA57FECECEB570F2AAC6A8BEFE4D7F0634F7(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11270
// Method Definition Index: 11271
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m1767765184CE3BCC2018267D5600085E351C161F_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB6560A071BFF8D6005016897AE4A249483202650(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 11272
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m7A5DDD2AC8A8C278991F4BEC15E8009F16CFA728_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* V_0 = NULL;
	int32_t V_1 = 0;
	ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t17A804F4FB1CFE2AD73A277BBCD4BAFB6D8848DB* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t17A804F4FB1CFE2AD73A277BBCD4BAFB6D8848DB* L_6;
		L_6 = EqualityComparer_1_get_Default_m163A04098A9AAAA833E90E9CDF272086CBBC86F2_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11273
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mA3AE600B24256FAAA93F82BE5C7967820BD801BF_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_m4623426B34C938BD4399892C44613928D14F0001(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39 L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_mEE51B27EA255D8646F72872F4E82403029154D46((&L_22), L_18, L_21, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11274
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA44F63A19268F1FC34B9785A995AB2BF9089D7E3 Dictionary_2_GetEnumerator_mB0744438E22463999423C5F0AE3CF5730EFBC87A_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tA44F63A19268F1FC34B9785A995AB2BF9089D7E3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4F175ABAB966024EBBB77711F601AD2DC138FB80((&L_0), __this, 2, NULL);
		return L_0;
	}
}
// Method Definition Index: 11275
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m0D43DEF051BED95B6DF139460A5156CCB89FE307_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tA44F63A19268F1FC34B9785A995AB2BF9089D7E3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4F175ABAB966024EBBB77711F601AD2DC138FB80((&L_0), __this, 2, NULL);
		Enumerator_tA44F63A19268F1FC34B9785A995AB2BF9089D7E3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11276
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m4EC9D836C7E691423DB538B27D5066EAB13F061E_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_6;
		L_6 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 35)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_m4623426B34C938BD4399892C44613928D14F0001(__this, NULL);
		KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2* L_15 = (KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2*)(KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2* L_16 = V_0;
		Dictionary_2_CopyTo_mA3AE600B24256FAAA93F82BE5C7967820BD801BF(__this, L_16, 0, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 39)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
// Method Definition Index: 11277
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_mB6560A071BFF8D6005016897AE4A249483202650_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Il2CppSharedGenericObject* V_6 = NULL;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_7 = NULL;
	int32_t V_8 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		NullCheck(L_7);
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_13 = V_6;
		if (!L_13)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_17 = V_2;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_22 = V_2;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		Il2CppSharedGenericObject* L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		Il2CppSharedGenericObject* L_25 = ___0_key;
		NullCheck(L_21);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_27 = V_2;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_34;
		L_34 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_7 = L_34;
	}

IL_00c0:
	{
		int32_t L_35 = V_0;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_36)->max_length),NULL));
		if ((!(((uint32_t)L_35) < ((uint32_t)L_37))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_38 = V_2;
		int32_t L_39 = V_0;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___hashCode;
		int32_t L_41 = V_5;
		if ((!(((uint32_t)L_40) == ((uint32_t)L_41))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_42 = V_7;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_43 = V_2;
		int32_t L_44 = V_0;
		NullCheck(L_43);
		Il2CppSharedGenericObject* L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___key;
		Il2CppSharedGenericObject* L_46 = ___0_key;
		NullCheck(L_42);
		bool L_47;
		L_47 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_42, L_45, L_46);
		if (L_47)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_48 = V_2;
		int32_t L_49 = V_0;
		NullCheck(L_48);
		int32_t L_50 = ((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___next;
		V_0 = L_50;
		int32_t L_51 = V_3;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_52 = V_2;
		NullCheck(L_52);
		int32_t L_53 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_52)->max_length),NULL));
		if ((((int32_t)L_51) < ((int32_t)L_53)))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_54 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_55 = V_4;
		Il2CppSharedGenericObject* L_56 = ___0_key;
		NullCheck(L_55);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_55, L_56);
		V_8 = ((int32_t)(L_57&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_1;
		int32_t L_59 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_1;
		NullCheck(L_60);
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		NullCheck(L_58);
		int32_t L_62 = ((int32_t)(L_59%L_61));
		int32_t L_63 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_63, 1));
	}

IL_012b:
	{
		int32_t L_64 = V_0;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_65)->max_length),NULL));
		if ((!(((uint32_t)L_64) < ((uint32_t)L_66))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_67 = V_2;
		int32_t L_68 = V_0;
		NullCheck(L_67);
		int32_t L_69 = ((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68)))->___hashCode;
		int32_t L_70 = V_8;
		if ((!(((uint32_t)L_69) == ((uint32_t)L_70))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_71 = V_4;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_72 = V_2;
		int32_t L_73 = V_0;
		NullCheck(L_72);
		Il2CppSharedGenericObject* L_74 = ((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_73)))->___key;
		Il2CppSharedGenericObject* L_75 = ___0_key;
		NullCheck(L_71);
		bool L_76;
		L_76 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_71, L_74, L_75);
		if (L_76)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_77 = V_2;
		int32_t L_78 = V_0;
		NullCheck(L_77);
		int32_t L_79 = ((L_77)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_78)))->___next;
		V_0 = L_79;
		int32_t L_80 = V_3;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_81 = V_2;
		NullCheck(L_81);
		int32_t L_82 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_81)->max_length),NULL));
		if ((((int32_t)L_80) < ((int32_t)L_82)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_83 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_83, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_84 = V_0;
		return L_84;
	}
}
// Method Definition Index: 11278
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mE7BC1634BF34E4C92ADCE6CA4F129711AA05B85C_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_5 = (EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F*)(EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 44), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 11279
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_mA6367E1363A4C5BFE0755F7209AEE60C123D6830_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, Il2CppSharedGenericObject* ___0_key, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* V_10 = NULL;
	Il2CppSharedGenericObject* V_11 = NULL;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mE7BC1634BF34E4C92ADCE6CA4F129711AA05B85C(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_002c:
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Il2CppSharedGenericObject* L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_18 = V_11;
		if (!L_18)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_22 = V_0;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_26;
		L_26 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_27 = V_0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		Il2CppSharedGenericObject* L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		Il2CppSharedGenericObject* L_30 = ___0_key;
		NullCheck(L_26);
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_33 = V_0;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_35 = ___1_value;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Il2CppSharedGenericObject* L_37 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_42 = V_0;
		NullCheck(L_42);
		int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_45;
		L_45 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_12 = L_45;
	}

IL_0111:
	{
		int32_t L_46 = V_5;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_47 = V_0;
		NullCheck(L_47);
		int32_t L_48 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_47)->max_length),NULL));
		if ((!(((uint32_t)L_46) < ((uint32_t)L_48))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_49 = V_0;
		int32_t L_50 = V_5;
		NullCheck(L_49);
		int32_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___hashCode;
		int32_t L_52 = V_2;
		if ((!(((uint32_t)L_51) == ((uint32_t)L_52))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_53 = V_12;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_54 = V_0;
		int32_t L_55 = V_5;
		NullCheck(L_54);
		Il2CppSharedGenericObject* L_56 = ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)))->___key;
		Il2CppSharedGenericObject* L_57 = ___0_key;
		NullCheck(L_53);
		bool L_58;
		L_58 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_53, L_56, L_57);
		if (!L_58)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_59 = ___2_behavior;
		if ((!(((uint32_t)L_59) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_60 = V_0;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_62 = ___1_value;
		((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___value = L_62;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_63 = ___2_behavior;
		if ((!(((uint32_t)L_63) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		Il2CppSharedGenericObject* L_64 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_69 = V_0;
		NullCheck(L_69);
		int32_t L_70 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_69)->max_length),NULL));
		if ((((int32_t)L_68) < ((int32_t)L_70)))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_71 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_72 = V_5;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_73 = V_0;
		NullCheck(L_73);
		int32_t L_74 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_73)->max_length),NULL));
		if ((!(((uint32_t)L_72) < ((uint32_t)L_74))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_75 = V_0;
		int32_t L_76 = V_5;
		NullCheck(L_75);
		int32_t L_77 = ((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_76)))->___hashCode;
		int32_t L_78 = V_2;
		if ((!(((uint32_t)L_77) == ((uint32_t)L_78))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_79 = V_1;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		Il2CppSharedGenericObject* L_82 = ((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___key;
		Il2CppSharedGenericObject* L_83 = ___0_key;
		NullCheck(L_79);
		bool L_84;
		L_84 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_79, L_82, L_83);
		if (!L_84)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_85 = ___2_behavior;
		if ((!(((uint32_t)L_85) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_86 = V_0;
		int32_t L_87 = V_5;
		NullCheck(L_86);
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_88 = ___1_value;
		((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)))->___value = L_88;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_89 = ___2_behavior;
		if ((!(((uint32_t)L_89) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Il2CppSharedGenericObject* L_90 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_95 = V_0;
		NullCheck(L_95);
		int32_t L_96 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_95)->max_length),NULL));
		if ((((int32_t)L_94) < ((int32_t)L_96)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_97 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_97, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_98 = __this->____freeCount;
		if ((((int32_t)L_98) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_99 = __this->____freeList;
		V_8 = L_99;
		V_7 = (bool)1;
		int32_t L_100 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_101 = __this->____count;
		V_13 = L_101;
		int32_t L_102 = V_13;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_103 = V_0;
		NullCheck(L_103);
		int32_t L_104 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_103)->max_length),NULL));
		if ((!(((uint32_t)L_102) == ((uint32_t)L_104))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m8F1860B651A77969F0AA678EC51DBD43BCA2E0C4(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_105 = V_13;
		V_8 = L_105;
		int32_t L_106 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_106, 1));
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_107 = __this->____entries;
		V_0 = L_107;
	}

IL_0250:
	{
		bool L_108 = V_6;
		if (L_108)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_109 = V_4;
		G_B51_0 = L_109;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets;
		int32_t L_111 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_112 = __this->____buckets;
		NullCheck(L_112);
		int32_t L_113 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_112)->max_length),NULL));
		NullCheck(L_110);
		G_B51_0 = ((L_110)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_111%L_113)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_114 = V_0;
		int32_t L_115 = V_8;
		NullCheck(L_114);
		V_10 = ((L_114)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_115)));
		bool L_116 = V_7;
		if (!L_116)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* L_117 = V_10;
		int32_t L_118 = L_117->___next;
		__this->____freeList = L_118;
	}

IL_028a:
	{
		Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* L_119 = V_10;
		int32_t L_120 = V_2;
		L_119->___hashCode = L_120;
		Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* L_121 = V_10;
		int32_t* L_122 = V_9;
		int32_t L_123 = il2cpp_codegen_ldind<int32_t, int32_t>(L_122);
		L_121->___next = ((int32_t)il2cpp_codegen_subtract(L_123, 1));
		Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* L_124 = V_10;
		Il2CppSharedGenericObject* L_125 = ___0_key;
		L_124->___key = L_125;
		Il2CppCodeGenWriteBarrier((void**)(&L_124->___key), (void*)L_125);
		Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* L_126 = V_10;
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_127 = ___1_value;
		L_126->___value = L_127;
		int32_t* L_128 = V_9;
		int32_t L_129 = V_8;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_128, (int32_t)((int32_t)il2cpp_codegen_add(L_129, 1)));
		return (bool)1;
	}
}
// Method Definition Index: 11280
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mD6B9B2AC41D254533B45CD284F26B2A1E4BB6AF7_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2* V_3 = NULL;
	int32_t V_4 = 0;
	{
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 35)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mE7BC1634BF34E4C92ADCE6CA4F129711AA05B85C(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 39)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2*)CastclassSealed((RuntimeObject*)L_17, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37)));
		KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Il2CppSharedGenericObject* L_21;
		L_21 = KeyValuePair_2_get_Key_m88176A32E2C9831A50FFF20A93F88E06CD5E8454_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), NULL);
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Il2CppSharedGenericObject* L_24;
		L_24 = KeyValuePair_2_get_Key_m88176A32E2C9831A50FFF20A93F88E06CD5E8454_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), NULL);
		KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_27;
		L_27 = KeyValuePair_2_get_Value_mEB35D03F01963B96DAE24D1F07F970606C3F329D_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), NULL);
		Dictionary_2_Add_mFCBA508C5B0FC8B01FDBE26DFB745A876CB199CE(__this, L_24, L_27, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 11281
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m8F1860B651A77969F0AA678EC51DBD43BCA2E0C4_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m1CDD8BF0D456482C7F2E2D249DC281B52937979A(__this, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46));
		return;
	}
}
// Method Definition Index: 11282
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m1CDD8BF0D456482C7F2E2D249DC281B52937979A_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppSharedGenericObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_3 = (EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F*)(EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_5 = __this->____entries;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(Il2CppSharedGenericObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Il2CppSharedGenericObject** L_17 = (Il2CppSharedGenericObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		NullCheck((RuntimeObject*)(*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
// Method Definition Index: 11283
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m010CFA57FECECEB570F2AAC6A8BEFE4D7F0634F7_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Il2CppSharedGenericObject* L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* L_22 = V_4;
		Il2CppSharedGenericObject* L_23 = L_22->___key;
		Il2CppSharedGenericObject* L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* L_26 = V_4;
		Il2CppSharedGenericObject* L_27 = L_26->___key;
		Il2CppSharedGenericObject* L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
	}
	{
		Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* L_42 = V_4;
		Il2CppSharedGenericObject** L_43 = (Il2CppSharedGenericObject**)(&L_42->___key);
		il2cpp_codegen_initobj(L_43, sizeof(Il2CppSharedGenericObject*));
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_44 = V_3;
		__this->____freeList = L_44;
		int32_t L_45 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_46, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_47 = V_3;
		V_2 = L_47;
		Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* L_48 = V_4;
		int32_t L_49 = L_48->___next;
		V_3 = L_49;
	}

IL_0142:
	{
		int32_t L_50 = V_3;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11284
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m7F8ED7DC62EA26F30A3FC6C2DF4F67D2368C0758_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, Il2CppSharedGenericObject* ___0_key, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Il2CppSharedGenericObject* L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* L_22 = V_4;
		Il2CppSharedGenericObject* L_23 = L_22->___key;
		Il2CppSharedGenericObject* L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* L_26 = V_4;
		Il2CppSharedGenericObject* L_27 = L_26->___key;
		Il2CppSharedGenericObject* L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D* L_39 = ___1_value;
		Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* L_40 = V_4;
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_41 = L_40->___value;
		*(ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D*)L_39 = L_41;
		Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
	}
	{
		Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* L_45 = V_4;
		Il2CppSharedGenericObject** L_46 = (Il2CppSharedGenericObject**)(&L_45->___key);
		il2cpp_codegen_initobj(L_46, sizeof(Il2CppSharedGenericObject*));
	}

IL_010c:
	{
		goto IL_0120;
	}

IL_0120:
	{
		int32_t L_47 = V_3;
		__this->____freeList = L_47;
		int32_t L_48 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_50 = V_3;
		V_2 = L_50;
		Entry_tD4B501EBB0CA93A18C0F1698B9B2F0ED15056C7B* L_51 = V_4;
		int32_t L_52 = L_51->___next;
		V_3 = L_52;
	}

IL_014f:
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D* L_54 = ___1_value;
		il2cpp_codegen_initobj(L_54, sizeof(ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D));
		return (bool)0;
	}
}
// Method Definition Index: 11285
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mDF9D56FA531CDC9B14BBC022F023B47DF4D14CAA_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, Il2CppSharedGenericObject* ___0_key, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_mB6560A071BFF8D6005016897AE4A249483202650(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D* L_3 = ___1_value;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D));
		return (bool)0;
	}
}
// Method Definition Index: 11286
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mBA072B697EAE5E63B405549773CF69F787D49E45_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, Il2CppSharedGenericObject* ___0_key, ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_mA6367E1363A4C5BFE0755F7209AEE60C123D6830(__this, L_0, L_1, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		return L_2;
	}
}
// Method Definition Index: 11287
// Method Definition Index: 11288
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mEB99A40F3B6449F4E5FED330C8385D8F506F2633_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mA3AE600B24256FAAA93F82BE5C7967820BD801BF(__this, L_0, L_1, NULL);
		return;
	}
}
// Method Definition Index: 11289
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mEAA73131E141AE2FE67A7383DF342FDBB255CA83_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m4623426B34C938BD4399892C44613928D14F0001(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2*)IsInstSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37)));
		KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t4D000F0F095EF899E80D5930CA354544CA83AEC2* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mA3AE600B24256FAAA93F82BE5C7967820BD801BF(__this, L_14, L_15, NULL);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Il2CppSharedGenericObject* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_28 = V_2;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___value;
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), &L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), (RuntimeObject*)L_27, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			Il2CppSharedGenericObject* L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mEE51B27EA255D8646F72872F4E82403029154D46((&L_53), L_49, L_52, NULL);
			KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
// Method Definition Index: 11290
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1626862EF962C550419AD8E7196ADEF411ABDEB6_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tA44F63A19268F1FC34B9785A995AB2BF9089D7E3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4F175ABAB966024EBBB77711F601AD2DC138FB80((&L_0), __this, 2, NULL);
		Enumerator_tA44F63A19268F1FC34B9785A995AB2BF9089D7E3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11291
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_mA4EDC192863C2BB20D2ED9CD9418619F81017FE3_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_mE7BC1634BF34E4C92ADCE6CA4F129711AA05B85C(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_m1CDD8BF0D456482C7F2E2D249DC281B52937979A(__this, L_12, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46));
		int32_t L_13 = V_1;
		return L_13;
	}
}
// Method Definition Index: 11292
// Method Definition Index: 11293
// Method Definition Index: 11294
// Method Definition Index: 11295
// Method Definition Index: 11296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_mF5BB828CD2C8B1D044169DA005781CDBC5B59125_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t84D05CC571A5B34D646C9C7F719F1913F9A65E84* L_0;
		L_0 = Dictionary_2_get_Keys_m7E6DF684A626C0E96F5B9C7FCEF24C03C4B47111(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_m72BBF39CD1B510A6C296544E6BA05A280F9C940C_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_tADB278A8DBBC8538717395F63CC0E438D3070C88* L_0;
		L_0 = Dictionary_2_get_Values_mFC6B4740B4188CC2F63AE4F8677A92D2F6228651(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 50));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m8EC76B2EDA503476834176B67B035A410B0B0F05_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mFA6FE58A77CC193C29CF3D6B81599DA554C0E42B(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_mB6560A071BFF8D6005016897AE4A249483202650(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tEC1E17423206C0203AA16133DD2F65A905AAEA6F* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// Method Definition Index: 11299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m5CD44F8626D6D152465E73F8FF321C4717E8D284_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D_m237AC2C08DE06EC2EEB543C922F234B578919699(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)));
		}
		try
		{
			Il2CppSharedGenericObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m800FD26FDA0119447DFEB5DF39D92EFF7E4A8E3C(__this, L_3, ((*(ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D*)UnBox(L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 53));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 54)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 55)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 11300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mFA6FE58A77CC193C29CF3D6B81599DA554C0E42B_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(Il2CppSharedGenericObject*)((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 11301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_m11430D255BEA84B3E34EDA6F07F40659750CBDA8_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D_m237AC2C08DE06EC2EEB543C922F234B578919699(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)));
		}
		try
		{
			Il2CppSharedGenericObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_Add_mFCBA508C5B0FC8B01FDBE26DFB745A876CB199CE(__this, L_3, ((*(ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D*)UnBox(L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 54)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 55)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 11302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m8177EEF815D543CCCA75C43DD812E2545B3E4465_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mFA6FE58A77CC193C29CF3D6B81599DA554C0E42B(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m1767765184CE3BCC2018267D5600085E351C161F(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mA33ACBD09D98528DCC47418EBF292CE2421DA264_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tA44F63A19268F1FC34B9785A995AB2BF9089D7E3 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4F175ABAB966024EBBB77711F601AD2DC138FB80((&L_0), __this, 1, NULL);
		Enumerator_tA44F63A19268F1FC34B9785A995AB2BF9089D7E3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11304
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_m49AA0270947240889C6C4C351446C09E0212DB9F_gshared (Dictionary_2_t87676B59675DEFB3949F93F14312FA95A6766BC8* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mFA6FE58A77CC193C29CF3D6B81599DA554C0E42B(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_m010CFA57FECECEB570F2AAC6A8BEFE4D7F0634F7(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
	}

IL_0015:
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
// Method Definition Index: 11248
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2767518AD303775727BDF07FD40798B5DC188242_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Dictionary_2__ctor_mBDDEABE0D59F655A122956FD4D0FB2FBCCA8ABF3(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11249
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mDA40153F117F1C7D1693013686868AC6AC279A9C_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mBDDEABE0D59F655A122956FD4D0FB2FBCCA8ABF3(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11250
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBA08E10AB3F824421865CBAE6F69BD19BBB9AE10_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mBDDEABE0D59F655A122956FD4D0FB2FBCCA8ABF3(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11251
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBDDEABE0D59F655A122956FD4D0FB2FBCCA8ABF3_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mDBBFFF17D48F61048069691D8F842CAD43C172AA(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_5;
		L_5 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// Method Definition Index: 11252
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8798E24343B2D075B356F9746EE1DC7CB0E02323_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m5EF645AFCC082925C0DDC9B496BAF9C86228376C(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
// Method Definition Index: 11253
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5EF645AFCC082925C0DDC9B496BAF9C86228376C_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* G_B2_0 = NULL;
	Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mBDDEABE0D59F655A122956FD4D0FB2FBCCA8ABF3(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* L_9 = ((Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		NullCheck(L_9);
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		NullCheck(L_9);
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		Il2CppSharedGenericObject* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___value;
		Dictionary_2_Add_m63AA6477A52F199AD0E81F7E0D08DB88312B7442(__this, L_17, L_20, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), (RuntimeObject*)L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				NullCheck(L_28);
				KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B L_29;
				L_29 = InterfaceFuncInvoker0< KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_28);
				V_4 = L_29;
				Il2CppSharedGenericObject* L_30;
				L_30 = KeyValuePair_2_get_Key_mA49393E9626BD22A0596302CDAE76FF764271B48_inline((&V_4), NULL);
				PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_31;
				L_31 = KeyValuePair_2_get_Value_m174B96961312514153A649AE56841392A24B5AEC_inline((&V_4), NULL);
				Dictionary_2_Add_m63AA6477A52F199AD0E81F7E0D08DB88312B7442(__this, L_30, L_31, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				NullCheck((RuntimeObject*)L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
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

IL_00b9:
	{
		return;
	}
}
// Method Definition Index: 11254
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE159E828EF23DA03947322808F6DE81ADB6BA790_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_collection;
		Dictionary_2__ctor_mD8C4D4794807149C4C3B33696BA53B6928718B35(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		return;
	}
}
// Method Definition Index: 11255
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD8C4D4794807149C4C3B33696BA53B6928718B35_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* G_B2_0 = NULL;
	Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_collection;
		RuntimeObject* L_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000e;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_1;
		goto IL_0013;
	}

IL_000e:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), G_B2_0);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_1;
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mBDDEABE0D59F655A122956FD4D0FB2FBCCA8ABF3(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_collection;
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___0_collection;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), L_5);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{
				{
					RuntimeObject* L_7 = V_0;
					if (!L_7)
					{
						goto IL_0059;
					}
				}
				{
					RuntimeObject* L_8 = V_0;
					NullCheck((RuntimeObject*)L_8);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				}

IL_0059:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0046_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B L_10;
				L_10 = InterfaceFuncInvoker0< KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_9);
				V_1 = L_10;
				Il2CppSharedGenericObject* L_11;
				L_11 = KeyValuePair_2_get_Key_mA49393E9626BD22A0596302CDAE76FF764271B48_inline((&V_1), NULL);
				PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_12;
				L_12 = KeyValuePair_2_get_Value_m174B96961312514153A649AE56841392A24B5AEC_inline((&V_1), NULL);
				Dictionary_2_Add_m63AA6477A52F199AD0E81F7E0D08DB88312B7442(__this, L_11, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_0046_1:
			{
				RuntimeObject* L_13 = V_0;
				NullCheck((RuntimeObject*)L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
				if (L_14)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_005a;
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

IL_005a:
	{
		return;
	}
}
// Method Definition Index: 11256
// Method Definition Index: 11257
// Method Definition Index: 11258
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t945190B48E85011C084A91C20858D236ABBCB887* Dictionary_2_get_Keys_mCD28FA1EDD017A3DA4BB34F0C927190DF2E304C3_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t945190B48E85011C084A91C20858D236ABBCB887* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t945190B48E85011C084A91C20858D236ABBCB887* L_1 = (KeyCollection_t945190B48E85011C084A91C20858D236ABBCB887*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		KeyCollection__ctor_m78A0F952D3E0A3BB0E157B76AAA65C5F14639AA8(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t945190B48E85011C084A91C20858D236ABBCB887* L_2 = __this->____keys;
		return L_2;
	}
}
// Method Definition Index: 11259
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mB4FC580E6677EFE463CDCF32D44A94B997E3DE3D_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t945190B48E85011C084A91C20858D236ABBCB887* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t945190B48E85011C084A91C20858D236ABBCB887* L_1 = (KeyCollection_t945190B48E85011C084A91C20858D236ABBCB887*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		KeyCollection__ctor_m78A0F952D3E0A3BB0E157B76AAA65C5F14639AA8(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t945190B48E85011C084A91C20858D236ABBCB887* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11260
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m33BA16DD9BEE78573381760BC0A9EF70953B51EC_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t945190B48E85011C084A91C20858D236ABBCB887* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_t945190B48E85011C084A91C20858D236ABBCB887* L_1 = (KeyCollection_t945190B48E85011C084A91C20858D236ABBCB887*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		KeyCollection__ctor_m78A0F952D3E0A3BB0E157B76AAA65C5F14639AA8(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_t945190B48E85011C084A91C20858D236ABBCB887* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11261
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t088AFADCACA3AB2259B91A247AE941BD4BB8DA2C* Dictionary_2_get_Values_m5096013C7B2D59752D833466EE2CE1614B089F22_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t088AFADCACA3AB2259B91A247AE941BD4BB8DA2C* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t088AFADCACA3AB2259B91A247AE941BD4BB8DA2C* L_1 = (ValueCollection_t088AFADCACA3AB2259B91A247AE941BD4BB8DA2C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		ValueCollection__ctor_m74011055CC3E8F2B628D05A491CD4CF3C48694D7(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t088AFADCACA3AB2259B91A247AE941BD4BB8DA2C* L_2 = __this->____values;
		return L_2;
	}
}
// Method Definition Index: 11262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m399A894B4EE81F47D53803A4334C9576098D2F0E_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t088AFADCACA3AB2259B91A247AE941BD4BB8DA2C* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t088AFADCACA3AB2259B91A247AE941BD4BB8DA2C* L_1 = (ValueCollection_t088AFADCACA3AB2259B91A247AE941BD4BB8DA2C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		ValueCollection__ctor_m74011055CC3E8F2B628D05A491CD4CF3C48694D7(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t088AFADCACA3AB2259B91A247AE941BD4BB8DA2C* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11263
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m23C8B5DCA431E889C76F550A2BCB71E26E2CDE7C_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t088AFADCACA3AB2259B91A247AE941BD4BB8DA2C* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t088AFADCACA3AB2259B91A247AE941BD4BB8DA2C* L_1 = (ValueCollection_t088AFADCACA3AB2259B91A247AE941BD4BB8DA2C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		ValueCollection__ctor_m74011055CC3E8F2B628D05A491CD4CF3C48694D7(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t088AFADCACA3AB2259B91A247AE941BD4BB8DA2C* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11264
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 Dictionary_2_get_Item_mEDB9BFAB5365F5E664B54F06EA9BB1980C9265B7_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m92DD73F0529EFEB90FDE0E961A778373251E7EB6(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Il2CppSharedGenericObject* L_6 = ___0_key;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7((RuntimeObject*)L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8));
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 11265
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m6D123F8BB54F746D68BC0B5C556448E219358364_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, Il2CppSharedGenericObject* ___0_key, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m2D97ED8125427AE8A273C51D22B4578D29500E83(__this, L_0, L_1, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		return;
	}
}
// Method Definition Index: 11266
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m63AA6477A52F199AD0E81F7E0D08DB88312B7442_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, Il2CppSharedGenericObject* ___0_key, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m2D97ED8125427AE8A273C51D22B4578D29500E83(__this, L_0, L_1, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		return;
	}
}
// Method Definition Index: 11267
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mE77CA08C894B13342599CE68B23BD1B380F4B7C0_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mA49393E9626BD22A0596302CDAE76FF764271B48_inline((&___0_keyValuePair), NULL);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_1;
		L_1 = KeyValuePair_2_get_Value_m174B96961312514153A649AE56841392A24B5AEC_inline((&___0_keyValuePair), NULL);
		Dictionary_2_Add_m63AA6477A52F199AD0E81F7E0D08DB88312B7442(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return;
	}
}
// Method Definition Index: 11268
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mE99F1818C131728AFCFF26CBDB2DB361D4B1CF66_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mA49393E9626BD22A0596302CDAE76FF764271B48_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m92DD73F0529EFEB90FDE0E961A778373251E7EB6(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* L_3;
		L_3 = EqualityComparer_1_get_Default_mAEFB6D58B5FB5D08A3774D5EC5AE38DFFBF280CA_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_7;
		L_7 = KeyValuePair_2_get_Value_m174B96961312514153A649AE56841392A24B5AEC_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11269
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mF0C4010E69084C5386476080A9443EBFBD683BD9_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mA49393E9626BD22A0596302CDAE76FF764271B48_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m92DD73F0529EFEB90FDE0E961A778373251E7EB6(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* L_3;
		L_3 = EqualityComparer_1_get_Default_mAEFB6D58B5FB5D08A3774D5EC5AE38DFFBF280CA_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_7;
		L_7 = KeyValuePair_2_get_Value_m174B96961312514153A649AE56841392A24B5AEC_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Il2CppSharedGenericObject* L_9;
		L_9 = KeyValuePair_2_get_Key_mA49393E9626BD22A0596302CDAE76FF764271B48_inline((&___0_keyValuePair), NULL);
		bool L_10;
		L_10 = Dictionary_2_Remove_m3C4C5715882231683A7F6C1541CFDEE5706C4800(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11270
// Method Definition Index: 11271
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m7F0D3D513B7FE1BAA4DD5133320D5C5FE05F7C6F_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m92DD73F0529EFEB90FDE0E961A778373251E7EB6(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 11272
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m8BD0AE3B531AA3386A0E26AD3279DA2DC7B5AEFE_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* V_0 = NULL;
	int32_t V_1 = 0;
	PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* L_6;
		L_6 = EqualityComparer_1_get_Default_mAEFB6D58B5FB5D08A3774D5EC5AE38DFFBF280CA_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11273
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m81A0369C628B15FEFD3D887FD80C3E296D8E174A_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_m56C96986661B0AB3097CA328F754F2D0CE55E5A3(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_m2E35EF529E1E4FB3873EFCAF2E7868450B1F7226((&L_22), L_18, L_21, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11274
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE13A7EE7185C5ADF0A4FA33A023D6FE54E6C2AD0 Dictionary_2_GetEnumerator_m93F626612531D4023EB3DDD264E7B7453F8A6D3C_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tE13A7EE7185C5ADF0A4FA33A023D6FE54E6C2AD0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m21AA05C1023CAAC822A77D71229F6EED2204C52F((&L_0), __this, 2, NULL);
		return L_0;
	}
}
// Method Definition Index: 11275
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m30768206C6E5A99175B69C5D5D46AF97DEB4F692_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tE13A7EE7185C5ADF0A4FA33A023D6FE54E6C2AD0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m21AA05C1023CAAC822A77D71229F6EED2204C52F((&L_0), __this, 2, NULL);
		Enumerator_tE13A7EE7185C5ADF0A4FA33A023D6FE54E6C2AD0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11276
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m098F7724AFC8712F2D313C3E60B03E59C1A18245_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_6;
		L_6 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 35)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_m56C96986661B0AB3097CA328F754F2D0CE55E5A3(__this, NULL);
		KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E* L_15 = (KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E*)(KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E* L_16 = V_0;
		Dictionary_2_CopyTo_m81A0369C628B15FEFD3D887FD80C3E296D8E174A(__this, L_16, 0, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 39)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
// Method Definition Index: 11277
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m92DD73F0529EFEB90FDE0E961A778373251E7EB6_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Il2CppSharedGenericObject* V_6 = NULL;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_7 = NULL;
	int32_t V_8 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		NullCheck(L_7);
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_13 = V_6;
		if (!L_13)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_17 = V_2;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_22 = V_2;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		Il2CppSharedGenericObject* L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		Il2CppSharedGenericObject* L_25 = ___0_key;
		NullCheck(L_21);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_27 = V_2;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_34;
		L_34 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_7 = L_34;
	}

IL_00c0:
	{
		int32_t L_35 = V_0;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_36)->max_length),NULL));
		if ((!(((uint32_t)L_35) < ((uint32_t)L_37))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_38 = V_2;
		int32_t L_39 = V_0;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___hashCode;
		int32_t L_41 = V_5;
		if ((!(((uint32_t)L_40) == ((uint32_t)L_41))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_42 = V_7;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_43 = V_2;
		int32_t L_44 = V_0;
		NullCheck(L_43);
		Il2CppSharedGenericObject* L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___key;
		Il2CppSharedGenericObject* L_46 = ___0_key;
		NullCheck(L_42);
		bool L_47;
		L_47 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_42, L_45, L_46);
		if (L_47)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_48 = V_2;
		int32_t L_49 = V_0;
		NullCheck(L_48);
		int32_t L_50 = ((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___next;
		V_0 = L_50;
		int32_t L_51 = V_3;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_52 = V_2;
		NullCheck(L_52);
		int32_t L_53 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_52)->max_length),NULL));
		if ((((int32_t)L_51) < ((int32_t)L_53)))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_54 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_55 = V_4;
		Il2CppSharedGenericObject* L_56 = ___0_key;
		NullCheck(L_55);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_55, L_56);
		V_8 = ((int32_t)(L_57&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_1;
		int32_t L_59 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_1;
		NullCheck(L_60);
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		NullCheck(L_58);
		int32_t L_62 = ((int32_t)(L_59%L_61));
		int32_t L_63 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_63, 1));
	}

IL_012b:
	{
		int32_t L_64 = V_0;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_65)->max_length),NULL));
		if ((!(((uint32_t)L_64) < ((uint32_t)L_66))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_67 = V_2;
		int32_t L_68 = V_0;
		NullCheck(L_67);
		int32_t L_69 = ((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68)))->___hashCode;
		int32_t L_70 = V_8;
		if ((!(((uint32_t)L_69) == ((uint32_t)L_70))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_71 = V_4;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_72 = V_2;
		int32_t L_73 = V_0;
		NullCheck(L_72);
		Il2CppSharedGenericObject* L_74 = ((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_73)))->___key;
		Il2CppSharedGenericObject* L_75 = ___0_key;
		NullCheck(L_71);
		bool L_76;
		L_76 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_71, L_74, L_75);
		if (L_76)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_77 = V_2;
		int32_t L_78 = V_0;
		NullCheck(L_77);
		int32_t L_79 = ((L_77)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_78)))->___next;
		V_0 = L_79;
		int32_t L_80 = V_3;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_81 = V_2;
		NullCheck(L_81);
		int32_t L_82 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_81)->max_length),NULL));
		if ((((int32_t)L_80) < ((int32_t)L_82)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_83 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_83, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_84 = V_0;
		return L_84;
	}
}
// Method Definition Index: 11278
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mDBBFFF17D48F61048069691D8F842CAD43C172AA_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_5 = (EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D*)(EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 44), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 11279
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m2D97ED8125427AE8A273C51D22B4578D29500E83_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, Il2CppSharedGenericObject* ___0_key, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* V_10 = NULL;
	Il2CppSharedGenericObject* V_11 = NULL;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mDBBFFF17D48F61048069691D8F842CAD43C172AA(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_002c:
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Il2CppSharedGenericObject* L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_18 = V_11;
		if (!L_18)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_22 = V_0;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_26;
		L_26 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_27 = V_0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		Il2CppSharedGenericObject* L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		Il2CppSharedGenericObject* L_30 = ___0_key;
		NullCheck(L_26);
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_33 = V_0;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_35 = ___1_value;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Il2CppSharedGenericObject* L_37 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_42 = V_0;
		NullCheck(L_42);
		int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_45;
		L_45 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_12 = L_45;
	}

IL_0111:
	{
		int32_t L_46 = V_5;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_47 = V_0;
		NullCheck(L_47);
		int32_t L_48 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_47)->max_length),NULL));
		if ((!(((uint32_t)L_46) < ((uint32_t)L_48))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_49 = V_0;
		int32_t L_50 = V_5;
		NullCheck(L_49);
		int32_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___hashCode;
		int32_t L_52 = V_2;
		if ((!(((uint32_t)L_51) == ((uint32_t)L_52))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_53 = V_12;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_54 = V_0;
		int32_t L_55 = V_5;
		NullCheck(L_54);
		Il2CppSharedGenericObject* L_56 = ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)))->___key;
		Il2CppSharedGenericObject* L_57 = ___0_key;
		NullCheck(L_53);
		bool L_58;
		L_58 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_53, L_56, L_57);
		if (!L_58)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_59 = ___2_behavior;
		if ((!(((uint32_t)L_59) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_60 = V_0;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_62 = ___1_value;
		((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___value = L_62;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_63 = ___2_behavior;
		if ((!(((uint32_t)L_63) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		Il2CppSharedGenericObject* L_64 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_69 = V_0;
		NullCheck(L_69);
		int32_t L_70 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_69)->max_length),NULL));
		if ((((int32_t)L_68) < ((int32_t)L_70)))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_71 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_72 = V_5;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_73 = V_0;
		NullCheck(L_73);
		int32_t L_74 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_73)->max_length),NULL));
		if ((!(((uint32_t)L_72) < ((uint32_t)L_74))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_75 = V_0;
		int32_t L_76 = V_5;
		NullCheck(L_75);
		int32_t L_77 = ((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_76)))->___hashCode;
		int32_t L_78 = V_2;
		if ((!(((uint32_t)L_77) == ((uint32_t)L_78))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_79 = V_1;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		Il2CppSharedGenericObject* L_82 = ((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___key;
		Il2CppSharedGenericObject* L_83 = ___0_key;
		NullCheck(L_79);
		bool L_84;
		L_84 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_79, L_82, L_83);
		if (!L_84)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_85 = ___2_behavior;
		if ((!(((uint32_t)L_85) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_86 = V_0;
		int32_t L_87 = V_5;
		NullCheck(L_86);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_88 = ___1_value;
		((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)))->___value = L_88;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_89 = ___2_behavior;
		if ((!(((uint32_t)L_89) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Il2CppSharedGenericObject* L_90 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_95 = V_0;
		NullCheck(L_95);
		int32_t L_96 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_95)->max_length),NULL));
		if ((((int32_t)L_94) < ((int32_t)L_96)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_97 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_97, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_98 = __this->____freeCount;
		if ((((int32_t)L_98) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_99 = __this->____freeList;
		V_8 = L_99;
		V_7 = (bool)1;
		int32_t L_100 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_101 = __this->____count;
		V_13 = L_101;
		int32_t L_102 = V_13;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_103 = V_0;
		NullCheck(L_103);
		int32_t L_104 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_103)->max_length),NULL));
		if ((!(((uint32_t)L_102) == ((uint32_t)L_104))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_mA8E3BB98EFFD36D38DA4808528AB3A46055B42F0(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_105 = V_13;
		V_8 = L_105;
		int32_t L_106 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_106, 1));
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_107 = __this->____entries;
		V_0 = L_107;
	}

IL_0250:
	{
		bool L_108 = V_6;
		if (L_108)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_109 = V_4;
		G_B51_0 = L_109;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets;
		int32_t L_111 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_112 = __this->____buckets;
		NullCheck(L_112);
		int32_t L_113 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_112)->max_length),NULL));
		NullCheck(L_110);
		G_B51_0 = ((L_110)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_111%L_113)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_114 = V_0;
		int32_t L_115 = V_8;
		NullCheck(L_114);
		V_10 = ((L_114)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_115)));
		bool L_116 = V_7;
		if (!L_116)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* L_117 = V_10;
		int32_t L_118 = L_117->___next;
		__this->____freeList = L_118;
	}

IL_028a:
	{
		Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* L_119 = V_10;
		int32_t L_120 = V_2;
		L_119->___hashCode = L_120;
		Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* L_121 = V_10;
		int32_t* L_122 = V_9;
		int32_t L_123 = il2cpp_codegen_ldind<int32_t, int32_t>(L_122);
		L_121->___next = ((int32_t)il2cpp_codegen_subtract(L_123, 1));
		Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* L_124 = V_10;
		Il2CppSharedGenericObject* L_125 = ___0_key;
		L_124->___key = L_125;
		Il2CppCodeGenWriteBarrier((void**)(&L_124->___key), (void*)L_125);
		Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* L_126 = V_10;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_127 = ___1_value;
		L_126->___value = L_127;
		int32_t* L_128 = V_9;
		int32_t L_129 = V_8;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_128, (int32_t)((int32_t)il2cpp_codegen_add(L_129, 1)));
		return (bool)1;
	}
}
// Method Definition Index: 11280
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m44393705F6668EEBDEEEC22179A7621577EBBFA5_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E* V_3 = NULL;
	int32_t V_4 = 0;
	{
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 35)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mDBBFFF17D48F61048069691D8F842CAD43C172AA(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 39)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E*)CastclassSealed((RuntimeObject*)L_17, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37)));
		KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Il2CppSharedGenericObject* L_21;
		L_21 = KeyValuePair_2_get_Key_mA49393E9626BD22A0596302CDAE76FF764271B48_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), NULL);
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Il2CppSharedGenericObject* L_24;
		L_24 = KeyValuePair_2_get_Key_mA49393E9626BD22A0596302CDAE76FF764271B48_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), NULL);
		KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_27;
		L_27 = KeyValuePair_2_get_Value_m174B96961312514153A649AE56841392A24B5AEC_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), NULL);
		Dictionary_2_Add_m63AA6477A52F199AD0E81F7E0D08DB88312B7442(__this, L_24, L_27, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 11281
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mA8E3BB98EFFD36D38DA4808528AB3A46055B42F0_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m09EAA80EE584BD755D68E35A65F1CF67B89C7449(__this, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46));
		return;
	}
}
// Method Definition Index: 11282
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m09EAA80EE584BD755D68E35A65F1CF67B89C7449_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppSharedGenericObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_3 = (EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D*)(EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_5 = __this->____entries;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(Il2CppSharedGenericObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Il2CppSharedGenericObject** L_17 = (Il2CppSharedGenericObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		NullCheck((RuntimeObject*)(*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
// Method Definition Index: 11283
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m3C4C5715882231683A7F6C1541CFDEE5706C4800_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Il2CppSharedGenericObject* L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* L_22 = V_4;
		Il2CppSharedGenericObject* L_23 = L_22->___key;
		Il2CppSharedGenericObject* L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* L_26 = V_4;
		Il2CppSharedGenericObject* L_27 = L_26->___key;
		Il2CppSharedGenericObject* L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
	}
	{
		Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* L_42 = V_4;
		Il2CppSharedGenericObject** L_43 = (Il2CppSharedGenericObject**)(&L_42->___key);
		il2cpp_codegen_initobj(L_43, sizeof(Il2CppSharedGenericObject*));
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_44 = V_3;
		__this->____freeList = L_44;
		int32_t L_45 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_46, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_47 = V_3;
		V_2 = L_47;
		Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* L_48 = V_4;
		int32_t L_49 = L_48->___next;
		V_3 = L_49;
	}

IL_0142:
	{
		int32_t L_50 = V_3;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11284
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m251AA0CD93BDC11492B7B2CA73D03F27EB902BCA_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, Il2CppSharedGenericObject* ___0_key, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Il2CppSharedGenericObject* L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* L_22 = V_4;
		Il2CppSharedGenericObject* L_23 = L_22->___key;
		Il2CppSharedGenericObject* L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* L_26 = V_4;
		Il2CppSharedGenericObject* L_27 = L_26->___key;
		Il2CppSharedGenericObject* L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8* L_39 = ___1_value;
		Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* L_40 = V_4;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_41 = L_40->___value;
		*(PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8*)L_39 = L_41;
		Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
	}
	{
		Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* L_45 = V_4;
		Il2CppSharedGenericObject** L_46 = (Il2CppSharedGenericObject**)(&L_45->___key);
		il2cpp_codegen_initobj(L_46, sizeof(Il2CppSharedGenericObject*));
	}

IL_010c:
	{
		goto IL_0120;
	}

IL_0120:
	{
		int32_t L_47 = V_3;
		__this->____freeList = L_47;
		int32_t L_48 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_50 = V_3;
		V_2 = L_50;
		Entry_t614B564AA4C598513CB9285E06C11A527DFB081D* L_51 = V_4;
		int32_t L_52 = L_51->___next;
		V_3 = L_52;
	}

IL_014f:
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8* L_54 = ___1_value;
		il2cpp_codegen_initobj(L_54, sizeof(PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8));
		return (bool)0;
	}
}
// Method Definition Index: 11285
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mB2718497A2BA682A2668AA028A425D0C0E0FA95E_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, Il2CppSharedGenericObject* ___0_key, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m92DD73F0529EFEB90FDE0E961A778373251E7EB6(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8* L_3 = ___1_value;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8));
		return (bool)0;
	}
}
// Method Definition Index: 11286
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mD87FE4852709471A853159ECD1FC35E8DA9176DA_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, Il2CppSharedGenericObject* ___0_key, PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m2D97ED8125427AE8A273C51D22B4578D29500E83(__this, L_0, L_1, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		return L_2;
	}
}
// Method Definition Index: 11287
// Method Definition Index: 11288
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m6A7B97695E242893328215CB27880555D90C14CD_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m81A0369C628B15FEFD3D887FD80C3E296D8E174A(__this, L_0, L_1, NULL);
		return;
	}
}
// Method Definition Index: 11289
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m6BE7E80AD36144821251022398797D9D0753ED0A_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m56C96986661B0AB3097CA328F754F2D0CE55E5A3(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E*)IsInstSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37)));
		KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t7587090D69D0AB725876F0145243C9B1DACF285E* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m81A0369C628B15FEFD3D887FD80C3E296D8E174A(__this, L_14, L_15, NULL);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Il2CppSharedGenericObject* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_28 = V_2;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___value;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), &L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), (RuntimeObject*)L_27, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			Il2CppSharedGenericObject* L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m2E35EF529E1E4FB3873EFCAF2E7868450B1F7226((&L_53), L_49, L_52, NULL);
			KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
// Method Definition Index: 11290
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m55FFC60D55D9AD7AAE5795797CAD39D9135F4198_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tE13A7EE7185C5ADF0A4FA33A023D6FE54E6C2AD0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m21AA05C1023CAAC822A77D71229F6EED2204C52F((&L_0), __this, 2, NULL);
		Enumerator_tE13A7EE7185C5ADF0A4FA33A023D6FE54E6C2AD0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11291
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_mD89C04CDEAD549C0FF0A4B32BB7EB0B9E02793AD_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_mDBBFFF17D48F61048069691D8F842CAD43C172AA(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_m09EAA80EE584BD755D68E35A65F1CF67B89C7449(__this, L_12, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46));
		int32_t L_13 = V_1;
		return L_13;
	}
}
// Method Definition Index: 11292
// Method Definition Index: 11293
// Method Definition Index: 11294
// Method Definition Index: 11295
// Method Definition Index: 11296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_mE1663A4E74620188964E40A157C0C00F291836FA_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_t945190B48E85011C084A91C20858D236ABBCB887* L_0;
		L_0 = Dictionary_2_get_Keys_mCD28FA1EDD017A3DA4BB34F0C927190DF2E304C3(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_m9E8FEBB754CA8CB62026C27FB80D20CFCB4376D1_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t088AFADCACA3AB2259B91A247AE941BD4BB8DA2C* L_0;
		L_0 = Dictionary_2_get_Values_m5096013C7B2D59752D833466EE2CE1614B089F22(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 50));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mD7B4F2650991D362F7349ED6DDDE6083AC997479_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m239CA995DF920408F826C1B09FBAD9111926575E(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m92DD73F0529EFEB90FDE0E961A778373251E7EB6(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tDE088EFCD718E41D32E7FB4E2E11DAD09FC1D91D* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// Method Definition Index: 11299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m5019380628A59CBB8D68A5B014187C71F1AC4819_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_mF8E7B468A54C6AC70A820852EE7460D3CAFF77FC(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)));
		}
		try
		{
			Il2CppSharedGenericObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m6D123F8BB54F746D68BC0B5C556448E219358364(__this, L_3, ((*(PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8*)UnBox(L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 53));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 54)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 55)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 11300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_m239CA995DF920408F826C1B09FBAD9111926575E_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(Il2CppSharedGenericObject*)((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 11301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_mDF137A188DB3CFCD5881D9585D8435A0E427003C_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8_mF8E7B468A54C6AC70A820852EE7460D3CAFF77FC(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)));
		}
		try
		{
			Il2CppSharedGenericObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_Add_m63AA6477A52F199AD0E81F7E0D08DB88312B7442(__this, L_3, ((*(PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8*)UnBox(L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 54)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 55)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 11302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m386C112B0161EF1614148386A8119E9D6579A732_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m239CA995DF920408F826C1B09FBAD9111926575E(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m7F0D3D513B7FE1BAA4DD5133320D5C5FE05F7C6F(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_mF9A5E0C5E8D05A47711B2497ED278C2A94298251_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tE13A7EE7185C5ADF0A4FA33A023D6FE54E6C2AD0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m21AA05C1023CAAC822A77D71229F6EED2204C52F((&L_0), __this, 1, NULL);
		Enumerator_tE13A7EE7185C5ADF0A4FA33A023D6FE54E6C2AD0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11304
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_mDCC99B32A45DE72F91AFDAC1DB4678C90355805B_gshared (Dictionary_2_t29CF03C43B8E75E36B141902FE5B3C81834C90E5* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_m239CA995DF920408F826C1B09FBAD9111926575E(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_m3C4C5715882231683A7F6C1541CFDEE5706C4800(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
	}

IL_0015:
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
// Method Definition Index: 11248
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mADF6BFBB05F044EB42759B0AC1E52D487EAF7A7C_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Dictionary_2__ctor_m5485B42465A46B52E0DE92EBDB846727D1FB024C(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11249
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBE064C799600BB0FAEA1730BC2B1BD3FB19F15B0_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_m5485B42465A46B52E0DE92EBDB846727D1FB024C(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11250
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC04FCA4183B83599FD2EA65F19EA9CE7CE256BB6_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_m5485B42465A46B52E0DE92EBDB846727D1FB024C(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11251
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5485B42465A46B52E0DE92EBDB846727D1FB024C_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mBAB2ADDD75D6A4D3A612BBA2DFE44D849F8D55A8(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_5;
		L_5 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// Method Definition Index: 11252
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m797E3E913A2C7DB99475A793D1E052528E87A800_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_m1BB943535ACA7B0785EFAC2B7E9C99BA8259C322(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
// Method Definition Index: 11253
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1BB943535ACA7B0785EFAC2B7E9C99BA8259C322_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* G_B2_0 = NULL;
	Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m5485B42465A46B52E0DE92EBDB846727D1FB024C(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* L_9 = ((Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		NullCheck(L_9);
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		NullCheck(L_9);
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		Il2CppSharedGenericObject* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___value;
		Dictionary_2_Add_m164E62363701567DF11BCF035A4CC05DC0D297A8(__this, L_17, L_20, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), (RuntimeObject*)L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				NullCheck(L_28);
				KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80 L_29;
				L_29 = InterfaceFuncInvoker0< KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_28);
				V_4 = L_29;
				Il2CppSharedGenericObject* L_30;
				L_30 = KeyValuePair_2_get_Key_mA6FA6FE4E7642BC54EAF21AADECB615F6FF243EB_inline((&V_4), NULL);
				ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_31;
				L_31 = KeyValuePair_2_get_Value_mCFA751814A4E8628334ABFA53DBC00B3AC50BF30_inline((&V_4), NULL);
				Dictionary_2_Add_m164E62363701567DF11BCF035A4CC05DC0D297A8(__this, L_30, L_31, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				NullCheck((RuntimeObject*)L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
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

IL_00b9:
	{
		return;
	}
}
// Method Definition Index: 11254
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7E38363CEF32131AD23897174034DD64251420D7_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_collection;
		Dictionary_2__ctor_m1691B37239B9221051C92FA435FD20DD6667C44F(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		return;
	}
}
// Method Definition Index: 11255
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1691B37239B9221051C92FA435FD20DD6667C44F_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* G_B2_0 = NULL;
	Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_collection;
		RuntimeObject* L_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000e;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_1;
		goto IL_0013;
	}

IL_000e:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), G_B2_0);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_1;
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_m5485B42465A46B52E0DE92EBDB846727D1FB024C(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_collection;
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___0_collection;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), L_5);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{
				{
					RuntimeObject* L_7 = V_0;
					if (!L_7)
					{
						goto IL_0059;
					}
				}
				{
					RuntimeObject* L_8 = V_0;
					NullCheck((RuntimeObject*)L_8);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				}

IL_0059:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0046_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80 L_10;
				L_10 = InterfaceFuncInvoker0< KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80 >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_9);
				V_1 = L_10;
				Il2CppSharedGenericObject* L_11;
				L_11 = KeyValuePair_2_get_Key_mA6FA6FE4E7642BC54EAF21AADECB615F6FF243EB_inline((&V_1), NULL);
				ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_12;
				L_12 = KeyValuePair_2_get_Value_mCFA751814A4E8628334ABFA53DBC00B3AC50BF30_inline((&V_1), NULL);
				Dictionary_2_Add_m164E62363701567DF11BCF035A4CC05DC0D297A8(__this, L_11, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_0046_1:
			{
				RuntimeObject* L_13 = V_0;
				NullCheck((RuntimeObject*)L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
				if (L_14)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_005a;
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

IL_005a:
	{
		return;
	}
}
// Method Definition Index: 11256
// Method Definition Index: 11257
// Method Definition Index: 11258
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tE6F533AA064BC6E35BFB035F4A8150D5C4D66789* Dictionary_2_get_Keys_mA6C2D3629CC406CB0B0149C293FFF4E8A3757465_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_tE6F533AA064BC6E35BFB035F4A8150D5C4D66789* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tE6F533AA064BC6E35BFB035F4A8150D5C4D66789* L_1 = (KeyCollection_tE6F533AA064BC6E35BFB035F4A8150D5C4D66789*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		KeyCollection__ctor_mB833A0F9C2F37EE48F9D4352A63435E9F9672B82(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tE6F533AA064BC6E35BFB035F4A8150D5C4D66789* L_2 = __this->____keys;
		return L_2;
	}
}
// Method Definition Index: 11259
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m31A00928DEAEF8800E7155A001C1FE423FF4ED0A_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_tE6F533AA064BC6E35BFB035F4A8150D5C4D66789* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tE6F533AA064BC6E35BFB035F4A8150D5C4D66789* L_1 = (KeyCollection_tE6F533AA064BC6E35BFB035F4A8150D5C4D66789*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		KeyCollection__ctor_mB833A0F9C2F37EE48F9D4352A63435E9F9672B82(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tE6F533AA064BC6E35BFB035F4A8150D5C4D66789* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11260
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m84E37E179AE60C6D369B0D781D540B7C0E393CDF_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_tE6F533AA064BC6E35BFB035F4A8150D5C4D66789* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tE6F533AA064BC6E35BFB035F4A8150D5C4D66789* L_1 = (KeyCollection_tE6F533AA064BC6E35BFB035F4A8150D5C4D66789*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		KeyCollection__ctor_mB833A0F9C2F37EE48F9D4352A63435E9F9672B82(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tE6F533AA064BC6E35BFB035F4A8150D5C4D66789* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11261
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t84542E3DD580360E9BEC89E6D5173270C22BBAB1* Dictionary_2_get_Values_mFA814573E0FA1F0A13345900E02870018D508868_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t84542E3DD580360E9BEC89E6D5173270C22BBAB1* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t84542E3DD580360E9BEC89E6D5173270C22BBAB1* L_1 = (ValueCollection_t84542E3DD580360E9BEC89E6D5173270C22BBAB1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		ValueCollection__ctor_m63BF3189ADD55C613C739B0ACF27C4DC083A72FA(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t84542E3DD580360E9BEC89E6D5173270C22BBAB1* L_2 = __this->____values;
		return L_2;
	}
}
// Method Definition Index: 11262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m784C76C4EAB4E38D7CF127EBEC132DDBCC813A59_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t84542E3DD580360E9BEC89E6D5173270C22BBAB1* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t84542E3DD580360E9BEC89E6D5173270C22BBAB1* L_1 = (ValueCollection_t84542E3DD580360E9BEC89E6D5173270C22BBAB1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		ValueCollection__ctor_m63BF3189ADD55C613C739B0ACF27C4DC083A72FA(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t84542E3DD580360E9BEC89E6D5173270C22BBAB1* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11263
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mF38C46ADB2723B936A74B9A7240C044D2E48F815_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t84542E3DD580360E9BEC89E6D5173270C22BBAB1* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t84542E3DD580360E9BEC89E6D5173270C22BBAB1* L_1 = (ValueCollection_t84542E3DD580360E9BEC89E6D5173270C22BBAB1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		ValueCollection__ctor_m63BF3189ADD55C613C739B0ACF27C4DC083A72FA(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t84542E3DD580360E9BEC89E6D5173270C22BBAB1* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11264
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 Dictionary_2_get_Item_m08049EB289BEAE283DEA78ECF36D32968E29506D_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m5EB815222BAF6145DD1AFA76DC4F40C1515A7928(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Il2CppSharedGenericObject* L_6 = ___0_key;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7((RuntimeObject*)L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244));
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 11265
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mB5A45EBEBFCC40B707B461C7ABCA775BC6BACA52_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, Il2CppSharedGenericObject* ___0_key, ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7259D7EAE53BE879212DE576CDD0D360B6E6A124(__this, L_0, L_1, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		return;
	}
}
// Method Definition Index: 11266
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m164E62363701567DF11BCF035A4CC05DC0D297A8_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, Il2CppSharedGenericObject* ___0_key, ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7259D7EAE53BE879212DE576CDD0D360B6E6A124(__this, L_0, L_1, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		return;
	}
}
// Method Definition Index: 11267
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m5C5E10C273F50B2FF158881803097F137C91CB09_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mA6FA6FE4E7642BC54EAF21AADECB615F6FF243EB_inline((&___0_keyValuePair), NULL);
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_1;
		L_1 = KeyValuePair_2_get_Value_mCFA751814A4E8628334ABFA53DBC00B3AC50BF30_inline((&___0_keyValuePair), NULL);
		Dictionary_2_Add_m164E62363701567DF11BCF035A4CC05DC0D297A8(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return;
	}
}
// Method Definition Index: 11268
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m43DBD7EB6181EDC2FF767E03E0BCCAADFAE38A3A_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mA6FA6FE4E7642BC54EAF21AADECB615F6FF243EB_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m5EB815222BAF6145DD1AFA76DC4F40C1515A7928(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t7E0C7EEBA33D44A0D43BFEA1C6FA2C4ADA3A6C2A* L_3;
		L_3 = EqualityComparer_1_get_Default_mBC6EC48AEA71CAE94CF8657F17A6288B993FE252_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_7;
		L_7 = KeyValuePair_2_get_Value_mCFA751814A4E8628334ABFA53DBC00B3AC50BF30_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244, ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11269
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m902F9E7A211DA622F505BFACCC31D43980AF7AF5_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80 ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mA6FA6FE4E7642BC54EAF21AADECB615F6FF243EB_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m5EB815222BAF6145DD1AFA76DC4F40C1515A7928(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t7E0C7EEBA33D44A0D43BFEA1C6FA2C4ADA3A6C2A* L_3;
		L_3 = EqualityComparer_1_get_Default_mBC6EC48AEA71CAE94CF8657F17A6288B993FE252_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_7;
		L_7 = KeyValuePair_2_get_Value_mCFA751814A4E8628334ABFA53DBC00B3AC50BF30_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244, ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Il2CppSharedGenericObject* L_9;
		L_9 = KeyValuePair_2_get_Key_mA6FA6FE4E7642BC54EAF21AADECB615F6FF243EB_inline((&___0_keyValuePair), NULL);
		bool L_10;
		L_10 = Dictionary_2_Remove_mD1AB40C316C2E958E9B7AD3B2BA17583075EB910(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11270
// Method Definition Index: 11271
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m5B813EEF6752A0B9DC425B9B0358CDD9FF444CC9_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m5EB815222BAF6145DD1AFA76DC4F40C1515A7928(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 11272
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m1D3276696D828A725F188BCE6D18E0F06D2A172A_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* V_0 = NULL;
	int32_t V_1 = 0;
	ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_t7E0C7EEBA33D44A0D43BFEA1C6FA2C4ADA3A6C2A* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t7E0C7EEBA33D44A0D43BFEA1C6FA2C4ADA3A6C2A* L_6;
		L_6 = EqualityComparer_1_get_Default_mBC6EC48AEA71CAE94CF8657F17A6288B993FE252_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244, ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11273
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mA6010BD6E1FE617ED61B098CD2C60F5EFD9B505D_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_m103318A6BF334914529F062925F23BF551FCC70D(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80 L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_m35D9FA2776A46EA70F42A62D3001D945417621E3((&L_22), L_18, L_21, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11274
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t04AD2E161333718026A8FD2EA5F16659FB0CC2FC Dictionary_2_GetEnumerator_mEECFDFB3197EE8603D53C9F7B632CBADA76ACA49_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t04AD2E161333718026A8FD2EA5F16659FB0CC2FC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCB277E15EDC0038B3BFA9E04BDC59938B02419C3((&L_0), __this, 2, NULL);
		return L_0;
	}
}
// Method Definition Index: 11275
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m835D5E751AC60A5384BB499563BB7B070AF8FC28_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t04AD2E161333718026A8FD2EA5F16659FB0CC2FC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCB277E15EDC0038B3BFA9E04BDC59938B02419C3((&L_0), __this, 2, NULL);
		Enumerator_t04AD2E161333718026A8FD2EA5F16659FB0CC2FC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11276
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_mEF26326B33A5A4B7E0C795B59ACDAA15F1CB3728_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_6;
		L_6 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 35)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_m103318A6BF334914529F062925F23BF551FCC70D(__this, NULL);
		KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA* L_15 = (KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA*)(KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA* L_16 = V_0;
		Dictionary_2_CopyTo_mA6010BD6E1FE617ED61B098CD2C60F5EFD9B505D(__this, L_16, 0, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 39)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
// Method Definition Index: 11277
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m5EB815222BAF6145DD1AFA76DC4F40C1515A7928_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Il2CppSharedGenericObject* V_6 = NULL;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_7 = NULL;
	int32_t V_8 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		NullCheck(L_7);
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_13 = V_6;
		if (!L_13)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_17 = V_2;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_22 = V_2;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		Il2CppSharedGenericObject* L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		Il2CppSharedGenericObject* L_25 = ___0_key;
		NullCheck(L_21);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_27 = V_2;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_34;
		L_34 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_7 = L_34;
	}

IL_00c0:
	{
		int32_t L_35 = V_0;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_36)->max_length),NULL));
		if ((!(((uint32_t)L_35) < ((uint32_t)L_37))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_38 = V_2;
		int32_t L_39 = V_0;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___hashCode;
		int32_t L_41 = V_5;
		if ((!(((uint32_t)L_40) == ((uint32_t)L_41))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_42 = V_7;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_43 = V_2;
		int32_t L_44 = V_0;
		NullCheck(L_43);
		Il2CppSharedGenericObject* L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___key;
		Il2CppSharedGenericObject* L_46 = ___0_key;
		NullCheck(L_42);
		bool L_47;
		L_47 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_42, L_45, L_46);
		if (L_47)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_48 = V_2;
		int32_t L_49 = V_0;
		NullCheck(L_48);
		int32_t L_50 = ((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___next;
		V_0 = L_50;
		int32_t L_51 = V_3;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_52 = V_2;
		NullCheck(L_52);
		int32_t L_53 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_52)->max_length),NULL));
		if ((((int32_t)L_51) < ((int32_t)L_53)))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_54 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_55 = V_4;
		Il2CppSharedGenericObject* L_56 = ___0_key;
		NullCheck(L_55);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_55, L_56);
		V_8 = ((int32_t)(L_57&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_1;
		int32_t L_59 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_1;
		NullCheck(L_60);
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		NullCheck(L_58);
		int32_t L_62 = ((int32_t)(L_59%L_61));
		int32_t L_63 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_63, 1));
	}

IL_012b:
	{
		int32_t L_64 = V_0;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_65)->max_length),NULL));
		if ((!(((uint32_t)L_64) < ((uint32_t)L_66))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_67 = V_2;
		int32_t L_68 = V_0;
		NullCheck(L_67);
		int32_t L_69 = ((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68)))->___hashCode;
		int32_t L_70 = V_8;
		if ((!(((uint32_t)L_69) == ((uint32_t)L_70))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_71 = V_4;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_72 = V_2;
		int32_t L_73 = V_0;
		NullCheck(L_72);
		Il2CppSharedGenericObject* L_74 = ((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_73)))->___key;
		Il2CppSharedGenericObject* L_75 = ___0_key;
		NullCheck(L_71);
		bool L_76;
		L_76 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_71, L_74, L_75);
		if (L_76)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_77 = V_2;
		int32_t L_78 = V_0;
		NullCheck(L_77);
		int32_t L_79 = ((L_77)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_78)))->___next;
		V_0 = L_79;
		int32_t L_80 = V_3;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_81 = V_2;
		NullCheck(L_81);
		int32_t L_82 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_81)->max_length),NULL));
		if ((((int32_t)L_80) < ((int32_t)L_82)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_83 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_83, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_84 = V_0;
		return L_84;
	}
}
// Method Definition Index: 11278
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_mBAB2ADDD75D6A4D3A612BBA2DFE44D849F8D55A8_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_5 = (EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228*)(EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 44), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 11279
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m7259D7EAE53BE879212DE576CDD0D360B6E6A124_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, Il2CppSharedGenericObject* ___0_key, ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* V_10 = NULL;
	Il2CppSharedGenericObject* V_11 = NULL;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_mBAB2ADDD75D6A4D3A612BBA2DFE44D849F8D55A8(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_002c:
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Il2CppSharedGenericObject* L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_18 = V_11;
		if (!L_18)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_22 = V_0;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_26;
		L_26 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_27 = V_0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		Il2CppSharedGenericObject* L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		Il2CppSharedGenericObject* L_30 = ___0_key;
		NullCheck(L_26);
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_33 = V_0;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_35 = ___1_value;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value))->___clip), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value))->___binder), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Il2CppSharedGenericObject* L_37 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_42 = V_0;
		NullCheck(L_42);
		int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_45;
		L_45 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_12 = L_45;
	}

IL_0111:
	{
		int32_t L_46 = V_5;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_47 = V_0;
		NullCheck(L_47);
		int32_t L_48 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_47)->max_length),NULL));
		if ((!(((uint32_t)L_46) < ((uint32_t)L_48))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_49 = V_0;
		int32_t L_50 = V_5;
		NullCheck(L_49);
		int32_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___hashCode;
		int32_t L_52 = V_2;
		if ((!(((uint32_t)L_51) == ((uint32_t)L_52))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_53 = V_12;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_54 = V_0;
		int32_t L_55 = V_5;
		NullCheck(L_54);
		Il2CppSharedGenericObject* L_56 = ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)))->___key;
		Il2CppSharedGenericObject* L_57 = ___0_key;
		NullCheck(L_53);
		bool L_58;
		L_58 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_53, L_56, L_57);
		if (!L_58)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_59 = ___2_behavior;
		if ((!(((uint32_t)L_59) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_60 = V_0;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_62 = ___1_value;
		((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___value = L_62;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___value))->___clip), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___value))->___binder), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_63 = ___2_behavior;
		if ((!(((uint32_t)L_63) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		Il2CppSharedGenericObject* L_64 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_69 = V_0;
		NullCheck(L_69);
		int32_t L_70 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_69)->max_length),NULL));
		if ((((int32_t)L_68) < ((int32_t)L_70)))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_71 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_72 = V_5;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_73 = V_0;
		NullCheck(L_73);
		int32_t L_74 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_73)->max_length),NULL));
		if ((!(((uint32_t)L_72) < ((uint32_t)L_74))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_75 = V_0;
		int32_t L_76 = V_5;
		NullCheck(L_75);
		int32_t L_77 = ((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_76)))->___hashCode;
		int32_t L_78 = V_2;
		if ((!(((uint32_t)L_77) == ((uint32_t)L_78))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_79 = V_1;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		Il2CppSharedGenericObject* L_82 = ((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___key;
		Il2CppSharedGenericObject* L_83 = ___0_key;
		NullCheck(L_79);
		bool L_84;
		L_84 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_79, L_82, L_83);
		if (!L_84)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_85 = ___2_behavior;
		if ((!(((uint32_t)L_85) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_86 = V_0;
		int32_t L_87 = V_5;
		NullCheck(L_86);
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_88 = ___1_value;
		((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)))->___value = L_88;
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)))->___value))->___clip), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)))->___value))->___binder), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_89 = ___2_behavior;
		if ((!(((uint32_t)L_89) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Il2CppSharedGenericObject* L_90 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_95 = V_0;
		NullCheck(L_95);
		int32_t L_96 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_95)->max_length),NULL));
		if ((((int32_t)L_94) < ((int32_t)L_96)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_97 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_97, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_98 = __this->____freeCount;
		if ((((int32_t)L_98) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_99 = __this->____freeList;
		V_8 = L_99;
		V_7 = (bool)1;
		int32_t L_100 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_101 = __this->____count;
		V_13 = L_101;
		int32_t L_102 = V_13;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_103 = V_0;
		NullCheck(L_103);
		int32_t L_104 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_103)->max_length),NULL));
		if ((!(((uint32_t)L_102) == ((uint32_t)L_104))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m93834F44790498E60B5D0D30B73C65B5F76AC230(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_105 = V_13;
		V_8 = L_105;
		int32_t L_106 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_106, 1));
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_107 = __this->____entries;
		V_0 = L_107;
	}

IL_0250:
	{
		bool L_108 = V_6;
		if (L_108)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_109 = V_4;
		G_B51_0 = L_109;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets;
		int32_t L_111 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_112 = __this->____buckets;
		NullCheck(L_112);
		int32_t L_113 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_112)->max_length),NULL));
		NullCheck(L_110);
		G_B51_0 = ((L_110)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_111%L_113)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_114 = V_0;
		int32_t L_115 = V_8;
		NullCheck(L_114);
		V_10 = ((L_114)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_115)));
		bool L_116 = V_7;
		if (!L_116)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* L_117 = V_10;
		int32_t L_118 = L_117->___next;
		__this->____freeList = L_118;
	}

IL_028a:
	{
		Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* L_119 = V_10;
		int32_t L_120 = V_2;
		L_119->___hashCode = L_120;
		Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* L_121 = V_10;
		int32_t* L_122 = V_9;
		int32_t L_123 = il2cpp_codegen_ldind<int32_t, int32_t>(L_122);
		L_121->___next = ((int32_t)il2cpp_codegen_subtract(L_123, 1));
		Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* L_124 = V_10;
		Il2CppSharedGenericObject* L_125 = ___0_key;
		L_124->___key = L_125;
		Il2CppCodeGenWriteBarrier((void**)(&L_124->___key), (void*)L_125);
		Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* L_126 = V_10;
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_127 = ___1_value;
		L_126->___value = L_127;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_126->___value))->___clip), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_126->___value))->___binder), (void*)NULL);
		#endif
		int32_t* L_128 = V_9;
		int32_t L_129 = V_8;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_128, (int32_t)((int32_t)il2cpp_codegen_add(L_129, 1)));
		return (bool)1;
	}
}
// Method Definition Index: 11280
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_m70EBE5B03744E55C9528CA1813B62BD25915A87B_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA* V_3 = NULL;
	int32_t V_4 = 0;
	{
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 35)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_mBAB2ADDD75D6A4D3A612BBA2DFE44D849F8D55A8(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 39)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA*)CastclassSealed((RuntimeObject*)L_17, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37)));
		KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Il2CppSharedGenericObject* L_21;
		L_21 = KeyValuePair_2_get_Key_mA6FA6FE4E7642BC54EAF21AADECB615F6FF243EB_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), NULL);
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Il2CppSharedGenericObject* L_24;
		L_24 = KeyValuePair_2_get_Key_mA6FA6FE4E7642BC54EAF21AADECB615F6FF243EB_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), NULL);
		KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_27;
		L_27 = KeyValuePair_2_get_Value_mCFA751814A4E8628334ABFA53DBC00B3AC50BF30_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), NULL);
		Dictionary_2_Add_m164E62363701567DF11BCF035A4CC05DC0D297A8(__this, L_24, L_27, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 11281
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m93834F44790498E60B5D0D30B73C65B5F76AC230_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_mD4C6C2D6C87D7115BCC243A736CFD0D4ABCBC9CE(__this, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46));
		return;
	}
}
// Method Definition Index: 11282
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_mD4C6C2D6C87D7115BCC243A736CFD0D4ABCBC9CE_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppSharedGenericObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_3 = (EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228*)(EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_5 = __this->____entries;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(Il2CppSharedGenericObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Il2CppSharedGenericObject** L_17 = (Il2CppSharedGenericObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		NullCheck((RuntimeObject*)(*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
// Method Definition Index: 11283
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mD1AB40C316C2E958E9B7AD3B2BA17583075EB910_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Il2CppSharedGenericObject* L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* L_22 = V_4;
		Il2CppSharedGenericObject* L_23 = L_22->___key;
		Il2CppSharedGenericObject* L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* L_26 = V_4;
		Il2CppSharedGenericObject* L_27 = L_26->___key;
		Il2CppSharedGenericObject* L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
	}
	{
		Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* L_42 = V_4;
		Il2CppSharedGenericObject** L_43 = (Il2CppSharedGenericObject**)(&L_42->___key);
		il2cpp_codegen_initobj(L_43, sizeof(Il2CppSharedGenericObject*));
	}

IL_00ff:
	{
	}
	{
		Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* L_44 = V_4;
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244* L_45 = (ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244*)(&L_44->___value);
		il2cpp_codegen_initobj(L_45, sizeof(ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244));
	}

IL_0113:
	{
		int32_t L_46 = V_3;
		__this->____freeList = L_46;
		int32_t L_47 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_47, 1));
		int32_t L_48 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_48, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_49 = V_3;
		V_2 = L_49;
		Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* L_50 = V_4;
		int32_t L_51 = L_50->___next;
		V_3 = L_51;
	}

IL_0142:
	{
		int32_t L_52 = V_3;
		if ((((int32_t)L_52) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11284
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mFF14C02DFDDB18ED536AEA8BAA89414AC6C301FC_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, Il2CppSharedGenericObject* ___0_key, ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Il2CppSharedGenericObject* L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* L_22 = V_4;
		Il2CppSharedGenericObject* L_23 = L_22->___key;
		Il2CppSharedGenericObject* L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* L_26 = V_4;
		Il2CppSharedGenericObject* L_27 = L_26->___key;
		Il2CppSharedGenericObject* L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244* L_39 = ___1_value;
		Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* L_40 = V_4;
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_41 = L_40->___value;
		*(ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244*)L_39 = L_41;
		Il2CppCodeGenWriteBarrier((void**)&(((ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244*)L_39)->___clip), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244*)L_39)->___binder), (void*)NULL);
		#endif
		Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
	}
	{
		Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* L_45 = V_4;
		Il2CppSharedGenericObject** L_46 = (Il2CppSharedGenericObject**)(&L_45->___key);
		il2cpp_codegen_initobj(L_46, sizeof(Il2CppSharedGenericObject*));
	}

IL_010c:
	{
	}
	{
		Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* L_47 = V_4;
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244* L_48 = (ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244*)(&L_47->___value);
		il2cpp_codegen_initobj(L_48, sizeof(ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244));
	}

IL_0120:
	{
		int32_t L_49 = V_3;
		__this->____freeList = L_49;
		int32_t L_50 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_50, 1));
		int32_t L_51 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_51, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_52 = V_3;
		V_2 = L_52;
		Entry_t2CECF4E3242D16471BE1F021F75BED23704D2289* L_53 = V_4;
		int32_t L_54 = L_53->___next;
		V_3 = L_54;
	}

IL_014f:
	{
		int32_t L_55 = V_3;
		if ((((int32_t)L_55) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244* L_56 = ___1_value;
		il2cpp_codegen_initobj(L_56, sizeof(ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244));
		return (bool)0;
	}
}
// Method Definition Index: 11285
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m1CD95CC966DDA94361C7169F0C6426501B5B3F3C_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, Il2CppSharedGenericObject* ___0_key, ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m5EB815222BAF6145DD1AFA76DC4F40C1515A7928(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244* L_3 = ___1_value;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244*)L_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244*)L_3)->___clip), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244*)L_3)->___binder), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0025:
	{
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244));
		return (bool)0;
	}
}
// Method Definition Index: 11286
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mF089460FF1880EC37131E96BFAE3A3BADB1F17D0_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, Il2CppSharedGenericObject* ___0_key, ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m7259D7EAE53BE879212DE576CDD0D360B6E6A124(__this, L_0, L_1, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		return L_2;
	}
}
// Method Definition Index: 11287
// Method Definition Index: 11288
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9600D85A3A89A6EC7B75FF4F540A5A813E19ED6E_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_mA6010BD6E1FE617ED61B098CD2C60F5EFD9B505D(__this, L_0, L_1, NULL);
		return;
	}
}
// Method Definition Index: 11289
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m6E2DCBC7EBC7C5B260023FEA3CFAE7BB33A4DCBF_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_m103318A6BF334914529F062925F23BF551FCC70D(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA*)IsInstSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37)));
		KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tBE0DF483E3F933F92F2CA057EA099DCE9746F1CA* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_mA6010BD6E1FE617ED61B098CD2C60F5EFD9B505D(__this, L_14, L_15, NULL);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Il2CppSharedGenericObject* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_28 = V_2;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___value;
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), &L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), (RuntimeObject*)L_27, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			Il2CppSharedGenericObject* L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80 L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_m35D9FA2776A46EA70F42A62D3001D945417621E3((&L_53), L_49, L_52, NULL);
			KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80 L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
// Method Definition Index: 11290
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m7851733BF3B8E033994A4DE4F99011C7A7095E47_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t04AD2E161333718026A8FD2EA5F16659FB0CC2FC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCB277E15EDC0038B3BFA9E04BDC59938B02419C3((&L_0), __this, 2, NULL);
		Enumerator_t04AD2E161333718026A8FD2EA5F16659FB0CC2FC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11291
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_mA580A56227D91235F67FEF9001C6DA4F6BBEF54E_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_mBAB2ADDD75D6A4D3A612BBA2DFE44D849F8D55A8(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_mD4C6C2D6C87D7115BCC243A736CFD0D4ABCBC9CE(__this, L_12, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46));
		int32_t L_13 = V_1;
		return L_13;
	}
}
// Method Definition Index: 11292
// Method Definition Index: 11293
// Method Definition Index: 11294
// Method Definition Index: 11295
// Method Definition Index: 11296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m2502DD8885B432D38B915F9C37F86D03DA46AE04_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_tE6F533AA064BC6E35BFB035F4A8150D5C4D66789* L_0;
		L_0 = Dictionary_2_get_Keys_mA6C2D3629CC406CB0B0149C293FFF4E8A3757465(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_m3EF895069956DC2017B7E58337D63E09FBACEEA0_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t84542E3DD580360E9BEC89E6D5173270C22BBAB1* L_0;
		L_0 = Dictionary_2_get_Values_mFA814573E0FA1F0A13345900E02870018D508868(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 50));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mF835587035734CC964049408323E4A5FACA19D5F_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mE9CF9EAC4C2C638435D1B2AB5D378860A9230294(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m5EB815222BAF6145DD1AFA76DC4F40C1515A7928(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t4DDDCCB57B478ADA90891518C8E0A0B8802C4228* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// Method Definition Index: 11299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m2FB04AB90DD3C549144CC07FD882B5EF67008C36_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244_mC58DD2C43061B18F9614D49AFB4544789F10CC70(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)));
		}
		try
		{
			Il2CppSharedGenericObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_mB5A45EBEBFCC40B707B461C7ABCA775BC6BACA52(__this, L_3, ((*(ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244*)UnBox(L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 53));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 54)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 55)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 11300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mE9CF9EAC4C2C638435D1B2AB5D378860A9230294_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(Il2CppSharedGenericObject*)((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 11301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_m8C23E67F7FA84C6522B1FE30D588832C9F0B0797_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244_mC58DD2C43061B18F9614D49AFB4544789F10CC70(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)));
		}
		try
		{
			Il2CppSharedGenericObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_Add_m164E62363701567DF11BCF035A4CC05DC0D297A8(__this, L_3, ((*(ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244*)UnBox(L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 54)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 55)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 11302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mBEB5E19D835EDD77F3F68CC8109D26DAF7418AF8_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mE9CF9EAC4C2C638435D1B2AB5D378860A9230294(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m5B813EEF6752A0B9DC425B9B0358CDD9FF444CC9(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m2885E13BAE84D1CECE234E2F10DA82272E67D76C_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t04AD2E161333718026A8FD2EA5F16659FB0CC2FC L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCB277E15EDC0038B3BFA9E04BDC59938B02419C3((&L_0), __this, 1, NULL);
		Enumerator_t04AD2E161333718026A8FD2EA5F16659FB0CC2FC L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11304
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_m20E0DD3B72FC1D55C3914E6646CAC5B87ED12860_gshared (Dictionary_2_t7ED0B7B2F3E0CAF6CB766ECFC6FA45208E07A12D* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mE9CF9EAC4C2C638435D1B2AB5D378860A9230294(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_mD1AB40C316C2E958E9B7AD3B2BA17583075EB910(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
	}

IL_0015:
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
// Method Definition Index: 11248
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE199235DC97F7504E03554BC3181C0118D8903E7_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Dictionary_2__ctor_mBE6B4EA16EABEA93D814278F537C1160EE6901CA(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11249
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB7653864737EF80F38384D690B854293D4E2E5BB_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		Dictionary_2__ctor_mBE6B4EA16EABEA93D814278F537C1160EE6901CA(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11250
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m092EFDAFA88BDC25B375FC9914005162898B41E8_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		Dictionary_2__ctor_mBE6B4EA16EABEA93D814278F537C1160EE6901CA(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11251
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBE6B4EA16EABEA93D814278F537C1160EE6901CA_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m2173A38983FBA0FA8078B9DB9EEA8F54BEE1C3FC(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_5;
		L_5 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// Method Definition Index: 11252
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m98ACB6B892FA1ACDF31E6FA41181BC82EE854995_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_dictionary;
		Dictionary_2__ctor_mAD0EDB365809AE1188C161D694A07A8EBD8C0889(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
// Method Definition Index: 11253
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mAD0EDB365809AE1188C161D694A07A8EBD8C0889_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C V_4;
	memset((&V_4), 0, sizeof(V_4));
	Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* G_B2_0 = NULL;
	Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mBE6B4EA16EABEA93D814278F537C1160EE6901CA(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* L_9 = ((Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		NullCheck(L_9);
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		NullCheck(L_9);
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___hashCode;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		Il2CppSharedGenericObject* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___value;
		Dictionary_2_Add_m84B2C31E46D1B34FD994AC15857C2F524CD35723(__this, L_17, L_20, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), (RuntimeObject*)L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				NullCheck(L_28);
				KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C L_29;
				L_29 = InterfaceFuncInvoker0< KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_28);
				V_4 = L_29;
				Il2CppSharedGenericObject* L_30;
				L_30 = KeyValuePair_2_get_Key_mDE6EBB5E13C994979C9F16F6A1185D1719BC2609_inline((&V_4), NULL);
				PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_31;
				L_31 = KeyValuePair_2_get_Value_m73D79C3513B3F85604EE011537EFB1F01F5AD4FD_inline((&V_4), NULL);
				Dictionary_2_Add_m84B2C31E46D1B34FD994AC15857C2F524CD35723(__this, L_30, L_31, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				NullCheck((RuntimeObject*)L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
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

IL_00b9:
	{
		return;
	}
}
// Method Definition Index: 11254
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF88B4A53C1FEB259F85D8C8CF0CD11AFD55E04DF_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_collection;
		Dictionary_2__ctor_m528E65093CEEF8029719B9F24AB702E16A672180(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		return;
	}
}
// Method Definition Index: 11255
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m528E65093CEEF8029719B9F24AB702E16A672180_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* G_B2_0 = NULL;
	Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_collection;
		RuntimeObject* L_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000e;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_1;
		goto IL_0013;
	}

IL_000e:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), G_B2_0);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_1;
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___1_comparer;
		Dictionary_2__ctor_mBE6B4EA16EABEA93D814278F537C1160EE6901CA(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_collection;
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___0_collection;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), L_5);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{
				{
					RuntimeObject* L_7 = V_0;
					if (!L_7)
					{
						goto IL_0059;
					}
				}
				{
					RuntimeObject* L_8 = V_0;
					NullCheck((RuntimeObject*)L_8);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				}

IL_0059:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0046_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C L_10;
				L_10 = InterfaceFuncInvoker0< KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_9);
				V_1 = L_10;
				Il2CppSharedGenericObject* L_11;
				L_11 = KeyValuePair_2_get_Key_mDE6EBB5E13C994979C9F16F6A1185D1719BC2609_inline((&V_1), NULL);
				PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_12;
				L_12 = KeyValuePair_2_get_Value_m73D79C3513B3F85604EE011537EFB1F01F5AD4FD_inline((&V_1), NULL);
				Dictionary_2_Add_m84B2C31E46D1B34FD994AC15857C2F524CD35723(__this, L_11, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			}

IL_0046_1:
			{
				RuntimeObject* L_13 = V_0;
				NullCheck((RuntimeObject*)L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
				if (L_14)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_005a;
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

IL_005a:
	{
		return;
	}
}
// Method Definition Index: 11256
// Method Definition Index: 11257
// Method Definition Index: 11258
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tDDC92BC5522FB87485368E61B8DE31D7A29A9E14* Dictionary_2_get_Keys_mAB2E0586FB36EA7BCC55C4EB76EB9B73C09886B6_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_tDDC92BC5522FB87485368E61B8DE31D7A29A9E14* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tDDC92BC5522FB87485368E61B8DE31D7A29A9E14* L_1 = (KeyCollection_tDDC92BC5522FB87485368E61B8DE31D7A29A9E14*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		KeyCollection__ctor_mE014D210AB20DEFE331E5CE84C40DE329F4584CC(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tDDC92BC5522FB87485368E61B8DE31D7A29A9E14* L_2 = __this->____keys;
		return L_2;
	}
}
// Method Definition Index: 11259
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mCEA8382AD715E094322CEE281FB5BE197492CC1B_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_tDDC92BC5522FB87485368E61B8DE31D7A29A9E14* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tDDC92BC5522FB87485368E61B8DE31D7A29A9E14* L_1 = (KeyCollection_tDDC92BC5522FB87485368E61B8DE31D7A29A9E14*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		KeyCollection__ctor_mE014D210AB20DEFE331E5CE84C40DE329F4584CC(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tDDC92BC5522FB87485368E61B8DE31D7A29A9E14* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11260
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m6E38E99714B51DB869D88DF16C4DB9D389363E37_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_tDDC92BC5522FB87485368E61B8DE31D7A29A9E14* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tDDC92BC5522FB87485368E61B8DE31D7A29A9E14* L_1 = (KeyCollection_tDDC92BC5522FB87485368E61B8DE31D7A29A9E14*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		KeyCollection__ctor_mE014D210AB20DEFE331E5CE84C40DE329F4584CC(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tDDC92BC5522FB87485368E61B8DE31D7A29A9E14* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11261
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t913C7FDC829EFFA2FD9D38CDD1D9621FD97C3999* Dictionary_2_get_Values_mD79B71FF05F87047C3E201657004D5C7648B02BD_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t913C7FDC829EFFA2FD9D38CDD1D9621FD97C3999* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t913C7FDC829EFFA2FD9D38CDD1D9621FD97C3999* L_1 = (ValueCollection_t913C7FDC829EFFA2FD9D38CDD1D9621FD97C3999*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		ValueCollection__ctor_m8AB7CA8F9C657783E065269D572C586F5B71A545(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t913C7FDC829EFFA2FD9D38CDD1D9621FD97C3999* L_2 = __this->____values;
		return L_2;
	}
}
// Method Definition Index: 11262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_mD7F9532C706E3FDBED458BDAE3500D6C620D68BA_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t913C7FDC829EFFA2FD9D38CDD1D9621FD97C3999* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t913C7FDC829EFFA2FD9D38CDD1D9621FD97C3999* L_1 = (ValueCollection_t913C7FDC829EFFA2FD9D38CDD1D9621FD97C3999*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		ValueCollection__ctor_m8AB7CA8F9C657783E065269D572C586F5B71A545(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t913C7FDC829EFFA2FD9D38CDD1D9621FD97C3999* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11263
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m0B15B0D2FD0F21673E4CB312B44775EF620E066C_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t913C7FDC829EFFA2FD9D38CDD1D9621FD97C3999* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_t913C7FDC829EFFA2FD9D38CDD1D9621FD97C3999* L_1 = (ValueCollection_t913C7FDC829EFFA2FD9D38CDD1D9621FD97C3999*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		ValueCollection__ctor_m8AB7CA8F9C657783E065269D572C586F5B71A545(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_t913C7FDC829EFFA2FD9D38CDD1D9621FD97C3999* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11264
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 Dictionary_2_get_Item_m0B3CBEC05A0791358445D0609B337C292051C9B9_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m756839801A9CE21D7A69DCEBCB5A94CABAB765A1(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___value;
		return L_5;
	}

IL_001e:
	{
		Il2CppSharedGenericObject* L_6 = ___0_key;
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7((RuntimeObject*)L_6, NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55));
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 11265
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m696D60B08100005DA90FC0604C779FA900ECB6D9_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, Il2CppSharedGenericObject* ___0_key, PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m3947B50EA21C490D5ABDF7391DC0695E6AA3F8EE(__this, L_0, L_1, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		return;
	}
}
// Method Definition Index: 11266
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m84B2C31E46D1B34FD994AC15857C2F524CD35723_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, Il2CppSharedGenericObject* ___0_key, PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m3947B50EA21C490D5ABDF7391DC0695E6AA3F8EE(__this, L_0, L_1, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		return;
	}
}
// Method Definition Index: 11267
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m70E00C5BBD59FC9355A71B1B2429CE7A37B7E377_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mDE6EBB5E13C994979C9F16F6A1185D1719BC2609_inline((&___0_keyValuePair), NULL);
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_1;
		L_1 = KeyValuePair_2_get_Value_m73D79C3513B3F85604EE011537EFB1F01F5AD4FD_inline((&___0_keyValuePair), NULL);
		Dictionary_2_Add_m84B2C31E46D1B34FD994AC15857C2F524CD35723(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return;
	}
}
// Method Definition Index: 11268
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_mDE027D68A30C550B27A82DA5CABFB9673928A7A9_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mDE6EBB5E13C994979C9F16F6A1185D1719BC2609_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m756839801A9CE21D7A69DCEBCB5A94CABAB765A1(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_tAE8B4F16F447C069F655AA64CF2C6000FD15BD47* L_3;
		L_3 = EqualityComparer_1_get_Default_mFC11E751ABDC51479FADCFFDE7BC0CA498A3416D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_7;
		L_7 = KeyValuePair_2_get_Value_m73D79C3513B3F85604EE011537EFB1F01F5AD4FD_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55, PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11269
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_mB107EB07E278FF64F043BC28CA0A1336000FF143_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C ___0_keyValuePair, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = KeyValuePair_2_get_Key_mDE6EBB5E13C994979C9F16F6A1185D1719BC2609_inline((&___0_keyValuePair), NULL);
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m756839801A9CE21D7A69DCEBCB5A94CABAB765A1(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_tAE8B4F16F447C069F655AA64CF2C6000FD15BD47* L_3;
		L_3 = EqualityComparer_1_get_Default_mFC11E751ABDC51479FADCFFDE7BC0CA498A3416D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_7;
		L_7 = KeyValuePair_2_get_Value_m73D79C3513B3F85604EE011537EFB1F01F5AD4FD_inline((&___0_keyValuePair), NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2< bool, PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55, PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 >::Invoke(8, L_3, L_6, L_7);
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		Il2CppSharedGenericObject* L_9;
		L_9 = KeyValuePair_2_get_Key_mDE6EBB5E13C994979C9F16F6A1185D1719BC2609_inline((&___0_keyValuePair), NULL);
		bool L_10;
		L_10 = Dictionary_2_Remove_m142361FBB854A5E49B418EDBE8A10CF40257429F(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11270
// Method Definition Index: 11271
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA7E583CEF0854C8249304C0D0843651299DD371B_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m756839801A9CE21D7A69DCEBCB5A94CABAB765A1(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 11272
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_mF4F5074A31E53582E6E5B842B71375F3953E32C5_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* V_0 = NULL;
	int32_t V_1 = 0;
	PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	EqualityComparer_1_tAE8B4F16F447C069F655AA64CF2C6000FD15BD47* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_0 = __this->____entries;
		V_0 = L_0;
		goto IL_0049;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55));
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___hashCode;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_tAE8B4F16F447C069F655AA64CF2C6000FD15BD47* L_6;
		L_6 = EqualityComparer_1_get_Default_mFC11E751ABDC51479FADCFFDE7BC0CA498A3416D_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_7 = V_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___value;
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_10 = ___0_value;
		NullCheck(L_6);
		bool L_11;
		L_11 = VirtualFuncInvoker2< bool, PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55, PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 >::Invoke(8, L_6, L_9, L_10);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008b:
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->____count;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_00db:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11273
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_m0EA6E202CDCDD89090685990E9823673387A5656_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = Dictionary_2_get_Count_mB11C9E41ADB94CD4F1E73F487D0E3D9FC6179A83(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___key;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___value;
		KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C L_22;
		memset((&L_22), 0, sizeof(L_22));
		KeyValuePair_2__ctor_mFF7A2DEA079DFBF3188610A432E9C41E648C6431((&L_22), L_18, L_21, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C)L_22);
	}

IL_0071:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0075:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11274
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4FF2773B2EB3C2F00542662CE1B334D4CB93055F Dictionary_2_GetEnumerator_m544E1AA8A7AB691EC26D927457AE1D28644053AC_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t4FF2773B2EB3C2F00542662CE1B334D4CB93055F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFBE71A9FB96AE9B4BB91931E3B63B40398380C0D((&L_0), __this, 2, NULL);
		return L_0;
	}
}
// Method Definition Index: 11275
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m94BCF08082980A779EC14F47606ABE8AC8C2CA54_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t4FF2773B2EB3C2F00542662CE1B334D4CB93055F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFBE71A9FB96AE9B4BB91931E3B63B40398380C0D((&L_0), __this, 2, NULL);
		Enumerator_t4FF2773B2EB3C2F00542662CE1B334D4CB93055F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11276
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m73E796EE7CA2174654E1D5F1298C8C61FBB80B1A_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_6;
		L_6 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 35)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = Dictionary_2_get_Count_mB11C9E41ADB94CD4F1E73F487D0E3D9FC6179A83(__this, NULL);
		KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF* L_15 = (KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF*)(KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF* L_16 = V_0;
		Dictionary_2_CopyTo_m0EA6E202CDCDD89090685990E9823673387A5656(__this, L_16, 0, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 39)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
// Method Definition Index: 11277
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m756839801A9CE21D7A69DCEBCB5A94CABAB765A1_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Il2CppSharedGenericObject* V_6 = NULL;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_7 = NULL;
	int32_t V_8 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_1 = L_1;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_2 = __this->____entries;
		V_2 = L_2;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		if (!L_3)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_4 = __this->____comparer;
		V_4 = L_4;
		RuntimeObject* L_5 = V_4;
		if (L_5)
		{
			goto IL_0110;
		}
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		V_5 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		NullCheck(L_7);
		int32_t L_11 = ((int32_t)(L_8%L_10));
		int32_t L_12 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		il2cpp_codegen_initobj((&V_6), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_13 = V_6;
		if (!L_13)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_14 = V_0;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_15)->max_length),NULL));
		if ((!(((uint32_t)L_14) < ((uint32_t)L_16))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_17 = V_2;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_22 = V_2;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		Il2CppSharedGenericObject* L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___key;
		Il2CppSharedGenericObject* L_25 = ___0_key;
		NullCheck(L_21);
		bool L_26;
		L_26 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_24, L_25);
		if (L_26)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_27 = V_2;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___next;
		V_0 = L_29;
		int32_t L_30 = V_3;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_34;
		L_34 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_7 = L_34;
	}

IL_00c0:
	{
		int32_t L_35 = V_0;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_36)->max_length),NULL));
		if ((!(((uint32_t)L_35) < ((uint32_t)L_37))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_38 = V_2;
		int32_t L_39 = V_0;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___hashCode;
		int32_t L_41 = V_5;
		if ((!(((uint32_t)L_40) == ((uint32_t)L_41))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_42 = V_7;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_43 = V_2;
		int32_t L_44 = V_0;
		NullCheck(L_43);
		Il2CppSharedGenericObject* L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___key;
		Il2CppSharedGenericObject* L_46 = ___0_key;
		NullCheck(L_42);
		bool L_47;
		L_47 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_42, L_45, L_46);
		if (L_47)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_48 = V_2;
		int32_t L_49 = V_0;
		NullCheck(L_48);
		int32_t L_50 = ((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___next;
		V_0 = L_50;
		int32_t L_51 = V_3;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_52 = V_2;
		NullCheck(L_52);
		int32_t L_53 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_52)->max_length),NULL));
		if ((((int32_t)L_51) < ((int32_t)L_53)))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_54 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_55 = V_4;
		Il2CppSharedGenericObject* L_56 = ___0_key;
		NullCheck(L_55);
		int32_t L_57;
		L_57 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_55, L_56);
		V_8 = ((int32_t)(L_57&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_1;
		int32_t L_59 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_1;
		NullCheck(L_60);
		int32_t L_61 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_60)->max_length),NULL));
		NullCheck(L_58);
		int32_t L_62 = ((int32_t)(L_59%L_61));
		int32_t L_63 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_63, 1));
	}

IL_012b:
	{
		int32_t L_64 = V_0;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_65)->max_length),NULL));
		if ((!(((uint32_t)L_64) < ((uint32_t)L_66))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_67 = V_2;
		int32_t L_68 = V_0;
		NullCheck(L_67);
		int32_t L_69 = ((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68)))->___hashCode;
		int32_t L_70 = V_8;
		if ((!(((uint32_t)L_69) == ((uint32_t)L_70))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_71 = V_4;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_72 = V_2;
		int32_t L_73 = V_0;
		NullCheck(L_72);
		Il2CppSharedGenericObject* L_74 = ((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_73)))->___key;
		Il2CppSharedGenericObject* L_75 = ___0_key;
		NullCheck(L_71);
		bool L_76;
		L_76 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_71, L_74, L_75);
		if (L_76)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_77 = V_2;
		int32_t L_78 = V_0;
		NullCheck(L_77);
		int32_t L_79 = ((L_77)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_78)))->___next;
		V_0 = L_79;
		int32_t L_80 = V_3;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_81 = V_2;
		NullCheck(L_81);
		int32_t L_82 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_81)->max_length),NULL));
		if ((((int32_t)L_80) < ((int32_t)L_82)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_83 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_83, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_84 = V_0;
		return L_84;
	}
}
// Method Definition Index: 11278
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m2173A38983FBA0FA8078B9DB9EEA8F54BEE1C3FC_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_5 = (EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7*)(EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 44), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 11279
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m3947B50EA21C490D5ABDF7391DC0695E6AA3F8EE_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, Il2CppSharedGenericObject* ___0_key, PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* V_10 = NULL;
	Il2CppSharedGenericObject* V_11 = NULL;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3;
		L_3 = Dictionary_2_Initialize_m2173A38983FBA0FA8078B9DB9EEA8F54BEE1C3FC(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_002c:
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_4 = __this->____entries;
		V_0 = L_4;
		RuntimeObject* L_5 = __this->____comparer;
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		Il2CppSharedGenericObject* L_8 = ___0_key;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_7, L_8);
		G_B7_0 = L_9;
		goto IL_0053;
	}

IL_0046:
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B7_0 = L_10;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		NullCheck(L_11);
		V_4 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12%L_14)))));
		int32_t* L_15 = V_4;
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(L_15);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		RuntimeObject* L_17 = V_1;
		if (L_17)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_18 = V_11;
		if (!L_18)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_19 = V_5;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		if ((!(((uint32_t)L_19) < ((uint32_t)L_21))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_22 = V_0;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)L_25))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_26;
		L_26 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_27 = V_0;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		Il2CppSharedGenericObject* L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___key;
		Il2CppSharedGenericObject* L_30 = ___0_key;
		NullCheck(L_26);
		bool L_31;
		L_31 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_26, L_29, L_30);
		if (!L_31)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_32 = ___2_behavior;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_33 = V_0;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_35 = ___1_value;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___value = L_35;
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_36 = ___2_behavior;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		Il2CppSharedGenericObject* L_37 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_37, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___next;
		V_5 = L_40;
		int32_t L_41 = V_3;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_42 = V_0;
		NullCheck(L_42);
		int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_45;
		L_45 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_12 = L_45;
	}

IL_0111:
	{
		int32_t L_46 = V_5;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_47 = V_0;
		NullCheck(L_47);
		int32_t L_48 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_47)->max_length),NULL));
		if ((!(((uint32_t)L_46) < ((uint32_t)L_48))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_49 = V_0;
		int32_t L_50 = V_5;
		NullCheck(L_49);
		int32_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___hashCode;
		int32_t L_52 = V_2;
		if ((!(((uint32_t)L_51) == ((uint32_t)L_52))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_53 = V_12;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_54 = V_0;
		int32_t L_55 = V_5;
		NullCheck(L_54);
		Il2CppSharedGenericObject* L_56 = ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55)))->___key;
		Il2CppSharedGenericObject* L_57 = ___0_key;
		NullCheck(L_53);
		bool L_58;
		L_58 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_53, L_56, L_57);
		if (!L_58)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_59 = ___2_behavior;
		if ((!(((uint32_t)L_59) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_60 = V_0;
		int32_t L_61 = V_5;
		NullCheck(L_60);
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_62 = ___1_value;
		((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_61)))->___value = L_62;
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_63 = ___2_behavior;
		if ((!(((uint32_t)L_63) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		Il2CppSharedGenericObject* L_64 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_64, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_65 = V_0;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___next;
		V_5 = L_67;
		int32_t L_68 = V_3;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_69 = V_0;
		NullCheck(L_69);
		int32_t L_70 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_69)->max_length),NULL));
		if ((((int32_t)L_68) < ((int32_t)L_70)))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_71 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_72 = V_5;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_73 = V_0;
		NullCheck(L_73);
		int32_t L_74 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_73)->max_length),NULL));
		if ((!(((uint32_t)L_72) < ((uint32_t)L_74))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_75 = V_0;
		int32_t L_76 = V_5;
		NullCheck(L_75);
		int32_t L_77 = ((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_76)))->___hashCode;
		int32_t L_78 = V_2;
		if ((!(((uint32_t)L_77) == ((uint32_t)L_78))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_79 = V_1;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_80 = V_0;
		int32_t L_81 = V_5;
		NullCheck(L_80);
		Il2CppSharedGenericObject* L_82 = ((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___key;
		Il2CppSharedGenericObject* L_83 = ___0_key;
		NullCheck(L_79);
		bool L_84;
		L_84 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_79, L_82, L_83);
		if (!L_84)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_85 = ___2_behavior;
		if ((!(((uint32_t)L_85) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_86 = V_0;
		int32_t L_87 = V_5;
		NullCheck(L_86);
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_88 = ___1_value;
		((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)))->___value = L_88;
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_89 = ___2_behavior;
		if ((!(((uint32_t)L_89) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		Il2CppSharedGenericObject* L_90 = ___0_key;
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5((RuntimeObject*)L_90, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_91 = V_0;
		int32_t L_92 = V_5;
		NullCheck(L_91);
		int32_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___next;
		V_5 = L_93;
		int32_t L_94 = V_3;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_95 = V_0;
		NullCheck(L_95);
		int32_t L_96 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_95)->max_length),NULL));
		if ((((int32_t)L_94) < ((int32_t)L_96)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_97 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_97, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_98 = __this->____freeCount;
		if ((((int32_t)L_98) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_99 = __this->____freeList;
		V_8 = L_99;
		V_7 = (bool)1;
		int32_t L_100 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_100, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_101 = __this->____count;
		V_13 = L_101;
		int32_t L_102 = V_13;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_103 = V_0;
		NullCheck(L_103);
		int32_t L_104 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_103)->max_length),NULL));
		if ((!(((uint32_t)L_102) == ((uint32_t)L_104))))
		{
			goto IL_023b;
		}
	}
	{
		Dictionary_2_Resize_m67B7CFF00A3B25945A499DF62E0CF4E6DF1918BB(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_105 = V_13;
		V_8 = L_105;
		int32_t L_106 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_106, 1));
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_107 = __this->____entries;
		V_0 = L_107;
	}

IL_0250:
	{
		bool L_108 = V_6;
		if (L_108)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_109 = V_4;
		G_B51_0 = L_109;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____buckets;
		int32_t L_111 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_112 = __this->____buckets;
		NullCheck(L_112);
		int32_t L_113 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_112)->max_length),NULL));
		NullCheck(L_110);
		G_B51_0 = ((L_110)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_111%L_113)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_114 = V_0;
		int32_t L_115 = V_8;
		NullCheck(L_114);
		V_10 = ((L_114)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_115)));
		bool L_116 = V_7;
		if (!L_116)
		{
			goto IL_028a;
		}
	}
	{
		Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* L_117 = V_10;
		int32_t L_118 = L_117->___next;
		__this->____freeList = L_118;
	}

IL_028a:
	{
		Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* L_119 = V_10;
		int32_t L_120 = V_2;
		L_119->___hashCode = L_120;
		Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* L_121 = V_10;
		int32_t* L_122 = V_9;
		int32_t L_123 = il2cpp_codegen_ldind<int32_t, int32_t>(L_122);
		L_121->___next = ((int32_t)il2cpp_codegen_subtract(L_123, 1));
		Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* L_124 = V_10;
		Il2CppSharedGenericObject* L_125 = ___0_key;
		L_124->___key = L_125;
		Il2CppCodeGenWriteBarrier((void**)(&L_124->___key), (void*)L_125);
		Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* L_126 = V_10;
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_127 = ___1_value;
		L_126->___value = L_127;
		int32_t* L_128 = V_9;
		int32_t L_129 = V_8;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_128, (int32_t)((int32_t)il2cpp_codegen_add(L_129, 1)));
		return (bool)1;
	}
}
// Method Definition Index: 11280
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mEF2C025885A8D779E60D73CC5AC95C95A843587A_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF* V_3 = NULL;
	int32_t V_4 = 0;
	{
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 35)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = Dictionary_2_Initialize_m2173A38983FBA0FA8078B9DB9EEA8F54BEE1C3FC(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 39)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF*)CastclassSealed((RuntimeObject*)L_17, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37)));
		KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Il2CppSharedGenericObject* L_21;
		L_21 = KeyValuePair_2_get_Key_mDE6EBB5E13C994979C9F16F6A1185D1719BC2609_inline(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), NULL);
		if (L_21)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF* L_22 = V_3;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Il2CppSharedGenericObject* L_24;
		L_24 = KeyValuePair_2_get_Key_mDE6EBB5E13C994979C9F16F6A1185D1719BC2609_inline(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), NULL);
		KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF* L_25 = V_3;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_27;
		L_27 = KeyValuePair_2_get_Value_m73D79C3513B3F85604EE011537EFB1F01F5AD4FD_inline(((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), NULL);
		Dictionary_2_Add_m84B2C31E46D1B34FD994AC15857C2F524CD35723(__this, L_24, L_27, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00c0:
	{
		int32_t L_29 = V_4;
		KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF* L_30 = V_3;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_32 = V_1;
		__this->____version = L_32;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_33;
		L_33 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_33, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 11281
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m67B7CFF00A3B25945A499DF62E0CF4E6DF1918BB_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		Dictionary_2_Resize_m31E09E2EEED0C2BEE644E149ACC367CB8B9FB9D2(__this, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46));
		return;
	}
}
// Method Definition Index: 11282
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m31E09E2EEED0C2BEE644E149ACC367CB8B9FB9D2_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppSharedGenericObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_3 = (EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7*)(EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_5 = __this->____entries;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_8 = V_3;
		bool L_9 = ___1_forceNewHashCodes;
		if (!((int32_t)(((((RuntimeObject*)(Il2CppSharedGenericObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_10 = V_1;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_13 = V_1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		Il2CppSharedGenericObject** L_17 = (Il2CppSharedGenericObject**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___key);
		NullCheck((RuntimeObject*)(*L_17));
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(*L_17));
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___hashCode = ((int32_t)(L_18&((int32_t)2147483647LL)));
	}

IL_0079:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_007f:
	{
		int32_t L_20 = V_4;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_22 = V_1;
		int32_t L_23 = V_5;
		NullCheck(L_22);
		int32_t L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___hashCode;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_25 = V_1;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___hashCode;
		int32_t L_28 = ___0_newSize;
		V_6 = ((int32_t)(L_27%L_28));
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___next = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_0;
		int32_t L_36 = V_6;
		int32_t L_37 = V_5;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1)));
	}

IL_00c5:
	{
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00cb:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_0;
		__this->____buckets = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_41);
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_42 = V_1;
		__this->____entries = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_42);
		return;
	}
}
// Method Definition Index: 11283
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m142361FBB854A5E49B418EDBE8A10CF40257429F_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Il2CppSharedGenericObject* L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* L_22 = V_4;
		Il2CppSharedGenericObject* L_23 = L_22->___key;
		Il2CppSharedGenericObject* L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* L_26 = V_4;
		Il2CppSharedGenericObject* L_27 = L_26->___key;
		Il2CppSharedGenericObject* L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* L_39 = V_4;
		L_39->___hashCode = (-1);
		Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* L_40 = V_4;
		int32_t L_41 = __this->____freeList;
		L_40->___next = L_41;
	}
	{
		Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* L_42 = V_4;
		Il2CppSharedGenericObject** L_43 = (Il2CppSharedGenericObject**)(&L_42->___key);
		il2cpp_codegen_initobj(L_43, sizeof(Il2CppSharedGenericObject*));
	}

IL_00ff:
	{
		goto IL_0113;
	}

IL_0113:
	{
		int32_t L_44 = V_3;
		__this->____freeList = L_44;
		int32_t L_45 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_46, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_47 = V_3;
		V_2 = L_47;
		Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* L_48 = V_4;
		int32_t L_49 = L_48->___next;
		V_3 = L_49;
	}

IL_0142:
	{
		int32_t L_50 = V_3;
		if ((((int32_t)L_50) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11284
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m4DE5AD2C6647F13247B26AFDFBD94188C35B8A7B_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, Il2CppSharedGenericObject* ___0_key, PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		if (!L_1)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_2 = __this->____comparer;
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0032;
		}
		G_B4_0 = L_3;
	}
	{
		NullCheck((RuntimeObject*)(___0_key));
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)(___0_key));
		G_B6_0 = L_4;
		goto IL_0038;
	}

IL_0032:
	{
		Il2CppSharedGenericObject* L_5 = ___0_key;
		NullCheck(G_B5_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, Il2CppSharedGenericObject* >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B5_0, L_5);
		G_B6_0 = L_6;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_1 = ((int32_t)(L_7%L_9));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_14 = __this->____entries;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		V_4 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* L_16 = V_4;
		int32_t L_17 = L_16->___hashCode;
		int32_t L_18 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_19 = __this->____comparer;
		RuntimeObject* L_20 = L_19;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_0095;
		}
		G_B9_0 = L_20;
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_21;
		L_21 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* L_22 = V_4;
		Il2CppSharedGenericObject* L_23 = L_22->___key;
		Il2CppSharedGenericObject* L_24 = ___0_key;
		NullCheck(L_21);
		bool L_25;
		L_25 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_21, L_23, L_24);
		G_B11_0 = L_25;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* L_26 = V_4;
		Il2CppSharedGenericObject* L_27 = L_26->___key;
		Il2CppSharedGenericObject* L_28 = ___0_key;
		NullCheck(G_B10_0);
		bool L_29;
		L_29 = InterfaceFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B10_0, L_27, L_28);
		G_B11_0 = L_29;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_30 = V_2;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		int32_t L_32 = V_1;
		Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* L_33 = V_4;
		int32_t L_34 = L_33->___next;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)il2cpp_codegen_add(L_34, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_35 = __this->____entries;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* L_37 = V_4;
		int32_t L_38 = L_37->___next;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___next = L_38;
	}

IL_00d6:
	{
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55* L_39 = ___1_value;
		Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* L_40 = V_4;
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_41 = L_40->___value;
		*(PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55*)L_39 = L_41;
		Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* L_42 = V_4;
		L_42->___hashCode = (-1);
		Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* L_43 = V_4;
		int32_t L_44 = __this->____freeList;
		L_43->___next = L_44;
	}
	{
		Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* L_45 = V_4;
		Il2CppSharedGenericObject** L_46 = (Il2CppSharedGenericObject**)(&L_45->___key);
		il2cpp_codegen_initobj(L_46, sizeof(Il2CppSharedGenericObject*));
	}

IL_010c:
	{
		goto IL_0120;
	}

IL_0120:
	{
		int32_t L_47 = V_3;
		__this->____freeList = L_47;
		int32_t L_48 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_50 = V_3;
		V_2 = L_50;
		Entry_t1E80F6C09645E5C40641EFBC255D65CF1F5406BC* L_51 = V_4;
		int32_t L_52 = L_51->___next;
		V_3 = L_52;
	}

IL_014f:
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55* L_54 = ___1_value;
		il2cpp_codegen_initobj(L_54, sizeof(PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55));
		return (bool)0;
	}
}
// Method Definition Index: 11285
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m6B4806511810B7A0606D6E33A591A3206D8271F4_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, Il2CppSharedGenericObject* ___0_key, PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		int32_t L_1;
		L_1 = Dictionary_2_FindEntry_m756839801A9CE21D7A69DCEBCB5A94CABAB765A1(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55* L_3 = ___1_value;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___value;
		*(PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55*)L_3 = L_6;
		return (bool)1;
	}

IL_0025:
	{
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, sizeof(PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55));
		return (bool)0;
	}
}
// Method Definition Index: 11286
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_mB9AC4C08ED70BF2B99488F0C26A57F996B3E5D5B_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, Il2CppSharedGenericObject* ___0_key, PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_key;
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_1 = ___1_value;
		bool L_2;
		L_2 = Dictionary_2_TryInsert_m3947B50EA21C490D5ABDF7391DC0695E6AA3F8EE(__this, L_0, L_1, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		return L_2;
	}
}
// Method Definition Index: 11287
// Method Definition Index: 11288
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3A0AC2D7DC151ADD8FDCB2CFDE0E8EBFDA14E2F1_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		Dictionary_2_CopyTo_m0EA6E202CDCDD89090685990E9823673387A5656(__this, L_0, L_1, NULL);
		return;
	}
}
// Method Definition Index: 11289
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_m45A332F2A56303B0B29A38764B626F5980CC8334_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = Dictionary_2_get_Count_mB11C9E41ADB94CD4F1E73F487D0E3D9FC6179A83(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF*)IsInstSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37)));
		KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_tE112A8B6424FA1ED3DD42363D2A816683A6160EF* L_14 = V_0;
		int32_t L_15 = ___1_index;
		Dictionary_2_CopyTo_m0EA6E202CDCDD89090685990E9823673387A5656(__this, L_14, L_15, NULL);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___hashCode;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Il2CppSharedGenericObject* L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___key;
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_28 = V_2;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___value;
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), &L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), (RuntimeObject*)L_27, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode;
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			Il2CppSharedGenericObject* L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___key;
			EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_52 = ((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51)))->___value;
			KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C L_53;
			memset((&L_53), 0, sizeof(L_53));
			KeyValuePair_2__ctor_mFF7A2DEA079DFBF3188610A432E9C41E648C6431((&L_53), L_49, L_52, NULL);
			KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C L_54 = L_53;
			RuntimeObject* L_55 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19), &L_54);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_55);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_55);
		}

IL_012a_1:
		{
			int32_t L_56 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		}

IL_0130_1:
		{
			int32_t L_57 = V_7;
			int32_t L_58 = V_5;
			if ((((int32_t)L_57) < ((int32_t)L_58)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_59 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
// Method Definition Index: 11290
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_mAC9578B8667F2FD9BC87D68F9AE21631607E5384_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t4FF2773B2EB3C2F00542662CE1B334D4CB93055F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFBE71A9FB96AE9B4BB91931E3B63B40398380C0D((&L_0), __this, 2, NULL);
		Enumerator_t4FF2773B2EB3C2F00542662CE1B334D4CB93055F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11291
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m5B500256E4EF0B35E94E28BA52E29D2F0ACAF91C_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = Dictionary_2_Initialize_m2173A38983FBA0FA8078B9DB9EEA8F54BEE1C3FC(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		Dictionary_2_Resize_m31E09E2EEED0C2BEE644E149ACC367CB8B9FB9D2(__this, L_12, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46));
		int32_t L_13 = V_1;
		return L_13;
	}
}
// Method Definition Index: 11292
// Method Definition Index: 11293
// Method Definition Index: 11294
// Method Definition Index: 11295
// Method Definition Index: 11296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m74A33BFBF11AB3CB9D080E98B23B0A3F2B784F21_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_tDDC92BC5522FB87485368E61B8DE31D7A29A9E14* L_0;
		L_0 = Dictionary_2_get_Keys_mAB2E0586FB36EA7BCC55C4EB76EB9B73C09886B6(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_m34A04DC1679D9DDCDA1206E9A80C4F6DDCBA3FE5_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_t913C7FDC829EFFA2FD9D38CDD1D9621FD97C3999* L_0;
		L_0 = Dictionary_2_get_Values_mD79B71FF05F87047C3E201657004D5C7648B02BD(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 50));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_m52F2E0BA26E4597B87E40480A478F984285E0F8F_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mD84AE664F3F606FD24A6EBEF4D9659BC4CF5D564(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		int32_t L_3;
		L_3 = Dictionary_2_FindEntry_m756839801A9CE21D7A69DCEBCB5A94CABAB765A1(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27));
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_t7AEFA97F271BF9BDC7E00B5C8A0202904D491CE7* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), &L_8);
		return L_9;
	}

IL_0030:
	{
		return NULL;
	}
}
// Method Definition Index: 11299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_mE712EFB3DA874EFBAC5E698693D9A8623EA89B5D_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55_mD4A68170D902375602302A675425D4FCD4AE38A5(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)));
		}
		try
		{
			Il2CppSharedGenericObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_set_Item_m696D60B08100005DA90FC0604C779FA900ECB6D9(__this, L_3, ((*(PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55*)UnBox(L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 53));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 54)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 55)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 11300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mD84AE664F3F606FD24A6EBEF4D9659BC4CF5D564_gshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(Il2CppSharedGenericObject*)((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 11301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_m0DD5A28346DB7D7D957EDDBAC6379E10785B2708_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55_mD4A68170D902375602302A675425D4FCD4AE38A5(L_1, ((int32_t)15), NULL);
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			V_0 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)));
		}
		try
		{
			Il2CppSharedGenericObject* L_3 = V_0;
			RuntimeObject* L_4 = ___1_value;
			Dictionary_2_Add_m84B2C31E46D1B34FD994AC15857C2F524CD35723(__this, L_3, ((*(PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55*)UnBox(L_4, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_6 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 54)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_8;
			L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_6, L_8, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_10 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 55)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_10, L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 11302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_mEE3AA614224198C0D683EEECE899DCA98DDD18DA_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mD84AE664F3F606FD24A6EBEF4D9659BC4CF5D564(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mA7E583CEF0854C8249304C0D0843651299DD371B(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m752A4264EF101C20AA4D043F7BD11ED2D3A063B0_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t4FF2773B2EB3C2F00542662CE1B334D4CB93055F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFBE71A9FB96AE9B4BB91931E3B63B40398380C0D((&L_0), __this, 1, NULL);
		Enumerator_t4FF2773B2EB3C2F00542662CE1B334D4CB93055F L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11304
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_m45EDF8AF7B9158C4A1F25EAE63264E7D6BE9BF1B_gshared (Dictionary_2_tCB00E526F17F6E10270C31D87A3F0CDD163814D6* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = Dictionary_2_IsCompatibleKey_mD84AE664F3F606FD24A6EBEF4D9659BC4CF5D564(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		bool L_3;
		L_3 = Dictionary_2_Remove_m142361FBB854A5E49B418EDBE8A10CF40257429F(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
	}

IL_0015:
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
// Method Definition Index: 11248
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(__this, 0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11249
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA5BF8973642D67EF56303F2867C75190756C3012_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11250
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m244D396B16E7F73DE815F4FFA6F35DD89B6ED7CB_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_comparer;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(__this, 0, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11251
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC4C1AFB623AE154F67437E7FC549449FF598526_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_0011:
	{
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___0_capacity;
		int32_t L_3;
		L_3 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(__this, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_001d:
	{
		RuntimeObject* L_4 = ___1_comparer;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_5;
		L_5 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		if ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC*)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = ___1_comparer;
		__this->____comparer = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_6);
	}

IL_002c:
	{
		return;
	}
}
// Method Definition Index: 11252
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3CE78C81B3C997FF9C14675CFBBAD014EF68FE30_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_dictionary;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
// Method Definition Index: 11253
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6ACB9814B7776CA335920BD99E9C6149B361D703_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_dictionary, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_30 = L_17;
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_31 = L_20;
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_29 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_4 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	memset(V_4, 0, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* G_B2_0 = NULL;
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_dictionary;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0007;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_0007:
	{
		RuntimeObject* L_1 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___1_comparer;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_dictionary;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(1, NULL);
	}

IL_001c:
	{
		RuntimeObject* L_5 = ___0_dictionary;
		void* L_6 = il2cpp_codegen_object_get_class(L_5);
		bool L_7 = (il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) == (L_6);
		if (!L_7)
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_8 = ___0_dictionary;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_9 = ((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)CastclassClass((RuntimeObject*)L_8, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)));
		NullCheck(L_9);
		int32_t L_10 = L_9->____count;
		V_0 = L_10;
		NullCheck(L_9);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_11 = L_9->____entries;
		V_1 = L_11;
		V_2 = 0;
		goto IL_007b;
	}

IL_004a:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		il2cpp_codegen_memcpy(L_20, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_17: *(void**)L_17), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_20: *(void**)L_20));
	}

IL_0077:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_007b:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_0080:
	{
		RuntimeObject* L_24 = ___0_dictionary;
		NullCheck((RuntimeObject*)L_24);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), (RuntimeObject*)L_24);
		V_3 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00af:
			{
				{
					RuntimeObject* L_26 = V_3;
					if (!L_26)
					{
						goto IL_00b8;
					}
				}
				{
					RuntimeObject* L_27 = V_3;
					NullCheck((RuntimeObject*)L_27);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_27);
				}

IL_00b8:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00a5_1;
			}

IL_0089_1:
			{
				RuntimeObject* L_28 = V_3;
				NullCheck(L_28);
				InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_28, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_29);
				il2cpp_codegen_memcpy(V_4, L_29, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_4, (Il2CppFullySharedGenericAny*)L_30);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_4, (Il2CppFullySharedGenericAny*)L_31);
				InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_30: *(void**)L_30), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_31: *(void**)L_31));
			}

IL_00a5_1:
			{
				RuntimeObject* L_32 = V_3;
				NullCheck((RuntimeObject*)L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
				if (L_33)
				{
					goto IL_0089_1;
				}
			}
			{
				goto IL_00b9;
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

IL_00b9:
	{
		return;
	}
}
// Method Definition Index: 11254
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC5A29C46C38B74A66668293183E0C1CD26D1FC43_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_collection;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22)))(__this, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22));
		return;
	}
}
// Method Definition Index: 11255
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m43BA1CB1B5D6BADC60957F6EF2D7037449D0285F_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_10 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_1 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	memset(V_1, 0, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	RuntimeObject* G_B2_0 = NULL;
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* G_B2_1 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_collection;
		RuntimeObject* L_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)));
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000e;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_1;
		goto IL_0013;
	}

IL_000e:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 4), G_B2_0);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_1;
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___1_comparer;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(G_B3_1, G_B3_0, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		RuntimeObject* L_4 = ___0_collection;
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(6, NULL);
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___0_collection;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 15), L_5);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{
				{
					RuntimeObject* L_7 = V_0;
					if (!L_7)
					{
						goto IL_0059;
					}
				}
				{
					RuntimeObject* L_8 = V_0;
					NullCheck((RuntimeObject*)L_8);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_8);
				}

IL_0059:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0046_1;
			}

IL_002b_1:
			{
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 17), L_9, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_10);
				il2cpp_codegen_memcpy(V_1, L_10, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_1, (Il2CppFullySharedGenericAny*)L_11);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_1, (Il2CppFullySharedGenericAny*)L_12);
				InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_12: *(void**)L_12));
			}

IL_0046_1:
			{
				RuntimeObject* L_13 = V_0;
				NullCheck((RuntimeObject*)L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
				if (L_14)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_005a;
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

IL_005a:
	{
		return;
	}
}
// Method Definition Index: 11256
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA25D4973BD5467E89BE578B96BE246DE27E51638_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		NullCheck(L_0);
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, (RuntimeObject*)__this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 11257
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____count;
		int32_t L_1 = __this->____freeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// Method Definition Index: 11258
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* Dictionary_2_get_Keys_mD82D6690B1A801E8EED43F1B1D310893C9D334CF_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_1 = (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		((  void (*) (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24)))(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_2 = __this->____keys;
		return L_2;
	}
}
// Method Definition Index: 11259
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mBE37F43780B97B9F8911558CF1758A6E0573F81A_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_1 = (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		((  void (*) (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24)))(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11260
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m54CEDB15B3DA15F3A985D20BF0F6499000129694_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_0 = __this->____keys;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_1 = (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		((  void (*) (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24)))(L_1, __this, NULL);
		__this->____keys = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keys), (void*)L_1);
	}

IL_0014:
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_2 = __this->____keys;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11261
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* Dictionary_2_get_Values_mE06FB7381D8152E35F0716DC7FE13788362112A7_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_1 = (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		((  void (*) (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26)))(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_2 = __this->____values;
		return L_2;
	}
}
// Method Definition Index: 11262
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m83C40C3BF1DFD21198ED5D890CD53F2B726FFF78_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_1 = (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		((  void (*) (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26)))(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11263
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_mD64788819D907210E440B397DF7945D6408726D4_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_0 = __this->____values;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_1 = (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 25));
		((  void (*) (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26)))(L_1, __this, NULL);
		__this->____values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____values), (void*)L_1);
	}

IL_0014:
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_2 = __this->____values;
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11264
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_6 = L_0;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	memset(V_1, 0, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = __this->____entries;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return;
	}

IL_001e:
	{
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), L_6);
		ThrowHelper_ThrowKeyNotFoundException_m6A17735FA486AD43F2488DE39B755AC60BC99CE7(L_7, NULL);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return;
	}
}
// Method Definition Index: 11265
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2;
		L_2 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, uint8_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_1: *(void**)L_1), 1);
		return;
	}
}
// Method Definition Index: 11266
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2;
		L_2 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, uint8_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_1: *(void**)L_1), 2);
		return;
	}
}
// Method Definition Index: 11267
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_mE4548F09815541C77E85AB57B86142B7D29C0A2F_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	//<source_info:<no-source>:1>
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_1);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_1: *(void**)L_1));
		return;
	}
}
// Method Definition Index: 11268
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8A8F4B72BD2ED0C4171B69CDDB4F9201FAD62FB5_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_7);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11269
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m47F4CC635C14FD742D41145FEAECD47FF3EC7910_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_7);
		NullCheck(L_3);
		bool L_8;
		L_8 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_9);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_9: *(void**)L_9));
		return (bool)1;
	}

IL_0046:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11270
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		NullCheck(L_3);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, L_4, NULL);
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____freeCount = 0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = __this->____entries;
		int32_t L_6 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_0041:
	{
		int32_t L_7 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
// Method Definition Index: 11271
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_0: *(void**)L_0));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 11272
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m6DD06FB7A6641F460E175909EE58B3E7EF585F46_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_8 = L_1;
	const Il2CppFullySharedGenericAny L_13 = L_1;
	const Il2CppFullySharedGenericAny L_21 = L_1;
	const Il2CppFullySharedGenericAny L_34 = L_1;
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_35 = L_22;
	//<source_info:<no-source>:1>
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	memset(V_2, 0, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	int32_t V_3 = 0;
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_4 = NULL;
	int32_t V_5 = 0;
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_0 = __this->____entries;
		V_0 = L_0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_value : &___0_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), L_1);
		if (L_2)
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0013:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_9 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), L_8);
		if (L_9)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)1;
	}

IL_0037:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003b:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = __this->____count;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_00db;
	}

IL_0049:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_13, V_2, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), L_13);
		if (!L_14)
		{
			goto IL_0096;
		}
	}
	{
		V_3 = 0;
		goto IL_008b;
	}

IL_005d:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_15 = V_0;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		int32_t L_17 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_18;
		L_18 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_19 = V_0;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_value : &___0_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		NullCheck(L_18);
		bool L_23;
		L_23 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_21: *(void**)L_21), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_22: *(void**)L_22));
		if (!L_23)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)1;
	}

IL_0087:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_008b:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = __this->____count;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_27;
		L_27 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		V_4 = L_27;
		V_5 = 0;
		goto IL_00d1;
	}

IL_00a2:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_28 = V_0;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
		if ((((int32_t)L_30) < ((int32_t)0)))
		{
			goto IL_00cb;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_31 = V_4;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_32 = V_0;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		il2cpp_codegen_memcpy(L_34, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy(L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___0_value : &___0_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		NullCheck(L_31);
		bool L_36;
		L_36 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_34: *(void**)L_34), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_35: *(void**)L_35));
		if (!L_36)
		{
			goto IL_00cb;
		}
	}
	{
		return (bool)1;
	}

IL_00cb:
	{
		int32_t L_37 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00d1:
	{
		int32_t L_38 = V_5;
		int32_t L_39 = __this->____count;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_00a2;
		}
	}

IL_00db:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11273
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_CopyTo_mCE58585215D412BBED56819DD8E7EFFCE8661BA1_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const uint32_t SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19));
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_24 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_1 = NULL;
	int32_t V_2 = 0;
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		if ((!(((uint32_t)L_1) > ((uint32_t)L_3))))
		{
			goto IL_0014;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0014:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 31)))(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0027:
	{
		int32_t L_8 = __this->____count;
		V_0 = L_8;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_9 = __this->____entries;
		V_1 = L_9;
		V_2 = 0;
		goto IL_0075;
	}

IL_0039:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_13 = ___0_array;
		int32_t L_14 = ___1_index;
		int32_t L_15 = L_14;
		___1_index = ((int32_t)il2cpp_codegen_add(L_15, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_19 = V_1;
		int32_t L_20 = V_2;
		NullCheck(L_19);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		memset(L_24, 0, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? il2cpp_codegen_memcpy(L_22, L_18, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_18), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? il2cpp_codegen_memcpy(L_23, L_21, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE): *(void**)L_21), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
		NullCheck(L_13);
		il2cpp_codegen_memcpy((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), L_24, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19), (void**)(L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), (void*)L_24);
	}

IL_0071:
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0075:
	{
		int32_t L_26 = V_2;
		int32_t L_27 = V_0;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 11274
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	//<source_info:<no-source>:1>
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		return;
	}
}
// Method Definition Index: 11275
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_mEB946BF1ED512ADDA66E4AC30F34573170773B8E_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	//<source_info:<no-source>:1>
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), L_0);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 11276
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetObjectData_m3683CF1DF17605C3CBFEB3DEC2D3C7D619DB1C06_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_2 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_1 = NULL;
	int32_t G_B7_0 = 0;
	String_t* G_B7_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B7_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(4, NULL);
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___0_info;
		int32_t L_2 = __this->____version;
		NullCheck(L_1);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_1, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_2, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = ___0_info;
		RuntimeObject* L_4 = __this->____comparer;
		RuntimeObject* L_5 = L_4;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
			G_B4_2 = L_3;
			goto IL_002f;
		}
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
		G_B3_2 = L_3;
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_6;
		L_6 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		G_B4_0 = ((RuntimeObject*)(L_6));
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 35)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(G_B4_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(G_B4_2, G_B4_1, (RuntimeObject*)G_B4_0, L_8, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		if (!L_10)
		{
			G_B6_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
			G_B6_1 = L_9;
			goto IL_0056;
		}
		G_B5_0 = _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69;
		G_B5_1 = L_9;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		NullCheck(L_11);
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0057;
	}

IL_0056:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0057:
	{
		NullCheck(G_B7_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B7_2, G_B7_1, G_B7_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_14;
		L_14 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 31)))(__this, NULL);
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_15 = (KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)(KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37), (uint32_t)L_14);
		V_0 = L_15;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_16 = V_0;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38)))(__this, L_16, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_17 = ___0_info;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 39)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_17);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_17, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, (RuntimeObject*)L_18, L_20, NULL);
	}

IL_008e:
	{
		return;
	}
}
// Method Definition Index: 11277
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_FindEntry_m0ACF21DFA8D126AC00883594A96B45296ABDE79A_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_18 = L_0;
	const Il2CppFullySharedGenericAny L_30 = L_0;
	const Il2CppFullySharedGenericAny L_51 = L_0;
	const Il2CppFullySharedGenericAny L_62 = L_0;
	const Il2CppFullySharedGenericAny L_80 = L_0;
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_52 = L_31;
	const Il2CppFullySharedGenericAny L_81 = L_31;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_6, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_7 = NULL;
	int32_t V_8 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		V_0 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		V_1 = L_2;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = __this->____entries;
		V_2 = L_3;
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0175;
		}
	}
	{
		RuntimeObject* L_5 = __this->____comparer;
		V_4 = L_5;
		RuntimeObject* L_6 = V_4;
		if (L_6)
		{
			goto IL_0110;
		}
	}
	{
		Il2CppConstrainedCallData L_8;
		Il2CppMethodPointer L_9 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), &L_8, L_7);
		typedef int32_t ( *func_L_10)(void*,const RuntimeMethod*);
		int32_t L_11 = ((func_L_10)L_9)(L_8.thisPtr,L_8.method);
		V_5 = ((int32_t)(L_11&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_1;
		int32_t L_13 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		NullCheck(L_12);
		int32_t L_16 = ((int32_t)(L_13%L_15));
		int32_t L_17 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_6, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_18, V_6, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_19 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), L_18);
		if (!L_19)
		{
			goto IL_00b9;
		}
	}

IL_0066:
	{
		int32_t L_20 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		if ((!(((uint32_t)L_20) < ((uint32_t)L_22))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_23 = V_2;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		int32_t L_25 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
		int32_t L_26 = V_5;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_009b;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_27;
		L_27 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_28 = V_2;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		il2cpp_codegen_memcpy(L_30, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_31, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_27);
		bool L_32;
		L_32 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_30: *(void**)L_30), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_31: *(void**)L_31));
		if (L_32)
		{
			goto IL_0175;
		}
	}

IL_009b:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_33 = V_2;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		int32_t L_35 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 41));
		V_0 = L_35;
		int32_t L_36 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_37 = V_2;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		if ((((int32_t)L_36) < ((int32_t)L_38)))
		{
			goto IL_00b3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_00b3:
	{
		int32_t L_39 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		goto IL_0066;
	}

IL_00b9:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_40;
		L_40 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_7 = L_40;
	}

IL_00c0:
	{
		int32_t L_41 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_42 = V_2;
		NullCheck(L_42);
		int32_t L_43 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_42)->max_length),NULL));
		if ((!(((uint32_t)L_41) < ((uint32_t)L_43))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_44 = V_2;
		int32_t L_45 = V_0;
		NullCheck(L_44);
		int32_t L_46 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
		int32_t L_47 = V_5;
		if ((!(((uint32_t)L_46) == ((uint32_t)L_47))))
		{
			goto IL_00f2;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_48 = V_7;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_49 = V_2;
		int32_t L_50 = V_0;
		NullCheck(L_49);
		il2cpp_codegen_memcpy(L_51, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_52, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_48);
		bool L_53;
		L_53 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_48, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_51: *(void**)L_51), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_52: *(void**)L_52));
		if (L_53)
		{
			goto IL_0175;
		}
	}

IL_00f2:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_54 = V_2;
		int32_t L_55 = V_0;
		NullCheck(L_54);
		int32_t L_56 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 41));
		V_0 = L_56;
		int32_t L_57 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_58 = V_2;
		NullCheck(L_58);
		int32_t L_59 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_58)->max_length),NULL));
		if ((((int32_t)L_57) < ((int32_t)L_59)))
		{
			goto IL_010a;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_010a:
	{
		int32_t L_60 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_60, 1));
		goto IL_00c0;
	}

IL_0110:
	{
		RuntimeObject* L_61 = V_4;
		il2cpp_codegen_memcpy(L_62, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_61);
		int32_t L_63;
		L_63 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_61, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_62: *(void**)L_62));
		V_8 = ((int32_t)(L_63&((int32_t)2147483647LL)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = V_1;
		int32_t L_65 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = V_1;
		NullCheck(L_66);
		int32_t L_67 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_66)->max_length),NULL));
		NullCheck(L_64);
		int32_t L_68 = ((int32_t)(L_65%L_67));
		int32_t L_69 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_69, 1));
	}

IL_012b:
	{
		int32_t L_70 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_71 = V_2;
		NullCheck(L_71);
		int32_t L_72 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_71)->max_length),NULL));
		if ((!(((uint32_t)L_70) < ((uint32_t)L_72))))
		{
			goto IL_0175;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_73 = V_2;
		int32_t L_74 = V_0;
		NullCheck(L_73);
		int32_t L_75 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
		int32_t L_76 = V_8;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_0157;
		}
	}
	{
		RuntimeObject* L_77 = V_4;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_78 = V_2;
		int32_t L_79 = V_0;
		NullCheck(L_78);
		il2cpp_codegen_memcpy(L_80, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_81, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_77);
		bool L_82;
		L_82 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_77, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_80: *(void**)L_80), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_81: *(void**)L_81));
		if (L_82)
		{
			goto IL_0175;
		}
	}

IL_0157:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_83 = V_2;
		int32_t L_84 = V_0;
		NullCheck(L_83);
		int32_t L_85 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_83)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_84))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 41));
		V_0 = L_85;
		int32_t L_86 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_87 = V_2;
		NullCheck(L_87);
		int32_t L_88 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_87)->max_length),NULL));
		if ((((int32_t)L_86) < ((int32_t)L_88)))
		{
			goto IL_016f;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_016f:
	{
		int32_t L_89 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_89, 1));
		goto IL_012b;
	}

IL_0175:
	{
		int32_t L_90 = V_0;
		return L_90;
	}
}
// Method Definition Index: 11278
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_Initialize_m5B001E697A07FFFE6B8E587225DADC4951F6D522_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		__this->____freeList = (-1);
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)(EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 44), (uint32_t)L_4);
		__this->____entries = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 11279
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryInsert_m475863DF7C3146B720288A85B96DA3790C484F09_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, uint8_t ___2_behavior, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_23 = L_0;
	const Il2CppFullySharedGenericAny L_35 = L_0;
	const Il2CppFullySharedGenericAny L_43 = L_0;
	const Il2CppFullySharedGenericAny L_63 = L_0;
	const Il2CppFullySharedGenericAny L_71 = L_0;
	const Il2CppFullySharedGenericAny L_90 = L_0;
	const Il2CppFullySharedGenericAny L_98 = L_0;
	const Il2CppFullySharedGenericAny L_134 = L_0;
	const Il2CppFullySharedGenericAny L_36 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_64 = L_36;
	const Il2CppFullySharedGenericAny L_91 = L_36;
	const Il2CppFullySharedGenericAny L_41 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_69 = L_41;
	const Il2CppFullySharedGenericAny L_96 = L_41;
	const Il2CppFullySharedGenericAny L_136 = L_41;
	//<source_info:<no-source>:1>
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t* V_9 = NULL;
	Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* V_10 = NULL;
	Il2CppFullySharedGenericAny V_11 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_11, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t G_B7_0 = 0;
	int32_t* G_B51_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_2, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4;
		L_4 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(__this, 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
	}

IL_002c:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = __this->____entries;
		V_0 = L_5;
		RuntimeObject* L_6 = __this->____comparer;
		V_1 = L_6;
		RuntimeObject* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		RuntimeObject* L_8 = V_1;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_8);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_9: *(void**)L_9));
		G_B7_0 = L_10;
		goto IL_0053;
	}

IL_0046:
	{
		Il2CppConstrainedCallData L_12;
		Il2CppMethodPointer L_13 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), &L_12, L_11);
		typedef int32_t ( *func_L_14)(void*,const RuntimeMethod*);
		int32_t L_15 = ((func_L_14)L_13)(L_12.thisPtr,L_12.method);
		G_B7_0 = L_15;
	}

IL_0053:
	{
		V_2 = ((int32_t)(G_B7_0&((int32_t)2147483647LL)));
		V_3 = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->____buckets;
		int32_t L_17 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->____buckets;
		NullCheck(L_18);
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		NullCheck(L_16);
		V_4 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_17%L_19)))));
		int32_t* L_20 = V_4;
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(L_20);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
		RuntimeObject* L_22 = V_1;
		if (L_22)
		{
			goto IL_0187;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_11, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_23, V_11, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_24 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), L_23);
		if (!L_24)
		{
			goto IL_010a;
		}
	}

IL_0091:
	{
		int32_t L_25 = V_5;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_26)->max_length),NULL));
		if ((!(((uint32_t)L_25) < ((uint32_t)L_27))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_28 = V_0;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
		int32_t L_31 = V_2;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_31))))
		{
			goto IL_00ea;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_32;
		L_32 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_33 = V_0;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		il2cpp_codegen_memcpy(L_35, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_32);
		bool L_37;
		L_37 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_32, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_35: *(void**)L_35), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_36: *(void**)L_36));
		if (!L_37)
		{
			goto IL_00ea;
		}
	}
	{
		uint8_t L_38 = ___2_behavior;
		if ((!(((uint32_t)L_38) == ((uint32_t)1))))
		{
			goto IL_00d9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_39 = V_0;
		int32_t L_40 = V_5;
		NullCheck(L_39);
		il2cpp_codegen_memcpy(L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_field_data<true>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13), L_41, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)1;
	}

IL_00d9:
	{
		uint8_t L_42 = ___2_behavior;
		if ((!(((uint32_t)L_42) == ((uint32_t)2))))
		{
			goto IL_00e8;
		}
	}
	{
		il2cpp_codegen_memcpy(L_43, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), L_43);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_44, NULL);
	}

IL_00e8:
	{
		return (bool)0;
	}

IL_00ea:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_45 = V_0;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 41));
		V_5 = L_47;
		int32_t L_48 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_49 = V_0;
		NullCheck(L_49);
		int32_t L_50 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_49)->max_length),NULL));
		if ((((int32_t)L_48) < ((int32_t)L_50)))
		{
			goto IL_0104;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0104:
	{
		int32_t L_51 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_51, 1));
		goto IL_0091;
	}

IL_010a:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_52;
		L_52 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_12 = L_52;
	}

IL_0111:
	{
		int32_t L_53 = V_5;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_54 = V_0;
		NullCheck(L_54);
		int32_t L_55 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_54)->max_length),NULL));
		if ((!(((uint32_t)L_53) < ((uint32_t)L_55))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_56 = V_0;
		int32_t L_57 = V_5;
		NullCheck(L_56);
		int32_t L_58 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
		int32_t L_59 = V_2;
		if ((!(((uint32_t)L_58) == ((uint32_t)L_59))))
		{
			goto IL_0167;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_60 = V_12;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_61 = V_0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		il2cpp_codegen_memcpy(L_63, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_64, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_60);
		bool L_65;
		L_65 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_60, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_63: *(void**)L_63), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_64: *(void**)L_64));
		if (!L_65)
		{
			goto IL_0167;
		}
	}
	{
		uint8_t L_66 = ___2_behavior;
		if ((!(((uint32_t)L_66) == ((uint32_t)1))))
		{
			goto IL_0156;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_67 = V_0;
		int32_t L_68 = V_5;
		NullCheck(L_67);
		il2cpp_codegen_memcpy(L_69, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_field_data<true>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13), L_69, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)1;
	}

IL_0156:
	{
		uint8_t L_70 = ___2_behavior;
		if ((!(((uint32_t)L_70) == ((uint32_t)2))))
		{
			goto IL_0165;
		}
	}
	{
		il2cpp_codegen_memcpy(L_71, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_72 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), L_71);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_72, NULL);
	}

IL_0165:
	{
		return (bool)0;
	}

IL_0167:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_73 = V_0;
		int32_t L_74 = V_5;
		NullCheck(L_73);
		int32_t L_75 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 41));
		V_5 = L_75;
		int32_t L_76 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_77 = V_0;
		NullCheck(L_77);
		int32_t L_78 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_77)->max_length),NULL));
		if ((((int32_t)L_76) < ((int32_t)L_78)))
		{
			goto IL_0181;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_0181:
	{
		int32_t L_79 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_79, 1));
		goto IL_0111;
	}

IL_0187:
	{
		int32_t L_80 = V_5;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_81 = V_0;
		NullCheck(L_81);
		int32_t L_82 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_81)->max_length),NULL));
		if ((!(((uint32_t)L_80) < ((uint32_t)L_82))))
		{
			goto IL_01f9;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_83 = V_0;
		int32_t L_84 = V_5;
		NullCheck(L_83);
		int32_t L_85 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_83)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_84))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
		int32_t L_86 = V_2;
		if ((!(((uint32_t)L_85) == ((uint32_t)L_86))))
		{
			goto IL_01d9;
		}
	}
	{
		RuntimeObject* L_87 = V_1;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_88 = V_0;
		int32_t L_89 = V_5;
		NullCheck(L_88);
		il2cpp_codegen_memcpy(L_90, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_89))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_91, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_87);
		bool L_92;
		L_92 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), L_87, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_90: *(void**)L_90), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_91: *(void**)L_91));
		if (!L_92)
		{
			goto IL_01d9;
		}
	}
	{
		uint8_t L_93 = ___2_behavior;
		if ((!(((uint32_t)L_93) == ((uint32_t)1))))
		{
			goto IL_01c8;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_94 = V_0;
		int32_t L_95 = V_5;
		NullCheck(L_94);
		il2cpp_codegen_memcpy(L_96, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_field_data<true>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_94)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_95))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13), L_96, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)1;
	}

IL_01c8:
	{
		uint8_t L_97 = ___2_behavior;
		if ((!(((uint32_t)L_97) == ((uint32_t)2))))
		{
			goto IL_01d7;
		}
	}
	{
		il2cpp_codegen_memcpy(L_98, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), L_98);
		ThrowHelper_ThrowAddingDuplicateWithKeyArgumentException_m013C856C16A63018719A6096727CB43E1918CDE5(L_99, NULL);
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_100 = V_0;
		int32_t L_101 = V_5;
		NullCheck(L_100);
		int32_t L_102 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_100)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_101))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 41));
		V_5 = L_102;
		int32_t L_103 = V_3;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_104 = V_0;
		NullCheck(L_104);
		int32_t L_105 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_104)->max_length),NULL));
		if ((((int32_t)L_103) < ((int32_t)L_105)))
		{
			goto IL_01f3;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_ConcurrentOperationsNotSupported_mF8A8EC1112A0933FDC2D1E9DA49C491F4D8797C0(NULL);
	}

IL_01f3:
	{
		int32_t L_106 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_106, 1));
		goto IL_0187;
	}

IL_01f9:
	{
		V_6 = (bool)0;
		V_7 = (bool)0;
		int32_t L_107 = __this->____freeCount;
		if ((((int32_t)L_107) <= ((int32_t)0)))
		{
			goto IL_0223;
		}
	}
	{
		int32_t L_108 = __this->____freeList;
		V_8 = L_108;
		V_7 = (bool)1;
		int32_t L_109 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_subtract(L_109, 1));
		goto IL_0250;
	}

IL_0223:
	{
		int32_t L_110 = __this->____count;
		V_13 = L_110;
		int32_t L_111 = V_13;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_112 = V_0;
		NullCheck(L_112);
		int32_t L_113 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_112)->max_length),NULL));
		if ((!(((uint32_t)L_111) == ((uint32_t)L_113))))
		{
			goto IL_023b;
		}
	}
	{
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 45));
		V_6 = (bool)1;
	}

IL_023b:
	{
		int32_t L_114 = V_13;
		V_8 = L_114;
		int32_t L_115 = V_13;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_115, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_116 = __this->____entries;
		V_0 = L_116;
	}

IL_0250:
	{
		bool L_117 = V_6;
		if (L_117)
		{
			goto IL_0258;
		}
	}
	{
		int32_t* L_118 = V_4;
		G_B51_0 = L_118;
		goto IL_026d;
	}

IL_0258:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_119 = __this->____buckets;
		int32_t L_120 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121 = __this->____buckets;
		NullCheck(L_121);
		int32_t L_122 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_121)->max_length),NULL));
		NullCheck(L_119);
		G_B51_0 = ((L_119)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_120%L_122)))));
	}

IL_026d:
	{
		V_9 = G_B51_0;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_123 = V_0;
		int32_t L_124 = V_8;
		NullCheck(L_123);
		V_10 = ((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_123)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_124)));
		bool L_125 = V_7;
		if (!L_125)
		{
			goto IL_028a;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_126 = V_10;
		int32_t L_127 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_126, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 41));
		__this->____freeList = L_127;
	}

IL_028a:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_128 = V_10;
		int32_t L_129 = V_2;
		il2cpp_codegen_write_field_data<int32_t, false>(L_128, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9), L_129);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_130 = V_10;
		int32_t* L_131 = V_9;
		int32_t L_132 = il2cpp_codegen_ldind<int32_t, int32_t>(L_131);
		il2cpp_codegen_write_field_data<int32_t, false>(L_130, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 41), ((int32_t)il2cpp_codegen_subtract(L_132, 1)));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_133 = V_10;
		il2cpp_codegen_memcpy(L_134, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_write_field_data<true>(L_133, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11), L_134, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_135 = V_10;
		il2cpp_codegen_memcpy(L_136, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_write_field_data<true>(L_135, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8),3), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13), L_136, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		int32_t* L_137 = V_9;
		int32_t L_138 = V_8;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_137, (int32_t)((int32_t)il2cpp_codegen_add(L_138, 1)));
		return (bool)1;
	}
}
// Method Definition Index: 11280
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_OnDeserialization_mCE3F24CD19D6E1AAEE9202CFE6CD1E8DA8821552_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_25 = L_21;
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	//<source_info:<no-source>:1>
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_3 = NULL;
	int32_t V_4 = 0;
	{
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F(L_0, (RuntimeObject*)__this, (&V_0), ConditionalWeakTable_2_TryGetValue_m8AB467BA44D1FF9EBDB9735CED88B0D67AC6403F_RuntimeMethod_var);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_3, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		V_1 = L_4;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_5, _stringLiteral1275D52763CF050C5A4C759818D60119CC35BD69, NULL);
		V_2 = L_6;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_7 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 35)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_7, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_9, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 36))));
		int32_t L_11 = V_2;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(__this, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 39)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		RuntimeObject* L_17;
		L_17 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_14, _stringLiteralCECF2650D3F261EAEF98CF86BF0563F906B4EB7A, L_16, NULL);
		V_3 = ((KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)CastclassSealed((RuntimeObject*)L_17, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37)));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_18 = V_3;
		if (L_18)
		{
			goto IL_007a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)16), NULL);
	}

IL_007a:
	{
		V_4 = 0;
		goto IL_00c0;
	}

IL_007f:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20), ((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), (Il2CppFullySharedGenericAny*)L_21);
		bool L_22 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), L_21);
		if (L_22)
		{
			goto IL_009a;
		}
	}
	{
		ThrowHelper_ThrowSerializationException_m03BE2B48CD3617C32FBCEE16030F7C5563E04E16(((int32_t)17), NULL);
	}

IL_009a:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_23 = V_3;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20), ((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), (Il2CppFullySharedGenericAny*)L_25);
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_26 = V_3;
		int32_t L_27 = V_4;
		NullCheck(L_26);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21), ((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)(L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))), (Il2CppFullySharedGenericAny*)L_28);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_25: *(void**)L_25), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_28: *(void**)L_28));
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00c0:
	{
		int32_t L_30 = V_4;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_31 = V_3;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_007f;
		}
	}
	{
		goto IL_00d0;
	}

IL_00c9:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00d0:
	{
		int32_t L_33 = V_1;
		__this->____version = L_33;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_34;
		L_34 = HashHelpers_get_SerializationInfoTable_m8C17D5483B39B68897AEFFD14A9E139AF858222F(NULL);
		NullCheck(L_34);
		bool L_35;
		L_35 = ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E(L_34, (RuntimeObject*)__this, ConditionalWeakTable_2_Remove_mEA61545EA43662F3718895F4E435A1F3EFB9756E_RuntimeMethod_var);
		return;
	}
}
// Method Definition Index: 11281
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m31D02FB7F34F222948CBAED016A60562ECE1A8D5_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____count;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46)))(__this, L_1, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46));
		return;
	}
}
// Method Definition Index: 11282
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Resize_m2F0D524EB63EBDE00430EA093CADA3AF6FABF4CA_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_newSize, bool ___1_forceNewHashCodes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
	void* L_19 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	//<source_info:<no-source>:1>
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_3, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		int32_t L_0 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_newSize;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_3 = (EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)(EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 44), (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = __this->____count;
		V_2 = L_4;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_5 = __this->____entries;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_6 = V_1;
		int32_t L_7 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_8, V_3, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_9 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), L_8);
		bool L_10 = L_9;
		bool L_11 = ___1_forceNewHashCodes;
		if (!((int32_t)((int32_t)L_10&(int32_t)L_11)))
		{
			goto IL_0084;
		}
	}
	{
		V_4 = 0;
		goto IL_007f;
	}

IL_003e:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_15 = V_1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		Il2CppConstrainedCallData L_20;
		Il2CppMethodPointer L_21 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40), (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11)))), &L_20, L_19);
		typedef int32_t ( *func_L_22)(void*,const RuntimeMethod*);
		int32_t L_23 = ((func_L_22)L_21)(L_20.thisPtr,L_20.method);
		il2cpp_codegen_write_field_data<int32_t, false>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9), ((int32_t)(L_23&((int32_t)2147483647LL))));
	}

IL_0079:
	{
		int32_t L_24 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_007f:
	{
		int32_t L_25 = V_4;
		int32_t L_26 = V_2;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_003e;
		}
	}

IL_0084:
	{
		V_5 = 0;
		goto IL_00cb;
	}

IL_0089:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_27 = V_1;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		int32_t L_29 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00c5;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_30 = V_1;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		int32_t L_32 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
		int32_t L_33 = ___0_newSize;
		V_6 = ((int32_t)(L_32%L_33));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_34 = V_1;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_0;
		int32_t L_37 = V_6;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		int32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		il2cpp_codegen_write_field_data<int32_t, false>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 41), ((int32_t)il2cpp_codegen_subtract(L_39, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_0;
		int32_t L_41 = V_6;
		int32_t L_42 = V_5;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (int32_t)((int32_t)il2cpp_codegen_add(L_42, 1)));
	}

IL_00c5:
	{
		int32_t L_43 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00cb:
	{
		int32_t L_44 = V_5;
		int32_t L_45 = V_2;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_0;
		__this->____buckets = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_46);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_47 = V_1;
		__this->____entries = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_47);
		return;
	}
}
// Method Definition Index: 11283
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_10 = L_0;
	const Il2CppFullySharedGenericAny L_28 = L_0;
	const Il2CppFullySharedGenericAny L_32 = L_0;
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_33 = L_29;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (!L_2)
		{
			goto IL_0149;
		}
	}
	{
		RuntimeObject* L_3 = __this->____comparer;
		RuntimeObject* L_4 = L_3;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_0032;
		}
		G_B4_0 = L_4;
	}
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), &L_6, L_5);
		typedef int32_t ( *func_L_8)(void*,const RuntimeMethod*);
		int32_t L_9 = ((func_L_8)L_7)(L_6.thisPtr,L_6.method);
		G_B6_0 = L_9;
		goto IL_0038;
	}

IL_0032:
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(G_B5_0);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B5_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_10: *(void**)L_10));
		G_B6_0 = L_11;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_12 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		V_1 = ((int32_t)(L_12%L_14));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		goto IL_0142;
	}

IL_005c:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_19 = __this->____entries;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		V_4 = ((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_21 = V_4;
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_21, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
		int32_t L_23 = V_0;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0138;
		}
	}
	{
		RuntimeObject* L_24 = __this->____comparer;
		RuntimeObject* L_25 = L_24;
		if (L_25)
		{
			G_B10_0 = L_25;
			goto IL_0095;
		}
		G_B9_0 = L_25;
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_26;
		L_26 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_27 = V_4;
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_field_data_pointer(L_27, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_26);
		bool L_30;
		L_30 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_28: *(void**)L_28), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_29: *(void**)L_29));
		G_B11_0 = L_30;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_31 = V_4;
		il2cpp_codegen_memcpy(L_32, il2cpp_codegen_get_field_data_pointer(L_31, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(G_B10_0);
		bool L_34;
		L_34 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B10_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_32: *(void**)L_32), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_33: *(void**)L_33));
		G_B11_0 = L_34;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_35 = V_2;
		if ((((int32_t)L_35) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = __this->____buckets;
		int32_t L_37 = V_1;
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_38 = V_4;
		int32_t L_39 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_38, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 41));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_40 = __this->____entries;
		int32_t L_41 = V_2;
		NullCheck(L_40);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_42 = V_4;
		int32_t L_43 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_42, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 41));
		il2cpp_codegen_write_field_data<int32_t, false>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 41), L_43);
	}

IL_00d6:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_44 = V_4;
		il2cpp_codegen_write_field_data<int32_t, false>(L_44, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9), (-1));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_45 = V_4;
		int32_t L_46 = __this->____freeList;
		il2cpp_codegen_write_field_data<int32_t, false>(L_45, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 41), L_46);
		bool L_47;
		L_47 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 47));
		if (!L_47)
		{
			goto IL_00ff;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_48 = V_4;
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(L_48, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11)))), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	}

IL_00ff:
	{
		bool L_49;
		L_49 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 48));
		if (!L_49)
		{
			goto IL_0113;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_50 = V_4;
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(L_50, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)))), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	}

IL_0113:
	{
		int32_t L_51 = V_3;
		__this->____freeList = L_51;
		int32_t L_52 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_52, 1));
		int32_t L_53 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_53, 1));
		return (bool)1;
	}

IL_0138:
	{
		int32_t L_54 = V_3;
		V_2 = L_54;
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_55 = V_4;
		int32_t L_56 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_55, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 41));
		V_3 = L_56;
	}

IL_0142:
	{
		int32_t L_57 = V_3;
		if ((((int32_t)L_57) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0149:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11284
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2EADBFD560B819C9F845F79CC53D727B37690F15_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_10 = L_0;
	const Il2CppFullySharedGenericAny L_28 = L_0;
	const Il2CppFullySharedGenericAny L_32 = L_0;
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_33 = L_29;
	const Il2CppFullySharedGenericAny L_46 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* V_4 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	bool G_B11_0 = false;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____buckets;
		if (!L_2)
		{
			goto IL_0156;
		}
	}
	{
		RuntimeObject* L_3 = __this->____comparer;
		RuntimeObject* L_4 = L_3;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_0032;
		}
		G_B4_0 = L_4;
	}
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 40), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), &L_6, L_5);
		typedef int32_t ( *func_L_8)(void*,const RuntimeMethod*);
		int32_t L_9 = ((func_L_8)L_7)(L_6.thisPtr,L_6.method);
		G_B6_0 = L_9;
		goto IL_0038;
	}

IL_0032:
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(G_B5_0);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B5_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_10: *(void**)L_10));
		G_B6_0 = L_11;
	}

IL_0038:
	{
		V_0 = ((int32_t)(G_B6_0&((int32_t)2147483647LL)));
		int32_t L_12 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____buckets;
		NullCheck(L_13);
		int32_t L_14 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_13)->max_length),NULL));
		V_1 = ((int32_t)(L_12%L_14));
		V_2 = (-1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____buckets;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		int32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		goto IL_014f;
	}

IL_005c:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_19 = __this->____entries;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		V_4 = ((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_21 = V_4;
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_21, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
		int32_t L_23 = V_0;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_23))))
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_24 = __this->____comparer;
		RuntimeObject* L_25 = L_24;
		if (L_25)
		{
			G_B10_0 = L_25;
			goto IL_0095;
		}
		G_B9_0 = L_25;
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_26;
		L_26 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_27 = V_4;
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_field_data_pointer(L_27, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(L_26);
		bool L_30;
		L_30 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_28: *(void**)L_28), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_29: *(void**)L_29));
		G_B11_0 = L_30;
		goto IL_00a2;
	}

IL_0095:
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_31 = V_4;
		il2cpp_codegen_memcpy(L_32, il2cpp_codegen_get_field_data_pointer(L_31, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_33, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		NullCheck(G_B10_0);
		bool L_34;
		L_34 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 36), G_B10_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_32: *(void**)L_32), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_33: *(void**)L_33));
		G_B11_0 = L_34;
	}

IL_00a2:
	{
		if (!G_B11_0)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_35 = V_2;
		if ((((int32_t)L_35) >= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = __this->____buckets;
		int32_t L_37 = V_1;
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_38 = V_4;
		int32_t L_39 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_38, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 41));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (int32_t)((int32_t)il2cpp_codegen_add(L_39, 1)));
		goto IL_00d6;
	}

IL_00be:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_40 = __this->____entries;
		int32_t L_41 = V_2;
		NullCheck(L_40);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_42 = V_4;
		int32_t L_43 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_42, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 41));
		il2cpp_codegen_write_field_data<int32_t, false>(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 41), L_43);
	}

IL_00d6:
	{
		Il2CppFullySharedGenericAny* L_44 = ___1_value;
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_45 = V_4;
		il2cpp_codegen_memcpy(L_46, il2cpp_codegen_get_field_data_pointer(L_45, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_44, L_46, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (void**)(Il2CppFullySharedGenericAny*)L_44, (void*)L_46);
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_47 = V_4;
		il2cpp_codegen_write_field_data<int32_t, false>(L_47, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9), (-1));
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_48 = V_4;
		int32_t L_49 = __this->____freeList;
		il2cpp_codegen_write_field_data<int32_t, false>(L_48, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 41), L_49);
		bool L_50;
		L_50 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 47));
		if (!L_50)
		{
			goto IL_010c;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_51 = V_4;
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(L_51, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11)))), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	}

IL_010c:
	{
		bool L_52;
		L_52 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 48));
		if (!L_52)
		{
			goto IL_0120;
		}
	}
	{
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_53 = V_4;
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(L_53, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)))), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	}

IL_0120:
	{
		int32_t L_54 = V_3;
		__this->____freeList = L_54;
		int32_t L_55 = __this->____freeCount;
		__this->____freeCount = ((int32_t)il2cpp_codegen_add(L_55, 1));
		int32_t L_56 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_56, 1));
		return (bool)1;
	}

IL_0145:
	{
		int32_t L_57 = V_3;
		V_2 = L_57;
		Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3* L_58 = V_4;
		int32_t L_59 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_58, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 41));
		V_3 = L_59;
	}

IL_014f:
	{
		int32_t L_60 = V_3;
		if ((((int32_t)L_60) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}

IL_0156:
	{
		Il2CppFullySharedGenericAny* L_61 = ___1_value;
		il2cpp_codegen_initobj(L_61, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)0;
	}
}
// Method Definition Index: 11285
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_3 = ___1_value;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_4 = __this->____entries;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_3, L_6, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), (void**)(Il2CppFullySharedGenericAny*)L_3, (void*)L_6);
		return (bool)1;
	}

IL_0025:
	{
		Il2CppFullySharedGenericAny* L_7 = ___1_value;
		il2cpp_codegen_initobj(L_7, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		return (bool)0;
	}
}
// Method Definition Index: 11286
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m71BC76FB3076464E2CF2D51E2607CCF7E51083FF_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? ___0_key : &___0_key), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? ___1_value : &___1_value), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		bool L_2;
		L_2 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, uint8_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? L_1: *(void**)L_1), 0);
		return L_2;
	}
}
// Method Definition Index: 11287
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m49382184C24B9222DF183D303DDE539D20217D5A_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)0;
	}
}
// Method Definition Index: 11288
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_mD6AE43E992177C3F738687180B1BC97BDBAADE51_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38)))(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
		return;
	}
}
// Method Definition Index: 11289
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_ICollection_CopyTo_mBDBCC7A542FE485FFCDDD79C6453338ACEB4E9D9_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const uint32_t SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19));
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_49 = L_27;
	const Il2CppFullySharedGenericAny L_53 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const Il2CppFullySharedGenericAny L_52 = L_31;
	const Il2CppFullySharedGenericAny L_54 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_55 = alloca(SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_0 = NULL;
	DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* V_1 = NULL;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_2 = NULL;
	int32_t V_3 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_6 = NULL;
	int32_t V_7 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		int32_t L_11;
		L_11 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 31)))(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)IsInstSealed((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 37)));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_13 = V_0;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_14 = V_0;
		int32_t L_15 = ___1_index;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38)))(__this, L_14, L_15, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
		return;
	}

IL_005e:
	{
		RuntimeArray* L_16 = ___0_array;
		V_1 = ((DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533*)IsInstSealed((RuntimeObject*)L_16, DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533_il2cpp_TypeInfo_var));
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c3;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_18 = __this->____entries;
		V_2 = L_18;
		V_3 = 0;
		goto IL_00b9;
	}

IL_0073:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		DictionaryEntryU5BU5D_t410156653E754D17B5E1161CC6CF565103B63533* L_22 = V_1;
		int32_t L_23 = ___1_index;
		int32_t L_24 = L_23;
		___1_index = ((int32_t)il2cpp_codegen_add(L_24, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_25 = V_2;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		il2cpp_codegen_memcpy(L_27, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		RuntimeObject* L_28 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), L_27);
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_29 = V_2;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), L_31);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_33;
		memset((&L_33), 0, sizeof(L_33));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_33), L_28, L_32, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB)L_33);
	}

IL_00b5:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00b9:
	{
		int32_t L_35 = V_3;
		int32_t L_36 = __this->____count;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_00c3:
	{
		RuntimeArray* L_37 = ___0_array;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_37, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
		if (L_38)
		{
			goto IL_00d4;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_00d4:
	{
	}
	try
	{
		{
			int32_t L_39 = __this->____count;
			V_5 = L_39;
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_40 = __this->____entries;
			V_6 = L_40;
			V_7 = 0;
			goto IL_0130_1;
		}

IL_00ea_1:
		{
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_41 = V_6;
			int32_t L_42 = V_7;
			NullCheck(L_41);
			int32_t L_43 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 9));
			if ((((int32_t)L_43) < ((int32_t)0)))
			{
				goto IL_012a_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = V_4;
			int32_t L_45 = ___1_index;
			int32_t L_46 = L_45;
			___1_index = ((int32_t)il2cpp_codegen_add(L_46, 1));
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_47 = V_6;
			int32_t L_48 = V_7;
			NullCheck(L_47);
			il2cpp_codegen_memcpy(L_49, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_50 = V_6;
			int32_t L_51 = V_7;
			NullCheck(L_50);
			il2cpp_codegen_memcpy(L_52, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
			memset(L_55, 0, SizeOf_KeyValuePair_2_t572E990B4B51809E54C7F3B2647FD92FC9FD21AD);
			KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_55, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? il2cpp_codegen_memcpy(L_53, L_49, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47): *(void**)L_49), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? il2cpp_codegen_memcpy(L_54, L_52, SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE): *(void**)L_52), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
			RuntimeObject* L_56 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19), L_55);
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_56);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (RuntimeObject*)L_56);
		}

IL_012a_1:
		{
			int32_t L_57 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		}

IL_0130_1:
		{
			int32_t L_58 = V_7;
			int32_t L_59 = V_5;
			if ((((int32_t)L_58) < ((int32_t)L_59)))
			{
				goto IL_00ea_1;
			}
		}
		{
			goto IL_0140;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0138;
		}
		throw e;
	}

CATCH_0138:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_60 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0140;
	}

IL_0140:
	{
		return;
	}
}
// Method Definition Index: 11290
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m44022592FB7F74617DDAE1914E3376A2C38A0CBB_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	//<source_info:<no-source>:1>
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), L_0);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 11291
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_EnsureCapacity_m195D9C8DE45E7DAC677E02DC0DB5E179F5BBE3BB_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m9B335696876184D17D1F8D7AF94C1B5B0869AA97(((int32_t)12), NULL);
	}

IL_000b:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_1 = __this->____entries;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_2 = __this->____entries;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B5_0 = L_3;
		goto IL_001e;
	}

IL_001d:
	{
		G_B5_0 = 0;
	}

IL_001e:
	{
		V_0 = G_B5_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_capacity;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		if (L_7)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = ___0_capacity;
		int32_t L_9;
		L_9 = ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_9;
	}

IL_0035:
	{
		int32_t L_10 = ___0_capacity;
		CHECKED_LOCAL_INIT(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticInit,(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46)))(__this, L_12, (bool)0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 46));
		int32_t L_13 = V_1;
		return L_13;
	}
}
// Method Definition Index: 11292
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m6B325002C83A39C48EE433C300692849D3B17B71_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)0;
	}
}
// Method Definition Index: 11293
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9E5D75EF1543AC00AA3F3BC3D6149B59826438B1_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
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
// Method Definition Index: 11294
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_mCB7FB79310BFA8537169F33C6312059A2A980737_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)0;
	}
}
// Method Definition Index: 11295
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m2BAC5DEF1C5EC223FCDB30D10041CF87E9C154D7_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)0;
	}
}
// Method Definition Index: 11296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Keys_m399CC0BA5A4F1BC1D411E66032CFF75064047405_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* L_0;
		L_0 = ((  KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 49));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Values_mF823AA54EA409E05B95BF34DAC275E9D27837E29_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* L_0;
		L_0 = ((  ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 50)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 50));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 11298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_get_Item_mC48AC2C347286C71BD0E25A923FDA569D3B0960B_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), L_3);
		int32_t L_5;
		L_5 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_7 = __this->____entries;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 13)), SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), L_9);
		return L_10;
	}

IL_0030:
	{
		return NULL;
	}
}
// Method Definition Index: 11299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_set_Item_m0444A06383E554B1CE9AD1D51B74A570C71A2F20_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_0, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 52)))(L_1, ((int32_t)15), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 52));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), L_3);
			il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		}
		try
		{
			il2cpp_codegen_memcpy(L_5, V_0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
			RuntimeObject* L_6 = ___1_value;
			void* L_8 = UnBox_Any(L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), L_7);
			InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 53)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 53), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8))));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_10 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 54)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_12;
			L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_10, L_12, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_13 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_14 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 55)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_14, L_16, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 11300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_IsCompatibleKey_mA1591D0B0BE4E9F654AE63DE747722F557C1092B_fshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// Method Definition Index: 11301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Add_m4C04B28E0F448E6668328CDF17784B92080DB9A0_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const uint32_t SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tB2F109137BFBBA5B1BD522536F2FFADD93BF09AE);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	memset(V_0, 0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(5, NULL);
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___1_value;
		((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 52)))(L_1, ((int32_t)15), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 52));
	}
	try
	{
		{
			RuntimeObject* L_2 = ___0_key;
			void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), L_3);
			il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)), SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
		}
		try
		{
			il2cpp_codegen_memcpy(L_5, V_0, SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
			RuntimeObject* L_6 = ___1_value;
			void* L_8 = UnBox_Any(L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12), L_7);
			InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 12)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8))));
			goto IL_003a_1;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0027_1;
			}
			throw e;
		}

CATCH_0027_1:
		{
			InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_9 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
			RuntimeObject* L_10 = ___1_value;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 54)) };
			CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_12;
			L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
			ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_10, L_12, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_003a_1;
		}

IL_003a_1:
		{
			goto IL_004f;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003c;
		}
		throw e;
	}

CATCH_003c:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_13 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_14 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 55)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		ThrowHelper_ThrowWrongKeyTypeArgumentException_m90E5BCE2CB10EEC16F254C237121C6816C4D6982(L_14, L_16, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004f;
	}

IL_004f:
	{
		return;
	}
}
// Method Definition Index: 11302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_System_Collections_IDictionary_Contains_m72E82A4B5B5ABC5F5D625BC047C22894796F3F76_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 56), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
		return L_5;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_System_Collections_IDictionary_GetEnumerator_m72D69D25532F2EA8DEE802868E8CC3282018A5D9_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33));
	const Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1 L_0 = alloca(SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
	//<source_info:<no-source>:1>
	{
		memset(L_0, 0, SizeOf_Enumerator_tB97DA7EC1CF5D2C0E4402389FF02F36A057755C1);
		Enumerator__ctor_m9ED6D04154B0287F36E8E29C5A49F8113F8D3ED1((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)L_0, __this, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), L_0);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 11304
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_System_Collections_IDictionary_Remove_mF1B05D2823B0E1697B8FA449F74EA0838059E448_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_tED2198944A0D9F766F1CD2E4EA89897E2E037B47);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 51));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
	}

IL_0015:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 11648
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_0 = NULL;
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_0 = ((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 11399
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m05AD863CEF17FADC4EDD109FB1D7352B27E86DD4_gshared_inline (KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 11400
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonValue_t01DB320267C848E729A400EF2345979978F851D2 KeyValuePair_2_get_Value_m6EE16BBDAFF7D590DFBDCB7315A9E7EF43B5F1FE_gshared_inline (KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 11648
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t609C7F4FCDDC30DC5F20B7722F1FDEFB0AA1C2C5* EqualityComparer_1_get_Default_m04E2D986A0F8FE3F0F86019C6460ABFBBFEA64EF_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EqualityComparer_1_t609C7F4FCDDC30DC5F20B7722F1FDEFB0AA1C2C5* V_0 = NULL;
	{
		EqualityComparer_1_t609C7F4FCDDC30DC5F20B7722F1FDEFB0AA1C2C5* L_0 = ((EqualityComparer_1_t609C7F4FCDDC30DC5F20B7722F1FDEFB0AA1C2C5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t609C7F4FCDDC30DC5F20B7722F1FDEFB0AA1C2C5* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t609C7F4FCDDC30DC5F20B7722F1FDEFB0AA1C2C5* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m73E7F699BEC0FD641A6E44DFA4C82247A06EB890(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t609C7F4FCDDC30DC5F20B7722F1FDEFB0AA1C2C5* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t609C7F4FCDDC30DC5F20B7722F1FDEFB0AA1C2C5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t609C7F4FCDDC30DC5F20B7722F1FDEFB0AA1C2C5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t609C7F4FCDDC30DC5F20B7722F1FDEFB0AA1C2C5* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 11399
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_m88176A32E2C9831A50FFF20A93F88E06CD5E8454_gshared_inline (KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 11400
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D KeyValuePair_2_get_Value_mEB35D03F01963B96DAE24D1F07F970606C3F329D_gshared_inline (KeyValuePair_2_t8D73644C826C660EBC64AC303F9ADC52912E7C39* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ProfilerMarker_t8B7F9848320B93F87A7944B157255D5F9B576F2D L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 11648
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t17A804F4FB1CFE2AD73A277BBCD4BAFB6D8848DB* EqualityComparer_1_get_Default_m163A04098A9AAAA833E90E9CDF272086CBBC86F2_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EqualityComparer_1_t17A804F4FB1CFE2AD73A277BBCD4BAFB6D8848DB* V_0 = NULL;
	{
		EqualityComparer_1_t17A804F4FB1CFE2AD73A277BBCD4BAFB6D8848DB* L_0 = ((EqualityComparer_1_t17A804F4FB1CFE2AD73A277BBCD4BAFB6D8848DB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t17A804F4FB1CFE2AD73A277BBCD4BAFB6D8848DB* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t17A804F4FB1CFE2AD73A277BBCD4BAFB6D8848DB* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mE310EABD0C2BE554160ED45EE2EE1CCEEBA9788B(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t17A804F4FB1CFE2AD73A277BBCD4BAFB6D8848DB* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t17A804F4FB1CFE2AD73A277BBCD4BAFB6D8848DB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t17A804F4FB1CFE2AD73A277BBCD4BAFB6D8848DB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t17A804F4FB1CFE2AD73A277BBCD4BAFB6D8848DB* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 11399
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_mA49393E9626BD22A0596302CDAE76FF764271B48_gshared_inline (KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 11400
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 KeyValuePair_2_get_Value_m174B96961312514153A649AE56841392A24B5AEC_gshared_inline (KeyValuePair_2_tDB8E0AB8C7BAD86D652486130A307A01ECB4CC1B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PseudoStateData_tE5B3EBF682E8DE88E9325F44841D5B95FEB6F3A8 L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 11648
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* EqualityComparer_1_get_Default_mAEFB6D58B5FB5D08A3774D5EC5AE38DFFBF280CA_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* V_0 = NULL;
	{
		EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* L_0 = ((EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m357353584C6FF3B48BF7970D070BFEA81C8F65F9(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t90245FEDC9E02D61898D3D788C4F1C3A159A1438* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 11399
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_mA6FA6FE4E7642BC54EAF21AADECB615F6FF243EB_gshared_inline (KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 11400
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 KeyValuePair_2_get_Value_mCFA751814A4E8628334ABFA53DBC00B3AC50BF30_gshared_inline (KeyValuePair_2_t39E31549FE1B7B86685410B9BADDE2DA35201F80* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		ClipPlayer_t17FDEF85ADF16E55AA0A00B574E1857451DB7244 L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 11648
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t7E0C7EEBA33D44A0D43BFEA1C6FA2C4ADA3A6C2A* EqualityComparer_1_get_Default_mBC6EC48AEA71CAE94CF8657F17A6288B993FE252_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EqualityComparer_1_t7E0C7EEBA33D44A0D43BFEA1C6FA2C4ADA3A6C2A* V_0 = NULL;
	{
		EqualityComparer_1_t7E0C7EEBA33D44A0D43BFEA1C6FA2C4ADA3A6C2A* L_0 = ((EqualityComparer_1_t7E0C7EEBA33D44A0D43BFEA1C6FA2C4ADA3A6C2A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t7E0C7EEBA33D44A0D43BFEA1C6FA2C4ADA3A6C2A* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t7E0C7EEBA33D44A0D43BFEA1C6FA2C4ADA3A6C2A* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m42C1D54F504A3FBD4A29FF6AA675FB5B6074F273(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t7E0C7EEBA33D44A0D43BFEA1C6FA2C4ADA3A6C2A* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t7E0C7EEBA33D44A0D43BFEA1C6FA2C4ADA3A6C2A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t7E0C7EEBA33D44A0D43BFEA1C6FA2C4ADA3A6C2A_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t7E0C7EEBA33D44A0D43BFEA1C6FA2C4ADA3A6C2A* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 11399
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* KeyValuePair_2_get_Key_mDE6EBB5E13C994979C9F16F6A1185D1719BC2609_gshared_inline (KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = __this->___key;
		return L_0;
	}
}
// Method Definition Index: 11400
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 KeyValuePair_2_get_Value_m73D79C3513B3F85604EE011537EFB1F01F5AD4FD_gshared_inline (KeyValuePair_2_tB5EC176E6DED175AAFF8802072EF0953C39A634C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		PerScenarioData_tDBB689295599DE09FCA963F9282414EA2B240B55 L_0 = __this->___value;
		return L_0;
	}
}
// Method Definition Index: 11648
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tAE8B4F16F447C069F655AA64CF2C6000FD15BD47* EqualityComparer_1_get_Default_mFC11E751ABDC51479FADCFFDE7BC0CA498A3416D_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EqualityComparer_1_tAE8B4F16F447C069F655AA64CF2C6000FD15BD47* V_0 = NULL;
	{
		EqualityComparer_1_tAE8B4F16F447C069F655AA64CF2C6000FD15BD47* L_0 = ((EqualityComparer_1_tAE8B4F16F447C069F655AA64CF2C6000FD15BD47_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tAE8B4F16F447C069F655AA64CF2C6000FD15BD47* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tAE8B4F16F447C069F655AA64CF2C6000FD15BD47* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mAE9E347B86D0FB94E4195E7079077FD0D056B304(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_tAE8B4F16F447C069F655AA64CF2C6000FD15BD47* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tAE8B4F16F447C069F655AA64CF2C6000FD15BD47_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tAE8B4F16F447C069F655AA64CF2C6000FD15BD47_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tAE8B4F16F447C069F655AA64CF2C6000FD15BD47* L_4 = V_0;
		return L_4;
	}
}
