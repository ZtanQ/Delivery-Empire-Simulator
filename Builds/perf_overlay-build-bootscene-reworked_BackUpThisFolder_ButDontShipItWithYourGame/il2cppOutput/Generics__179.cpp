#include "pch-cpp.hpp"





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
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct IEnumerator_1_tC46762DF28C9BF8FE752C6F44A38BC938B7C63F2;
struct IEnumerator_1_t6524E0139704992B4053D5093E5F9913722F9539;
struct IEnumerator_1_t0CB1A06ED9F2E52F5A94F0DA329032B2D08D7D40;
struct IEnumerator_1_t745918DF4AD1586D2A195491E94AE18D89B7DE68;
struct IEnumerator_1_tFEB2D7595AF85F58BB6C6A1CAF495B65AA853EDD;
struct IEnumerator_1_tB6FFD39722B46BFD0611FEE6B3D4342097941906;
struct List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5;
struct UnsafeParallelHashMapDebuggerTypeProxy_2_t4A34F2944E65F462B1CA05BC595902280B2A97F4;
struct Pair_2U5BU5D_tA93C79DD20E7E202CC93D8B5B7C60A312699AA16;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F;
IL2CPP_EXTERN_C String_t* _stringLiteral3DCDCC60AD32F8AA5D68094D1F4DA6F372DFBE24;
IL2CPP_EXTERN_C String_t* _stringLiteral58D215CC3FAC6F0C327469BF1C8E229807A83E55;
IL2CPP_EXTERN_C String_t* _stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F;
IL2CPP_EXTERN_C String_t* _stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457;
IL2CPP_EXTERN_C String_t* _stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246;
IL2CPP_EXTERN_C const RuntimeMethod* IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5  : public RuntimeObject
{
	Pair_2U5BU5D_tA93C79DD20E7E202CC93D8B5B7C60A312699AA16* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
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
struct NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC 
{
	int32_t ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
struct NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B 
{
	uint32_t ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
typedef Il2CppFullySharedGenericStruct NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51;
typedef Il2CppFullySharedGenericStruct Pair_2_tD9FD7901920962567EFA915194252C62C833F9F6;
typedef Il2CppFullySharedGenericStruct Pair_2_tF8A435CDED15A96555BAB1E37C58429B2FF464A6;
struct UnsafeParallelHashMapBase_2_t56B039B25CB556AA106B4EE1D6A8E6213271EC14 
{
};
struct UnsafeParallelHashMapBase_2_t451A35AB89A12E1E616B3AC33F88998099C2B32E 
{
};
struct UnsafeParallelHashMapBase_2_t9DFBE3E27405BB3B5DDD6D76151D5BFA7CB6513C 
{
};
struct UnsafeParallelHashMapBase_2_tCFF834E7486FBD609EF94B0B7A469760EB0CB20D 
{
};
struct UnsafeParallelHashMapBase_2_t41262C7F5F83828700A8921D620E67EA0991FAE1 
{
};
struct UnsafeParallelHashMapBase_2_t439947A40101FC75EC5665DCAB06644239715D75 
{
};
struct UnsafeParallelHashMapBase_2_t463AA70D1CB41B734F17C41A6E834759D3D89195 
{
};
struct UnsafeParallelHashMapBase_2_tB0C02E0D42773FC6279148955479C9F639550ECC 
{
};
struct UnsafeParallelHashMapBase_2_t72E41A06BF89C7558B54716CF15B86402025AEB2 
{
};
struct UnsafeParallelHashMapBase_2_t36B6EB74EB92F62B7DCA92AA40875B27E60F1D7F 
{
};
struct UnsafeParallelHashMapBase_2_tC9A90870EF7154E90FC350CFEC5BAF8C8F35A4C0 
{
};
struct BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 
{
	uint32_t ___value;
};
struct BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C 
{
	uint32_t ___value;
};
struct BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 
{
	uint32_t ___value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			uint64_t ___m_rawData;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[8];
	};
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
#pragma pack(push, tp, 1)
struct FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint64_t ___byte0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint64_t ___byte0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_OffsetPadding[8];
					uint64_t ___byte0008;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_OffsetPadding_forAlignmentOnly[8];
					uint64_t ___byte0008_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4__padding[16];
	};
};
#pragma pack(pop, tp)
struct GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB 
{
	int16_t ___U3CindexU3Ek__BackingField;
};
struct GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 
{
	int16_t ___U3CindexU3Ek__BackingField;
};
struct GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB 
{
	uint64_t ___U3CcomponentsMaskU3Ek__BackingField;
};
struct GPUDrivenMaterialData_t1834AD299C8285768A90D366285F54ED98BE98B0 
{
	uint32_t ___data;
};
struct GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 
{
	int32_t ___U3CindexU3Ek__BackingField;
};
struct GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 
{
	int32_t ___index;
};
struct InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B 
{
	int32_t ___U3CindexU3Ek__BackingField;
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
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t* ___values;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t* ___values_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keys_OffsetPadding[8];
			uint8_t* ___keys;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keys_OffsetPadding_forAlignmentOnly[8];
			uint8_t* ___keys_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___next_OffsetPadding[16];
			uint8_t* ___next;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___next_OffsetPadding_forAlignmentOnly[16];
			uint8_t* ___next_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___buckets_OffsetPadding[24];
			uint8_t* ___buckets;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___buckets_OffsetPadding_forAlignmentOnly[24];
			uint8_t* ___buckets_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyCapacity_OffsetPadding[32];
			int32_t ___keyCapacity;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyCapacity_OffsetPadding_forAlignmentOnly[32];
			int32_t ___keyCapacity_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding[36];
			int32_t ___bucketCapacityMask;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding_forAlignmentOnly[36];
			int32_t ___bucketCapacityMask_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding[40];
			int32_t ___allocatedIndexLength;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding_forAlignmentOnly[40];
			int32_t ___allocatedIndexLength_forAlignmentOnly;
		};
	};
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
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct LodSelectionCurve_t5E3F99BC782C22E828074538B8B43051FF859713 
{
	float ___m_LodSlope;
	float ___m_LodBias;
};
struct NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
struct NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583 
{
	GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
struct NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C 
{
	GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
struct UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D 
{
	uint8_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t5F75981CEC17C7EAE94180B0C9C63C260D6D1B3C 
{
	GPUDrivenSubMesh_t2D3B77E083A07816281294E54907E064B2A2A22B* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct BatchDrawCommandFlags_tC502FA322382A3181F0800B1EA5A5654027FE034 
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
#pragma pack(push, tp, 1)
struct FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_OffsetPadding[32];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0032;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0032_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_OffsetPadding[48];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0048;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0048_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1__padding[64];
	};
};
#pragma pack(pop, tp)
struct GPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6 
{
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	GPUDrivenMaterialData_t1834AD299C8285768A90D366285F54ED98BE98B0 ___data;
};
struct MotionVectorGenerationMode_tE87C61556749260EF5429A0F8FE55DAD30EEAFCB 
{
	int32_t ___value__;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct ShadowCastingMode_tF30806698B37CF120A1A506BD7549EAF308E7C6D 
{
	int32_t ___value__;
};
struct UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___Data;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___cameraID;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___jobHandle;
};
struct FixedList64Bytes_1_tA8137DDBE902BF483FBBDB59365917992EA9F670 
{
	alignas(8) FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1 ___data;
};
struct NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tAA41AE8C464559D1987285B6F1D42333CD5EC15B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct UnsafeParallelHashMapDebuggerTypeProxy_2_t4A34F2944E65F462B1CA05BC595902280B2A97F4  : public RuntimeObject
{
	UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707 ___m_Target;
};
struct RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C 
{
	uint8_t ___layer;
	uint32_t ___renderingLayerMask;
	int32_t ___motionMode;
	int32_t ___shadowCastingMode;
	bool ___staticShadowCaster;
	int32_t ___rendererPriority;
	bool ___supportsIndirect;
};
struct RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_pinvoke
{
	uint8_t ___layer;
	uint32_t ___renderingLayerMask;
	int32_t ___motionMode;
	int32_t ___shadowCastingMode;
	int32_t ___staticShadowCaster;
	int32_t ___rendererPriority;
	int32_t ___supportsIndirect;
};
struct RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_com
{
	uint8_t ___layer;
	uint32_t ___renderingLayerMask;
	int32_t ___motionMode;
	int32_t ___shadowCastingMode;
	int32_t ___staticShadowCaster;
	int32_t ___rendererPriority;
	int32_t ___supportsIndirect;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 
{
	UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D ___meshLods;
	UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D ___crossFades;
};
struct EmbeddedArray64_1_t40B70A170260009F23E16506CE418B52748B8EE0 
{
	FixedList64Bytes_1_tA8137DDBE902BF483FBBDB59365917992EA9F670 ___m_FixedArray;
	UnsafeList_1_t5F75981CEC17C7EAE94180B0C9C63C260D6D1B3C ___m_List;
	int32_t ___m_Length;
	bool ___m_Created;
	bool ___m_IsEmbedded;
};
struct NativeKeyValueArrays_2_t6F346645686D9ED3DF9980242A60F6343D9BD346 
{
	NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 ___Keys;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Values;
};
struct NativeKeyValueArrays_2_t5F8B14A1FC3085C8F576054B525A95D4898297D8 
{
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___Keys;
	NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB ___Values;
};
struct NativeKeyValueArrays_2_t66B0B299E9562B5E22EF3BF01729F553EF5A1143 
{
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___Keys;
	NativeArray_1_tAA41AE8C464559D1987285B6F1D42333CD5EC15B ___Values;
};
struct NativeKeyValueArrays_2_tA2DA312B446D1C4E01DFB5BABCD5FD907A6D98BB 
{
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___Keys;
	NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E ___Values;
};
struct NativeKeyValueArrays_2_t69F48B55F7CB9E53D8DA8AC22D78A9FE2C4ACCBB 
{
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___Keys;
	NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C ___Values;
};
struct NativeKeyValueArrays_2_tCBCD37F108CC29AF7DD444E7DADEBD5DA915330C 
{
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___Keys;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___Values;
};
struct NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___Keys;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___Values;
};
struct NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727 
{
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___transparentInstanceID;
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	int32_t ___submeshIndex;
	int32_t ___activeMeshLod;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	int32_t ___flags;
	GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___archetype;
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___range;
	int32_t ___lightmapIndex;
};
struct DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_pinvoke
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___transparentInstanceID;
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	int32_t ___submeshIndex;
	int32_t ___activeMeshLod;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	int32_t ___flags;
	GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___archetype;
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_pinvoke ___range;
	int32_t ___lightmapIndex;
};
struct DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_marshaled_com
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___transparentInstanceID;
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	int32_t ___submeshIndex;
	int32_t ___activeMeshLod;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___materialID;
	int32_t ___flags;
	GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___archetype;
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_marshaled_com ___range;
	int32_t ___lightmapIndex;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A 
{
	DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___key;
	int32_t ___NextEntryIndex;
	int32_t ___EntryIndex;
};
struct MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	int32_t ___meshLodCount;
	LodSelectionCurve_t5E3F99BC782C22E828074538B8B43051FF859713 ___meshLodSelectionCurve;
	EmbeddedArray64_1_t40B70A170260009F23E16506CE418B52748B8EE0 ___subMeshes;
};
struct MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_marshaled_pinvoke
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	int32_t ___meshLodCount;
	LodSelectionCurve_t5E3F99BC782C22E828074538B8B43051FF859713 ___meshLodSelectionCurve;
	EmbeddedArray64_1_t40B70A170260009F23E16506CE418B52748B8EE0 ___subMeshes;
};
struct MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_marshaled_com
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___meshID;
	int32_t ___meshLodCount;
	LodSelectionCurve_t5E3F99BC782C22E828074538B8B43051FF859713 ___meshLodSelectionCurve;
	EmbeddedArray64_1_t40B70A170260009F23E16506CE418B52748B8EE0 ___subMeshes;
};
struct List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5_StaticFields
{
	Pair_2U5BU5D_tA93C79DD20E7E202CC93D8B5B7C60A312699AA16* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_StaticFields
{
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___Null;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticFields
{
	GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___Invalid;
};
struct GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669_StaticFields
{
	GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 ___Invalid;
};
struct GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_StaticFields
{
	GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 ___Invalid;
};
struct GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271_StaticFields
{
	GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 ___Invalid;
};
struct InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_StaticFields
{
	InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___Invalid;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA3570671F75F69AD881E869D362E6324BDA4F646 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254* ___2_item, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m3E2610CA343A7226FECF5B6CE365718FC66DF071_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m0E708F519A1821659A5DB22A6551BF3AD6584AF2_inline (void* ___0_destination, int32_t ___1_index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisMeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_m378298AA06643C684B01DE5BAD5877C2D6001F45_inline (void* ___0_destination, int32_t ___1_index, MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mCFD0DA8ADF441A1780C2CAE61417C094BF86B93E_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisMeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_m42E7D99D8EBAEBF3BAD092684E6EEAB4AD41B10D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 UnsafeUtility_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mCA80AB19D82B40C3B0B1BC9A4BE2F87BAFD9BE64_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m931276E3D1E0B8B528A865C70483B1DE5ECF362D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254* ___1_item, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 UnsafeUtility_ReadArrayElement_TisMeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_mAEB04091BED5994494AB1521F1CA283C9A55DA84_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m249B922C777820569D99F1E5DBD5800BC00ABEC5 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750* ___2_item, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___3_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750_mC6886C418E413B4D0D54190150D16F8A609FE34B_inline (void* ___0_destination, int32_t ___1_index, UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisUnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750_m8CBF4C11500731B2BA768362607ED8B5FCE9B520 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mAB20D607661E818021519DE0E1F119A0D41917B4 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750* ___1_item, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 UnsafeUtility_ReadArrayElement_TisUnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750_m6C484995D5C95208A4EB1F0C7664EC42A74DE670_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m135E8EB58E815535E586523B1D2DB1425912B3B7 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___1_key, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* ___2_item, NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* ___3_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m9F2800AFAC18DA2E9DB4352D9A82AC95FA0995FA_inline (void* ___0_destination, int32_t ___1_index, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m60CD2C2DE2B559F255B8BEA36B0554E698FF9651_inline (void* ___0_destination, int32_t ___1_index, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m53F008BF155FA3071AA803295CD52B877FA97301 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB UnsafeUtility_ReadArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m7AA25F6024B181108CC3A96104D0E5ABCED519C6_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mD8A0FC3AE51961C5C0D870CAE5AE481D6ECF763E (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* ___1_item, NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 UnsafeUtility_ReadArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m80C61348EC8F9D4F73F0AAA4A69A028E6D599DCD_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m23409B7EB290925DAEE982FAA55734A8835478D5 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___1_key, GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB* ___2_item, NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* ___3_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_mED1E1443D3B6D2E654E096AA0A05A54E6B9BD985_inline (void* ___0_destination, int32_t ___1_index, GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_m7D4B76EEA56BC2D0A4E69040ECAC2BFF29F6239B (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mDCBB4D59E3786A123F77D41B99A1F7BC7431DAF6 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB* ___1_item, NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB UnsafeUtility_ReadArrayElement_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_m77A0F5FAAAA9E070343AB7A018FCB34FD1698A06_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA096F9657FD1C2B3E5048A7998A0AB5A4507DAE5 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB ___1_key, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB* ___2_item, NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_mB62CB55609C38163B91BEF995A2D6AAE252DB5D0 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m4198BFF310F123C79F0DB2950AF12F5A51D9C080 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB* ___1_item, NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C* ___2_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m201A93ED6E606DE25EE1301E9947914200822EB6 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisGPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669_m203EA1B05ACF18717ECA21DC6B156B851A3DF3A2_inline (void* ___0_destination, int32_t ___1_index, GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669_m91576454D66AE28099F50FBEE92EBBB84FC659AF (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m4F68C164838E2B4CE7883B8858267A21BF84D4DA (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 UnsafeUtility_ReadArrayElement_TisGPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669_m361058B0E058D8D5D3AC6C6C015700E6018A671C_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m1987DED2458DEE21F93ADF1E36865CBBC970BA97 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisAnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46_m9FDDC2380EF57AE03BE92D8AC12841CAADE0EFDB_inline (void* ___0_destination, int32_t ___1_index, AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisAnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46_mED51823316D888F4C0BBD35347050157D421DF94 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m85CB28E20997B412498B96398A59B174173C4AEB (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 UnsafeUtility_ReadArrayElement_TisAnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46_m8460969BD9998B0DFF865186874B2414FEED12C8_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA75399BF08E0CCAC328234FD7A71D864467E95C2 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* ___3_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_m6E993EC5F50FC82EDD84AF158A50E9FF2BAE2705_inline (void* ___0_destination, int32_t ___1_index, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3DEC8FE0C45757F13739FD01205D6A4138E8E9CD (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C UnsafeUtility_ReadArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_mFDF2C4591B5F4C0AF4424ED681225F9CF100C5BB_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m92F223FB6B0005A83CA9AC122EEB656E520F55AC (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* ___2_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m452AB0AD39F142541DD13262445DEFBE7F0AB055 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint32_t ___1_key, GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271* ___2_item, NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* ___3_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m839FEB3192BEC0090FBA73A11E371E1A01C13ADF_inline (void* ___0_destination, int32_t ___1_index, uint32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisGeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271_mD92564ABD442EBF5CD99E2589172450FD38429FB_inline (void* ___0_destination, int32_t ___1_index, GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisGeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271_mBD7A8412C7ED558BD4891BE34D5D811409097B84 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t UnsafeUtility_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mDA80BAFF55EA77496672B3B5B3804B55274B7E95_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m1C526A05A3A58C7AD3A2817DF4B02038B2B76995 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271* ___1_item, NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 UnsafeUtility_ReadArrayElement_TisGeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271_m2A66DBE83F9498AC60B42C9A0B1C7E4401B4CDCC_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6B99914C35E0F18487E1D815ED321C045BBEBC08 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint32_t ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED337C060A7869E7A836D5F3C6671B9500396F53 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m013BAB9F290BE09ACA2CB96824C92F55F7FEEB4C (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* ___2_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeKeyValueArrays_2_Dispose_m08B6A4226A0125C6123942BE90703D08153CCE37_fshared (NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pair_2__ctor_mCA54688368FE894C9F314471A3DA94A72B709F51_fshared (Pair_2_tF8A435CDED15A96555BAB1E37C58429B2FF464A6* __this, Il2CppFullySharedGenericAny ___0_k, Il2CppFullySharedGenericAny ___1_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_AllocateHashMap_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCBA9B456E509039F0C37BA72EFD6D0CDAF16BB6 (int32_t ___0_length, int64_t ___1_bucketLength, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_label, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** ___3_outBuf, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Clear_mC24DF6084AB7BA5AECAF2DFE3C8D80CD6EEE830C (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsCreated_mC6B0DE6A5C6E890A9141CCC5B8EC55384EE01AB8_fshared_inline (UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3998D4C65643516D842CF6D61C4513767A18FA63 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m6EE55875D60EFEB4879AF8FF0E362DCC68B50EBB_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m7575B5C2D0CB741CCB79BFF102B543F951D1A91A (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___1_key, int32_t ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mD0A7EC52AF9067A81379B898E9F19FA26F3F4B88 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC42AE53B9C096C5437713AA40D89EB873678D78F (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryGetValue_m6B967A3210A9091B292D0A38D4D8A190E5DC59A6 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, int32_t* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_mBC2EB4E62A5FAA365C4795E1D7FA3F3ED271F97A (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A* ___1_it, int32_t* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Dispose_m90F628584C865984113787BB0EC79383B00A069C (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D (UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_mE315F33C3B919C23EC86BFFB01282ACBAE0693FB (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 CollectionHelper_CreateNativeArray_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mAF52A80BBB617F62596D58F8FFD9E3E6AA9DB60F (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyArray_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_m49E855A91D083A54CFF44DEB13335123AD3C4001 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C CollectionHelper_CreateNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m53D2BC04C5127B3B1163A395E36386918CACFE4B (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4769F528CC3AB04D768F83B2A2A016AE29C5F87E (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeKeyValueArrays_2__ctor_m5C1BD5C2D8BD4FE03EC32866EEDF2EBECAB7B7F3 (NativeKeyValueArrays_2_t6F346645686D9ED3DF9980242A60F6343D9BD346* __this, int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC3C2330139E264EC4EB952292BE242F6511CA8E6 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t6F346645686D9ED3DF9980242A60F6343D9BD346 ___1_result, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_get_Capacity_mD81BA6EE87A322AAE69C06BAB81E322511542957_fshared_inline (UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_Count_m4BEE456643E4A1F5B2A307F22129E227F1CDB8A6_fshared (UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22AAA28BF2A503A1A9ACC7D180DA65A1F2AA0A86 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m1F6D4EBACBE01E83D9F84CF51098880680AFA3B5 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_AllocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC33D66B36C84BB3713D03F117D2FC7BA97B6F1B3 (int32_t ___0_length, int64_t ___1_bucketLength, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_label, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** ___3_outBuf, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Clear_m4CB59CCB443B8B999EB14D7ADEA2FE45667EDDE9 (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m74E8AA99C7F975CBC9B07E2EE5507D607611E849 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mF79126AD9B549372FB57D999F4450764D57E8BCA (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, bool ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m383AAD31DA63D8750FCF96B8527D44D210E501B3 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m4367FF3A9EE67D1486CCE2262EFFAF6946AF92DD (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, bool* ___2_item, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryGetValue_mA8F29C37931DC4EBDE937A8CBFFA377E38915818 (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, bool* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_mA81BF5D2401B45A4AA6667DDBAF5D06525622473 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___1_it, bool* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Dispose_mE168242B30D34781E0922D0B3A921789F58AF9C5 (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_m0029E0D98754A1E9C0EAD6C63A25CADC334FF7CF (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 CollectionHelper_CreateNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m37DDAEDF9B9C55C4598679FA86B596B53362B6E3 (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mAB07175AB7AA23FBCB3571D1F770E945969E8567 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB CollectionHelper_CreateNativeArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE1929E4215249CFF4F4034028DD00376FA292FF6 (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC207F978B303B5F48108C11804D921E6F240342D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeKeyValueArrays_2__ctor_mB2EC342017D1E395DA2099E5372ED64D279381A7 (NativeKeyValueArrays_2_t5F8B14A1FC3085C8F576054B525A95D4898297D8* __this, int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m21239CE036F4F5471F4055037C59ACA18A4724CA (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t5F8B14A1FC3085C8F576054B525A95D4898297D8 ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_mBC9960286D3CFA0345BDF4B3983DA01728B9B894 (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m98429D3A789598E3551A8DC56447BC028F089DCD (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_AllocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisGPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6_m9DB5174B630BFCDD07377E084AC0454D96CAC220 (int32_t ___0_length, int64_t ___1_bucketLength, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_label, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** ___3_outBuf, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Clear_m232B97D1EFC8FA0D7EDD0758239D9E0EC1273872 (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisGPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6_m48E5FF5F41637E261FFDB6EF3154FC85F0211D58 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m5B56F56B130BCBF16A347832EA46CAA80B8C2FDE (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, GPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6 ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m881039650BA1FDA661D07E6AF8FA35B1B240A50C (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mDA06A084A48900A163537E31C38E9810EFEB0BBE (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, GPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6* ___2_item, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryGetValue_m094FF6CD47A2C2F1CB6E9B8148883827657977A7 (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, GPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m273AB90E05FFD783BAEDA71D1AA8D4A6380B1D77 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___1_it, GPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Dispose_m4D7C1925109F892217B0DE3FC6337E81B42A4B7A (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_mEC2627DEA50D6D174A21FB9FD68E8BF415091408 (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAA41AE8C464559D1987285B6F1D42333CD5EC15B CollectionHelper_CreateNativeArray_TisGPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6_m11EB66EC9637406E6C80BBB26C490545DB4196D1 (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisGPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6_mEC7179C6FD7FEFFC5E8D1BE999A7CF349AD8B8ED (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tAA41AE8C464559D1987285B6F1D42333CD5EC15B ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeKeyValueArrays_2__ctor_m02996A4380F17AF6AAAB7909DF4D5365D968B387 (NativeKeyValueArrays_2_t66B0B299E9562B5E22EF3BF01729F553EF5A1143* __this, int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisGPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6_m6D0BEC921137959E6A66721B1B26247236FDC5D4 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t66B0B299E9562B5E22EF3BF01729F553EF5A1143 ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_mA47CA8768A8C65C9B92DF7E22AAE244DD7B38B33 (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_mD1427E573007EC710354EE2C09B3EB18DC26BE9F (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_AllocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mC5DB96096F58345413CB2300A12310634E7D4AB1 (int32_t ___0_length, int64_t ___1_bucketLength, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_label, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** ___3_outBuf, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Clear_m0F534300E9181A8441752D6D2E98B199441897EA (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mF394020DE5FEF55FD41D472FCFEDFB94EC21E18C (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m0EA030D1553AB75C4DC3B22E1261718F38B0514D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mCA17E90FD8C94DA36C293C4F7C760305DDDBAA39 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m2AB8F01AFC014C5985B83D5F7589937CC7975157 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* ___2_item, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryGetValue_mAC80CAF8B152BD2F1C9DB862F35A00673040E88F (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m77746A88E95C7BB55130E6B2061E2B4E349F527E (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___1_it, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Dispose_mE126E426AAAED49D25F130000D405C2B41318D3B (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_mBF6CB438235B2B9E829DBAE0F90A3B68DC5709EB (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E CollectionHelper_CreateNativeArray_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m0D7F6CF92BCF84F265BA70040E0CAE6D56E363B6 (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m0E8CE5C728489D98BC6F0B92382E2326A0E0769D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeKeyValueArrays_2__ctor_m0BB0315D667D19539C05DA34818BC073E17764BD (NativeKeyValueArrays_2_tA2DA312B446D1C4E01DFB5BABCD5FD907A6D98BB* __this, int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mA03F53939352AD52E121E78DAABC5895D0CFF08D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tA2DA312B446D1C4E01DFB5BABCD5FD907A6D98BB ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m76FB5AAA3A8504DB468A14965F282AE8E85DA578 (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_mF9F071CC761152343DCDFF79586443CABB4C0870 (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_AllocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_mB3FAEAB9C60EB3A7B2966293CED32A184224B5C2 (int32_t ___0_length, int64_t ___1_bucketLength, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_label, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** ___3_outBuf, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Clear_mCD1127F64D3573740854603B636DD9BA31004B0E (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m60D8A6A4D2FC5E25CD0C3229AD6E6B568C384C32 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mCEB7C38C6618D7CC653575A7B3C28749D14BBB47 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mAEE12FB6144EA9DCB1933009BC93145133D7DDDD (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mDBE5641F713C2E902B94A498C9679283E34E1F4F (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___2_item, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryGetValue_m1874358B2C2DF6E415E63A8D640FB799635D2474 (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m4150CB2DBA80CA291F04858ACEA4D314F2238671 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___1_it, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Dispose_m23EF8313DCAACEA7ABC25160CB7AC515E92D1106 (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_m3C82ACBBF700AD995030419F6760E7E80C007020 (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C CollectionHelper_CreateNativeArray_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_mEB030D0A1BF6EA5944EEA67E4B82C0D33F24D14A (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m9E1C36193953F8B34B0DAA5D4C5EE5B57D78B5AD (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeKeyValueArrays_2__ctor_m69BBB9D2ABA59D59C898F1DCC90DA36B1F1985CE (NativeKeyValueArrays_2_t69F48B55F7CB9E53D8DA8AC22D78A9FE2C4ACCBB* __this, int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m25B1FF2DD44BBEC084000393CE299617A0AC1E75 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t69F48B55F7CB9E53D8DA8AC22D78A9FE2C4ACCBB ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8229E3C7B8C1470346C947A6DF6DEB63ACEEBAB3 (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m08748D620A7476F1F9D838AB0812DD47A643DD9B (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_AllocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFC6AE4DAC01DFDFF29C1E53E06F14FB0B0D66206 (int32_t ___0_length, int64_t ___1_bucketLength, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_label, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** ___3_outBuf, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Clear_m1DAE0CA8AFDA8249B076232F21A60CCF187C3821 (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8CA3249E613156F5440F57EDC2841CC44B9CF479 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m59ED02439231DEE0DCE400A73C1FB60E18FF4A72 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, int32_t ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m87F3D674497E6B1FD780E5CD8D1957E983303E4D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m154FD2D41A676C1A7CCB0E90D555F0094CFA346A (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryGetValue_m3E07898BD2939D0A444FA5568C83953951A528DC (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, int32_t* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_mE6364B8893EAC364F9528909649EE61B2B699344 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___1_it, int32_t* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Dispose_m6235264FEA9102EDF3320D7E2E9168846DAA3215 (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_mB837E430E580E69E1751C2F1BB9600ABB0D76451 (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeKeyValueArrays_2__ctor_m14A338B60E598828D30E9F1DE0837E3EF5888DA7 (NativeKeyValueArrays_2_tCBCD37F108CC29AF7DD444E7DADEBD5DA915330C* __this, int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3DB176E612D3F9E0446BCC0B1803F073E38F8254 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tCBCD37F108CC29AF7DD444E7DADEBD5DA915330C ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m500EB3525F7CC1238181A285AD05D81BF2A2D67B (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m289E5B0C921B8957B2B748B123F0D52BA4534B63 (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m9C0FADCA718C9341E229CEE17C8FE4855AC72880_inline (void* ___0_destination, int32_t ___1_index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisMeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_m6CD1CF498DA3ED862B05EC97BA62DCA6066D8FB4_inline (void* ___0_destination, int32_t ___1_index, MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 UnsafeUtilityInternal_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mDC8A7125EE74C940B9F940440D412BA4B3A42575_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 UnsafeUtilityInternal_ReadArrayElement_TisMeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_m11FC059EDD11872BC9AA0E4A69DE23575103FCB9_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750_m65C4B6E992246FAE83AA242138AF39C72B71BF01_inline (void* ___0_destination, int32_t ___1_index, UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 UnsafeUtilityInternal_ReadArrayElement_TisUnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750_m25474EB27C8162D7A4BDF444168565682AC81612_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m7886C76825D19244F9DB2ACC29DF1BAF7F3A0C0B_inline (void* ___0_destination, int32_t ___1_index, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m19B4012CB1284CF84BD2F435B8F719A3209957A8_inline (void* ___0_destination, int32_t ___1_index, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB UnsafeUtilityInternal_ReadArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m0C048047EB886D78B484166DCB014DF594B085BD_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 UnsafeUtilityInternal_ReadArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m986ED2902CE4A51ABE99D9309F33BEE50D219A80_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_m891550514A2106C446148AA51E67D17649CF30DB_inline (void* ___0_destination, int32_t ___1_index, GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB UnsafeUtilityInternal_ReadArrayElement_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_m4E657D67A0253D6AA48A0AF0834D8B8B4D986C48_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6CE8AF6F42FA98657985C680DB85747DAC856E2F_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisGPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669_m6250718DA85CD6D73D6A530FDBABAA5BEC80FBEC_inline (void* ___0_destination, int32_t ___1_index, GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0B7B877C8F00DCC1C95D7124B3B0D83C6D492345_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 UnsafeUtilityInternal_ReadArrayElement_TisGPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669_m0863D7A09467FAC3CAE8A852D088E9E980F02756_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisAnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46_m7BCF5EFEDF647DC9596F1373B28B3C221D5822C2_inline (void* ___0_destination, int32_t ___1_index, AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 UnsafeUtilityInternal_ReadArrayElement_TisAnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46_mFD8E968B6D42F987231C2D4D4433BC15E231FB83_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_m41C04F72F56004722939AD5969E0C101465ACEEA_inline (void* ___0_destination, int32_t ___1_index, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C UnsafeUtilityInternal_ReadArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_mC6AFEEF7260AB50C6AC741C83424DB3F59ECA569_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m2A3A6B90150B69BBDEE5319C3CE02AF8B872B64B_inline (void* ___0_destination, int32_t ___1_index, uint32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisGeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271_mC894FFD95AE5BB522BB5DF619885A81FCD2618BF_inline (void* ___0_destination, int32_t ___1_index, GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t UnsafeUtilityInternal_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mAA4A4AC11C7C0784A0566FAE86EFBAD08CF4126D_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 UnsafeUtilityInternal_ReadArrayElement_TisGeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271_m3358302574C84901BFC17BF5A4E83AD5C5475245_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA3570671F75F69AD881E869D362E6324BDA4F646 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254* ___2_item, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___3_it, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_mC88E93C7C4C8D63CFA52E7B5FDC45E68CB1A3A6F (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m3E2610CA343A7226FECF5B6CE365718FC66DF071_fshared)(___0_data, ___1_threadIndex, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m0E708F519A1821659A5DB22A6551BF3AD6584AF2_inline (void* ___0_destination, int32_t ___1_index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisMeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_m378298AA06643C684B01DE5BAD5877C2D6001F45_inline (void* ___0_destination, int32_t ___1_index, MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410 (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_mF7A8FD5114C49A2F13864A36CEB8A45DA154ED72 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_mCFD0DA8ADF441A1780C2CAE61417C094BF86B93E_fshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47 (int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_GetBucketSize_mBE376CBC384B796DE89740ECD5EA9C7F520D93D7 (int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisMeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_m42E7D99D8EBAEBF3BAD092684E6EEAB4AD41B10D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 UnsafeUtility_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mCA80AB19D82B40C3B0B1BC9A4BE2F87BAFD9BE64_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EntityId_Equals_mF0F102A496CE0685C89D0C8EF34E77F9EE064EB8 (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m931276E3D1E0B8B528A865C70483B1DE5ECF362D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254* ___1_item, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 UnsafeUtility_ReadArrayElement_TisMeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_mAEB04091BED5994494AB1521F1CA283C9A55DA84_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m249B922C777820569D99F1E5DBD5800BC00ABEC5 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750* ___2_item, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___3_it, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m2232A1CA7E7C60BCCFED39BFEEDEC0ECE268A33B (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m3E2610CA343A7226FECF5B6CE365718FC66DF071_fshared)(___0_data, ___1_threadIndex, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750_mC6886C418E413B4D0D54190150D16F8A609FE34B_inline (void* ___0_destination, int32_t ___1_index, UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 ___2_value, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_mC5D7A15AEC0733F45363D7857364D284194D6B2F (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_mCFD0DA8ADF441A1780C2CAE61417C094BF86B93E_fshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisUnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750_m8CBF4C11500731B2BA768362607ED8B5FCE9B520 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mAB20D607661E818021519DE0E1F119A0D41917B4 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750* ___1_item, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 UnsafeUtility_ReadArrayElement_TisUnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750_m6C484995D5C95208A4EB1F0C7664EC42A74DE670_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m135E8EB58E815535E586523B1D2DB1425912B3B7 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___1_key, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* ___2_item, NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* ___3_it, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_mEC61B08C0F757DD7EE5B900CEE5E137401AB6CF6 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m3E2610CA343A7226FECF5B6CE365718FC66DF071_fshared)(___0_data, ___1_threadIndex, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m9F2800AFAC18DA2E9DB4352D9A82AC95FA0995FA_inline (void* ___0_destination, int32_t ___1_index, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m60CD2C2DE2B559F255B8BEA36B0554E698FF9651_inline (void* ___0_destination, int32_t ___1_index, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GPUArchetypeHandle_GetHashCode_mF816A596DEE9C2CA813E280D5DB3FE046085480C (GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_m9944A0761FCB32DE97DCC6953C577E34FA719524 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_mCFD0DA8ADF441A1780C2CAE61417C094BF86B93E_fshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m53F008BF155FA3071AA803295CD52B877FA97301 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB UnsafeUtility_ReadArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m7AA25F6024B181108CC3A96104D0E5ABCED519C6_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GPUArchetypeHandle_Equals_mFE673CC36DDBA65242C25B256411A4EFA1638C1C (GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB* __this, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mD8A0FC3AE51961C5C0D870CAE5AE481D6ECF763E (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* ___1_item, NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 UnsafeUtility_ReadArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m80C61348EC8F9D4F73F0AAA4A69A028E6D599DCD_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m23409B7EB290925DAEE982FAA55734A8835478D5 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___1_key, GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB* ___2_item, NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* ___3_it, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m6215D41D2C328309D4F18588A7E2BD5EFB7C1636 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m3E2610CA343A7226FECF5B6CE365718FC66DF071_fshared)(___0_data, ___1_threadIndex, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_mED1E1443D3B6D2E654E096AA0A05A54E6B9BD985_inline (void* ___0_destination, int32_t ___1_index, GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB ___2_value, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_m256D846E56528254C1FAE4CC5369D5522E72AA61 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_mCFD0DA8ADF441A1780C2CAE61417C094BF86B93E_fshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_m7D4B76EEA56BC2D0A4E69040ECAC2BFF29F6239B (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mDCBB4D59E3786A123F77D41B99A1F7BC7431DAF6 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB* ___1_item, NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB UnsafeUtility_ReadArrayElement_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_m77A0F5FAAAA9E070343AB7A018FCB34FD1698A06_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA096F9657FD1C2B3E5048A7998A0AB5A4507DAE5 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB ___1_key, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB* ___2_item, NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C* ___3_it, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_mB012F30A9D06803E62E9C6474E45619332B8A6AA (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m3E2610CA343A7226FECF5B6CE365718FC66DF071_fshared)(___0_data, ___1_threadIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GPUComponentSet_GetHashCode_mD21ED0964434E73545827D58153D059227B51B21 (GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_mD1BE20220DEDC29543340D9C30DFC95A50929CE7 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_mCFD0DA8ADF441A1780C2CAE61417C094BF86B93E_fshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_mB62CB55609C38163B91BEF995A2D6AAE252DB5D0 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GPUComponentSet_Equals_m3DD5426BBAA2E39886586340DA810AB11DFBC28C (GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB* __this, GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m4198BFF310F123C79F0DB2950AF12F5A51D9C080 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB* ___1_item, NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C* ___2_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m201A93ED6E606DE25EE1301E9947914200822EB6 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m07687E98A0046432909EF37B54EB18791E6D5CF1 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m3E2610CA343A7226FECF5B6CE365718FC66DF071_fshared)(___0_data, ___1_threadIndex, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisGPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669_m203EA1B05ACF18717ECA21DC6B156B851A3DF3A2_inline (void* ___0_destination, int32_t ___1_index, GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_m8D4F96028CA80DB6D209CB8052B1DE20A49D9E38 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_mCFD0DA8ADF441A1780C2CAE61417C094BF86B93E_fshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669_m91576454D66AE28099F50FBEE92EBBB84FC659AF (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722 (int32_t* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m4F68C164838E2B4CE7883B8858267A21BF84D4DA (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 UnsafeUtility_ReadArrayElement_TisGPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669_m361058B0E058D8D5D3AC6C6C015700E6018A671C_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m1987DED2458DEE21F93ADF1E36865CBBC970BA97 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m61C5DE1D0F6AD624021FDD813C27761EEA6FE0BA (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m3E2610CA343A7226FECF5B6CE365718FC66DF071_fshared)(___0_data, ___1_threadIndex, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisAnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46_m9FDDC2380EF57AE03BE92D8AC12841CAADE0EFDB_inline (void* ___0_destination, int32_t ___1_index, AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 ___2_value, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_mE585DF8C91C3F2E0D9C8D5BDF9ECAE4DF732F77B (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_mCFD0DA8ADF441A1780C2CAE61417C094BF86B93E_fshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisAnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46_mED51823316D888F4C0BBD35347050157D421DF94 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m85CB28E20997B412498B96398A59B174173C4AEB (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 UnsafeUtility_ReadArrayElement_TisAnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46_m8460969BD9998B0DFF865186874B2414FEED12C8_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA75399BF08E0CCAC328234FD7A71D864467E95C2 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* ___3_it, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m57B325EFF67BD5485331BD2F287B463A5D8FC9C8 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m3E2610CA343A7226FECF5B6CE365718FC66DF071_fshared)(___0_data, ___1_threadIndex, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_m6E993EC5F50FC82EDD84AF158A50E9FF2BAE2705_inline (void* ___0_destination, int32_t ___1_index, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RangeKey_GetHashCode_mC38845B6A1CC657D6F6B1149E7448AA6A3EF3257 (RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_m95E0C2203337A917B366551260F10DD9AA00924A (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_mCFD0DA8ADF441A1780C2CAE61417C094BF86B93E_fshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3DEC8FE0C45757F13739FD01205D6A4138E8E9CD (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C UnsafeUtility_ReadArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_mFDF2C4591B5F4C0AF4424ED681225F9CF100C5BB_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RangeKey_Equals_m05E612C122D91758588CEB7529751045E6F09493 (RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C* __this, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m92F223FB6B0005A83CA9AC122EEB656E520F55AC (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* ___2_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m452AB0AD39F142541DD13262445DEFBE7F0AB055 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint32_t ___1_key, GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271* ___2_item, NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* ___3_it, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m5D709DC07BBA4C0F9F41DE999E7EDB2892DAB166 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m3E2610CA343A7226FECF5B6CE365718FC66DF071_fshared)(___0_data, ___1_threadIndex, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m839FEB3192BEC0090FBA73A11E371E1A01C13ADF_inline (void* ___0_destination, int32_t ___1_index, uint32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisGeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271_mD92564ABD442EBF5CD99E2589172450FD38429FB_inline (void* ___0_destination, int32_t ___1_index, GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC (uint32_t* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_FreeEntry_m69CC8F146D8D164025CDAB725ED2133D374FA895 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_mCFD0DA8ADF441A1780C2CAE61417C094BF86B93E_fshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisGeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271_mBD7A8412C7ED558BD4891BE34D5D811409097B84 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t UnsafeUtility_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mDA80BAFF55EA77496672B3B5B3804B55274B7E95_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_Equals_m6BE590F34B71E27978E9146437F73A6448BA01A3 (uint32_t* __this, uint32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m1C526A05A3A58C7AD3A2817DF4B02038B2B76995 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271* ___1_item, NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* ___2_it, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 UnsafeUtility_ReadArrayElement_TisGeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271_m2A66DBE83F9498AC60B42C9A0B1C7E4401B4CDCC_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6B99914C35E0F18487E1D815ED321C045BBEBC08 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint32_t ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* ___3_it, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMapBase_2_AllocEntry_m4555170F63E8739804DEC6FF582607D2F3F8D374 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_AllocEntry_m3E2610CA343A7226FECF5B6CE365718FC66DF071_fshared)(___0_data, ___1_threadIndex, method);
}
inline void UnsafeParallelHashMapBase_2_FreeEntry_m191EB6B37D156B9FBD644C1E41DA269AE39A7D21 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))UnsafeParallelHashMapBase_2_FreeEntry_mCFD0DA8ADF441A1780C2CAE61417C094BF86B93E_fshared)(___0_data, ___1_idx, ___2_threadIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED337C060A7869E7A836D5F3C6671B9500396F53 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m013BAB9F290BE09ACA2CB96824C92F55F7FEEB4C (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* ___2_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B (void* ___0_destination, uint8_t ___1_value, int64_t ___2_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C (int32_t* ___0_location1, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D (int32_t ___0_a, const RuntimeMethod* method) ;
inline void NativeKeyValueArrays_2_Dispose_m08B6A4226A0125C6123942BE90703D08153CCE37 (NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1*, const RuntimeMethod*))NativeKeyValueArrays_2_Dispose_m08B6A4226A0125C6123942BE90703D08153CCE37_fshared)(__this, method);
}
inline void Pair_2__ctor_m080327976BEF3D9FBA133845A20983F2462E1D6A (Pair_2_tD9FD7901920962567EFA915194252C62C833F9F6* __this, Il2CppFullySharedGenericStruct ___0_k, Il2CppFullySharedGenericStruct ___1_v, const RuntimeMethod* method)
{
	((  void (*) (Pair_2_tF8A435CDED15A96555BAB1E37C58429B2FF464A6*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))Pair_2__ctor_mCA54688368FE894C9F314471A3DA94A72B709F51_fshared)((Pair_2_tF8A435CDED15A96555BAB1E37C58429B2FF464A6*)__this, (Il2CppFullySharedGenericAny)___0_k, (Il2CppFullySharedGenericAny)___1_v, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_AllocateHashMap_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCBA9B456E509039F0C37BA72EFD6D0CDAF16BB6 (int32_t ___0_length, int64_t ___1_bucketLength, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_label, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** ___3_outBuf, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Clear_mC24DF6084AB7BA5AECAF2DFE3C8D80CD6EEE830C (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMap_2_get_IsCreated_m21986D033E89DA3F44B7D0C5B99F57C93E9FBFCC_inline (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, const RuntimeMethod*))UnsafeParallelHashMap_2_get_IsCreated_mC6B0DE6A5C6E890A9141CCC5B8EC55384EE01AB8_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapData_IsEmpty_m24404CDC35842532023F9D7094DB24BCBD57EC9D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3998D4C65643516D842CF6D61C4513767A18FA63 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_Clear_mEFDB8CAFDB397D0E8A4279CA11C361A29EC8A4BB (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_Clear_m6EE55875D60EFEB4879AF8FF0E362DCC68B50EBB_fshared)(___0_data, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m7575B5C2D0CB741CCB79BFF102B543F951D1A91A (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___1_key, int32_t ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mD0A7EC52AF9067A81379B898E9F19FA26F3F4B88 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC42AE53B9C096C5437713AA40D89EB873678D78F (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryGetValue_m6B967A3210A9091B292D0A38D4D8A190E5DC59A6 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, int32_t* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_mBC2EB4E62A5FAA365C4795E1D7FA3F3ED271F97A (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A* ___1_it, int32_t* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_DeallocateHashMap_m8D0FEE08B8522A1D05FBFFBBB43CB203304F114F (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Dispose_m90F628584C865984113787BB0EC79383B00A069C (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D (UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_mE315F33C3B919C23EC86BFFB01282ACBAE0693FB (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 CollectionHelper_CreateNativeArray_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mAF52A80BBB617F62596D58F8FFD9E3E6AA9DB60F (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyArray_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_m49E855A91D083A54CFF44DEB13335123AD3C4001 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C CollectionHelper_CreateNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m53D2BC04C5127B3B1163A395E36386918CACFE4B (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4769F528CC3AB04D768F83B2A2A016AE29C5F87E (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeKeyValueArrays_2__ctor_m5C1BD5C2D8BD4FE03EC32866EEDF2EBECAB7B7F3 (NativeKeyValueArrays_2_t6F346645686D9ED3DF9980242A60F6343D9BD346* __this, int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC3C2330139E264EC4EB952292BE242F6511CA8E6 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t6F346645686D9ED3DF9980242A60F6343D9BD346 ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMap_2_get_Capacity_m5516D69B8E5C8A61A3B8112E3B0C0DC701FDEF20_inline (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, const RuntimeMethod*))UnsafeParallelHashMap_2_get_Capacity_mD81BA6EE87A322AAE69C06BAB81E322511542957_fshared_inline)(__this, method);
}
inline int32_t UnsafeParallelHashMap_2_Count_m3B17849FD6E9AEFC745138B43A5F5924BDA651A6 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271*, const RuntimeMethod*))UnsafeParallelHashMap_2_Count_m4BEE456643E4A1F5B2A307F22129E227F1CDB8A6_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22AAA28BF2A503A1A9ACC7D180DA65A1F2AA0A86 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m1F6D4EBACBE01E83D9F84CF51098880680AFA3B5 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_AllocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC33D66B36C84BB3713D03F117D2FC7BA97B6F1B3 (int32_t ___0_length, int64_t ___1_bucketLength, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_label, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** ___3_outBuf, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Clear_m4CB59CCB443B8B999EB14D7ADEA2FE45667EDDE9 (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMap_2_get_IsCreated_mDED457162B1F831271052A68989F6D4CEF3ED72C_inline (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A*, const RuntimeMethod*))UnsafeParallelHashMap_2_get_IsCreated_mC6B0DE6A5C6E890A9141CCC5B8EC55384EE01AB8_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m74E8AA99C7F975CBC9B07E2EE5507D607611E849 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_Clear_mD620491F4EA8B03A99D82DC769CD85A03BFED512 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_Clear_m6EE55875D60EFEB4879AF8FF0E362DCC68B50EBB_fshared)(___0_data, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mF79126AD9B549372FB57D999F4450764D57E8BCA (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, bool ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m383AAD31DA63D8750FCF96B8527D44D210E501B3 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m4367FF3A9EE67D1486CCE2262EFFAF6946AF92DD (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, bool* ___2_item, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryGetValue_mA8F29C37931DC4EBDE937A8CBFFA377E38915818 (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, bool* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_mA81BF5D2401B45A4AA6667DDBAF5D06525622473 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___1_it, bool* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Dispose_mE168242B30D34781E0922D0B3A921789F58AF9C5 (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_m0029E0D98754A1E9C0EAD6C63A25CADC334FF7CF (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 CollectionHelper_CreateNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m37DDAEDF9B9C55C4598679FA86B596B53362B6E3 (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mAB07175AB7AA23FBCB3571D1F770E945969E8567 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB CollectionHelper_CreateNativeArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE1929E4215249CFF4F4034028DD00376FA292FF6 (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC207F978B303B5F48108C11804D921E6F240342D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeKeyValueArrays_2__ctor_mB2EC342017D1E395DA2099E5372ED64D279381A7 (NativeKeyValueArrays_2_t5F8B14A1FC3085C8F576054B525A95D4898297D8* __this, int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m21239CE036F4F5471F4055037C59ACA18A4724CA (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t5F8B14A1FC3085C8F576054B525A95D4898297D8 ___1_result, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMap_2_get_Capacity_mC666D6C263F15AA2FD6A05CAEBAB2B2DFBE687AB_inline (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A*, const RuntimeMethod*))UnsafeParallelHashMap_2_get_Capacity_mD81BA6EE87A322AAE69C06BAB81E322511542957_fshared_inline)(__this, method);
}
inline int32_t UnsafeParallelHashMap_2_Count_m8DF0A24CF1D10819C529AB188628C7BA7AF62014 (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A*, const RuntimeMethod*))UnsafeParallelHashMap_2_Count_m4BEE456643E4A1F5B2A307F22129E227F1CDB8A6_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_mBC9960286D3CFA0345BDF4B3983DA01728B9B894 (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m98429D3A789598E3551A8DC56447BC028F089DCD (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_AllocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisGPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6_m9DB5174B630BFCDD07377E084AC0454D96CAC220 (int32_t ___0_length, int64_t ___1_bucketLength, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_label, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** ___3_outBuf, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Clear_m232B97D1EFC8FA0D7EDD0758239D9E0EC1273872 (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMap_2_get_IsCreated_m3E16B160F6BD828C4D8D14FF280BB50CB40544C6_inline (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF*, const RuntimeMethod*))UnsafeParallelHashMap_2_get_IsCreated_mC6B0DE6A5C6E890A9141CCC5B8EC55384EE01AB8_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisGPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6_m48E5FF5F41637E261FFDB6EF3154FC85F0211D58 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_Clear_m82AB1EC3846B97F983511E4976920B42752EAD32 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_Clear_m6EE55875D60EFEB4879AF8FF0E362DCC68B50EBB_fshared)(___0_data, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m5B56F56B130BCBF16A347832EA46CAA80B8C2FDE (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, GPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6 ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m881039650BA1FDA661D07E6AF8FA35B1B240A50C (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mDA06A084A48900A163537E31C38E9810EFEB0BBE (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, GPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6* ___2_item, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryGetValue_m094FF6CD47A2C2F1CB6E9B8148883827657977A7 (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, GPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m273AB90E05FFD783BAEDA71D1AA8D4A6380B1D77 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___1_it, GPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Dispose_m4D7C1925109F892217B0DE3FC6337E81B42A4B7A (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_mEC2627DEA50D6D174A21FB9FD68E8BF415091408 (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAA41AE8C464559D1987285B6F1D42333CD5EC15B CollectionHelper_CreateNativeArray_TisGPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6_m11EB66EC9637406E6C80BBB26C490545DB4196D1 (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisGPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6_mEC7179C6FD7FEFFC5E8D1BE999A7CF349AD8B8ED (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tAA41AE8C464559D1987285B6F1D42333CD5EC15B ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeKeyValueArrays_2__ctor_m02996A4380F17AF6AAAB7909DF4D5365D968B387 (NativeKeyValueArrays_2_t66B0B299E9562B5E22EF3BF01729F553EF5A1143* __this, int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisGPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6_m6D0BEC921137959E6A66721B1B26247236FDC5D4 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t66B0B299E9562B5E22EF3BF01729F553EF5A1143 ___1_result, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMap_2_get_Capacity_m5DDAD4786CB59E135698E44264B7578F4C3F302D_inline (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF*, const RuntimeMethod*))UnsafeParallelHashMap_2_get_Capacity_mD81BA6EE87A322AAE69C06BAB81E322511542957_fshared_inline)(__this, method);
}
inline int32_t UnsafeParallelHashMap_2_Count_m2EC6F133E5C6E3532E5C5B63EEBFCABE4AFFB1CC (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF*, const RuntimeMethod*))UnsafeParallelHashMap_2_Count_m4BEE456643E4A1F5B2A307F22129E227F1CDB8A6_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_mA47CA8768A8C65C9B92DF7E22AAE244DD7B38B33 (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_mD1427E573007EC710354EE2C09B3EB18DC26BE9F (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_AllocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mC5DB96096F58345413CB2300A12310634E7D4AB1 (int32_t ___0_length, int64_t ___1_bucketLength, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_label, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** ___3_outBuf, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Clear_m0F534300E9181A8441752D6D2E98B199441897EA (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMap_2_get_IsCreated_m1EA1D8A50A8590A38032009A419AE51C50AD4BA7_inline (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A*, const RuntimeMethod*))UnsafeParallelHashMap_2_get_IsCreated_mC6B0DE6A5C6E890A9141CCC5B8EC55384EE01AB8_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mF394020DE5FEF55FD41D472FCFEDFB94EC21E18C (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_Clear_m90A0B8D6E3B9A33FD8A9520D406FAA4B3E27E08E (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_Clear_m6EE55875D60EFEB4879AF8FF0E362DCC68B50EBB_fshared)(___0_data, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m0EA030D1553AB75C4DC3B22E1261718F38B0514D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mCA17E90FD8C94DA36C293C4F7C760305DDDBAA39 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m2AB8F01AFC014C5985B83D5F7589937CC7975157 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* ___2_item, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryGetValue_mAC80CAF8B152BD2F1C9DB862F35A00673040E88F (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m77746A88E95C7BB55130E6B2061E2B4E349F527E (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___1_it, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Dispose_mE126E426AAAED49D25F130000D405C2B41318D3B (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_mBF6CB438235B2B9E829DBAE0F90A3B68DC5709EB (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E CollectionHelper_CreateNativeArray_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m0D7F6CF92BCF84F265BA70040E0CAE6D56E363B6 (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m0E8CE5C728489D98BC6F0B92382E2326A0E0769D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeKeyValueArrays_2__ctor_m0BB0315D667D19539C05DA34818BC073E17764BD (NativeKeyValueArrays_2_tA2DA312B446D1C4E01DFB5BABCD5FD907A6D98BB* __this, int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mA03F53939352AD52E121E78DAABC5895D0CFF08D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tA2DA312B446D1C4E01DFB5BABCD5FD907A6D98BB ___1_result, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMap_2_get_Capacity_mE7A0123EA4D25C5D4FA8B67C1B303AF1F572753D_inline (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A*, const RuntimeMethod*))UnsafeParallelHashMap_2_get_Capacity_mD81BA6EE87A322AAE69C06BAB81E322511542957_fshared_inline)(__this, method);
}
inline int32_t UnsafeParallelHashMap_2_Count_m60504721A94A1E6BDE6A0F8981202C592A2F27FB (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A*, const RuntimeMethod*))UnsafeParallelHashMap_2_Count_m4BEE456643E4A1F5B2A307F22129E227F1CDB8A6_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m76FB5AAA3A8504DB468A14965F282AE8E85DA578 (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_mF9F071CC761152343DCDFF79586443CABB4C0870 (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_AllocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_mB3FAEAB9C60EB3A7B2966293CED32A184224B5C2 (int32_t ___0_length, int64_t ___1_bucketLength, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_label, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** ___3_outBuf, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Clear_mCD1127F64D3573740854603B636DD9BA31004B0E (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMap_2_get_IsCreated_mDC6C1BD27BBB19A4492F7DF09F1AAFEE584C6CEE_inline (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1*, const RuntimeMethod*))UnsafeParallelHashMap_2_get_IsCreated_mC6B0DE6A5C6E890A9141CCC5B8EC55384EE01AB8_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m60D8A6A4D2FC5E25CD0C3229AD6E6B568C384C32 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_Clear_mB0D9250BF6DEA3C0FA1E6E1AAEE5C8FF53FEBD36 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_Clear_m6EE55875D60EFEB4879AF8FF0E362DCC68B50EBB_fshared)(___0_data, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mCEB7C38C6618D7CC653575A7B3C28749D14BBB47 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mAEE12FB6144EA9DCB1933009BC93145133D7DDDD (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mDBE5641F713C2E902B94A498C9679283E34E1F4F (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___2_item, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryGetValue_m1874358B2C2DF6E415E63A8D640FB799635D2474 (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m4150CB2DBA80CA291F04858ACEA4D314F2238671 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___1_it, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Dispose_m23EF8313DCAACEA7ABC25160CB7AC515E92D1106 (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_m3C82ACBBF700AD995030419F6760E7E80C007020 (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C CollectionHelper_CreateNativeArray_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_mEB030D0A1BF6EA5944EEA67E4B82C0D33F24D14A (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m9E1C36193953F8B34B0DAA5D4C5EE5B57D78B5AD (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C ___1_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeKeyValueArrays_2__ctor_m69BBB9D2ABA59D59C898F1DCC90DA36B1F1985CE (NativeKeyValueArrays_2_t69F48B55F7CB9E53D8DA8AC22D78A9FE2C4ACCBB* __this, int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m25B1FF2DD44BBEC084000393CE299617A0AC1E75 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t69F48B55F7CB9E53D8DA8AC22D78A9FE2C4ACCBB ___1_result, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMap_2_get_Capacity_mA08983EA65A686081360DAD50622168BAEBDE235_inline (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1*, const RuntimeMethod*))UnsafeParallelHashMap_2_get_Capacity_mD81BA6EE87A322AAE69C06BAB81E322511542957_fshared_inline)(__this, method);
}
inline int32_t UnsafeParallelHashMap_2_Count_mC52C7E882BB995E58D8A17E0931BDCC65ED197A9 (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1*, const RuntimeMethod*))UnsafeParallelHashMap_2_Count_m4BEE456643E4A1F5B2A307F22129E227F1CDB8A6_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8229E3C7B8C1470346C947A6DF6DEB63ACEEBAB3 (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m08748D620A7476F1F9D838AB0812DD47A643DD9B (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_AllocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFC6AE4DAC01DFDFF29C1E53E06F14FB0B0D66206 (int32_t ___0_length, int64_t ___1_bucketLength, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_label, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** ___3_outBuf, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Clear_m1DAE0CA8AFDA8249B076232F21A60CCF187C3821 (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, const RuntimeMethod* method) ;
inline bool UnsafeParallelHashMap_2_get_IsCreated_m9BB7B2A2215BCE85516249DCE41D07BA472C405A_inline (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A*, const RuntimeMethod*))UnsafeParallelHashMap_2_get_IsCreated_mC6B0DE6A5C6E890A9141CCC5B8EC55384EE01AB8_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8CA3249E613156F5440F57EDC2841CC44B9CF479 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) ;
inline void UnsafeParallelHashMapBase_2_Clear_m68DAC794E70E286BCED24B813A6E34DA156B3EBF (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, const RuntimeMethod*))UnsafeParallelHashMapBase_2_Clear_m6EE55875D60EFEB4879AF8FF0E362DCC68B50EBB_fshared)(___0_data, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m59ED02439231DEE0DCE400A73C1FB60E18FF4A72 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, int32_t ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m87F3D674497E6B1FD780E5CD8D1957E983303E4D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m154FD2D41A676C1A7CCB0E90D555F0094CFA346A (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___3_it, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryGetValue_m3E07898BD2939D0A444FA5568C83953951A528DC (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, int32_t* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_mE6364B8893EAC364F9528909649EE61B2B699344 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___1_it, int32_t* ___2_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Dispose_m6235264FEA9102EDF3320D7E2E9168846DAA3215 (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_mB837E430E580E69E1751C2F1BB9600ABB0D76451 (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeKeyValueArrays_2__ctor_m14A338B60E598828D30E9F1DE0837E3EF5888DA7 (NativeKeyValueArrays_2_tCBCD37F108CC29AF7DD444E7DADEBD5DA915330C* __this, int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3DB176E612D3F9E0446BCC0B1803F073E38F8254 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_tCBCD37F108CC29AF7DD444E7DADEBD5DA915330C ___1_result, const RuntimeMethod* method) ;
inline int32_t UnsafeParallelHashMap_2_get_Capacity_m60F3416836EBF22BF1FD580E8011D0CCFE1E7827_inline (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A*, const RuntimeMethod*))UnsafeParallelHashMap_2_get_Capacity_mD81BA6EE87A322AAE69C06BAB81E322511542957_fshared_inline)(__this, method);
}
inline int32_t UnsafeParallelHashMap_2_Count_mB5E48E57CDE7A2410648C9A893346203A811BF26 (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A*, const RuntimeMethod*))UnsafeParallelHashMap_2_Count_m4BEE456643E4A1F5B2A307F22129E227F1CDB8A6_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m500EB3525F7CC1238181A285AD05D81BF2A2D67B (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m289E5B0C921B8957B2B748B123F0D52BA4534B63 (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m9C0FADCA718C9341E229CEE17C8FE4855AC72880_inline (void* ___0_destination, int32_t ___1_index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisMeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_m6CD1CF498DA3ED862B05EC97BA62DCA6066D8FB4_inline (void* ___0_destination, int32_t ___1_index, MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 UnsafeUtilityInternal_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mDC8A7125EE74C940B9F940440D412BA4B3A42575_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 UnsafeUtilityInternal_ReadArrayElement_TisMeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_m11FC059EDD11872BC9AA0E4A69DE23575103FCB9_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750_m65C4B6E992246FAE83AA242138AF39C72B71BF01_inline (void* ___0_destination, int32_t ___1_index, UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 UnsafeUtilityInternal_ReadArrayElement_TisUnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750_m25474EB27C8162D7A4BDF444168565682AC81612_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m7886C76825D19244F9DB2ACC29DF1BAF7F3A0C0B_inline (void* ___0_destination, int32_t ___1_index, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m19B4012CB1284CF84BD2F435B8F719A3209957A8_inline (void* ___0_destination, int32_t ___1_index, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB UnsafeUtilityInternal_ReadArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m0C048047EB886D78B484166DCB014DF594B085BD_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 UnsafeUtilityInternal_ReadArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m986ED2902CE4A51ABE99D9309F33BEE50D219A80_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_m891550514A2106C446148AA51E67D17649CF30DB_inline (void* ___0_destination, int32_t ___1_index, GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB UnsafeUtilityInternal_ReadArrayElement_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_m4E657D67A0253D6AA48A0AF0834D8B8B4D986C48_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6CE8AF6F42FA98657985C680DB85747DAC856E2F_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisGPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669_m6250718DA85CD6D73D6A530FDBABAA5BEC80FBEC_inline (void* ___0_destination, int32_t ___1_index, GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0B7B877C8F00DCC1C95D7124B3B0D83C6D492345_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 UnsafeUtilityInternal_ReadArrayElement_TisGPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669_m0863D7A09467FAC3CAE8A852D088E9E980F02756_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisAnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46_m7BCF5EFEDF647DC9596F1373B28B3C221D5822C2_inline (void* ___0_destination, int32_t ___1_index, AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 UnsafeUtilityInternal_ReadArrayElement_TisAnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46_mFD8E968B6D42F987231C2D4D4433BC15E231FB83_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_m41C04F72F56004722939AD5969E0C101465ACEEA_inline (void* ___0_destination, int32_t ___1_index, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C UnsafeUtilityInternal_ReadArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_mC6AFEEF7260AB50C6AC741C83424DB3F59ECA569_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m2A3A6B90150B69BBDEE5319C3CE02AF8B872B64B_inline (void* ___0_destination, int32_t ___1_index, uint32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisGeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271_mC894FFD95AE5BB522BB5DF619885A81FCD2618BF_inline (void* ___0_destination, int32_t ___1_index, GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t UnsafeUtilityInternal_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mAA4A4AC11C7C0784A0566FAE86EFBAD08CF4126D_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 UnsafeUtilityInternal_ReadArrayElement_TisGeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271_m3358302574C84901BFC17BF5A4E83AD5C5475245_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 65296
// Method Definition Index: 65297
// Method Definition Index: 65298
// Method Definition Index: 65299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mDC648B2B4F94F9073BA65B7F1A65334DC0EB02C4 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA3570671F75F69AD881E869D362E6324BDA4F646(L_0, L_1, (&V_0), (&V_1), NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_mC88E93C7C4C8D63CFA52E7B5FDC45E68CB1A3A6F(L_3, L_4, NULL);
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m0E708F519A1821659A5DB22A6551BF3AD6584AF2_inline((void*)L_7, L_8, L_9, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisMeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_m378298AA06643C684B01DE5BAD5877C2D6001F45_inline((void*)L_11, L_12, L_13, NULL);
		int32_t L_14;
		L_14 = EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		intptr_t L_21 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_20,NULL));
		int32_t L_22 = V_2;
		int32_t L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(L_21, 4)))), L_22, (-1));
		if ((((int32_t)L_23) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		uint8_t* L_25 = L_24->___next;
		V_5 = (int32_t*)L_25;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_26 = V_4;
		int32_t L_27 = V_3;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t L_29 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))));
		V_6 = L_29;
		int32_t* L_30 = V_5;
		int32_t L_31 = V_2;
		intptr_t L_32 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_31,NULL));
		int32_t L_33 = V_6;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(L_32, 4)))), (int32_t)L_33);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_35 = ___1_key;
		bool L_36;
		L_36 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA3570671F75F69AD881E869D362E6324BDA4F646(L_34, L_35, (&V_0), (&V_1), NULL);
		if (!L_36)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		int32_t L_38 = V_2;
		int32_t L_39 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_mF7A8FD5114C49A2F13864A36CEB8A45DA154ED72(L_37, L_38, L_39, NULL);
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_40 = V_4;
		int32_t L_41 = V_3;
		intptr_t L_42 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_41,NULL));
		int32_t L_43 = V_2;
		int32_t L_44 = V_6;
		int32_t L_45;
		L_45 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(L_42, 4)))), L_43, L_44);
		int32_t L_46 = V_6;
		if ((!(((uint32_t)L_45) == ((uint32_t)L_46))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
// Method Definition Index: 65300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m24BDB13D739E13D9A3DD9C863135E8FC07663DBB (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_mC88E93C7C4C8D63CFA52E7B5FDC45E68CB1A3A6F(L_0, L_1, NULL);
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m0E708F519A1821659A5DB22A6551BF3AD6584AF2_inline((void*)L_4, L_5, L_6, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisMeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_m378298AA06643C684B01DE5BAD5877C2D6001F45_inline((void*)L_8, L_9, L_10, NULL);
		int32_t L_11;
		L_11 = EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		V_3 = L_21;
		int32_t* L_22 = V_4;
		int32_t L_23 = V_0;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_23,NULL));
		int32_t L_25 = V_3;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, 4)))), (int32_t)L_25);
		int32_t* L_26 = V_2;
		int32_t L_27 = V_1;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t L_29 = V_0;
		int32_t L_30 = V_3;
		int32_t L_31;
		L_31 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))), L_29, L_30);
		int32_t L_32 = V_3;
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 65301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mC7FD4C671EB1C6698420B75216084027B8DB912D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA3570671F75F69AD881E869D362E6324BDA4F646(L_1, L_2, (&V_0), (&V_1), NULL);
		if (L_3)
		{
			goto IL_0162;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00d4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = il2cpp_codegen_ldind<int32_t, int32_t>(L_9);
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16))),NULL));
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_15, 4)))));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		int32_t* L_18;
		L_18 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_17, NULL);
		int32_t L_19 = V_7;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_19, ((int32_t)16))),NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		V_2 = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		uint8_t* L_23 = L_22->___next;
		V_3 = (int32_t*)L_23;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		int32_t* L_25;
		L_25 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_24, NULL);
		int32_t L_26 = V_7;
		intptr_t L_27 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_26, ((int32_t)16))),NULL));
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_29,NULL));
		int32_t L_31 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_30, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(L_27, 4)))), (int32_t)L_31);
		int32_t* L_32 = V_3;
		int32_t L_33 = V_2;
		intptr_t L_34 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_33,NULL));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(L_34, 4)))), (int32_t)(-1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = V_2;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_36, (int32_t)L_37);
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_38 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0097:
	{
		int32_t L_39 = V_7;
		int32_t L_40 = V_6;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		int32_t L_43 = il2cpp_codegen_ldind<int32_t, int32_t>(L_42);
		if ((((int32_t)L_43) >= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		NullCheck(L_44);
		int32_t L_45 = L_44->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)1073741823)))))
		{
			goto IL_00b6;
		}
	}
	{
		return (bool)0;
	}

IL_00b6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		int32_t L_48;
		L_48 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_47, NULL);
		V_8 = L_48;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		int32_t L_50 = V_8;
		int32_t L_51 = V_8;
		int64_t L_52;
		L_52 = UnsafeParallelHashMapData_GetBucketSize_mBE376CBC384B796DE89740ECD5EA9C7F520D93D7(L_51, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_53 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisMeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_m42E7D99D8EBAEBF3BAD092684E6EEAB4AD41B10D(L_49, L_50, L_52, L_53, NULL);
	}

IL_00d4:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_54 = ___0_data;
		int32_t* L_55;
		L_55 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_54, NULL);
		int32_t L_56 = il2cpp_codegen_ldind<int32_t, int32_t>(L_55);
		V_2 = L_56;
		int32_t L_57 = V_2;
		if ((((int32_t)L_57) < ((int32_t)0)))
		{
			goto IL_00f5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_58 = ___0_data;
		int32_t* L_59;
		L_59 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_58, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___next;
		int32_t L_62 = V_2;
		intptr_t L_63 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_62,NULL));
		int32_t L_64 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(L_63, 4))))));
		il2cpp_codegen_stind<int32_t>((int32_t*)L_59, (int32_t)L_64);
		goto IL_0107;
	}

IL_00f5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_65 = ___0_data;
		NullCheck(L_65);
		int32_t* L_66 = (int32_t*)(&L_65->___allocatedIndexLength);
		int32_t* L_67 = L_66;
		int32_t L_68 = il2cpp_codegen_ldind<int32_t, int32_t>(L_67);
		V_9 = L_68;
		int32_t L_69 = V_9;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_67, (int32_t)((int32_t)il2cpp_codegen_add(L_69, 1)));
		int32_t L_70 = V_9;
		V_2 = L_70;
	}

IL_0107:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_71 = ___0_data;
		NullCheck(L_71);
		uint8_t* L_72 = L_71->___keys;
		int32_t L_73 = V_2;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_74 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m0E708F519A1821659A5DB22A6551BF3AD6584AF2_inline((void*)L_72, L_73, L_74, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_75 = ___0_data;
		NullCheck(L_75);
		uint8_t* L_76 = L_75->___values;
		int32_t L_77 = V_2;
		MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 L_78 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisMeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_m378298AA06643C684B01DE5BAD5877C2D6001F45_inline((void*)L_76, L_77, L_78, NULL);
		int32_t L_79;
		L_79 = EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		int32_t L_81 = L_80->___bucketCapacityMask;
		V_4 = ((int32_t)(L_79&L_81));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___buckets;
		V_5 = (int32_t*)L_83;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		uint8_t* L_85 = L_84->___next;
		V_3 = (int32_t*)L_85;
		int32_t* L_86 = V_3;
		int32_t L_87 = V_2;
		intptr_t L_88 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_87,NULL));
		int32_t* L_89 = V_5;
		int32_t L_90 = V_4;
		intptr_t L_91 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_90,NULL));
		int32_t L_92 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(L_91, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(L_88, 4)))), (int32_t)L_92);
		int32_t* L_93 = V_5;
		int32_t L_94 = V_4;
		intptr_t L_95 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_94,NULL));
		int32_t L_96 = V_2;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(L_95, 4)))), (int32_t)L_96);
		return (bool)1;
	}

IL_0162:
	{
		return (bool)0;
	}
}
// Method Definition Index: 65302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mB8E32411B05CBD594DD2FF9DDFA9F4398236619F (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		intptr_t L_11 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_10,NULL));
		int32_t L_12 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(L_11, 4)))));
		V_5 = L_12;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		uint8_t* L_14 = L_13->___keys;
		int32_t L_15 = V_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_16;
		L_16 = UnsafeUtility_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mCA80AB19D82B40C3B0B1BC9A4BE2F87BAFD9BE64_inline((void*)L_14, L_15, NULL);
		V_6 = L_16;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_17 = ___1_key;
		bool L_18;
		L_18 = EntityId_Equals_mF0F102A496CE0685C89D0C8EF34E77F9EE064EB8((&V_6), L_17, NULL);
		if (!L_18)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_21 = V_1;
		int32_t L_22 = V_3;
		intptr_t L_23 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_22,NULL));
		int32_t* L_24 = V_2;
		int32_t L_25 = V_5;
		intptr_t L_26 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_25,NULL));
		int32_t L_27 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(L_26, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(L_23, 4)))), (int32_t)L_27);
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_28 = V_2;
		int32_t L_29 = V_4;
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_29,NULL));
		int32_t* L_31 = V_2;
		int32_t L_32 = V_5;
		intptr_t L_33 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_32,NULL));
		int32_t L_34 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(L_33, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_30, 4)))), (int32_t)L_34);
	}

IL_0086:
	{
		int32_t* L_35 = V_2;
		int32_t L_36 = V_5;
		intptr_t L_37 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_36,NULL));
		int32_t L_38 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(L_37, 4)))));
		int32_t* L_39 = V_2;
		int32_t L_40 = V_5;
		intptr_t L_41 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_40,NULL));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t* L_43;
		L_43 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_42, NULL);
		int32_t L_44 = il2cpp_codegen_ldind<int32_t, int32_t>(L_43);
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(L_41, 4)))), (int32_t)L_44);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_45 = ___0_data;
		int32_t* L_46;
		L_46 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_45, NULL);
		int32_t L_47 = V_5;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_46, (int32_t)L_47);
		V_5 = L_38;
		bool L_48 = ___2_isMultiHashMap;
		if (L_48)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_49 = V_5;
		V_4 = L_49;
		int32_t* L_50 = V_2;
		int32_t L_51 = V_5;
		intptr_t L_52 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_51,NULL));
		int32_t L_53 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_50, ((intptr_t)il2cpp_codegen_multiply(L_52, 4)))));
		V_5 = L_53;
	}

IL_00bb:
	{
		int32_t L_54 = V_5;
		if ((((int32_t)L_54) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_55 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		int32_t L_57 = L_56->___keyCapacity;
		if ((((int32_t)L_55) < ((int32_t)L_57)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_58 = V_0;
		return L_58;
	}
}
// Method Definition Index: 65303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_mF71C553FBEDB8D4D629001E65BAFC909082A0027 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 ___1_it, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_4 = (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410(L_4, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		int32_t L_11 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, 4)))));
		V_3 = L_11;
		int32_t L_12 = V_3;
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 L_13 = ___1_it;
		int32_t L_14 = L_13.___EntryIndex;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_15 = V_0;
		int32_t L_16 = V_2;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_16,NULL));
		int32_t* L_18 = V_1;
		int32_t L_19 = V_3;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(L_17, 4)))), (int32_t)L_21);
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_22 = V_1;
		int32_t L_23 = V_3;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_23,NULL));
		int32_t L_25 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, 4)))));
		V_3 = L_25;
	}

IL_0051:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_27 = V_1;
		int32_t L_28 = V_3;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		int32_t L_30 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, 4)))));
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 L_31 = ___1_it;
		int32_t L_32 = L_31.___EntryIndex;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_32))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_33 = V_3;
		int32_t* L_34 = V_1;
		int32_t L_35 = V_3;
		intptr_t L_36 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_35,NULL));
		int32_t* L_37 = V_1;
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 L_38 = ___1_it;
		int32_t L_39 = L_38.___EntryIndex;
		intptr_t L_40 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_39,NULL));
		int32_t L_41 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(L_40, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(L_36, 4)))), (int32_t)L_41);
	}

IL_007b:
	{
		int32_t* L_42 = V_1;
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		intptr_t L_45 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_44,NULL));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		int32_t* L_47;
		L_47 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_46, NULL);
		int32_t L_48 = il2cpp_codegen_ldind<int32_t, int32_t>(L_47);
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(L_45, 4)))), (int32_t)L_48);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		int32_t* L_50;
		L_50 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_49, NULL);
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 L_51 = ___1_it;
		int32_t L_52 = L_51.___EntryIndex;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_50, (int32_t)L_52);
		return;
	}
}
// Method Definition Index: 65305
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA3570671F75F69AD881E869D362E6324BDA4F646 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254* ___2_item, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___3_it, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* L_0 = ___3_it;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* L_5 = ___3_it;
		V_2 = (-1);
		L_5->___NextEntryIndex = (-1);
		int32_t L_6 = V_2;
		L_4->___EntryIndex = L_6;
		MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254* L_7 = ___2_item;
		il2cpp_codegen_initobj(L_7, sizeof(MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		uint8_t* L_9 = L_8->___buckets;
		V_0 = (int32_t*)L_9;
		int32_t L_10;
		L_10 = EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		NullCheck(L_11);
		int32_t L_12 = L_11->___bucketCapacityMask;
		V_1 = ((int32_t)(L_10&L_12));
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* L_13 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* L_14 = ___3_it;
		int32_t* L_15 = V_0;
		int32_t L_16 = V_1;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_16,NULL));
		int32_t L_18 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(L_17, 4)))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_14->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_13->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m931276E3D1E0B8B528A865C70483B1DE5ECF362D(L_21, L_22, L_23, NULL);
		return L_24;
	}
}
// Method Definition Index: 65306
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m931276E3D1E0B8B528A865C70483B1DE5ECF362D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254* ___1_item, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___2_it, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		int32_t L_14 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, 4)))));
		V_0 = L_14;
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t L_18 = L_17->___keyCapacity;
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		NullCheck(L_19);
		uint8_t* L_20 = L_19->___keys;
		int32_t L_21 = V_0;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_22;
		L_22 = UnsafeUtility_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mCA80AB19D82B40C3B0B1BC9A4BE2F87BAFD9BE64_inline((void*)L_20, L_21, NULL);
		V_2 = L_22;
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* L_23 = ___2_it;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_24 = L_23->___key;
		bool L_25;
		L_25 = EntityId_Equals_mF0F102A496CE0685C89D0C8EF34E77F9EE064EB8((&V_2), L_24, NULL);
		if (!L_25)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* L_26 = ___2_it;
		int32_t* L_27 = V_1;
		int32_t L_28 = V_0;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		int32_t L_30 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, 4)))));
		L_26->___NextEntryIndex = L_30;
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* L_31 = ___2_it;
		int32_t L_32 = V_0;
		L_31->___EntryIndex = L_32;
		MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254* L_33 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		uint8_t* L_35 = L_34->___values;
		int32_t L_36 = V_0;
		MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 L_37;
		L_37 = UnsafeUtility_ReadArrayElement_TisMeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_mAEB04091BED5994494AB1521F1CA283C9A55DA84_inline((void*)L_35, L_36, NULL);
		*(MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254*)L_33 = L_37;
		return (bool)1;
	}
}
// Method Definition Index: 65307
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m6CC403BAF0E486C5F36FDCA83D4ABA85504C5EFD (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___1_it, MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254* ___2_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254* L_9 = ___2_item;
		MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 L_10 = (*(MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254*)L_9);
		UnsafeUtility_WriteArrayElement_TisMeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_m378298AA06643C684B01DE5BAD5877C2D6001F45_inline((void*)L_7, L_8, L_10, NULL);
		return (bool)1;
	}
}
// Method Definition Index: 65308
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m5D511CFC736B02BD6CE5C1C31BC7E19C2D319E22 (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
// Method Definition Index: 65309
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m9318B9E1D1046968A15389C2D3E284EE01EB21FC (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
// Method Definition Index: 65310
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mD14BA10702429FD6CC7EA8F4B953886C34162118 (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 65311
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_mF79549F41B881A70A747A67AAEBE1F90FCB71995 (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
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
// Method Definition Index: 65296
// Method Definition Index: 65297
// Method Definition Index: 65298
// Method Definition Index: 65299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m0C278C27C9964492E19C48470D1FAEB77B22D5A3 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m249B922C777820569D99F1E5DBD5800BC00ABEC5(L_0, L_1, (&V_0), (&V_1), NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m2232A1CA7E7C60BCCFED39BFEEDEC0ECE268A33B(L_3, L_4, NULL);
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m0E708F519A1821659A5DB22A6551BF3AD6584AF2_inline((void*)L_7, L_8, L_9, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisUnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750_mC6886C418E413B4D0D54190150D16F8A609FE34B_inline((void*)L_11, L_12, L_13, NULL);
		int32_t L_14;
		L_14 = EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		intptr_t L_21 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_20,NULL));
		int32_t L_22 = V_2;
		int32_t L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(L_21, 4)))), L_22, (-1));
		if ((((int32_t)L_23) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		uint8_t* L_25 = L_24->___next;
		V_5 = (int32_t*)L_25;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_26 = V_4;
		int32_t L_27 = V_3;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t L_29 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))));
		V_6 = L_29;
		int32_t* L_30 = V_5;
		int32_t L_31 = V_2;
		intptr_t L_32 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_31,NULL));
		int32_t L_33 = V_6;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(L_32, 4)))), (int32_t)L_33);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_35 = ___1_key;
		bool L_36;
		L_36 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m249B922C777820569D99F1E5DBD5800BC00ABEC5(L_34, L_35, (&V_0), (&V_1), NULL);
		if (!L_36)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		int32_t L_38 = V_2;
		int32_t L_39 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_mC5D7A15AEC0733F45363D7857364D284194D6B2F(L_37, L_38, L_39, NULL);
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_40 = V_4;
		int32_t L_41 = V_3;
		intptr_t L_42 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_41,NULL));
		int32_t L_43 = V_2;
		int32_t L_44 = V_6;
		int32_t L_45;
		L_45 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(L_42, 4)))), L_43, L_44);
		int32_t L_46 = V_6;
		if ((!(((uint32_t)L_45) == ((uint32_t)L_46))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
// Method Definition Index: 65300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_mFE79C6CCDE5C842014B5E8504639C9FE896DF9BC (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m2232A1CA7E7C60BCCFED39BFEEDEC0ECE268A33B(L_0, L_1, NULL);
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m0E708F519A1821659A5DB22A6551BF3AD6584AF2_inline((void*)L_4, L_5, L_6, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisUnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750_mC6886C418E413B4D0D54190150D16F8A609FE34B_inline((void*)L_8, L_9, L_10, NULL);
		int32_t L_11;
		L_11 = EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		V_3 = L_21;
		int32_t* L_22 = V_4;
		int32_t L_23 = V_0;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_23,NULL));
		int32_t L_25 = V_3;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, 4)))), (int32_t)L_25);
		int32_t* L_26 = V_2;
		int32_t L_27 = V_1;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t L_29 = V_0;
		int32_t L_30 = V_3;
		int32_t L_31;
		L_31 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))), L_29, L_30);
		int32_t L_32 = V_3;
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 65301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mABA97D9F00AF37BA75D8E6E60C6E7674CACCEE47 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m249B922C777820569D99F1E5DBD5800BC00ABEC5(L_1, L_2, (&V_0), (&V_1), NULL);
		if (L_3)
		{
			goto IL_0162;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00d4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = il2cpp_codegen_ldind<int32_t, int32_t>(L_9);
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16))),NULL));
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_15, 4)))));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		int32_t* L_18;
		L_18 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_17, NULL);
		int32_t L_19 = V_7;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_19, ((int32_t)16))),NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		V_2 = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		uint8_t* L_23 = L_22->___next;
		V_3 = (int32_t*)L_23;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		int32_t* L_25;
		L_25 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_24, NULL);
		int32_t L_26 = V_7;
		intptr_t L_27 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_26, ((int32_t)16))),NULL));
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_29,NULL));
		int32_t L_31 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_30, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(L_27, 4)))), (int32_t)L_31);
		int32_t* L_32 = V_3;
		int32_t L_33 = V_2;
		intptr_t L_34 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_33,NULL));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(L_34, 4)))), (int32_t)(-1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = V_2;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_36, (int32_t)L_37);
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_38 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0097:
	{
		int32_t L_39 = V_7;
		int32_t L_40 = V_6;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		int32_t L_43 = il2cpp_codegen_ldind<int32_t, int32_t>(L_42);
		if ((((int32_t)L_43) >= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		NullCheck(L_44);
		int32_t L_45 = L_44->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)1073741823)))))
		{
			goto IL_00b6;
		}
	}
	{
		return (bool)0;
	}

IL_00b6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		int32_t L_48;
		L_48 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_47, NULL);
		V_8 = L_48;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		int32_t L_50 = V_8;
		int32_t L_51 = V_8;
		int64_t L_52;
		L_52 = UnsafeParallelHashMapData_GetBucketSize_mBE376CBC384B796DE89740ECD5EA9C7F520D93D7(L_51, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_53 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisUnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750_m8CBF4C11500731B2BA768362607ED8B5FCE9B520(L_49, L_50, L_52, L_53, NULL);
	}

IL_00d4:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_54 = ___0_data;
		int32_t* L_55;
		L_55 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_54, NULL);
		int32_t L_56 = il2cpp_codegen_ldind<int32_t, int32_t>(L_55);
		V_2 = L_56;
		int32_t L_57 = V_2;
		if ((((int32_t)L_57) < ((int32_t)0)))
		{
			goto IL_00f5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_58 = ___0_data;
		int32_t* L_59;
		L_59 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_58, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___next;
		int32_t L_62 = V_2;
		intptr_t L_63 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_62,NULL));
		int32_t L_64 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(L_63, 4))))));
		il2cpp_codegen_stind<int32_t>((int32_t*)L_59, (int32_t)L_64);
		goto IL_0107;
	}

IL_00f5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_65 = ___0_data;
		NullCheck(L_65);
		int32_t* L_66 = (int32_t*)(&L_65->___allocatedIndexLength);
		int32_t* L_67 = L_66;
		int32_t L_68 = il2cpp_codegen_ldind<int32_t, int32_t>(L_67);
		V_9 = L_68;
		int32_t L_69 = V_9;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_67, (int32_t)((int32_t)il2cpp_codegen_add(L_69, 1)));
		int32_t L_70 = V_9;
		V_2 = L_70;
	}

IL_0107:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_71 = ___0_data;
		NullCheck(L_71);
		uint8_t* L_72 = L_71->___keys;
		int32_t L_73 = V_2;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_74 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m0E708F519A1821659A5DB22A6551BF3AD6584AF2_inline((void*)L_72, L_73, L_74, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_75 = ___0_data;
		NullCheck(L_75);
		uint8_t* L_76 = L_75->___values;
		int32_t L_77 = V_2;
		UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 L_78 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisUnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750_mC6886C418E413B4D0D54190150D16F8A609FE34B_inline((void*)L_76, L_77, L_78, NULL);
		int32_t L_79;
		L_79 = EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		int32_t L_81 = L_80->___bucketCapacityMask;
		V_4 = ((int32_t)(L_79&L_81));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___buckets;
		V_5 = (int32_t*)L_83;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		uint8_t* L_85 = L_84->___next;
		V_3 = (int32_t*)L_85;
		int32_t* L_86 = V_3;
		int32_t L_87 = V_2;
		intptr_t L_88 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_87,NULL));
		int32_t* L_89 = V_5;
		int32_t L_90 = V_4;
		intptr_t L_91 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_90,NULL));
		int32_t L_92 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(L_91, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(L_88, 4)))), (int32_t)L_92);
		int32_t* L_93 = V_5;
		int32_t L_94 = V_4;
		intptr_t L_95 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_94,NULL));
		int32_t L_96 = V_2;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(L_95, 4)))), (int32_t)L_96);
		return (bool)1;
	}

IL_0162:
	{
		return (bool)0;
	}
}
// Method Definition Index: 65302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mE12AA4234BD15843F6C5912D4B63D61059312261 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		intptr_t L_11 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_10,NULL));
		int32_t L_12 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(L_11, 4)))));
		V_5 = L_12;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		uint8_t* L_14 = L_13->___keys;
		int32_t L_15 = V_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_16;
		L_16 = UnsafeUtility_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mCA80AB19D82B40C3B0B1BC9A4BE2F87BAFD9BE64_inline((void*)L_14, L_15, NULL);
		V_6 = L_16;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_17 = ___1_key;
		bool L_18;
		L_18 = EntityId_Equals_mF0F102A496CE0685C89D0C8EF34E77F9EE064EB8((&V_6), L_17, NULL);
		if (!L_18)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_21 = V_1;
		int32_t L_22 = V_3;
		intptr_t L_23 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_22,NULL));
		int32_t* L_24 = V_2;
		int32_t L_25 = V_5;
		intptr_t L_26 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_25,NULL));
		int32_t L_27 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(L_26, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(L_23, 4)))), (int32_t)L_27);
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_28 = V_2;
		int32_t L_29 = V_4;
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_29,NULL));
		int32_t* L_31 = V_2;
		int32_t L_32 = V_5;
		intptr_t L_33 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_32,NULL));
		int32_t L_34 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(L_33, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_30, 4)))), (int32_t)L_34);
	}

IL_0086:
	{
		int32_t* L_35 = V_2;
		int32_t L_36 = V_5;
		intptr_t L_37 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_36,NULL));
		int32_t L_38 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(L_37, 4)))));
		int32_t* L_39 = V_2;
		int32_t L_40 = V_5;
		intptr_t L_41 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_40,NULL));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t* L_43;
		L_43 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_42, NULL);
		int32_t L_44 = il2cpp_codegen_ldind<int32_t, int32_t>(L_43);
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(L_41, 4)))), (int32_t)L_44);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_45 = ___0_data;
		int32_t* L_46;
		L_46 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_45, NULL);
		int32_t L_47 = V_5;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_46, (int32_t)L_47);
		V_5 = L_38;
		bool L_48 = ___2_isMultiHashMap;
		if (L_48)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_49 = V_5;
		V_4 = L_49;
		int32_t* L_50 = V_2;
		int32_t L_51 = V_5;
		intptr_t L_52 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_51,NULL));
		int32_t L_53 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_50, ((intptr_t)il2cpp_codegen_multiply(L_52, 4)))));
		V_5 = L_53;
	}

IL_00bb:
	{
		int32_t L_54 = V_5;
		if ((((int32_t)L_54) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_55 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		int32_t L_57 = L_56->___keyCapacity;
		if ((((int32_t)L_55) < ((int32_t)L_57)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_58 = V_0;
		return L_58;
	}
}
// Method Definition Index: 65303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m275FD2A86DA11942EEB038D0CD7BC9523BC706A6 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 ___1_it, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_4 = (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410(L_4, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		int32_t L_11 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, 4)))));
		V_3 = L_11;
		int32_t L_12 = V_3;
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 L_13 = ___1_it;
		int32_t L_14 = L_13.___EntryIndex;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_15 = V_0;
		int32_t L_16 = V_2;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_16,NULL));
		int32_t* L_18 = V_1;
		int32_t L_19 = V_3;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(L_17, 4)))), (int32_t)L_21);
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_22 = V_1;
		int32_t L_23 = V_3;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_23,NULL));
		int32_t L_25 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, 4)))));
		V_3 = L_25;
	}

IL_0051:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_27 = V_1;
		int32_t L_28 = V_3;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		int32_t L_30 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, 4)))));
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 L_31 = ___1_it;
		int32_t L_32 = L_31.___EntryIndex;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_32))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_33 = V_3;
		int32_t* L_34 = V_1;
		int32_t L_35 = V_3;
		intptr_t L_36 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_35,NULL));
		int32_t* L_37 = V_1;
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 L_38 = ___1_it;
		int32_t L_39 = L_38.___EntryIndex;
		intptr_t L_40 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_39,NULL));
		int32_t L_41 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(L_40, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(L_36, 4)))), (int32_t)L_41);
	}

IL_007b:
	{
		int32_t* L_42 = V_1;
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		intptr_t L_45 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_44,NULL));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		int32_t* L_47;
		L_47 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_46, NULL);
		int32_t L_48 = il2cpp_codegen_ldind<int32_t, int32_t>(L_47);
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(L_45, 4)))), (int32_t)L_48);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		int32_t* L_50;
		L_50 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_49, NULL);
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 L_51 = ___1_it;
		int32_t L_52 = L_51.___EntryIndex;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_50, (int32_t)L_52);
		return;
	}
}
// Method Definition Index: 65305
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m249B922C777820569D99F1E5DBD5800BC00ABEC5 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___1_key, UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750* ___2_item, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___3_it, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* L_0 = ___3_it;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* L_5 = ___3_it;
		V_2 = (-1);
		L_5->___NextEntryIndex = (-1);
		int32_t L_6 = V_2;
		L_4->___EntryIndex = L_6;
		UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750* L_7 = ___2_item;
		il2cpp_codegen_initobj(L_7, sizeof(UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		uint8_t* L_9 = L_8->___buckets;
		V_0 = (int32_t*)L_9;
		int32_t L_10;
		L_10 = EntityId_GetHashCode_m7B7BE3CC221C5EEAB3D2E64BD632F057E7931410((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		NullCheck(L_11);
		int32_t L_12 = L_11->___bucketCapacityMask;
		V_1 = ((int32_t)(L_10&L_12));
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* L_13 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* L_14 = ___3_it;
		int32_t* L_15 = V_0;
		int32_t L_16 = V_1;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_16,NULL));
		int32_t L_18 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(L_17, 4)))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_14->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_13->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mAB20D607661E818021519DE0E1F119A0D41917B4(L_21, L_22, L_23, NULL);
		return L_24;
	}
}
// Method Definition Index: 65306
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mAB20D607661E818021519DE0E1F119A0D41917B4 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750* ___1_item, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___2_it, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		int32_t L_14 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, 4)))));
		V_0 = L_14;
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t L_18 = L_17->___keyCapacity;
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		NullCheck(L_19);
		uint8_t* L_20 = L_19->___keys;
		int32_t L_21 = V_0;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_22;
		L_22 = UnsafeUtility_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mCA80AB19D82B40C3B0B1BC9A4BE2F87BAFD9BE64_inline((void*)L_20, L_21, NULL);
		V_2 = L_22;
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* L_23 = ___2_it;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_24 = L_23->___key;
		bool L_25;
		L_25 = EntityId_Equals_mF0F102A496CE0685C89D0C8EF34E77F9EE064EB8((&V_2), L_24, NULL);
		if (!L_25)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* L_26 = ___2_it;
		int32_t* L_27 = V_1;
		int32_t L_28 = V_0;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		int32_t L_30 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, 4)))));
		L_26->___NextEntryIndex = L_30;
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* L_31 = ___2_it;
		int32_t L_32 = V_0;
		L_31->___EntryIndex = L_32;
		UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750* L_33 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		uint8_t* L_35 = L_34->___values;
		int32_t L_36 = V_0;
		UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 L_37;
		L_37 = UnsafeUtility_ReadArrayElement_TisUnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750_m6C484995D5C95208A4EB1F0C7664EC42A74DE670_inline((void*)L_35, L_36, NULL);
		*(UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750*)L_33 = L_37;
		return (bool)1;
	}
}
// Method Definition Index: 65307
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m450D3CC2E167266AEE6D807F3A19FA1862494C0B (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* ___1_it, UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750* ___2_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750* L_9 = ___2_item;
		UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 L_10 = (*(UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750*)L_9);
		UnsafeUtility_WriteArrayElement_TisUnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750_mC6886C418E413B4D0D54190150D16F8A609FE34B_inline((void*)L_7, L_8, L_10, NULL);
		return (bool)1;
	}
}
// Method Definition Index: 65308
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m650B02AAC68FA60AB67AB0C6E0F4AF4779203746 (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
// Method Definition Index: 65309
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m73F48B81C726EBF79496B47992331F51A47A3E7E (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
// Method Definition Index: 65310
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m93EB14C4F4DEBF00061E5529EC403D8D2C77E1FD (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 65311
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m3AE0405D14123008F9A512A0DEAC24096024DEAC (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
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
// Method Definition Index: 65296
// Method Definition Index: 65297
// Method Definition Index: 65298
// Method Definition Index: 65299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mD5CC9322933890EE947656A059FD347B73718A7D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___1_key, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit);
	//<source_info:<no-source>:1>
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m135E8EB58E815535E586523B1D2DB1425912B3B7(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_mEC61B08C0F757DD7EE5B900CEE5E137401AB6CF6(L_3, L_4, NULL);
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m9F2800AFAC18DA2E9DB4352D9A82AC95FA0995FA_inline((void*)L_7, L_8, L_9, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m60CD2C2DE2B559F255B8BEA36B0554E698FF9651_inline((void*)L_11, L_12, L_13, NULL);
		CHECKED_LOCAL_INIT(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit,(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_14;
		L_14 = GPUArchetypeHandle_GetHashCode_mF816A596DEE9C2CA813E280D5DB3FE046085480C((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		intptr_t L_21 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_20,NULL));
		int32_t L_22 = V_2;
		int32_t L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(L_21, 4)))), L_22, (-1));
		if ((((int32_t)L_23) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		uint8_t* L_25 = L_24->___next;
		V_5 = (int32_t*)L_25;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_26 = V_4;
		int32_t L_27 = V_3;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t L_29 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))));
		V_6 = L_29;
		int32_t* L_30 = V_5;
		int32_t L_31 = V_2;
		intptr_t L_32 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_31,NULL));
		int32_t L_33 = V_6;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(L_32, 4)))), (int32_t)L_33);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_35 = ___1_key;
		bool L_36;
		L_36 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m135E8EB58E815535E586523B1D2DB1425912B3B7(L_34, L_35, (&V_0), (&V_1), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		if (!L_36)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		int32_t L_38 = V_2;
		int32_t L_39 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m9944A0761FCB32DE97DCC6953C577E34FA719524(L_37, L_38, L_39, NULL);
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_40 = V_4;
		int32_t L_41 = V_3;
		intptr_t L_42 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_41,NULL));
		int32_t L_43 = V_2;
		int32_t L_44 = V_6;
		int32_t L_45;
		L_45 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(L_42, 4)))), L_43, L_44);
		int32_t L_46 = V_6;
		if ((!(((uint32_t)L_45) == ((uint32_t)L_46))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
// Method Definition Index: 65300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m79D34C4CAE080107713878D944BBCBD13D3DB546 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___1_key, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_mEC61B08C0F757DD7EE5B900CEE5E137401AB6CF6(L_0, L_1, NULL);
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m9F2800AFAC18DA2E9DB4352D9A82AC95FA0995FA_inline((void*)L_4, L_5, L_6, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m60CD2C2DE2B559F255B8BEA36B0554E698FF9651_inline((void*)L_8, L_9, L_10, NULL);
		CHECKED_LOCAL_INIT(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit,(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = GPUArchetypeHandle_GetHashCode_mF816A596DEE9C2CA813E280D5DB3FE046085480C((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		V_3 = L_21;
		int32_t* L_22 = V_4;
		int32_t L_23 = V_0;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_23,NULL));
		int32_t L_25 = V_3;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, 4)))), (int32_t)L_25);
		int32_t* L_26 = V_2;
		int32_t L_27 = V_1;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t L_29 = V_0;
		int32_t L_30 = V_3;
		int32_t L_31;
		L_31 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))), L_29, L_30);
		int32_t L_32 = V_3;
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 65301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m4C9FDF111C62CE19E47A492A446268B1856C0E24 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___1_key, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit);
	//<source_info:<no-source>:1>
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m135E8EB58E815535E586523B1D2DB1425912B3B7(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		if (L_3)
		{
			goto IL_0162;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00d4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = il2cpp_codegen_ldind<int32_t, int32_t>(L_9);
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16))),NULL));
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_15, 4)))));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		int32_t* L_18;
		L_18 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_17, NULL);
		int32_t L_19 = V_7;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_19, ((int32_t)16))),NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		V_2 = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		uint8_t* L_23 = L_22->___next;
		V_3 = (int32_t*)L_23;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		int32_t* L_25;
		L_25 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_24, NULL);
		int32_t L_26 = V_7;
		intptr_t L_27 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_26, ((int32_t)16))),NULL));
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_29,NULL));
		int32_t L_31 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_30, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(L_27, 4)))), (int32_t)L_31);
		int32_t* L_32 = V_3;
		int32_t L_33 = V_2;
		intptr_t L_34 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_33,NULL));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(L_34, 4)))), (int32_t)(-1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = V_2;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_36, (int32_t)L_37);
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_38 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0097:
	{
		int32_t L_39 = V_7;
		int32_t L_40 = V_6;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		int32_t L_43 = il2cpp_codegen_ldind<int32_t, int32_t>(L_42);
		if ((((int32_t)L_43) >= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		NullCheck(L_44);
		int32_t L_45 = L_44->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)1073741823)))))
		{
			goto IL_00b6;
		}
	}
	{
		return (bool)0;
	}

IL_00b6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		int32_t L_48;
		L_48 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_47, NULL);
		V_8 = L_48;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		int32_t L_50 = V_8;
		int32_t L_51 = V_8;
		int64_t L_52;
		L_52 = UnsafeParallelHashMapData_GetBucketSize_mBE376CBC384B796DE89740ECD5EA9C7F520D93D7(L_51, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_53 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m53F008BF155FA3071AA803295CD52B877FA97301(L_49, L_50, L_52, L_53, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	}

IL_00d4:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_54 = ___0_data;
		int32_t* L_55;
		L_55 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_54, NULL);
		int32_t L_56 = il2cpp_codegen_ldind<int32_t, int32_t>(L_55);
		V_2 = L_56;
		int32_t L_57 = V_2;
		if ((((int32_t)L_57) < ((int32_t)0)))
		{
			goto IL_00f5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_58 = ___0_data;
		int32_t* L_59;
		L_59 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_58, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___next;
		int32_t L_62 = V_2;
		intptr_t L_63 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_62,NULL));
		int32_t L_64 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(L_63, 4))))));
		il2cpp_codegen_stind<int32_t>((int32_t*)L_59, (int32_t)L_64);
		goto IL_0107;
	}

IL_00f5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_65 = ___0_data;
		NullCheck(L_65);
		int32_t* L_66 = (int32_t*)(&L_65->___allocatedIndexLength);
		int32_t* L_67 = L_66;
		int32_t L_68 = il2cpp_codegen_ldind<int32_t, int32_t>(L_67);
		V_9 = L_68;
		int32_t L_69 = V_9;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_67, (int32_t)((int32_t)il2cpp_codegen_add(L_69, 1)));
		int32_t L_70 = V_9;
		V_2 = L_70;
	}

IL_0107:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_71 = ___0_data;
		NullCheck(L_71);
		uint8_t* L_72 = L_71->___keys;
		int32_t L_73 = V_2;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_74 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m9F2800AFAC18DA2E9DB4352D9A82AC95FA0995FA_inline((void*)L_72, L_73, L_74, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_75 = ___0_data;
		NullCheck(L_75);
		uint8_t* L_76 = L_75->___values;
		int32_t L_77 = V_2;
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 L_78 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m60CD2C2DE2B559F255B8BEA36B0554E698FF9651_inline((void*)L_76, L_77, L_78, NULL);
		CHECKED_LOCAL_INIT(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit,(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_79;
		L_79 = GPUArchetypeHandle_GetHashCode_mF816A596DEE9C2CA813E280D5DB3FE046085480C((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		int32_t L_81 = L_80->___bucketCapacityMask;
		V_4 = ((int32_t)(L_79&L_81));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___buckets;
		V_5 = (int32_t*)L_83;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		uint8_t* L_85 = L_84->___next;
		V_3 = (int32_t*)L_85;
		int32_t* L_86 = V_3;
		int32_t L_87 = V_2;
		intptr_t L_88 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_87,NULL));
		int32_t* L_89 = V_5;
		int32_t L_90 = V_4;
		intptr_t L_91 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_90,NULL));
		int32_t L_92 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(L_91, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(L_88, 4)))), (int32_t)L_92);
		int32_t* L_93 = V_5;
		int32_t L_94 = V_4;
		intptr_t L_95 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_94,NULL));
		int32_t L_96 = V_2;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(L_95, 4)))), (int32_t)L_96);
		return (bool)1;
	}

IL_0162:
	{
		return (bool)0;
	}
}
// Method Definition Index: 65302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m994FAD567F266E84F06126E92AA551394F41C5D5 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		CHECKED_LOCAL_INIT(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit,(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_6;
		L_6 = GPUArchetypeHandle_GetHashCode_mF816A596DEE9C2CA813E280D5DB3FE046085480C((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		intptr_t L_11 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_10,NULL));
		int32_t L_12 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(L_11, 4)))));
		V_5 = L_12;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		uint8_t* L_14 = L_13->___keys;
		int32_t L_15 = V_5;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_16;
		L_16 = UnsafeUtility_ReadArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m7AA25F6024B181108CC3A96104D0E5ABCED519C6_inline((void*)L_14, L_15, NULL);
		V_6 = L_16;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_17 = ___1_key;
		CHECKED_LOCAL_INIT(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit,(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_18;
		L_18 = GPUArchetypeHandle_Equals_mFE673CC36DDBA65242C25B256411A4EFA1638C1C((&V_6), L_17, NULL);
		if (!L_18)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_21 = V_1;
		int32_t L_22 = V_3;
		intptr_t L_23 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_22,NULL));
		int32_t* L_24 = V_2;
		int32_t L_25 = V_5;
		intptr_t L_26 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_25,NULL));
		int32_t L_27 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(L_26, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(L_23, 4)))), (int32_t)L_27);
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_28 = V_2;
		int32_t L_29 = V_4;
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_29,NULL));
		int32_t* L_31 = V_2;
		int32_t L_32 = V_5;
		intptr_t L_33 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_32,NULL));
		int32_t L_34 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(L_33, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_30, 4)))), (int32_t)L_34);
	}

IL_0086:
	{
		int32_t* L_35 = V_2;
		int32_t L_36 = V_5;
		intptr_t L_37 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_36,NULL));
		int32_t L_38 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(L_37, 4)))));
		int32_t* L_39 = V_2;
		int32_t L_40 = V_5;
		intptr_t L_41 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_40,NULL));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t* L_43;
		L_43 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_42, NULL);
		int32_t L_44 = il2cpp_codegen_ldind<int32_t, int32_t>(L_43);
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(L_41, 4)))), (int32_t)L_44);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_45 = ___0_data;
		int32_t* L_46;
		L_46 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_45, NULL);
		int32_t L_47 = V_5;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_46, (int32_t)L_47);
		V_5 = L_38;
		bool L_48 = ___2_isMultiHashMap;
		if (L_48)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_49 = V_5;
		V_4 = L_49;
		int32_t* L_50 = V_2;
		int32_t L_51 = V_5;
		intptr_t L_52 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_51,NULL));
		int32_t L_53 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_50, ((intptr_t)il2cpp_codegen_multiply(L_52, 4)))));
		V_5 = L_53;
	}

IL_00bb:
	{
		int32_t L_54 = V_5;
		if ((((int32_t)L_54) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_55 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		int32_t L_57 = L_56->___keyCapacity;
		if ((((int32_t)L_55) < ((int32_t)L_57)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_58 = V_0;
		return L_58;
	}
}
// Method Definition Index: 65303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_mF09E6B195B96546C43B713A66B585F90625E7AB0 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583 ___1_it, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit);
	//<source_info:<no-source>:1>
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB* L_4 = (GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB*)(&(&___1_it)->___key);
		CHECKED_LOCAL_INIT(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit,(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_5;
		L_5 = GPUArchetypeHandle_GetHashCode_mF816A596DEE9C2CA813E280D5DB3FE046085480C(L_4, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		int32_t L_11 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, 4)))));
		V_3 = L_11;
		int32_t L_12 = V_3;
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583 L_13 = ___1_it;
		int32_t L_14 = L_13.___EntryIndex;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_15 = V_0;
		int32_t L_16 = V_2;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_16,NULL));
		int32_t* L_18 = V_1;
		int32_t L_19 = V_3;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(L_17, 4)))), (int32_t)L_21);
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_22 = V_1;
		int32_t L_23 = V_3;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_23,NULL));
		int32_t L_25 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, 4)))));
		V_3 = L_25;
	}

IL_0051:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_27 = V_1;
		int32_t L_28 = V_3;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		int32_t L_30 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, 4)))));
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583 L_31 = ___1_it;
		int32_t L_32 = L_31.___EntryIndex;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_32))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_33 = V_3;
		int32_t* L_34 = V_1;
		int32_t L_35 = V_3;
		intptr_t L_36 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_35,NULL));
		int32_t* L_37 = V_1;
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583 L_38 = ___1_it;
		int32_t L_39 = L_38.___EntryIndex;
		intptr_t L_40 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_39,NULL));
		int32_t L_41 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(L_40, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(L_36, 4)))), (int32_t)L_41);
	}

IL_007b:
	{
		int32_t* L_42 = V_1;
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583 L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		intptr_t L_45 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_44,NULL));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		int32_t* L_47;
		L_47 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_46, NULL);
		int32_t L_48 = il2cpp_codegen_ldind<int32_t, int32_t>(L_47);
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(L_45, 4)))), (int32_t)L_48);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		int32_t* L_50;
		L_50 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_49, NULL);
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583 L_51 = ___1_it;
		int32_t L_52 = L_51.___EntryIndex;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_50, (int32_t)L_52);
		return;
	}
}
// Method Definition Index: 65305
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m135E8EB58E815535E586523B1D2DB1425912B3B7 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___1_key, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* ___2_item, NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* ___3_it, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* L_0 = ___3_it;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* L_5 = ___3_it;
		V_2 = (-1);
		L_5->___NextEntryIndex = (-1);
		int32_t L_6 = V_2;
		L_4->___EntryIndex = L_6;
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* L_7 = ___2_item;
		il2cpp_codegen_initobj(L_7, sizeof(BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		uint8_t* L_9 = L_8->___buckets;
		V_0 = (int32_t*)L_9;
		CHECKED_LOCAL_INIT(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit,(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_10;
		L_10 = GPUArchetypeHandle_GetHashCode_mF816A596DEE9C2CA813E280D5DB3FE046085480C((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		NullCheck(L_11);
		int32_t L_12 = L_11->___bucketCapacityMask;
		V_1 = ((int32_t)(L_10&L_12));
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* L_13 = ___3_it;
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* L_14 = ___3_it;
		int32_t* L_15 = V_0;
		int32_t L_16 = V_1;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_16,NULL));
		int32_t L_18 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(L_17, 4)))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_14->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_13->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mD8A0FC3AE51961C5C0D870CAE5AE481D6ECF763E(L_21, L_22, L_23, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		return L_24;
	}
}
// Method Definition Index: 65306
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mD8A0FC3AE51961C5C0D870CAE5AE481D6ECF763E (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* ___1_item, NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* ___2_it, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		int32_t L_14 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, 4)))));
		V_0 = L_14;
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t L_18 = L_17->___keyCapacity;
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		NullCheck(L_19);
		uint8_t* L_20 = L_19->___keys;
		int32_t L_21 = V_0;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_22;
		L_22 = UnsafeUtility_ReadArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m7AA25F6024B181108CC3A96104D0E5ABCED519C6_inline((void*)L_20, L_21, NULL);
		V_2 = L_22;
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* L_23 = ___2_it;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_24 = L_23->___key;
		CHECKED_LOCAL_INIT(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit,(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_25;
		L_25 = GPUArchetypeHandle_Equals_mFE673CC36DDBA65242C25B256411A4EFA1638C1C((&V_2), L_24, NULL);
		if (!L_25)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* L_26 = ___2_it;
		int32_t* L_27 = V_1;
		int32_t L_28 = V_0;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		int32_t L_30 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, 4)))));
		L_26->___NextEntryIndex = L_30;
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* L_31 = ___2_it;
		int32_t L_32 = V_0;
		L_31->___EntryIndex = L_32;
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* L_33 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		uint8_t* L_35 = L_34->___values;
		int32_t L_36 = V_0;
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 L_37;
		L_37 = UnsafeUtility_ReadArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m80C61348EC8F9D4F73F0AAA4A69A028E6D599DCD_inline((void*)L_35, L_36, NULL);
		*(BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770*)L_33 = L_37;
		return (bool)1;
	}
}
// Method Definition Index: 65307
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m93A5D346081A082A88E6FC38F7730459DA010D75 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* ___1_it, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* ___2_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770* L_9 = ___2_item;
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 L_10 = (*(BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770*)L_9);
		UnsafeUtility_WriteArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m60CD2C2DE2B559F255B8BEA36B0554E698FF9651_inline((void*)L_7, L_8, L_10, NULL);
		return (bool)1;
	}
}
// Method Definition Index: 65308
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m366020F875A03CC00BB926055C9A9CB80CF800D3 (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
// Method Definition Index: 65309
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m4B0A178DBA19CD8C68D0FB8E2E98254EBF86B993 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
// Method Definition Index: 65310
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mCBF98FF0CCFC4468A92F128657CF484460DB1A1B (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 65311
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m72EBD132675F222B862C058FF5E75D6B7C427B97 (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
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
// Method Definition Index: 65296
// Method Definition Index: 65297
// Method Definition Index: 65298
// Method Definition Index: 65299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mFBEF4C9E6AD73B2002343E2C3FDC46FBCAB3F288 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___1_key, GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit);
	//<source_info:<no-source>:1>
	GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m23409B7EB290925DAEE982FAA55734A8835478D5(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m6215D41D2C328309D4F18588A7E2BD5EFB7C1636(L_3, L_4, NULL);
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m9F2800AFAC18DA2E9DB4352D9A82AC95FA0995FA_inline((void*)L_7, L_8, L_9, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_mED1E1443D3B6D2E654E096AA0A05A54E6B9BD985_inline((void*)L_11, L_12, L_13, NULL);
		CHECKED_LOCAL_INIT(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit,(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_14;
		L_14 = GPUArchetypeHandle_GetHashCode_mF816A596DEE9C2CA813E280D5DB3FE046085480C((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		intptr_t L_21 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_20,NULL));
		int32_t L_22 = V_2;
		int32_t L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(L_21, 4)))), L_22, (-1));
		if ((((int32_t)L_23) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		uint8_t* L_25 = L_24->___next;
		V_5 = (int32_t*)L_25;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_26 = V_4;
		int32_t L_27 = V_3;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t L_29 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))));
		V_6 = L_29;
		int32_t* L_30 = V_5;
		int32_t L_31 = V_2;
		intptr_t L_32 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_31,NULL));
		int32_t L_33 = V_6;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(L_32, 4)))), (int32_t)L_33);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_35 = ___1_key;
		bool L_36;
		L_36 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m23409B7EB290925DAEE982FAA55734A8835478D5(L_34, L_35, (&V_0), (&V_1), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		if (!L_36)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		int32_t L_38 = V_2;
		int32_t L_39 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m256D846E56528254C1FAE4CC5369D5522E72AA61(L_37, L_38, L_39, NULL);
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_40 = V_4;
		int32_t L_41 = V_3;
		intptr_t L_42 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_41,NULL));
		int32_t L_43 = V_2;
		int32_t L_44 = V_6;
		int32_t L_45;
		L_45 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(L_42, 4)))), L_43, L_44);
		int32_t L_46 = V_6;
		if ((!(((uint32_t)L_45) == ((uint32_t)L_46))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
// Method Definition Index: 65300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m728C0E7CA141887F520FB6F9441248FBB6186489 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___1_key, GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m6215D41D2C328309D4F18588A7E2BD5EFB7C1636(L_0, L_1, NULL);
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m9F2800AFAC18DA2E9DB4352D9A82AC95FA0995FA_inline((void*)L_4, L_5, L_6, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_mED1E1443D3B6D2E654E096AA0A05A54E6B9BD985_inline((void*)L_8, L_9, L_10, NULL);
		CHECKED_LOCAL_INIT(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit,(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = GPUArchetypeHandle_GetHashCode_mF816A596DEE9C2CA813E280D5DB3FE046085480C((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		V_3 = L_21;
		int32_t* L_22 = V_4;
		int32_t L_23 = V_0;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_23,NULL));
		int32_t L_25 = V_3;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, 4)))), (int32_t)L_25);
		int32_t* L_26 = V_2;
		int32_t L_27 = V_1;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t L_29 = V_0;
		int32_t L_30 = V_3;
		int32_t L_31;
		L_31 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))), L_29, L_30);
		int32_t L_32 = V_3;
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 65301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m075C447574C2F9D8222EFE69CA3E98BDAC83FA3F (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___1_key, GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit);
	//<source_info:<no-source>:1>
	GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m23409B7EB290925DAEE982FAA55734A8835478D5(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		if (L_3)
		{
			goto IL_0162;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00d4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = il2cpp_codegen_ldind<int32_t, int32_t>(L_9);
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16))),NULL));
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_15, 4)))));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		int32_t* L_18;
		L_18 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_17, NULL);
		int32_t L_19 = V_7;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_19, ((int32_t)16))),NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		V_2 = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		uint8_t* L_23 = L_22->___next;
		V_3 = (int32_t*)L_23;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		int32_t* L_25;
		L_25 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_24, NULL);
		int32_t L_26 = V_7;
		intptr_t L_27 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_26, ((int32_t)16))),NULL));
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_29,NULL));
		int32_t L_31 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_30, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(L_27, 4)))), (int32_t)L_31);
		int32_t* L_32 = V_3;
		int32_t L_33 = V_2;
		intptr_t L_34 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_33,NULL));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(L_34, 4)))), (int32_t)(-1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = V_2;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_36, (int32_t)L_37);
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_38 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0097:
	{
		int32_t L_39 = V_7;
		int32_t L_40 = V_6;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		int32_t L_43 = il2cpp_codegen_ldind<int32_t, int32_t>(L_42);
		if ((((int32_t)L_43) >= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		NullCheck(L_44);
		int32_t L_45 = L_44->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)1073741823)))))
		{
			goto IL_00b6;
		}
	}
	{
		return (bool)0;
	}

IL_00b6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		int32_t L_48;
		L_48 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_47, NULL);
		V_8 = L_48;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		int32_t L_50 = V_8;
		int32_t L_51 = V_8;
		int64_t L_52;
		L_52 = UnsafeParallelHashMapData_GetBucketSize_mBE376CBC384B796DE89740ECD5EA9C7F520D93D7(L_51, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_53 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_m7D4B76EEA56BC2D0A4E69040ECAC2BFF29F6239B(L_49, L_50, L_52, L_53, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	}

IL_00d4:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_54 = ___0_data;
		int32_t* L_55;
		L_55 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_54, NULL);
		int32_t L_56 = il2cpp_codegen_ldind<int32_t, int32_t>(L_55);
		V_2 = L_56;
		int32_t L_57 = V_2;
		if ((((int32_t)L_57) < ((int32_t)0)))
		{
			goto IL_00f5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_58 = ___0_data;
		int32_t* L_59;
		L_59 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_58, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___next;
		int32_t L_62 = V_2;
		intptr_t L_63 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_62,NULL));
		int32_t L_64 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(L_63, 4))))));
		il2cpp_codegen_stind<int32_t>((int32_t*)L_59, (int32_t)L_64);
		goto IL_0107;
	}

IL_00f5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_65 = ___0_data;
		NullCheck(L_65);
		int32_t* L_66 = (int32_t*)(&L_65->___allocatedIndexLength);
		int32_t* L_67 = L_66;
		int32_t L_68 = il2cpp_codegen_ldind<int32_t, int32_t>(L_67);
		V_9 = L_68;
		int32_t L_69 = V_9;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_67, (int32_t)((int32_t)il2cpp_codegen_add(L_69, 1)));
		int32_t L_70 = V_9;
		V_2 = L_70;
	}

IL_0107:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_71 = ___0_data;
		NullCheck(L_71);
		uint8_t* L_72 = L_71->___keys;
		int32_t L_73 = V_2;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_74 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m9F2800AFAC18DA2E9DB4352D9A82AC95FA0995FA_inline((void*)L_72, L_73, L_74, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_75 = ___0_data;
		NullCheck(L_75);
		uint8_t* L_76 = L_75->___values;
		int32_t L_77 = V_2;
		GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB L_78 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_mED1E1443D3B6D2E654E096AA0A05A54E6B9BD985_inline((void*)L_76, L_77, L_78, NULL);
		CHECKED_LOCAL_INIT(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit,(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_79;
		L_79 = GPUArchetypeHandle_GetHashCode_mF816A596DEE9C2CA813E280D5DB3FE046085480C((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		int32_t L_81 = L_80->___bucketCapacityMask;
		V_4 = ((int32_t)(L_79&L_81));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___buckets;
		V_5 = (int32_t*)L_83;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		uint8_t* L_85 = L_84->___next;
		V_3 = (int32_t*)L_85;
		int32_t* L_86 = V_3;
		int32_t L_87 = V_2;
		intptr_t L_88 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_87,NULL));
		int32_t* L_89 = V_5;
		int32_t L_90 = V_4;
		intptr_t L_91 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_90,NULL));
		int32_t L_92 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(L_91, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(L_88, 4)))), (int32_t)L_92);
		int32_t* L_93 = V_5;
		int32_t L_94 = V_4;
		intptr_t L_95 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_94,NULL));
		int32_t L_96 = V_2;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(L_95, 4)))), (int32_t)L_96);
		return (bool)1;
	}

IL_0162:
	{
		return (bool)0;
	}
}
// Method Definition Index: 65302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m1B02B6170D663406EFEF04492B5A147FC6D5666A (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		CHECKED_LOCAL_INIT(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit,(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_6;
		L_6 = GPUArchetypeHandle_GetHashCode_mF816A596DEE9C2CA813E280D5DB3FE046085480C((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		intptr_t L_11 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_10,NULL));
		int32_t L_12 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(L_11, 4)))));
		V_5 = L_12;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		uint8_t* L_14 = L_13->___keys;
		int32_t L_15 = V_5;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_16;
		L_16 = UnsafeUtility_ReadArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m7AA25F6024B181108CC3A96104D0E5ABCED519C6_inline((void*)L_14, L_15, NULL);
		V_6 = L_16;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_17 = ___1_key;
		CHECKED_LOCAL_INIT(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit,(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_18;
		L_18 = GPUArchetypeHandle_Equals_mFE673CC36DDBA65242C25B256411A4EFA1638C1C((&V_6), L_17, NULL);
		if (!L_18)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_21 = V_1;
		int32_t L_22 = V_3;
		intptr_t L_23 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_22,NULL));
		int32_t* L_24 = V_2;
		int32_t L_25 = V_5;
		intptr_t L_26 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_25,NULL));
		int32_t L_27 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(L_26, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(L_23, 4)))), (int32_t)L_27);
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_28 = V_2;
		int32_t L_29 = V_4;
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_29,NULL));
		int32_t* L_31 = V_2;
		int32_t L_32 = V_5;
		intptr_t L_33 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_32,NULL));
		int32_t L_34 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(L_33, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_30, 4)))), (int32_t)L_34);
	}

IL_0086:
	{
		int32_t* L_35 = V_2;
		int32_t L_36 = V_5;
		intptr_t L_37 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_36,NULL));
		int32_t L_38 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(L_37, 4)))));
		int32_t* L_39 = V_2;
		int32_t L_40 = V_5;
		intptr_t L_41 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_40,NULL));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t* L_43;
		L_43 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_42, NULL);
		int32_t L_44 = il2cpp_codegen_ldind<int32_t, int32_t>(L_43);
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(L_41, 4)))), (int32_t)L_44);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_45 = ___0_data;
		int32_t* L_46;
		L_46 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_45, NULL);
		int32_t L_47 = V_5;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_46, (int32_t)L_47);
		V_5 = L_38;
		bool L_48 = ___2_isMultiHashMap;
		if (L_48)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_49 = V_5;
		V_4 = L_49;
		int32_t* L_50 = V_2;
		int32_t L_51 = V_5;
		intptr_t L_52 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_51,NULL));
		int32_t L_53 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_50, ((intptr_t)il2cpp_codegen_multiply(L_52, 4)))));
		V_5 = L_53;
	}

IL_00bb:
	{
		int32_t L_54 = V_5;
		if ((((int32_t)L_54) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_55 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		int32_t L_57 = L_56->___keyCapacity;
		if ((((int32_t)L_55) < ((int32_t)L_57)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_58 = V_0;
		return L_58;
	}
}
// Method Definition Index: 65303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m2C4ACB95B6583E63C47A157F666306F663A90ADA (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583 ___1_it, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit);
	//<source_info:<no-source>:1>
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB* L_4 = (GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB*)(&(&___1_it)->___key);
		CHECKED_LOCAL_INIT(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit,(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_5;
		L_5 = GPUArchetypeHandle_GetHashCode_mF816A596DEE9C2CA813E280D5DB3FE046085480C(L_4, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		int32_t L_11 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, 4)))));
		V_3 = L_11;
		int32_t L_12 = V_3;
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583 L_13 = ___1_it;
		int32_t L_14 = L_13.___EntryIndex;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_15 = V_0;
		int32_t L_16 = V_2;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_16,NULL));
		int32_t* L_18 = V_1;
		int32_t L_19 = V_3;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(L_17, 4)))), (int32_t)L_21);
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_22 = V_1;
		int32_t L_23 = V_3;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_23,NULL));
		int32_t L_25 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, 4)))));
		V_3 = L_25;
	}

IL_0051:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_27 = V_1;
		int32_t L_28 = V_3;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		int32_t L_30 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, 4)))));
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583 L_31 = ___1_it;
		int32_t L_32 = L_31.___EntryIndex;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_32))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_33 = V_3;
		int32_t* L_34 = V_1;
		int32_t L_35 = V_3;
		intptr_t L_36 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_35,NULL));
		int32_t* L_37 = V_1;
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583 L_38 = ___1_it;
		int32_t L_39 = L_38.___EntryIndex;
		intptr_t L_40 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_39,NULL));
		int32_t L_41 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(L_40, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(L_36, 4)))), (int32_t)L_41);
	}

IL_007b:
	{
		int32_t* L_42 = V_1;
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583 L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		intptr_t L_45 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_44,NULL));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		int32_t* L_47;
		L_47 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_46, NULL);
		int32_t L_48 = il2cpp_codegen_ldind<int32_t, int32_t>(L_47);
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(L_45, 4)))), (int32_t)L_48);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		int32_t* L_50;
		L_50 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_49, NULL);
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583 L_51 = ___1_it;
		int32_t L_52 = L_51.___EntryIndex;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_50, (int32_t)L_52);
		return;
	}
}
// Method Definition Index: 65305
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m23409B7EB290925DAEE982FAA55734A8835478D5 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___1_key, GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB* ___2_item, NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* ___3_it, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* L_0 = ___3_it;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* L_5 = ___3_it;
		V_2 = (-1);
		L_5->___NextEntryIndex = (-1);
		int32_t L_6 = V_2;
		L_4->___EntryIndex = L_6;
		GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB* L_7 = ___2_item;
		il2cpp_codegen_initobj(L_7, sizeof(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		uint8_t* L_9 = L_8->___buckets;
		V_0 = (int32_t*)L_9;
		CHECKED_LOCAL_INIT(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit,(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_10;
		L_10 = GPUArchetypeHandle_GetHashCode_mF816A596DEE9C2CA813E280D5DB3FE046085480C((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		NullCheck(L_11);
		int32_t L_12 = L_11->___bucketCapacityMask;
		V_1 = ((int32_t)(L_10&L_12));
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* L_13 = ___3_it;
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* L_14 = ___3_it;
		int32_t* L_15 = V_0;
		int32_t L_16 = V_1;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_16,NULL));
		int32_t L_18 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(L_17, 4)))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_14->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_13->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mDCBB4D59E3786A123F77D41B99A1F7BC7431DAF6(L_21, L_22, L_23, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		return L_24;
	}
}
// Method Definition Index: 65306
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_mDCBB4D59E3786A123F77D41B99A1F7BC7431DAF6 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB* ___1_item, NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* ___2_it, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		int32_t L_14 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, 4)))));
		V_0 = L_14;
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t L_18 = L_17->___keyCapacity;
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		NullCheck(L_19);
		uint8_t* L_20 = L_19->___keys;
		int32_t L_21 = V_0;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_22;
		L_22 = UnsafeUtility_ReadArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m7AA25F6024B181108CC3A96104D0E5ABCED519C6_inline((void*)L_20, L_21, NULL);
		V_2 = L_22;
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* L_23 = ___2_it;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_24 = L_23->___key;
		CHECKED_LOCAL_INIT(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_StaticInit,(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_25;
		L_25 = GPUArchetypeHandle_Equals_mFE673CC36DDBA65242C25B256411A4EFA1638C1C((&V_2), L_24, NULL);
		if (!L_25)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* L_26 = ___2_it;
		int32_t* L_27 = V_1;
		int32_t L_28 = V_0;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		int32_t L_30 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, 4)))));
		L_26->___NextEntryIndex = L_30;
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* L_31 = ___2_it;
		int32_t L_32 = V_0;
		L_31->___EntryIndex = L_32;
		GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB* L_33 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		uint8_t* L_35 = L_34->___values;
		int32_t L_36 = V_0;
		GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB L_37;
		L_37 = UnsafeUtility_ReadArrayElement_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_m77A0F5FAAAA9E070343AB7A018FCB34FD1698A06_inline((void*)L_35, L_36, NULL);
		*(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB*)L_33 = L_37;
		return (bool)1;
	}
}
// Method Definition Index: 65307
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m25EBFCCE0B0060BDB03000CD83D482CC9043C429 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* ___1_it, GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB* ___2_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_tB76393EC1AC2D31D3F6B61E208ED08C6036B7583* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB* L_9 = ___2_item;
		GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB L_10 = (*(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB*)L_9);
		UnsafeUtility_WriteArrayElement_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_mED1E1443D3B6D2E654E096AA0A05A54E6B9BD985_inline((void*)L_7, L_8, L_10, NULL);
		return (bool)1;
	}
}
// Method Definition Index: 65308
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_mBC3CD0D8752446C3289756F040957304984E3EDB (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
// Method Definition Index: 65309
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_mEEE8D5F2383861796E4BEF92A807A99728263EB7 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
// Method Definition Index: 65310
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mBEC0ADF31820FBB266B10A994B83E8E5D4817FC1 (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 65311
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_mAAA48605A5578332DD9BB2266A65614D9C7E8B85 (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
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
// Method Definition Index: 65296
// Method Definition Index: 65297
// Method Definition Index: 65298
// Method Definition Index: 65299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mD900FDCC83D40526BD3C0B74A1EAC3D1F3D5424B (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB ___1_key, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_StaticInit);
	//<source_info:<no-source>:1>
	GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA096F9657FD1C2B3E5048A7998A0AB5A4507DAE5(L_0, L_1, (&V_0), (&V_1), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_mB012F30A9D06803E62E9C6474E45619332B8A6AA(L_3, L_4, NULL);
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_mED1E1443D3B6D2E654E096AA0A05A54E6B9BD985_inline((void*)L_7, L_8, L_9, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m9F2800AFAC18DA2E9DB4352D9A82AC95FA0995FA_inline((void*)L_11, L_12, L_13, NULL);
		CHECKED_LOCAL_INIT(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_StaticInit,(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_14;
		L_14 = GPUComponentSet_GetHashCode_mD21ED0964434E73545827D58153D059227B51B21((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		intptr_t L_21 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_20,NULL));
		int32_t L_22 = V_2;
		int32_t L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(L_21, 4)))), L_22, (-1));
		if ((((int32_t)L_23) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		uint8_t* L_25 = L_24->___next;
		V_5 = (int32_t*)L_25;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_26 = V_4;
		int32_t L_27 = V_3;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t L_29 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))));
		V_6 = L_29;
		int32_t* L_30 = V_5;
		int32_t L_31 = V_2;
		intptr_t L_32 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_31,NULL));
		int32_t L_33 = V_6;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(L_32, 4)))), (int32_t)L_33);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB L_35 = ___1_key;
		bool L_36;
		L_36 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA096F9657FD1C2B3E5048A7998A0AB5A4507DAE5(L_34, L_35, (&V_0), (&V_1), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		if (!L_36)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		int32_t L_38 = V_2;
		int32_t L_39 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_mD1BE20220DEDC29543340D9C30DFC95A50929CE7(L_37, L_38, L_39, NULL);
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_40 = V_4;
		int32_t L_41 = V_3;
		intptr_t L_42 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_41,NULL));
		int32_t L_43 = V_2;
		int32_t L_44 = V_6;
		int32_t L_45;
		L_45 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(L_42, 4)))), L_43, L_44);
		int32_t L_46 = V_6;
		if ((!(((uint32_t)L_45) == ((uint32_t)L_46))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
// Method Definition Index: 65300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_mB8F0A2E0ED134E9B3E9F70DD6F08A6CDBE5A34E3 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB ___1_key, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_mB012F30A9D06803E62E9C6474E45619332B8A6AA(L_0, L_1, NULL);
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_mED1E1443D3B6D2E654E096AA0A05A54E6B9BD985_inline((void*)L_4, L_5, L_6, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m9F2800AFAC18DA2E9DB4352D9A82AC95FA0995FA_inline((void*)L_8, L_9, L_10, NULL);
		CHECKED_LOCAL_INIT(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_StaticInit,(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_11;
		L_11 = GPUComponentSet_GetHashCode_mD21ED0964434E73545827D58153D059227B51B21((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		V_3 = L_21;
		int32_t* L_22 = V_4;
		int32_t L_23 = V_0;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_23,NULL));
		int32_t L_25 = V_3;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, 4)))), (int32_t)L_25);
		int32_t* L_26 = V_2;
		int32_t L_27 = V_1;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t L_29 = V_0;
		int32_t L_30 = V_3;
		int32_t L_31;
		L_31 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))), L_29, L_30);
		int32_t L_32 = V_3;
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 65301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mFAB8E65E0F4FF78E4D88233DAEDB41FA5B87D364 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB ___1_key, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_StaticInit);
	//<source_info:<no-source>:1>
	GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA096F9657FD1C2B3E5048A7998A0AB5A4507DAE5(L_1, L_2, (&V_0), (&V_1), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		if (L_3)
		{
			goto IL_0162;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00d4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = il2cpp_codegen_ldind<int32_t, int32_t>(L_9);
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16))),NULL));
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_15, 4)))));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		int32_t* L_18;
		L_18 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_17, NULL);
		int32_t L_19 = V_7;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_19, ((int32_t)16))),NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		V_2 = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		uint8_t* L_23 = L_22->___next;
		V_3 = (int32_t*)L_23;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		int32_t* L_25;
		L_25 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_24, NULL);
		int32_t L_26 = V_7;
		intptr_t L_27 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_26, ((int32_t)16))),NULL));
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_29,NULL));
		int32_t L_31 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_30, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(L_27, 4)))), (int32_t)L_31);
		int32_t* L_32 = V_3;
		int32_t L_33 = V_2;
		intptr_t L_34 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_33,NULL));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(L_34, 4)))), (int32_t)(-1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = V_2;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_36, (int32_t)L_37);
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_38 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0097:
	{
		int32_t L_39 = V_7;
		int32_t L_40 = V_6;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		int32_t L_43 = il2cpp_codegen_ldind<int32_t, int32_t>(L_42);
		if ((((int32_t)L_43) >= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		NullCheck(L_44);
		int32_t L_45 = L_44->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)1073741823)))))
		{
			goto IL_00b6;
		}
	}
	{
		return (bool)0;
	}

IL_00b6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		int32_t L_48;
		L_48 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_47, NULL);
		V_8 = L_48;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		int32_t L_50 = V_8;
		int32_t L_51 = V_8;
		int64_t L_52;
		L_52 = UnsafeParallelHashMapData_GetBucketSize_mBE376CBC384B796DE89740ECD5EA9C7F520D93D7(L_51, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_53 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_mB62CB55609C38163B91BEF995A2D6AAE252DB5D0(L_49, L_50, L_52, L_53, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	}

IL_00d4:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_54 = ___0_data;
		int32_t* L_55;
		L_55 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_54, NULL);
		int32_t L_56 = il2cpp_codegen_ldind<int32_t, int32_t>(L_55);
		V_2 = L_56;
		int32_t L_57 = V_2;
		if ((((int32_t)L_57) < ((int32_t)0)))
		{
			goto IL_00f5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_58 = ___0_data;
		int32_t* L_59;
		L_59 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_58, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___next;
		int32_t L_62 = V_2;
		intptr_t L_63 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_62,NULL));
		int32_t L_64 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(L_63, 4))))));
		il2cpp_codegen_stind<int32_t>((int32_t*)L_59, (int32_t)L_64);
		goto IL_0107;
	}

IL_00f5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_65 = ___0_data;
		NullCheck(L_65);
		int32_t* L_66 = (int32_t*)(&L_65->___allocatedIndexLength);
		int32_t* L_67 = L_66;
		int32_t L_68 = il2cpp_codegen_ldind<int32_t, int32_t>(L_67);
		V_9 = L_68;
		int32_t L_69 = V_9;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_67, (int32_t)((int32_t)il2cpp_codegen_add(L_69, 1)));
		int32_t L_70 = V_9;
		V_2 = L_70;
	}

IL_0107:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_71 = ___0_data;
		NullCheck(L_71);
		uint8_t* L_72 = L_71->___keys;
		int32_t L_73 = V_2;
		GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB L_74 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_mED1E1443D3B6D2E654E096AA0A05A54E6B9BD985_inline((void*)L_72, L_73, L_74, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_75 = ___0_data;
		NullCheck(L_75);
		uint8_t* L_76 = L_75->___values;
		int32_t L_77 = V_2;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_78 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m9F2800AFAC18DA2E9DB4352D9A82AC95FA0995FA_inline((void*)L_76, L_77, L_78, NULL);
		CHECKED_LOCAL_INIT(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_StaticInit,(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_79;
		L_79 = GPUComponentSet_GetHashCode_mD21ED0964434E73545827D58153D059227B51B21((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		int32_t L_81 = L_80->___bucketCapacityMask;
		V_4 = ((int32_t)(L_79&L_81));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___buckets;
		V_5 = (int32_t*)L_83;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		uint8_t* L_85 = L_84->___next;
		V_3 = (int32_t*)L_85;
		int32_t* L_86 = V_3;
		int32_t L_87 = V_2;
		intptr_t L_88 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_87,NULL));
		int32_t* L_89 = V_5;
		int32_t L_90 = V_4;
		intptr_t L_91 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_90,NULL));
		int32_t L_92 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(L_91, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(L_88, 4)))), (int32_t)L_92);
		int32_t* L_93 = V_5;
		int32_t L_94 = V_4;
		intptr_t L_95 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_94,NULL));
		int32_t L_96 = V_2;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(L_95, 4)))), (int32_t)L_96);
		return (bool)1;
	}

IL_0162:
	{
		return (bool)0;
	}
}
// Method Definition Index: 65302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m4339E47DA0B0F87D62859D00601B113156D369DB (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		CHECKED_LOCAL_INIT(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_StaticInit,(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_6;
		L_6 = GPUComponentSet_GetHashCode_mD21ED0964434E73545827D58153D059227B51B21((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		intptr_t L_11 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_10,NULL));
		int32_t L_12 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(L_11, 4)))));
		V_5 = L_12;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		uint8_t* L_14 = L_13->___keys;
		int32_t L_15 = V_5;
		GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB L_16;
		L_16 = UnsafeUtility_ReadArrayElement_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_m77A0F5FAAAA9E070343AB7A018FCB34FD1698A06_inline((void*)L_14, L_15, NULL);
		V_6 = L_16;
		GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB L_17 = ___1_key;
		CHECKED_LOCAL_INIT(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_StaticInit,(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_18;
		L_18 = GPUComponentSet_Equals_m3DD5426BBAA2E39886586340DA810AB11DFBC28C((&V_6), L_17, NULL);
		if (!L_18)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_21 = V_1;
		int32_t L_22 = V_3;
		intptr_t L_23 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_22,NULL));
		int32_t* L_24 = V_2;
		int32_t L_25 = V_5;
		intptr_t L_26 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_25,NULL));
		int32_t L_27 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(L_26, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(L_23, 4)))), (int32_t)L_27);
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_28 = V_2;
		int32_t L_29 = V_4;
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_29,NULL));
		int32_t* L_31 = V_2;
		int32_t L_32 = V_5;
		intptr_t L_33 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_32,NULL));
		int32_t L_34 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(L_33, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_30, 4)))), (int32_t)L_34);
	}

IL_0086:
	{
		int32_t* L_35 = V_2;
		int32_t L_36 = V_5;
		intptr_t L_37 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_36,NULL));
		int32_t L_38 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(L_37, 4)))));
		int32_t* L_39 = V_2;
		int32_t L_40 = V_5;
		intptr_t L_41 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_40,NULL));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t* L_43;
		L_43 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_42, NULL);
		int32_t L_44 = il2cpp_codegen_ldind<int32_t, int32_t>(L_43);
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(L_41, 4)))), (int32_t)L_44);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_45 = ___0_data;
		int32_t* L_46;
		L_46 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_45, NULL);
		int32_t L_47 = V_5;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_46, (int32_t)L_47);
		V_5 = L_38;
		bool L_48 = ___2_isMultiHashMap;
		if (L_48)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_49 = V_5;
		V_4 = L_49;
		int32_t* L_50 = V_2;
		int32_t L_51 = V_5;
		intptr_t L_52 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_51,NULL));
		int32_t L_53 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_50, ((intptr_t)il2cpp_codegen_multiply(L_52, 4)))));
		V_5 = L_53;
	}

IL_00bb:
	{
		int32_t L_54 = V_5;
		if ((((int32_t)L_54) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_55 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		int32_t L_57 = L_56->___keyCapacity;
		if ((((int32_t)L_55) < ((int32_t)L_57)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_58 = V_0;
		return L_58;
	}
}
// Method Definition Index: 65303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m9223B609C110F2881CDC86CB3F41314010200666 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C ___1_it, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_StaticInit);
	//<source_info:<no-source>:1>
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB* L_4 = (GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB*)(&(&___1_it)->___key);
		CHECKED_LOCAL_INIT(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_StaticInit,(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_5;
		L_5 = GPUComponentSet_GetHashCode_mD21ED0964434E73545827D58153D059227B51B21(L_4, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		int32_t L_11 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, 4)))));
		V_3 = L_11;
		int32_t L_12 = V_3;
		NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C L_13 = ___1_it;
		int32_t L_14 = L_13.___EntryIndex;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_15 = V_0;
		int32_t L_16 = V_2;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_16,NULL));
		int32_t* L_18 = V_1;
		int32_t L_19 = V_3;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(L_17, 4)))), (int32_t)L_21);
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_22 = V_1;
		int32_t L_23 = V_3;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_23,NULL));
		int32_t L_25 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, 4)))));
		V_3 = L_25;
	}

IL_0051:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_27 = V_1;
		int32_t L_28 = V_3;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		int32_t L_30 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, 4)))));
		NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C L_31 = ___1_it;
		int32_t L_32 = L_31.___EntryIndex;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_32))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_33 = V_3;
		int32_t* L_34 = V_1;
		int32_t L_35 = V_3;
		intptr_t L_36 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_35,NULL));
		int32_t* L_37 = V_1;
		NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C L_38 = ___1_it;
		int32_t L_39 = L_38.___EntryIndex;
		intptr_t L_40 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_39,NULL));
		int32_t L_41 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(L_40, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(L_36, 4)))), (int32_t)L_41);
	}

IL_007b:
	{
		int32_t* L_42 = V_1;
		NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		intptr_t L_45 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_44,NULL));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		int32_t* L_47;
		L_47 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_46, NULL);
		int32_t L_48 = il2cpp_codegen_ldind<int32_t, int32_t>(L_47);
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(L_45, 4)))), (int32_t)L_48);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		int32_t* L_50;
		L_50 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_49, NULL);
		NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C L_51 = ___1_it;
		int32_t L_52 = L_51.___EntryIndex;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_50, (int32_t)L_52);
		return;
	}
}
// Method Definition Index: 65305
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA096F9657FD1C2B3E5048A7998A0AB5A4507DAE5 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB ___1_key, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB* ___2_item, NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C* ___3_it, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C* L_0 = ___3_it;
		GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C* L_5 = ___3_it;
		V_2 = (-1);
		L_5->___NextEntryIndex = (-1);
		int32_t L_6 = V_2;
		L_4->___EntryIndex = L_6;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB* L_7 = ___2_item;
		il2cpp_codegen_initobj(L_7, sizeof(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		uint8_t* L_9 = L_8->___buckets;
		V_0 = (int32_t*)L_9;
		CHECKED_LOCAL_INIT(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_StaticInit,(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_10;
		L_10 = GPUComponentSet_GetHashCode_mD21ED0964434E73545827D58153D059227B51B21((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		NullCheck(L_11);
		int32_t L_12 = L_11->___bucketCapacityMask;
		V_1 = ((int32_t)(L_10&L_12));
		NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C* L_13 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C* L_14 = ___3_it;
		int32_t* L_15 = V_0;
		int32_t L_16 = V_1;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_16,NULL));
		int32_t L_18 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(L_17, 4)))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_14->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_13->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m4198BFF310F123C79F0DB2950AF12F5A51D9C080(L_21, L_22, L_23, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		return L_24;
	}
}
// Method Definition Index: 65306
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m4198BFF310F123C79F0DB2950AF12F5A51D9C080 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB* ___1_item, NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C* ___2_it, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_StaticInit);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		int32_t L_14 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, 4)))));
		V_0 = L_14;
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t L_18 = L_17->___keyCapacity;
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		NullCheck(L_19);
		uint8_t* L_20 = L_19->___keys;
		int32_t L_21 = V_0;
		GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB L_22;
		L_22 = UnsafeUtility_ReadArrayElement_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_m77A0F5FAAAA9E070343AB7A018FCB34FD1698A06_inline((void*)L_20, L_21, NULL);
		V_2 = L_22;
		NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C* L_23 = ___2_it;
		GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB L_24 = L_23->___key;
		CHECKED_LOCAL_INIT(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_StaticInit,(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_25;
		L_25 = GPUComponentSet_Equals_m3DD5426BBAA2E39886586340DA810AB11DFBC28C((&V_2), L_24, NULL);
		if (!L_25)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C* L_26 = ___2_it;
		int32_t* L_27 = V_1;
		int32_t L_28 = V_0;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		int32_t L_30 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, 4)))));
		L_26->___NextEntryIndex = L_30;
		NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C* L_31 = ___2_it;
		int32_t L_32 = V_0;
		L_31->___EntryIndex = L_32;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB* L_33 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		uint8_t* L_35 = L_34->___values;
		int32_t L_36 = V_0;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_37;
		L_37 = UnsafeUtility_ReadArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m7AA25F6024B181108CC3A96104D0E5ABCED519C6_inline((void*)L_35, L_36, NULL);
		*(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB*)L_33 = L_37;
		return (bool)1;
	}
}
// Method Definition Index: 65307
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_mBBFDAD59CCCEED5482921B9419F9A3229F6282A1 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C* ___1_it, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB* ___2_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t175F7FCF9D624DF23F2F0C6B03C7B64220356A1C* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB* L_9 = ___2_item;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_10 = (*(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB*)L_9);
		UnsafeUtility_WriteArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m9F2800AFAC18DA2E9DB4352D9A82AC95FA0995FA_inline((void*)L_7, L_8, L_10, NULL);
		return (bool)1;
	}
}
// Method Definition Index: 65308
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m1EF4BB8062B355F93FDCFE76362DE09A7CC5A7AD (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
// Method Definition Index: 65309
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_mDD048C071ED5D39DAFC2503356C6C1F0A1B050A2 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
// Method Definition Index: 65310
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m0F9721A0989BCD434689AECDFFCB1912E701744C (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 65311
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m60BEC95F1F089470A30D47BEE7ED46EC478F4A18 (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
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
// Method Definition Index: 65296
// Method Definition Index: 65297
// Method Definition Index: 65298
// Method Definition Index: 65299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mA95A4E55222ADA694BC071B0E4BEBD9884719894 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m201A93ED6E606DE25EE1301E9947914200822EB6(L_0, L_1, (&V_0), (&V_1), NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m07687E98A0046432909EF37B54EB18791E6D5CF1(L_3, L_4, NULL);
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		int32_t L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_7, L_8, L_9, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisGPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669_m203EA1B05ACF18717ECA21DC6B156B851A3DF3A2_inline((void*)L_11, L_12, L_13, NULL);
		int32_t L_14;
		L_14 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		intptr_t L_21 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_20,NULL));
		int32_t L_22 = V_2;
		int32_t L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(L_21, 4)))), L_22, (-1));
		if ((((int32_t)L_23) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		uint8_t* L_25 = L_24->___next;
		V_5 = (int32_t*)L_25;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_26 = V_4;
		int32_t L_27 = V_3;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t L_29 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))));
		V_6 = L_29;
		int32_t* L_30 = V_5;
		int32_t L_31 = V_2;
		intptr_t L_32 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_31,NULL));
		int32_t L_33 = V_6;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(L_32, 4)))), (int32_t)L_33);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = ___1_key;
		bool L_36;
		L_36 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m201A93ED6E606DE25EE1301E9947914200822EB6(L_34, L_35, (&V_0), (&V_1), NULL);
		if (!L_36)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		int32_t L_38 = V_2;
		int32_t L_39 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m8D4F96028CA80DB6D209CB8052B1DE20A49D9E38(L_37, L_38, L_39, NULL);
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_40 = V_4;
		int32_t L_41 = V_3;
		intptr_t L_42 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_41,NULL));
		int32_t L_43 = V_2;
		int32_t L_44 = V_6;
		int32_t L_45;
		L_45 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(L_42, 4)))), L_43, L_44);
		int32_t L_46 = V_6;
		if ((!(((uint32_t)L_45) == ((uint32_t)L_46))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
// Method Definition Index: 65300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m46D94FBCE337F2F928E39E6228275E5F862CD618 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m07687E98A0046432909EF37B54EB18791E6D5CF1(L_0, L_1, NULL);
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_4, L_5, L_6, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisGPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669_m203EA1B05ACF18717ECA21DC6B156B851A3DF3A2_inline((void*)L_8, L_9, L_10, NULL);
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		V_3 = L_21;
		int32_t* L_22 = V_4;
		int32_t L_23 = V_0;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_23,NULL));
		int32_t L_25 = V_3;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, 4)))), (int32_t)L_25);
		int32_t* L_26 = V_2;
		int32_t L_27 = V_1;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t L_29 = V_0;
		int32_t L_30 = V_3;
		int32_t L_31;
		L_31 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))), L_29, L_30);
		int32_t L_32 = V_3;
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 65301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mDBC7018A297B498C47E831BD8C546540B1B28870 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		int32_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m201A93ED6E606DE25EE1301E9947914200822EB6(L_1, L_2, (&V_0), (&V_1), NULL);
		if (L_3)
		{
			goto IL_0162;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00d4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = il2cpp_codegen_ldind<int32_t, int32_t>(L_9);
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16))),NULL));
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_15, 4)))));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		int32_t* L_18;
		L_18 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_17, NULL);
		int32_t L_19 = V_7;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_19, ((int32_t)16))),NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		V_2 = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		uint8_t* L_23 = L_22->___next;
		V_3 = (int32_t*)L_23;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		int32_t* L_25;
		L_25 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_24, NULL);
		int32_t L_26 = V_7;
		intptr_t L_27 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_26, ((int32_t)16))),NULL));
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_29,NULL));
		int32_t L_31 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_30, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(L_27, 4)))), (int32_t)L_31);
		int32_t* L_32 = V_3;
		int32_t L_33 = V_2;
		intptr_t L_34 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_33,NULL));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(L_34, 4)))), (int32_t)(-1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = V_2;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_36, (int32_t)L_37);
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_38 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0097:
	{
		int32_t L_39 = V_7;
		int32_t L_40 = V_6;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		int32_t L_43 = il2cpp_codegen_ldind<int32_t, int32_t>(L_42);
		if ((((int32_t)L_43) >= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		NullCheck(L_44);
		int32_t L_45 = L_44->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)1073741823)))))
		{
			goto IL_00b6;
		}
	}
	{
		return (bool)0;
	}

IL_00b6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		int32_t L_48;
		L_48 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_47, NULL);
		V_8 = L_48;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		int32_t L_50 = V_8;
		int32_t L_51 = V_8;
		int64_t L_52;
		L_52 = UnsafeParallelHashMapData_GetBucketSize_mBE376CBC384B796DE89740ECD5EA9C7F520D93D7(L_51, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_53 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisGPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669_m91576454D66AE28099F50FBEE92EBBB84FC659AF(L_49, L_50, L_52, L_53, NULL);
	}

IL_00d4:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_54 = ___0_data;
		int32_t* L_55;
		L_55 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_54, NULL);
		int32_t L_56 = il2cpp_codegen_ldind<int32_t, int32_t>(L_55);
		V_2 = L_56;
		int32_t L_57 = V_2;
		if ((((int32_t)L_57) < ((int32_t)0)))
		{
			goto IL_00f5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_58 = ___0_data;
		int32_t* L_59;
		L_59 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_58, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___next;
		int32_t L_62 = V_2;
		intptr_t L_63 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_62,NULL));
		int32_t L_64 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(L_63, 4))))));
		il2cpp_codegen_stind<int32_t>((int32_t*)L_59, (int32_t)L_64);
		goto IL_0107;
	}

IL_00f5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_65 = ___0_data;
		NullCheck(L_65);
		int32_t* L_66 = (int32_t*)(&L_65->___allocatedIndexLength);
		int32_t* L_67 = L_66;
		int32_t L_68 = il2cpp_codegen_ldind<int32_t, int32_t>(L_67);
		V_9 = L_68;
		int32_t L_69 = V_9;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_67, (int32_t)((int32_t)il2cpp_codegen_add(L_69, 1)));
		int32_t L_70 = V_9;
		V_2 = L_70;
	}

IL_0107:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_71 = ___0_data;
		NullCheck(L_71);
		uint8_t* L_72 = L_71->___keys;
		int32_t L_73 = V_2;
		int32_t L_74 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_72, L_73, L_74, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_75 = ___0_data;
		NullCheck(L_75);
		uint8_t* L_76 = L_75->___values;
		int32_t L_77 = V_2;
		GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 L_78 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisGPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669_m203EA1B05ACF18717ECA21DC6B156B851A3DF3A2_inline((void*)L_76, L_77, L_78, NULL);
		int32_t L_79;
		L_79 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		int32_t L_81 = L_80->___bucketCapacityMask;
		V_4 = ((int32_t)(L_79&L_81));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___buckets;
		V_5 = (int32_t*)L_83;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		uint8_t* L_85 = L_84->___next;
		V_3 = (int32_t*)L_85;
		int32_t* L_86 = V_3;
		int32_t L_87 = V_2;
		intptr_t L_88 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_87,NULL));
		int32_t* L_89 = V_5;
		int32_t L_90 = V_4;
		intptr_t L_91 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_90,NULL));
		int32_t L_92 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(L_91, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(L_88, 4)))), (int32_t)L_92);
		int32_t* L_93 = V_5;
		int32_t L_94 = V_4;
		intptr_t L_95 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_94,NULL));
		int32_t L_96 = V_2;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(L_95, 4)))), (int32_t)L_96);
		return (bool)1;
	}

IL_0162:
	{
		return (bool)0;
	}
}
// Method Definition Index: 65302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m3B42C75F6AF8541C57C0835D76BAE008710A185F (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		intptr_t L_11 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_10,NULL));
		int32_t L_12 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(L_11, 4)))));
		V_5 = L_12;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		uint8_t* L_14 = L_13->___keys;
		int32_t L_15 = V_5;
		int32_t L_16;
		L_16 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_14, L_15, NULL);
		V_6 = L_16;
		int32_t L_17 = ___1_key;
		bool L_18;
		L_18 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_6), L_17, NULL);
		if (!L_18)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_21 = V_1;
		int32_t L_22 = V_3;
		intptr_t L_23 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_22,NULL));
		int32_t* L_24 = V_2;
		int32_t L_25 = V_5;
		intptr_t L_26 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_25,NULL));
		int32_t L_27 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(L_26, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(L_23, 4)))), (int32_t)L_27);
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_28 = V_2;
		int32_t L_29 = V_4;
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_29,NULL));
		int32_t* L_31 = V_2;
		int32_t L_32 = V_5;
		intptr_t L_33 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_32,NULL));
		int32_t L_34 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(L_33, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_30, 4)))), (int32_t)L_34);
	}

IL_0086:
	{
		int32_t* L_35 = V_2;
		int32_t L_36 = V_5;
		intptr_t L_37 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_36,NULL));
		int32_t L_38 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(L_37, 4)))));
		int32_t* L_39 = V_2;
		int32_t L_40 = V_5;
		intptr_t L_41 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_40,NULL));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t* L_43;
		L_43 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_42, NULL);
		int32_t L_44 = il2cpp_codegen_ldind<int32_t, int32_t>(L_43);
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(L_41, 4)))), (int32_t)L_44);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_45 = ___0_data;
		int32_t* L_46;
		L_46 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_45, NULL);
		int32_t L_47 = V_5;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_46, (int32_t)L_47);
		V_5 = L_38;
		bool L_48 = ___2_isMultiHashMap;
		if (L_48)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_49 = V_5;
		V_4 = L_49;
		int32_t* L_50 = V_2;
		int32_t L_51 = V_5;
		intptr_t L_52 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_51,NULL));
		int32_t L_53 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_50, ((intptr_t)il2cpp_codegen_multiply(L_52, 4)))));
		V_5 = L_53;
	}

IL_00bb:
	{
		int32_t L_54 = V_5;
		if ((((int32_t)L_54) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_55 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		int32_t L_57 = L_56->___keyCapacity;
		if ((((int32_t)L_55) < ((int32_t)L_57)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_58 = V_0;
		return L_58;
	}
}
// Method Definition Index: 65303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m6923633F5E1011F0ADDD234FC4E6966471BC11C7 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC ___1_it, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		int32_t* L_4 = (int32_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_4, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		int32_t L_11 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, 4)))));
		V_3 = L_11;
		int32_t L_12 = V_3;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_13 = ___1_it;
		int32_t L_14 = L_13.___EntryIndex;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_15 = V_0;
		int32_t L_16 = V_2;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_16,NULL));
		int32_t* L_18 = V_1;
		int32_t L_19 = V_3;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(L_17, 4)))), (int32_t)L_21);
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_22 = V_1;
		int32_t L_23 = V_3;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_23,NULL));
		int32_t L_25 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, 4)))));
		V_3 = L_25;
	}

IL_0051:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_27 = V_1;
		int32_t L_28 = V_3;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		int32_t L_30 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, 4)))));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_31 = ___1_it;
		int32_t L_32 = L_31.___EntryIndex;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_32))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_33 = V_3;
		int32_t* L_34 = V_1;
		int32_t L_35 = V_3;
		intptr_t L_36 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_35,NULL));
		int32_t* L_37 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_38 = ___1_it;
		int32_t L_39 = L_38.___EntryIndex;
		intptr_t L_40 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_39,NULL));
		int32_t L_41 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(L_40, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(L_36, 4)))), (int32_t)L_41);
	}

IL_007b:
	{
		int32_t* L_42 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		intptr_t L_45 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_44,NULL));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		int32_t* L_47;
		L_47 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_46, NULL);
		int32_t L_48 = il2cpp_codegen_ldind<int32_t, int32_t>(L_47);
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(L_45, 4)))), (int32_t)L_48);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		int32_t* L_50;
		L_50 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_49, NULL);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_51 = ___1_it;
		int32_t L_52 = L_51.___EntryIndex;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_50, (int32_t)L_52);
		return;
	}
}
// Method Definition Index: 65305
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m201A93ED6E606DE25EE1301E9947914200822EB6 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___3_it;
		int32_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_5 = ___3_it;
		V_2 = (-1);
		L_5->___NextEntryIndex = (-1);
		int32_t L_6 = V_2;
		L_4->___EntryIndex = L_6;
		GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669* L_7 = ___2_item;
		il2cpp_codegen_initobj(L_7, sizeof(GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		uint8_t* L_9 = L_8->___buckets;
		V_0 = (int32_t*)L_9;
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		NullCheck(L_11);
		int32_t L_12 = L_11->___bucketCapacityMask;
		V_1 = ((int32_t)(L_10&L_12));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_13 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_14 = ___3_it;
		int32_t* L_15 = V_0;
		int32_t L_16 = V_1;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_16,NULL));
		int32_t L_18 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(L_17, 4)))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_14->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_13->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m4F68C164838E2B4CE7883B8858267A21BF84D4DA(L_21, L_22, L_23, NULL);
		return L_24;
	}
}
// Method Definition Index: 65306
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m4F68C164838E2B4CE7883B8858267A21BF84D4DA (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		int32_t L_14 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, 4)))));
		V_0 = L_14;
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t L_18 = L_17->___keyCapacity;
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		NullCheck(L_19);
		uint8_t* L_20 = L_19->___keys;
		int32_t L_21 = V_0;
		int32_t L_22;
		L_22 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_20, L_21, NULL);
		V_2 = L_22;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_23 = ___2_it;
		int32_t L_24 = L_23->___key;
		bool L_25;
		L_25 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_2), L_24, NULL);
		if (!L_25)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_26 = ___2_it;
		int32_t* L_27 = V_1;
		int32_t L_28 = V_0;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		int32_t L_30 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, 4)))));
		L_26->___NextEntryIndex = L_30;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_31 = ___2_it;
		int32_t L_32 = V_0;
		L_31->___EntryIndex = L_32;
		GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669* L_33 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		uint8_t* L_35 = L_34->___values;
		int32_t L_36 = V_0;
		GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 L_37;
		L_37 = UnsafeUtility_ReadArrayElement_TisGPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669_m361058B0E058D8D5D3AC6C6C015700E6018A671C_inline((void*)L_35, L_36, NULL);
		*(GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669*)L_33 = L_37;
		return (bool)1;
	}
}
// Method Definition Index: 65307
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m1F3118E9EFA9124F5BEEDC57FE349E10B987A4F2 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___1_it, GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669* ___2_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669* L_9 = ___2_item;
		GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 L_10 = (*(GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669*)L_9);
		UnsafeUtility_WriteArrayElement_TisGPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669_m203EA1B05ACF18717ECA21DC6B156B851A3DF3A2_inline((void*)L_7, L_8, L_10, NULL);
		return (bool)1;
	}
}
// Method Definition Index: 65308
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_mE0BC5E5B1839D26CB931F2634E5D3DE026728362 (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
// Method Definition Index: 65309
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m9890C711486879DDEC3740B7572FF16949898F6A (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
// Method Definition Index: 65310
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m8D618F56C02600EC34BA74DBE25AF764D9D111C4 (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 65311
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_mC697F3B2FB3DC6310B3DA5C830998689228B74E6 (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
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
// Method Definition Index: 65296
// Method Definition Index: 65297
// Method Definition Index: 65298
// Method Definition Index: 65299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mD124B2FE737A731B68FE85C51A3E5E519944F8AF (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m1987DED2458DEE21F93ADF1E36865CBBC970BA97(L_0, L_1, (&V_0), (&V_1), NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m61C5DE1D0F6AD624021FDD813C27761EEA6FE0BA(L_3, L_4, NULL);
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		int32_t L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_7, L_8, L_9, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisAnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46_m9FDDC2380EF57AE03BE92D8AC12841CAADE0EFDB_inline((void*)L_11, L_12, L_13, NULL);
		int32_t L_14;
		L_14 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		intptr_t L_21 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_20,NULL));
		int32_t L_22 = V_2;
		int32_t L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(L_21, 4)))), L_22, (-1));
		if ((((int32_t)L_23) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		uint8_t* L_25 = L_24->___next;
		V_5 = (int32_t*)L_25;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_26 = V_4;
		int32_t L_27 = V_3;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t L_29 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))));
		V_6 = L_29;
		int32_t* L_30 = V_5;
		int32_t L_31 = V_2;
		intptr_t L_32 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_31,NULL));
		int32_t L_33 = V_6;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(L_32, 4)))), (int32_t)L_33);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = ___1_key;
		bool L_36;
		L_36 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m1987DED2458DEE21F93ADF1E36865CBBC970BA97(L_34, L_35, (&V_0), (&V_1), NULL);
		if (!L_36)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		int32_t L_38 = V_2;
		int32_t L_39 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_mE585DF8C91C3F2E0D9C8D5BDF9ECAE4DF732F77B(L_37, L_38, L_39, NULL);
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_40 = V_4;
		int32_t L_41 = V_3;
		intptr_t L_42 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_41,NULL));
		int32_t L_43 = V_2;
		int32_t L_44 = V_6;
		int32_t L_45;
		L_45 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(L_42, 4)))), L_43, L_44);
		int32_t L_46 = V_6;
		if ((!(((uint32_t)L_45) == ((uint32_t)L_46))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
// Method Definition Index: 65300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m9587D0B25152B4FD6390A4BCB4520A8156064EA8 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m61C5DE1D0F6AD624021FDD813C27761EEA6FE0BA(L_0, L_1, NULL);
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_4, L_5, L_6, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisAnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46_m9FDDC2380EF57AE03BE92D8AC12841CAADE0EFDB_inline((void*)L_8, L_9, L_10, NULL);
		int32_t L_11;
		L_11 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		V_3 = L_21;
		int32_t* L_22 = V_4;
		int32_t L_23 = V_0;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_23,NULL));
		int32_t L_25 = V_3;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, 4)))), (int32_t)L_25);
		int32_t* L_26 = V_2;
		int32_t L_27 = V_1;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t L_29 = V_0;
		int32_t L_30 = V_3;
		int32_t L_31;
		L_31 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))), L_29, L_30);
		int32_t L_32 = V_3;
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 65301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_mFAA3DDEA88171A25A9F0E210D166FC9BE1E5820A (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		int32_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m1987DED2458DEE21F93ADF1E36865CBBC970BA97(L_1, L_2, (&V_0), (&V_1), NULL);
		if (L_3)
		{
			goto IL_0162;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00d4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = il2cpp_codegen_ldind<int32_t, int32_t>(L_9);
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16))),NULL));
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_15, 4)))));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		int32_t* L_18;
		L_18 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_17, NULL);
		int32_t L_19 = V_7;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_19, ((int32_t)16))),NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		V_2 = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		uint8_t* L_23 = L_22->___next;
		V_3 = (int32_t*)L_23;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		int32_t* L_25;
		L_25 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_24, NULL);
		int32_t L_26 = V_7;
		intptr_t L_27 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_26, ((int32_t)16))),NULL));
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_29,NULL));
		int32_t L_31 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_30, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(L_27, 4)))), (int32_t)L_31);
		int32_t* L_32 = V_3;
		int32_t L_33 = V_2;
		intptr_t L_34 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_33,NULL));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(L_34, 4)))), (int32_t)(-1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = V_2;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_36, (int32_t)L_37);
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_38 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0097:
	{
		int32_t L_39 = V_7;
		int32_t L_40 = V_6;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		int32_t L_43 = il2cpp_codegen_ldind<int32_t, int32_t>(L_42);
		if ((((int32_t)L_43) >= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		NullCheck(L_44);
		int32_t L_45 = L_44->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)1073741823)))))
		{
			goto IL_00b6;
		}
	}
	{
		return (bool)0;
	}

IL_00b6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		int32_t L_48;
		L_48 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_47, NULL);
		V_8 = L_48;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		int32_t L_50 = V_8;
		int32_t L_51 = V_8;
		int64_t L_52;
		L_52 = UnsafeParallelHashMapData_GetBucketSize_mBE376CBC384B796DE89740ECD5EA9C7F520D93D7(L_51, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_53 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisAnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46_mED51823316D888F4C0BBD35347050157D421DF94(L_49, L_50, L_52, L_53, NULL);
	}

IL_00d4:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_54 = ___0_data;
		int32_t* L_55;
		L_55 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_54, NULL);
		int32_t L_56 = il2cpp_codegen_ldind<int32_t, int32_t>(L_55);
		V_2 = L_56;
		int32_t L_57 = V_2;
		if ((((int32_t)L_57) < ((int32_t)0)))
		{
			goto IL_00f5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_58 = ___0_data;
		int32_t* L_59;
		L_59 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_58, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___next;
		int32_t L_62 = V_2;
		intptr_t L_63 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_62,NULL));
		int32_t L_64 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(L_63, 4))))));
		il2cpp_codegen_stind<int32_t>((int32_t*)L_59, (int32_t)L_64);
		goto IL_0107;
	}

IL_00f5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_65 = ___0_data;
		NullCheck(L_65);
		int32_t* L_66 = (int32_t*)(&L_65->___allocatedIndexLength);
		int32_t* L_67 = L_66;
		int32_t L_68 = il2cpp_codegen_ldind<int32_t, int32_t>(L_67);
		V_9 = L_68;
		int32_t L_69 = V_9;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_67, (int32_t)((int32_t)il2cpp_codegen_add(L_69, 1)));
		int32_t L_70 = V_9;
		V_2 = L_70;
	}

IL_0107:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_71 = ___0_data;
		NullCheck(L_71);
		uint8_t* L_72 = L_71->___keys;
		int32_t L_73 = V_2;
		int32_t L_74 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_72, L_73, L_74, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_75 = ___0_data;
		NullCheck(L_75);
		uint8_t* L_76 = L_75->___values;
		int32_t L_77 = V_2;
		AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 L_78 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisAnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46_m9FDDC2380EF57AE03BE92D8AC12841CAADE0EFDB_inline((void*)L_76, L_77, L_78, NULL);
		int32_t L_79;
		L_79 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		int32_t L_81 = L_80->___bucketCapacityMask;
		V_4 = ((int32_t)(L_79&L_81));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___buckets;
		V_5 = (int32_t*)L_83;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		uint8_t* L_85 = L_84->___next;
		V_3 = (int32_t*)L_85;
		int32_t* L_86 = V_3;
		int32_t L_87 = V_2;
		intptr_t L_88 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_87,NULL));
		int32_t* L_89 = V_5;
		int32_t L_90 = V_4;
		intptr_t L_91 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_90,NULL));
		int32_t L_92 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(L_91, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(L_88, 4)))), (int32_t)L_92);
		int32_t* L_93 = V_5;
		int32_t L_94 = V_4;
		intptr_t L_95 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_94,NULL));
		int32_t L_96 = V_2;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(L_95, 4)))), (int32_t)L_96);
		return (bool)1;
	}

IL_0162:
	{
		return (bool)0;
	}
}
// Method Definition Index: 65302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m92AEEFC9D4C112D3752CECA55C044846D025DAB0 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		intptr_t L_11 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_10,NULL));
		int32_t L_12 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(L_11, 4)))));
		V_5 = L_12;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		uint8_t* L_14 = L_13->___keys;
		int32_t L_15 = V_5;
		int32_t L_16;
		L_16 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_14, L_15, NULL);
		V_6 = L_16;
		int32_t L_17 = ___1_key;
		bool L_18;
		L_18 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_6), L_17, NULL);
		if (!L_18)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_21 = V_1;
		int32_t L_22 = V_3;
		intptr_t L_23 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_22,NULL));
		int32_t* L_24 = V_2;
		int32_t L_25 = V_5;
		intptr_t L_26 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_25,NULL));
		int32_t L_27 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(L_26, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(L_23, 4)))), (int32_t)L_27);
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_28 = V_2;
		int32_t L_29 = V_4;
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_29,NULL));
		int32_t* L_31 = V_2;
		int32_t L_32 = V_5;
		intptr_t L_33 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_32,NULL));
		int32_t L_34 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(L_33, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_30, 4)))), (int32_t)L_34);
	}

IL_0086:
	{
		int32_t* L_35 = V_2;
		int32_t L_36 = V_5;
		intptr_t L_37 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_36,NULL));
		int32_t L_38 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(L_37, 4)))));
		int32_t* L_39 = V_2;
		int32_t L_40 = V_5;
		intptr_t L_41 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_40,NULL));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t* L_43;
		L_43 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_42, NULL);
		int32_t L_44 = il2cpp_codegen_ldind<int32_t, int32_t>(L_43);
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(L_41, 4)))), (int32_t)L_44);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_45 = ___0_data;
		int32_t* L_46;
		L_46 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_45, NULL);
		int32_t L_47 = V_5;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_46, (int32_t)L_47);
		V_5 = L_38;
		bool L_48 = ___2_isMultiHashMap;
		if (L_48)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_49 = V_5;
		V_4 = L_49;
		int32_t* L_50 = V_2;
		int32_t L_51 = V_5;
		intptr_t L_52 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_51,NULL));
		int32_t L_53 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_50, ((intptr_t)il2cpp_codegen_multiply(L_52, 4)))));
		V_5 = L_53;
	}

IL_00bb:
	{
		int32_t L_54 = V_5;
		if ((((int32_t)L_54) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_55 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		int32_t L_57 = L_56->___keyCapacity;
		if ((((int32_t)L_55) < ((int32_t)L_57)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_58 = V_0;
		return L_58;
	}
}
// Method Definition Index: 65303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_mB629F0465A0E88564FAD9EE419248A8A043B9D8E (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC ___1_it, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		int32_t* L_4 = (int32_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_4, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		int32_t L_11 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, 4)))));
		V_3 = L_11;
		int32_t L_12 = V_3;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_13 = ___1_it;
		int32_t L_14 = L_13.___EntryIndex;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_15 = V_0;
		int32_t L_16 = V_2;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_16,NULL));
		int32_t* L_18 = V_1;
		int32_t L_19 = V_3;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(L_17, 4)))), (int32_t)L_21);
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_22 = V_1;
		int32_t L_23 = V_3;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_23,NULL));
		int32_t L_25 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, 4)))));
		V_3 = L_25;
	}

IL_0051:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_27 = V_1;
		int32_t L_28 = V_3;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		int32_t L_30 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, 4)))));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_31 = ___1_it;
		int32_t L_32 = L_31.___EntryIndex;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_32))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_33 = V_3;
		int32_t* L_34 = V_1;
		int32_t L_35 = V_3;
		intptr_t L_36 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_35,NULL));
		int32_t* L_37 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_38 = ___1_it;
		int32_t L_39 = L_38.___EntryIndex;
		intptr_t L_40 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_39,NULL));
		int32_t L_41 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(L_40, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(L_36, 4)))), (int32_t)L_41);
	}

IL_007b:
	{
		int32_t* L_42 = V_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		intptr_t L_45 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_44,NULL));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		int32_t* L_47;
		L_47 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_46, NULL);
		int32_t L_48 = il2cpp_codegen_ldind<int32_t, int32_t>(L_47);
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(L_45, 4)))), (int32_t)L_48);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		int32_t* L_50;
		L_50 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_49, NULL);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC L_51 = ___1_it;
		int32_t L_52 = L_51.___EntryIndex;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_50, (int32_t)L_52);
		return;
	}
}
// Method Definition Index: 65305
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m1987DED2458DEE21F93ADF1E36865CBBC970BA97 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_key, AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46* ___2_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___3_it, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___3_it;
		int32_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_5 = ___3_it;
		V_2 = (-1);
		L_5->___NextEntryIndex = (-1);
		int32_t L_6 = V_2;
		L_4->___EntryIndex = L_6;
		AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46* L_7 = ___2_item;
		il2cpp_codegen_initobj(L_7, sizeof(AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		uint8_t* L_9 = L_8->___buckets;
		V_0 = (int32_t*)L_9;
		int32_t L_10;
		L_10 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		NullCheck(L_11);
		int32_t L_12 = L_11->___bucketCapacityMask;
		V_1 = ((int32_t)(L_10&L_12));
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_13 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_14 = ___3_it;
		int32_t* L_15 = V_0;
		int32_t L_16 = V_1;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_16,NULL));
		int32_t L_18 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(L_17, 4)))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_14->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_13->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m85CB28E20997B412498B96398A59B174173C4AEB(L_21, L_22, L_23, NULL);
		return L_24;
	}
}
// Method Definition Index: 65306
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m85CB28E20997B412498B96398A59B174173C4AEB (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46* ___1_item, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___2_it, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		int32_t L_14 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, 4)))));
		V_0 = L_14;
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t L_18 = L_17->___keyCapacity;
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		NullCheck(L_19);
		uint8_t* L_20 = L_19->___keys;
		int32_t L_21 = V_0;
		int32_t L_22;
		L_22 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_20, L_21, NULL);
		V_2 = L_22;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_23 = ___2_it;
		int32_t L_24 = L_23->___key;
		bool L_25;
		L_25 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_2), L_24, NULL);
		if (!L_25)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_26 = ___2_it;
		int32_t* L_27 = V_1;
		int32_t L_28 = V_0;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		int32_t L_30 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, 4)))));
		L_26->___NextEntryIndex = L_30;
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_31 = ___2_it;
		int32_t L_32 = V_0;
		L_31->___EntryIndex = L_32;
		AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46* L_33 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		uint8_t* L_35 = L_34->___values;
		int32_t L_36 = V_0;
		AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 L_37;
		L_37 = UnsafeUtility_ReadArrayElement_TisAnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46_m8460969BD9998B0DFF865186874B2414FEED12C8_inline((void*)L_35, L_36, NULL);
		*(AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46*)L_33 = L_37;
		return (bool)1;
	}
}
// Method Definition Index: 65307
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m847CAC8B0067C1D94033B05867469A562F5DF00B (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* ___1_it, AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46* ___2_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t093370576CC8384110748B67FAF3066D23472ABC* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46* L_9 = ___2_item;
		AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 L_10 = (*(AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46*)L_9);
		UnsafeUtility_WriteArrayElement_TisAnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46_m9FDDC2380EF57AE03BE92D8AC12841CAADE0EFDB_inline((void*)L_7, L_8, L_10, NULL);
		return (bool)1;
	}
}
// Method Definition Index: 65308
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_mBF2A4B641F36A3AE93CF5DAF9BC5D4D56D86BD9D (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
// Method Definition Index: 65309
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m875079FF2A29C9FEBBE2BF46B06E6F10D8FD0CD4 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
// Method Definition Index: 65310
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mC65C248B4FDD46772900143ABA4298001A7B396E (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 65311
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m7C41F45220AA87FA628BBA215AA2BE6A8BCDFF00 (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
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
// Method Definition Index: 65296
// Method Definition Index: 65297
// Method Definition Index: 65298
// Method Definition Index: 65299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m8B2F4B364F6D97AA02F42B29C9CD5942FF7E2094 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___1_key, int32_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA75399BF08E0CCAC328234FD7A71D864467E95C2(L_0, L_1, (&V_0), (&V_1), NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m57B325EFF67BD5485331BD2F287B463A5D8FC9C8(L_3, L_4, NULL);
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_m6E993EC5F50FC82EDD84AF158A50E9FF2BAE2705_inline((void*)L_7, L_8, L_9, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		int32_t L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_11, L_12, L_13, NULL);
		int32_t L_14;
		L_14 = RangeKey_GetHashCode_mC38845B6A1CC657D6F6B1149E7448AA6A3EF3257((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		intptr_t L_21 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_20,NULL));
		int32_t L_22 = V_2;
		int32_t L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(L_21, 4)))), L_22, (-1));
		if ((((int32_t)L_23) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		uint8_t* L_25 = L_24->___next;
		V_5 = (int32_t*)L_25;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_26 = V_4;
		int32_t L_27 = V_3;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t L_29 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))));
		V_6 = L_29;
		int32_t* L_30 = V_5;
		int32_t L_31 = V_2;
		intptr_t L_32 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_31,NULL));
		int32_t L_33 = V_6;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(L_32, 4)))), (int32_t)L_33);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_35 = ___1_key;
		bool L_36;
		L_36 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA75399BF08E0CCAC328234FD7A71D864467E95C2(L_34, L_35, (&V_0), (&V_1), NULL);
		if (!L_36)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		int32_t L_38 = V_2;
		int32_t L_39 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m95E0C2203337A917B366551260F10DD9AA00924A(L_37, L_38, L_39, NULL);
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_40 = V_4;
		int32_t L_41 = V_3;
		intptr_t L_42 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_41,NULL));
		int32_t L_43 = V_2;
		int32_t L_44 = V_6;
		int32_t L_45;
		L_45 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(L_42, 4)))), L_43, L_44);
		int32_t L_46 = V_6;
		if ((!(((uint32_t)L_45) == ((uint32_t)L_46))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
// Method Definition Index: 65300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m35894EBBB103E1E0CD0CD016DB1B35AC14A28D1B (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___1_key, int32_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m57B325EFF67BD5485331BD2F287B463A5D8FC9C8(L_0, L_1, NULL);
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_m6E993EC5F50FC82EDD84AF158A50E9FF2BAE2705_inline((void*)L_4, L_5, L_6, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		int32_t L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_8, L_9, L_10, NULL);
		int32_t L_11;
		L_11 = RangeKey_GetHashCode_mC38845B6A1CC657D6F6B1149E7448AA6A3EF3257((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		V_3 = L_21;
		int32_t* L_22 = V_4;
		int32_t L_23 = V_0;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_23,NULL));
		int32_t L_25 = V_3;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, 4)))), (int32_t)L_25);
		int32_t* L_26 = V_2;
		int32_t L_27 = V_1;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t L_29 = V_0;
		int32_t L_30 = V_3;
		int32_t L_31;
		L_31 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))), L_29, L_30);
		int32_t L_32 = V_3;
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 65301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m68F426016D2195FB3CAC3B543D8F67C733031A7A (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___1_key, int32_t ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA75399BF08E0CCAC328234FD7A71D864467E95C2(L_1, L_2, (&V_0), (&V_1), NULL);
		if (L_3)
		{
			goto IL_0162;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00d4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = il2cpp_codegen_ldind<int32_t, int32_t>(L_9);
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16))),NULL));
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_15, 4)))));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		int32_t* L_18;
		L_18 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_17, NULL);
		int32_t L_19 = V_7;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_19, ((int32_t)16))),NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		V_2 = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		uint8_t* L_23 = L_22->___next;
		V_3 = (int32_t*)L_23;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		int32_t* L_25;
		L_25 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_24, NULL);
		int32_t L_26 = V_7;
		intptr_t L_27 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_26, ((int32_t)16))),NULL));
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_29,NULL));
		int32_t L_31 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_30, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(L_27, 4)))), (int32_t)L_31);
		int32_t* L_32 = V_3;
		int32_t L_33 = V_2;
		intptr_t L_34 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_33,NULL));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(L_34, 4)))), (int32_t)(-1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = V_2;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_36, (int32_t)L_37);
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_38 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0097:
	{
		int32_t L_39 = V_7;
		int32_t L_40 = V_6;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		int32_t L_43 = il2cpp_codegen_ldind<int32_t, int32_t>(L_42);
		if ((((int32_t)L_43) >= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		NullCheck(L_44);
		int32_t L_45 = L_44->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)1073741823)))))
		{
			goto IL_00b6;
		}
	}
	{
		return (bool)0;
	}

IL_00b6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		int32_t L_48;
		L_48 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_47, NULL);
		V_8 = L_48;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		int32_t L_50 = V_8;
		int32_t L_51 = V_8;
		int64_t L_52;
		L_52 = UnsafeParallelHashMapData_GetBucketSize_mBE376CBC384B796DE89740ECD5EA9C7F520D93D7(L_51, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_53 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3DEC8FE0C45757F13739FD01205D6A4138E8E9CD(L_49, L_50, L_52, L_53, NULL);
	}

IL_00d4:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_54 = ___0_data;
		int32_t* L_55;
		L_55 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_54, NULL);
		int32_t L_56 = il2cpp_codegen_ldind<int32_t, int32_t>(L_55);
		V_2 = L_56;
		int32_t L_57 = V_2;
		if ((((int32_t)L_57) < ((int32_t)0)))
		{
			goto IL_00f5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_58 = ___0_data;
		int32_t* L_59;
		L_59 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_58, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___next;
		int32_t L_62 = V_2;
		intptr_t L_63 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_62,NULL));
		int32_t L_64 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(L_63, 4))))));
		il2cpp_codegen_stind<int32_t>((int32_t*)L_59, (int32_t)L_64);
		goto IL_0107;
	}

IL_00f5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_65 = ___0_data;
		NullCheck(L_65);
		int32_t* L_66 = (int32_t*)(&L_65->___allocatedIndexLength);
		int32_t* L_67 = L_66;
		int32_t L_68 = il2cpp_codegen_ldind<int32_t, int32_t>(L_67);
		V_9 = L_68;
		int32_t L_69 = V_9;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_67, (int32_t)((int32_t)il2cpp_codegen_add(L_69, 1)));
		int32_t L_70 = V_9;
		V_2 = L_70;
	}

IL_0107:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_71 = ___0_data;
		NullCheck(L_71);
		uint8_t* L_72 = L_71->___keys;
		int32_t L_73 = V_2;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_74 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_m6E993EC5F50FC82EDD84AF158A50E9FF2BAE2705_inline((void*)L_72, L_73, L_74, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_75 = ___0_data;
		NullCheck(L_75);
		uint8_t* L_76 = L_75->___values;
		int32_t L_77 = V_2;
		int32_t L_78 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_76, L_77, L_78, NULL);
		int32_t L_79;
		L_79 = RangeKey_GetHashCode_mC38845B6A1CC657D6F6B1149E7448AA6A3EF3257((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		int32_t L_81 = L_80->___bucketCapacityMask;
		V_4 = ((int32_t)(L_79&L_81));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___buckets;
		V_5 = (int32_t*)L_83;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		uint8_t* L_85 = L_84->___next;
		V_3 = (int32_t*)L_85;
		int32_t* L_86 = V_3;
		int32_t L_87 = V_2;
		intptr_t L_88 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_87,NULL));
		int32_t* L_89 = V_5;
		int32_t L_90 = V_4;
		intptr_t L_91 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_90,NULL));
		int32_t L_92 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(L_91, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(L_88, 4)))), (int32_t)L_92);
		int32_t* L_93 = V_5;
		int32_t L_94 = V_4;
		intptr_t L_95 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_94,NULL));
		int32_t L_96 = V_2;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(L_95, 4)))), (int32_t)L_96);
		return (bool)1;
	}

IL_0162:
	{
		return (bool)0;
	}
}
// Method Definition Index: 65302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m84E20B60B35803AAAE1A64D7E170477EDB1DEB10 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = RangeKey_GetHashCode_mC38845B6A1CC657D6F6B1149E7448AA6A3EF3257((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		intptr_t L_11 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_10,NULL));
		int32_t L_12 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(L_11, 4)))));
		V_5 = L_12;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		uint8_t* L_14 = L_13->___keys;
		int32_t L_15 = V_5;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_16;
		L_16 = UnsafeUtility_ReadArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_mFDF2C4591B5F4C0AF4424ED681225F9CF100C5BB_inline((void*)L_14, L_15, NULL);
		V_6 = L_16;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_17 = ___1_key;
		bool L_18;
		L_18 = RangeKey_Equals_m05E612C122D91758588CEB7529751045E6F09493((&V_6), L_17, NULL);
		if (!L_18)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_21 = V_1;
		int32_t L_22 = V_3;
		intptr_t L_23 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_22,NULL));
		int32_t* L_24 = V_2;
		int32_t L_25 = V_5;
		intptr_t L_26 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_25,NULL));
		int32_t L_27 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(L_26, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(L_23, 4)))), (int32_t)L_27);
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_28 = V_2;
		int32_t L_29 = V_4;
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_29,NULL));
		int32_t* L_31 = V_2;
		int32_t L_32 = V_5;
		intptr_t L_33 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_32,NULL));
		int32_t L_34 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(L_33, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_30, 4)))), (int32_t)L_34);
	}

IL_0086:
	{
		int32_t* L_35 = V_2;
		int32_t L_36 = V_5;
		intptr_t L_37 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_36,NULL));
		int32_t L_38 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(L_37, 4)))));
		int32_t* L_39 = V_2;
		int32_t L_40 = V_5;
		intptr_t L_41 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_40,NULL));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t* L_43;
		L_43 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_42, NULL);
		int32_t L_44 = il2cpp_codegen_ldind<int32_t, int32_t>(L_43);
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(L_41, 4)))), (int32_t)L_44);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_45 = ___0_data;
		int32_t* L_46;
		L_46 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_45, NULL);
		int32_t L_47 = V_5;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_46, (int32_t)L_47);
		V_5 = L_38;
		bool L_48 = ___2_isMultiHashMap;
		if (L_48)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_49 = V_5;
		V_4 = L_49;
		int32_t* L_50 = V_2;
		int32_t L_51 = V_5;
		intptr_t L_52 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_51,NULL));
		int32_t L_53 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_50, ((intptr_t)il2cpp_codegen_multiply(L_52, 4)))));
		V_5 = L_53;
	}

IL_00bb:
	{
		int32_t L_54 = V_5;
		if ((((int32_t)L_54) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_55 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		int32_t L_57 = L_56->___keyCapacity;
		if ((((int32_t)L_55) < ((int32_t)L_57)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_58 = V_0;
		return L_58;
	}
}
// Method Definition Index: 65303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m984EF7E144684AA2009D90721D61BE05A46AFD09 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727 ___1_it, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C* L_4 = (RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = RangeKey_GetHashCode_mC38845B6A1CC657D6F6B1149E7448AA6A3EF3257(L_4, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		int32_t L_11 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, 4)))));
		V_3 = L_11;
		int32_t L_12 = V_3;
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727 L_13 = ___1_it;
		int32_t L_14 = L_13.___EntryIndex;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_15 = V_0;
		int32_t L_16 = V_2;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_16,NULL));
		int32_t* L_18 = V_1;
		int32_t L_19 = V_3;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(L_17, 4)))), (int32_t)L_21);
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_22 = V_1;
		int32_t L_23 = V_3;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_23,NULL));
		int32_t L_25 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, 4)))));
		V_3 = L_25;
	}

IL_0051:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_27 = V_1;
		int32_t L_28 = V_3;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		int32_t L_30 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, 4)))));
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727 L_31 = ___1_it;
		int32_t L_32 = L_31.___EntryIndex;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_32))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_33 = V_3;
		int32_t* L_34 = V_1;
		int32_t L_35 = V_3;
		intptr_t L_36 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_35,NULL));
		int32_t* L_37 = V_1;
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727 L_38 = ___1_it;
		int32_t L_39 = L_38.___EntryIndex;
		intptr_t L_40 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_39,NULL));
		int32_t L_41 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(L_40, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(L_36, 4)))), (int32_t)L_41);
	}

IL_007b:
	{
		int32_t* L_42 = V_1;
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727 L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		intptr_t L_45 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_44,NULL));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		int32_t* L_47;
		L_47 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_46, NULL);
		int32_t L_48 = il2cpp_codegen_ldind<int32_t, int32_t>(L_47);
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(L_45, 4)))), (int32_t)L_48);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		int32_t* L_50;
		L_50 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_49, NULL);
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727 L_51 = ___1_it;
		int32_t L_52 = L_51.___EntryIndex;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_50, (int32_t)L_52);
		return;
	}
}
// Method Definition Index: 65305
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mA75399BF08E0CCAC328234FD7A71D864467E95C2 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* ___3_it, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* L_0 = ___3_it;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* L_5 = ___3_it;
		V_2 = (-1);
		L_5->___NextEntryIndex = (-1);
		int32_t L_6 = V_2;
		L_4->___EntryIndex = L_6;
		int32_t* L_7 = ___2_item;
		il2cpp_codegen_initobj(L_7, sizeof(int32_t));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		uint8_t* L_9 = L_8->___buckets;
		V_0 = (int32_t*)L_9;
		int32_t L_10;
		L_10 = RangeKey_GetHashCode_mC38845B6A1CC657D6F6B1149E7448AA6A3EF3257((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		NullCheck(L_11);
		int32_t L_12 = L_11->___bucketCapacityMask;
		V_1 = ((int32_t)(L_10&L_12));
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* L_13 = ___3_it;
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* L_14 = ___3_it;
		int32_t* L_15 = V_0;
		int32_t L_16 = V_1;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_16,NULL));
		int32_t L_18 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(L_17, 4)))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_14->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_13->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		int32_t* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m92F223FB6B0005A83CA9AC122EEB656E520F55AC(L_21, L_22, L_23, NULL);
		return L_24;
	}
}
// Method Definition Index: 65306
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m92F223FB6B0005A83CA9AC122EEB656E520F55AC (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* ___2_it, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		int32_t* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(int32_t));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		int32_t L_14 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, 4)))));
		V_0 = L_14;
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t L_18 = L_17->___keyCapacity;
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		NullCheck(L_19);
		uint8_t* L_20 = L_19->___keys;
		int32_t L_21 = V_0;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_22;
		L_22 = UnsafeUtility_ReadArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_mFDF2C4591B5F4C0AF4424ED681225F9CF100C5BB_inline((void*)L_20, L_21, NULL);
		V_2 = L_22;
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* L_23 = ___2_it;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_24 = L_23->___key;
		bool L_25;
		L_25 = RangeKey_Equals_m05E612C122D91758588CEB7529751045E6F09493((&V_2), L_24, NULL);
		if (!L_25)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* L_26 = ___2_it;
		int32_t* L_27 = V_1;
		int32_t L_28 = V_0;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		int32_t L_30 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, 4)))));
		L_26->___NextEntryIndex = L_30;
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* L_31 = ___2_it;
		int32_t L_32 = V_0;
		L_31->___EntryIndex = L_32;
		int32_t* L_33 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		uint8_t* L_35 = L_34->___values;
		int32_t L_36 = V_0;
		int32_t L_37;
		L_37 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_35, L_36, NULL);
		*(int32_t*)L_33 = L_37;
		return (bool)1;
	}
}
// Method Definition Index: 65307
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m0EC4D0EEAFA0FED1FD26DDC65F7A85F8E250F64D (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* ___1_it, int32_t* ___2_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_tB30276FCEC93EFAF7FCBE919A5B6BC9CE3EE3727* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		int32_t* L_9 = ___2_item;
		int32_t L_10 = (*(int32_t*)L_9);
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_7, L_8, L_10, NULL);
		return (bool)1;
	}
}
// Method Definition Index: 65308
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m52745ED7420EABDF0FE1EB18EB8DF971BC38F55E (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
// Method Definition Index: 65309
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_mAFBD8500D8F997F21382951674B827495971A191 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
// Method Definition Index: 65310
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m228ECE552E75254D780BC34D5F06FE9C2AE3FC76 (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 65311
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_mB3A30520B48654DAAAB2BD313E27D8ECC4BC7FA4 (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
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
// Method Definition Index: 65296
// Method Definition Index: 65297
// Method Definition Index: 65298
// Method Definition Index: 65299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_m7D228A0B7EADBB929641325767BA96AC5484BD52 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint32_t ___1_key, GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		uint32_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m452AB0AD39F142541DD13262445DEFBE7F0AB055(L_0, L_1, (&V_0), (&V_1), NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m5D709DC07BBA4C0F9F41DE999E7EDB2892DAB166(L_3, L_4, NULL);
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		uint32_t L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m839FEB3192BEC0090FBA73A11E371E1A01C13ADF_inline((void*)L_7, L_8, L_9, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisGeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271_mD92564ABD442EBF5CD99E2589172450FD38429FB_inline((void*)L_11, L_12, L_13, NULL);
		int32_t L_14;
		L_14 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		intptr_t L_21 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_20,NULL));
		int32_t L_22 = V_2;
		int32_t L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(L_21, 4)))), L_22, (-1));
		if ((((int32_t)L_23) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		uint8_t* L_25 = L_24->___next;
		V_5 = (int32_t*)L_25;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_26 = V_4;
		int32_t L_27 = V_3;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t L_29 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))));
		V_6 = L_29;
		int32_t* L_30 = V_5;
		int32_t L_31 = V_2;
		intptr_t L_32 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_31,NULL));
		int32_t L_33 = V_6;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(L_32, 4)))), (int32_t)L_33);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		uint32_t L_35 = ___1_key;
		bool L_36;
		L_36 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m452AB0AD39F142541DD13262445DEFBE7F0AB055(L_34, L_35, (&V_0), (&V_1), NULL);
		if (!L_36)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		int32_t L_38 = V_2;
		int32_t L_39 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m69CC8F146D8D164025CDAB725ED2133D374FA895(L_37, L_38, L_39, NULL);
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_40 = V_4;
		int32_t L_41 = V_3;
		intptr_t L_42 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_41,NULL));
		int32_t L_43 = V_2;
		int32_t L_44 = V_6;
		int32_t L_45;
		L_45 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(L_42, 4)))), L_43, L_44);
		int32_t L_46 = V_6;
		if ((!(((uint32_t)L_45) == ((uint32_t)L_46))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
// Method Definition Index: 65300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_mD7EEE91DE1E9A1EC7540802B6BC43B111169A547 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint32_t ___1_key, GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m5D709DC07BBA4C0F9F41DE999E7EDB2892DAB166(L_0, L_1, NULL);
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		uint32_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m839FEB3192BEC0090FBA73A11E371E1A01C13ADF_inline((void*)L_4, L_5, L_6, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisGeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271_mD92564ABD442EBF5CD99E2589172450FD38429FB_inline((void*)L_8, L_9, L_10, NULL);
		int32_t L_11;
		L_11 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		V_3 = L_21;
		int32_t* L_22 = V_4;
		int32_t L_23 = V_0;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_23,NULL));
		int32_t L_25 = V_3;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, 4)))), (int32_t)L_25);
		int32_t* L_26 = V_2;
		int32_t L_27 = V_1;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t L_29 = V_0;
		int32_t L_30 = V_3;
		int32_t L_31;
		L_31 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))), L_29, L_30);
		int32_t L_32 = V_3;
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 65301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m8A74903F7EE88AD51170A2A05020A4F26F587CAC (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint32_t ___1_key, GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		uint32_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m452AB0AD39F142541DD13262445DEFBE7F0AB055(L_1, L_2, (&V_0), (&V_1), NULL);
		if (L_3)
		{
			goto IL_0162;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00d4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = il2cpp_codegen_ldind<int32_t, int32_t>(L_9);
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16))),NULL));
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_15, 4)))));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		int32_t* L_18;
		L_18 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_17, NULL);
		int32_t L_19 = V_7;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_19, ((int32_t)16))),NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		V_2 = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		uint8_t* L_23 = L_22->___next;
		V_3 = (int32_t*)L_23;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		int32_t* L_25;
		L_25 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_24, NULL);
		int32_t L_26 = V_7;
		intptr_t L_27 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_26, ((int32_t)16))),NULL));
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_29,NULL));
		int32_t L_31 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_30, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(L_27, 4)))), (int32_t)L_31);
		int32_t* L_32 = V_3;
		int32_t L_33 = V_2;
		intptr_t L_34 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_33,NULL));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(L_34, 4)))), (int32_t)(-1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = V_2;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_36, (int32_t)L_37);
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_38 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0097:
	{
		int32_t L_39 = V_7;
		int32_t L_40 = V_6;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		int32_t L_43 = il2cpp_codegen_ldind<int32_t, int32_t>(L_42);
		if ((((int32_t)L_43) >= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		NullCheck(L_44);
		int32_t L_45 = L_44->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)1073741823)))))
		{
			goto IL_00b6;
		}
	}
	{
		return (bool)0;
	}

IL_00b6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		int32_t L_48;
		L_48 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_47, NULL);
		V_8 = L_48;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		int32_t L_50 = V_8;
		int32_t L_51 = V_8;
		int64_t L_52;
		L_52 = UnsafeParallelHashMapData_GetBucketSize_mBE376CBC384B796DE89740ECD5EA9C7F520D93D7(L_51, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_53 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisGeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271_mBD7A8412C7ED558BD4891BE34D5D811409097B84(L_49, L_50, L_52, L_53, NULL);
	}

IL_00d4:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_54 = ___0_data;
		int32_t* L_55;
		L_55 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_54, NULL);
		int32_t L_56 = il2cpp_codegen_ldind<int32_t, int32_t>(L_55);
		V_2 = L_56;
		int32_t L_57 = V_2;
		if ((((int32_t)L_57) < ((int32_t)0)))
		{
			goto IL_00f5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_58 = ___0_data;
		int32_t* L_59;
		L_59 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_58, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___next;
		int32_t L_62 = V_2;
		intptr_t L_63 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_62,NULL));
		int32_t L_64 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(L_63, 4))))));
		il2cpp_codegen_stind<int32_t>((int32_t*)L_59, (int32_t)L_64);
		goto IL_0107;
	}

IL_00f5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_65 = ___0_data;
		NullCheck(L_65);
		int32_t* L_66 = (int32_t*)(&L_65->___allocatedIndexLength);
		int32_t* L_67 = L_66;
		int32_t L_68 = il2cpp_codegen_ldind<int32_t, int32_t>(L_67);
		V_9 = L_68;
		int32_t L_69 = V_9;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_67, (int32_t)((int32_t)il2cpp_codegen_add(L_69, 1)));
		int32_t L_70 = V_9;
		V_2 = L_70;
	}

IL_0107:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_71 = ___0_data;
		NullCheck(L_71);
		uint8_t* L_72 = L_71->___keys;
		int32_t L_73 = V_2;
		uint32_t L_74 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m839FEB3192BEC0090FBA73A11E371E1A01C13ADF_inline((void*)L_72, L_73, L_74, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_75 = ___0_data;
		NullCheck(L_75);
		uint8_t* L_76 = L_75->___values;
		int32_t L_77 = V_2;
		GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 L_78 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisGeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271_mD92564ABD442EBF5CD99E2589172450FD38429FB_inline((void*)L_76, L_77, L_78, NULL);
		int32_t L_79;
		L_79 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		int32_t L_81 = L_80->___bucketCapacityMask;
		V_4 = ((int32_t)(L_79&L_81));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___buckets;
		V_5 = (int32_t*)L_83;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		uint8_t* L_85 = L_84->___next;
		V_3 = (int32_t*)L_85;
		int32_t* L_86 = V_3;
		int32_t L_87 = V_2;
		intptr_t L_88 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_87,NULL));
		int32_t* L_89 = V_5;
		int32_t L_90 = V_4;
		intptr_t L_91 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_90,NULL));
		int32_t L_92 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(L_91, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(L_88, 4)))), (int32_t)L_92);
		int32_t* L_93 = V_5;
		int32_t L_94 = V_4;
		intptr_t L_95 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_94,NULL));
		int32_t L_96 = V_2;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(L_95, 4)))), (int32_t)L_96);
		return (bool)1;
	}

IL_0162:
	{
		return (bool)0;
	}
}
// Method Definition Index: 65302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mAEAC7E535BD67C3D64BC79882F48AE1C567959EB (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint32_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		intptr_t L_11 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_10,NULL));
		int32_t L_12 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(L_11, 4)))));
		V_5 = L_12;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		uint8_t* L_14 = L_13->___keys;
		int32_t L_15 = V_5;
		uint32_t L_16;
		L_16 = UnsafeUtility_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mDA80BAFF55EA77496672B3B5B3804B55274B7E95_inline((void*)L_14, L_15, NULL);
		V_6 = L_16;
		uint32_t L_17 = ___1_key;
		bool L_18;
		L_18 = UInt32_Equals_m6BE590F34B71E27978E9146437F73A6448BA01A3((&V_6), L_17, NULL);
		if (!L_18)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_21 = V_1;
		int32_t L_22 = V_3;
		intptr_t L_23 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_22,NULL));
		int32_t* L_24 = V_2;
		int32_t L_25 = V_5;
		intptr_t L_26 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_25,NULL));
		int32_t L_27 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(L_26, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(L_23, 4)))), (int32_t)L_27);
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_28 = V_2;
		int32_t L_29 = V_4;
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_29,NULL));
		int32_t* L_31 = V_2;
		int32_t L_32 = V_5;
		intptr_t L_33 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_32,NULL));
		int32_t L_34 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(L_33, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_30, 4)))), (int32_t)L_34);
	}

IL_0086:
	{
		int32_t* L_35 = V_2;
		int32_t L_36 = V_5;
		intptr_t L_37 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_36,NULL));
		int32_t L_38 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(L_37, 4)))));
		int32_t* L_39 = V_2;
		int32_t L_40 = V_5;
		intptr_t L_41 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_40,NULL));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t* L_43;
		L_43 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_42, NULL);
		int32_t L_44 = il2cpp_codegen_ldind<int32_t, int32_t>(L_43);
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(L_41, 4)))), (int32_t)L_44);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_45 = ___0_data;
		int32_t* L_46;
		L_46 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_45, NULL);
		int32_t L_47 = V_5;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_46, (int32_t)L_47);
		V_5 = L_38;
		bool L_48 = ___2_isMultiHashMap;
		if (L_48)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_49 = V_5;
		V_4 = L_49;
		int32_t* L_50 = V_2;
		int32_t L_51 = V_5;
		intptr_t L_52 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_51,NULL));
		int32_t L_53 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_50, ((intptr_t)il2cpp_codegen_multiply(L_52, 4)))));
		V_5 = L_53;
	}

IL_00bb:
	{
		int32_t L_54 = V_5;
		if ((((int32_t)L_54) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_55 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		int32_t L_57 = L_56->___keyCapacity;
		if ((((int32_t)L_55) < ((int32_t)L_57)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_58 = V_0;
		return L_58;
	}
}
// Method Definition Index: 65303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m4230A0085F8828654F0B483B59661ADFC5C536F0 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B ___1_it, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		uint32_t* L_4 = (uint32_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_4, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		int32_t L_11 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, 4)))));
		V_3 = L_11;
		int32_t L_12 = V_3;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B L_13 = ___1_it;
		int32_t L_14 = L_13.___EntryIndex;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_15 = V_0;
		int32_t L_16 = V_2;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_16,NULL));
		int32_t* L_18 = V_1;
		int32_t L_19 = V_3;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(L_17, 4)))), (int32_t)L_21);
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_22 = V_1;
		int32_t L_23 = V_3;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_23,NULL));
		int32_t L_25 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, 4)))));
		V_3 = L_25;
	}

IL_0051:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_27 = V_1;
		int32_t L_28 = V_3;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		int32_t L_30 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, 4)))));
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B L_31 = ___1_it;
		int32_t L_32 = L_31.___EntryIndex;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_32))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_33 = V_3;
		int32_t* L_34 = V_1;
		int32_t L_35 = V_3;
		intptr_t L_36 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_35,NULL));
		int32_t* L_37 = V_1;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B L_38 = ___1_it;
		int32_t L_39 = L_38.___EntryIndex;
		intptr_t L_40 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_39,NULL));
		int32_t L_41 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(L_40, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(L_36, 4)))), (int32_t)L_41);
	}

IL_007b:
	{
		int32_t* L_42 = V_1;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		intptr_t L_45 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_44,NULL));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		int32_t* L_47;
		L_47 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_46, NULL);
		int32_t L_48 = il2cpp_codegen_ldind<int32_t, int32_t>(L_47);
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(L_45, 4)))), (int32_t)L_48);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		int32_t* L_50;
		L_50 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_49, NULL);
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B L_51 = ___1_it;
		int32_t L_52 = L_51.___EntryIndex;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_50, (int32_t)L_52);
		return;
	}
}
// Method Definition Index: 65305
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m452AB0AD39F142541DD13262445DEFBE7F0AB055 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint32_t ___1_key, GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271* ___2_item, NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* ___3_it, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_0 = ___3_it;
		uint32_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_5 = ___3_it;
		V_2 = (-1);
		L_5->___NextEntryIndex = (-1);
		int32_t L_6 = V_2;
		L_4->___EntryIndex = L_6;
		GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271* L_7 = ___2_item;
		il2cpp_codegen_initobj(L_7, sizeof(GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		uint8_t* L_9 = L_8->___buckets;
		V_0 = (int32_t*)L_9;
		int32_t L_10;
		L_10 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		NullCheck(L_11);
		int32_t L_12 = L_11->___bucketCapacityMask;
		V_1 = ((int32_t)(L_10&L_12));
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_13 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_14 = ___3_it;
		int32_t* L_15 = V_0;
		int32_t L_16 = V_1;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_16,NULL));
		int32_t L_18 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(L_17, 4)))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_14->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_13->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m1C526A05A3A58C7AD3A2817DF4B02038B2B76995(L_21, L_22, L_23, NULL);
		return L_24;
	}
}
// Method Definition Index: 65306
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m1C526A05A3A58C7AD3A2817DF4B02038B2B76995 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271* ___1_item, NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* ___2_it, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		int32_t L_14 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, 4)))));
		V_0 = L_14;
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t L_18 = L_17->___keyCapacity;
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		NullCheck(L_19);
		uint8_t* L_20 = L_19->___keys;
		int32_t L_21 = V_0;
		uint32_t L_22;
		L_22 = UnsafeUtility_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mDA80BAFF55EA77496672B3B5B3804B55274B7E95_inline((void*)L_20, L_21, NULL);
		V_2 = L_22;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_23 = ___2_it;
		uint32_t L_24 = L_23->___key;
		bool L_25;
		L_25 = UInt32_Equals_m6BE590F34B71E27978E9146437F73A6448BA01A3((&V_2), L_24, NULL);
		if (!L_25)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_26 = ___2_it;
		int32_t* L_27 = V_1;
		int32_t L_28 = V_0;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		int32_t L_30 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, 4)))));
		L_26->___NextEntryIndex = L_30;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_31 = ___2_it;
		int32_t L_32 = V_0;
		L_31->___EntryIndex = L_32;
		GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271* L_33 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		uint8_t* L_35 = L_34->___values;
		int32_t L_36 = V_0;
		GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 L_37;
		L_37 = UnsafeUtility_ReadArrayElement_TisGeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271_m2A66DBE83F9498AC60B42C9A0B1C7E4401B4CDCC_inline((void*)L_35, L_36, NULL);
		*(GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271*)L_33 = L_37;
		return (bool)1;
	}
}
// Method Definition Index: 65307
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m3B86EC56961DA7D0464648D965F8E27F14D4181A (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* ___1_it, GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271* ___2_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271* L_9 = ___2_item;
		GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 L_10 = (*(GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271*)L_9);
		UnsafeUtility_WriteArrayElement_TisGeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271_mD92564ABD442EBF5CD99E2589172450FD38429FB_inline((void*)L_7, L_8, L_10, NULL);
		return (bool)1;
	}
}
// Method Definition Index: 65308
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_mED91A5B620A001C87C7A53D745833B1CBC74AC91 (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
// Method Definition Index: 65309
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_mF7E70E098AB4BFF27797283352B9E94A0918EB47 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
// Method Definition Index: 65310
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mAD14AC53D0C551DD9904BCF849DE54FFD766884E (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 65311
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_mD11EA49CCE10569152EBFB5EA9B3EB19B6E96B0A (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
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
// Method Definition Index: 65296
// Method Definition Index: 65297
// Method Definition Index: 65298
// Method Definition Index: 65299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mE1534B85EC26942FA8C9C2D93DE401507BD7B405 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint32_t ___1_key, int32_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		uint32_t L_1 = ___1_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6B99914C35E0F18487E1D815ED321C045BBEBC08(L_0, L_1, (&V_0), (&V_1), NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = UnsafeParallelHashMapBase_2_AllocEntry_m4555170F63E8739804DEC6FF582607D2F3F8D374(L_3, L_4, NULL);
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		uint32_t L_9 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m839FEB3192BEC0090FBA73A11E371E1A01C13ADF_inline((void*)L_7, L_8, L_9, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		int32_t L_13 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_11, L_12, L_13, NULL);
		int32_t L_14;
		L_14 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_3 = ((int32_t)(L_14&L_16));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___buckets;
		V_4 = (int32_t*)L_18;
		int32_t* L_19 = V_4;
		int32_t L_20 = V_3;
		intptr_t L_21 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_20,NULL));
		int32_t L_22 = V_2;
		int32_t L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(L_21, 4)))), L_22, (-1));
		if ((((int32_t)L_23) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		uint8_t* L_25 = L_24->___next;
		V_5 = (int32_t*)L_25;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_26 = V_4;
		int32_t L_27 = V_3;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t L_29 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))));
		V_6 = L_29;
		int32_t* L_30 = V_5;
		int32_t L_31 = V_2;
		intptr_t L_32 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_31,NULL));
		int32_t L_33 = V_6;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(L_32, 4)))), (int32_t)L_33);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		uint32_t L_35 = ___1_key;
		bool L_36;
		L_36 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6B99914C35E0F18487E1D815ED321C045BBEBC08(L_34, L_35, (&V_0), (&V_1), NULL);
		if (!L_36)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		int32_t L_38 = V_2;
		int32_t L_39 = ___3_threadIndex;
		UnsafeParallelHashMapBase_2_FreeEntry_m191EB6B37D156B9FBD644C1E41DA269AE39A7D21(L_37, L_38, L_39, NULL);
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_40 = V_4;
		int32_t L_41 = V_3;
		intptr_t L_42 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_41,NULL));
		int32_t L_43 = V_2;
		int32_t L_44 = V_6;
		int32_t L_45;
		L_45 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(L_42, 4)))), L_43, L_44);
		int32_t L_46 = V_6;
		if ((!(((uint32_t)L_45) == ((uint32_t)L_46))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
// Method Definition Index: 65300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m2B5823D6FB08B15BF3E10CD4B652636B4F70858C (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint32_t ___1_key, int32_t ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_AllocEntry_m4555170F63E8739804DEC6FF582607D2F3F8D374(L_0, L_1, NULL);
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		uint32_t L_6 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m839FEB3192BEC0090FBA73A11E371E1A01C13ADF_inline((void*)L_4, L_5, L_6, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		int32_t L_10 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_8, L_9, L_10, NULL);
		int32_t L_11;
		L_11 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		NullCheck(L_12);
		int32_t L_13 = L_12->___bucketCapacityMask;
		V_1 = ((int32_t)(L_11&L_13));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___buckets;
		V_2 = (int32_t*)L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		uint8_t* L_17 = L_16->___next;
		V_4 = (int32_t*)L_17;
	}

IL_0046:
	{
		int32_t* L_18 = V_2;
		int32_t L_19 = V_1;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		V_3 = L_21;
		int32_t* L_22 = V_4;
		int32_t L_23 = V_0;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_23,NULL));
		int32_t L_25 = V_3;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, 4)))), (int32_t)L_25);
		int32_t* L_26 = V_2;
		int32_t L_27 = V_1;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t L_29 = V_0;
		int32_t L_30 = V_3;
		int32_t L_31;
		L_31 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))), L_29, L_30);
		int32_t L_32 = V_3;
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 65301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m485E488382FC8A85CE2DBE1737521F92C5C7E871 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint32_t ___1_key, int32_t ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		uint32_t L_2 = ___1_key;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6B99914C35E0F18487E1D815ED321C045BBEBC08(L_1, L_2, (&V_0), (&V_1), NULL);
		if (L_3)
		{
			goto IL_0162;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00d4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = il2cpp_codegen_ldind<int32_t, int32_t>(L_9);
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16))),NULL));
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_15, 4)))));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		int32_t* L_18;
		L_18 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_17, NULL);
		int32_t L_19 = V_7;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_19, ((int32_t)16))),NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		V_2 = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		uint8_t* L_23 = L_22->___next;
		V_3 = (int32_t*)L_23;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		int32_t* L_25;
		L_25 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_24, NULL);
		int32_t L_26 = V_7;
		intptr_t L_27 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_26, ((int32_t)16))),NULL));
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_29,NULL));
		int32_t L_31 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_30, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(L_27, 4)))), (int32_t)L_31);
		int32_t* L_32 = V_3;
		int32_t L_33 = V_2;
		intptr_t L_34 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_33,NULL));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(L_34, 4)))), (int32_t)(-1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = V_2;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_36, (int32_t)L_37);
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_38 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0097:
	{
		int32_t L_39 = V_7;
		int32_t L_40 = V_6;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		int32_t L_43 = il2cpp_codegen_ldind<int32_t, int32_t>(L_42);
		if ((((int32_t)L_43) >= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		NullCheck(L_44);
		int32_t L_45 = L_44->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)1073741823)))))
		{
			goto IL_00b6;
		}
	}
	{
		return (bool)0;
	}

IL_00b6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		int32_t L_48;
		L_48 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_47, NULL);
		V_8 = L_48;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		int32_t L_50 = V_8;
		int32_t L_51 = V_8;
		int64_t L_52;
		L_52 = UnsafeParallelHashMapData_GetBucketSize_mBE376CBC384B796DE89740ECD5EA9C7F520D93D7(L_51, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_53 = ___4_allocation;
		UnsafeParallelHashMapData_ReallocateHashMap_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED337C060A7869E7A836D5F3C6671B9500396F53(L_49, L_50, L_52, L_53, NULL);
	}

IL_00d4:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_54 = ___0_data;
		int32_t* L_55;
		L_55 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_54, NULL);
		int32_t L_56 = il2cpp_codegen_ldind<int32_t, int32_t>(L_55);
		V_2 = L_56;
		int32_t L_57 = V_2;
		if ((((int32_t)L_57) < ((int32_t)0)))
		{
			goto IL_00f5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_58 = ___0_data;
		int32_t* L_59;
		L_59 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_58, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___next;
		int32_t L_62 = V_2;
		intptr_t L_63 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_62,NULL));
		int32_t L_64 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(L_63, 4))))));
		il2cpp_codegen_stind<int32_t>((int32_t*)L_59, (int32_t)L_64);
		goto IL_0107;
	}

IL_00f5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_65 = ___0_data;
		NullCheck(L_65);
		int32_t* L_66 = (int32_t*)(&L_65->___allocatedIndexLength);
		int32_t* L_67 = L_66;
		int32_t L_68 = il2cpp_codegen_ldind<int32_t, int32_t>(L_67);
		V_9 = L_68;
		int32_t L_69 = V_9;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_67, (int32_t)((int32_t)il2cpp_codegen_add(L_69, 1)));
		int32_t L_70 = V_9;
		V_2 = L_70;
	}

IL_0107:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_71 = ___0_data;
		NullCheck(L_71);
		uint8_t* L_72 = L_71->___keys;
		int32_t L_73 = V_2;
		uint32_t L_74 = ___1_key;
		UnsafeUtility_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m839FEB3192BEC0090FBA73A11E371E1A01C13ADF_inline((void*)L_72, L_73, L_74, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_75 = ___0_data;
		NullCheck(L_75);
		uint8_t* L_76 = L_75->___values;
		int32_t L_77 = V_2;
		int32_t L_78 = ___2_item;
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_76, L_77, L_78, NULL);
		int32_t L_79;
		L_79 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_80 = ___0_data;
		NullCheck(L_80);
		int32_t L_81 = L_80->___bucketCapacityMask;
		V_4 = ((int32_t)(L_79&L_81));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___buckets;
		V_5 = (int32_t*)L_83;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		uint8_t* L_85 = L_84->___next;
		V_3 = (int32_t*)L_85;
		int32_t* L_86 = V_3;
		int32_t L_87 = V_2;
		intptr_t L_88 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_87,NULL));
		int32_t* L_89 = V_5;
		int32_t L_90 = V_4;
		intptr_t L_91 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_90,NULL));
		int32_t L_92 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(L_91, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_86, ((intptr_t)il2cpp_codegen_multiply(L_88, 4)))), (int32_t)L_92);
		int32_t* L_93 = V_5;
		int32_t L_94 = V_4;
		intptr_t L_95 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_94,NULL));
		int32_t L_96 = V_2;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(L_95, 4)))), (int32_t)L_96);
		return (bool)1;
	}

IL_0162:
	{
		return (bool)0;
	}
}
// Method Definition Index: 65302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_mB41551911E1AAA29DB928D415D67C3E59030672C (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint32_t ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		int32_t L_6;
		L_6 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___bucketCapacityMask;
		V_3 = ((int32_t)(L_6&L_8));
		V_4 = (-1);
		int32_t* L_9 = V_1;
		int32_t L_10 = V_3;
		intptr_t L_11 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_10,NULL));
		int32_t L_12 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(L_11, 4)))));
		V_5 = L_12;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		NullCheck(L_13);
		uint8_t* L_14 = L_13->___keys;
		int32_t L_15 = V_5;
		uint32_t L_16;
		L_16 = UnsafeUtility_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mDA80BAFF55EA77496672B3B5B3804B55274B7E95_inline((void*)L_14, L_15, NULL);
		V_6 = L_16;
		uint32_t L_17 = ___1_key;
		bool L_18;
		L_18 = UInt32_Equals_m6BE590F34B71E27978E9146437F73A6448BA01A3((&V_6), L_17, NULL);
		if (!L_18)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_21 = V_1;
		int32_t L_22 = V_3;
		intptr_t L_23 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_22,NULL));
		int32_t* L_24 = V_2;
		int32_t L_25 = V_5;
		intptr_t L_26 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_25,NULL));
		int32_t L_27 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(L_26, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(L_23, 4)))), (int32_t)L_27);
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_28 = V_2;
		int32_t L_29 = V_4;
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_29,NULL));
		int32_t* L_31 = V_2;
		int32_t L_32 = V_5;
		intptr_t L_33 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_32,NULL));
		int32_t L_34 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(L_33, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_30, 4)))), (int32_t)L_34);
	}

IL_0086:
	{
		int32_t* L_35 = V_2;
		int32_t L_36 = V_5;
		intptr_t L_37 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_36,NULL));
		int32_t L_38 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(L_37, 4)))));
		int32_t* L_39 = V_2;
		int32_t L_40 = V_5;
		intptr_t L_41 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_40,NULL));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t* L_43;
		L_43 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_42, NULL);
		int32_t L_44 = il2cpp_codegen_ldind<int32_t, int32_t>(L_43);
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(L_41, 4)))), (int32_t)L_44);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_45 = ___0_data;
		int32_t* L_46;
		L_46 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_45, NULL);
		int32_t L_47 = V_5;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_46, (int32_t)L_47);
		V_5 = L_38;
		bool L_48 = ___2_isMultiHashMap;
		if (L_48)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_49 = V_5;
		V_4 = L_49;
		int32_t* L_50 = V_2;
		int32_t L_51 = V_5;
		intptr_t L_52 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_51,NULL));
		int32_t L_53 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_50, ((intptr_t)il2cpp_codegen_multiply(L_52, 4)))));
		V_5 = L_53;
	}

IL_00bb:
	{
		int32_t L_54 = V_5;
		if ((((int32_t)L_54) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_55 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_56 = ___0_data;
		NullCheck(L_56);
		int32_t L_57 = L_56->___keyCapacity;
		if ((((int32_t)L_55) < ((int32_t)L_57)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_58 = V_0;
		return L_58;
	}
}
// Method Definition Index: 65303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m08BD04FC53541B98D2584F01DB2BF8C2D9749F5C (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B ___1_it, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		uint32_t* L_4 = (uint32_t*)(&(&___1_it)->___key);
		int32_t L_5;
		L_5 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_4, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___bucketCapacityMask;
		V_2 = ((int32_t)(L_5&L_7));
		int32_t* L_8 = V_0;
		int32_t L_9 = V_2;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		int32_t L_11 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, 4)))));
		V_3 = L_11;
		int32_t L_12 = V_3;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B L_13 = ___1_it;
		int32_t L_14 = L_13.___EntryIndex;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_15 = V_0;
		int32_t L_16 = V_2;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_16,NULL));
		int32_t* L_18 = V_1;
		int32_t L_19 = V_3;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(L_17, 4)))), (int32_t)L_21);
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_22 = V_1;
		int32_t L_23 = V_3;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_23,NULL));
		int32_t L_25 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, 4)))));
		V_3 = L_25;
	}

IL_0051:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_27 = V_1;
		int32_t L_28 = V_3;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		int32_t L_30 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, 4)))));
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B L_31 = ___1_it;
		int32_t L_32 = L_31.___EntryIndex;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_32))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_33 = V_3;
		int32_t* L_34 = V_1;
		int32_t L_35 = V_3;
		intptr_t L_36 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_35,NULL));
		int32_t* L_37 = V_1;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B L_38 = ___1_it;
		int32_t L_39 = L_38.___EntryIndex;
		intptr_t L_40 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_39,NULL));
		int32_t L_41 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(L_40, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(L_36, 4)))), (int32_t)L_41);
	}

IL_007b:
	{
		int32_t* L_42 = V_1;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B L_43 = ___1_it;
		int32_t L_44 = L_43.___EntryIndex;
		intptr_t L_45 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_44,NULL));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		int32_t* L_47;
		L_47 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_46, NULL);
		int32_t L_48 = il2cpp_codegen_ldind<int32_t, int32_t>(L_47);
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(L_45, 4)))), (int32_t)L_48);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		int32_t* L_50;
		L_50 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_49, NULL);
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B L_51 = ___1_it;
		int32_t L_52 = L_51.___EntryIndex;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_50, (int32_t)L_52);
		return;
	}
}
// Method Definition Index: 65305
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m6B99914C35E0F18487E1D815ED321C045BBEBC08 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, uint32_t ___1_key, int32_t* ___2_item, NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* ___3_it, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_0 = ___3_it;
		uint32_t L_1 = ___1_key;
		L_0->___key = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_5 = ___3_it;
		V_2 = (-1);
		L_5->___NextEntryIndex = (-1);
		int32_t L_6 = V_2;
		L_4->___EntryIndex = L_6;
		int32_t* L_7 = ___2_item;
		il2cpp_codegen_initobj(L_7, sizeof(int32_t));
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		uint8_t* L_9 = L_8->___buckets;
		V_0 = (int32_t*)L_9;
		int32_t L_10;
		L_10 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___1_key), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		NullCheck(L_11);
		int32_t L_12 = L_11->___bucketCapacityMask;
		V_1 = ((int32_t)(L_10&L_12));
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_13 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_14 = ___3_it;
		int32_t* L_15 = V_0;
		int32_t L_16 = V_1;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_16,NULL));
		int32_t L_18 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(L_17, 4)))));
		int32_t L_19 = L_18;
		V_2 = L_19;
		L_14->___NextEntryIndex = L_19;
		int32_t L_20 = V_2;
		L_13->___EntryIndex = L_20;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		int32_t* L_22 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_23 = ___3_it;
		bool L_24;
		L_24 = UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m013BAB9F290BE09ACA2CB96824C92F55F7FEEB4C(L_21, L_22, L_23, NULL);
		return L_24;
	}
}
// Method Definition Index: 65306
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m013BAB9F290BE09ACA2CB96824C92F55F7FEEB4C (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_item, NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* ___2_it, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_0 = ___2_it;
		int32_t L_1 = L_0->___NextEntryIndex;
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_2 = ___2_it;
		L_2->___NextEntryIndex = (-1);
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_3 = ___2_it;
		L_3->___EntryIndex = (-1);
		int32_t* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, sizeof(int32_t));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		int32_t L_14 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, 4)))));
		V_0 = L_14;
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t L_18 = L_17->___keyCapacity;
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		NullCheck(L_19);
		uint8_t* L_20 = L_19->___keys;
		int32_t L_21 = V_0;
		uint32_t L_22;
		L_22 = UnsafeUtility_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mDA80BAFF55EA77496672B3B5B3804B55274B7E95_inline((void*)L_20, L_21, NULL);
		V_2 = L_22;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_23 = ___2_it;
		uint32_t L_24 = L_23->___key;
		bool L_25;
		L_25 = UInt32_Equals_m6BE590F34B71E27978E9146437F73A6448BA01A3((&V_2), L_24, NULL);
		if (!L_25)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_26 = ___2_it;
		int32_t* L_27 = V_1;
		int32_t L_28 = V_0;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_28,NULL));
		int32_t L_30 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_27, ((intptr_t)il2cpp_codegen_multiply(L_29, 4)))));
		L_26->___NextEntryIndex = L_30;
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_31 = ___2_it;
		int32_t L_32 = V_0;
		L_31->___EntryIndex = L_32;
		int32_t* L_33 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		NullCheck(L_34);
		uint8_t* L_35 = L_34->___values;
		int32_t L_36 = V_0;
		int32_t L_37;
		L_37 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_35, L_36, NULL);
		*(int32_t*)L_33 = L_37;
		return (bool)1;
	}
}
// Method Definition Index: 65307
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m559AED4C6933AC594DB5130774E67BE3FA27204A (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* ___1_it, int32_t* ___2_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t7577BB442A6835D9DE603273045F89F60636187B* L_0 = ___1_it;
		int32_t L_1 = L_0->___EntryIndex;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		int32_t* L_9 = ___2_item;
		int32_t L_10 = (*(int32_t*)L_9);
		UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline((void*)L_7, L_8, L_10, NULL);
		return (bool)1;
	}
}
// Method Definition Index: 65308
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m53BE2A20C4F2E925DBEBF9257182CE5A8B66527B (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
// Method Definition Index: 65309
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_m4866258700E35BA076389AA76002F993A53E3942 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
// Method Definition Index: 65310
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_m3B917162D706C780EBAF43675222291C18D1891C (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 65311
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m78B6D1D798AD43F8E5A422E78B3FDE76CCDE23F0 (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
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
// Method Definition Index: 65296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Clear_m6EE55875D60EFEB4879AF8FF0E362DCC68B50EBB_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___bucketCapacityMask;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_1, (uint8_t)((int32_t)255), ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add(L_4, L_5)), L_6)), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		int32_t L_10 = L_9->___keyCapacity;
		int64_t L_11 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_10,NULL));
		int64_t L_12 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		UnsafeUtility_MemSet_m4CD74CD43260EB2962A46F57E0D93DD5C332FC2B((void*)L_8, (uint8_t)((int32_t)255), ((int64_t)il2cpp_codegen_multiply(L_11, L_12)), NULL);
		int32_t L_13;
		L_13 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_13;
		V_1 = 0;
		goto IL_0055;
	}

IL_0041:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		int32_t* L_15;
		L_15 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_14, NULL);
		int32_t L_16 = V_1;
		intptr_t L_17 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_16, ((int32_t)16))),NULL));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(L_17, 4)))), (int32_t)(-1));
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0055:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0041;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		NullCheck(L_21);
		L_21->___allocatedIndexLength = 0;
		return;
	}
}
// Method Definition Index: 65297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_AllocEntry_m3E2610CA343A7226FECF5B6CE365718FC66DF071_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_threadIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_1 = (int32_t*)L_1;
	}

IL_0007:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___1_threadIndex;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16))),NULL));
		int32_t L_6;
		L_6 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(L_5, 4)))));
		V_0 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0197;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		int32_t* L_10;
		L_10 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_9, NULL);
		int32_t L_11 = ___1_threadIndex;
		intptr_t L_12 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)16))),NULL));
		int32_t L_13;
		L_13 = il2cpp_intrinsic_interlocked_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(L_12, 4)))), ((int32_t)-2));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_14 = ___0_data;
		NullCheck(L_14);
		int32_t L_15 = L_14->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___keyCapacity;
		if ((((int32_t)L_15) >= ((int32_t)L_17)))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		int32_t* L_19 = (int32_t*)(&L_18->___allocatedIndexLength);
		int32_t L_20;
		L_20 = Interlocked_Add_m2455208C56EEFD8832AEAD8AF7368A3FEB33A73C(L_19, ((int32_t)16), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_20, ((int32_t)16)));
		int32_t L_21 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		if ((((int32_t)L_21) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_23, 1)))))
		{
			goto IL_00ca;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		NullCheck(L_24);
		int32_t L_25 = L_24->___keyCapacity;
		int32_t L_26 = V_0;
		int32_t L_27;
		L_27 = math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline(((int32_t)16), ((int32_t)il2cpp_codegen_subtract(L_25, L_26)), NULL);
		V_4 = L_27;
		V_5 = 1;
		goto IL_0096;
	}

IL_0080:
	{
		int32_t* L_28 = V_1;
		int32_t L_29 = V_0;
		int32_t L_30 = V_5;
		intptr_t L_31 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_29, L_30)),NULL));
		int32_t L_32 = V_0;
		int32_t L_33 = V_5;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_31, 4)))), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_32, L_33)), 1)));
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0096:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = V_4;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t* L_37 = V_1;
		int32_t L_38 = V_0;
		int32_t L_39 = V_4;
		intptr_t L_40 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_38, L_39)), 1)),NULL));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(L_40, 4)))), (int32_t)(-1));
		int32_t* L_41 = V_1;
		int32_t L_42 = V_0;
		intptr_t L_43 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_42,NULL));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_41, ((intptr_t)il2cpp_codegen_multiply(L_43, 4)))), (int32_t)(-1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		int32_t* L_45;
		L_45 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_44, NULL);
		int32_t L_46 = ___1_threadIndex;
		intptr_t L_47 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_46, ((int32_t)16))),NULL));
		int32_t L_48 = V_0;
		int32_t L_49;
		L_49 = il2cpp_intrinsic_interlocked_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(L_47, 4)))), ((int32_t)il2cpp_codegen_add(L_48, 1)));
		int32_t L_50 = V_0;
		return L_50;
	}

IL_00ca:
	{
		int32_t L_51 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_52 = ___0_data;
		NullCheck(L_52);
		int32_t L_53 = L_52->___keyCapacity;
		if ((!(((uint32_t)L_51) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_53, 1))))))
		{
			goto IL_00ec;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_54 = ___0_data;
		int32_t* L_55;
		L_55 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_54, NULL);
		int32_t L_56 = ___1_threadIndex;
		intptr_t L_57 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_56, ((int32_t)16))),NULL));
		int32_t L_58;
		L_58 = il2cpp_intrinsic_interlocked_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(L_57, 4)))), (-1));
		int32_t L_59 = V_0;
		return L_59;
	}

IL_00ec:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		int32_t* L_61;
		L_61 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_60, NULL);
		int32_t L_62 = ___1_threadIndex;
		intptr_t L_63 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_62, ((int32_t)16))),NULL));
		int32_t L_64;
		L_64 = il2cpp_intrinsic_interlocked_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(L_63, 4)))), (-1));
		int32_t L_65;
		L_65 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_2 = L_65;
		V_3 = (bool)1;
		goto IL_0191;
	}

IL_010e:
	{
		V_3 = (bool)0;
		int32_t L_66 = ___1_threadIndex;
		int32_t L_67 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_66, 1))%L_67));
		goto IL_018c;
	}

IL_0119:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_68 = ___0_data;
		int32_t* L_69;
		L_69 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_68, NULL);
		int32_t L_70 = V_6;
		intptr_t L_71 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_70, ((int32_t)16))),NULL));
		int32_t L_72;
		L_72 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_69, ((intptr_t)il2cpp_codegen_multiply(L_71, 4)))));
		V_0 = L_72;
		int32_t L_73 = V_0;
		if ((((int32_t)L_73) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_74 = V_0;
		if ((((int32_t)L_74) < ((int32_t)0)))
		{
			goto IL_0151;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_75 = ___0_data;
		int32_t* L_76;
		L_76 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_75, NULL);
		int32_t L_77 = V_6;
		intptr_t L_78 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_77, ((int32_t)16))),NULL));
		int32_t L_79 = V_0;
		int32_t L_80;
		L_80 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_76, ((intptr_t)il2cpp_codegen_multiply(L_78, 4)))), ((int32_t)-3), L_79);
		int32_t L_81 = V_0;
		if ((!(((uint32_t)L_80) == ((uint32_t)L_81))))
		{
			goto IL_0119;
		}
	}

IL_0151:
	{
		int32_t L_82 = V_0;
		if ((!(((uint32_t)L_82) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_015a;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0184;
	}

IL_015a:
	{
		int32_t L_83 = V_0;
		if ((((int32_t)L_83) < ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		int32_t* L_85;
		L_85 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_84, NULL);
		int32_t L_86 = V_6;
		intptr_t L_87 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_86, ((int32_t)16))),NULL));
		int32_t* L_88 = V_1;
		int32_t L_89 = V_0;
		intptr_t L_90 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_89,NULL));
		int32_t L_91 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_88, ((intptr_t)il2cpp_codegen_multiply(L_90, 4)))));
		int32_t L_92;
		L_92 = il2cpp_intrinsic_interlocked_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_85, ((intptr_t)il2cpp_codegen_multiply(L_87, 4)))), L_91);
		int32_t* L_93 = V_1;
		int32_t L_94 = V_0;
		intptr_t L_95 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_94,NULL));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(L_95, 4)))), (int32_t)(-1));
		int32_t L_96 = V_0;
		return L_96;
	}

IL_0184:
	{
		int32_t L_97 = V_6;
		int32_t L_98 = V_2;
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_97, 1))%L_98));
	}

IL_018c:
	{
		int32_t L_99 = V_6;
		int32_t L_100 = ___1_threadIndex;
		if ((!(((uint32_t)L_99) == ((uint32_t)L_100))))
		{
			goto IL_0119;
		}
	}

IL_0191:
	{
		bool L_101 = V_3;
		if (L_101)
		{
			goto IL_010e;
		}
	}

IL_0197:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_102 = ___0_data;
		int32_t* L_103;
		L_103 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_102, NULL);
		int32_t L_104 = ___1_threadIndex;
		intptr_t L_105 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_104, ((int32_t)16))),NULL));
		int32_t L_106 = V_0;
		int32_t L_107;
		L_107 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_103, ((intptr_t)il2cpp_codegen_multiply(L_105, 4)))), ((int32_t)-3), L_106);
		int32_t L_108 = V_0;
		if ((!(((uint32_t)L_107) == ((uint32_t)L_108))))
		{
			goto IL_0007;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_109 = ___0_data;
		int32_t* L_110;
		L_110 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_109, NULL);
		int32_t L_111 = ___1_threadIndex;
		intptr_t L_112 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_111, ((int32_t)16))),NULL));
		int32_t* L_113 = V_1;
		int32_t L_114 = V_0;
		intptr_t L_115 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_114,NULL));
		int32_t L_116 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_113, ((intptr_t)il2cpp_codegen_multiply(L_115, 4)))));
		int32_t L_117;
		L_117 = il2cpp_intrinsic_interlocked_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_110, ((intptr_t)il2cpp_codegen_multiply(L_112, 4)))), L_116);
		int32_t* L_118 = V_1;
		int32_t L_119 = V_0;
		intptr_t L_120 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_119,NULL));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_118, ((intptr_t)il2cpp_codegen_multiply(L_120, 4)))), (int32_t)(-1));
		int32_t L_121 = V_0;
		return L_121;
	}
}
// Method Definition Index: 65298
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_FreeEntry_mCFD0DA8ADF441A1780C2CAE61417C094BF86B93E_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___next;
		V_0 = (int32_t*)L_1;
		V_1 = (-1);
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t* L_3;
		L_3 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		int32_t L_4 = ___2_threadIndex;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)16))),NULL));
		int32_t L_6;
		L_6 = VolatileRead((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(L_5, 4)))));
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t* L_8 = V_0;
		int32_t L_9 = ___1_idx;
		intptr_t L_10 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_9,NULL));
		int32_t L_11 = V_1;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_10, 4)))), (int32_t)L_11);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = ___2_threadIndex;
		intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16))),NULL));
		int32_t L_16 = ___1_idx;
		int32_t L_17 = V_1;
		int32_t L_18;
		L_18 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_15, 4)))), L_16, L_17);
		int32_t L_19 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)L_19))))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 65299
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAddAtomic_mCAE3A74A5AB042537557D83CCB3C4B27F509B19C_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const uint32_t SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	void* L_14 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_9 = L_1;
	const Il2CppFullySharedGenericStruct L_39 = L_1;
	const Il2CppFullySharedGenericStruct L_13 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	memset(V_0, 0, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 V_1 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	memset(V_1, 0, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		il2cpp_codegen_memcpy(L_1, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		bool L_2;
		L_2 = InvokerFuncInvoker4< bool, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), NULL, L_0, L_1, (Il2CppFullySharedGenericStruct*)V_0, (NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)V_1);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		int32_t L_4 = ___3_threadIndex;
		int32_t L_5;
		L_5 = ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))(L_3, L_4, NULL);
		V_2 = L_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___keys;
		int32_t L_8 = V_2;
		il2cpp_codegen_memcpy(L_9, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), NULL, (void*)L_7, L_8, L_9);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_10 = ___0_data;
		NullCheck(L_10);
		uint8_t* L_11 = L_10->___values;
		int32_t L_12 = V_2;
		il2cpp_codegen_memcpy(L_13, ___2_item, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), NULL, (void*)L_11, L_12, L_13);
		Il2CppConstrainedCallData L_15;
		Il2CppMethodPointer L_16 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), (void*)(Il2CppFullySharedGenericStruct*)___1_key, &L_15, L_14);
		typedef int32_t ( *func_L_17)(void*,const RuntimeMethod*);
		int32_t L_18 = ((func_L_17)L_16)(L_15.thisPtr,L_15.method);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		NullCheck(L_19);
		int32_t L_20 = L_19->___bucketCapacityMask;
		V_3 = ((int32_t)(L_18&L_20));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = ___0_data;
		NullCheck(L_21);
		uint8_t* L_22 = L_21->___buckets;
		V_4 = (int32_t*)L_22;
		int32_t* L_23 = V_4;
		int32_t L_24 = V_3;
		intptr_t L_25 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_24,NULL));
		int32_t L_26 = V_2;
		int32_t L_27;
		L_27 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_23, ((intptr_t)il2cpp_codegen_multiply(L_25, 4)))), L_26, (-1));
		if ((((int32_t)L_27) == ((int32_t)(-1))))
		{
			goto IL_00a8;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_28 = ___0_data;
		NullCheck(L_28);
		uint8_t* L_29 = L_28->___next;
		V_5 = (int32_t*)L_29;
		V_6 = (-1);
	}

IL_006a:
	{
		int32_t* L_30 = V_4;
		int32_t L_31 = V_3;
		intptr_t L_32 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_31,NULL));
		int32_t L_33 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(L_32, 4)))));
		V_6 = L_33;
		int32_t* L_34 = V_5;
		int32_t L_35 = V_2;
		intptr_t L_36 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_35,NULL));
		int32_t L_37 = V_6;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_34, ((intptr_t)il2cpp_codegen_multiply(L_36, 4)))), (int32_t)L_37);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_38 = ___0_data;
		il2cpp_codegen_memcpy(L_39, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		bool L_40;
		L_40 = InvokerFuncInvoker4< bool, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), NULL, L_38, L_39, (Il2CppFullySharedGenericStruct*)V_0, (NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)V_1);
		if (!L_40)
		{
			goto IL_0095;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t L_42 = V_2;
		int32_t L_43 = ___3_threadIndex;
		((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))(L_41, L_42, L_43, NULL);
		return (bool)0;
	}

IL_0095:
	{
		int32_t* L_44 = V_4;
		int32_t L_45 = V_3;
		intptr_t L_46 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_45,NULL));
		int32_t L_47 = V_2;
		int32_t L_48 = V_6;
		int32_t L_49;
		L_49 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(L_46, 4)))), L_47, L_48);
		int32_t L_50 = V_6;
		if ((!(((uint32_t)L_49) == ((uint32_t)L_50))))
		{
			goto IL_006a;
		}
	}

IL_00a8:
	{
		return (bool)1;
	}
}
// Method Definition Index: 65300
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_AddAtomicMulti_m943307074EE293074937D7AE27E1745AA05FE78E_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct ___2_item, int32_t ___3_threadIndex, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		int32_t L_1 = ___3_threadIndex;
		int32_t L_2;
		L_2 = ((  int32_t (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))(L_0, L_1, NULL);
		V_0 = L_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = ___0_data;
		NullCheck(L_3);
		uint8_t* L_4 = L_3->___keys;
		int32_t L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), NULL, (void*)L_4, L_5, L_6);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___values;
		int32_t L_9 = V_0;
		il2cpp_codegen_memcpy(L_10, ___2_item, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), NULL, (void*)L_8, L_9, L_10);
		Il2CppConstrainedCallData L_12;
		Il2CppMethodPointer L_13 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), (void*)(Il2CppFullySharedGenericStruct*)___1_key, &L_12, L_11);
		typedef int32_t ( *func_L_14)(void*,const RuntimeMethod*);
		int32_t L_15 = ((func_L_14)L_13)(L_12.thisPtr,L_12.method);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = ___0_data;
		NullCheck(L_16);
		int32_t L_17 = L_16->___bucketCapacityMask;
		V_1 = ((int32_t)(L_15&L_17));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_18 = ___0_data;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___buckets;
		V_2 = (int32_t*)L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___next;
		V_4 = (int32_t*)L_21;
	}

IL_0046:
	{
		int32_t* L_22 = V_2;
		int32_t L_23 = V_1;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_23,NULL));
		int32_t L_25 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_22, ((intptr_t)il2cpp_codegen_multiply(L_24, 4)))));
		V_3 = L_25;
		int32_t* L_26 = V_4;
		int32_t L_27 = V_0;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t L_29 = V_3;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))), (int32_t)L_29);
		int32_t* L_30 = V_2;
		int32_t L_31 = V_1;
		intptr_t L_32 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_31,NULL));
		int32_t L_33 = V_0;
		int32_t L_34 = V_3;
		int32_t L_35;
		L_35 = il2cpp_intrinsic_interlocked_compare_exchange((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(L_32, 4)))), L_33, L_34);
		int32_t L_36 = V_3;
		if ((!(((uint32_t)L_35) == ((uint32_t)L_36))))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 65301
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryAdd_m6F349BA91ED50CB53221A30136FCD2F0D0A2922B_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct ___2_item, bool ___3_isMultiHashMap, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___4_allocation, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const uint32_t SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	void* L_79 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_74 = L_2;
	const Il2CppFullySharedGenericStruct L_78 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	memset(V_0, 0, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 V_1 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	memset(V_1, 0, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	int32_t V_2 = 0;
	int32_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		bool L_0 = ___3_isMultiHashMap;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = ___0_data;
		il2cpp_codegen_memcpy(L_2, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		bool L_3;
		L_3 = InvokerFuncInvoker4< bool, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), NULL, L_1, L_2, (Il2CppFullySharedGenericStruct*)V_0, (NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)V_1);
		if (L_3)
		{
			goto IL_0162;
		}
	}

IL_0013:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		int32_t L_7 = L_6->___keyCapacity;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_00d4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		int32_t* L_9;
		L_9 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_8, NULL);
		int32_t L_10 = il2cpp_codegen_ldind<int32_t, int32_t>(L_9);
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_11;
		L_11 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_6 = L_11;
		V_7 = 1;
		goto IL_0097;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_12 = ___0_data;
		int32_t* L_13;
		L_13 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_12, NULL);
		int32_t L_14 = V_7;
		intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)16))),NULL));
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_15, 4)))));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		int32_t* L_18;
		L_18 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_17, NULL);
		int32_t L_19 = V_7;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_19, ((int32_t)16))),NULL));
		int32_t L_21 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		V_2 = L_21;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_22 = ___0_data;
		NullCheck(L_22);
		uint8_t* L_23 = L_22->___next;
		V_3 = (int32_t*)L_23;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		int32_t* L_25;
		L_25 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_24, NULL);
		int32_t L_26 = V_7;
		intptr_t L_27 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_26, ((int32_t)16))),NULL));
		int32_t* L_28 = V_3;
		int32_t L_29 = V_2;
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_29,NULL));
		int32_t L_31 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_30, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(L_27, 4)))), (int32_t)L_31);
		int32_t* L_32 = V_3;
		int32_t L_33 = V_2;
		intptr_t L_34 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_33,NULL));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_32, ((intptr_t)il2cpp_codegen_multiply(L_34, 4)))), (int32_t)(-1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_35 = ___0_data;
		int32_t* L_36;
		L_36 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_35, NULL);
		int32_t L_37 = V_2;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_36, (int32_t)L_37);
		goto IL_009d;
	}

IL_0091:
	{
		int32_t L_38 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0097:
	{
		int32_t L_39 = V_7;
		int32_t L_40 = V_6;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_003d;
		}
	}

IL_009d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_41 = ___0_data;
		int32_t* L_42;
		L_42 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_41, NULL);
		int32_t L_43 = il2cpp_codegen_ldind<int32_t, int32_t>(L_42);
		if ((((int32_t)L_43) >= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_44 = ___0_data;
		NullCheck(L_44);
		int32_t L_45 = L_44->___keyCapacity;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)1073741823)))))
		{
			goto IL_00b6;
		}
	}
	{
		return (bool)0;
	}

IL_00b6:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		NullCheck(L_46);
		int32_t L_47 = L_46->___keyCapacity;
		int32_t L_48;
		L_48 = UnsafeParallelHashMapData_GrowCapacity_m7F2FF57E76510A99266830779059C6C202B9EC47(L_47, NULL);
		V_8 = L_48;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		int32_t L_50 = V_8;
		int32_t L_51 = V_8;
		int64_t L_52;
		L_52 = UnsafeParallelHashMapData_GetBucketSize_mBE376CBC384B796DE89740ECD5EA9C7F520D93D7(L_51, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_53 = ___4_allocation;
		((  void (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, int32_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)))(L_49, L_50, L_52, L_53, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	}

IL_00d4:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_54 = ___0_data;
		int32_t* L_55;
		L_55 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_54, NULL);
		int32_t L_56 = il2cpp_codegen_ldind<int32_t, int32_t>(L_55);
		V_2 = L_56;
		int32_t L_57 = V_2;
		if ((((int32_t)L_57) < ((int32_t)0)))
		{
			goto IL_00f5;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_58 = ___0_data;
		int32_t* L_59;
		L_59 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_58, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___next;
		int32_t L_62 = V_2;
		intptr_t L_63 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_62,NULL));
		int32_t L_64 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_61, ((intptr_t)il2cpp_codegen_multiply(L_63, 4))))));
		il2cpp_codegen_stind<int32_t>((int32_t*)L_59, (int32_t)L_64);
		goto IL_0107;
	}

IL_00f5:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_65 = ___0_data;
		NullCheck(L_65);
		int32_t* L_66 = (int32_t*)(&L_65->___allocatedIndexLength);
		int32_t* L_67 = L_66;
		int32_t L_68 = il2cpp_codegen_ldind<int32_t, int32_t>(L_67);
		V_9 = L_68;
		int32_t L_69 = V_9;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_67, (int32_t)((int32_t)il2cpp_codegen_add(L_69, 1)));
		int32_t L_70 = V_9;
		V_2 = L_70;
	}

IL_0107:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_71 = ___0_data;
		NullCheck(L_71);
		uint8_t* L_72 = L_71->___keys;
		int32_t L_73 = V_2;
		il2cpp_codegen_memcpy(L_74, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), NULL, (void*)L_72, L_73, L_74);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_75 = ___0_data;
		NullCheck(L_75);
		uint8_t* L_76 = L_75->___values;
		int32_t L_77 = V_2;
		il2cpp_codegen_memcpy(L_78, ___2_item, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), NULL, (void*)L_76, L_77, L_78);
		Il2CppConstrainedCallData L_80;
		Il2CppMethodPointer L_81 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), (void*)(Il2CppFullySharedGenericStruct*)___1_key, &L_80, L_79);
		typedef int32_t ( *func_L_82)(void*,const RuntimeMethod*);
		int32_t L_83 = ((func_L_82)L_81)(L_80.thisPtr,L_80.method);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___bucketCapacityMask;
		V_4 = ((int32_t)(L_83&L_85));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_86 = ___0_data;
		NullCheck(L_86);
		uint8_t* L_87 = L_86->___buckets;
		V_5 = (int32_t*)L_87;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_88 = ___0_data;
		NullCheck(L_88);
		uint8_t* L_89 = L_88->___next;
		V_3 = (int32_t*)L_89;
		int32_t* L_90 = V_3;
		int32_t L_91 = V_2;
		intptr_t L_92 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_91,NULL));
		int32_t* L_93 = V_5;
		int32_t L_94 = V_4;
		intptr_t L_95 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_94,NULL));
		int32_t L_96 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(L_95, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_90, ((intptr_t)il2cpp_codegen_multiply(L_92, 4)))), (int32_t)L_96);
		int32_t* L_97 = V_5;
		int32_t L_98 = V_4;
		intptr_t L_99 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_98,NULL));
		int32_t L_100 = V_2;
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_97, ((intptr_t)il2cpp_codegen_multiply(L_99, 4)))), (int32_t)L_100);
		return (bool)1;
	}

IL_0162:
	{
		return (bool)0;
	}
}
// Method Definition Index: 65302
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMapBase_2_Remove_m6648F1C82F87EE0C1EC2361356969E1893FF4EAC_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, bool ___2_isMultiHashMap, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	void* L_22 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	const Il2CppFullySharedGenericStruct L_20 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_21 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppFullySharedGenericStruct V_6 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	memset(V_6, 0, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		V_0 = 0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___buckets;
		V_1 = (int32_t*)L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->___next;
		V_2 = (int32_t*)L_5;
		Il2CppConstrainedCallData L_7;
		Il2CppMethodPointer L_8 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), (void*)(Il2CppFullySharedGenericStruct*)___1_key, &L_7, L_6);
		typedef int32_t ( *func_L_9)(void*,const RuntimeMethod*);
		int32_t L_10 = ((func_L_9)L_8)(L_7.thisPtr,L_7.method);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		NullCheck(L_11);
		int32_t L_12 = L_11->___bucketCapacityMask;
		V_3 = ((int32_t)(L_10&L_12));
		V_4 = (-1);
		int32_t* L_13 = V_1;
		int32_t L_14 = V_3;
		intptr_t L_15 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_14,NULL));
		int32_t L_16 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_13, ((intptr_t)il2cpp_codegen_multiply(L_15, 4)))));
		V_5 = L_16;
		goto IL_00bb;
	}

IL_003d:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		uint8_t* L_18 = L_17->___keys;
		int32_t L_19 = V_5;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10), NULL, (void*)L_18, L_19, (Il2CppFullySharedGenericStruct*)L_20);
		il2cpp_codegen_memcpy(V_6, L_20, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		il2cpp_codegen_memcpy(L_21, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		Il2CppConstrainedCallData L_23;
		Il2CppMethodPointer L_24 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11), (void*)(Il2CppFullySharedGenericStruct*)V_6, &L_23, L_22);
		bool L_25 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(L_24, L_23.method,L_23.thisPtr, L_21);
		if (!L_25)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		int32_t L_27 = V_4;
		if ((((int32_t)L_27) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t* L_28 = V_1;
		int32_t L_29 = V_3;
		intptr_t L_30 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_29,NULL));
		int32_t* L_31 = V_2;
		int32_t L_32 = V_5;
		intptr_t L_33 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_32,NULL));
		int32_t L_34 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_31, ((intptr_t)il2cpp_codegen_multiply(L_33, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_28, ((intptr_t)il2cpp_codegen_multiply(L_30, 4)))), (int32_t)L_34);
		goto IL_0086;
	}

IL_0076:
	{
		int32_t* L_35 = V_2;
		int32_t L_36 = V_4;
		intptr_t L_37 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_36,NULL));
		int32_t* L_38 = V_2;
		int32_t L_39 = V_5;
		intptr_t L_40 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_39,NULL));
		int32_t L_41 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_38, ((intptr_t)il2cpp_codegen_multiply(L_40, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_35, ((intptr_t)il2cpp_codegen_multiply(L_37, 4)))), (int32_t)L_41);
	}

IL_0086:
	{
		int32_t* L_42 = V_2;
		int32_t L_43 = V_5;
		intptr_t L_44 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_43,NULL));
		int32_t L_45 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_42, ((intptr_t)il2cpp_codegen_multiply(L_44, 4)))));
		int32_t* L_46 = V_2;
		int32_t L_47 = V_5;
		intptr_t L_48 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_47,NULL));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		int32_t* L_50;
		L_50 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_49, NULL);
		int32_t L_51 = il2cpp_codegen_ldind<int32_t, int32_t>(L_50);
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_46, ((intptr_t)il2cpp_codegen_multiply(L_48, 4)))), (int32_t)L_51);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_52 = ___0_data;
		int32_t* L_53;
		L_53 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_52, NULL);
		int32_t L_54 = V_5;
		il2cpp_codegen_stind<int32_t>((int32_t*)L_53, (int32_t)L_54);
		V_5 = L_45;
		bool L_55 = ___2_isMultiHashMap;
		if (L_55)
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00cd;
	}

IL_00ad:
	{
		int32_t L_56 = V_5;
		V_4 = L_56;
		int32_t* L_57 = V_2;
		int32_t L_58 = V_5;
		intptr_t L_59 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_58,NULL));
		int32_t L_60 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(L_59, 4)))));
		V_5 = L_60;
	}

IL_00bb:
	{
		int32_t L_61 = V_5;
		if ((((int32_t)L_61) < ((int32_t)0)))
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_62 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_63 = ___0_data;
		NullCheck(L_63);
		int32_t L_64 = L_63->___keyCapacity;
		if ((((int32_t)L_62) < ((int32_t)L_64)))
		{
			goto IL_003d;
		}
	}

IL_00cd:
	{
		int32_t L_65 = V_0;
		return L_65;
	}
}
// Method Definition Index: 65303
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_Remove_m8BAE6A94FC57AB2FD13A4FD8729670F270544F06_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 ___1_it, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	void* L_4 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	const uint32_t SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_16 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_34 = L_16;
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_41 = L_16;
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_46 = L_16;
	const NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51 L_54 = alloca(SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
	//<source_info:<no-source>:1>
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		NullCheck(L_0);
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		Il2CppConstrainedCallData L_5;
		Il2CppMethodPointer L_6 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), (void*)(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_field_data_pointer((NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*)___1_it, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))), &L_5, L_4);
		typedef int32_t ( *func_L_7)(void*,const RuntimeMethod*);
		int32_t L_8 = ((func_L_7)L_6)(L_5.thisPtr,L_5.method);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		int32_t L_10 = L_9->___bucketCapacityMask;
		V_2 = ((int32_t)(L_8&L_10));
		int32_t* L_11 = V_0;
		int32_t L_12 = V_2;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		int32_t L_14 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, 4)))));
		V_3 = L_14;
		int32_t L_15 = V_3;
		il2cpp_codegen_memcpy(L_16, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_17 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_16, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		if ((!(((uint32_t)L_15) == ((uint32_t)L_17))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t* L_18 = V_0;
		int32_t L_19 = V_2;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		int32_t* L_21 = V_1;
		int32_t L_22 = V_3;
		intptr_t L_23 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_22,NULL));
		int32_t L_24 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(L_23, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))), (int32_t)L_24);
		goto IL_007b;
	}

IL_0049:
	{
		int32_t* L_25 = V_1;
		int32_t L_26 = V_3;
		intptr_t L_27 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_26,NULL));
		int32_t L_28 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_25, ((intptr_t)il2cpp_codegen_multiply(L_27, 4)))));
		V_3 = L_28;
	}

IL_0051:
	{
		int32_t L_29 = V_3;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}
	{
		int32_t* L_30 = V_1;
		int32_t L_31 = V_3;
		intptr_t L_32 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_31,NULL));
		int32_t L_33 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(L_32, 4)))));
		il2cpp_codegen_memcpy(L_34, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_35 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_34, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		if ((!(((uint32_t)L_33) == ((uint32_t)L_35))))
		{
			goto IL_0049;
		}
	}

IL_0064:
	{
		int32_t L_36 = V_3;
		int32_t* L_37 = V_1;
		int32_t L_38 = V_3;
		intptr_t L_39 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_38,NULL));
		int32_t* L_40 = V_1;
		il2cpp_codegen_memcpy(L_41, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_42 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_41, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		intptr_t L_43 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_42,NULL));
		int32_t L_44 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(L_43, 4)))));
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_37, ((intptr_t)il2cpp_codegen_multiply(L_39, 4)))), (int32_t)L_44);
	}

IL_007b:
	{
		int32_t* L_45 = V_1;
		il2cpp_codegen_memcpy(L_46, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_47 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_46, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		intptr_t L_48 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_47,NULL));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_49 = ___0_data;
		int32_t* L_50;
		L_50 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_49, NULL);
		int32_t L_51 = il2cpp_codegen_ldind<int32_t, int32_t>(L_50);
		il2cpp_codegen_stind<int32_t>((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_45, ((intptr_t)il2cpp_codegen_multiply(L_48, 4)))), (int32_t)L_51);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_52 = ___0_data;
		int32_t* L_53;
		L_53 = UnsafeParallelHashMapData_get_firstFreeTLS_m75A8F3E5E2ACC2BAA05561AC4D6CD59CC06F6CC5((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_52, NULL);
		il2cpp_codegen_memcpy(L_54, ___1_it, SizeOf_NativeParallelMultiHashMapIterator_1_t8F8F521BA2FCBBCF9E4F521446265362C11BF3B8);
		int32_t L_55 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_54, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		il2cpp_codegen_stind<int32_t>((int32_t*)L_53, (int32_t)L_55);
		return;
	}
}
// Method Definition Index: 65305
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mB16D13831106B0DC2EF2AD361743D9FC6597B1DA_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct* ___2_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___3_it, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	//<source_info:<no-source>:1>
	int32_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_0 = ___3_it;
		il2cpp_codegen_memcpy(L_1, ___1_key, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		il2cpp_codegen_write_field_data<true>(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13), L_1, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___allocatedIndexLength;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_4 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_5 = ___3_it;
		V_2 = (-1);
		il2cpp_codegen_write_field_data<int32_t, false>(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15), (-1));
		int32_t L_6 = V_2;
		il2cpp_codegen_write_field_data<int32_t, false>(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14), L_6);
		Il2CppFullySharedGenericStruct* L_7 = ___2_item;
		il2cpp_codegen_initobj(L_7, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		return (bool)0;
	}

IL_0029:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_8 = ___0_data;
		NullCheck(L_8);
		uint8_t* L_9 = L_8->___buckets;
		V_0 = (int32_t*)L_9;
		Il2CppConstrainedCallData L_11;
		Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), (void*)(Il2CppFullySharedGenericStruct*)___1_key, &L_11, L_10);
		typedef int32_t ( *func_L_13)(void*,const RuntimeMethod*);
		int32_t L_14 = ((func_L_13)L_12)(L_11.thisPtr,L_11.method);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_15 = ___0_data;
		NullCheck(L_15);
		int32_t L_16 = L_15->___bucketCapacityMask;
		V_1 = ((int32_t)(L_14&L_16));
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_17 = ___3_it;
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_18 = ___3_it;
		int32_t* L_19 = V_0;
		int32_t L_20 = V_1;
		intptr_t L_21 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_20,NULL));
		int32_t L_22 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(L_21, 4)))));
		int32_t L_23 = L_22;
		V_2 = L_23;
		il2cpp_codegen_write_field_data<int32_t, false>(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15), L_23);
		int32_t L_24 = V_2;
		il2cpp_codegen_write_field_data<int32_t, false>(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14), L_24);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_25 = ___0_data;
		Il2CppFullySharedGenericStruct* L_26 = ___2_item;
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_27 = ___3_it;
		bool L_28;
		L_28 = ((  bool (*) (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*, Il2CppFullySharedGenericStruct*, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16)))(L_25, L_26, L_27, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		return L_28;
	}
}
// Method Definition Index: 65306
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_TryGetNextValueAtomic_m02842BF5ACFFDD0CC5E0C86B2A523A797D5B0477_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, Il2CppFullySharedGenericStruct* ___1_item, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___2_it, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	void* L_25 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	const Il2CppFullySharedGenericStruct L_22 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_24 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	const Il2CppFullySharedGenericStruct L_40 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	memset(V_2, 0, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
	{
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_0 = ___2_it;
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_0, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		V_0 = L_1;
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_2 = ___2_it;
		il2cpp_codegen_write_field_data<int32_t, false>(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15), (-1));
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_3 = ___2_it;
		il2cpp_codegen_write_field_data<int32_t, false>(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14), (-1));
		Il2CppFullySharedGenericStruct* L_4 = ___1_item;
		il2cpp_codegen_initobj(L_4, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = ___0_data;
		NullCheck(L_7);
		int32_t L_8 = L_7->___keyCapacity;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (bool)0;
	}

IL_002b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = ___0_data;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___next;
		V_1 = (int32_t*)L_10;
		goto IL_004b;
	}

IL_0034:
	{
		int32_t* L_11 = V_1;
		int32_t L_12 = V_0;
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_12,NULL));
		int32_t L_14 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(L_13, 4)))));
		V_0 = L_14;
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_17 = ___0_data;
		NullCheck(L_17);
		int32_t L_18 = L_17->___keyCapacity;
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_004b;
		}
	}

IL_0049:
	{
		return (bool)0;
	}

IL_004b:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_19 = ___0_data;
		NullCheck(L_19);
		uint8_t* L_20 = L_19->___keys;
		int32_t L_21 = V_0;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10), NULL, (void*)L_20, L_21, (Il2CppFullySharedGenericStruct*)L_22);
		il2cpp_codegen_memcpy(V_2, L_22, SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_23 = ___2_it;
		il2cpp_codegen_memcpy(L_24, il2cpp_codegen_get_field_data_pointer(L_23, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)), SizeOf_TKey_t693D3BBF62B067F3D91C53F42FC97AB9D4C1FE69);
		Il2CppConstrainedCallData L_26;
		Il2CppMethodPointer L_27 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11), (void*)(Il2CppFullySharedGenericStruct*)V_2, &L_26, L_25);
		bool L_28 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(L_27, L_26.method,L_26.thisPtr, L_24);
		if (!L_28)
		{
			goto IL_0034;
		}
	}
	{
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_29 = ___2_it;
		int32_t* L_30 = V_1;
		int32_t L_31 = V_0;
		intptr_t L_32 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_31,NULL));
		int32_t L_33 = il2cpp_codegen_ldind<int32_t, int32_t>(((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(L_32, 4)))));
		il2cpp_codegen_write_field_data<int32_t, false>(L_29, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15), L_33);
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_34 = ___2_it;
		int32_t L_35 = V_0;
		il2cpp_codegen_write_field_data<int32_t, false>(L_34, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14), L_35);
		Il2CppFullySharedGenericStruct* L_36 = ___1_item;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_37 = ___0_data;
		NullCheck(L_37);
		uint8_t* L_38 = L_37->___values;
		int32_t L_39 = V_0;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17), NULL, (void*)L_38, L_39, (Il2CppFullySharedGenericStruct*)L_40);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_36, L_40, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), (void**)(Il2CppFullySharedGenericStruct*)L_36, (void*)L_40);
		return (bool)1;
	}
}
// Method Definition Index: 65307
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapBase_2_SetValue_m557C0D5801C035501701C60FE81775298FDD76A5_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* ___1_it, Il2CppFullySharedGenericStruct* ___2_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		NativeParallelMultiHashMapIterator_1_t14002B1AC025FFFD512A35206135D18FEBAB0F51* L_0 = ___1_it;
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_0, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = ___0_data;
		NullCheck(L_4);
		int32_t L_5 = L_4->___keyCapacity;
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_6 = ___0_data;
		NullCheck(L_6);
		uint8_t* L_7 = L_6->___values;
		int32_t L_8 = V_0;
		Il2CppFullySharedGenericStruct* L_9 = ___2_item;
		il2cpp_codegen_memcpy(L_10, L_9, SizeOf_TValue_tB7B830249365402E1E7E370540F98F1B5A6B1DEC);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), NULL, (void*)L_7, L_8, L_10);
		return (bool)1;
	}
}
// Method Definition Index: 65308
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckOutOfCapacity_m38D20A847D6996E7C118E952524DEE9592A2B629_fshared (int32_t ___0_idx, int32_t ___1_keyCapacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_idx;
		int32_t L_1 = ___1_keyCapacity;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___0_idx;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = ___1_keyCapacity;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25EE86DD11050F3E4EAC38CBB44712088150246)), L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0020:
	{
		return;
	}
}
// Method Definition Index: 65309
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_CheckIndexOutOfBounds_mFE0B2263ABF50F3C1DD001FF39C0D0DC181DD163_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_idx, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___1_idx;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_idx;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral703B925B6DDD3F54A9C39948B3AAC620B3429A1F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0018:
	{
		return;
	}
}
// Method Definition Index: 65310
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowFull_mE68740A5B03A3A069612808990A947A3C61FCDE0_fshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B3259AA85917F3F997CA37C85A632CBE6146F4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 65311
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapBase_2_ThrowInvalidIterator_m01EFA9C0C2C6B2994ED33A385814CC4C0FF28B19_fshared (const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4FB4998F8264472FEC55B16F93C2645F85AE457)), NULL);
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
// Method Definition Index: 65374
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapDebuggerTypeProxy_2__ctor_m987AD575BFED1AEAD92F5DABF40893738C0F47A0_fshared (UnsafeParallelHashMapDebuggerTypeProxy_2_t4A34F2944E65F462B1CA05BC595902280B2A97F4* __this, UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707 ___0_target, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707 L_0 = ___0_target;
		__this->___m_Target = L_0;
		return;
	}
}
// Method Definition Index: 65375
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5* UnsafeParallelHashMapDebuggerTypeProxy_2_get_Items_mFAF8210CCD89AD5741956F8C54BAA23928CF4408_fshared (UnsafeParallelHashMapDebuggerTypeProxy_2_t4A34F2944E65F462B1CA05BC595902280B2A97F4* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t44117398A1D9630A91890738A6FCCB444D9B95A2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const uint32_t SizeOf_TValue_t74FDE0389DE830F671A9DB277C30F5627C793B29 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const uint32_t SizeOf_Pair_2_t3327C6534A3F1B1221CAC8AA7FF74990B2FFC609 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_TKey_t44117398A1D9630A91890738A6FCCB444D9B95A2);
	const Il2CppFullySharedGenericStruct L_13 = alloca(SizeOf_TKey_t44117398A1D9630A91890738A6FCCB444D9B95A2);
	const Il2CppFullySharedGenericStruct L_12 = alloca(SizeOf_TValue_t74FDE0389DE830F671A9DB277C30F5627C793B29);
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_TValue_t74FDE0389DE830F671A9DB277C30F5627C793B29);
	const Pair_2_tD9FD7901920962567EFA915194252C62C833F9F6 L_15 = alloca(SizeOf_Pair_2_t3327C6534A3F1B1221CAC8AA7FF74990B2FFC609);
	//<source_info:<no-source>:1>
	List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5* V_0 = NULL;
	NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5* L_0 = (List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		((  void (*) (List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		V_0 = L_0;
		UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707* L_1 = (UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707*)(&__this->___m_Target);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2;
		L_2 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(2, NULL);
		NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 L_3;
		L_3 = ((  NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 (*) (UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_1, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0056:
			{
				NativeKeyValueArrays_2_Dispose_m08B6A4226A0125C6123942BE90703D08153CCE37((&V_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
				return;
			}
		});
		try
		{
			{
				V_2 = 0;
				goto IL_004a_1;
			}

IL_001c_1:
			{
				List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5* L_4 = V_0;
				NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 L_5 = V_1;
				NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6 = L_5.___Keys;
				V_3 = L_6;
				int32_t L_7 = V_2;
				InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3), (&V_3), L_7, (Il2CppFullySharedGenericStruct*)L_8);
				NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 L_9 = V_1;
				NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_10 = L_9.___Values;
				V_4 = L_10;
				int32_t L_11 = V_2;
				InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), (&V_4), L_11, (Il2CppFullySharedGenericStruct*)L_12);
				memset(L_15, 0, SizeOf_Pair_2_t3327C6534A3F1B1221CAC8AA7FF74990B2FFC609);
				Pair_2__ctor_m080327976BEF3D9FBA133845A20983F2462E1D6A((Pair_2_tD9FD7901920962567EFA915194252C62C833F9F6*)L_15, il2cpp_codegen_memcpy(L_13, L_8, SizeOf_TKey_t44117398A1D9630A91890738A6FCCB444D9B95A2), il2cpp_codegen_memcpy(L_14, L_12, SizeOf_TValue_t74FDE0389DE830F671A9DB277C30F5627C793B29), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
				NullCheck(L_4);
				InvokerActionInvoker1< Pair_2_tD9FD7901920962567EFA915194252C62C833F9F6 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9), L_4, L_15);
				int32_t L_16 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
			}

IL_004a_1:
			{
				int32_t L_17 = V_2;
				int32_t L_18;
				L_18 = ((  int32_t (*) (NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)))((&V_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
				if ((((int32_t)L_17) < ((int32_t)L_18)))
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_0064;
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

IL_0064:
	{
		List_1_t8F0684E22184B81BF891DD99A3E16491E68B58B5* L_19 = V_0;
		return L_19;
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
// Method Definition Index: 65321
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2__ctor_mAC8F198D20B98C2819447D8E080EBF2F2714BFFE (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		__this->___m_AllocatorLabel = L_0;
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = ___0_capacity;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_2, 2)),NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4 = ___1_allocator;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** L_5 = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926**)(&__this->___m_Buffer);
		UnsafeParallelHashMapData_AllocateHashMap_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCBA9B456E509039F0C37BA72EFD6D0CDAF16BB6(L_1, L_3, L_4, L_5, NULL);
		UnsafeParallelHashMap_2_Clear_mC24DF6084AB7BA5AECAF2DFE3C8D80CD6EEE830C(__this, NULL);
		return;
	}
}
// Method Definition Index: 65322
// Method Definition Index: 65323
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsEmpty_m2EB3B4B325AAF39DA286FF82FDB26405AE271998 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m21986D033E89DA3F44B7D0C5B99F57C93E9FBFCC_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		bool L_2;
		L_2 = UnsafeParallelHashMapData_IsEmpty_m24404CDC35842532023F9D7094DB24BCBD57EC9D(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)1;
	}
}
// Method Definition Index: 65324
// Method Definition Index: 65325
// Method Definition Index: 65326
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Capacity_mD1D227DF7720121254BBE5435F29C5CB94D97831 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_value;
		int32_t L_2 = ___0_value;
		int64_t L_3;
		L_3 = UnsafeParallelHashMapData_GetBucketSize_mBE376CBC384B796DE89740ECD5EA9C7F520D93D7(L_2, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4 = __this->___m_AllocatorLabel;
		UnsafeParallelHashMapData_ReallocateHashMap_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3998D4C65643516D842CF6D61C4513767A18FA63(L_0, L_1, L_3, L_4, NULL);
		return;
	}
}
// Method Definition Index: 65327
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Clear_mC24DF6084AB7BA5AECAF2DFE3C8D80CD6EEE830C (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		UnsafeParallelHashMapBase_2_Clear_mEFDB8CAFDB397D0E8A4279CA11C361A29EC8A4BB(L_0, NULL);
		return;
	}
}
// Method Definition Index: 65328
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryAdd_mED257AE6B2327BE5847C946467D88E33B4A1BA52 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, int32_t ___1_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_1 = ___0_key;
		int32_t L_2 = ___1_item;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_TryAdd_m7575B5C2D0CB741CCB79BFF102B543F951D1A91A(L_0, L_1, L_2, (bool)0, L_3, NULL);
		return L_4;
	}
}
// Method Definition Index: 65329
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Add_m62B965BA968787C68DDE510C13D98B45ACF574A8 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, int32_t ___1_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_1 = ___0_key;
		int32_t L_2 = ___1_item;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_TryAdd_m7575B5C2D0CB741CCB79BFF102B543F951D1A91A(L_0, L_1, L_2, (bool)0, L_3, NULL);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = __this->___m_Buffer;
		NullCheck(L_5);
		int32_t L_6 = L_5->___keyCapacity;
		return;
	}

IL_0029:
	{
		return;
	}
}
// Method Definition Index: 65330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_Remove_mE398837783AB4D7D5B1519D6B47F03F029B40A9A (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_1 = ___0_key;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_Remove_mD0A7EC52AF9067A81379B898E9F19FA26F3F4B88(L_0, L_1, (bool)0, NULL);
		return (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
	}
}
// Method Definition Index: 65331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryGetValue_m6B967A3210A9091B292D0A38D4D8A190E5DC59A6 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, int32_t* ___1_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_1 = ___0_key;
		int32_t* L_2 = ___1_item;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC42AE53B9C096C5437713AA40D89EB873678D78F(L_0, L_1, L_2, (&V_0), NULL);
		return L_3;
	}
}
// Method Definition Index: 65332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_ContainsKey_mFBBB13C3C28724EEB5E77C8EBCF29B6EFEAE9C8C (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_1 = ___0_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC42AE53B9C096C5437713AA40D89EB873678D78F(L_0, L_1, (&V_0), (&V_1), NULL);
		return L_2;
	}
}
// Method Definition Index: 65333
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_get_Item_m74D6405042402B9FE213F8E6F3A0E02CFB637FF9 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_0 = ___0_key;
		bool L_1;
		L_1 = UnsafeParallelHashMap_2_TryGetValue_m6B967A3210A9091B292D0A38D4D8A190E5DC59A6(__this, L_0, (&V_0), NULL);
		int32_t L_2 = V_0;
		return L_2;
	}
}
// Method Definition Index: 65334
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Item_m78B278F2F9ECFF6DD543068ED4A22897FFEA5017 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_tD4CC3C20E6B2CD3C882DF9F7C39522544B32FE4A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_1 = ___0_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mC42AE53B9C096C5437713AA40D89EB873678D78F(L_0, L_1, (&V_0), (&V_1), NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = __this->___m_Buffer;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_SetValue_mBC2EB4E62A5FAA365C4795E1D7FA3F3ED271F97A(L_3, (&V_1), (&___1_value), NULL);
		return;
	}

IL_0023:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = __this->___m_Buffer;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_6 = ___0_key;
		int32_t L_7 = ___1_value;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_8 = __this->___m_AllocatorLabel;
		bool L_9;
		L_9 = UnsafeParallelHashMapBase_2_TryAdd_m7575B5C2D0CB741CCB79BFF102B543F951D1A91A(L_5, L_6, L_7, (bool)0, L_8, NULL);
		return;
	}
}
// Method Definition Index: 65335
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Dispose_m90F628584C865984113787BB0EC79383B00A069C (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m21986D033E89DA3F44B7D0C5B99F57C93E9FBFCC_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = __this->___m_AllocatorLabel;
		UnsafeParallelHashMapData_DeallocateHashMap_m8D0FEE08B8522A1D05FBFFBBB43CB203304F114F(L_1, L_2, NULL);
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		__this->___m_Buffer = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2_Dispose_m90F628584C865984113787BB0EC79383B00A069C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271>(__this);
	UnsafeParallelHashMap_2_Dispose_m90F628584C865984113787BB0EC79383B00A069C(_thisAdjusted, method);
}
// Method Definition Index: 65336
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_mE315F33C3B919C23EC86BFFB01282ACBAE0693FB (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m21986D033E89DA3F44B7D0C5B99F57C93E9FBFCC_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_1 = ___0_inputDeps;
		return L_1;
	}

IL_000a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = __this->___m_Buffer;
		(&V_0)->___Data = L_2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		(&V_0)->___Allocator = L_3;
		UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 L_4 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_5 = ___0_inputDeps;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6;
		L_6 = IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D(L_4, L_5, IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var);
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		__this->___m_Buffer = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_7;
		return L_6;
	}
}
IL2CPP_EXTERN_C  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_mE315F33C3B919C23EC86BFFB01282ACBAE0693FB_AdjustorThunk (RuntimeObject* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271>(__this);
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_Dispose_mE315F33C3B919C23EC86BFFB01282ACBAE0693FB(_thisAdjusted, ___0_inputDeps, method);
	return _returnValue;
}
// Method Definition Index: 65337
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 UnsafeParallelHashMap_2_GetKeyArray_m0790F3B72CBA21D7B667E1A333E76DEAC8678138 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 L_3;
		L_3 = CollectionHelper_CreateNativeArray_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_mAF52A80BBB617F62596D58F8FFD9E3E6AA9DB60F(L_1, L_2, 0, NULL);
		V_0 = L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = __this->___m_Buffer;
		NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 L_5 = V_0;
		UnsafeParallelHashMapData_GetKeyArray_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_m49E855A91D083A54CFF44DEB13335123AD3C4001(L_4, L_5, NULL);
		NativeArray_1_t2FF0F1BBD323229A2F9ABD52397EA6EF9B105E09 L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 65338
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C UnsafeParallelHashMap_2_GetValueArray_m28E06E6A40485B8C1E9CEB5D9AD5DCEB3FD937B7 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_3;
		L_3 = CollectionHelper_CreateNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m53D2BC04C5127B3B1163A395E36386918CACFE4B(L_1, L_2, 0, NULL);
		V_0 = L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = __this->___m_Buffer;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_5 = V_0;
		UnsafeParallelHashMapData_GetValueArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4769F528CC3AB04D768F83B2A2A016AE29C5F87E(L_4, L_5, NULL);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 65339
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeKeyValueArrays_2_t6F346645686D9ED3DF9980242A60F6343D9BD346 UnsafeParallelHashMap_2_GetKeyValueArrays_mBAD0B630B8637FBD3415B9CA1EB4912C07A0183A (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeKeyValueArrays_2_t6F346645686D9ED3DF9980242A60F6343D9BD346 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeKeyValueArrays_2__ctor_m5C1BD5C2D8BD4FE03EC32866EEDF2EBECAB7B7F3((&V_0), L_1, L_2, 0, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = __this->___m_Buffer;
		NativeKeyValueArrays_2_t6F346645686D9ED3DF9980242A60F6343D9BD346 L_4 = V_0;
		UnsafeParallelHashMapData_GetKeyValueArrays_TisDrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC3C2330139E264EC4EB952292BE242F6511CA8E6(L_3, L_4, NULL);
		NativeKeyValueArrays_2_t6F346645686D9ED3DF9980242A60F6343D9BD346 L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 65340
// Method Definition Index: 65341
// Method Definition Index: 65342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_ThrowKeyAlreadyAdded_m11C8720F3F678B7A8E181BF3ADFF1F9E387B5176 (DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94* L_0 = ___0_key;
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_1 = (*(DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94*)L_0);
		DrawKey_t3B4EE6E2AE19E9DD7C1731E60C6A7B39FEEA1C94 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3DCDCC60AD32F8AA5D68094D1F4DA6F372DFBE24)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}
}
// Method Definition Index: 65343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_ThrowAtMaxCapacity_m06A2033F78B7477D465D65AB42B9459BA6067E13 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0;
		L_0 = UnsafeParallelHashMap_2_get_Capacity_m5516D69B8E5C8A61A3B8112E3B0C0DC701FDEF20_inline(__this, NULL);
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = ((int32_t)1073741823);
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5;
		L_5 = UnsafeParallelHashMap_2_Count_m3B17849FD6E9AEFC745138B43A5F5924BDA651A6(__this, NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral58D215CC3FAC6F0C327469BF1C8E229807A83E55)), L_2, L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}
}
// Method Definition Index: 65344
// Method Definition Index: 65345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22AAA28BF2A503A1A9ACC7D180DA65A1F2AA0A86 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22AAA28BF2A503A1A9ACC7D180DA65A1F2AA0A86_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271>(__this);
	RuntimeObject* _returnValue;
	_returnValue = UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m22AAA28BF2A503A1A9ACC7D180DA65A1F2AA0A86(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 65346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m1F6D4EBACBE01E83D9F84CF51098880680AFA3B5 (UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m1F6D4EBACBE01E83D9F84CF51098880680AFA3B5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<UnsafeParallelHashMap_2_t16A91603015498C4CAFD401670CE1CDBBA245271>(__this);
	RuntimeObject* _returnValue;
	_returnValue = UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m1F6D4EBACBE01E83D9F84CF51098880680AFA3B5(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 65321
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2__ctor_m823C6FA92D9856A5AC75BC60CC3319CEB610FF61 (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		__this->___m_AllocatorLabel = L_0;
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = ___0_capacity;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_2, 2)),NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4 = ___1_allocator;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** L_5 = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926**)(&__this->___m_Buffer);
		UnsafeParallelHashMapData_AllocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC33D66B36C84BB3713D03F117D2FC7BA97B6F1B3(L_1, L_3, L_4, L_5, NULL);
		UnsafeParallelHashMap_2_Clear_m4CB59CCB443B8B999EB14D7ADEA2FE45667EDDE9(__this, NULL);
		return;
	}
}
// Method Definition Index: 65322
// Method Definition Index: 65323
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsEmpty_m59E1A9A7DCECCF351F3C0FC99871D966166782E4 (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_mDED457162B1F831271052A68989F6D4CEF3ED72C_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		bool L_2;
		L_2 = UnsafeParallelHashMapData_IsEmpty_m24404CDC35842532023F9D7094DB24BCBD57EC9D(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)1;
	}
}
// Method Definition Index: 65324
// Method Definition Index: 65325
// Method Definition Index: 65326
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Capacity_mBA588B1CBB930D47DC2FEB8B12FB14445751008E (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_value;
		int32_t L_2 = ___0_value;
		int64_t L_3;
		L_3 = UnsafeParallelHashMapData_GetBucketSize_mBE376CBC384B796DE89740ECD5EA9C7F520D93D7(L_2, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4 = __this->___m_AllocatorLabel;
		UnsafeParallelHashMapData_ReallocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m74E8AA99C7F975CBC9B07E2EE5507D607611E849(L_0, L_1, L_3, L_4, NULL);
		return;
	}
}
// Method Definition Index: 65327
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Clear_m4CB59CCB443B8B999EB14D7ADEA2FE45667EDDE9 (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		UnsafeParallelHashMapBase_2_Clear_mD620491F4EA8B03A99D82DC769CD85A03BFED512(L_0, NULL);
		return;
	}
}
// Method Definition Index: 65328
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryAdd_m85690C4E47F73476AA1681A7BD7468AA2E1A9740 (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, bool ___1_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		bool L_2 = ___1_item;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_TryAdd_mF79126AD9B549372FB57D999F4450764D57E8BCA(L_0, L_1, L_2, (bool)0, L_3, NULL);
		return L_4;
	}
}
// Method Definition Index: 65329
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Add_m0795A09C0DFB08EFEF5804C40111410C29200F2E (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, bool ___1_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		bool L_2 = ___1_item;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_TryAdd_mF79126AD9B549372FB57D999F4450764D57E8BCA(L_0, L_1, L_2, (bool)0, L_3, NULL);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = __this->___m_Buffer;
		NullCheck(L_5);
		int32_t L_6 = L_5->___keyCapacity;
		return;
	}

IL_0029:
	{
		return;
	}
}
// Method Definition Index: 65330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_Remove_mA3C82F3A831304ACC20C3C13CD007CB2836F32B9 (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_Remove_m383AAD31DA63D8750FCF96B8527D44D210E501B3(L_0, L_1, (bool)0, NULL);
		return (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
	}
}
// Method Definition Index: 65331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryGetValue_mA8F29C37931DC4EBDE937A8CBFFA377E38915818 (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, bool* ___1_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		bool* L_2 = ___1_item;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m4367FF3A9EE67D1486CCE2262EFFAF6946AF92DD(L_0, L_1, L_2, (&V_0), NULL);
		return L_3;
	}
}
// Method Definition Index: 65332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_ContainsKey_m44930DB9DE6346D1728A22EA7EFAEDC423933A90 (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m4367FF3A9EE67D1486CCE2262EFFAF6946AF92DD(L_0, L_1, (&V_0), (&V_1), NULL);
		return L_2;
	}
}
// Method Definition Index: 65333
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_Item_m5BBC8FBC948339C917585445B3D3EEA7D0511DC7 (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0 = ___0_key;
		bool L_1;
		L_1 = UnsafeParallelHashMap_2_TryGetValue_mA8F29C37931DC4EBDE937A8CBFFA377E38915818(__this, L_0, (&V_0), NULL);
		bool L_2 = V_0;
		return L_2;
	}
}
// Method Definition Index: 65334
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Item_mFC6027D2A1DEBCEE34C40F1D7C2C1E983B835E23 (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, bool ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	bool V_0 = false;
	NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m4367FF3A9EE67D1486CCE2262EFFAF6946AF92DD(L_0, L_1, (&V_0), (&V_1), NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = __this->___m_Buffer;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_SetValue_mA81BF5D2401B45A4AA6667DDBAF5D06525622473(L_3, (&V_1), (&___1_value), NULL);
		return;
	}

IL_0023:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_6 = ___0_key;
		bool L_7 = ___1_value;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_8 = __this->___m_AllocatorLabel;
		bool L_9;
		L_9 = UnsafeParallelHashMapBase_2_TryAdd_mF79126AD9B549372FB57D999F4450764D57E8BCA(L_5, L_6, L_7, (bool)0, L_8, NULL);
		return;
	}
}
// Method Definition Index: 65335
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Dispose_mE168242B30D34781E0922D0B3A921789F58AF9C5 (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_mDED457162B1F831271052A68989F6D4CEF3ED72C_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = __this->___m_AllocatorLabel;
		UnsafeParallelHashMapData_DeallocateHashMap_m8D0FEE08B8522A1D05FBFFBBB43CB203304F114F(L_1, L_2, NULL);
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		__this->___m_Buffer = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2_Dispose_mE168242B30D34781E0922D0B3A921789F58AF9C5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A>(__this);
	UnsafeParallelHashMap_2_Dispose_mE168242B30D34781E0922D0B3A921789F58AF9C5(_thisAdjusted, method);
}
// Method Definition Index: 65336
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_m0029E0D98754A1E9C0EAD6C63A25CADC334FF7CF (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_mDED457162B1F831271052A68989F6D4CEF3ED72C_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_1 = ___0_inputDeps;
		return L_1;
	}

IL_000a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = __this->___m_Buffer;
		(&V_0)->___Data = L_2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		(&V_0)->___Allocator = L_3;
		UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 L_4 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_5 = ___0_inputDeps;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6;
		L_6 = IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D(L_4, L_5, IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var);
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		__this->___m_Buffer = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_7;
		return L_6;
	}
}
IL2CPP_EXTERN_C  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_m0029E0D98754A1E9C0EAD6C63A25CADC334FF7CF_AdjustorThunk (RuntimeObject* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A>(__this);
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_Dispose_m0029E0D98754A1E9C0EAD6C63A25CADC334FF7CF(_thisAdjusted, ___0_inputDeps, method);
	return _returnValue;
}
// Method Definition Index: 65337
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 UnsafeParallelHashMap_2_GetKeyArray_mBF1D1A93298325D5D41A84AC73616019FBDE1316 (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_3;
		L_3 = CollectionHelper_CreateNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m37DDAEDF9B9C55C4598679FA86B596B53362B6E3(L_1, L_2, 0, NULL);
		V_0 = L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = __this->___m_Buffer;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_5 = V_0;
		UnsafeParallelHashMapData_GetKeyArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mAB07175AB7AA23FBCB3571D1F770E945969E8567(L_4, L_5, NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 65338
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB UnsafeParallelHashMap_2_GetValueArray_m9645001DF9A4A84ABE84AF6514ED93F8942C31D9 (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB L_3;
		L_3 = CollectionHelper_CreateNativeArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE1929E4215249CFF4F4034028DD00376FA292FF6(L_1, L_2, 0, NULL);
		V_0 = L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = __this->___m_Buffer;
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB L_5 = V_0;
		UnsafeParallelHashMapData_GetValueArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC207F978B303B5F48108C11804D921E6F240342D(L_4, L_5, NULL);
		NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 65339
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeKeyValueArrays_2_t5F8B14A1FC3085C8F576054B525A95D4898297D8 UnsafeParallelHashMap_2_GetKeyValueArrays_m46AB9A825FA48FE44E9CE80E7A108B552C25E116 (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeKeyValueArrays_2_t5F8B14A1FC3085C8F576054B525A95D4898297D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeKeyValueArrays_2__ctor_mB2EC342017D1E395DA2099E5372ED64D279381A7((&V_0), L_1, L_2, 0, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = __this->___m_Buffer;
		NativeKeyValueArrays_2_t5F8B14A1FC3085C8F576054B525A95D4898297D8 L_4 = V_0;
		UnsafeParallelHashMapData_GetKeyValueArrays_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m21239CE036F4F5471F4055037C59ACA18A4724CA(L_3, L_4, NULL);
		NativeKeyValueArrays_2_t5F8B14A1FC3085C8F576054B525A95D4898297D8 L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 65340
// Method Definition Index: 65341
// Method Definition Index: 65342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_ThrowKeyAlreadyAdded_m8129F5033DA119E0BAAA6537D530C82F29A38DE6 (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_0 = ___0_key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = (*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_0);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3DCDCC60AD32F8AA5D68094D1F4DA6F372DFBE24)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}
}
// Method Definition Index: 65343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_ThrowAtMaxCapacity_m57695DC20207EC685DBF6FDFE45BDC7D7621A261 (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0;
		L_0 = UnsafeParallelHashMap_2_get_Capacity_mC666D6C263F15AA2FD6A05CAEBAB2B2DFBE687AB_inline(__this, NULL);
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = ((int32_t)1073741823);
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5;
		L_5 = UnsafeParallelHashMap_2_Count_m8DF0A24CF1D10819C529AB188628C7BA7AF62014(__this, NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral58D215CC3FAC6F0C327469BF1C8E229807A83E55)), L_2, L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}
}
// Method Definition Index: 65344
// Method Definition Index: 65345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_mBC9960286D3CFA0345BDF4B3983DA01728B9B894 (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_mBC9960286D3CFA0345BDF4B3983DA01728B9B894_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A>(__this);
	RuntimeObject* _returnValue;
	_returnValue = UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_mBC9960286D3CFA0345BDF4B3983DA01728B9B894(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 65346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m98429D3A789598E3551A8DC56447BC028F089DCD (UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m98429D3A789598E3551A8DC56447BC028F089DCD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<UnsafeParallelHashMap_2_t0D069F6D040F7F2493F503CB484DE4FDAFE4D70A>(__this);
	RuntimeObject* _returnValue;
	_returnValue = UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m98429D3A789598E3551A8DC56447BC028F089DCD(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 65321
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2__ctor_mCAC8D4804CE42FAFC17181567BF2A4816E43D8FF (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		__this->___m_AllocatorLabel = L_0;
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = ___0_capacity;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_2, 2)),NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4 = ___1_allocator;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** L_5 = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926**)(&__this->___m_Buffer);
		UnsafeParallelHashMapData_AllocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisGPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6_m9DB5174B630BFCDD07377E084AC0454D96CAC220(L_1, L_3, L_4, L_5, NULL);
		UnsafeParallelHashMap_2_Clear_m232B97D1EFC8FA0D7EDD0758239D9E0EC1273872(__this, NULL);
		return;
	}
}
// Method Definition Index: 65322
// Method Definition Index: 65323
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsEmpty_m536EDC34C72C03E7694716EFB17CEC95E04475D8 (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m3E16B160F6BD828C4D8D14FF280BB50CB40544C6_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		bool L_2;
		L_2 = UnsafeParallelHashMapData_IsEmpty_m24404CDC35842532023F9D7094DB24BCBD57EC9D(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)1;
	}
}
// Method Definition Index: 65324
// Method Definition Index: 65325
// Method Definition Index: 65326
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Capacity_m39EE8BCFF3957F9D91BC73AE50FA5AB266BF8C39 (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_value;
		int32_t L_2 = ___0_value;
		int64_t L_3;
		L_3 = UnsafeParallelHashMapData_GetBucketSize_mBE376CBC384B796DE89740ECD5EA9C7F520D93D7(L_2, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4 = __this->___m_AllocatorLabel;
		UnsafeParallelHashMapData_ReallocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisGPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6_m48E5FF5F41637E261FFDB6EF3154FC85F0211D58(L_0, L_1, L_3, L_4, NULL);
		return;
	}
}
// Method Definition Index: 65327
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Clear_m232B97D1EFC8FA0D7EDD0758239D9E0EC1273872 (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		UnsafeParallelHashMapBase_2_Clear_m82AB1EC3846B97F983511E4976920B42752EAD32(L_0, NULL);
		return;
	}
}
// Method Definition Index: 65328
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryAdd_mB4A2E533FC717CC8188EB4E72060F4BD6498B701 (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, GPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6 ___1_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		GPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6 L_2 = ___1_item;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_TryAdd_m5B56F56B130BCBF16A347832EA46CAA80B8C2FDE(L_0, L_1, L_2, (bool)0, L_3, NULL);
		return L_4;
	}
}
// Method Definition Index: 65329
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Add_mAE1F0F551D9F9FC9D7B40F5B168D145CE0C86C13 (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, GPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6 ___1_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		GPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6 L_2 = ___1_item;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_TryAdd_m5B56F56B130BCBF16A347832EA46CAA80B8C2FDE(L_0, L_1, L_2, (bool)0, L_3, NULL);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = __this->___m_Buffer;
		NullCheck(L_5);
		int32_t L_6 = L_5->___keyCapacity;
		return;
	}

IL_0029:
	{
		return;
	}
}
// Method Definition Index: 65330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_Remove_m8EFE1A1EACCED5DD0E44CAE46A75D76F6FB79AB3 (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_Remove_m881039650BA1FDA661D07E6AF8FA35B1B240A50C(L_0, L_1, (bool)0, NULL);
		return (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
	}
}
// Method Definition Index: 65331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryGetValue_m094FF6CD47A2C2F1CB6E9B8148883827657977A7 (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, GPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6* ___1_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		GPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6* L_2 = ___1_item;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mDA06A084A48900A163537E31C38E9810EFEB0BBE(L_0, L_1, L_2, (&V_0), NULL);
		return L_3;
	}
}
// Method Definition Index: 65332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_ContainsKey_mFBD25F27F4834870A101FA975E571CD3DB75AC44 (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	GPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mDA06A084A48900A163537E31C38E9810EFEB0BBE(L_0, L_1, (&V_0), (&V_1), NULL);
		return L_2;
	}
}
// Method Definition Index: 65333
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6 UnsafeParallelHashMap_2_get_Item_m8D839317F581C088391E6769D75C89A0E23F620D (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	GPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0 = ___0_key;
		bool L_1;
		L_1 = UnsafeParallelHashMap_2_TryGetValue_m094FF6CD47A2C2F1CB6E9B8148883827657977A7(__this, L_0, (&V_0), NULL);
		GPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6 L_2 = V_0;
		return L_2;
	}
}
// Method Definition Index: 65334
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Item_m6D5E67BE856D107835704EE1DD6EF0B296C7120A (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, GPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6 ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	GPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mDA06A084A48900A163537E31C38E9810EFEB0BBE(L_0, L_1, (&V_0), (&V_1), NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = __this->___m_Buffer;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_SetValue_m273AB90E05FFD783BAEDA71D1AA8D4A6380B1D77(L_3, (&V_1), (&___1_value), NULL);
		return;
	}

IL_0023:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_6 = ___0_key;
		GPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6 L_7 = ___1_value;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_8 = __this->___m_AllocatorLabel;
		bool L_9;
		L_9 = UnsafeParallelHashMapBase_2_TryAdd_m5B56F56B130BCBF16A347832EA46CAA80B8C2FDE(L_5, L_6, L_7, (bool)0, L_8, NULL);
		return;
	}
}
// Method Definition Index: 65335
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Dispose_m4D7C1925109F892217B0DE3FC6337E81B42A4B7A (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m3E16B160F6BD828C4D8D14FF280BB50CB40544C6_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = __this->___m_AllocatorLabel;
		UnsafeParallelHashMapData_DeallocateHashMap_m8D0FEE08B8522A1D05FBFFBBB43CB203304F114F(L_1, L_2, NULL);
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		__this->___m_Buffer = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2_Dispose_m4D7C1925109F892217B0DE3FC6337E81B42A4B7A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF>(__this);
	UnsafeParallelHashMap_2_Dispose_m4D7C1925109F892217B0DE3FC6337E81B42A4B7A(_thisAdjusted, method);
}
// Method Definition Index: 65336
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_mEC2627DEA50D6D174A21FB9FD68E8BF415091408 (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m3E16B160F6BD828C4D8D14FF280BB50CB40544C6_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_1 = ___0_inputDeps;
		return L_1;
	}

IL_000a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = __this->___m_Buffer;
		(&V_0)->___Data = L_2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		(&V_0)->___Allocator = L_3;
		UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 L_4 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_5 = ___0_inputDeps;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6;
		L_6 = IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D(L_4, L_5, IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var);
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		__this->___m_Buffer = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_7;
		return L_6;
	}
}
IL2CPP_EXTERN_C  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_mEC2627DEA50D6D174A21FB9FD68E8BF415091408_AdjustorThunk (RuntimeObject* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF>(__this);
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_Dispose_mEC2627DEA50D6D174A21FB9FD68E8BF415091408(_thisAdjusted, ___0_inputDeps, method);
	return _returnValue;
}
// Method Definition Index: 65337
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 UnsafeParallelHashMap_2_GetKeyArray_m79EE3213791EA91E9118A4C168E4586754A57186 (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_3;
		L_3 = CollectionHelper_CreateNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m37DDAEDF9B9C55C4598679FA86B596B53362B6E3(L_1, L_2, 0, NULL);
		V_0 = L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = __this->___m_Buffer;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_5 = V_0;
		UnsafeParallelHashMapData_GetKeyArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mAB07175AB7AA23FBCB3571D1F770E945969E8567(L_4, L_5, NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 65338
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAA41AE8C464559D1987285B6F1D42333CD5EC15B UnsafeParallelHashMap_2_GetValueArray_mF7FEEC55848BBB4243B8865ECB362CF3AF229D65 (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_tAA41AE8C464559D1987285B6F1D42333CD5EC15B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeArray_1_tAA41AE8C464559D1987285B6F1D42333CD5EC15B L_3;
		L_3 = CollectionHelper_CreateNativeArray_TisGPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6_m11EB66EC9637406E6C80BBB26C490545DB4196D1(L_1, L_2, 0, NULL);
		V_0 = L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = __this->___m_Buffer;
		NativeArray_1_tAA41AE8C464559D1987285B6F1D42333CD5EC15B L_5 = V_0;
		UnsafeParallelHashMapData_GetValueArray_TisGPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6_mEC7179C6FD7FEFFC5E8D1BE999A7CF349AD8B8ED(L_4, L_5, NULL);
		NativeArray_1_tAA41AE8C464559D1987285B6F1D42333CD5EC15B L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 65339
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeKeyValueArrays_2_t66B0B299E9562B5E22EF3BF01729F553EF5A1143 UnsafeParallelHashMap_2_GetKeyValueArrays_mDBBE02CFF1111635AD2715029E90221F94A5A59D (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeKeyValueArrays_2_t66B0B299E9562B5E22EF3BF01729F553EF5A1143 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeKeyValueArrays_2__ctor_m02996A4380F17AF6AAAB7909DF4D5365D968B387((&V_0), L_1, L_2, 0, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = __this->___m_Buffer;
		NativeKeyValueArrays_2_t66B0B299E9562B5E22EF3BF01729F553EF5A1143 L_4 = V_0;
		UnsafeParallelHashMapData_GetKeyValueArrays_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisGPUDrivenMaterial_tA7930996F9C2C0DF7FD8865402EB452E8EACCFB6_m6D0BEC921137959E6A66721B1B26247236FDC5D4(L_3, L_4, NULL);
		NativeKeyValueArrays_2_t66B0B299E9562B5E22EF3BF01729F553EF5A1143 L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 65340
// Method Definition Index: 65341
// Method Definition Index: 65342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_ThrowKeyAlreadyAdded_m9E1998D8589A3F22ABF9298641BE6820575AEACB (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_0 = ___0_key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = (*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_0);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3DCDCC60AD32F8AA5D68094D1F4DA6F372DFBE24)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}
}
// Method Definition Index: 65343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_ThrowAtMaxCapacity_m9B150C8E38D244E781908FDF2A692C276367F446 (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0;
		L_0 = UnsafeParallelHashMap_2_get_Capacity_m5DDAD4786CB59E135698E44264B7578F4C3F302D_inline(__this, NULL);
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = ((int32_t)1073741823);
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5;
		L_5 = UnsafeParallelHashMap_2_Count_m2EC6F133E5C6E3532E5C5B63EEBFCABE4AFFB1CC(__this, NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral58D215CC3FAC6F0C327469BF1C8E229807A83E55)), L_2, L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}
}
// Method Definition Index: 65344
// Method Definition Index: 65345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_mA47CA8768A8C65C9B92DF7E22AAE244DD7B38B33 (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_mA47CA8768A8C65C9B92DF7E22AAE244DD7B38B33_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF>(__this);
	RuntimeObject* _returnValue;
	_returnValue = UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_mA47CA8768A8C65C9B92DF7E22AAE244DD7B38B33(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 65346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_mD1427E573007EC710354EE2C09B3EB18DC26BE9F (UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_mD1427E573007EC710354EE2C09B3EB18DC26BE9F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<UnsafeParallelHashMap_2_t7719CD95A579EE7F553BE81794FF8427051B66EF>(__this);
	RuntimeObject* _returnValue;
	_returnValue = UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_mD1427E573007EC710354EE2C09B3EB18DC26BE9F(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 65321
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2__ctor_m28685972D0D61780F624C18F605A3BFF8BAFB891 (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		__this->___m_AllocatorLabel = L_0;
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = ___0_capacity;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_2, 2)),NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4 = ___1_allocator;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** L_5 = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926**)(&__this->___m_Buffer);
		UnsafeParallelHashMapData_AllocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mC5DB96096F58345413CB2300A12310634E7D4AB1(L_1, L_3, L_4, L_5, NULL);
		UnsafeParallelHashMap_2_Clear_m0F534300E9181A8441752D6D2E98B199441897EA(__this, NULL);
		return;
	}
}
// Method Definition Index: 65322
// Method Definition Index: 65323
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsEmpty_mE14F083C637EB20E2B60F83089BF37C5CADD2673 (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m1EA1D8A50A8590A38032009A419AE51C50AD4BA7_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		bool L_2;
		L_2 = UnsafeParallelHashMapData_IsEmpty_m24404CDC35842532023F9D7094DB24BCBD57EC9D(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)1;
	}
}
// Method Definition Index: 65324
// Method Definition Index: 65325
// Method Definition Index: 65326
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Capacity_m4932A0C17D350A980F3FB8BBA17D29DF3922BAD1 (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_value;
		int32_t L_2 = ___0_value;
		int64_t L_3;
		L_3 = UnsafeParallelHashMapData_GetBucketSize_mBE376CBC384B796DE89740ECD5EA9C7F520D93D7(L_2, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4 = __this->___m_AllocatorLabel;
		UnsafeParallelHashMapData_ReallocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mF394020DE5FEF55FD41D472FCFEDFB94EC21E18C(L_0, L_1, L_3, L_4, NULL);
		return;
	}
}
// Method Definition Index: 65327
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Clear_m0F534300E9181A8441752D6D2E98B199441897EA (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		UnsafeParallelHashMapBase_2_Clear_m90A0B8D6E3B9A33FD8A9520D406FAA4B3E27E08E(L_0, NULL);
		return;
	}
}
// Method Definition Index: 65328
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryAdd_m4E41BB8B56A37C9E1AD01501980F088D414FC62A (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 ___1_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 L_2 = ___1_item;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_TryAdd_m0EA030D1553AB75C4DC3B22E1261718F38B0514D(L_0, L_1, L_2, (bool)0, L_3, NULL);
		return L_4;
	}
}
// Method Definition Index: 65329
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Add_mFE9AA76554E61013C9CEFF183B8DBC9B68BE707B (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 ___1_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 L_2 = ___1_item;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_TryAdd_m0EA030D1553AB75C4DC3B22E1261718F38B0514D(L_0, L_1, L_2, (bool)0, L_3, NULL);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = __this->___m_Buffer;
		NullCheck(L_5);
		int32_t L_6 = L_5->___keyCapacity;
		return;
	}

IL_0029:
	{
		return;
	}
}
// Method Definition Index: 65330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_Remove_mCF10E175E4356F975D9618D4B5B5315B51B06E95 (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_Remove_mCA17E90FD8C94DA36C293C4F7C760305DDDBAA39(L_0, L_1, (bool)0, NULL);
		return (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
	}
}
// Method Definition Index: 65331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryGetValue_mAC80CAF8B152BD2F1C9DB862F35A00673040E88F (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* ___1_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78* L_2 = ___1_item;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m2AB8F01AFC014C5985B83D5F7589937CC7975157(L_0, L_1, L_2, (&V_0), NULL);
		return L_3;
	}
}
// Method Definition Index: 65332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_ContainsKey_m026AAFB827131BBCEE0C74ECC676C492648B691D (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m2AB8F01AFC014C5985B83D5F7589937CC7975157(L_0, L_1, (&V_0), (&V_1), NULL);
		return L_2;
	}
}
// Method Definition Index: 65333
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 UnsafeParallelHashMap_2_get_Item_m7462478F1BC008E7C5079A9E20C08A063ABC454A (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0 = ___0_key;
		bool L_1;
		L_1 = UnsafeParallelHashMap_2_TryGetValue_mAC80CAF8B152BD2F1C9DB862F35A00673040E88F(__this, L_0, (&V_0), NULL);
		GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 L_2 = V_0;
		return L_2;
	}
}
// Method Definition Index: 65334
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Item_m95A1DA0DE44DC4EDD193CB5C78D1EA6A3CACC584 (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m2AB8F01AFC014C5985B83D5F7589937CC7975157(L_0, L_1, (&V_0), (&V_1), NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = __this->___m_Buffer;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_SetValue_m77746A88E95C7BB55130E6B2061E2B4E349F527E(L_3, (&V_1), (&___1_value), NULL);
		return;
	}

IL_0023:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_6 = ___0_key;
		GPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78 L_7 = ___1_value;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_8 = __this->___m_AllocatorLabel;
		bool L_9;
		L_9 = UnsafeParallelHashMapBase_2_TryAdd_m0EA030D1553AB75C4DC3B22E1261718F38B0514D(L_5, L_6, L_7, (bool)0, L_8, NULL);
		return;
	}
}
// Method Definition Index: 65335
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Dispose_mE126E426AAAED49D25F130000D405C2B41318D3B (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m1EA1D8A50A8590A38032009A419AE51C50AD4BA7_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = __this->___m_AllocatorLabel;
		UnsafeParallelHashMapData_DeallocateHashMap_m8D0FEE08B8522A1D05FBFFBBB43CB203304F114F(L_1, L_2, NULL);
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		__this->___m_Buffer = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2_Dispose_mE126E426AAAED49D25F130000D405C2B41318D3B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A>(__this);
	UnsafeParallelHashMap_2_Dispose_mE126E426AAAED49D25F130000D405C2B41318D3B(_thisAdjusted, method);
}
// Method Definition Index: 65336
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_mBF6CB438235B2B9E829DBAE0F90A3B68DC5709EB (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m1EA1D8A50A8590A38032009A419AE51C50AD4BA7_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_1 = ___0_inputDeps;
		return L_1;
	}

IL_000a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = __this->___m_Buffer;
		(&V_0)->___Data = L_2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		(&V_0)->___Allocator = L_3;
		UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 L_4 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_5 = ___0_inputDeps;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6;
		L_6 = IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D(L_4, L_5, IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var);
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		__this->___m_Buffer = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_7;
		return L_6;
	}
}
IL2CPP_EXTERN_C  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_mBF6CB438235B2B9E829DBAE0F90A3B68DC5709EB_AdjustorThunk (RuntimeObject* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A>(__this);
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_Dispose_mBF6CB438235B2B9E829DBAE0F90A3B68DC5709EB(_thisAdjusted, ___0_inputDeps, method);
	return _returnValue;
}
// Method Definition Index: 65337
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 UnsafeParallelHashMap_2_GetKeyArray_m99A1647B4072071DE8A9A47A5F2CEA7C262A9E19 (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_3;
		L_3 = CollectionHelper_CreateNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m37DDAEDF9B9C55C4598679FA86B596B53362B6E3(L_1, L_2, 0, NULL);
		V_0 = L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = __this->___m_Buffer;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_5 = V_0;
		UnsafeParallelHashMapData_GetKeyArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mAB07175AB7AA23FBCB3571D1F770E945969E8567(L_4, L_5, NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 65338
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E UnsafeParallelHashMap_2_GetValueArray_m364FA6C9A18493B0F88274C8C4AABE9BFE560D40 (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E L_3;
		L_3 = CollectionHelper_CreateNativeArray_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m0D7F6CF92BCF84F265BA70040E0CAE6D56E363B6(L_1, L_2, 0, NULL);
		V_0 = L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = __this->___m_Buffer;
		NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E L_5 = V_0;
		UnsafeParallelHashMapData_GetValueArray_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_m0E8CE5C728489D98BC6F0B92382E2326A0E0769D(L_4, L_5, NULL);
		NativeArray_1_t727E0B11B40EA7D6477F67D79DA7B7F7C383735E L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 65339
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeKeyValueArrays_2_tA2DA312B446D1C4E01DFB5BABCD5FD907A6D98BB UnsafeParallelHashMap_2_GetKeyValueArrays_m98B52D8DA03C4215831B918CCF8FE8A1D84F202B (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeKeyValueArrays_2_tA2DA312B446D1C4E01DFB5BABCD5FD907A6D98BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeKeyValueArrays_2__ctor_m0BB0315D667D19539C05DA34818BC073E17764BD((&V_0), L_1, L_2, 0, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = __this->___m_Buffer;
		NativeKeyValueArrays_2_tA2DA312B446D1C4E01DFB5BABCD5FD907A6D98BB L_4 = V_0;
		UnsafeParallelHashMapData_GetKeyValueArrays_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisGPUInstanceIndex_t1B73FC29B273B0470A8E186E3C2F19CA6D8FBA78_mA03F53939352AD52E121E78DAABC5895D0CFF08D(L_3, L_4, NULL);
		NativeKeyValueArrays_2_tA2DA312B446D1C4E01DFB5BABCD5FD907A6D98BB L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 65340
// Method Definition Index: 65341
// Method Definition Index: 65342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_ThrowKeyAlreadyAdded_m62133D76BD2D613CC6907C0A656AAC13CE6349C0 (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_0 = ___0_key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = (*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_0);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3DCDCC60AD32F8AA5D68094D1F4DA6F372DFBE24)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}
}
// Method Definition Index: 65343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_ThrowAtMaxCapacity_m88815F519C70555AF660173BEC314CDF58C17AF0 (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0;
		L_0 = UnsafeParallelHashMap_2_get_Capacity_mE7A0123EA4D25C5D4FA8B67C1B303AF1F572753D_inline(__this, NULL);
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = ((int32_t)1073741823);
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5;
		L_5 = UnsafeParallelHashMap_2_Count_m60504721A94A1E6BDE6A0F8981202C592A2F27FB(__this, NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral58D215CC3FAC6F0C327469BF1C8E229807A83E55)), L_2, L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}
}
// Method Definition Index: 65344
// Method Definition Index: 65345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m76FB5AAA3A8504DB468A14965F282AE8E85DA578 (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m76FB5AAA3A8504DB468A14965F282AE8E85DA578_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A>(__this);
	RuntimeObject* _returnValue;
	_returnValue = UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m76FB5AAA3A8504DB468A14965F282AE8E85DA578(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 65346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_mF9F071CC761152343DCDFF79586443CABB4C0870 (UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_mF9F071CC761152343DCDFF79586443CABB4C0870_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<UnsafeParallelHashMap_2_t3501898EEF5A424F4A042279986085CD2B0DEA2A>(__this);
	RuntimeObject* _returnValue;
	_returnValue = UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_mF9F071CC761152343DCDFF79586443CABB4C0870(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 65321
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2__ctor_m353E2DD50EF5ECB1CA261C3D681D8188AC32C4AE (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		__this->___m_AllocatorLabel = L_0;
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = ___0_capacity;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_2, 2)),NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4 = ___1_allocator;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** L_5 = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926**)(&__this->___m_Buffer);
		UnsafeParallelHashMapData_AllocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_mB3FAEAB9C60EB3A7B2966293CED32A184224B5C2(L_1, L_3, L_4, L_5, NULL);
		UnsafeParallelHashMap_2_Clear_mCD1127F64D3573740854603B636DD9BA31004B0E(__this, NULL);
		return;
	}
}
// Method Definition Index: 65322
// Method Definition Index: 65323
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsEmpty_mD7F8465B57547D8E976538832FB9980024A8CFC0 (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_mDC6C1BD27BBB19A4492F7DF09F1AAFEE584C6CEE_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		bool L_2;
		L_2 = UnsafeParallelHashMapData_IsEmpty_m24404CDC35842532023F9D7094DB24BCBD57EC9D(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)1;
	}
}
// Method Definition Index: 65324
// Method Definition Index: 65325
// Method Definition Index: 65326
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Capacity_m5B4024785BDA5A44ABE6569EAD87135EBAE8218F (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_value;
		int32_t L_2 = ___0_value;
		int64_t L_3;
		L_3 = UnsafeParallelHashMapData_GetBucketSize_mBE376CBC384B796DE89740ECD5EA9C7F520D93D7(L_2, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4 = __this->___m_AllocatorLabel;
		UnsafeParallelHashMapData_ReallocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m60D8A6A4D2FC5E25CD0C3229AD6E6B568C384C32(L_0, L_1, L_3, L_4, NULL);
		return;
	}
}
// Method Definition Index: 65327
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Clear_mCD1127F64D3573740854603B636DD9BA31004B0E (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		UnsafeParallelHashMapBase_2_Clear_mB0D9250BF6DEA3C0FA1E6E1AAEE5C8FF53FEBD36(L_0, NULL);
		return;
	}
}
// Method Definition Index: 65328
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryAdd_m01267E78B4639EA58EFF45EE529668DDE88CDF61 (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___1_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B L_2 = ___1_item;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_TryAdd_mCEB7C38C6618D7CC653575A7B3C28749D14BBB47(L_0, L_1, L_2, (bool)0, L_3, NULL);
		return L_4;
	}
}
// Method Definition Index: 65329
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Add_mB1C417A4CDD3AADBDC3691C444316FB800073A76 (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___1_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B L_2 = ___1_item;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_TryAdd_mCEB7C38C6618D7CC653575A7B3C28749D14BBB47(L_0, L_1, L_2, (bool)0, L_3, NULL);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = __this->___m_Buffer;
		NullCheck(L_5);
		int32_t L_6 = L_5->___keyCapacity;
		return;
	}

IL_0029:
	{
		return;
	}
}
// Method Definition Index: 65330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_Remove_m9927B8B2CE8968632D5F336CF7B09D27047DD1D9 (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_Remove_mAEE12FB6144EA9DCB1933009BC93145133D7DDDD(L_0, L_1, (bool)0, NULL);
		return (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
	}
}
// Method Definition Index: 65331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryGetValue_m1874358B2C2DF6E415E63A8D640FB799635D2474 (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* ___1_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B* L_2 = ___1_item;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mDBE5641F713C2E902B94A498C9679283E34E1F4F(L_0, L_1, L_2, (&V_0), NULL);
		return L_3;
	}
}
// Method Definition Index: 65332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_ContainsKey_m8CAB47DB824E36874E4CCC120218A53B87885DE6 (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mDBE5641F713C2E902B94A498C9679283E34E1F4F(L_0, L_1, (&V_0), (&V_1), NULL);
		return L_2;
	}
}
// Method Definition Index: 65333
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B UnsafeParallelHashMap_2_get_Item_mE267FD484DA5F2537E676F1BC1ECB21FAE1CFCAE (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0 = ___0_key;
		bool L_1;
		L_1 = UnsafeParallelHashMap_2_TryGetValue_m1874358B2C2DF6E415E63A8D640FB799635D2474(__this, L_0, (&V_0), NULL);
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B L_2 = V_0;
		return L_2;
	}
}
// Method Definition Index: 65334
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Item_mE343BB56E07449BA5BD329972071BEEE430D9168 (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_mDBE5641F713C2E902B94A498C9679283E34E1F4F(L_0, L_1, (&V_0), (&V_1), NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = __this->___m_Buffer;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_SetValue_m4150CB2DBA80CA291F04858ACEA4D314F2238671(L_3, (&V_1), (&___1_value), NULL);
		return;
	}

IL_0023:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_6 = ___0_key;
		InstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B L_7 = ___1_value;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_8 = __this->___m_AllocatorLabel;
		bool L_9;
		L_9 = UnsafeParallelHashMapBase_2_TryAdd_mCEB7C38C6618D7CC653575A7B3C28749D14BBB47(L_5, L_6, L_7, (bool)0, L_8, NULL);
		return;
	}
}
// Method Definition Index: 65335
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Dispose_m23EF8313DCAACEA7ABC25160CB7AC515E92D1106 (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_mDC6C1BD27BBB19A4492F7DF09F1AAFEE584C6CEE_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = __this->___m_AllocatorLabel;
		UnsafeParallelHashMapData_DeallocateHashMap_m8D0FEE08B8522A1D05FBFFBBB43CB203304F114F(L_1, L_2, NULL);
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		__this->___m_Buffer = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2_Dispose_m23EF8313DCAACEA7ABC25160CB7AC515E92D1106_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1>(__this);
	UnsafeParallelHashMap_2_Dispose_m23EF8313DCAACEA7ABC25160CB7AC515E92D1106(_thisAdjusted, method);
}
// Method Definition Index: 65336
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_m3C82ACBBF700AD995030419F6760E7E80C007020 (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_mDC6C1BD27BBB19A4492F7DF09F1AAFEE584C6CEE_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_1 = ___0_inputDeps;
		return L_1;
	}

IL_000a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = __this->___m_Buffer;
		(&V_0)->___Data = L_2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		(&V_0)->___Allocator = L_3;
		UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 L_4 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_5 = ___0_inputDeps;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6;
		L_6 = IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D(L_4, L_5, IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var);
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		__this->___m_Buffer = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_7;
		return L_6;
	}
}
IL2CPP_EXTERN_C  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_m3C82ACBBF700AD995030419F6760E7E80C007020_AdjustorThunk (RuntimeObject* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1>(__this);
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_Dispose_m3C82ACBBF700AD995030419F6760E7E80C007020(_thisAdjusted, ___0_inputDeps, method);
	return _returnValue;
}
// Method Definition Index: 65337
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 UnsafeParallelHashMap_2_GetKeyArray_mA425A9933AFCF40FF8380A1A2B88829FE7D87157 (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_3;
		L_3 = CollectionHelper_CreateNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m37DDAEDF9B9C55C4598679FA86B596B53362B6E3(L_1, L_2, 0, NULL);
		V_0 = L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = __this->___m_Buffer;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_5 = V_0;
		UnsafeParallelHashMapData_GetKeyArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mAB07175AB7AA23FBCB3571D1F770E945969E8567(L_4, L_5, NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 65338
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C UnsafeParallelHashMap_2_GetValueArray_m1E25B09D1F2A0A7B543845CB04F9D48916A5DA7F (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C L_3;
		L_3 = CollectionHelper_CreateNativeArray_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_mEB030D0A1BF6EA5944EEA67E4B82C0D33F24D14A(L_1, L_2, 0, NULL);
		V_0 = L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = __this->___m_Buffer;
		NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C L_5 = V_0;
		UnsafeParallelHashMapData_GetValueArray_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m9E1C36193953F8B34B0DAA5D4C5EE5B57D78B5AD(L_4, L_5, NULL);
		NativeArray_1_t8E042B4249B3126F27EE49887D2507798DC25F2C L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 65339
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeKeyValueArrays_2_t69F48B55F7CB9E53D8DA8AC22D78A9FE2C4ACCBB UnsafeParallelHashMap_2_GetKeyValueArrays_mCE3A4A99DC86452D83D7B0726DB7C9F940488A34 (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeKeyValueArrays_2_t69F48B55F7CB9E53D8DA8AC22D78A9FE2C4ACCBB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeKeyValueArrays_2__ctor_m69BBB9D2ABA59D59C898F1DCC90DA36B1F1985CE((&V_0), L_1, L_2, 0, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = __this->___m_Buffer;
		NativeKeyValueArrays_2_t69F48B55F7CB9E53D8DA8AC22D78A9FE2C4ACCBB L_4 = V_0;
		UnsafeParallelHashMapData_GetKeyValueArrays_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisInstanceHandle_tE8D892B001AFFDB8FA53EB19F2B356436AC36C3B_m25B1FF2DD44BBEC084000393CE299617A0AC1E75(L_3, L_4, NULL);
		NativeKeyValueArrays_2_t69F48B55F7CB9E53D8DA8AC22D78A9FE2C4ACCBB L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 65340
// Method Definition Index: 65341
// Method Definition Index: 65342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_ThrowKeyAlreadyAdded_m98061AE7EFD4CB4F216688E7FCB580F387A81700 (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_0 = ___0_key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = (*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_0);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3DCDCC60AD32F8AA5D68094D1F4DA6F372DFBE24)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}
}
// Method Definition Index: 65343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_ThrowAtMaxCapacity_mD7EB2A2A53586F235A6DB4D43250D79CE12641F1 (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0;
		L_0 = UnsafeParallelHashMap_2_get_Capacity_mA08983EA65A686081360DAD50622168BAEBDE235_inline(__this, NULL);
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = ((int32_t)1073741823);
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5;
		L_5 = UnsafeParallelHashMap_2_Count_mC52C7E882BB995E58D8A17E0931BDCC65ED197A9(__this, NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral58D215CC3FAC6F0C327469BF1C8E229807A83E55)), L_2, L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}
}
// Method Definition Index: 65344
// Method Definition Index: 65345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8229E3C7B8C1470346C947A6DF6DEB63ACEEBAB3 (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8229E3C7B8C1470346C947A6DF6DEB63ACEEBAB3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1>(__this);
	RuntimeObject* _returnValue;
	_returnValue = UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8229E3C7B8C1470346C947A6DF6DEB63ACEEBAB3(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 65346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m08748D620A7476F1F9D838AB0812DD47A643DD9B (UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m08748D620A7476F1F9D838AB0812DD47A643DD9B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<UnsafeParallelHashMap_2_tE11C289D18704E722388B5C5824407F3A40F2DE1>(__this);
	RuntimeObject* _returnValue;
	_returnValue = UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m08748D620A7476F1F9D838AB0812DD47A643DD9B(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 65321
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2__ctor_mFD36BE1A8334F001C6A8A0C259B552D9DB0D1381 (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		__this->___m_AllocatorLabel = L_0;
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = ___0_capacity;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_2, 2)),NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4 = ___1_allocator;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** L_5 = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926**)(&__this->___m_Buffer);
		UnsafeParallelHashMapData_AllocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFC6AE4DAC01DFDFF29C1E53E06F14FB0B0D66206(L_1, L_3, L_4, L_5, NULL);
		UnsafeParallelHashMap_2_Clear_m1DAE0CA8AFDA8249B076232F21A60CCF187C3821(__this, NULL);
		return;
	}
}
// Method Definition Index: 65322
// Method Definition Index: 65323
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsEmpty_m62937858EF04934EB839E6E4E867DFE024738FDC (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m9BB7B2A2215BCE85516249DCE41D07BA472C405A_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		bool L_2;
		L_2 = UnsafeParallelHashMapData_IsEmpty_m24404CDC35842532023F9D7094DB24BCBD57EC9D(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		return (bool)1;
	}
}
// Method Definition Index: 65324
// Method Definition Index: 65325
// Method Definition Index: 65326
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Capacity_m4885BC3787ED1F55316B065EAA470679154A4B8C (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_value;
		int32_t L_2 = ___0_value;
		int64_t L_3;
		L_3 = UnsafeParallelHashMapData_GetBucketSize_mBE376CBC384B796DE89740ECD5EA9C7F520D93D7(L_2, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4 = __this->___m_AllocatorLabel;
		UnsafeParallelHashMapData_ReallocateHashMap_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8CA3249E613156F5440F57EDC2841CC44B9CF479(L_0, L_1, L_3, L_4, NULL);
		return;
	}
}
// Method Definition Index: 65327
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Clear_m1DAE0CA8AFDA8249B076232F21A60CCF187C3821 (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		UnsafeParallelHashMapBase_2_Clear_m68DAC794E70E286BCED24B813A6E34DA156B3EBF(L_0, NULL);
		return;
	}
}
// Method Definition Index: 65328
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryAdd_mF52F7A5F569AD16C9E3A0EAA57F9D9F2E034A03C (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, int32_t ___1_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		int32_t L_2 = ___1_item;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_TryAdd_m59ED02439231DEE0DCE400A73C1FB60E18FF4A72(L_0, L_1, L_2, (bool)0, L_3, NULL);
		return L_4;
	}
}
// Method Definition Index: 65329
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Add_mD7CAE62A10DA9EA415B009A5D22EFED8D5DBA789 (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, int32_t ___1_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		int32_t L_2 = ___1_item;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_TryAdd_m59ED02439231DEE0DCE400A73C1FB60E18FF4A72(L_0, L_1, L_2, (bool)0, L_3, NULL);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = __this->___m_Buffer;
		NullCheck(L_5);
		int32_t L_6 = L_5->___keyCapacity;
		return;
	}

IL_0029:
	{
		return;
	}
}
// Method Definition Index: 65330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_Remove_m4442744A3368C9AAA1EACFF45A5D29A35FC1FD76 (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		int32_t L_2;
		L_2 = UnsafeParallelHashMapBase_2_Remove_m87F3D674497E6B1FD780E5CD8D1957E983303E4D(L_0, L_1, (bool)0, NULL);
		return (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
	}
}
// Method Definition Index: 65331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_TryGetValue_m3E07898BD2939D0A444FA5568C83953951A528DC (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, int32_t* ___1_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		int32_t* L_2 = ___1_item;
		bool L_3;
		L_3 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m154FD2D41A676C1A7CCB0E90D555F0094CFA346A(L_0, L_1, L_2, (&V_0), NULL);
		return L_3;
	}
}
// Method Definition Index: 65332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_ContainsKey_mB9E950D39F4178D63B6132301C95ED98A1015C30 (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m154FD2D41A676C1A7CCB0E90D555F0094CFA346A(L_0, L_1, (&V_0), (&V_1), NULL);
		return L_2;
	}
}
// Method Definition Index: 65333
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_get_Item_m56EF4FC114F302E27DC10B71E8326BCA7689E7A3 (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0 = ___0_key;
		bool L_1;
		L_1 = UnsafeParallelHashMap_2_TryGetValue_m3E07898BD2939D0A444FA5568C83953951A528DC(__this, L_0, (&V_0), NULL);
		int32_t L_2 = V_0;
		return L_2;
	}
}
// Method Definition Index: 65334
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_set_Item_m625917ECCB57BFE169C39D0ADC0CBC050BAC1D80 (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	NativeParallelMultiHashMapIterator_1_t02A0A6BFD4C1549B136A859CF17876B7F7CACFF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = ___0_key;
		bool L_2;
		L_2 = UnsafeParallelHashMapBase_2_TryGetFirstValueAtomic_m154FD2D41A676C1A7CCB0E90D555F0094CFA346A(L_0, L_1, (&V_0), (&V_1), NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = __this->___m_Buffer;
		bool L_4;
		L_4 = UnsafeParallelHashMapBase_2_SetValue_mE6364B8893EAC364F9528909649EE61B2B699344(L_3, (&V_1), (&___1_value), NULL);
		return;
	}

IL_0023:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = __this->___m_Buffer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_6 = ___0_key;
		int32_t L_7 = ___1_value;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_8 = __this->___m_AllocatorLabel;
		bool L_9;
		L_9 = UnsafeParallelHashMapBase_2_TryAdd_m59ED02439231DEE0DCE400A73C1FB60E18FF4A72(L_5, L_6, L_7, (bool)0, L_8, NULL);
		return;
	}
}
// Method Definition Index: 65335
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_Dispose_m6235264FEA9102EDF3320D7E2E9168846DAA3215 (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m9BB7B2A2215BCE85516249DCE41D07BA472C405A_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = __this->___m_AllocatorLabel;
		UnsafeParallelHashMapData_DeallocateHashMap_m8D0FEE08B8522A1D05FBFFBBB43CB203304F114F(L_1, L_2, NULL);
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		__this->___m_Buffer = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_3;
		return;
	}
}
IL2CPP_EXTERN_C  void UnsafeParallelHashMap_2_Dispose_m6235264FEA9102EDF3320D7E2E9168846DAA3215_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A>(__this);
	UnsafeParallelHashMap_2_Dispose_m6235264FEA9102EDF3320D7E2E9168846DAA3215(_thisAdjusted, method);
}
// Method Definition Index: 65336
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_mB837E430E580E69E1751C2F1BB9600ABB0D76451 (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = UnsafeParallelHashMap_2_get_IsCreated_m9BB7B2A2215BCE85516249DCE41D07BA472C405A_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_1 = ___0_inputDeps;
		return L_1;
	}

IL_000a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = __this->___m_Buffer;
		(&V_0)->___Data = L_2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = __this->___m_AllocatorLabel;
		(&V_0)->___Allocator = L_3;
		UnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26 L_4 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_5 = ___0_inputDeps;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6;
		L_6 = IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D(L_4, L_5, IJobExtensions_Schedule_TisUnsafeParallelHashMapDisposeJob_t83E003B60C17F8843C87C56E647F10210D8A4B26_m274F65FB4996C871AE87F9325D8B90B44D43456D_RuntimeMethod_var);
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		__this->___m_Buffer = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_7;
		return L_6;
	}
}
IL2CPP_EXTERN_C  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeParallelHashMap_2_Dispose_mB837E430E580E69E1751C2F1BB9600ABB0D76451_AdjustorThunk (RuntimeObject* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_inputDeps, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A>(__this);
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 _returnValue;
	_returnValue = UnsafeParallelHashMap_2_Dispose_mB837E430E580E69E1751C2F1BB9600ABB0D76451(_thisAdjusted, ___0_inputDeps, method);
	return _returnValue;
}
// Method Definition Index: 65337
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 UnsafeParallelHashMap_2_GetKeyArray_mD60D46F3D00E475B63838421567962A0FC8114A8 (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_3;
		L_3 = CollectionHelper_CreateNativeArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m37DDAEDF9B9C55C4598679FA86B596B53362B6E3(L_1, L_2, 0, NULL);
		V_0 = L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = __this->___m_Buffer;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_5 = V_0;
		UnsafeParallelHashMapData_GetKeyArray_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mAB07175AB7AA23FBCB3571D1F770E945969E8567(L_4, L_5, NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 65338
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C UnsafeParallelHashMap_2_GetValueArray_mF185BE3C4CA3BF55B8B22ADD7CF286A91391CFB6 (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_3;
		L_3 = CollectionHelper_CreateNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m53D2BC04C5127B3B1163A395E36386918CACFE4B(L_1, L_2, 0, NULL);
		V_0 = L_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_4 = __this->___m_Buffer;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_5 = V_0;
		UnsafeParallelHashMapData_GetValueArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4769F528CC3AB04D768F83B2A2A016AE29C5F87E(L_4, L_5, NULL);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 65339
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeKeyValueArrays_2_tCBCD37F108CC29AF7DD444E7DADEBD5DA915330C UnsafeParallelHashMap_2_GetKeyValueArrays_m4AAD6373CCD19952E7DD288653A0DB274A4E336E (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	NativeKeyValueArrays_2_tCBCD37F108CC29AF7DD444E7DADEBD5DA915330C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t L_1;
		L_1 = UnsafeParallelHashMapData_GetCount_mF10300D8E62B36979B41F3CBE396D96721931D7B(L_0, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___0_allocator;
		NativeKeyValueArrays_2__ctor_m14A338B60E598828D30E9F1DE0837E3EF5888DA7((&V_0), L_1, L_2, 0, NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_3 = __this->___m_Buffer;
		NativeKeyValueArrays_2_tCBCD37F108CC29AF7DD444E7DADEBD5DA915330C L_4 = V_0;
		UnsafeParallelHashMapData_GetKeyValueArrays_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3DB176E612D3F9E0446BCC0B1803F073E38F8254(L_3, L_4, NULL);
		NativeKeyValueArrays_2_tCBCD37F108CC29AF7DD444E7DADEBD5DA915330C L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 65340
// Method Definition Index: 65341
// Method Definition Index: 65342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_ThrowKeyAlreadyAdded_m62450D31D912E4302257305EADBC70910037B479 (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_0 = ___0_key;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_1 = (*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_0);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3DCDCC60AD32F8AA5D68094D1F4DA6F372DFBE24)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}
}
// Method Definition Index: 65343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMap_2_ThrowAtMaxCapacity_m99329DBD4B58C81C4F53E28FFA06695D77573498 (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0;
		L_0 = UnsafeParallelHashMap_2_get_Capacity_m60F3416836EBF22BF1FD580E8011D0CCFE1E7827_inline(__this, NULL);
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = ((int32_t)1073741823);
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5;
		L_5 = UnsafeParallelHashMap_2_Count_mB5E48E57CDE7A2410648C9A893346203A811BF26(__this, NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral58D215CC3FAC6F0C327469BF1C8E229807A83E55)), L_2, L_4, L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}
}
// Method Definition Index: 65344
// Method Definition Index: 65345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m500EB3525F7CC1238181A285AD05D81BF2A2D67B (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  RuntimeObject* UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m500EB3525F7CC1238181A285AD05D81BF2A2D67B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A>(__this);
	RuntimeObject* _returnValue;
	_returnValue = UnsafeParallelHashMap_2_System_Collections_Generic_IEnumerableU3CUnity_Collections_LowLevel_Unsafe_KeyValueU3CTKeyU2CTValueU3EU3E_GetEnumerator_m500EB3525F7CC1238181A285AD05D81BF2A2D67B(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 65346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m289E5B0C921B8957B2B748B123F0D52BA4534B63 (UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  RuntimeObject* UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m289E5B0C921B8957B2B748B123F0D52BA4534B63_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<UnsafeParallelHashMap_2_tC1421BF39BF51E7B703FB41A08A2D65688E0EB8A>(__this);
	RuntimeObject* _returnValue;
	_returnValue = UnsafeParallelHashMap_2_System_Collections_IEnumerable_GetEnumerator_m289E5B0C921B8957B2B748B123F0D52BA4534B63(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 85951
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_y;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_x;
		return L_3;
	}
}
// Method Definition Index: 41392
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m0E708F519A1821659A5DB22A6551BF3AD6584AF2_inline (void* ___0_destination, int32_t ___1_index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m9C0FADCA718C9341E229CEE17C8FE4855AC72880_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
// Method Definition Index: 41392
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisMeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_m378298AA06643C684B01DE5BAD5877C2D6001F45_inline (void* ___0_destination, int32_t ___1_index, MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisMeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_m6CD1CF498DA3ED862B05EC97BA62DCA6066D8FB4_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
// Method Definition Index: 41390
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 UnsafeUtility_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mCA80AB19D82B40C3B0B1BC9A4BE2F87BAFD9BE64_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mDC8A7125EE74C940B9F940440D412BA4B3A42575_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 41390
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 UnsafeUtility_ReadArrayElement_TisMeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_mAEB04091BED5994494AB1521F1CA283C9A55DA84_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisMeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_m11FC059EDD11872BC9AA0E4A69DE23575103FCB9_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 41392
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750_mC6886C418E413B4D0D54190150D16F8A609FE34B_inline (void* ___0_destination, int32_t ___1_index, UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisUnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750_m65C4B6E992246FAE83AA242138AF39C72B71BF01_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
// Method Definition Index: 41390
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 UnsafeUtility_ReadArrayElement_TisUnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750_m6C484995D5C95208A4EB1F0C7664EC42A74DE670_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisUnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750_m25474EB27C8162D7A4BDF444168565682AC81612_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 41392
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m9F2800AFAC18DA2E9DB4352D9A82AC95FA0995FA_inline (void* ___0_destination, int32_t ___1_index, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m7886C76825D19244F9DB2ACC29DF1BAF7F3A0C0B_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
// Method Definition Index: 41392
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m60CD2C2DE2B559F255B8BEA36B0554E698FF9651_inline (void* ___0_destination, int32_t ___1_index, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m19B4012CB1284CF84BD2F435B8F719A3209957A8_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
// Method Definition Index: 41390
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB UnsafeUtility_ReadArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m7AA25F6024B181108CC3A96104D0E5ABCED519C6_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m0C048047EB886D78B484166DCB014DF594B085BD_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 41390
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 UnsafeUtility_ReadArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m80C61348EC8F9D4F73F0AAA4A69A028E6D599DCD_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m986ED2902CE4A51ABE99D9309F33BEE50D219A80_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 41392
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_mED1E1443D3B6D2E654E096AA0A05A54E6B9BD985_inline (void* ___0_destination, int32_t ___1_index, GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_m891550514A2106C446148AA51E67D17649CF30DB_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
// Method Definition Index: 41390
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB UnsafeUtility_ReadArrayElement_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_m77A0F5FAAAA9E070343AB7A018FCB34FD1698A06_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_m4E657D67A0253D6AA48A0AF0834D8B8B4D986C48_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 41392
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6CE8AF6F42FA98657985C680DB85747DAC856E2F_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
// Method Definition Index: 41392
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisGPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669_m203EA1B05ACF18717ECA21DC6B156B851A3DF3A2_inline (void* ___0_destination, int32_t ___1_index, GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisGPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669_m6250718DA85CD6D73D6A530FDBABAA5BEC80FBEC_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
// Method Definition Index: 41390
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0B7B877C8F00DCC1C95D7124B3B0D83C6D492345_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 41390
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 UnsafeUtility_ReadArrayElement_TisGPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669_m361058B0E058D8D5D3AC6C6C015700E6018A671C_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisGPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669_m0863D7A09467FAC3CAE8A852D088E9E980F02756_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 41392
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisAnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46_m9FDDC2380EF57AE03BE92D8AC12841CAADE0EFDB_inline (void* ___0_destination, int32_t ___1_index, AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisAnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46_m7BCF5EFEDF647DC9596F1373B28B3C221D5822C2_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
// Method Definition Index: 41390
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 UnsafeUtility_ReadArrayElement_TisAnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46_m8460969BD9998B0DFF865186874B2414FEED12C8_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisAnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46_mFD8E968B6D42F987231C2D4D4433BC15E231FB83_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 41392
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_m6E993EC5F50FC82EDD84AF158A50E9FF2BAE2705_inline (void* ___0_destination, int32_t ___1_index, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_m41C04F72F56004722939AD5969E0C101465ACEEA_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
// Method Definition Index: 41390
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C UnsafeUtility_ReadArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_mFDF2C4591B5F4C0AF4424ED681225F9CF100C5BB_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_mC6AFEEF7260AB50C6AC741C83424DB3F59ECA569_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 41392
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m839FEB3192BEC0090FBA73A11E371E1A01C13ADF_inline (void* ___0_destination, int32_t ___1_index, uint32_t ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m2A3A6B90150B69BBDEE5319C3CE02AF8B872B64B_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
// Method Definition Index: 41392
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisGeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271_mD92564ABD442EBF5CD99E2589172450FD38429FB_inline (void* ___0_destination, int32_t ___1_index, GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 L_2 = ___2_value;
		UnsafeUtilityInternal_WriteArrayElement_TisGeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271_mC894FFD95AE5BB522BB5DF619885A81FCD2618BF_inline(L_0, L_1, L_2, NULL);
		return;
	}
}
// Method Definition Index: 41390
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t UnsafeUtility_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mDA80BAFF55EA77496672B3B5B3804B55274B7E95_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mAA4A4AC11C7C0784A0566FAE86EFBAD08CF4126D_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 41390
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 UnsafeUtility_ReadArrayElement_TisGeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271_m2A66DBE83F9498AC60B42C9A0B1C7E4401B4CDCC_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 L_2;
		L_2 = UnsafeUtilityInternal_ReadArrayElement_TisGeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271_m3358302574C84901BFC17BF5A4E83AD5C5475245_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 65322
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeParallelHashMap_2_get_IsCreated_mC6B0DE6A5C6E890A9141CCC5B8EC55384EE01AB8_fshared_inline (UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 65325
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeParallelHashMap_2_get_Capacity_mD81BA6EE87A322AAE69C06BAB81E322511542957_fshared_inline (UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		NullCheck(L_0);
		int32_t L_1 = L_0->___keyCapacity;
		return L_1;
	}
}
// Method Definition Index: 87749
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m9C0FADCA718C9341E229CEE17C8FE4855AC72880_inline (void* ___0_destination, int32_t ___1_index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_6 = ___2_value;
		*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
// Method Definition Index: 87749
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisMeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_m6CD1CF498DA3ED862B05EC97BA62DCA6066D8FB4_inline (void* ___0_destination, int32_t ___1_index, MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 L_6 = ___2_value;
		*(MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
// Method Definition Index: 87747
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 UnsafeUtilityInternal_ReadArrayElement_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_mDC8A7125EE74C940B9F940440D412BA4B3A42575_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_6 = (*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
// Method Definition Index: 87747
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 UnsafeUtilityInternal_ReadArrayElement_TisMeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254_m11FC059EDD11872BC9AA0E4A69DE23575103FCB9_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254 L_6 = (*(MeshInfo_tCFDEE32B5DCE649CF99B2376DAAC45BBB9C34254*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
// Method Definition Index: 87749
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750_m65C4B6E992246FAE83AA242138AF39C72B71BF01_inline (void* ___0_destination, int32_t ___1_index, UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 L_6 = ___2_value;
		*(UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
// Method Definition Index: 87747
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 UnsafeUtilityInternal_ReadArrayElement_TisUnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750_m25474EB27C8162D7A4BDF444168565682AC81612_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750 L_6 = (*(UnsafePerCameraInstanceData_tFE00A87578E2CC5C4A5CD6F93975B35DE6D78750*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
// Method Definition Index: 87749
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m7886C76825D19244F9DB2ACC29DF1BAF7F3A0C0B_inline (void* ___0_destination, int32_t ___1_index, GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_6 = ___2_value;
		*(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
// Method Definition Index: 87749
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m19B4012CB1284CF84BD2F435B8F719A3209957A8_inline (void* ___0_destination, int32_t ___1_index, BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 L_6 = ___2_value;
		*(BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
// Method Definition Index: 87747
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB UnsafeUtilityInternal_ReadArrayElement_TisGPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB_m0C048047EB886D78B484166DCB014DF594B085BD_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB L_6 = (*(GPUArchetypeHandle_t4B8DB32EBCD8FFA94BCD4FD28FEC39E4A42054EB*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
// Method Definition Index: 87747
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 UnsafeUtilityInternal_ReadArrayElement_TisBatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770_m986ED2902CE4A51ABE99D9309F33BEE50D219A80_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 L_6 = (*(BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
// Method Definition Index: 87749
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_m891550514A2106C446148AA51E67D17649CF30DB_inline (void* ___0_destination, int32_t ___1_index, GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB L_6 = ___2_value;
		*(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
// Method Definition Index: 87747
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB UnsafeUtilityInternal_ReadArrayElement_TisGPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB_m4E657D67A0253D6AA48A0AF0834D8B8B4D986C48_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB L_6 = (*(GPUComponentSet_tD679169DC8F46CC38BDB81FA45D750A6DECA92FB*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
// Method Definition Index: 87749
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6CE8AF6F42FA98657985C680DB85747DAC856E2F_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int32_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = ___2_value;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
// Method Definition Index: 87749
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisGPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669_m6250718DA85CD6D73D6A530FDBABAA5BEC80FBEC_inline (void* ___0_destination, int32_t ___1_index, GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 L_6 = ___2_value;
		*(GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
// Method Definition Index: 87747
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0B7B877C8F00DCC1C95D7124B3B0D83C6D492345_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(int32_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		int32_t L_6 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
// Method Definition Index: 87747
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 UnsafeUtilityInternal_ReadArrayElement_TisGPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669_m0863D7A09467FAC3CAE8A852D088E9E980F02756_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669 L_6 = (*(GPUComponentHandle_t619739F7572042FBAC8209B8B39DE768B62D7669*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
// Method Definition Index: 87749
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisAnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46_m7BCF5EFEDF647DC9596F1373B28B3C221D5822C2_inline (void* ___0_destination, int32_t ___1_index, AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 L_6 = ___2_value;
		*(AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
// Method Definition Index: 87747
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 UnsafeUtilityInternal_ReadArrayElement_TisAnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46_mFD8E968B6D42F987231C2D4D4433BC15E231FB83_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46 L_6 = (*(AnimatedFadeData_t965D6428A80522AB9EDFDF2671880282159C5E46*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
// Method Definition Index: 87749
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_m41C04F72F56004722939AD5969E0C101465ACEEA_inline (void* ___0_destination, int32_t ___1_index, RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_6 = ___2_value;
		*(RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
// Method Definition Index: 87747
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C UnsafeUtilityInternal_ReadArrayElement_TisRangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C_mC6AFEEF7260AB50C6AC741C83424DB3F59ECA569_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C L_6 = (*(RangeKey_t6D4869B364ADC52DCAE541898513EF33CEE8878C*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
// Method Definition Index: 87749
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m2A3A6B90150B69BBDEE5319C3CE02AF8B872B64B_inline (void* ___0_destination, int32_t ___1_index, uint32_t ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint32_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint32_t L_6 = ___2_value;
		*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
// Method Definition Index: 87749
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisGeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271_mC894FFD95AE5BB522BB5DF619885A81FCD2618BF_inline (void* ___0_destination, int32_t ___1_index, GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 ___2_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 L_6 = ___2_value;
		*(GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)) = L_6;
		return;
	}
}
// Method Definition Index: 87747
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t UnsafeUtilityInternal_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mAA4A4AC11C7C0784A0566FAE86EFBAD08CF4126D_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(uint32_t);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		uint32_t L_6 = (*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
// Method Definition Index: 87747
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 UnsafeUtilityInternal_ReadArrayElement_TisGeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271_m3358302574C84901BFC17BF5A4E83AD5C5475245_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = sizeof(GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271 L_6 = (*(GeometryPoolHandle_t7EF37F11E23B05A26C1F72855D269B7A772B2271*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
		return L_6;
	}
}
