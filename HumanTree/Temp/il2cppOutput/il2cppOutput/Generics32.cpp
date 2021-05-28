#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct VirtFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericVirtFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericVirtFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericInterfaceFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};

// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t707982BD768B18C51D263C759F33BCDBDFA44901;
// UniRx.IObservable`1<System.Object>
struct IObservable_1_t89FB12F92F4ACE4F11F1B62F463BF18222EB9847;
// UniRx.IObserver`1<System.Collections.Generic.IList`1<System.Object>>
struct IObserver_1_tF97446A8AAFB19EEDD3006E7E688A1487833FE79;
// UniRx.IObserver`1<System.Object>
struct IObserver_1_t01C59A8D0621BD4577300890635C1036A6562D7B;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// UniRx.Operators.ZipObservable`1/Zip<System.Object>
struct Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72;
// UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t29F08489999A6A3B3C7A5D088D83B687439565EC;
// UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t0BA95E174034BF81AEBB96CE42C27C1A75805B24;
// UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_4_t505910809D87AAC499E7BA3A2825D94CB6AB211B;
// UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_5_tF2AEB30C5ED3B56CF895E857FAA7C64B512BB476;
// UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_6_tE402A210998EFF5E6094C07B9A537A45986F3709;
// UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_7_tABC414FCC717501CBEED1ADE34E677D99B8DC3EC;
// UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_8_tE636EE02A54058933CDDB715EAE402AD62776D8A;
// UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>
struct ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA;
// UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>
struct ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191;
// UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_t20F1AB22C93911EA87F0EC37F07CC3E5B998327F;
// UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_t8B2237E24744E77887FB25D402D547CF534EBA80;
// UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_tDEEB4918A762109EF19D972E2F30FFC4B5C58AC2;
// UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_tA523166BE7EABB4D4B6CA83AB5B9340210892DE9;
// UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_t47889B985CBFCE2D038A6C0CB8E42DE8C062E068;
// UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_4_t068AA5074A55A9170C834EA64F905EC3D61E11CD;
// UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_5_t034B18D7B7806B768547ED63ED6523F49D3EE0B2;
// UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_6_tF57A196B92A803627A820609E6441E884CEC0366;
// UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_7_t0D0C162176AFF4EA815561A183E0CADD1B8C5B86;
// UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_8_tEB12C1F53C18B98647F21300DA101C6A90F29305;
// UniRx.Operators.ZipLatestObservable`1<System.Object>
struct ZipLatestObservable_1_t31B47FEB89C2F944C298FC3A1F3C781B58B81D47;
// UniRx.Operators.ZipLatestObservable`3<System.Object,System.Object,System.Object>
struct ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C;
// UniRx.Operators.ZipLatestObservable`4<System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148;
// UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69;
// UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E;
// UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88;
// UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C;
// UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>
struct ZipLatestObserver_tB0D86E749479A08029AA6AF4C82BFE4B9597A339;
// UniRx.Operators.ZipLatestObserver`1<System.Object>
struct ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6;
// UniRx.Operators.ZipObservable`1<System.Object>
struct ZipObservable_1_t4F142AABEA860C7E65B5DD043E61D5C70E8019EF;
// UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>
struct ZipObservable_3_t19F669AD1C9E142DFCD663BFB8D4681B41891909;
// UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_4_t11DF5FB8681FDEFBF19B4D1632B8FB876B4F4AC8;
// UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C;
// UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF;
// UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A;
// UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF;
// UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>
struct ZipObserver_tAA3DAABF90D69ED4D8758F687F57DB1479485513;
// UniRx.Operators.ZipObserver`1<System.Object>
struct ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3;
// UniRx.IObservable`1<System.Object>[]
struct IObservable_1U5BU5D_tA28A0BBFB2F67C11476091A974CA931722B8EAD8;
// System.Collections.Generic.Queue`1<System.Object>[]
struct Queue_1U5BU5D_t43C618669FBD9DCD6C5D7E717FB9A5B70ED49A40;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Collections.ICollection[]
struct ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8;
// System.IDisposable[]
struct IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UniRx.ICancelable
struct ICancelable_tCC5A89ACD4A38F63CF879500DF238888BEBC9ABD;
// System.Collections.ICollection
struct ICollection_tC1E1DED86C0A66845675392606B302452210D5DA;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IDisposable
struct IDisposable_t099785737FC6A1E3699919A94109383715A8D807;
// UniRx.Operators.IZipLatestObservable
struct IZipLatestObservable_t5E3F673DB7EC30C387DEC8DBCCE89423CEE030D2;
// UniRx.Operators.IZipObservable
struct IZipObservable_tB3EFBBF63801912415385746DDC53B35491B8702;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Disposable_tD750422635DCFBAF8826C1A08801916FA5798D8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IZipLatestObservable_t5E3F673DB7EC30C387DEC8DBCCE89423CEE030D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IZipObservable_tB3EFBBF63801912415385746DDC53B35491B8702_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IObservable_1U5BU5D_tA28A0BBFB2F67C11476091A974CA931722B8EAD8;
struct Queue_1U5BU5D_t43C618669FBD9DCD6C5D7E717FB9A5B70ED49A40;
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8;
struct IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// UniRx.Operators.ZipLatestObservable`3/ZipLatest/LeftObserver<System.Object,System.Object,System.Object>
struct LeftObserver_tD24FEF33A76C1BA37B81271C64171AB17ED175C2  : public RuntimeObject
{
public:
	// UniRx.Operators.ZipLatestObservable`3/ZipLatest<TLeft,TRight,TResult> UniRx.Operators.ZipLatestObservable`3/ZipLatest/LeftObserver::parent
	ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191 * ___parent_0;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(LeftObserver_tD24FEF33A76C1BA37B81271C64171AB17ED175C2, ___parent_0)); }
	inline ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191 * get_parent_0() const { return ___parent_0; }
	inline ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UniRx.Operators.OperatorObservableBase`1<System.Collections.Generic.IList`1<System.Object>>
struct OperatorObservableBase_1_tE47C85622BC76B48DF7E360F0933AE98ECBF76DF  : public RuntimeObject
{
public:
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;

public:
	inline static int32_t get_offset_of_isRequiredSubscribeOnCurrentThread_0() { return static_cast<int32_t>(offsetof(OperatorObservableBase_1_tE47C85622BC76B48DF7E360F0933AE98ECBF76DF, ___isRequiredSubscribeOnCurrentThread_0)); }
	inline bool get_isRequiredSubscribeOnCurrentThread_0() const { return ___isRequiredSubscribeOnCurrentThread_0; }
	inline bool* get_address_of_isRequiredSubscribeOnCurrentThread_0() { return &___isRequiredSubscribeOnCurrentThread_0; }
	inline void set_isRequiredSubscribeOnCurrentThread_0(bool value)
	{
		___isRequiredSubscribeOnCurrentThread_0 = value;
	}
};


// UniRx.Operators.OperatorObservableBase`1<System.Object>
struct OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70  : public RuntimeObject
{
public:
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;

public:
	inline static int32_t get_offset_of_isRequiredSubscribeOnCurrentThread_0() { return static_cast<int32_t>(offsetof(OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70, ___isRequiredSubscribeOnCurrentThread_0)); }
	inline bool get_isRequiredSubscribeOnCurrentThread_0() const { return ___isRequiredSubscribeOnCurrentThread_0; }
	inline bool* get_address_of_isRequiredSubscribeOnCurrentThread_0() { return &___isRequiredSubscribeOnCurrentThread_0; }
	inline void set_isRequiredSubscribeOnCurrentThread_0(bool value)
	{
		___isRequiredSubscribeOnCurrentThread_0 = value;
	}
};


// UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>
struct OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863  : public RuntimeObject
{
public:
	// UniRx.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;

public:
	inline static int32_t get_offset_of_observer_0() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863, ___observer_0)); }
	inline RuntimeObject* get_observer_0() const { return ___observer_0; }
	inline RuntimeObject** get_address_of_observer_0() { return &___observer_0; }
	inline void set_observer_0(RuntimeObject* value)
	{
		___observer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_0), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_1() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863, ___cancel_1)); }
	inline RuntimeObject* get_cancel_1() const { return ___cancel_1; }
	inline RuntimeObject** get_address_of_cancel_1() { return &___cancel_1; }
	inline void set_cancel_1(RuntimeObject* value)
	{
		___cancel_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_1), (void*)value);
	}
};


// UniRx.Operators.OperatorObserverBase`2<System.Object,System.Object>
struct OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C  : public RuntimeObject
{
public:
	// UniRx.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;

public:
	inline static int32_t get_offset_of_observer_0() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C, ___observer_0)); }
	inline RuntimeObject* get_observer_0() const { return ___observer_0; }
	inline RuntimeObject** get_address_of_observer_0() { return &___observer_0; }
	inline void set_observer_0(RuntimeObject* value)
	{
		___observer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_0), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_1() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C, ___cancel_1)); }
	inline RuntimeObject* get_cancel_1() const { return ___cancel_1; }
	inline RuntimeObject** get_address_of_cancel_1() { return &___cancel_1; }
	inline void set_cancel_1(RuntimeObject* value)
	{
		___cancel_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_1), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// UniRx.Operators.ZipLatestObservable`3/ZipLatest/RightObserver<System.Object,System.Object,System.Object>
struct RightObserver_t65A0C2DAFBE60A6A4927E7F3AAC9AB21A49EC0F6  : public RuntimeObject
{
public:
	// UniRx.Operators.ZipLatestObservable`3/ZipLatest<TLeft,TRight,TResult> UniRx.Operators.ZipLatestObservable`3/ZipLatest/RightObserver::parent
	ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191 * ___parent_0;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(RightObserver_t65A0C2DAFBE60A6A4927E7F3AAC9AB21A49EC0F6, ___parent_0)); }
	inline ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191 * get_parent_0() const { return ___parent_0; }
	inline ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}
};


// UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>
struct ZipLatestObserver_tB0D86E749479A08029AA6AF4C82BFE4B9597A339  : public RuntimeObject
{
public:
	// UniRx.Operators.ZipLatestObservable`1/ZipLatest<T> UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver::parent
	ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA * ___parent_0;
	// System.Int32 UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver::index
	int32_t ___index_1;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(ZipLatestObserver_tB0D86E749479A08029AA6AF4C82BFE4B9597A339, ___parent_0)); }
	inline ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA * get_parent_0() const { return ___parent_0; }
	inline ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(ZipLatestObserver_tB0D86E749479A08029AA6AF4C82BFE4B9597A339, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}
};


// UniRx.Operators.ZipLatestObserver`1<System.Object>
struct ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6  : public RuntimeObject
{
public:
	// System.Object UniRx.Operators.ZipLatestObserver`1::gate
	RuntimeObject * ___gate_0;
	// UniRx.Operators.IZipLatestObservable UniRx.Operators.ZipLatestObserver`1::parent
	RuntimeObject* ___parent_1;
	// System.Int32 UniRx.Operators.ZipLatestObserver`1::index
	int32_t ___index_2;
	// T UniRx.Operators.ZipLatestObserver`1::value
	RuntimeObject * ___value_3;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_0), (void*)value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6, ___parent_1)); }
	inline RuntimeObject* get_parent_1() const { return ___parent_1; }
	inline RuntimeObject** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(RuntimeObject* value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6, ___value_3)); }
	inline RuntimeObject * get_value_3() const { return ___value_3; }
	inline RuntimeObject ** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(RuntimeObject * value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_3), (void*)value);
	}
};


// UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>
struct ZipObserver_tAA3DAABF90D69ED4D8758F687F57DB1479485513  : public RuntimeObject
{
public:
	// UniRx.Operators.ZipObservable`1/Zip<T> UniRx.Operators.ZipObservable`1/Zip/ZipObserver::parent
	Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 * ___parent_0;
	// System.Int32 UniRx.Operators.ZipObservable`1/Zip/ZipObserver::index
	int32_t ___index_1;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(ZipObserver_tAA3DAABF90D69ED4D8758F687F57DB1479485513, ___parent_0)); }
	inline Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 * get_parent_0() const { return ___parent_0; }
	inline Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(ZipObserver_tAA3DAABF90D69ED4D8758F687F57DB1479485513, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}
};


// UniRx.Operators.ZipObserver`1<System.Object>
struct ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3  : public RuntimeObject
{
public:
	// System.Object UniRx.Operators.ZipObserver`1::gate
	RuntimeObject * ___gate_0;
	// UniRx.Operators.IZipObservable UniRx.Operators.ZipObserver`1::parent
	RuntimeObject* ___parent_1;
	// System.Int32 UniRx.Operators.ZipObserver`1::index
	int32_t ___index_2;
	// System.Collections.Generic.Queue`1<T> UniRx.Operators.ZipObserver`1::queue
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___queue_3;

public:
	inline static int32_t get_offset_of_gate_0() { return static_cast<int32_t>(offsetof(ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3, ___gate_0)); }
	inline RuntimeObject * get_gate_0() const { return ___gate_0; }
	inline RuntimeObject ** get_address_of_gate_0() { return &___gate_0; }
	inline void set_gate_0(RuntimeObject * value)
	{
		___gate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_0), (void*)value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3, ___parent_1)); }
	inline RuntimeObject* get_parent_1() const { return ___parent_1; }
	inline RuntimeObject** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(RuntimeObject* value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_1), (void*)value);
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_queue_3() { return static_cast<int32_t>(offsetof(ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3, ___queue_3)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_queue_3() const { return ___queue_3; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_queue_3() { return &___queue_3; }
	inline void set_queue_3(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___queue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queue_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UniRx.Operators.NthZipLatestObserverBase`1<System.Object>
struct NthZipLatestObserverBase_1_t6F813A271D5EBE9494AD05FD5062388354B6AD75  : public OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C
{
public:
	// System.Int32 UniRx.Operators.NthZipLatestObserverBase`1::length
	int32_t ___length_2;
	// System.Boolean[] UniRx.Operators.NthZipLatestObserverBase`1::isStarted
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___isStarted_3;
	// System.Boolean[] UniRx.Operators.NthZipLatestObserverBase`1::isCompleted
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___isCompleted_4;

public:
	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(NthZipLatestObserverBase_1_t6F813A271D5EBE9494AD05FD5062388354B6AD75, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}

	inline static int32_t get_offset_of_isStarted_3() { return static_cast<int32_t>(offsetof(NthZipLatestObserverBase_1_t6F813A271D5EBE9494AD05FD5062388354B6AD75, ___isStarted_3)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_isStarted_3() const { return ___isStarted_3; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_isStarted_3() { return &___isStarted_3; }
	inline void set_isStarted_3(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___isStarted_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isStarted_3), (void*)value);
	}

	inline static int32_t get_offset_of_isCompleted_4() { return static_cast<int32_t>(offsetof(NthZipLatestObserverBase_1_t6F813A271D5EBE9494AD05FD5062388354B6AD75, ___isCompleted_4)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_isCompleted_4() const { return ___isCompleted_4; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_isCompleted_4() { return &___isCompleted_4; }
	inline void set_isCompleted_4(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___isCompleted_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isCompleted_4), (void*)value);
	}
};


// UniRx.Operators.NthZipObserverBase`1<System.Object>
struct NthZipObserverBase_1_t0EDC60BC1843F8758B2334391375B16FD1F6CFD1  : public OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C
{
public:
	// System.Collections.ICollection[] UniRx.Operators.NthZipObserverBase`1::queues
	ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8* ___queues_2;
	// System.Boolean[] UniRx.Operators.NthZipObserverBase`1::isDone
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___isDone_3;
	// System.Int32 UniRx.Operators.NthZipObserverBase`1::length
	int32_t ___length_4;

public:
	inline static int32_t get_offset_of_queues_2() { return static_cast<int32_t>(offsetof(NthZipObserverBase_1_t0EDC60BC1843F8758B2334391375B16FD1F6CFD1, ___queues_2)); }
	inline ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8* get_queues_2() const { return ___queues_2; }
	inline ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8** get_address_of_queues_2() { return &___queues_2; }
	inline void set_queues_2(ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8* value)
	{
		___queues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queues_2), (void*)value);
	}

	inline static int32_t get_offset_of_isDone_3() { return static_cast<int32_t>(offsetof(NthZipObserverBase_1_t0EDC60BC1843F8758B2334391375B16FD1F6CFD1, ___isDone_3)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_isDone_3() const { return ___isDone_3; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_isDone_3() { return &___isDone_3; }
	inline void set_isDone_3(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___isDone_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isDone_3), (void*)value);
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(NthZipObserverBase_1_t0EDC60BC1843F8758B2334391375B16FD1F6CFD1, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}
};


// UniRx.Operators.ZipObservable`1/Zip<System.Object>
struct Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72  : public OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863
{
public:
	// UniRx.Operators.ZipObservable`1<T> UniRx.Operators.ZipObservable`1/Zip::parent
	ZipObservable_1_t4F142AABEA860C7E65B5DD043E61D5C70E8019EF * ___parent_2;
	// System.Object UniRx.Operators.ZipObservable`1/Zip::gate
	RuntimeObject * ___gate_3;
	// System.Collections.Generic.Queue`1<T>[] UniRx.Operators.ZipObservable`1/Zip::queues
	Queue_1U5BU5D_t43C618669FBD9DCD6C5D7E717FB9A5B70ED49A40* ___queues_4;
	// System.Boolean[] UniRx.Operators.ZipObservable`1/Zip::isDone
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___isDone_5;
	// System.Int32 UniRx.Operators.ZipObservable`1/Zip::length
	int32_t ___length_6;

public:
	inline static int32_t get_offset_of_parent_2() { return static_cast<int32_t>(offsetof(Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72, ___parent_2)); }
	inline ZipObservable_1_t4F142AABEA860C7E65B5DD043E61D5C70E8019EF * get_parent_2() const { return ___parent_2; }
	inline ZipObservable_1_t4F142AABEA860C7E65B5DD043E61D5C70E8019EF ** get_address_of_parent_2() { return &___parent_2; }
	inline void set_parent_2(ZipObservable_1_t4F142AABEA860C7E65B5DD043E61D5C70E8019EF * value)
	{
		___parent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_2), (void*)value);
	}

	inline static int32_t get_offset_of_gate_3() { return static_cast<int32_t>(offsetof(Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72, ___gate_3)); }
	inline RuntimeObject * get_gate_3() const { return ___gate_3; }
	inline RuntimeObject ** get_address_of_gate_3() { return &___gate_3; }
	inline void set_gate_3(RuntimeObject * value)
	{
		___gate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_3), (void*)value);
	}

	inline static int32_t get_offset_of_queues_4() { return static_cast<int32_t>(offsetof(Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72, ___queues_4)); }
	inline Queue_1U5BU5D_t43C618669FBD9DCD6C5D7E717FB9A5B70ED49A40* get_queues_4() const { return ___queues_4; }
	inline Queue_1U5BU5D_t43C618669FBD9DCD6C5D7E717FB9A5B70ED49A40** get_address_of_queues_4() { return &___queues_4; }
	inline void set_queues_4(Queue_1U5BU5D_t43C618669FBD9DCD6C5D7E717FB9A5B70ED49A40* value)
	{
		___queues_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queues_4), (void*)value);
	}

	inline static int32_t get_offset_of_isDone_5() { return static_cast<int32_t>(offsetof(Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72, ___isDone_5)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_isDone_5() const { return ___isDone_5; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_isDone_5() { return &___isDone_5; }
	inline void set_isDone_5(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___isDone_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isDone_5), (void*)value);
	}

	inline static int32_t get_offset_of_length_6() { return static_cast<int32_t>(offsetof(Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72, ___length_6)); }
	inline int32_t get_length_6() const { return ___length_6; }
	inline int32_t* get_address_of_length_6() { return &___length_6; }
	inline void set_length_6(int32_t value)
	{
		___length_6 = value;
	}
};


// UniRx.Operators.ZipObservable`3/Zip<System.Object,System.Object,System.Object>
struct Zip_t13EBD71F04563A56D8061EED082B6C1CD91189A1  : public OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C
{
public:
	// UniRx.Operators.ZipObservable`3<TLeft,TRight,TResult> UniRx.Operators.ZipObservable`3/Zip::parent
	ZipObservable_3_t19F669AD1C9E142DFCD663BFB8D4681B41891909 * ___parent_2;
	// System.Object UniRx.Operators.ZipObservable`3/Zip::gate
	RuntimeObject * ___gate_3;
	// System.Collections.Generic.Queue`1<TLeft> UniRx.Operators.ZipObservable`3/Zip::leftQ
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___leftQ_4;
	// System.Boolean UniRx.Operators.ZipObservable`3/Zip::leftCompleted
	bool ___leftCompleted_5;
	// System.Collections.Generic.Queue`1<TRight> UniRx.Operators.ZipObservable`3/Zip::rightQ
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___rightQ_6;
	// System.Boolean UniRx.Operators.ZipObservable`3/Zip::rightCompleted
	bool ___rightCompleted_7;

public:
	inline static int32_t get_offset_of_parent_2() { return static_cast<int32_t>(offsetof(Zip_t13EBD71F04563A56D8061EED082B6C1CD91189A1, ___parent_2)); }
	inline ZipObservable_3_t19F669AD1C9E142DFCD663BFB8D4681B41891909 * get_parent_2() const { return ___parent_2; }
	inline ZipObservable_3_t19F669AD1C9E142DFCD663BFB8D4681B41891909 ** get_address_of_parent_2() { return &___parent_2; }
	inline void set_parent_2(ZipObservable_3_t19F669AD1C9E142DFCD663BFB8D4681B41891909 * value)
	{
		___parent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_2), (void*)value);
	}

	inline static int32_t get_offset_of_gate_3() { return static_cast<int32_t>(offsetof(Zip_t13EBD71F04563A56D8061EED082B6C1CD91189A1, ___gate_3)); }
	inline RuntimeObject * get_gate_3() const { return ___gate_3; }
	inline RuntimeObject ** get_address_of_gate_3() { return &___gate_3; }
	inline void set_gate_3(RuntimeObject * value)
	{
		___gate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_3), (void*)value);
	}

	inline static int32_t get_offset_of_leftQ_4() { return static_cast<int32_t>(offsetof(Zip_t13EBD71F04563A56D8061EED082B6C1CD91189A1, ___leftQ_4)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_leftQ_4() const { return ___leftQ_4; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_leftQ_4() { return &___leftQ_4; }
	inline void set_leftQ_4(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___leftQ_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftQ_4), (void*)value);
	}

	inline static int32_t get_offset_of_leftCompleted_5() { return static_cast<int32_t>(offsetof(Zip_t13EBD71F04563A56D8061EED082B6C1CD91189A1, ___leftCompleted_5)); }
	inline bool get_leftCompleted_5() const { return ___leftCompleted_5; }
	inline bool* get_address_of_leftCompleted_5() { return &___leftCompleted_5; }
	inline void set_leftCompleted_5(bool value)
	{
		___leftCompleted_5 = value;
	}

	inline static int32_t get_offset_of_rightQ_6() { return static_cast<int32_t>(offsetof(Zip_t13EBD71F04563A56D8061EED082B6C1CD91189A1, ___rightQ_6)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_rightQ_6() const { return ___rightQ_6; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_rightQ_6() { return &___rightQ_6; }
	inline void set_rightQ_6(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___rightQ_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightQ_6), (void*)value);
	}

	inline static int32_t get_offset_of_rightCompleted_7() { return static_cast<int32_t>(offsetof(Zip_t13EBD71F04563A56D8061EED082B6C1CD91189A1, ___rightCompleted_7)); }
	inline bool get_rightCompleted_7() const { return ___rightCompleted_7; }
	inline bool* get_address_of_rightCompleted_7() { return &___rightCompleted_7; }
	inline void set_rightCompleted_7(bool value)
	{
		___rightCompleted_7 = value;
	}
};


// UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>
struct ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA  : public OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863
{
public:
	// UniRx.Operators.ZipLatestObservable`1<T> UniRx.Operators.ZipLatestObservable`1/ZipLatest::parent
	ZipLatestObservable_1_t31B47FEB89C2F944C298FC3A1F3C781B58B81D47 * ___parent_2;
	// System.Object UniRx.Operators.ZipLatestObservable`1/ZipLatest::gate
	RuntimeObject * ___gate_3;
	// System.Int32 UniRx.Operators.ZipLatestObservable`1/ZipLatest::length
	int32_t ___length_4;
	// T[] UniRx.Operators.ZipLatestObservable`1/ZipLatest::values
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values_5;
	// System.Boolean[] UniRx.Operators.ZipLatestObservable`1/ZipLatest::isStarted
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___isStarted_6;
	// System.Boolean[] UniRx.Operators.ZipLatestObservable`1/ZipLatest::isCompleted
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___isCompleted_7;

public:
	inline static int32_t get_offset_of_parent_2() { return static_cast<int32_t>(offsetof(ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA, ___parent_2)); }
	inline ZipLatestObservable_1_t31B47FEB89C2F944C298FC3A1F3C781B58B81D47 * get_parent_2() const { return ___parent_2; }
	inline ZipLatestObservable_1_t31B47FEB89C2F944C298FC3A1F3C781B58B81D47 ** get_address_of_parent_2() { return &___parent_2; }
	inline void set_parent_2(ZipLatestObservable_1_t31B47FEB89C2F944C298FC3A1F3C781B58B81D47 * value)
	{
		___parent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_2), (void*)value);
	}

	inline static int32_t get_offset_of_gate_3() { return static_cast<int32_t>(offsetof(ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA, ___gate_3)); }
	inline RuntimeObject * get_gate_3() const { return ___gate_3; }
	inline RuntimeObject ** get_address_of_gate_3() { return &___gate_3; }
	inline void set_gate_3(RuntimeObject * value)
	{
		___gate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_3), (void*)value);
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}

	inline static int32_t get_offset_of_values_5() { return static_cast<int32_t>(offsetof(ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA, ___values_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_values_5() const { return ___values_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_values_5() { return &___values_5; }
	inline void set_values_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___values_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_5), (void*)value);
	}

	inline static int32_t get_offset_of_isStarted_6() { return static_cast<int32_t>(offsetof(ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA, ___isStarted_6)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_isStarted_6() const { return ___isStarted_6; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_isStarted_6() { return &___isStarted_6; }
	inline void set_isStarted_6(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___isStarted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isStarted_6), (void*)value);
	}

	inline static int32_t get_offset_of_isCompleted_7() { return static_cast<int32_t>(offsetof(ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA, ___isCompleted_7)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_isCompleted_7() const { return ___isCompleted_7; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_isCompleted_7() { return &___isCompleted_7; }
	inline void set_isCompleted_7(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___isCompleted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isCompleted_7), (void*)value);
	}
};


// UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>
struct ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191  : public OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C
{
public:
	// UniRx.Operators.ZipLatestObservable`3<TLeft,TRight,TResult> UniRx.Operators.ZipLatestObservable`3/ZipLatest::parent
	ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C * ___parent_2;
	// System.Object UniRx.Operators.ZipLatestObservable`3/ZipLatest::gate
	RuntimeObject * ___gate_3;
	// TLeft UniRx.Operators.ZipLatestObservable`3/ZipLatest::leftValue
	RuntimeObject * ___leftValue_4;
	// System.Boolean UniRx.Operators.ZipLatestObservable`3/ZipLatest::leftStarted
	bool ___leftStarted_5;
	// System.Boolean UniRx.Operators.ZipLatestObservable`3/ZipLatest::leftCompleted
	bool ___leftCompleted_6;
	// TRight UniRx.Operators.ZipLatestObservable`3/ZipLatest::rightValue
	RuntimeObject * ___rightValue_7;
	// System.Boolean UniRx.Operators.ZipLatestObservable`3/ZipLatest::rightStarted
	bool ___rightStarted_8;
	// System.Boolean UniRx.Operators.ZipLatestObservable`3/ZipLatest::rightCompleted
	bool ___rightCompleted_9;

public:
	inline static int32_t get_offset_of_parent_2() { return static_cast<int32_t>(offsetof(ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191, ___parent_2)); }
	inline ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C * get_parent_2() const { return ___parent_2; }
	inline ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C ** get_address_of_parent_2() { return &___parent_2; }
	inline void set_parent_2(ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C * value)
	{
		___parent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_2), (void*)value);
	}

	inline static int32_t get_offset_of_gate_3() { return static_cast<int32_t>(offsetof(ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191, ___gate_3)); }
	inline RuntimeObject * get_gate_3() const { return ___gate_3; }
	inline RuntimeObject ** get_address_of_gate_3() { return &___gate_3; }
	inline void set_gate_3(RuntimeObject * value)
	{
		___gate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_3), (void*)value);
	}

	inline static int32_t get_offset_of_leftValue_4() { return static_cast<int32_t>(offsetof(ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191, ___leftValue_4)); }
	inline RuntimeObject * get_leftValue_4() const { return ___leftValue_4; }
	inline RuntimeObject ** get_address_of_leftValue_4() { return &___leftValue_4; }
	inline void set_leftValue_4(RuntimeObject * value)
	{
		___leftValue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftValue_4), (void*)value);
	}

	inline static int32_t get_offset_of_leftStarted_5() { return static_cast<int32_t>(offsetof(ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191, ___leftStarted_5)); }
	inline bool get_leftStarted_5() const { return ___leftStarted_5; }
	inline bool* get_address_of_leftStarted_5() { return &___leftStarted_5; }
	inline void set_leftStarted_5(bool value)
	{
		___leftStarted_5 = value;
	}

	inline static int32_t get_offset_of_leftCompleted_6() { return static_cast<int32_t>(offsetof(ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191, ___leftCompleted_6)); }
	inline bool get_leftCompleted_6() const { return ___leftCompleted_6; }
	inline bool* get_address_of_leftCompleted_6() { return &___leftCompleted_6; }
	inline void set_leftCompleted_6(bool value)
	{
		___leftCompleted_6 = value;
	}

	inline static int32_t get_offset_of_rightValue_7() { return static_cast<int32_t>(offsetof(ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191, ___rightValue_7)); }
	inline RuntimeObject * get_rightValue_7() const { return ___rightValue_7; }
	inline RuntimeObject ** get_address_of_rightValue_7() { return &___rightValue_7; }
	inline void set_rightValue_7(RuntimeObject * value)
	{
		___rightValue_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightValue_7), (void*)value);
	}

	inline static int32_t get_offset_of_rightStarted_8() { return static_cast<int32_t>(offsetof(ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191, ___rightStarted_8)); }
	inline bool get_rightStarted_8() const { return ___rightStarted_8; }
	inline bool* get_address_of_rightStarted_8() { return &___rightStarted_8; }
	inline void set_rightStarted_8(bool value)
	{
		___rightStarted_8 = value;
	}

	inline static int32_t get_offset_of_rightCompleted_9() { return static_cast<int32_t>(offsetof(ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191, ___rightCompleted_9)); }
	inline bool get_rightCompleted_9() const { return ___rightCompleted_9; }
	inline bool* get_address_of_rightCompleted_9() { return &___rightCompleted_9; }
	inline void set_rightCompleted_9(bool value)
	{
		___rightCompleted_9 = value;
	}
};


// UniRx.Operators.ZipLatestObservable`1<System.Object>
struct ZipLatestObservable_1_t31B47FEB89C2F944C298FC3A1F3C781B58B81D47  : public OperatorObservableBase_1_tE47C85622BC76B48DF7E360F0933AE98ECBF76DF
{
public:
	// UniRx.IObservable`1<T>[] UniRx.Operators.ZipLatestObservable`1::sources
	IObservable_1U5BU5D_tA28A0BBFB2F67C11476091A974CA931722B8EAD8* ___sources_1;

public:
	inline static int32_t get_offset_of_sources_1() { return static_cast<int32_t>(offsetof(ZipLatestObservable_1_t31B47FEB89C2F944C298FC3A1F3C781B58B81D47, ___sources_1)); }
	inline IObservable_1U5BU5D_tA28A0BBFB2F67C11476091A974CA931722B8EAD8* get_sources_1() const { return ___sources_1; }
	inline IObservable_1U5BU5D_tA28A0BBFB2F67C11476091A974CA931722B8EAD8** get_address_of_sources_1() { return &___sources_1; }
	inline void set_sources_1(IObservable_1U5BU5D_tA28A0BBFB2F67C11476091A974CA931722B8EAD8* value)
	{
		___sources_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sources_1), (void*)value);
	}
};


// UniRx.Operators.ZipLatestObservable`3<System.Object,System.Object,System.Object>
struct ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C  : public OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70
{
public:
	// UniRx.IObservable`1<TLeft> UniRx.Operators.ZipLatestObservable`3::left
	RuntimeObject* ___left_1;
	// UniRx.IObservable`1<TRight> UniRx.Operators.ZipLatestObservable`3::right
	RuntimeObject* ___right_2;
	// System.Func`3<TLeft,TRight,TResult> UniRx.Operators.ZipLatestObservable`3::selector
	Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * ___selector_3;

public:
	inline static int32_t get_offset_of_left_1() { return static_cast<int32_t>(offsetof(ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C, ___left_1)); }
	inline RuntimeObject* get_left_1() const { return ___left_1; }
	inline RuntimeObject** get_address_of_left_1() { return &___left_1; }
	inline void set_left_1(RuntimeObject* value)
	{
		___left_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___left_1), (void*)value);
	}

	inline static int32_t get_offset_of_right_2() { return static_cast<int32_t>(offsetof(ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C, ___right_2)); }
	inline RuntimeObject* get_right_2() const { return ___right_2; }
	inline RuntimeObject** get_address_of_right_2() { return &___right_2; }
	inline void set_right_2(RuntimeObject* value)
	{
		___right_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___right_2), (void*)value);
	}

	inline static int32_t get_offset_of_selector_3() { return static_cast<int32_t>(offsetof(ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C, ___selector_3)); }
	inline Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * get_selector_3() const { return ___selector_3; }
	inline Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 ** get_address_of_selector_3() { return &___selector_3; }
	inline void set_selector_3(Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * value)
	{
		___selector_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_3), (void*)value);
	}
};


// UniRx.Operators.ZipLatestObservable`4<System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148  : public OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70
{
public:
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`4::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`4::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`4::source3
	RuntimeObject* ___source3_3;
	// UniRx.Operators.ZipLatestFunc`4<T1,T2,T3,TR> UniRx.Operators.ZipLatestObservable`4::resultSelector
	ZipLatestFunc_4_t068AA5074A55A9170C834EA64F905EC3D61E11CD * ___resultSelector_4;

public:
	inline static int32_t get_offset_of_source1_1() { return static_cast<int32_t>(offsetof(ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148, ___source1_1)); }
	inline RuntimeObject* get_source1_1() const { return ___source1_1; }
	inline RuntimeObject** get_address_of_source1_1() { return &___source1_1; }
	inline void set_source1_1(RuntimeObject* value)
	{
		___source1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source1_1), (void*)value);
	}

	inline static int32_t get_offset_of_source2_2() { return static_cast<int32_t>(offsetof(ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148, ___source2_2)); }
	inline RuntimeObject* get_source2_2() const { return ___source2_2; }
	inline RuntimeObject** get_address_of_source2_2() { return &___source2_2; }
	inline void set_source2_2(RuntimeObject* value)
	{
		___source2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source2_2), (void*)value);
	}

	inline static int32_t get_offset_of_source3_3() { return static_cast<int32_t>(offsetof(ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148, ___source3_3)); }
	inline RuntimeObject* get_source3_3() const { return ___source3_3; }
	inline RuntimeObject** get_address_of_source3_3() { return &___source3_3; }
	inline void set_source3_3(RuntimeObject* value)
	{
		___source3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source3_3), (void*)value);
	}

	inline static int32_t get_offset_of_resultSelector_4() { return static_cast<int32_t>(offsetof(ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148, ___resultSelector_4)); }
	inline ZipLatestFunc_4_t068AA5074A55A9170C834EA64F905EC3D61E11CD * get_resultSelector_4() const { return ___resultSelector_4; }
	inline ZipLatestFunc_4_t068AA5074A55A9170C834EA64F905EC3D61E11CD ** get_address_of_resultSelector_4() { return &___resultSelector_4; }
	inline void set_resultSelector_4(ZipLatestFunc_4_t068AA5074A55A9170C834EA64F905EC3D61E11CD * value)
	{
		___resultSelector_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultSelector_4), (void*)value);
	}
};


// UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69  : public OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70
{
public:
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`5::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`5::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`5::source3
	RuntimeObject* ___source3_3;
	// UniRx.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`5::source4
	RuntimeObject* ___source4_4;
	// UniRx.Operators.ZipLatestFunc`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipLatestObservable`5::resultSelector
	ZipLatestFunc_5_t034B18D7B7806B768547ED63ED6523F49D3EE0B2 * ___resultSelector_5;

public:
	inline static int32_t get_offset_of_source1_1() { return static_cast<int32_t>(offsetof(ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69, ___source1_1)); }
	inline RuntimeObject* get_source1_1() const { return ___source1_1; }
	inline RuntimeObject** get_address_of_source1_1() { return &___source1_1; }
	inline void set_source1_1(RuntimeObject* value)
	{
		___source1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source1_1), (void*)value);
	}

	inline static int32_t get_offset_of_source2_2() { return static_cast<int32_t>(offsetof(ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69, ___source2_2)); }
	inline RuntimeObject* get_source2_2() const { return ___source2_2; }
	inline RuntimeObject** get_address_of_source2_2() { return &___source2_2; }
	inline void set_source2_2(RuntimeObject* value)
	{
		___source2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source2_2), (void*)value);
	}

	inline static int32_t get_offset_of_source3_3() { return static_cast<int32_t>(offsetof(ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69, ___source3_3)); }
	inline RuntimeObject* get_source3_3() const { return ___source3_3; }
	inline RuntimeObject** get_address_of_source3_3() { return &___source3_3; }
	inline void set_source3_3(RuntimeObject* value)
	{
		___source3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source3_3), (void*)value);
	}

	inline static int32_t get_offset_of_source4_4() { return static_cast<int32_t>(offsetof(ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69, ___source4_4)); }
	inline RuntimeObject* get_source4_4() const { return ___source4_4; }
	inline RuntimeObject** get_address_of_source4_4() { return &___source4_4; }
	inline void set_source4_4(RuntimeObject* value)
	{
		___source4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source4_4), (void*)value);
	}

	inline static int32_t get_offset_of_resultSelector_5() { return static_cast<int32_t>(offsetof(ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69, ___resultSelector_5)); }
	inline ZipLatestFunc_5_t034B18D7B7806B768547ED63ED6523F49D3EE0B2 * get_resultSelector_5() const { return ___resultSelector_5; }
	inline ZipLatestFunc_5_t034B18D7B7806B768547ED63ED6523F49D3EE0B2 ** get_address_of_resultSelector_5() { return &___resultSelector_5; }
	inline void set_resultSelector_5(ZipLatestFunc_5_t034B18D7B7806B768547ED63ED6523F49D3EE0B2 * value)
	{
		___resultSelector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultSelector_5), (void*)value);
	}
};


// UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E  : public OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70
{
public:
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`6::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`6::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`6::source3
	RuntimeObject* ___source3_3;
	// UniRx.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`6::source4
	RuntimeObject* ___source4_4;
	// UniRx.IObservable`1<T5> UniRx.Operators.ZipLatestObservable`6::source5
	RuntimeObject* ___source5_5;
	// UniRx.Operators.ZipLatestFunc`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipLatestObservable`6::resultSelector
	ZipLatestFunc_6_tF57A196B92A803627A820609E6441E884CEC0366 * ___resultSelector_6;

public:
	inline static int32_t get_offset_of_source1_1() { return static_cast<int32_t>(offsetof(ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E, ___source1_1)); }
	inline RuntimeObject* get_source1_1() const { return ___source1_1; }
	inline RuntimeObject** get_address_of_source1_1() { return &___source1_1; }
	inline void set_source1_1(RuntimeObject* value)
	{
		___source1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source1_1), (void*)value);
	}

	inline static int32_t get_offset_of_source2_2() { return static_cast<int32_t>(offsetof(ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E, ___source2_2)); }
	inline RuntimeObject* get_source2_2() const { return ___source2_2; }
	inline RuntimeObject** get_address_of_source2_2() { return &___source2_2; }
	inline void set_source2_2(RuntimeObject* value)
	{
		___source2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source2_2), (void*)value);
	}

	inline static int32_t get_offset_of_source3_3() { return static_cast<int32_t>(offsetof(ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E, ___source3_3)); }
	inline RuntimeObject* get_source3_3() const { return ___source3_3; }
	inline RuntimeObject** get_address_of_source3_3() { return &___source3_3; }
	inline void set_source3_3(RuntimeObject* value)
	{
		___source3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source3_3), (void*)value);
	}

	inline static int32_t get_offset_of_source4_4() { return static_cast<int32_t>(offsetof(ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E, ___source4_4)); }
	inline RuntimeObject* get_source4_4() const { return ___source4_4; }
	inline RuntimeObject** get_address_of_source4_4() { return &___source4_4; }
	inline void set_source4_4(RuntimeObject* value)
	{
		___source4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source4_4), (void*)value);
	}

	inline static int32_t get_offset_of_source5_5() { return static_cast<int32_t>(offsetof(ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E, ___source5_5)); }
	inline RuntimeObject* get_source5_5() const { return ___source5_5; }
	inline RuntimeObject** get_address_of_source5_5() { return &___source5_5; }
	inline void set_source5_5(RuntimeObject* value)
	{
		___source5_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source5_5), (void*)value);
	}

	inline static int32_t get_offset_of_resultSelector_6() { return static_cast<int32_t>(offsetof(ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E, ___resultSelector_6)); }
	inline ZipLatestFunc_6_tF57A196B92A803627A820609E6441E884CEC0366 * get_resultSelector_6() const { return ___resultSelector_6; }
	inline ZipLatestFunc_6_tF57A196B92A803627A820609E6441E884CEC0366 ** get_address_of_resultSelector_6() { return &___resultSelector_6; }
	inline void set_resultSelector_6(ZipLatestFunc_6_tF57A196B92A803627A820609E6441E884CEC0366 * value)
	{
		___resultSelector_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultSelector_6), (void*)value);
	}
};


// UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88  : public OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70
{
public:
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`7::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`7::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`7::source3
	RuntimeObject* ___source3_3;
	// UniRx.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`7::source4
	RuntimeObject* ___source4_4;
	// UniRx.IObservable`1<T5> UniRx.Operators.ZipLatestObservable`7::source5
	RuntimeObject* ___source5_5;
	// UniRx.IObservable`1<T6> UniRx.Operators.ZipLatestObservable`7::source6
	RuntimeObject* ___source6_6;
	// UniRx.Operators.ZipLatestFunc`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipLatestObservable`7::resultSelector
	ZipLatestFunc_7_t0D0C162176AFF4EA815561A183E0CADD1B8C5B86 * ___resultSelector_7;

public:
	inline static int32_t get_offset_of_source1_1() { return static_cast<int32_t>(offsetof(ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88, ___source1_1)); }
	inline RuntimeObject* get_source1_1() const { return ___source1_1; }
	inline RuntimeObject** get_address_of_source1_1() { return &___source1_1; }
	inline void set_source1_1(RuntimeObject* value)
	{
		___source1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source1_1), (void*)value);
	}

	inline static int32_t get_offset_of_source2_2() { return static_cast<int32_t>(offsetof(ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88, ___source2_2)); }
	inline RuntimeObject* get_source2_2() const { return ___source2_2; }
	inline RuntimeObject** get_address_of_source2_2() { return &___source2_2; }
	inline void set_source2_2(RuntimeObject* value)
	{
		___source2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source2_2), (void*)value);
	}

	inline static int32_t get_offset_of_source3_3() { return static_cast<int32_t>(offsetof(ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88, ___source3_3)); }
	inline RuntimeObject* get_source3_3() const { return ___source3_3; }
	inline RuntimeObject** get_address_of_source3_3() { return &___source3_3; }
	inline void set_source3_3(RuntimeObject* value)
	{
		___source3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source3_3), (void*)value);
	}

	inline static int32_t get_offset_of_source4_4() { return static_cast<int32_t>(offsetof(ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88, ___source4_4)); }
	inline RuntimeObject* get_source4_4() const { return ___source4_4; }
	inline RuntimeObject** get_address_of_source4_4() { return &___source4_4; }
	inline void set_source4_4(RuntimeObject* value)
	{
		___source4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source4_4), (void*)value);
	}

	inline static int32_t get_offset_of_source5_5() { return static_cast<int32_t>(offsetof(ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88, ___source5_5)); }
	inline RuntimeObject* get_source5_5() const { return ___source5_5; }
	inline RuntimeObject** get_address_of_source5_5() { return &___source5_5; }
	inline void set_source5_5(RuntimeObject* value)
	{
		___source5_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source5_5), (void*)value);
	}

	inline static int32_t get_offset_of_source6_6() { return static_cast<int32_t>(offsetof(ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88, ___source6_6)); }
	inline RuntimeObject* get_source6_6() const { return ___source6_6; }
	inline RuntimeObject** get_address_of_source6_6() { return &___source6_6; }
	inline void set_source6_6(RuntimeObject* value)
	{
		___source6_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source6_6), (void*)value);
	}

	inline static int32_t get_offset_of_resultSelector_7() { return static_cast<int32_t>(offsetof(ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88, ___resultSelector_7)); }
	inline ZipLatestFunc_7_t0D0C162176AFF4EA815561A183E0CADD1B8C5B86 * get_resultSelector_7() const { return ___resultSelector_7; }
	inline ZipLatestFunc_7_t0D0C162176AFF4EA815561A183E0CADD1B8C5B86 ** get_address_of_resultSelector_7() { return &___resultSelector_7; }
	inline void set_resultSelector_7(ZipLatestFunc_7_t0D0C162176AFF4EA815561A183E0CADD1B8C5B86 * value)
	{
		___resultSelector_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultSelector_7), (void*)value);
	}
};


// UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C  : public OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70
{
public:
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`8::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`8::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`8::source3
	RuntimeObject* ___source3_3;
	// UniRx.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`8::source4
	RuntimeObject* ___source4_4;
	// UniRx.IObservable`1<T5> UniRx.Operators.ZipLatestObservable`8::source5
	RuntimeObject* ___source5_5;
	// UniRx.IObservable`1<T6> UniRx.Operators.ZipLatestObservable`8::source6
	RuntimeObject* ___source6_6;
	// UniRx.IObservable`1<T7> UniRx.Operators.ZipLatestObservable`8::source7
	RuntimeObject* ___source7_7;
	// UniRx.Operators.ZipLatestFunc`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipLatestObservable`8::resultSelector
	ZipLatestFunc_8_tEB12C1F53C18B98647F21300DA101C6A90F29305 * ___resultSelector_8;

public:
	inline static int32_t get_offset_of_source1_1() { return static_cast<int32_t>(offsetof(ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C, ___source1_1)); }
	inline RuntimeObject* get_source1_1() const { return ___source1_1; }
	inline RuntimeObject** get_address_of_source1_1() { return &___source1_1; }
	inline void set_source1_1(RuntimeObject* value)
	{
		___source1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source1_1), (void*)value);
	}

	inline static int32_t get_offset_of_source2_2() { return static_cast<int32_t>(offsetof(ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C, ___source2_2)); }
	inline RuntimeObject* get_source2_2() const { return ___source2_2; }
	inline RuntimeObject** get_address_of_source2_2() { return &___source2_2; }
	inline void set_source2_2(RuntimeObject* value)
	{
		___source2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source2_2), (void*)value);
	}

	inline static int32_t get_offset_of_source3_3() { return static_cast<int32_t>(offsetof(ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C, ___source3_3)); }
	inline RuntimeObject* get_source3_3() const { return ___source3_3; }
	inline RuntimeObject** get_address_of_source3_3() { return &___source3_3; }
	inline void set_source3_3(RuntimeObject* value)
	{
		___source3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source3_3), (void*)value);
	}

	inline static int32_t get_offset_of_source4_4() { return static_cast<int32_t>(offsetof(ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C, ___source4_4)); }
	inline RuntimeObject* get_source4_4() const { return ___source4_4; }
	inline RuntimeObject** get_address_of_source4_4() { return &___source4_4; }
	inline void set_source4_4(RuntimeObject* value)
	{
		___source4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source4_4), (void*)value);
	}

	inline static int32_t get_offset_of_source5_5() { return static_cast<int32_t>(offsetof(ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C, ___source5_5)); }
	inline RuntimeObject* get_source5_5() const { return ___source5_5; }
	inline RuntimeObject** get_address_of_source5_5() { return &___source5_5; }
	inline void set_source5_5(RuntimeObject* value)
	{
		___source5_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source5_5), (void*)value);
	}

	inline static int32_t get_offset_of_source6_6() { return static_cast<int32_t>(offsetof(ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C, ___source6_6)); }
	inline RuntimeObject* get_source6_6() const { return ___source6_6; }
	inline RuntimeObject** get_address_of_source6_6() { return &___source6_6; }
	inline void set_source6_6(RuntimeObject* value)
	{
		___source6_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source6_6), (void*)value);
	}

	inline static int32_t get_offset_of_source7_7() { return static_cast<int32_t>(offsetof(ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C, ___source7_7)); }
	inline RuntimeObject* get_source7_7() const { return ___source7_7; }
	inline RuntimeObject** get_address_of_source7_7() { return &___source7_7; }
	inline void set_source7_7(RuntimeObject* value)
	{
		___source7_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source7_7), (void*)value);
	}

	inline static int32_t get_offset_of_resultSelector_8() { return static_cast<int32_t>(offsetof(ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C, ___resultSelector_8)); }
	inline ZipLatestFunc_8_tEB12C1F53C18B98647F21300DA101C6A90F29305 * get_resultSelector_8() const { return ___resultSelector_8; }
	inline ZipLatestFunc_8_tEB12C1F53C18B98647F21300DA101C6A90F29305 ** get_address_of_resultSelector_8() { return &___resultSelector_8; }
	inline void set_resultSelector_8(ZipLatestFunc_8_tEB12C1F53C18B98647F21300DA101C6A90F29305 * value)
	{
		___resultSelector_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultSelector_8), (void*)value);
	}
};


// UniRx.Operators.ZipObservable`1<System.Object>
struct ZipObservable_1_t4F142AABEA860C7E65B5DD043E61D5C70E8019EF  : public OperatorObservableBase_1_tE47C85622BC76B48DF7E360F0933AE98ECBF76DF
{
public:
	// UniRx.IObservable`1<T>[] UniRx.Operators.ZipObservable`1::sources
	IObservable_1U5BU5D_tA28A0BBFB2F67C11476091A974CA931722B8EAD8* ___sources_1;

public:
	inline static int32_t get_offset_of_sources_1() { return static_cast<int32_t>(offsetof(ZipObservable_1_t4F142AABEA860C7E65B5DD043E61D5C70E8019EF, ___sources_1)); }
	inline IObservable_1U5BU5D_tA28A0BBFB2F67C11476091A974CA931722B8EAD8* get_sources_1() const { return ___sources_1; }
	inline IObservable_1U5BU5D_tA28A0BBFB2F67C11476091A974CA931722B8EAD8** get_address_of_sources_1() { return &___sources_1; }
	inline void set_sources_1(IObservable_1U5BU5D_tA28A0BBFB2F67C11476091A974CA931722B8EAD8* value)
	{
		___sources_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sources_1), (void*)value);
	}
};


// UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>
struct ZipObservable_3_t19F669AD1C9E142DFCD663BFB8D4681B41891909  : public OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70
{
public:
	// UniRx.IObservable`1<TLeft> UniRx.Operators.ZipObservable`3::left
	RuntimeObject* ___left_1;
	// UniRx.IObservable`1<TRight> UniRx.Operators.ZipObservable`3::right
	RuntimeObject* ___right_2;
	// System.Func`3<TLeft,TRight,TResult> UniRx.Operators.ZipObservable`3::selector
	Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * ___selector_3;

public:
	inline static int32_t get_offset_of_left_1() { return static_cast<int32_t>(offsetof(ZipObservable_3_t19F669AD1C9E142DFCD663BFB8D4681B41891909, ___left_1)); }
	inline RuntimeObject* get_left_1() const { return ___left_1; }
	inline RuntimeObject** get_address_of_left_1() { return &___left_1; }
	inline void set_left_1(RuntimeObject* value)
	{
		___left_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___left_1), (void*)value);
	}

	inline static int32_t get_offset_of_right_2() { return static_cast<int32_t>(offsetof(ZipObservable_3_t19F669AD1C9E142DFCD663BFB8D4681B41891909, ___right_2)); }
	inline RuntimeObject* get_right_2() const { return ___right_2; }
	inline RuntimeObject** get_address_of_right_2() { return &___right_2; }
	inline void set_right_2(RuntimeObject* value)
	{
		___right_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___right_2), (void*)value);
	}

	inline static int32_t get_offset_of_selector_3() { return static_cast<int32_t>(offsetof(ZipObservable_3_t19F669AD1C9E142DFCD663BFB8D4681B41891909, ___selector_3)); }
	inline Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * get_selector_3() const { return ___selector_3; }
	inline Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 ** get_address_of_selector_3() { return &___selector_3; }
	inline void set_selector_3(Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * value)
	{
		___selector_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_3), (void*)value);
	}
};


// UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_4_t11DF5FB8681FDEFBF19B4D1632B8FB876B4F4AC8  : public OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70
{
public:
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipObservable`4::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipObservable`4::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipObservable`4::source3
	RuntimeObject* ___source3_3;
	// UniRx.Operators.ZipFunc`4<T1,T2,T3,TR> UniRx.Operators.ZipObservable`4::resultSelector
	ZipFunc_4_t505910809D87AAC499E7BA3A2825D94CB6AB211B * ___resultSelector_4;

public:
	inline static int32_t get_offset_of_source1_1() { return static_cast<int32_t>(offsetof(ZipObservable_4_t11DF5FB8681FDEFBF19B4D1632B8FB876B4F4AC8, ___source1_1)); }
	inline RuntimeObject* get_source1_1() const { return ___source1_1; }
	inline RuntimeObject** get_address_of_source1_1() { return &___source1_1; }
	inline void set_source1_1(RuntimeObject* value)
	{
		___source1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source1_1), (void*)value);
	}

	inline static int32_t get_offset_of_source2_2() { return static_cast<int32_t>(offsetof(ZipObservable_4_t11DF5FB8681FDEFBF19B4D1632B8FB876B4F4AC8, ___source2_2)); }
	inline RuntimeObject* get_source2_2() const { return ___source2_2; }
	inline RuntimeObject** get_address_of_source2_2() { return &___source2_2; }
	inline void set_source2_2(RuntimeObject* value)
	{
		___source2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source2_2), (void*)value);
	}

	inline static int32_t get_offset_of_source3_3() { return static_cast<int32_t>(offsetof(ZipObservable_4_t11DF5FB8681FDEFBF19B4D1632B8FB876B4F4AC8, ___source3_3)); }
	inline RuntimeObject* get_source3_3() const { return ___source3_3; }
	inline RuntimeObject** get_address_of_source3_3() { return &___source3_3; }
	inline void set_source3_3(RuntimeObject* value)
	{
		___source3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source3_3), (void*)value);
	}

	inline static int32_t get_offset_of_resultSelector_4() { return static_cast<int32_t>(offsetof(ZipObservable_4_t11DF5FB8681FDEFBF19B4D1632B8FB876B4F4AC8, ___resultSelector_4)); }
	inline ZipFunc_4_t505910809D87AAC499E7BA3A2825D94CB6AB211B * get_resultSelector_4() const { return ___resultSelector_4; }
	inline ZipFunc_4_t505910809D87AAC499E7BA3A2825D94CB6AB211B ** get_address_of_resultSelector_4() { return &___resultSelector_4; }
	inline void set_resultSelector_4(ZipFunc_4_t505910809D87AAC499E7BA3A2825D94CB6AB211B * value)
	{
		___resultSelector_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultSelector_4), (void*)value);
	}
};


// UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C  : public OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70
{
public:
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipObservable`5::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipObservable`5::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipObservable`5::source3
	RuntimeObject* ___source3_3;
	// UniRx.IObservable`1<T4> UniRx.Operators.ZipObservable`5::source4
	RuntimeObject* ___source4_4;
	// UniRx.Operators.ZipFunc`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipObservable`5::resultSelector
	ZipFunc_5_tF2AEB30C5ED3B56CF895E857FAA7C64B512BB476 * ___resultSelector_5;

public:
	inline static int32_t get_offset_of_source1_1() { return static_cast<int32_t>(offsetof(ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C, ___source1_1)); }
	inline RuntimeObject* get_source1_1() const { return ___source1_1; }
	inline RuntimeObject** get_address_of_source1_1() { return &___source1_1; }
	inline void set_source1_1(RuntimeObject* value)
	{
		___source1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source1_1), (void*)value);
	}

	inline static int32_t get_offset_of_source2_2() { return static_cast<int32_t>(offsetof(ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C, ___source2_2)); }
	inline RuntimeObject* get_source2_2() const { return ___source2_2; }
	inline RuntimeObject** get_address_of_source2_2() { return &___source2_2; }
	inline void set_source2_2(RuntimeObject* value)
	{
		___source2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source2_2), (void*)value);
	}

	inline static int32_t get_offset_of_source3_3() { return static_cast<int32_t>(offsetof(ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C, ___source3_3)); }
	inline RuntimeObject* get_source3_3() const { return ___source3_3; }
	inline RuntimeObject** get_address_of_source3_3() { return &___source3_3; }
	inline void set_source3_3(RuntimeObject* value)
	{
		___source3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source3_3), (void*)value);
	}

	inline static int32_t get_offset_of_source4_4() { return static_cast<int32_t>(offsetof(ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C, ___source4_4)); }
	inline RuntimeObject* get_source4_4() const { return ___source4_4; }
	inline RuntimeObject** get_address_of_source4_4() { return &___source4_4; }
	inline void set_source4_4(RuntimeObject* value)
	{
		___source4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source4_4), (void*)value);
	}

	inline static int32_t get_offset_of_resultSelector_5() { return static_cast<int32_t>(offsetof(ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C, ___resultSelector_5)); }
	inline ZipFunc_5_tF2AEB30C5ED3B56CF895E857FAA7C64B512BB476 * get_resultSelector_5() const { return ___resultSelector_5; }
	inline ZipFunc_5_tF2AEB30C5ED3B56CF895E857FAA7C64B512BB476 ** get_address_of_resultSelector_5() { return &___resultSelector_5; }
	inline void set_resultSelector_5(ZipFunc_5_tF2AEB30C5ED3B56CF895E857FAA7C64B512BB476 * value)
	{
		___resultSelector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultSelector_5), (void*)value);
	}
};


// UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF  : public OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70
{
public:
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipObservable`6::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipObservable`6::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipObservable`6::source3
	RuntimeObject* ___source3_3;
	// UniRx.IObservable`1<T4> UniRx.Operators.ZipObservable`6::source4
	RuntimeObject* ___source4_4;
	// UniRx.IObservable`1<T5> UniRx.Operators.ZipObservable`6::source5
	RuntimeObject* ___source5_5;
	// UniRx.Operators.ZipFunc`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipObservable`6::resultSelector
	ZipFunc_6_tE402A210998EFF5E6094C07B9A537A45986F3709 * ___resultSelector_6;

public:
	inline static int32_t get_offset_of_source1_1() { return static_cast<int32_t>(offsetof(ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF, ___source1_1)); }
	inline RuntimeObject* get_source1_1() const { return ___source1_1; }
	inline RuntimeObject** get_address_of_source1_1() { return &___source1_1; }
	inline void set_source1_1(RuntimeObject* value)
	{
		___source1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source1_1), (void*)value);
	}

	inline static int32_t get_offset_of_source2_2() { return static_cast<int32_t>(offsetof(ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF, ___source2_2)); }
	inline RuntimeObject* get_source2_2() const { return ___source2_2; }
	inline RuntimeObject** get_address_of_source2_2() { return &___source2_2; }
	inline void set_source2_2(RuntimeObject* value)
	{
		___source2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source2_2), (void*)value);
	}

	inline static int32_t get_offset_of_source3_3() { return static_cast<int32_t>(offsetof(ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF, ___source3_3)); }
	inline RuntimeObject* get_source3_3() const { return ___source3_3; }
	inline RuntimeObject** get_address_of_source3_3() { return &___source3_3; }
	inline void set_source3_3(RuntimeObject* value)
	{
		___source3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source3_3), (void*)value);
	}

	inline static int32_t get_offset_of_source4_4() { return static_cast<int32_t>(offsetof(ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF, ___source4_4)); }
	inline RuntimeObject* get_source4_4() const { return ___source4_4; }
	inline RuntimeObject** get_address_of_source4_4() { return &___source4_4; }
	inline void set_source4_4(RuntimeObject* value)
	{
		___source4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source4_4), (void*)value);
	}

	inline static int32_t get_offset_of_source5_5() { return static_cast<int32_t>(offsetof(ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF, ___source5_5)); }
	inline RuntimeObject* get_source5_5() const { return ___source5_5; }
	inline RuntimeObject** get_address_of_source5_5() { return &___source5_5; }
	inline void set_source5_5(RuntimeObject* value)
	{
		___source5_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source5_5), (void*)value);
	}

	inline static int32_t get_offset_of_resultSelector_6() { return static_cast<int32_t>(offsetof(ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF, ___resultSelector_6)); }
	inline ZipFunc_6_tE402A210998EFF5E6094C07B9A537A45986F3709 * get_resultSelector_6() const { return ___resultSelector_6; }
	inline ZipFunc_6_tE402A210998EFF5E6094C07B9A537A45986F3709 ** get_address_of_resultSelector_6() { return &___resultSelector_6; }
	inline void set_resultSelector_6(ZipFunc_6_tE402A210998EFF5E6094C07B9A537A45986F3709 * value)
	{
		___resultSelector_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultSelector_6), (void*)value);
	}
};


// UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A  : public OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70
{
public:
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipObservable`7::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipObservable`7::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipObservable`7::source3
	RuntimeObject* ___source3_3;
	// UniRx.IObservable`1<T4> UniRx.Operators.ZipObservable`7::source4
	RuntimeObject* ___source4_4;
	// UniRx.IObservable`1<T5> UniRx.Operators.ZipObservable`7::source5
	RuntimeObject* ___source5_5;
	// UniRx.IObservable`1<T6> UniRx.Operators.ZipObservable`7::source6
	RuntimeObject* ___source6_6;
	// UniRx.Operators.ZipFunc`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipObservable`7::resultSelector
	ZipFunc_7_tABC414FCC717501CBEED1ADE34E677D99B8DC3EC * ___resultSelector_7;

public:
	inline static int32_t get_offset_of_source1_1() { return static_cast<int32_t>(offsetof(ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A, ___source1_1)); }
	inline RuntimeObject* get_source1_1() const { return ___source1_1; }
	inline RuntimeObject** get_address_of_source1_1() { return &___source1_1; }
	inline void set_source1_1(RuntimeObject* value)
	{
		___source1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source1_1), (void*)value);
	}

	inline static int32_t get_offset_of_source2_2() { return static_cast<int32_t>(offsetof(ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A, ___source2_2)); }
	inline RuntimeObject* get_source2_2() const { return ___source2_2; }
	inline RuntimeObject** get_address_of_source2_2() { return &___source2_2; }
	inline void set_source2_2(RuntimeObject* value)
	{
		___source2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source2_2), (void*)value);
	}

	inline static int32_t get_offset_of_source3_3() { return static_cast<int32_t>(offsetof(ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A, ___source3_3)); }
	inline RuntimeObject* get_source3_3() const { return ___source3_3; }
	inline RuntimeObject** get_address_of_source3_3() { return &___source3_3; }
	inline void set_source3_3(RuntimeObject* value)
	{
		___source3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source3_3), (void*)value);
	}

	inline static int32_t get_offset_of_source4_4() { return static_cast<int32_t>(offsetof(ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A, ___source4_4)); }
	inline RuntimeObject* get_source4_4() const { return ___source4_4; }
	inline RuntimeObject** get_address_of_source4_4() { return &___source4_4; }
	inline void set_source4_4(RuntimeObject* value)
	{
		___source4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source4_4), (void*)value);
	}

	inline static int32_t get_offset_of_source5_5() { return static_cast<int32_t>(offsetof(ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A, ___source5_5)); }
	inline RuntimeObject* get_source5_5() const { return ___source5_5; }
	inline RuntimeObject** get_address_of_source5_5() { return &___source5_5; }
	inline void set_source5_5(RuntimeObject* value)
	{
		___source5_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source5_5), (void*)value);
	}

	inline static int32_t get_offset_of_source6_6() { return static_cast<int32_t>(offsetof(ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A, ___source6_6)); }
	inline RuntimeObject* get_source6_6() const { return ___source6_6; }
	inline RuntimeObject** get_address_of_source6_6() { return &___source6_6; }
	inline void set_source6_6(RuntimeObject* value)
	{
		___source6_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source6_6), (void*)value);
	}

	inline static int32_t get_offset_of_resultSelector_7() { return static_cast<int32_t>(offsetof(ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A, ___resultSelector_7)); }
	inline ZipFunc_7_tABC414FCC717501CBEED1ADE34E677D99B8DC3EC * get_resultSelector_7() const { return ___resultSelector_7; }
	inline ZipFunc_7_tABC414FCC717501CBEED1ADE34E677D99B8DC3EC ** get_address_of_resultSelector_7() { return &___resultSelector_7; }
	inline void set_resultSelector_7(ZipFunc_7_tABC414FCC717501CBEED1ADE34E677D99B8DC3EC * value)
	{
		___resultSelector_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultSelector_7), (void*)value);
	}
};


// UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF  : public OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70
{
public:
	// UniRx.IObservable`1<T1> UniRx.Operators.ZipObservable`8::source1
	RuntimeObject* ___source1_1;
	// UniRx.IObservable`1<T2> UniRx.Operators.ZipObservable`8::source2
	RuntimeObject* ___source2_2;
	// UniRx.IObservable`1<T3> UniRx.Operators.ZipObservable`8::source3
	RuntimeObject* ___source3_3;
	// UniRx.IObservable`1<T4> UniRx.Operators.ZipObservable`8::source4
	RuntimeObject* ___source4_4;
	// UniRx.IObservable`1<T5> UniRx.Operators.ZipObservable`8::source5
	RuntimeObject* ___source5_5;
	// UniRx.IObservable`1<T6> UniRx.Operators.ZipObservable`8::source6
	RuntimeObject* ___source6_6;
	// UniRx.IObservable`1<T7> UniRx.Operators.ZipObservable`8::source7
	RuntimeObject* ___source7_7;
	// UniRx.Operators.ZipFunc`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipObservable`8::resultSelector
	ZipFunc_8_tE636EE02A54058933CDDB715EAE402AD62776D8A * ___resultSelector_8;

public:
	inline static int32_t get_offset_of_source1_1() { return static_cast<int32_t>(offsetof(ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF, ___source1_1)); }
	inline RuntimeObject* get_source1_1() const { return ___source1_1; }
	inline RuntimeObject** get_address_of_source1_1() { return &___source1_1; }
	inline void set_source1_1(RuntimeObject* value)
	{
		___source1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source1_1), (void*)value);
	}

	inline static int32_t get_offset_of_source2_2() { return static_cast<int32_t>(offsetof(ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF, ___source2_2)); }
	inline RuntimeObject* get_source2_2() const { return ___source2_2; }
	inline RuntimeObject** get_address_of_source2_2() { return &___source2_2; }
	inline void set_source2_2(RuntimeObject* value)
	{
		___source2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source2_2), (void*)value);
	}

	inline static int32_t get_offset_of_source3_3() { return static_cast<int32_t>(offsetof(ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF, ___source3_3)); }
	inline RuntimeObject* get_source3_3() const { return ___source3_3; }
	inline RuntimeObject** get_address_of_source3_3() { return &___source3_3; }
	inline void set_source3_3(RuntimeObject* value)
	{
		___source3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source3_3), (void*)value);
	}

	inline static int32_t get_offset_of_source4_4() { return static_cast<int32_t>(offsetof(ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF, ___source4_4)); }
	inline RuntimeObject* get_source4_4() const { return ___source4_4; }
	inline RuntimeObject** get_address_of_source4_4() { return &___source4_4; }
	inline void set_source4_4(RuntimeObject* value)
	{
		___source4_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source4_4), (void*)value);
	}

	inline static int32_t get_offset_of_source5_5() { return static_cast<int32_t>(offsetof(ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF, ___source5_5)); }
	inline RuntimeObject* get_source5_5() const { return ___source5_5; }
	inline RuntimeObject** get_address_of_source5_5() { return &___source5_5; }
	inline void set_source5_5(RuntimeObject* value)
	{
		___source5_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source5_5), (void*)value);
	}

	inline static int32_t get_offset_of_source6_6() { return static_cast<int32_t>(offsetof(ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF, ___source6_6)); }
	inline RuntimeObject* get_source6_6() const { return ___source6_6; }
	inline RuntimeObject** get_address_of_source6_6() { return &___source6_6; }
	inline void set_source6_6(RuntimeObject* value)
	{
		___source6_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source6_6), (void*)value);
	}

	inline static int32_t get_offset_of_source7_7() { return static_cast<int32_t>(offsetof(ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF, ___source7_7)); }
	inline RuntimeObject* get_source7_7() const { return ___source7_7; }
	inline RuntimeObject** get_address_of_source7_7() { return &___source7_7; }
	inline void set_source7_7(RuntimeObject* value)
	{
		___source7_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source7_7), (void*)value);
	}

	inline static int32_t get_offset_of_resultSelector_8() { return static_cast<int32_t>(offsetof(ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF, ___resultSelector_8)); }
	inline ZipFunc_8_tE636EE02A54058933CDDB715EAE402AD62776D8A * get_resultSelector_8() const { return ___resultSelector_8; }
	inline ZipFunc_8_tE636EE02A54058933CDDB715EAE402AD62776D8A ** get_address_of_resultSelector_8() { return &___resultSelector_8; }
	inline void set_resultSelector_8(ZipFunc_8_tE636EE02A54058933CDDB715EAE402AD62776D8A * value)
	{
		___resultSelector_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultSelector_8), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UniRx.Operators.ZipObservable`4/Zip<System.Object,System.Object,System.Object,System.Object>
struct Zip_t6F4A4103745D011459457C968CC4E0DBF38BFDE3  : public NthZipObserverBase_1_t0EDC60BC1843F8758B2334391375B16FD1F6CFD1
{
public:
	// UniRx.Operators.ZipObservable`4<T1,T2,T3,TR> UniRx.Operators.ZipObservable`4/Zip::parent
	ZipObservable_4_t11DF5FB8681FDEFBF19B4D1632B8FB876B4F4AC8 * ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`4/Zip::gate
	RuntimeObject * ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`4/Zip::q1
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`4/Zip::q2
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`4/Zip::q3
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q3_9;

public:
	inline static int32_t get_offset_of_parent_5() { return static_cast<int32_t>(offsetof(Zip_t6F4A4103745D011459457C968CC4E0DBF38BFDE3, ___parent_5)); }
	inline ZipObservable_4_t11DF5FB8681FDEFBF19B4D1632B8FB876B4F4AC8 * get_parent_5() const { return ___parent_5; }
	inline ZipObservable_4_t11DF5FB8681FDEFBF19B4D1632B8FB876B4F4AC8 ** get_address_of_parent_5() { return &___parent_5; }
	inline void set_parent_5(ZipObservable_4_t11DF5FB8681FDEFBF19B4D1632B8FB876B4F4AC8 * value)
	{
		___parent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_5), (void*)value);
	}

	inline static int32_t get_offset_of_gate_6() { return static_cast<int32_t>(offsetof(Zip_t6F4A4103745D011459457C968CC4E0DBF38BFDE3, ___gate_6)); }
	inline RuntimeObject * get_gate_6() const { return ___gate_6; }
	inline RuntimeObject ** get_address_of_gate_6() { return &___gate_6; }
	inline void set_gate_6(RuntimeObject * value)
	{
		___gate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_6), (void*)value);
	}

	inline static int32_t get_offset_of_q1_7() { return static_cast<int32_t>(offsetof(Zip_t6F4A4103745D011459457C968CC4E0DBF38BFDE3, ___q1_7)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q1_7() const { return ___q1_7; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q1_7() { return &___q1_7; }
	inline void set_q1_7(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q1_7), (void*)value);
	}

	inline static int32_t get_offset_of_q2_8() { return static_cast<int32_t>(offsetof(Zip_t6F4A4103745D011459457C968CC4E0DBF38BFDE3, ___q2_8)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q2_8() const { return ___q2_8; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q2_8() { return &___q2_8; }
	inline void set_q2_8(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q2_8), (void*)value);
	}

	inline static int32_t get_offset_of_q3_9() { return static_cast<int32_t>(offsetof(Zip_t6F4A4103745D011459457C968CC4E0DBF38BFDE3, ___q3_9)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q3_9() const { return ___q3_9; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q3_9() { return &___q3_9; }
	inline void set_q3_9(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q3_9), (void*)value);
	}
};


// UniRx.Operators.ZipObservable`5/Zip<System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_tAECCA6EB650DC83B7D41E72620E9962C062B9BC0  : public NthZipObserverBase_1_t0EDC60BC1843F8758B2334391375B16FD1F6CFD1
{
public:
	// UniRx.Operators.ZipObservable`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipObservable`5/Zip::parent
	ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C * ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`5/Zip::gate
	RuntimeObject * ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`5/Zip::q1
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`5/Zip::q2
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`5/Zip::q3
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`5/Zip::q4
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q4_10;

public:
	inline static int32_t get_offset_of_parent_5() { return static_cast<int32_t>(offsetof(Zip_tAECCA6EB650DC83B7D41E72620E9962C062B9BC0, ___parent_5)); }
	inline ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C * get_parent_5() const { return ___parent_5; }
	inline ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C ** get_address_of_parent_5() { return &___parent_5; }
	inline void set_parent_5(ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C * value)
	{
		___parent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_5), (void*)value);
	}

	inline static int32_t get_offset_of_gate_6() { return static_cast<int32_t>(offsetof(Zip_tAECCA6EB650DC83B7D41E72620E9962C062B9BC0, ___gate_6)); }
	inline RuntimeObject * get_gate_6() const { return ___gate_6; }
	inline RuntimeObject ** get_address_of_gate_6() { return &___gate_6; }
	inline void set_gate_6(RuntimeObject * value)
	{
		___gate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_6), (void*)value);
	}

	inline static int32_t get_offset_of_q1_7() { return static_cast<int32_t>(offsetof(Zip_tAECCA6EB650DC83B7D41E72620E9962C062B9BC0, ___q1_7)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q1_7() const { return ___q1_7; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q1_7() { return &___q1_7; }
	inline void set_q1_7(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q1_7), (void*)value);
	}

	inline static int32_t get_offset_of_q2_8() { return static_cast<int32_t>(offsetof(Zip_tAECCA6EB650DC83B7D41E72620E9962C062B9BC0, ___q2_8)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q2_8() const { return ___q2_8; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q2_8() { return &___q2_8; }
	inline void set_q2_8(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q2_8), (void*)value);
	}

	inline static int32_t get_offset_of_q3_9() { return static_cast<int32_t>(offsetof(Zip_tAECCA6EB650DC83B7D41E72620E9962C062B9BC0, ___q3_9)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q3_9() const { return ___q3_9; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q3_9() { return &___q3_9; }
	inline void set_q3_9(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q3_9), (void*)value);
	}

	inline static int32_t get_offset_of_q4_10() { return static_cast<int32_t>(offsetof(Zip_tAECCA6EB650DC83B7D41E72620E9962C062B9BC0, ___q4_10)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q4_10() const { return ___q4_10; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q4_10() { return &___q4_10; }
	inline void set_q4_10(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q4_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q4_10), (void*)value);
	}
};


// UniRx.Operators.ZipObservable`6/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t15EB7BC544EB283E300FD0781345D4DADD89E8AC  : public NthZipObserverBase_1_t0EDC60BC1843F8758B2334391375B16FD1F6CFD1
{
public:
	// UniRx.Operators.ZipObservable`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipObservable`6/Zip::parent
	ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF * ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`6/Zip::gate
	RuntimeObject * ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`6/Zip::q1
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`6/Zip::q2
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`6/Zip::q3
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`6/Zip::q4
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q4_10;
	// System.Collections.Generic.Queue`1<T5> UniRx.Operators.ZipObservable`6/Zip::q5
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q5_11;

public:
	inline static int32_t get_offset_of_parent_5() { return static_cast<int32_t>(offsetof(Zip_t15EB7BC544EB283E300FD0781345D4DADD89E8AC, ___parent_5)); }
	inline ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF * get_parent_5() const { return ___parent_5; }
	inline ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF ** get_address_of_parent_5() { return &___parent_5; }
	inline void set_parent_5(ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF * value)
	{
		___parent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_5), (void*)value);
	}

	inline static int32_t get_offset_of_gate_6() { return static_cast<int32_t>(offsetof(Zip_t15EB7BC544EB283E300FD0781345D4DADD89E8AC, ___gate_6)); }
	inline RuntimeObject * get_gate_6() const { return ___gate_6; }
	inline RuntimeObject ** get_address_of_gate_6() { return &___gate_6; }
	inline void set_gate_6(RuntimeObject * value)
	{
		___gate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_6), (void*)value);
	}

	inline static int32_t get_offset_of_q1_7() { return static_cast<int32_t>(offsetof(Zip_t15EB7BC544EB283E300FD0781345D4DADD89E8AC, ___q1_7)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q1_7() const { return ___q1_7; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q1_7() { return &___q1_7; }
	inline void set_q1_7(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q1_7), (void*)value);
	}

	inline static int32_t get_offset_of_q2_8() { return static_cast<int32_t>(offsetof(Zip_t15EB7BC544EB283E300FD0781345D4DADD89E8AC, ___q2_8)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q2_8() const { return ___q2_8; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q2_8() { return &___q2_8; }
	inline void set_q2_8(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q2_8), (void*)value);
	}

	inline static int32_t get_offset_of_q3_9() { return static_cast<int32_t>(offsetof(Zip_t15EB7BC544EB283E300FD0781345D4DADD89E8AC, ___q3_9)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q3_9() const { return ___q3_9; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q3_9() { return &___q3_9; }
	inline void set_q3_9(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q3_9), (void*)value);
	}

	inline static int32_t get_offset_of_q4_10() { return static_cast<int32_t>(offsetof(Zip_t15EB7BC544EB283E300FD0781345D4DADD89E8AC, ___q4_10)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q4_10() const { return ___q4_10; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q4_10() { return &___q4_10; }
	inline void set_q4_10(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q4_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q4_10), (void*)value);
	}

	inline static int32_t get_offset_of_q5_11() { return static_cast<int32_t>(offsetof(Zip_t15EB7BC544EB283E300FD0781345D4DADD89E8AC, ___q5_11)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q5_11() const { return ___q5_11; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q5_11() { return &___q5_11; }
	inline void set_q5_11(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q5_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q5_11), (void*)value);
	}
};


// UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t29F08489999A6A3B3C7A5D088D83B687439565EC  : public NthZipObserverBase_1_t0EDC60BC1843F8758B2334391375B16FD1F6CFD1
{
public:
	// UniRx.Operators.ZipObservable`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipObservable`7/Zip::parent
	ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A * ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`7/Zip::gate
	RuntimeObject * ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`7/Zip::q1
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`7/Zip::q2
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`7/Zip::q3
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`7/Zip::q4
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q4_10;
	// System.Collections.Generic.Queue`1<T5> UniRx.Operators.ZipObservable`7/Zip::q5
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q5_11;
	// System.Collections.Generic.Queue`1<T6> UniRx.Operators.ZipObservable`7/Zip::q6
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q6_12;

public:
	inline static int32_t get_offset_of_parent_5() { return static_cast<int32_t>(offsetof(Zip_t29F08489999A6A3B3C7A5D088D83B687439565EC, ___parent_5)); }
	inline ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A * get_parent_5() const { return ___parent_5; }
	inline ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A ** get_address_of_parent_5() { return &___parent_5; }
	inline void set_parent_5(ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A * value)
	{
		___parent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_5), (void*)value);
	}

	inline static int32_t get_offset_of_gate_6() { return static_cast<int32_t>(offsetof(Zip_t29F08489999A6A3B3C7A5D088D83B687439565EC, ___gate_6)); }
	inline RuntimeObject * get_gate_6() const { return ___gate_6; }
	inline RuntimeObject ** get_address_of_gate_6() { return &___gate_6; }
	inline void set_gate_6(RuntimeObject * value)
	{
		___gate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_6), (void*)value);
	}

	inline static int32_t get_offset_of_q1_7() { return static_cast<int32_t>(offsetof(Zip_t29F08489999A6A3B3C7A5D088D83B687439565EC, ___q1_7)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q1_7() const { return ___q1_7; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q1_7() { return &___q1_7; }
	inline void set_q1_7(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q1_7), (void*)value);
	}

	inline static int32_t get_offset_of_q2_8() { return static_cast<int32_t>(offsetof(Zip_t29F08489999A6A3B3C7A5D088D83B687439565EC, ___q2_8)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q2_8() const { return ___q2_8; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q2_8() { return &___q2_8; }
	inline void set_q2_8(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q2_8), (void*)value);
	}

	inline static int32_t get_offset_of_q3_9() { return static_cast<int32_t>(offsetof(Zip_t29F08489999A6A3B3C7A5D088D83B687439565EC, ___q3_9)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q3_9() const { return ___q3_9; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q3_9() { return &___q3_9; }
	inline void set_q3_9(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q3_9), (void*)value);
	}

	inline static int32_t get_offset_of_q4_10() { return static_cast<int32_t>(offsetof(Zip_t29F08489999A6A3B3C7A5D088D83B687439565EC, ___q4_10)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q4_10() const { return ___q4_10; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q4_10() { return &___q4_10; }
	inline void set_q4_10(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q4_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q4_10), (void*)value);
	}

	inline static int32_t get_offset_of_q5_11() { return static_cast<int32_t>(offsetof(Zip_t29F08489999A6A3B3C7A5D088D83B687439565EC, ___q5_11)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q5_11() const { return ___q5_11; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q5_11() { return &___q5_11; }
	inline void set_q5_11(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q5_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q5_11), (void*)value);
	}

	inline static int32_t get_offset_of_q6_12() { return static_cast<int32_t>(offsetof(Zip_t29F08489999A6A3B3C7A5D088D83B687439565EC, ___q6_12)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q6_12() const { return ___q6_12; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q6_12() { return &___q6_12; }
	inline void set_q6_12(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q6_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q6_12), (void*)value);
	}
};


// UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct Zip_t0BA95E174034BF81AEBB96CE42C27C1A75805B24  : public NthZipObserverBase_1_t0EDC60BC1843F8758B2334391375B16FD1F6CFD1
{
public:
	// UniRx.Operators.ZipObservable`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipObservable`8/Zip::parent
	ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF * ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`8/Zip::gate
	RuntimeObject * ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`8/Zip::q1
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`8/Zip::q2
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`8/Zip::q3
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`8/Zip::q4
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q4_10;
	// System.Collections.Generic.Queue`1<T5> UniRx.Operators.ZipObservable`8/Zip::q5
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q5_11;
	// System.Collections.Generic.Queue`1<T6> UniRx.Operators.ZipObservable`8/Zip::q6
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q6_12;
	// System.Collections.Generic.Queue`1<T7> UniRx.Operators.ZipObservable`8/Zip::q7
	Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___q7_13;

public:
	inline static int32_t get_offset_of_parent_5() { return static_cast<int32_t>(offsetof(Zip_t0BA95E174034BF81AEBB96CE42C27C1A75805B24, ___parent_5)); }
	inline ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF * get_parent_5() const { return ___parent_5; }
	inline ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF ** get_address_of_parent_5() { return &___parent_5; }
	inline void set_parent_5(ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF * value)
	{
		___parent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_5), (void*)value);
	}

	inline static int32_t get_offset_of_gate_6() { return static_cast<int32_t>(offsetof(Zip_t0BA95E174034BF81AEBB96CE42C27C1A75805B24, ___gate_6)); }
	inline RuntimeObject * get_gate_6() const { return ___gate_6; }
	inline RuntimeObject ** get_address_of_gate_6() { return &___gate_6; }
	inline void set_gate_6(RuntimeObject * value)
	{
		___gate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_6), (void*)value);
	}

	inline static int32_t get_offset_of_q1_7() { return static_cast<int32_t>(offsetof(Zip_t0BA95E174034BF81AEBB96CE42C27C1A75805B24, ___q1_7)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q1_7() const { return ___q1_7; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q1_7() { return &___q1_7; }
	inline void set_q1_7(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q1_7), (void*)value);
	}

	inline static int32_t get_offset_of_q2_8() { return static_cast<int32_t>(offsetof(Zip_t0BA95E174034BF81AEBB96CE42C27C1A75805B24, ___q2_8)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q2_8() const { return ___q2_8; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q2_8() { return &___q2_8; }
	inline void set_q2_8(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q2_8), (void*)value);
	}

	inline static int32_t get_offset_of_q3_9() { return static_cast<int32_t>(offsetof(Zip_t0BA95E174034BF81AEBB96CE42C27C1A75805B24, ___q3_9)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q3_9() const { return ___q3_9; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q3_9() { return &___q3_9; }
	inline void set_q3_9(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q3_9), (void*)value);
	}

	inline static int32_t get_offset_of_q4_10() { return static_cast<int32_t>(offsetof(Zip_t0BA95E174034BF81AEBB96CE42C27C1A75805B24, ___q4_10)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q4_10() const { return ___q4_10; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q4_10() { return &___q4_10; }
	inline void set_q4_10(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q4_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q4_10), (void*)value);
	}

	inline static int32_t get_offset_of_q5_11() { return static_cast<int32_t>(offsetof(Zip_t0BA95E174034BF81AEBB96CE42C27C1A75805B24, ___q5_11)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q5_11() const { return ___q5_11; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q5_11() { return &___q5_11; }
	inline void set_q5_11(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q5_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q5_11), (void*)value);
	}

	inline static int32_t get_offset_of_q6_12() { return static_cast<int32_t>(offsetof(Zip_t0BA95E174034BF81AEBB96CE42C27C1A75805B24, ___q6_12)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q6_12() const { return ___q6_12; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q6_12() { return &___q6_12; }
	inline void set_q6_12(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q6_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q6_12), (void*)value);
	}

	inline static int32_t get_offset_of_q7_13() { return static_cast<int32_t>(offsetof(Zip_t0BA95E174034BF81AEBB96CE42C27C1A75805B24, ___q7_13)); }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * get_q7_13() const { return ___q7_13; }
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** get_address_of_q7_13() { return &___q7_13; }
	inline void set_q7_13(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		___q7_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___q7_13), (void*)value);
	}
};


// UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_t20F1AB22C93911EA87F0EC37F07CC3E5B998327F  : public NthZipLatestObserverBase_1_t6F813A271D5EBE9494AD05FD5062388354B6AD75
{
public:
	// UniRx.Operators.ZipLatestObservable`4<T1,T2,T3,TR> UniRx.Operators.ZipLatestObservable`4/ZipLatest::parent
	ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 * ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`4/ZipLatest::gate
	RuntimeObject * ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`4/ZipLatest::c1
	ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`4/ZipLatest::c2
	ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`4/ZipLatest::c3
	ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * ___c3_9;

public:
	inline static int32_t get_offset_of_parent_5() { return static_cast<int32_t>(offsetof(ZipLatest_t20F1AB22C93911EA87F0EC37F07CC3E5B998327F, ___parent_5)); }
	inline ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 * get_parent_5() const { return ___parent_5; }
	inline ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 ** get_address_of_parent_5() { return &___parent_5; }
	inline void set_parent_5(ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 * value)
	{
		___parent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_5), (void*)value);
	}

	inline static int32_t get_offset_of_gate_6() { return static_cast<int32_t>(offsetof(ZipLatest_t20F1AB22C93911EA87F0EC37F07CC3E5B998327F, ___gate_6)); }
	inline RuntimeObject * get_gate_6() const { return ___gate_6; }
	inline RuntimeObject ** get_address_of_gate_6() { return &___gate_6; }
	inline void set_gate_6(RuntimeObject * value)
	{
		___gate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_6), (void*)value);
	}

	inline static int32_t get_offset_of_c1_7() { return static_cast<int32_t>(offsetof(ZipLatest_t20F1AB22C93911EA87F0EC37F07CC3E5B998327F, ___c1_7)); }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * get_c1_7() const { return ___c1_7; }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 ** get_address_of_c1_7() { return &___c1_7; }
	inline void set_c1_7(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * value)
	{
		___c1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c1_7), (void*)value);
	}

	inline static int32_t get_offset_of_c2_8() { return static_cast<int32_t>(offsetof(ZipLatest_t20F1AB22C93911EA87F0EC37F07CC3E5B998327F, ___c2_8)); }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * get_c2_8() const { return ___c2_8; }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 ** get_address_of_c2_8() { return &___c2_8; }
	inline void set_c2_8(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * value)
	{
		___c2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c2_8), (void*)value);
	}

	inline static int32_t get_offset_of_c3_9() { return static_cast<int32_t>(offsetof(ZipLatest_t20F1AB22C93911EA87F0EC37F07CC3E5B998327F, ___c3_9)); }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * get_c3_9() const { return ___c3_9; }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 ** get_address_of_c3_9() { return &___c3_9; }
	inline void set_c3_9(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * value)
	{
		___c3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c3_9), (void*)value);
	}
};


// UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_t8B2237E24744E77887FB25D402D547CF534EBA80  : public NthZipLatestObserverBase_1_t6F813A271D5EBE9494AD05FD5062388354B6AD75
{
public:
	// UniRx.Operators.ZipLatestObservable`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipLatestObservable`5/ZipLatest::parent
	ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 * ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`5/ZipLatest::gate
	RuntimeObject * ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c1
	ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c2
	ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c3
	ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c4
	ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * ___c4_10;

public:
	inline static int32_t get_offset_of_parent_5() { return static_cast<int32_t>(offsetof(ZipLatest_t8B2237E24744E77887FB25D402D547CF534EBA80, ___parent_5)); }
	inline ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 * get_parent_5() const { return ___parent_5; }
	inline ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 ** get_address_of_parent_5() { return &___parent_5; }
	inline void set_parent_5(ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 * value)
	{
		___parent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_5), (void*)value);
	}

	inline static int32_t get_offset_of_gate_6() { return static_cast<int32_t>(offsetof(ZipLatest_t8B2237E24744E77887FB25D402D547CF534EBA80, ___gate_6)); }
	inline RuntimeObject * get_gate_6() const { return ___gate_6; }
	inline RuntimeObject ** get_address_of_gate_6() { return &___gate_6; }
	inline void set_gate_6(RuntimeObject * value)
	{
		___gate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_6), (void*)value);
	}

	inline static int32_t get_offset_of_c1_7() { return static_cast<int32_t>(offsetof(ZipLatest_t8B2237E24744E77887FB25D402D547CF534EBA80, ___c1_7)); }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * get_c1_7() const { return ___c1_7; }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 ** get_address_of_c1_7() { return &___c1_7; }
	inline void set_c1_7(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * value)
	{
		___c1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c1_7), (void*)value);
	}

	inline static int32_t get_offset_of_c2_8() { return static_cast<int32_t>(offsetof(ZipLatest_t8B2237E24744E77887FB25D402D547CF534EBA80, ___c2_8)); }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * get_c2_8() const { return ___c2_8; }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 ** get_address_of_c2_8() { return &___c2_8; }
	inline void set_c2_8(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * value)
	{
		___c2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c2_8), (void*)value);
	}

	inline static int32_t get_offset_of_c3_9() { return static_cast<int32_t>(offsetof(ZipLatest_t8B2237E24744E77887FB25D402D547CF534EBA80, ___c3_9)); }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * get_c3_9() const { return ___c3_9; }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 ** get_address_of_c3_9() { return &___c3_9; }
	inline void set_c3_9(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * value)
	{
		___c3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c3_9), (void*)value);
	}

	inline static int32_t get_offset_of_c4_10() { return static_cast<int32_t>(offsetof(ZipLatest_t8B2237E24744E77887FB25D402D547CF534EBA80, ___c4_10)); }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * get_c4_10() const { return ___c4_10; }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 ** get_address_of_c4_10() { return &___c4_10; }
	inline void set_c4_10(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * value)
	{
		___c4_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c4_10), (void*)value);
	}
};


// UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_tDEEB4918A762109EF19D972E2F30FFC4B5C58AC2  : public NthZipLatestObserverBase_1_t6F813A271D5EBE9494AD05FD5062388354B6AD75
{
public:
	// UniRx.Operators.ZipLatestObservable`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipLatestObservable`6/ZipLatest::parent
	ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E * ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`6/ZipLatest::gate
	RuntimeObject * ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c1
	ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c2
	ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c3
	ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c4
	ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * ___c4_10;
	// UniRx.Operators.ZipLatestObserver`1<T5> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c5
	ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * ___c5_11;

public:
	inline static int32_t get_offset_of_parent_5() { return static_cast<int32_t>(offsetof(ZipLatest_tDEEB4918A762109EF19D972E2F30FFC4B5C58AC2, ___parent_5)); }
	inline ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E * get_parent_5() const { return ___parent_5; }
	inline ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E ** get_address_of_parent_5() { return &___parent_5; }
	inline void set_parent_5(ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E * value)
	{
		___parent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_5), (void*)value);
	}

	inline static int32_t get_offset_of_gate_6() { return static_cast<int32_t>(offsetof(ZipLatest_tDEEB4918A762109EF19D972E2F30FFC4B5C58AC2, ___gate_6)); }
	inline RuntimeObject * get_gate_6() const { return ___gate_6; }
	inline RuntimeObject ** get_address_of_gate_6() { return &___gate_6; }
	inline void set_gate_6(RuntimeObject * value)
	{
		___gate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_6), (void*)value);
	}

	inline static int32_t get_offset_of_c1_7() { return static_cast<int32_t>(offsetof(ZipLatest_tDEEB4918A762109EF19D972E2F30FFC4B5C58AC2, ___c1_7)); }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * get_c1_7() const { return ___c1_7; }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 ** get_address_of_c1_7() { return &___c1_7; }
	inline void set_c1_7(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * value)
	{
		___c1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c1_7), (void*)value);
	}

	inline static int32_t get_offset_of_c2_8() { return static_cast<int32_t>(offsetof(ZipLatest_tDEEB4918A762109EF19D972E2F30FFC4B5C58AC2, ___c2_8)); }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * get_c2_8() const { return ___c2_8; }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 ** get_address_of_c2_8() { return &___c2_8; }
	inline void set_c2_8(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * value)
	{
		___c2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c2_8), (void*)value);
	}

	inline static int32_t get_offset_of_c3_9() { return static_cast<int32_t>(offsetof(ZipLatest_tDEEB4918A762109EF19D972E2F30FFC4B5C58AC2, ___c3_9)); }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * get_c3_9() const { return ___c3_9; }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 ** get_address_of_c3_9() { return &___c3_9; }
	inline void set_c3_9(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * value)
	{
		___c3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c3_9), (void*)value);
	}

	inline static int32_t get_offset_of_c4_10() { return static_cast<int32_t>(offsetof(ZipLatest_tDEEB4918A762109EF19D972E2F30FFC4B5C58AC2, ___c4_10)); }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * get_c4_10() const { return ___c4_10; }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 ** get_address_of_c4_10() { return &___c4_10; }
	inline void set_c4_10(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * value)
	{
		___c4_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c4_10), (void*)value);
	}

	inline static int32_t get_offset_of_c5_11() { return static_cast<int32_t>(offsetof(ZipLatest_tDEEB4918A762109EF19D972E2F30FFC4B5C58AC2, ___c5_11)); }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * get_c5_11() const { return ___c5_11; }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 ** get_address_of_c5_11() { return &___c5_11; }
	inline void set_c5_11(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * value)
	{
		___c5_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c5_11), (void*)value);
	}
};


// UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_tA523166BE7EABB4D4B6CA83AB5B9340210892DE9  : public NthZipLatestObserverBase_1_t6F813A271D5EBE9494AD05FD5062388354B6AD75
{
public:
	// UniRx.Operators.ZipLatestObservable`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipLatestObservable`7/ZipLatest::parent
	ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 * ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`7/ZipLatest::gate
	RuntimeObject * ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c1
	ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c2
	ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c3
	ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c4
	ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * ___c4_10;
	// UniRx.Operators.ZipLatestObserver`1<T5> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c5
	ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * ___c5_11;
	// UniRx.Operators.ZipLatestObserver`1<T6> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c6
	ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * ___c6_12;

public:
	inline static int32_t get_offset_of_parent_5() { return static_cast<int32_t>(offsetof(ZipLatest_tA523166BE7EABB4D4B6CA83AB5B9340210892DE9, ___parent_5)); }
	inline ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 * get_parent_5() const { return ___parent_5; }
	inline ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 ** get_address_of_parent_5() { return &___parent_5; }
	inline void set_parent_5(ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 * value)
	{
		___parent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_5), (void*)value);
	}

	inline static int32_t get_offset_of_gate_6() { return static_cast<int32_t>(offsetof(ZipLatest_tA523166BE7EABB4D4B6CA83AB5B9340210892DE9, ___gate_6)); }
	inline RuntimeObject * get_gate_6() const { return ___gate_6; }
	inline RuntimeObject ** get_address_of_gate_6() { return &___gate_6; }
	inline void set_gate_6(RuntimeObject * value)
	{
		___gate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_6), (void*)value);
	}

	inline static int32_t get_offset_of_c1_7() { return static_cast<int32_t>(offsetof(ZipLatest_tA523166BE7EABB4D4B6CA83AB5B9340210892DE9, ___c1_7)); }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * get_c1_7() const { return ___c1_7; }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 ** get_address_of_c1_7() { return &___c1_7; }
	inline void set_c1_7(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * value)
	{
		___c1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c1_7), (void*)value);
	}

	inline static int32_t get_offset_of_c2_8() { return static_cast<int32_t>(offsetof(ZipLatest_tA523166BE7EABB4D4B6CA83AB5B9340210892DE9, ___c2_8)); }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * get_c2_8() const { return ___c2_8; }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 ** get_address_of_c2_8() { return &___c2_8; }
	inline void set_c2_8(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * value)
	{
		___c2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c2_8), (void*)value);
	}

	inline static int32_t get_offset_of_c3_9() { return static_cast<int32_t>(offsetof(ZipLatest_tA523166BE7EABB4D4B6CA83AB5B9340210892DE9, ___c3_9)); }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * get_c3_9() const { return ___c3_9; }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 ** get_address_of_c3_9() { return &___c3_9; }
	inline void set_c3_9(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * value)
	{
		___c3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c3_9), (void*)value);
	}

	inline static int32_t get_offset_of_c4_10() { return static_cast<int32_t>(offsetof(ZipLatest_tA523166BE7EABB4D4B6CA83AB5B9340210892DE9, ___c4_10)); }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * get_c4_10() const { return ___c4_10; }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 ** get_address_of_c4_10() { return &___c4_10; }
	inline void set_c4_10(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * value)
	{
		___c4_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c4_10), (void*)value);
	}

	inline static int32_t get_offset_of_c5_11() { return static_cast<int32_t>(offsetof(ZipLatest_tA523166BE7EABB4D4B6CA83AB5B9340210892DE9, ___c5_11)); }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * get_c5_11() const { return ___c5_11; }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 ** get_address_of_c5_11() { return &___c5_11; }
	inline void set_c5_11(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * value)
	{
		___c5_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c5_11), (void*)value);
	}

	inline static int32_t get_offset_of_c6_12() { return static_cast<int32_t>(offsetof(ZipLatest_tA523166BE7EABB4D4B6CA83AB5B9340210892DE9, ___c6_12)); }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * get_c6_12() const { return ___c6_12; }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 ** get_address_of_c6_12() { return &___c6_12; }
	inline void set_c6_12(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * value)
	{
		___c6_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c6_12), (void*)value);
	}
};


// UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatest_t47889B985CBFCE2D038A6C0CB8E42DE8C062E068  : public NthZipLatestObserverBase_1_t6F813A271D5EBE9494AD05FD5062388354B6AD75
{
public:
	// UniRx.Operators.ZipLatestObservable`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipLatestObservable`8/ZipLatest::parent
	ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C * ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`8/ZipLatest::gate
	RuntimeObject * ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c1
	ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c2
	ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c3
	ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c4
	ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * ___c4_10;
	// UniRx.Operators.ZipLatestObserver`1<T5> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c5
	ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * ___c5_11;
	// UniRx.Operators.ZipLatestObserver`1<T6> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c6
	ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * ___c6_12;
	// UniRx.Operators.ZipLatestObserver`1<T7> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c7
	ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * ___c7_13;

public:
	inline static int32_t get_offset_of_parent_5() { return static_cast<int32_t>(offsetof(ZipLatest_t47889B985CBFCE2D038A6C0CB8E42DE8C062E068, ___parent_5)); }
	inline ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C * get_parent_5() const { return ___parent_5; }
	inline ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C ** get_address_of_parent_5() { return &___parent_5; }
	inline void set_parent_5(ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C * value)
	{
		___parent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_5), (void*)value);
	}

	inline static int32_t get_offset_of_gate_6() { return static_cast<int32_t>(offsetof(ZipLatest_t47889B985CBFCE2D038A6C0CB8E42DE8C062E068, ___gate_6)); }
	inline RuntimeObject * get_gate_6() const { return ___gate_6; }
	inline RuntimeObject ** get_address_of_gate_6() { return &___gate_6; }
	inline void set_gate_6(RuntimeObject * value)
	{
		___gate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gate_6), (void*)value);
	}

	inline static int32_t get_offset_of_c1_7() { return static_cast<int32_t>(offsetof(ZipLatest_t47889B985CBFCE2D038A6C0CB8E42DE8C062E068, ___c1_7)); }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * get_c1_7() const { return ___c1_7; }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 ** get_address_of_c1_7() { return &___c1_7; }
	inline void set_c1_7(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * value)
	{
		___c1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c1_7), (void*)value);
	}

	inline static int32_t get_offset_of_c2_8() { return static_cast<int32_t>(offsetof(ZipLatest_t47889B985CBFCE2D038A6C0CB8E42DE8C062E068, ___c2_8)); }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * get_c2_8() const { return ___c2_8; }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 ** get_address_of_c2_8() { return &___c2_8; }
	inline void set_c2_8(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * value)
	{
		___c2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c2_8), (void*)value);
	}

	inline static int32_t get_offset_of_c3_9() { return static_cast<int32_t>(offsetof(ZipLatest_t47889B985CBFCE2D038A6C0CB8E42DE8C062E068, ___c3_9)); }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * get_c3_9() const { return ___c3_9; }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 ** get_address_of_c3_9() { return &___c3_9; }
	inline void set_c3_9(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * value)
	{
		___c3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c3_9), (void*)value);
	}

	inline static int32_t get_offset_of_c4_10() { return static_cast<int32_t>(offsetof(ZipLatest_t47889B985CBFCE2D038A6C0CB8E42DE8C062E068, ___c4_10)); }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * get_c4_10() const { return ___c4_10; }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 ** get_address_of_c4_10() { return &___c4_10; }
	inline void set_c4_10(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * value)
	{
		___c4_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c4_10), (void*)value);
	}

	inline static int32_t get_offset_of_c5_11() { return static_cast<int32_t>(offsetof(ZipLatest_t47889B985CBFCE2D038A6C0CB8E42DE8C062E068, ___c5_11)); }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * get_c5_11() const { return ___c5_11; }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 ** get_address_of_c5_11() { return &___c5_11; }
	inline void set_c5_11(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * value)
	{
		___c5_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c5_11), (void*)value);
	}

	inline static int32_t get_offset_of_c6_12() { return static_cast<int32_t>(offsetof(ZipLatest_t47889B985CBFCE2D038A6C0CB8E42DE8C062E068, ___c6_12)); }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * get_c6_12() const { return ___c6_12; }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 ** get_address_of_c6_12() { return &___c6_12; }
	inline void set_c6_12(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * value)
	{
		___c6_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c6_12), (void*)value);
	}

	inline static int32_t get_offset_of_c7_13() { return static_cast<int32_t>(offsetof(ZipLatest_t47889B985CBFCE2D038A6C0CB8E42DE8C062E068, ___c7_13)); }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * get_c7_13() const { return ___c7_13; }
	inline ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 ** get_address_of_c7_13() { return &___c7_13; }
	inline void set_c7_13(ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * value)
	{
		___c7_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c7_13), (void*)value);
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27  : public MulticastDelegate_t
{
public:

public:
};


// UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_4_t505910809D87AAC499E7BA3A2825D94CB6AB211B  : public MulticastDelegate_t
{
public:

public:
};


// UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_5_tF2AEB30C5ED3B56CF895E857FAA7C64B512BB476  : public MulticastDelegate_t
{
public:

public:
};


// UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_6_tE402A210998EFF5E6094C07B9A537A45986F3709  : public MulticastDelegate_t
{
public:

public:
};


// UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_7_tABC414FCC717501CBEED1ADE34E677D99B8DC3EC  : public MulticastDelegate_t
{
public:

public:
};


// UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipFunc_8_tE636EE02A54058933CDDB715EAE402AD62776D8A  : public MulticastDelegate_t
{
public:

public:
};


// UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_4_t068AA5074A55A9170C834EA64F905EC3D61E11CD  : public MulticastDelegate_t
{
public:

public:
};


// UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_5_t034B18D7B7806B768547ED63ED6523F49D3EE0B2  : public MulticastDelegate_t
{
public:

public:
};


// UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_6_tF57A196B92A803627A820609E6441E884CEC0366  : public MulticastDelegate_t
{
public:

public:
};


// UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_7_t0D0C162176AFF4EA815561A183E0CADD1B8C5B86  : public MulticastDelegate_t
{
public:

public:
};


// UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>
struct ZipLatestFunc_8_tEB12C1F53C18B98647F21300DA101C6A90F29305  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Collections.ICollection[]
struct ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
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
// System.IDisposable[]
struct IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UniRx.IObservable`1<System.Object>[]
struct IObservable_1U5BU5D_tA28A0BBFB2F67C11476091A974CA931722B8EAD8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.Queue`1<System.Object>[]
struct Queue_1U5BU5D_t43C618669FBD9DCD6C5D7E717FB9A5B70ED49A40  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * m_Items[1];

public:
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.IDisposable UniRx.Disposable::Create(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Disposable_Create_m37A7F3C7DA8C871E60BB707BE2A34398514D0E33 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___disposeAction0, const RuntimeMethod* method);
// UniRx.ICancelable UniRx.StableCompositeDisposable::Create(System.IDisposable[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_Create_mBC13843A41918AB7409895E4C900877A9ED60530 (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* ___disposables0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// UniRx.ICancelable UniRx.StableCompositeDisposable::CreateUnsafe(System.IDisposable[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_CreateUnsafe_m3C090942EE08ACF17C840A7D22240387FE4B5088 (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* ___disposables0, const RuntimeMethod* method);
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F (RuntimeArray * ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method);
// UniRx.ICancelable UniRx.StableCompositeDisposable::Create(System.IDisposable,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_Create_mADBA75E6AF2DE20AB8F120A28D0B10F5AEBDA091 (RuntimeObject* ___disposable10, RuntimeObject* ___disposable21, const RuntimeMethod* method);
// UniRx.ICancelable UniRx.StableCompositeDisposable::Create(System.IDisposable,System.IDisposable,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_Create_mEB8D3CAD3844FE5C9D0977C748D938FB3D27A430 (RuntimeObject* ___disposable10, RuntimeObject* ___disposable21, RuntimeObject* ___disposable32, const RuntimeMethod* method);
// UniRx.ICancelable UniRx.StableCompositeDisposable::Create(System.IDisposable,System.IDisposable,System.IDisposable,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_Create_m371A92E54178529B07FCEEF78A214B246FDC8D88 (RuntimeObject* ___disposable10, RuntimeObject* ___disposable21, RuntimeObject* ___disposable32, RuntimeObject* ___disposable43, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.Operators.ZipObservable`7<T1,T2,T3,T4,T5,T6,TR>,UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_mB959336693681F68339FB00B8D8E7B80419831E3_gshared (Zip_t29F08489999A6A3B3C7A5D088D83B687439565EC * __this, ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A * ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set_gate_6(L_0);
		// readonly Queue<T1> q1 = new Queue<T1>();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_1 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_q1_7(L_1);
		// readonly Queue<T2> q2 = new Queue<T2>();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_2 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_q2_8(L_2);
		// readonly Queue<T3> q3 = new Queue<T3>();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_3 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		__this->set_q3_9(L_3);
		// readonly Queue<T4> q4 = new Queue<T4>();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_4 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6));
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)(L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		__this->set_q4_10(L_4);
		// readonly Queue<T5> q5 = new Queue<T5>();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_5 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)(L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		__this->set_q5_11(L_5);
		// readonly Queue<T6> q6 = new Queue<T6>();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_6 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		__this->set_q6_12(L_6);
		// : base(observer, cancel)
		RuntimeObject* L_7 = ___observer1;
		RuntimeObject* L_8 = ___cancel2;
		NullCheck((NthZipObserverBase_1_t0EDC60BC1843F8758B2334391375B16FD1F6CFD1 *)__this);
		((  void (*) (NthZipObserverBase_1_t0EDC60BC1843F8758B2334391375B16FD1F6CFD1 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((NthZipObserverBase_1_t0EDC60BC1843F8758B2334391375B16FD1F6CFD1 *)__this, (RuntimeObject*)L_7, (RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		// this.parent = parent;
		ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A * L_9 = ___parent0;
		__this->set_parent_5(L_9);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_m606230B6C5130DF3A88F99CB34D62EA6090575D0_gshared (Zip_t29F08489999A6A3B3C7A5D088D83B687439565EC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_tD750422635DCFBAF8826C1A08801916FA5798D8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		// base.SetQueue(new System.Collections.ICollection[] { q1, q2, q3, q4, q5, q6 });
		ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8* L_0 = (ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8*)(ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8*)SZArrayNew(ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8_il2cpp_TypeInfo_var, (uint32_t)6);
		ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8* L_1 = (ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8*)L_0;
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_2 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q1_7();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8* L_3 = (ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8*)L_1;
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_4 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q2_8();
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8* L_5 = (ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8*)L_3;
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_6 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q3_9();
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8* L_7 = (ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8*)L_5;
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_8 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q4_10();
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_8);
		ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8* L_9 = (ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8*)L_7;
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_10 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q5_11();
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_10);
		ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8* L_11 = (ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8*)L_9;
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_12 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q6_12();
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_12);
		NullCheck((NthZipObserverBase_1_t0EDC60BC1843F8758B2334391375B16FD1F6CFD1 *)__this);
		((  void (*) (NthZipObserverBase_1_t0EDC60BC1843F8758B2334391375B16FD1F6CFD1 *, ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((NthZipObserverBase_1_t0EDC60BC1843F8758B2334391375B16FD1F6CFD1 *)__this, (ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8*)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		// var s1 = parent.source1.Subscribe(new ZipObserver<T1>(gate, this, 0, q1));
		ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A * L_13 = (ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A *)__this->get_parent_5();
		NullCheck(L_13);
		RuntimeObject* L_14 = (RuntimeObject*)L_13->get_source1_1();
		RuntimeObject * L_15 = (RuntimeObject *)__this->get_gate_6();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_16 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q1_7();
		ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 * L_17 = (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 16));
		((  void (*) (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 *, RuntimeObject *, RuntimeObject*, int32_t, Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)(L_17, (RuntimeObject *)L_15, (RuntimeObject*)__this, (int32_t)0, (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		NullCheck((RuntimeObject*)L_14);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), (RuntimeObject*)L_14, (RuntimeObject*)L_17);
		V_0 = (RuntimeObject*)L_18;
		// var s2 = parent.source2.Subscribe(new ZipObserver<T2>(gate, this, 1, q2));
		ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A * L_19 = (ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A *)__this->get_parent_5();
		NullCheck(L_19);
		RuntimeObject* L_20 = (RuntimeObject*)L_19->get_source2_2();
		RuntimeObject * L_21 = (RuntimeObject *)__this->get_gate_6();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_22 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q2_8();
		ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 * L_23 = (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 19));
		((  void (*) (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 *, RuntimeObject *, RuntimeObject*, int32_t, Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20)->methodPointer)(L_23, (RuntimeObject *)L_21, (RuntimeObject*)__this, (int32_t)1, (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_22, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
		NullCheck((RuntimeObject*)L_20);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 21), (RuntimeObject*)L_20, (RuntimeObject*)L_23);
		V_1 = (RuntimeObject*)L_24;
		// var s3 = parent.source3.Subscribe(new ZipObserver<T3>(gate, this, 2, q3));
		ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A * L_25 = (ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A *)__this->get_parent_5();
		NullCheck(L_25);
		RuntimeObject* L_26 = (RuntimeObject*)L_25->get_source3_3();
		RuntimeObject * L_27 = (RuntimeObject *)__this->get_gate_6();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_28 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q3_9();
		ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 * L_29 = (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 22));
		((  void (*) (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 *, RuntimeObject *, RuntimeObject*, int32_t, Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 23)->methodPointer)(L_29, (RuntimeObject *)L_27, (RuntimeObject*)__this, (int32_t)2, (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_28, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 23));
		NullCheck((RuntimeObject*)L_26);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 24), (RuntimeObject*)L_26, (RuntimeObject*)L_29);
		V_2 = (RuntimeObject*)L_30;
		// var s4 = parent.source4.Subscribe(new ZipObserver<T4>(gate, this, 3, q4));
		ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A * L_31 = (ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A *)__this->get_parent_5();
		NullCheck(L_31);
		RuntimeObject* L_32 = (RuntimeObject*)L_31->get_source4_4();
		RuntimeObject * L_33 = (RuntimeObject *)__this->get_gate_6();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_34 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q4_10();
		ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 * L_35 = (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 25));
		((  void (*) (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 *, RuntimeObject *, RuntimeObject*, int32_t, Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 26)->methodPointer)(L_35, (RuntimeObject *)L_33, (RuntimeObject*)__this, (int32_t)3, (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_34, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 26));
		NullCheck((RuntimeObject*)L_32);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 27), (RuntimeObject*)L_32, (RuntimeObject*)L_35);
		V_3 = (RuntimeObject*)L_36;
		// var s5 = parent.source5.Subscribe(new ZipObserver<T5>(gate, this, 4, q5));
		ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A * L_37 = (ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A *)__this->get_parent_5();
		NullCheck(L_37);
		RuntimeObject* L_38 = (RuntimeObject*)L_37->get_source5_5();
		RuntimeObject * L_39 = (RuntimeObject *)__this->get_gate_6();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_40 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q5_11();
		ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 * L_41 = (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 28));
		((  void (*) (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 *, RuntimeObject *, RuntimeObject*, int32_t, Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 29)->methodPointer)(L_41, (RuntimeObject *)L_39, (RuntimeObject*)__this, (int32_t)4, (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_40, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 29));
		NullCheck((RuntimeObject*)L_38);
		RuntimeObject* L_42;
		L_42 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 30), (RuntimeObject*)L_38, (RuntimeObject*)L_41);
		V_4 = (RuntimeObject*)L_42;
		// var s6 = parent.source6.Subscribe(new ZipObserver<T6>(gate, this, 5, q6));
		ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A * L_43 = (ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A *)__this->get_parent_5();
		NullCheck(L_43);
		RuntimeObject* L_44 = (RuntimeObject*)L_43->get_source6_6();
		RuntimeObject * L_45 = (RuntimeObject *)__this->get_gate_6();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_46 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q6_12();
		ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 * L_47 = (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 31));
		((  void (*) (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 *, RuntimeObject *, RuntimeObject*, int32_t, Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32)->methodPointer)(L_47, (RuntimeObject *)L_45, (RuntimeObject*)__this, (int32_t)5, (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_46, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 32));
		NullCheck((RuntimeObject*)L_44);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 33), (RuntimeObject*)L_44, (RuntimeObject*)L_47);
		V_5 = (RuntimeObject*)L_48;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, s5, s6, Disposable.Create(() =>
		// {
		//     lock (gate)
		//     {
		//         q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
		//     }
		// }));
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_49 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)(IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)SZArrayNew(IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65_il2cpp_TypeInfo_var, (uint32_t)7);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_50 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_49;
		RuntimeObject* L_51 = V_0;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_51);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_52 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_50;
		RuntimeObject* L_53 = V_1;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_53);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_53);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_54 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_52;
		RuntimeObject* L_55 = V_2;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_55);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_55);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_56 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_54;
		RuntimeObject* L_57 = V_3;
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_57);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_57);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_58 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_56;
		RuntimeObject* L_59 = V_4;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_59);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_60 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_58;
		RuntimeObject* L_61 = V_5;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_61);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_61);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_62 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_60;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_63 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_63, (RuntimeObject *)__this, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 34)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Disposable_tD750422635DCFBAF8826C1A08801916FA5798D8E_il2cpp_TypeInfo_var);
		RuntimeObject* L_64;
		L_64 = Disposable_Create_m37A7F3C7DA8C871E60BB707BE2A34398514D0E33((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_63, /*hidden argument*/NULL);
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_64);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_64);
		RuntimeObject* L_65;
		L_65 = StableCompositeDisposable_Create_mBC13843A41918AB7409895E4C900877A9ED60530((IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_62, /*hidden argument*/NULL);
		return (RuntimeObject*)L_65;
	}
}
// TR UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Zip_GetResult_mBD35109D272EC59CE8175313EF9F4BA84DAA359D_gshared (Zip_t29F08489999A6A3B3C7A5D088D83B687439565EC * __this, const RuntimeMethod* method)
{
	{
		// return parent.resultSelector(q1.Dequeue(), q2.Dequeue(), q3.Dequeue(), q4.Dequeue(), q5.Dequeue(), q6.Dequeue());
		ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A * L_0 = (ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A *)__this->get_parent_5();
		NullCheck(L_0);
		ZipFunc_7_tABC414FCC717501CBEED1ADE34E677D99B8DC3EC * L_1 = (ZipFunc_7_tABC414FCC717501CBEED1ADE34E677D99B8DC3EC *)L_0->get_resultSelector_7();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_2 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q1_7();
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_2);
		RuntimeObject * L_3;
		L_3 = ((  RuntimeObject * (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 35)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 35));
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_4 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q2_8();
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_4);
		RuntimeObject * L_5;
		L_5 = ((  RuntimeObject * (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 36)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 36));
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_6 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q3_9();
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_6);
		RuntimeObject * L_7;
		L_7 = ((  RuntimeObject * (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 37)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 37));
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_8 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q4_10();
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_8);
		RuntimeObject * L_9;
		L_9 = ((  RuntimeObject * (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 38)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 38));
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_10 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q5_11();
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_10);
		RuntimeObject * L_11;
		L_11 = ((  RuntimeObject * (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 39)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 39));
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_12 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q6_12();
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_12);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 40)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 40));
		NullCheck((ZipFunc_7_tABC414FCC717501CBEED1ADE34E677D99B8DC3EC *)L_1);
		RuntimeObject * L_14;
		L_14 = ((  RuntimeObject * (*) (ZipFunc_7_tABC414FCC717501CBEED1ADE34E677D99B8DC3EC *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 41)->methodPointer)((ZipFunc_7_tABC414FCC717501CBEED1ADE34E677D99B8DC3EC *)L_1, (RuntimeObject *)L_3, (RuntimeObject *)L_5, (RuntimeObject *)L_7, (RuntimeObject *)L_9, (RuntimeObject *)L_11, (RuntimeObject *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 41));
		return (RuntimeObject *)L_14;
	}
}
// System.Void UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_m39E7EC4778AFC42C5808E0DACF4301878DBC8BC1_gshared (Zip_t29F08489999A6A3B3C7A5D088D83B687439565EC * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		RuntimeObject * L_1 = ___value0;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Object>::OnNext(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 42), (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_m4BC71C3428A0ED5957F4CE6744654E36F690B1D2_gshared (Zip_t29F08489999A6A3B3C7A5D088D83B687439565EC * __this, Exception_t * ___error0, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// try { observer.OnError(error); }
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		Exception_t * L_1 = ___error0;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker1< Exception_t * >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Object>::OnError(System.Exception) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 42), (RuntimeObject*)L_0, (Exception_t *)L_1);
		// try { observer.OnError(error); }
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		// finally { Dispose(); }
		NullCheck((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this);
		((  void (*) (OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 43)->methodPointer)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 43));
		// finally { Dispose(); }
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x17, IL_0017)
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_m2CE7CB30BCECB6225EF8B9F48572E7368BF4092F_gshared (Zip_t29F08489999A6A3B3C7A5D088D83B687439565EC * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// try { observer.OnCompleted(); }
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 42), (RuntimeObject*)L_0);
		// try { observer.OnCompleted(); }
		IL2CPP_LEAVE(0x16, FINALLY_000f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000f;
	}

FINALLY_000f:
	{ // begin finally (depth: 1)
		// finally { Dispose(); }
		NullCheck((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this);
		((  void (*) (OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 43)->methodPointer)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 43));
		// finally { Dispose(); }
		IL2CPP_END_FINALLY(15)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(15)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`7/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::<Run>b__9_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__9_0_mBB7FA4E6E23D6B1C1641A99C1E6F1E1CCECB47DF_gshared (Zip_t29F08489999A6A3B3C7A5D088D83B687439565EC * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (gate)
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_gate_6();
		V_0 = (RuntimeObject *)L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_1, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_2 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q1_7();
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_2);
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 44)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 44));
		// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_3 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q2_8();
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_3);
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 45)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 45));
		// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_4 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q3_9();
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_4);
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 46)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 46));
		// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_5 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q4_10();
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_5);
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 47)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 47));
		// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_6 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q5_11();
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_6);
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 48)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 48));
		// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_7 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q6_12();
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_7);
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 49)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 49));
		// }
		IL2CPP_LEAVE(0x5F, FINALLY_0055);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		{
			bool L_8 = V_1;
			if (!L_8)
			{
				goto IL_005e;
			}
		}

IL_0058:
		{
			RuntimeObject * L_9 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_9, /*hidden argument*/NULL);
		}

IL_005e:
		{
			IL2CPP_END_FINALLY(85)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5F, IL_005f)
	}

IL_005f:
	{
		// }));
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
// System.Void UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.Operators.ZipObservable`8<T1,T2,T3,T4,T5,T6,T7,TR>,UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_m8954FB8EAD0FCD888A080D68B2D5BAA9C18023D7_gshared (Zip_t0BA95E174034BF81AEBB96CE42C27C1A75805B24 * __this, ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF * ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set_gate_6(L_0);
		// readonly Queue<T1> q1 = new Queue<T1>();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_1 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_q1_7(L_1);
		// readonly Queue<T2> q2 = new Queue<T2>();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_2 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		__this->set_q2_8(L_2);
		// readonly Queue<T3> q3 = new Queue<T3>();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_3 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		__this->set_q3_9(L_3);
		// readonly Queue<T4> q4 = new Queue<T4>();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_4 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6));
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)(L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		__this->set_q4_10(L_4);
		// readonly Queue<T5> q5 = new Queue<T5>();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_5 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)(L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		__this->set_q5_11(L_5);
		// readonly Queue<T6> q6 = new Queue<T6>();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_6 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		__this->set_q6_12(L_6);
		// readonly Queue<T7> q7 = new Queue<T7>();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_7 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 12));
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)(L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		__this->set_q7_13(L_7);
		// : base(observer, cancel)
		RuntimeObject* L_8 = ___observer1;
		RuntimeObject* L_9 = ___cancel2;
		NullCheck((NthZipObserverBase_1_t0EDC60BC1843F8758B2334391375B16FD1F6CFD1 *)__this);
		((  void (*) (NthZipObserverBase_1_t0EDC60BC1843F8758B2334391375B16FD1F6CFD1 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((NthZipObserverBase_1_t0EDC60BC1843F8758B2334391375B16FD1F6CFD1 *)__this, (RuntimeObject*)L_8, (RuntimeObject*)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		// this.parent = parent;
		ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF * L_10 = ___parent0;
		__this->set_parent_5(L_10);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_m7D374CF944FBCEFB91FDB8B6681190B99ACBF4BC_gshared (Zip_t0BA95E174034BF81AEBB96CE42C27C1A75805B24 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_tD750422635DCFBAF8826C1A08801916FA5798D8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// base.SetQueue(new System.Collections.ICollection[] { q1, q2, q3, q4, q5, q6, q7 });
		ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8* L_0 = (ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8*)(ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8*)SZArrayNew(ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8_il2cpp_TypeInfo_var, (uint32_t)7);
		ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8* L_1 = (ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8*)L_0;
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_2 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q1_7();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8* L_3 = (ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8*)L_1;
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_4 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q2_8();
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8* L_5 = (ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8*)L_3;
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_6 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q3_9();
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8* L_7 = (ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8*)L_5;
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_8 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q4_10();
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_8);
		ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8* L_9 = (ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8*)L_7;
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_10 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q5_11();
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_10);
		ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8* L_11 = (ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8*)L_9;
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_12 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q6_12();
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_12);
		ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8* L_13 = (ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8*)L_11;
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_14 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q7_13();
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_14);
		NullCheck((NthZipObserverBase_1_t0EDC60BC1843F8758B2334391375B16FD1F6CFD1 *)__this);
		((  void (*) (NthZipObserverBase_1_t0EDC60BC1843F8758B2334391375B16FD1F6CFD1 *, ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((NthZipObserverBase_1_t0EDC60BC1843F8758B2334391375B16FD1F6CFD1 *)__this, (ICollectionU5BU5D_t4DA75741BFADECB3D4A64252B6081852D5AE25F8*)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		// var s1 = parent.source1.Subscribe(new ZipObserver<T1>(gate, this, 0, q1));
		ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF * L_15 = (ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF *)__this->get_parent_5();
		NullCheck(L_15);
		RuntimeObject* L_16 = (RuntimeObject*)L_15->get_source1_1();
		RuntimeObject * L_17 = (RuntimeObject *)__this->get_gate_6();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_18 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q1_7();
		ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 * L_19 = (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18));
		((  void (*) (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 *, RuntimeObject *, RuntimeObject*, int32_t, Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)(L_19, (RuntimeObject *)L_17, (RuntimeObject*)__this, (int32_t)0, (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		NullCheck((RuntimeObject*)L_16);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20), (RuntimeObject*)L_16, (RuntimeObject*)L_19);
		V_0 = (RuntimeObject*)L_20;
		// var s2 = parent.source2.Subscribe(new ZipObserver<T2>(gate, this, 1, q2));
		ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF * L_21 = (ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF *)__this->get_parent_5();
		NullCheck(L_21);
		RuntimeObject* L_22 = (RuntimeObject*)L_21->get_source2_2();
		RuntimeObject * L_23 = (RuntimeObject *)__this->get_gate_6();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_24 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q2_8();
		ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 * L_25 = (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 21));
		((  void (*) (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 *, RuntimeObject *, RuntimeObject*, int32_t, Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)(L_25, (RuntimeObject *)L_23, (RuntimeObject*)__this, (int32_t)1, (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
		NullCheck((RuntimeObject*)L_22);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 23), (RuntimeObject*)L_22, (RuntimeObject*)L_25);
		V_1 = (RuntimeObject*)L_26;
		// var s3 = parent.source3.Subscribe(new ZipObserver<T3>(gate, this, 2, q3));
		ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF * L_27 = (ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF *)__this->get_parent_5();
		NullCheck(L_27);
		RuntimeObject* L_28 = (RuntimeObject*)L_27->get_source3_3();
		RuntimeObject * L_29 = (RuntimeObject *)__this->get_gate_6();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_30 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q3_9();
		ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 * L_31 = (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 24));
		((  void (*) (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 *, RuntimeObject *, RuntimeObject*, int32_t, Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 25)->methodPointer)(L_31, (RuntimeObject *)L_29, (RuntimeObject*)__this, (int32_t)2, (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_30, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 25));
		NullCheck((RuntimeObject*)L_28);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 26), (RuntimeObject*)L_28, (RuntimeObject*)L_31);
		V_2 = (RuntimeObject*)L_32;
		// var s4 = parent.source4.Subscribe(new ZipObserver<T4>(gate, this, 3, q4));
		ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF * L_33 = (ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF *)__this->get_parent_5();
		NullCheck(L_33);
		RuntimeObject* L_34 = (RuntimeObject*)L_33->get_source4_4();
		RuntimeObject * L_35 = (RuntimeObject *)__this->get_gate_6();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_36 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q4_10();
		ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 * L_37 = (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 27));
		((  void (*) (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 *, RuntimeObject *, RuntimeObject*, int32_t, Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 28)->methodPointer)(L_37, (RuntimeObject *)L_35, (RuntimeObject*)__this, (int32_t)3, (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 28));
		NullCheck((RuntimeObject*)L_34);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 29), (RuntimeObject*)L_34, (RuntimeObject*)L_37);
		V_3 = (RuntimeObject*)L_38;
		// var s5 = parent.source5.Subscribe(new ZipObserver<T5>(gate, this, 4, q5));
		ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF * L_39 = (ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF *)__this->get_parent_5();
		NullCheck(L_39);
		RuntimeObject* L_40 = (RuntimeObject*)L_39->get_source5_5();
		RuntimeObject * L_41 = (RuntimeObject *)__this->get_gate_6();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_42 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q5_11();
		ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 * L_43 = (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 30));
		((  void (*) (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 *, RuntimeObject *, RuntimeObject*, int32_t, Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 31)->methodPointer)(L_43, (RuntimeObject *)L_41, (RuntimeObject*)__this, (int32_t)4, (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_42, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 31));
		NullCheck((RuntimeObject*)L_40);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 32), (RuntimeObject*)L_40, (RuntimeObject*)L_43);
		V_4 = (RuntimeObject*)L_44;
		// var s6 = parent.source6.Subscribe(new ZipObserver<T6>(gate, this, 5, q6));
		ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF * L_45 = (ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF *)__this->get_parent_5();
		NullCheck(L_45);
		RuntimeObject* L_46 = (RuntimeObject*)L_45->get_source6_6();
		RuntimeObject * L_47 = (RuntimeObject *)__this->get_gate_6();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_48 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q6_12();
		ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 * L_49 = (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 33));
		((  void (*) (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 *, RuntimeObject *, RuntimeObject*, int32_t, Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 34)->methodPointer)(L_49, (RuntimeObject *)L_47, (RuntimeObject*)__this, (int32_t)5, (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_48, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 34));
		NullCheck((RuntimeObject*)L_46);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 35), (RuntimeObject*)L_46, (RuntimeObject*)L_49);
		V_5 = (RuntimeObject*)L_50;
		// var s7 = parent.source7.Subscribe(new ZipObserver<T7>(gate, this, 6, q7));
		ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF * L_51 = (ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF *)__this->get_parent_5();
		NullCheck(L_51);
		RuntimeObject* L_52 = (RuntimeObject*)L_51->get_source7_7();
		RuntimeObject * L_53 = (RuntimeObject *)__this->get_gate_6();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_54 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q7_13();
		ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 * L_55 = (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 36));
		((  void (*) (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 *, RuntimeObject *, RuntimeObject*, int32_t, Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 37)->methodPointer)(L_55, (RuntimeObject *)L_53, (RuntimeObject*)__this, (int32_t)6, (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_54, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 37));
		NullCheck((RuntimeObject*)L_52);
		RuntimeObject* L_56;
		L_56 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 38), (RuntimeObject*)L_52, (RuntimeObject*)L_55);
		V_6 = (RuntimeObject*)L_56;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, s5, s6, s7, Disposable.Create(() =>
		// {
		//     lock (gate)
		//     {
		//         q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
		//     }
		// }));
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_57 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)(IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)SZArrayNew(IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65_il2cpp_TypeInfo_var, (uint32_t)8);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_58 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_57;
		RuntimeObject* L_59 = V_0;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_59);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_60 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_58;
		RuntimeObject* L_61 = V_1;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_61);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_61);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_62 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_60;
		RuntimeObject* L_63 = V_2;
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_63);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_63);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_64 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_62;
		RuntimeObject* L_65 = V_3;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, L_65);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_65);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_66 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_64;
		RuntimeObject* L_67 = V_4;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_67);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_67);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_68 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_66;
		RuntimeObject* L_69 = V_5;
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_69);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_69);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_70 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_68;
		RuntimeObject* L_71 = V_6;
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, L_71);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_71);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_72 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_70;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_73 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_73, (RuntimeObject *)__this, (intptr_t)((intptr_t)IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 39)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Disposable_tD750422635DCFBAF8826C1A08801916FA5798D8E_il2cpp_TypeInfo_var);
		RuntimeObject* L_74;
		L_74 = Disposable_Create_m37A7F3C7DA8C871E60BB707BE2A34398514D0E33((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_73, /*hidden argument*/NULL);
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_74);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_74);
		RuntimeObject* L_75;
		L_75 = StableCompositeDisposable_Create_mBC13843A41918AB7409895E4C900877A9ED60530((IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_72, /*hidden argument*/NULL);
		return (RuntimeObject*)L_75;
	}
}
// TR UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Zip_GetResult_m07EBBCEAF060FE9A505E83F4B9B171994ED626E1_gshared (Zip_t0BA95E174034BF81AEBB96CE42C27C1A75805B24 * __this, const RuntimeMethod* method)
{
	{
		// return parent.resultSelector(q1.Dequeue(), q2.Dequeue(), q3.Dequeue(), q4.Dequeue(), q5.Dequeue(), q6.Dequeue(), q7.Dequeue());
		ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF * L_0 = (ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF *)__this->get_parent_5();
		NullCheck(L_0);
		ZipFunc_8_tE636EE02A54058933CDDB715EAE402AD62776D8A * L_1 = (ZipFunc_8_tE636EE02A54058933CDDB715EAE402AD62776D8A *)L_0->get_resultSelector_8();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_2 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q1_7();
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_2);
		RuntimeObject * L_3;
		L_3 = ((  RuntimeObject * (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 40)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 40));
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_4 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q2_8();
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_4);
		RuntimeObject * L_5;
		L_5 = ((  RuntimeObject * (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 41)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 41));
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_6 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q3_9();
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_6);
		RuntimeObject * L_7;
		L_7 = ((  RuntimeObject * (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 42)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 42));
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_8 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q4_10();
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_8);
		RuntimeObject * L_9;
		L_9 = ((  RuntimeObject * (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 43)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 43));
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_10 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q5_11();
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_10);
		RuntimeObject * L_11;
		L_11 = ((  RuntimeObject * (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 44)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 44));
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_12 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q6_12();
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_12);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 45)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 45));
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_14 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q7_13();
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_14);
		RuntimeObject * L_15;
		L_15 = ((  RuntimeObject * (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 46)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 46));
		NullCheck((ZipFunc_8_tE636EE02A54058933CDDB715EAE402AD62776D8A *)L_1);
		RuntimeObject * L_16;
		L_16 = ((  RuntimeObject * (*) (ZipFunc_8_tE636EE02A54058933CDDB715EAE402AD62776D8A *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 47)->methodPointer)((ZipFunc_8_tE636EE02A54058933CDDB715EAE402AD62776D8A *)L_1, (RuntimeObject *)L_3, (RuntimeObject *)L_5, (RuntimeObject *)L_7, (RuntimeObject *)L_9, (RuntimeObject *)L_11, (RuntimeObject *)L_13, (RuntimeObject *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 47));
		return (RuntimeObject *)L_16;
	}
}
// System.Void UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_mD3EE7EAA7CDC5EB9C2363AE3AE2E390B8A373213_gshared (Zip_t0BA95E174034BF81AEBB96CE42C27C1A75805B24 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		RuntimeObject * L_1 = ___value0;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Object>::OnNext(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 48), (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_m171C5B3DB192C829450452B748FA1740C6A79E34_gshared (Zip_t0BA95E174034BF81AEBB96CE42C27C1A75805B24 * __this, Exception_t * ___error0, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// try { observer.OnError(error); }
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		Exception_t * L_1 = ___error0;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker1< Exception_t * >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Object>::OnError(System.Exception) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 48), (RuntimeObject*)L_0, (Exception_t *)L_1);
		// try { observer.OnError(error); }
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		// finally { Dispose(); }
		NullCheck((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this);
		((  void (*) (OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 49)->methodPointer)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 49));
		// finally { Dispose(); }
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x17, IL_0017)
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_mBE30A4C6AA98A1F9883FC788DAA019EC9CFDCFDE_gshared (Zip_t0BA95E174034BF81AEBB96CE42C27C1A75805B24 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// try { observer.OnCompleted(); }
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 48), (RuntimeObject*)L_0);
		// try { observer.OnCompleted(); }
		IL2CPP_LEAVE(0x16, FINALLY_000f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000f;
	}

FINALLY_000f:
	{ // begin finally (depth: 1)
		// finally { Dispose(); }
		NullCheck((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this);
		((  void (*) (OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 49)->methodPointer)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 49));
		// finally { Dispose(); }
		IL2CPP_END_FINALLY(15)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(15)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`8/Zip<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::<Run>b__10_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__10_0_m6866772976E2968A1EA8D1FEBA37256763545174_gshared (Zip_t0BA95E174034BF81AEBB96CE42C27C1A75805B24 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (gate)
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_gate_6();
		V_0 = (RuntimeObject *)L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_1, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_2 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q1_7();
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_2);
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 50)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 50));
		// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_3 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q2_8();
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_3);
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 51)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 51));
		// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_4 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q3_9();
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_4);
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 52)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 52));
		// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_5 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q4_10();
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_5);
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 53)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 53));
		// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_6 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q5_11();
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_6);
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 54)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 54));
		// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_7 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q6_12();
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_7);
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 55)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 55));
		// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_8 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_q7_13();
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_8);
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 56)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 56));
		// }
		IL2CPP_LEAVE(0x6A, FINALLY_0060);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0060;
	}

FINALLY_0060:
	{ // begin finally (depth: 1)
		{
			bool L_9 = V_1;
			if (!L_9)
			{
				goto IL_0069;
			}
		}

IL_0063:
		{
			RuntimeObject * L_10 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_10, /*hidden argument*/NULL);
		}

IL_0069:
		{
			IL2CPP_END_FINALLY(96)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(96)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6A, IL_006a)
	}

IL_006a:
	{
		// }));
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
// System.Void UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_4__ctor_m5565B7C6BC971805E419E8FF7E991BB957915268_gshared (ZipFunc_4_t505910809D87AAC499E7BA3A2825D94CB6AB211B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TR UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipFunc_4_Invoke_m18C3D5411CA52BD00FCCF170073810346F62A7F2_gshared (ZipFunc_4_t505910809D87AAC499E7BA3A2825D94CB6AB211B * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg10, ___arg21, ___arg32, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg10, ___arg21, ___arg32);
					else
						result = GenericVirtFuncInvoker2< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg10, ___arg21, ___arg32);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg10, ___arg21, ___arg32);
					else
						result = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg10, ___arg21, ___arg32);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg10, ___arg21, ___arg32);
					else
						result = GenericVirtFuncInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg10, ___arg21, ___arg32);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg10, ___arg21, ___arg32);
					else
						result = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg10, ___arg21, ___arg32);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg10, ___arg21, ___arg32, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_4_BeginInvoke_mA7211241FB4F6BC327ED09044040C552C4FE7D27_gshared (ZipFunc_4_t505910809D87AAC499E7BA3A2825D94CB6AB211B * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = ___arg32;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// TR UniRx.Operators.ZipFunc`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipFunc_4_EndInvoke_m554175A4CE728090863FE463B1403C53EB9E9BE6_gshared (ZipFunc_4_t505910809D87AAC499E7BA3A2825D94CB6AB211B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_5__ctor_mF23556D30B94642D96D4E0A4C2B18D442166676D_gshared (ZipFunc_5_tF2AEB30C5ED3B56CF895E857FAA7C64B512BB476 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TR UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipFunc_5_Invoke_mE552A036B6359F64281B4AE78979E78F484664AD_gshared (ZipFunc_5_tF2AEB30C5ED3B56CF895E857FAA7C64B512BB476 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, ___arg43, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg10, ___arg21, ___arg32, ___arg43, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg10, ___arg21, ___arg32, ___arg43);
					else
						result = GenericVirtFuncInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg10, ___arg21, ___arg32, ___arg43);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg10, ___arg21, ___arg32, ___arg43);
					else
						result = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg10, ___arg21, ___arg32, ___arg43);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, ___arg43, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg10, ___arg21, ___arg32, ___arg43);
					else
						result = GenericVirtFuncInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg10, ___arg21, ___arg32, ___arg43);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg10, ___arg21, ___arg32, ___arg43);
					else
						result = VirtFuncInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg10, ___arg21, ___arg32, ___arg43);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, ___arg43, targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg10, ___arg21, ___arg32, ___arg43, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_5_BeginInvoke_mF0D73A1F44DD9B621D3DF2FCE37EC72E27E2BED7_gshared (ZipFunc_5_tF2AEB30C5ED3B56CF895E857FAA7C64B512BB476 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = ___arg32;
	__d_args[3] = ___arg43;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// TR UniRx.Operators.ZipFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipFunc_5_EndInvoke_m850954AD605C1296826DD11C8EBA0A94BDF97A5E_gshared (ZipFunc_5_tF2AEB30C5ED3B56CF895E857FAA7C64B512BB476 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_6__ctor_m961FEC014366CF09278576935735707926F4A582_gshared (ZipFunc_6_tE402A210998EFF5E6094C07B9A537A45986F3709 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TR UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipFunc_6_Invoke_m8C4ACD53A3B3B0C88B55F35930C36D64A367F741_gshared (ZipFunc_6_tE402A210998EFF5E6094C07B9A537A45986F3709 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, RuntimeObject * ___arg54, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, ___arg43, ___arg54, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, targetMethod);
			}
		}
		else if (___parameterCount != 5)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
					else
						result = GenericVirtFuncInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
					else
						result = VirtFuncInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, ___arg43, ___arg54, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker5< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
					else
						result = GenericVirtFuncInvoker5< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
					else
						result = VirtFuncInvoker5< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, ___arg43, ___arg54, targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,T5,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_6_BeginInvoke_m60BF2E0063AA97DCF95542830B8AE45FE5EF5674_gshared (ZipFunc_6_tE402A210998EFF5E6094C07B9A537A45986F3709 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, RuntimeObject * ___arg54, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	void *__d_args[6] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = ___arg32;
	__d_args[3] = ___arg43;
	__d_args[4] = ___arg54;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// TR UniRx.Operators.ZipFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipFunc_6_EndInvoke_m6A579EFF5D51D83B391E9DCDE346E842EA32132D_gshared (ZipFunc_6_tE402A210998EFF5E6094C07B9A537A45986F3709 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_7__ctor_m110956175173ABB7AC5DB1904A555C1A007FA734_gshared (ZipFunc_7_tABC414FCC717501CBEED1ADE34E677D99B8DC3EC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TR UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4,T5,T6)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipFunc_7_Invoke_mAAA564B73B64694A82EC7D7DE7207A19DF862012_gshared (ZipFunc_7_tABC414FCC717501CBEED1ADE34E677D99B8DC3EC * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, RuntimeObject * ___arg54, RuntimeObject * ___arg65, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 6)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, targetMethod);
			}
		}
		else if (___parameterCount != 6)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker5< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
					else
						result = GenericVirtFuncInvoker5< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
					else
						result = VirtFuncInvoker5< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker6< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
					else
						result = GenericVirtFuncInvoker6< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker6< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
					else
						result = VirtFuncInvoker6< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,T5,T6,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_7_BeginInvoke_m9FF35F6CF9152215E9EFA0DEC0D5512AAE94515B_gshared (ZipFunc_7_tABC414FCC717501CBEED1ADE34E677D99B8DC3EC * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, RuntimeObject * ___arg54, RuntimeObject * ___arg65, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback6, RuntimeObject * ___object7, const RuntimeMethod* method)
{
	void *__d_args[7] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = ___arg32;
	__d_args[3] = ___arg43;
	__d_args[4] = ___arg54;
	__d_args[5] = ___arg65;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback6, (RuntimeObject*)___object7);;
}
// TR UniRx.Operators.ZipFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipFunc_7_EndInvoke_mEDCF3798EB6BE5ABCCCE6FDA2D69517262DB6681_gshared (ZipFunc_7_tABC414FCC717501CBEED1ADE34E677D99B8DC3EC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_8__ctor_mE1D2FD7844DF9299D8EAAA2784F0D2840AAB5775_gshared (ZipFunc_8_tE636EE02A54058933CDDB715EAE402AD62776D8A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TR UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4,T5,T6,T7)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipFunc_8_Invoke_m432160B46FF96E3BC21D44D262A277155B1CA813_gshared (ZipFunc_8_tE636EE02A54058933CDDB715EAE402AD62776D8A * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, RuntimeObject * ___arg54, RuntimeObject * ___arg65, RuntimeObject * ___arg76, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 7)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, targetMethod);
			}
		}
		else if (___parameterCount != 7)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker6< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
					else
						result = GenericVirtFuncInvoker6< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker6< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
					else
						result = VirtFuncInvoker6< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker7< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
					else
						result = GenericVirtFuncInvoker7< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker7< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
					else
						result = VirtFuncInvoker7< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,T5,T6,T7,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_8_BeginInvoke_m7450FF22EFD811221BB2D72F90F02677B03EF634_gshared (ZipFunc_8_tE636EE02A54058933CDDB715EAE402AD62776D8A * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, RuntimeObject * ___arg54, RuntimeObject * ___arg65, RuntimeObject * ___arg76, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback7, RuntimeObject * ___object8, const RuntimeMethod* method)
{
	void *__d_args[8] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = ___arg32;
	__d_args[3] = ___arg43;
	__d_args[4] = ___arg54;
	__d_args[5] = ___arg65;
	__d_args[6] = ___arg76;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback7, (RuntimeObject*)___object8);;
}
// TR UniRx.Operators.ZipFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipFunc_8_EndInvoke_m474366CBFF4EC40BAED8D5AEF7DD97BE99FFA4DF_gshared (ZipFunc_8_tE636EE02A54058933CDDB715EAE402AD62776D8A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>::.ctor(UniRx.Operators.ZipLatestObservable`1<T>,UniRx.IObserver`1<System.Collections.Generic.IList`1<T>>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_mC9FF6BD86FC0204320B85159F1F3631F306F1112_gshared (ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA * __this, ZipLatestObservable_1_t31B47FEB89C2F944C298FC3A1F3C781B58B81D47 * ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set_gate_3(L_0);
		// public ZipLatest(ZipLatestObservable<T> parent, IObserver<IList<T>> observer, IDisposable cancel) : base(observer, cancel)
		RuntimeObject* L_1 = ___observer1;
		RuntimeObject* L_2 = ___cancel2;
		NullCheck((OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *)__this);
		((  void (*) (OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *)__this, (RuntimeObject*)L_1, (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipLatestObservable_1_t31B47FEB89C2F944C298FC3A1F3C781B58B81D47 * L_3 = ___parent0;
		__this->set_parent_2(L_3);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_mAA2B795FAF4812DAC718B01980BA061E2879AB70_gshared (ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		// length = parent.sources.Length;
		ZipLatestObservable_1_t31B47FEB89C2F944C298FC3A1F3C781B58B81D47 * L_0 = (ZipLatestObservable_1_t31B47FEB89C2F944C298FC3A1F3C781B58B81D47 *)__this->get_parent_2();
		NullCheck(L_0);
		IObservable_1U5BU5D_tA28A0BBFB2F67C11476091A974CA931722B8EAD8* L_1 = (IObservable_1U5BU5D_tA28A0BBFB2F67C11476091A974CA931722B8EAD8*)L_0->get_sources_1();
		NullCheck(L_1);
		__this->set_length_4(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))));
		// values = new T[length];
		int32_t L_2 = (int32_t)__this->get_length_4();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2), (uint32_t)L_2);
		__this->set_values_5(L_3);
		// isStarted = new bool[length];
		int32_t L_4 = (int32_t)__this->get_length_4();
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_5 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)SZArrayNew(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->set_isStarted_6(L_5);
		// isCompleted = new bool[length];
		int32_t L_6 = (int32_t)__this->get_length_4();
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_7 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)SZArrayNew(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->set_isCompleted_7(L_7);
		// var disposables = new IDisposable[length];
		int32_t L_8 = (int32_t)__this->get_length_4();
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_9 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)(IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)SZArrayNew(IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_9;
		// for (int i = 0; i < length; i++)
		V_1 = (int32_t)0;
		goto IL_0078;
	}

IL_0056:
	{
		// var source = parent.sources[i];
		ZipLatestObservable_1_t31B47FEB89C2F944C298FC3A1F3C781B58B81D47 * L_10 = (ZipLatestObservable_1_t31B47FEB89C2F944C298FC3A1F3C781B58B81D47 *)__this->get_parent_2();
		NullCheck(L_10);
		IObservable_1U5BU5D_tA28A0BBFB2F67C11476091A974CA931722B8EAD8* L_11 = (IObservable_1U5BU5D_tA28A0BBFB2F67C11476091A974CA931722B8EAD8*)L_10->get_sources_1();
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (RuntimeObject*)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = (RuntimeObject*)L_14;
		// disposables[i] = source.Subscribe(new ZipLatestObserver(this, i));
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_15 = V_0;
		int32_t L_16 = V_1;
		RuntimeObject* L_17 = V_2;
		int32_t L_18 = V_1;
		ZipLatestObserver_tB0D86E749479A08029AA6AF4C82BFE4B9597A339 * L_19 = (ZipLatestObserver_tB0D86E749479A08029AA6AF4C82BFE4B9597A339 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (ZipLatestObserver_tB0D86E749479A08029AA6AF4C82BFE4B9597A339 *, ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_19, (ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA *)__this, (int32_t)L_18, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		NullCheck((RuntimeObject*)L_17);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_17, (RuntimeObject*)L_19);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_20);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (RuntimeObject*)L_20);
		// for (int i = 0; i < length; i++)
		int32_t L_21 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0078:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_22 = V_1;
		int32_t L_23 = (int32_t)__this->get_length_4();
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0056;
		}
	}
	{
		// return StableCompositeDisposable.CreateUnsafe(disposables);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_24 = V_0;
		RuntimeObject* L_25;
		L_25 = StableCompositeDisposable_CreateUnsafe_m3C090942EE08ACF17C840A7D22240387FE4B5088((IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_24, /*hidden argument*/NULL);
		return (RuntimeObject*)L_25;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>::Publish(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_Publish_m5E11399238F8D649FE84EE7027F1574D851E4153_gshared (ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// isStarted[index] = true;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_0 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)__this->get_isStarted_6();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (bool)1);
		// var hasOnCompleted = false;
		V_0 = (bool)0;
		// var allValueStarted = true;
		V_1 = (bool)1;
		// for (int i = 0; i < length; i++)
		V_2 = (int32_t)0;
		goto IL_0033;
	}

IL_0011:
	{
		// if (!isStarted[i])
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_2 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)__this->get_isStarted_6();
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (uint8_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		// allValueStarted = false;
		V_1 = (bool)0;
		// break;
		goto IL_003c;
	}

IL_001f:
	{
		// if (i == index) continue;
		int32_t L_6 = V_2;
		int32_t L_7 = ___index0;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_002f;
		}
	}
	{
		// if (isCompleted[i]) hasOnCompleted = true;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_8 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)__this->get_isCompleted_7();
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (uint8_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if (!L_11)
		{
			goto IL_002f;
		}
	}
	{
		// if (isCompleted[i]) hasOnCompleted = true;
		V_0 = (bool)1;
	}

IL_002f:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0033:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_13 = V_2;
		int32_t L_14 = (int32_t)__this->get_length_4();
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0011;
		}
	}

IL_003c:
	{
		// if (allValueStarted)
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_007d;
		}
	}
	{
		// OnNext(new List<T>(values));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_values_5();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_17 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6));
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)(L_17, (RuntimeObject*)(RuntimeObject*)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		NullCheck((OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *)__this);
		VirtActionInvoker1< RuntimeObject* >::Invoke(8 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnNext(TSource) */, (OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *)__this, (RuntimeObject*)L_17);
		// if (hasOnCompleted)
		bool L_18 = V_0;
		if (!L_18)
		{
			goto IL_006a;
		}
	}

IL_0053:
	try
	{ // begin try (depth: 1)
		// try { observer.OnCompleted(); }
		RuntimeObject* L_19 = (RuntimeObject*)((OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		NullCheck((RuntimeObject*)L_19);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Collections.Generic.IList`1<System.Object>>::OnCompleted() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_19);
		// try { observer.OnCompleted(); }
		IL2CPP_LEAVE(0x69, FINALLY_0062);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		// finally { Dispose(); }
		NullCheck((OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *)__this);
		((  void (*) (OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		// finally { Dispose(); }
		IL2CPP_END_FINALLY(98)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x69, IL_0069)
	}

IL_0069:
	{
		// return;
		return;
	}

IL_006a:
	{
		// Array.Clear(isStarted, 0, length); // reset
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_20 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)__this->get_isStarted_6();
		int32_t L_21 = (int32_t)__this->get_length_4();
		Array_Clear_mEB42D172C5E0825D340F6209F28578BDDDDCE34F((RuntimeArray *)(RuntimeArray *)L_20, (int32_t)0, (int32_t)L_21, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_007d:
	{
		// for (int i = 0; i < length; i++)
		V_3 = (int32_t)0;
		goto IL_00b4;
	}

IL_0081:
	{
		// if (i == index) continue;
		int32_t L_22 = V_3;
		int32_t L_23 = ___index0;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			goto IL_00b0;
		}
	}
	{
		// if (isCompleted[i] && !isStarted[i])
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_24 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)__this->get_isCompleted_7();
		int32_t L_25 = V_3;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		uint8_t L_27 = (uint8_t)(L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if (!L_27)
		{
			goto IL_00b0;
		}
	}
	{
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_28 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)__this->get_isStarted_6();
		int32_t L_29 = V_3;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint8_t L_31 = (uint8_t)(L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		if (L_31)
		{
			goto IL_00b0;
		}
	}

IL_0099:
	try
	{ // begin try (depth: 1)
		// try { observer.OnCompleted(); }
		RuntimeObject* L_32 = (RuntimeObject*)((OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		NullCheck((RuntimeObject*)L_32);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Collections.Generic.IList`1<System.Object>>::OnCompleted() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_32);
		// try { observer.OnCompleted(); }
		IL2CPP_LEAVE(0xAF, FINALLY_00a8);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a8;
	}

FINALLY_00a8:
	{ // begin finally (depth: 1)
		// finally { Dispose(); }
		NullCheck((OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *)__this);
		((  void (*) (OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		// finally { Dispose(); }
		IL2CPP_END_FINALLY(168)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(168)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAF, IL_00af)
	}

IL_00af:
	{
		// return;
		return;
	}

IL_00b0:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_33 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00b4:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_34 = V_3;
		int32_t L_35 = (int32_t)__this->get_length_4();
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0081;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>::OnNext(System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m0A326578216DDEB72B24B0AF71F9637A4C39688D_gshared (ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___value0;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Collections.Generic.IList`1<System.Object>>::OnNext(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_0, (RuntimeObject*)L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_m51A2704140500B40820A2FBE269819D83BE527CB_gshared (ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA * __this, Exception_t * ___error0, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// try { observer.OnError(error); }
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		Exception_t * L_1 = ___error0;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker1< Exception_t * >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Collections.Generic.IList`1<System.Object>>::OnError(System.Exception) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_0, (Exception_t *)L_1);
		// try { observer.OnError(error); }
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		// finally { Dispose(); }
		NullCheck((OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *)__this);
		((  void (*) (OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		// finally { Dispose(); }
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x17, IL_0017)
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_mB30BDA0E9A6308187FB98472B8A01AF74956F7D5_gshared (ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// try { observer.OnCompleted(); }
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Collections.Generic.IList`1<System.Object>>::OnCompleted() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_0);
		// try { observer.OnCompleted(); }
		IL2CPP_LEAVE(0x16, FINALLY_000f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000f;
	}

FINALLY_000f:
	{ // begin finally (depth: 1)
		// finally { Dispose(); }
		NullCheck((OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *)__this);
		((  void (*) (OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		// finally { Dispose(); }
		IL2CPP_END_FINALLY(15)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(15)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>::.ctor(UniRx.Operators.ZipLatestObservable`3<TLeft,TRight,TResult>,UniRx.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_m304657E664C1E95FDF43AA2978914418D9CB9A4A_gshared (ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191 * __this, ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C * ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set_gate_3(L_0);
		// public ZipLatest(ZipLatestObservable<TLeft, TRight, TResult> parent, IObserver<TResult> observer, IDisposable cancel) : base(observer, cancel)
		RuntimeObject* L_1 = ___observer1;
		RuntimeObject* L_2 = ___cancel2;
		NullCheck((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this);
		((  void (*) (OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this, (RuntimeObject*)L_1, (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C * L_3 = ___parent0;
		__this->set_parent_2(L_3);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_m5F0CD29B04C357A8AD04DDF00A8BB60DD2950B14_gshared (ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		// var l = parent.left.Subscribe(new LeftObserver(this));
		ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C * L_0 = (ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C *)__this->get_parent_2();
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->get_left_1();
		LeftObserver_tD24FEF33A76C1BA37B81271C64171AB17ED175C2 * L_2 = (LeftObserver_tD24FEF33A76C1BA37B81271C64171AB17ED175C2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (LeftObserver_tD24FEF33A76C1BA37B81271C64171AB17ED175C2 *, ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4), (RuntimeObject*)L_1, (RuntimeObject*)L_2);
		// var r = parent.right.Subscribe(new RightObserver(this));
		ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C * L_4 = (ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C *)__this->get_parent_2();
		NullCheck(L_4);
		RuntimeObject* L_5 = (RuntimeObject*)L_4->get_right_2();
		RightObserver_t65A0C2DAFBE60A6A4927E7F3AAC9AB21A49EC0F6 * L_6 = (RightObserver_t65A0C2DAFBE60A6A4927E7F3AAC9AB21A49EC0F6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5));
		((  void (*) (RightObserver_t65A0C2DAFBE60A6A4927E7F3AAC9AB21A49EC0F6 *, ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(L_6, (ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), (RuntimeObject*)L_5, (RuntimeObject*)L_6);
		V_0 = (RuntimeObject*)L_7;
		// return StableCompositeDisposable.Create(l, r);
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9;
		L_9 = StableCompositeDisposable_Create_mADBA75E6AF2DE20AB8F120A28D0B10F5AEBDA091((RuntimeObject*)L_3, (RuntimeObject*)L_8, /*hidden argument*/NULL);
		return (RuntimeObject*)L_9;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>::Publish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_Publish_m45C3CCF85D7C6C9FF461E50729A2F12E872A44E4_gshared (ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		// if ((leftCompleted && !leftStarted) || (rightCompleted && !rightStarted))
		bool L_0 = (bool)__this->get_leftCompleted_6();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = (bool)__this->get_leftStarted_5();
		if (!L_1)
		{
			goto IL_0020;
		}
	}

IL_0010:
	{
		bool L_2 = (bool)__this->get_rightCompleted_9();
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		bool L_3 = (bool)__this->get_rightStarted_8();
		if (L_3)
		{
			goto IL_0038;
		}
	}

IL_0020:
	{
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		// try { observer.OnCompleted(); }
		RuntimeObject* L_4 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		NullCheck((RuntimeObject*)L_4);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8), (RuntimeObject*)L_4);
		// try { observer.OnCompleted(); }
		IL2CPP_LEAVE(0x37, FINALLY_0030);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		// finally { Dispose(); }
		NullCheck((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this);
		((  void (*) (OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		// finally { Dispose(); }
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x37, IL_0037)
	}

IL_0037:
	{
		// return;
		return;
	}

IL_0038:
	{
		// else if (!(leftStarted && rightStarted))
		bool L_5 = (bool)__this->get_leftStarted_5();
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		bool L_6 = (bool)__this->get_rightStarted_8();
		if (L_6)
		{
			goto IL_0049;
		}
	}

IL_0048:
	{
		// return;
		return;
	}

IL_0049:
	{
	}

IL_004a:
	try
	{ // begin try (depth: 1)
		// v = parent.selector(leftValue, rightValue);
		ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C * L_7 = (ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C *)__this->get_parent_2();
		NullCheck(L_7);
		Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * L_8 = (Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 *)L_7->get_selector_3();
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_leftValue_4();
		RuntimeObject * L_10 = (RuntimeObject *)__this->get_rightValue_7();
		NullCheck((Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 *)L_8);
		RuntimeObject * L_11;
		L_11 = ((  RuntimeObject * (*) (Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 *)L_8, (RuntimeObject *)L_9, (RuntimeObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		V_0 = (RuntimeObject *)L_11;
		// }
		goto IL_0083;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0069;
		}
		throw e;
	}

CATCH_0069:
	{ // begin catch(System.Exception)
		{
			// catch (Exception ex)
			V_1 = (Exception_t *)((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		}

IL_006a:
		try
		{ // begin try (depth: 2)
			// try { observer.OnError(ex); }
			RuntimeObject* L_12 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
			il2cpp_codegen_memory_barrier();
			Exception_t * L_13 = V_1;
			NullCheck((RuntimeObject*)L_12);
			InterfaceActionInvoker1< Exception_t * >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Object>::OnError(System.Exception) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8), (RuntimeObject*)L_12, (Exception_t *)L_13);
			// try { observer.OnError(ex); }
			IL2CPP_LEAVE(0x81, FINALLY_007a);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_007a;
		}

FINALLY_007a:
		{ // begin finally (depth: 2)
			// finally { Dispose(); }
			NullCheck((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this);
			((  void (*) (OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
			// finally { Dispose(); }
			IL2CPP_END_FINALLY(122)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(122)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x81, IL_0081)
		}

IL_0081:
		{
			// return;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00c0;
		}
	} // end catch (depth: 1)

IL_0083:
	{
		// OnNext(v);
		RuntimeObject * L_14 = V_0;
		NullCheck((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this);
		VirtActionInvoker1< RuntimeObject * >::Invoke(8 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Object,System.Object>::OnNext(TSource) */, (OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this, (RuntimeObject *)L_14);
		// leftStarted = false;
		__this->set_leftStarted_5((bool)0);
		// rightStarted = false;
		__this->set_rightStarted_8((bool)0);
		// if (leftCompleted || rightCompleted)
		bool L_15 = (bool)__this->get_leftCompleted_6();
		if (L_15)
		{
			goto IL_00a8;
		}
	}
	{
		bool L_16 = (bool)__this->get_rightCompleted_9();
		if (!L_16)
		{
			goto IL_00c0;
		}
	}

IL_00a8:
	{
	}

IL_00a9:
	try
	{ // begin try (depth: 1)
		// try { observer.OnCompleted(); }
		RuntimeObject* L_17 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		NullCheck((RuntimeObject*)L_17);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8), (RuntimeObject*)L_17);
		// try { observer.OnCompleted(); }
		IL2CPP_LEAVE(0xBF, FINALLY_00b8);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b8;
	}

FINALLY_00b8:
	{ // begin finally (depth: 1)
		// finally { Dispose(); }
		NullCheck((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this);
		((  void (*) (OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		// finally { Dispose(); }
		IL2CPP_END_FINALLY(184)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(184)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBF, IL_00bf)
	}

IL_00bf:
	{
		// return;
		return;
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>::OnNext(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_mE29604C773A3434FAF2AEABF531B8B0A12F864B4_gshared (ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		RuntimeObject * L_1 = ___value0;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Object>::OnNext(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8), (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_m64646DA76B49D5D9CBB1322F971CD1B18D800EC7_gshared (ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191 * __this, Exception_t * ___error0, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// try { observer.OnError(error); }
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		Exception_t * L_1 = ___error0;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker1< Exception_t * >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Object>::OnError(System.Exception) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8), (RuntimeObject*)L_0, (Exception_t *)L_1);
		// try { observer.OnError(error); }
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		// finally { Dispose(); }
		NullCheck((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this);
		((  void (*) (OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		// finally { Dispose(); }
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x17, IL_0017)
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`3/ZipLatest<System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_mD96ACDE2467DB454D81E1C45152C430EE990B7CF_gshared (ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// try { observer.OnCompleted(); }
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8), (RuntimeObject*)L_0);
		// try { observer.OnCompleted(); }
		IL2CPP_LEAVE(0x16, FINALLY_000f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000f;
	}

FINALLY_000f:
	{ // begin finally (depth: 1)
		// finally { Dispose(); }
		NullCheck((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this);
		((  void (*) (OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		// finally { Dispose(); }
		IL2CPP_END_FINALLY(15)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(15)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Int32,UniRx.Operators.ZipLatestObservable`4<T1,T2,T3,TR>,UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_mC0DA57F258D6F55AEDC169785C1BAE7158D05CB2_gshared (ZipLatest_t20F1AB22C93911EA87F0EC37F07CC3E5B998327F * __this, int32_t ___length0, ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 * ___parent1, RuntimeObject* ___observer2, RuntimeObject* ___cancel3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set_gate_6(L_0);
		// : base(length, observer, cancel)
		int32_t L_1 = ___length0;
		RuntimeObject* L_2 = ___observer2;
		RuntimeObject* L_3 = ___cancel3;
		NullCheck((NthZipLatestObserverBase_1_t6F813A271D5EBE9494AD05FD5062388354B6AD75 *)__this);
		((  void (*) (NthZipLatestObserverBase_1_t6F813A271D5EBE9494AD05FD5062388354B6AD75 *, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((NthZipLatestObserverBase_1_t6F813A271D5EBE9494AD05FD5062388354B6AD75 *)__this, (int32_t)L_1, (RuntimeObject*)L_2, (RuntimeObject*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 * L_4 = ___parent1;
		__this->set_parent_5(L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_m590274311FFC8AD1D1528609296E2BF34A279603_gshared (ZipLatest_t20F1AB22C93911EA87F0EC37F07CC3E5B998327F * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// c1 = new ZipLatestObserver<T1>(gate, this, 0);
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_gate_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_1 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_1, (RuntimeObject *)L_0, (RuntimeObject*)__this, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_c1_7(L_1);
		// c2 = new ZipLatestObserver<T2>(gate, this, 1);
		RuntimeObject * L_2 = (RuntimeObject *)__this->get_gate_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_3 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5));
		((  void (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(L_3, (RuntimeObject *)L_2, (RuntimeObject*)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		__this->set_c2_8(L_3);
		// c3 = new ZipLatestObserver<T3>(gate, this, 2);
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_gate_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_5 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_5, (RuntimeObject *)L_4, (RuntimeObject*)__this, (int32_t)2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		__this->set_c3_9(L_5);
		// var s1 = parent.source1.Subscribe(c1);
		ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 * L_6 = (ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 *)__this->get_parent_5();
		NullCheck(L_6);
		RuntimeObject* L_7 = (RuntimeObject*)L_6->get_source1_1();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_8 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c1_7();
		NullCheck((RuntimeObject*)L_7);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9), (RuntimeObject*)L_7, (RuntimeObject*)L_8);
		// var s2 = parent.source2.Subscribe(c2);
		ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 * L_10 = (ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 *)__this->get_parent_5();
		NullCheck(L_10);
		RuntimeObject* L_11 = (RuntimeObject*)L_10->get_source2_2();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_12 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c2_8();
		NullCheck((RuntimeObject*)L_11);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10), (RuntimeObject*)L_11, (RuntimeObject*)L_12);
		V_0 = (RuntimeObject*)L_13;
		// var s3 = parent.source3.Subscribe(c3);
		ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 * L_14 = (ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 *)__this->get_parent_5();
		NullCheck(L_14);
		RuntimeObject* L_15 = (RuntimeObject*)L_14->get_source3_3();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_16 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c3_9();
		NullCheck((RuntimeObject*)L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 11), (RuntimeObject*)L_15, (RuntimeObject*)L_16);
		V_1 = (RuntimeObject*)L_17;
		// return StableCompositeDisposable.Create(s1, s2, s3);
		RuntimeObject* L_18 = V_0;
		RuntimeObject* L_19 = V_1;
		RuntimeObject* L_20;
		L_20 = StableCompositeDisposable_Create_mEB8D3CAD3844FE5C9D0977C748D938FB3D27A430((RuntimeObject*)L_9, (RuntimeObject*)L_18, (RuntimeObject*)L_19, /*hidden argument*/NULL);
		return (RuntimeObject*)L_20;
	}
}
// TR UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipLatest_GetResult_m5C8BEB2E300BBE62E64B4301B5EB1DFC8FEC71E0_gshared (ZipLatest_t20F1AB22C93911EA87F0EC37F07CC3E5B998327F * __this, const RuntimeMethod* method)
{
	{
		// return parent.resultSelector(c1.Value, c2.Value, c3.Value);
		ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 * L_0 = (ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 *)__this->get_parent_5();
		NullCheck(L_0);
		ZipLatestFunc_4_t068AA5074A55A9170C834EA64F905EC3D61E11CD * L_1 = (ZipLatestFunc_4_t068AA5074A55A9170C834EA64F905EC3D61E11CD *)L_0->get_resultSelector_4();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_2 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c1_7();
		NullCheck((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_2);
		RuntimeObject * L_3;
		L_3 = ((  RuntimeObject * (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_4 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c2_8();
		NullCheck((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_4);
		RuntimeObject * L_5;
		L_5 = ((  RuntimeObject * (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_6 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c3_9();
		NullCheck((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_6);
		RuntimeObject * L_7;
		L_7 = ((  RuntimeObject * (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		NullCheck((ZipLatestFunc_4_t068AA5074A55A9170C834EA64F905EC3D61E11CD *)L_1);
		RuntimeObject * L_8;
		L_8 = ((  RuntimeObject * (*) (ZipLatestFunc_4_t068AA5074A55A9170C834EA64F905EC3D61E11CD *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((ZipLatestFunc_4_t068AA5074A55A9170C834EA64F905EC3D61E11CD *)L_1, (RuntimeObject *)L_3, (RuntimeObject *)L_5, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		return (RuntimeObject *)L_8;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m81AE5951D327E9282B0E636FA2FF2A1CEFC971A0_gshared (ZipLatest_t20F1AB22C93911EA87F0EC37F07CC3E5B998327F * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		RuntimeObject * L_1 = ___value0;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Object>::OnNext(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 16), (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_mA62B9B42D9E4286E032728211FC68AEB86B75B7F_gshared (ZipLatest_t20F1AB22C93911EA87F0EC37F07CC3E5B998327F * __this, Exception_t * ___error0, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// try { observer.OnError(error); }
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		Exception_t * L_1 = ___error0;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker1< Exception_t * >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Object>::OnError(System.Exception) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 16), (RuntimeObject*)L_0, (Exception_t *)L_1);
		// try { observer.OnError(error); }
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		// finally { Dispose(); }
		NullCheck((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this);
		((  void (*) (OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		// finally { Dispose(); }
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x17, IL_0017)
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`4/ZipLatest<System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_mDC06D686114241D9E1C0CF635399C4641DCC0779_gshared (ZipLatest_t20F1AB22C93911EA87F0EC37F07CC3E5B998327F * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// try { observer.OnCompleted(); }
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 16), (RuntimeObject*)L_0);
		// try { observer.OnCompleted(); }
		IL2CPP_LEAVE(0x16, FINALLY_000f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000f;
	}

FINALLY_000f:
	{ // begin finally (depth: 1)
		// finally { Dispose(); }
		NullCheck((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this);
		((  void (*) (OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		// finally { Dispose(); }
		IL2CPP_END_FINALLY(15)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(15)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Int32,UniRx.Operators.ZipLatestObservable`5<T1,T2,T3,T4,TR>,UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_mE81D4EAD9AD2F68B0392D9C1F97A60CAADE05BBF_gshared (ZipLatest_t8B2237E24744E77887FB25D402D547CF534EBA80 * __this, int32_t ___length0, ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 * ___parent1, RuntimeObject* ___observer2, RuntimeObject* ___cancel3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set_gate_6(L_0);
		// : base(length, observer, cancel)
		int32_t L_1 = ___length0;
		RuntimeObject* L_2 = ___observer2;
		RuntimeObject* L_3 = ___cancel3;
		NullCheck((NthZipLatestObserverBase_1_t6F813A271D5EBE9494AD05FD5062388354B6AD75 *)__this);
		((  void (*) (NthZipLatestObserverBase_1_t6F813A271D5EBE9494AD05FD5062388354B6AD75 *, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((NthZipLatestObserverBase_1_t6F813A271D5EBE9494AD05FD5062388354B6AD75 *)__this, (int32_t)L_1, (RuntimeObject*)L_2, (RuntimeObject*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 * L_4 = ___parent1;
		__this->set_parent_5(L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_mC6593EE82C3957A2DA61801D66986F23FCB2CDCF_gshared (ZipLatest_t8B2237E24744E77887FB25D402D547CF534EBA80 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// c1 = new ZipLatestObserver<T1>(gate, this, 0);
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_gate_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_1 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_1, (RuntimeObject *)L_0, (RuntimeObject*)__this, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_c1_7(L_1);
		// c2 = new ZipLatestObserver<T2>(gate, this, 1);
		RuntimeObject * L_2 = (RuntimeObject *)__this->get_gate_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_3 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5));
		((  void (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(L_3, (RuntimeObject *)L_2, (RuntimeObject*)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		__this->set_c2_8(L_3);
		// c3 = new ZipLatestObserver<T3>(gate, this, 2);
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_gate_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_5 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_5, (RuntimeObject *)L_4, (RuntimeObject*)__this, (int32_t)2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		__this->set_c3_9(L_5);
		// c4 = new ZipLatestObserver<T4>(gate, this, 3);
		RuntimeObject * L_6 = (RuntimeObject *)__this->get_gate_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_7 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_7, (RuntimeObject *)L_6, (RuntimeObject*)__this, (int32_t)3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		__this->set_c4_10(L_7);
		// var s1 = parent.source1.Subscribe(c1);
		ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 * L_8 = (ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 *)__this->get_parent_5();
		NullCheck(L_8);
		RuntimeObject* L_9 = (RuntimeObject*)L_8->get_source1_1();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_10 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c1_7();
		NullCheck((RuntimeObject*)L_9);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 11), (RuntimeObject*)L_9, (RuntimeObject*)L_10);
		// var s2 = parent.source2.Subscribe(c2);
		ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 * L_12 = (ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 *)__this->get_parent_5();
		NullCheck(L_12);
		RuntimeObject* L_13 = (RuntimeObject*)L_12->get_source2_2();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_14 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c2_8();
		NullCheck((RuntimeObject*)L_13);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 12), (RuntimeObject*)L_13, (RuntimeObject*)L_14);
		V_0 = (RuntimeObject*)L_15;
		// var s3 = parent.source3.Subscribe(c3);
		ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 * L_16 = (ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 *)__this->get_parent_5();
		NullCheck(L_16);
		RuntimeObject* L_17 = (RuntimeObject*)L_16->get_source3_3();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_18 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c3_9();
		NullCheck((RuntimeObject*)L_17);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 13), (RuntimeObject*)L_17, (RuntimeObject*)L_18);
		V_1 = (RuntimeObject*)L_19;
		// var s4 = parent.source4.Subscribe(c4);
		ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 * L_20 = (ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 *)__this->get_parent_5();
		NullCheck(L_20);
		RuntimeObject* L_21 = (RuntimeObject*)L_20->get_source4_4();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_22 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c4_10();
		NullCheck((RuntimeObject*)L_21);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 14), (RuntimeObject*)L_21, (RuntimeObject*)L_22);
		V_2 = (RuntimeObject*)L_23;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4);
		RuntimeObject* L_24 = V_0;
		RuntimeObject* L_25 = V_1;
		RuntimeObject* L_26 = V_2;
		RuntimeObject* L_27;
		L_27 = StableCompositeDisposable_Create_m371A92E54178529B07FCEEF78A214B246FDC8D88((RuntimeObject*)L_11, (RuntimeObject*)L_24, (RuntimeObject*)L_25, (RuntimeObject*)L_26, /*hidden argument*/NULL);
		return (RuntimeObject*)L_27;
	}
}
// TR UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipLatest_GetResult_m549AB6B6B0B2738629FD9C55D48A4D7D70516929_gshared (ZipLatest_t8B2237E24744E77887FB25D402D547CF534EBA80 * __this, const RuntimeMethod* method)
{
	{
		// return parent.resultSelector(c1.Value, c2.Value, c3.Value, c4.Value);
		ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 * L_0 = (ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 *)__this->get_parent_5();
		NullCheck(L_0);
		ZipLatestFunc_5_t034B18D7B7806B768547ED63ED6523F49D3EE0B2 * L_1 = (ZipLatestFunc_5_t034B18D7B7806B768547ED63ED6523F49D3EE0B2 *)L_0->get_resultSelector_5();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_2 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c1_7();
		NullCheck((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_2);
		RuntimeObject * L_3;
		L_3 = ((  RuntimeObject * (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_4 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c2_8();
		NullCheck((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_4);
		RuntimeObject * L_5;
		L_5 = ((  RuntimeObject * (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_6 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c3_9();
		NullCheck((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_6);
		RuntimeObject * L_7;
		L_7 = ((  RuntimeObject * (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_8 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c4_10();
		NullCheck((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_8);
		RuntimeObject * L_9;
		L_9 = ((  RuntimeObject * (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		NullCheck((ZipLatestFunc_5_t034B18D7B7806B768547ED63ED6523F49D3EE0B2 *)L_1);
		RuntimeObject * L_10;
		L_10 = ((  RuntimeObject * (*) (ZipLatestFunc_5_t034B18D7B7806B768547ED63ED6523F49D3EE0B2 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((ZipLatestFunc_5_t034B18D7B7806B768547ED63ED6523F49D3EE0B2 *)L_1, (RuntimeObject *)L_3, (RuntimeObject *)L_5, (RuntimeObject *)L_7, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		return (RuntimeObject *)L_10;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m08F10E5C21EF66A71AAD7E6FB0CD12713C3BE2AE_gshared (ZipLatest_t8B2237E24744E77887FB25D402D547CF534EBA80 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		RuntimeObject * L_1 = ___value0;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Object>::OnNext(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20), (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_mF947DE238A718CB700A3C60D971C712149950363_gshared (ZipLatest_t8B2237E24744E77887FB25D402D547CF534EBA80 * __this, Exception_t * ___error0, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// try { observer.OnError(error); }
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		Exception_t * L_1 = ___error0;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker1< Exception_t * >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Object>::OnError(System.Exception) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20), (RuntimeObject*)L_0, (Exception_t *)L_1);
		// try { observer.OnError(error); }
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		// finally { Dispose(); }
		NullCheck((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this);
		((  void (*) (OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		// finally { Dispose(); }
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x17, IL_0017)
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`5/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_mBB036451BFE9FDF4D9E95F3AE97DD4C54A84E9FF_gshared (ZipLatest_t8B2237E24744E77887FB25D402D547CF534EBA80 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// try { observer.OnCompleted(); }
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20), (RuntimeObject*)L_0);
		// try { observer.OnCompleted(); }
		IL2CPP_LEAVE(0x16, FINALLY_000f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000f;
	}

FINALLY_000f:
	{ // begin finally (depth: 1)
		// finally { Dispose(); }
		NullCheck((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this);
		((  void (*) (OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		// finally { Dispose(); }
		IL2CPP_END_FINALLY(15)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(15)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Int32,UniRx.Operators.ZipLatestObservable`6<T1,T2,T3,T4,T5,TR>,UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_mEF23DE6B1BCF0A3718EBC954CE5881C4E7C7E247_gshared (ZipLatest_tDEEB4918A762109EF19D972E2F30FFC4B5C58AC2 * __this, int32_t ___length0, ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E * ___parent1, RuntimeObject* ___observer2, RuntimeObject* ___cancel3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set_gate_6(L_0);
		// : base(length, observer, cancel)
		int32_t L_1 = ___length0;
		RuntimeObject* L_2 = ___observer2;
		RuntimeObject* L_3 = ___cancel3;
		NullCheck((NthZipLatestObserverBase_1_t6F813A271D5EBE9494AD05FD5062388354B6AD75 *)__this);
		((  void (*) (NthZipLatestObserverBase_1_t6F813A271D5EBE9494AD05FD5062388354B6AD75 *, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((NthZipLatestObserverBase_1_t6F813A271D5EBE9494AD05FD5062388354B6AD75 *)__this, (int32_t)L_1, (RuntimeObject*)L_2, (RuntimeObject*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E * L_4 = ___parent1;
		__this->set_parent_5(L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_m763037095CD524EB3F8C4C2F1E9F2A7CDF8DC799_gshared (ZipLatest_tDEEB4918A762109EF19D972E2F30FFC4B5C58AC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		// c1 = new ZipLatestObserver<T1>(gate, this, 0);
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_gate_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_1 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_1, (RuntimeObject *)L_0, (RuntimeObject*)__this, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_c1_7(L_1);
		// c2 = new ZipLatestObserver<T2>(gate, this, 1);
		RuntimeObject * L_2 = (RuntimeObject *)__this->get_gate_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_3 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5));
		((  void (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(L_3, (RuntimeObject *)L_2, (RuntimeObject*)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		__this->set_c2_8(L_3);
		// c3 = new ZipLatestObserver<T3>(gate, this, 2);
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_gate_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_5 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_5, (RuntimeObject *)L_4, (RuntimeObject*)__this, (int32_t)2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		__this->set_c3_9(L_5);
		// c4 = new ZipLatestObserver<T4>(gate, this, 3);
		RuntimeObject * L_6 = (RuntimeObject *)__this->get_gate_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_7 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_7, (RuntimeObject *)L_6, (RuntimeObject*)__this, (int32_t)3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		__this->set_c4_10(L_7);
		// c5 = new ZipLatestObserver<T5>(gate, this, 4);
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_gate_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_9 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 11));
		((  void (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)(L_9, (RuntimeObject *)L_8, (RuntimeObject*)__this, (int32_t)4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		__this->set_c5_11(L_9);
		// var s1 = parent.source1.Subscribe(c1);
		ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E * L_10 = (ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E *)__this->get_parent_5();
		NullCheck(L_10);
		RuntimeObject* L_11 = (RuntimeObject*)L_10->get_source1_1();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_12 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c1_7();
		NullCheck((RuntimeObject*)L_11);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 13), (RuntimeObject*)L_11, (RuntimeObject*)L_12);
		V_0 = (RuntimeObject*)L_13;
		// var s2 = parent.source2.Subscribe(c2);
		ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E * L_14 = (ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E *)__this->get_parent_5();
		NullCheck(L_14);
		RuntimeObject* L_15 = (RuntimeObject*)L_14->get_source2_2();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_16 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c2_8();
		NullCheck((RuntimeObject*)L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 14), (RuntimeObject*)L_15, (RuntimeObject*)L_16);
		V_1 = (RuntimeObject*)L_17;
		// var s3 = parent.source3.Subscribe(c3);
		ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E * L_18 = (ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E *)__this->get_parent_5();
		NullCheck(L_18);
		RuntimeObject* L_19 = (RuntimeObject*)L_18->get_source3_3();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_20 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c3_9();
		NullCheck((RuntimeObject*)L_19);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 15), (RuntimeObject*)L_19, (RuntimeObject*)L_20);
		V_2 = (RuntimeObject*)L_21;
		// var s4 = parent.source4.Subscribe(c4);
		ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E * L_22 = (ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E *)__this->get_parent_5();
		NullCheck(L_22);
		RuntimeObject* L_23 = (RuntimeObject*)L_22->get_source4_4();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_24 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c4_10();
		NullCheck((RuntimeObject*)L_23);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 16), (RuntimeObject*)L_23, (RuntimeObject*)L_24);
		V_3 = (RuntimeObject*)L_25;
		// var s5 = parent.source5.Subscribe(c5);
		ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E * L_26 = (ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E *)__this->get_parent_5();
		NullCheck(L_26);
		RuntimeObject* L_27 = (RuntimeObject*)L_26->get_source5_5();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_28 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c5_11();
		NullCheck((RuntimeObject*)L_27);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 17), (RuntimeObject*)L_27, (RuntimeObject*)L_28);
		V_4 = (RuntimeObject*)L_29;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, s5);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_30 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)(IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)SZArrayNew(IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65_il2cpp_TypeInfo_var, (uint32_t)5);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_31 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_30;
		RuntimeObject* L_32 = V_0;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_32);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_33 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_31;
		RuntimeObject* L_34 = V_1;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_34);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_35 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_33;
		RuntimeObject* L_36 = V_2;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_36);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_37 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_35;
		RuntimeObject* L_38 = V_3;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_38);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_39 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_37;
		RuntimeObject* L_40 = V_4;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_40);
		RuntimeObject* L_41;
		L_41 = StableCompositeDisposable_Create_mBC13843A41918AB7409895E4C900877A9ED60530((IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_39, /*hidden argument*/NULL);
		return (RuntimeObject*)L_41;
	}
}
// TR UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipLatest_GetResult_mF9F3634300D013D2AD986C540B2132EBF71187BF_gshared (ZipLatest_tDEEB4918A762109EF19D972E2F30FFC4B5C58AC2 * __this, const RuntimeMethod* method)
{
	{
		// return parent.resultSelector(c1.Value, c2.Value, c3.Value, c4.Value, c5.Value);
		ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E * L_0 = (ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E *)__this->get_parent_5();
		NullCheck(L_0);
		ZipLatestFunc_6_tF57A196B92A803627A820609E6441E884CEC0366 * L_1 = (ZipLatestFunc_6_tF57A196B92A803627A820609E6441E884CEC0366 *)L_0->get_resultSelector_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_2 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c1_7();
		NullCheck((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_2);
		RuntimeObject * L_3;
		L_3 = ((  RuntimeObject * (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18)->methodPointer)((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 18));
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_4 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c2_8();
		NullCheck((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_4);
		RuntimeObject * L_5;
		L_5 = ((  RuntimeObject * (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_6 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c3_9();
		NullCheck((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_6);
		RuntimeObject * L_7;
		L_7 = ((  RuntimeObject * (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20)->methodPointer)((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 20));
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_8 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c4_10();
		NullCheck((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_8);
		RuntimeObject * L_9;
		L_9 = ((  RuntimeObject * (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_10 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c5_11();
		NullCheck((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_10);
		RuntimeObject * L_11;
		L_11 = ((  RuntimeObject * (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
		NullCheck((ZipLatestFunc_6_tF57A196B92A803627A820609E6441E884CEC0366 *)L_1);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (ZipLatestFunc_6_tF57A196B92A803627A820609E6441E884CEC0366 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 23)->methodPointer)((ZipLatestFunc_6_tF57A196B92A803627A820609E6441E884CEC0366 *)L_1, (RuntimeObject *)L_3, (RuntimeObject *)L_5, (RuntimeObject *)L_7, (RuntimeObject *)L_9, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 23));
		return (RuntimeObject *)L_12;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_mAB1EF2195E990093BB63604984A86FB5CF8C73CC_gshared (ZipLatest_tDEEB4918A762109EF19D972E2F30FFC4B5C58AC2 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		RuntimeObject * L_1 = ___value0;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Object>::OnNext(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 24), (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_m8A32454A21E3784A8DC2E9C9D9EC360EB4D0D1C2_gshared (ZipLatest_tDEEB4918A762109EF19D972E2F30FFC4B5C58AC2 * __this, Exception_t * ___error0, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// try { observer.OnError(error); }
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		Exception_t * L_1 = ___error0;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker1< Exception_t * >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Object>::OnError(System.Exception) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 24), (RuntimeObject*)L_0, (Exception_t *)L_1);
		// try { observer.OnError(error); }
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		// finally { Dispose(); }
		NullCheck((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this);
		((  void (*) (OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 25)->methodPointer)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 25));
		// finally { Dispose(); }
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x17, IL_0017)
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`6/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_m9D82788846C11F141A6DF4F572746E2D1CB76C81_gshared (ZipLatest_tDEEB4918A762109EF19D972E2F30FFC4B5C58AC2 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// try { observer.OnCompleted(); }
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 24), (RuntimeObject*)L_0);
		// try { observer.OnCompleted(); }
		IL2CPP_LEAVE(0x16, FINALLY_000f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000f;
	}

FINALLY_000f:
	{ // begin finally (depth: 1)
		// finally { Dispose(); }
		NullCheck((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this);
		((  void (*) (OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 25)->methodPointer)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 25));
		// finally { Dispose(); }
		IL2CPP_END_FINALLY(15)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(15)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Int32,UniRx.Operators.ZipLatestObservable`7<T1,T2,T3,T4,T5,T6,TR>,UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_mF8686834E2EB5F793E22A8074BF558F923D5DE83_gshared (ZipLatest_tA523166BE7EABB4D4B6CA83AB5B9340210892DE9 * __this, int32_t ___length0, ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 * ___parent1, RuntimeObject* ___observer2, RuntimeObject* ___cancel3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set_gate_6(L_0);
		// : base(length, observer, cancel)
		int32_t L_1 = ___length0;
		RuntimeObject* L_2 = ___observer2;
		RuntimeObject* L_3 = ___cancel3;
		NullCheck((NthZipLatestObserverBase_1_t6F813A271D5EBE9494AD05FD5062388354B6AD75 *)__this);
		((  void (*) (NthZipLatestObserverBase_1_t6F813A271D5EBE9494AD05FD5062388354B6AD75 *, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((NthZipLatestObserverBase_1_t6F813A271D5EBE9494AD05FD5062388354B6AD75 *)__this, (int32_t)L_1, (RuntimeObject*)L_2, (RuntimeObject*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 * L_4 = ___parent1;
		__this->set_parent_5(L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_m18AA748EE56867294BF66A37D42324EAD89EA1C8_gshared (ZipLatest_tA523166BE7EABB4D4B6CA83AB5B9340210892DE9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		// c1 = new ZipLatestObserver<T1>(gate, this, 0);
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_gate_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_1 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_1, (RuntimeObject *)L_0, (RuntimeObject*)__this, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_c1_7(L_1);
		// c2 = new ZipLatestObserver<T2>(gate, this, 1);
		RuntimeObject * L_2 = (RuntimeObject *)__this->get_gate_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_3 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5));
		((  void (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(L_3, (RuntimeObject *)L_2, (RuntimeObject*)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		__this->set_c2_8(L_3);
		// c3 = new ZipLatestObserver<T3>(gate, this, 2);
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_gate_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_5 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_5, (RuntimeObject *)L_4, (RuntimeObject*)__this, (int32_t)2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		__this->set_c3_9(L_5);
		// c4 = new ZipLatestObserver<T4>(gate, this, 3);
		RuntimeObject * L_6 = (RuntimeObject *)__this->get_gate_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_7 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_7, (RuntimeObject *)L_6, (RuntimeObject*)__this, (int32_t)3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		__this->set_c4_10(L_7);
		// c5 = new ZipLatestObserver<T5>(gate, this, 4);
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_gate_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_9 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 11));
		((  void (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)(L_9, (RuntimeObject *)L_8, (RuntimeObject*)__this, (int32_t)4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		__this->set_c5_11(L_9);
		// c6 = new ZipLatestObserver<T6>(gate, this, 5);
		RuntimeObject * L_10 = (RuntimeObject *)__this->get_gate_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_11 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 13));
		((  void (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)(L_11, (RuntimeObject *)L_10, (RuntimeObject*)__this, (int32_t)5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		__this->set_c6_12(L_11);
		// var s1 = parent.source1.Subscribe(c1);
		ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 * L_12 = (ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 *)__this->get_parent_5();
		NullCheck(L_12);
		RuntimeObject* L_13 = (RuntimeObject*)L_12->get_source1_1();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_14 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c1_7();
		NullCheck((RuntimeObject*)L_13);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 15), (RuntimeObject*)L_13, (RuntimeObject*)L_14);
		V_0 = (RuntimeObject*)L_15;
		// var s2 = parent.source2.Subscribe(c2);
		ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 * L_16 = (ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 *)__this->get_parent_5();
		NullCheck(L_16);
		RuntimeObject* L_17 = (RuntimeObject*)L_16->get_source2_2();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_18 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c2_8();
		NullCheck((RuntimeObject*)L_17);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 16), (RuntimeObject*)L_17, (RuntimeObject*)L_18);
		V_1 = (RuntimeObject*)L_19;
		// var s3 = parent.source3.Subscribe(c3);
		ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 * L_20 = (ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 *)__this->get_parent_5();
		NullCheck(L_20);
		RuntimeObject* L_21 = (RuntimeObject*)L_20->get_source3_3();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_22 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c3_9();
		NullCheck((RuntimeObject*)L_21);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 17), (RuntimeObject*)L_21, (RuntimeObject*)L_22);
		V_2 = (RuntimeObject*)L_23;
		// var s4 = parent.source4.Subscribe(c4);
		ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 * L_24 = (ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 *)__this->get_parent_5();
		NullCheck(L_24);
		RuntimeObject* L_25 = (RuntimeObject*)L_24->get_source4_4();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_26 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c4_10();
		NullCheck((RuntimeObject*)L_25);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), (RuntimeObject*)L_25, (RuntimeObject*)L_26);
		V_3 = (RuntimeObject*)L_27;
		// var s5 = parent.source5.Subscribe(c5);
		ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 * L_28 = (ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 *)__this->get_parent_5();
		NullCheck(L_28);
		RuntimeObject* L_29 = (RuntimeObject*)L_28->get_source5_5();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_30 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c5_11();
		NullCheck((RuntimeObject*)L_29);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 19), (RuntimeObject*)L_29, (RuntimeObject*)L_30);
		V_4 = (RuntimeObject*)L_31;
		// var s6 = parent.source6.Subscribe(c6);
		ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 * L_32 = (ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 *)__this->get_parent_5();
		NullCheck(L_32);
		RuntimeObject* L_33 = (RuntimeObject*)L_32->get_source6_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_34 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c6_12();
		NullCheck((RuntimeObject*)L_33);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20), (RuntimeObject*)L_33, (RuntimeObject*)L_34);
		V_5 = (RuntimeObject*)L_35;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, s5, s6);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_36 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)(IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)SZArrayNew(IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65_il2cpp_TypeInfo_var, (uint32_t)6);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_37 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_36;
		RuntimeObject* L_38 = V_0;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_38);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_39 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_37;
		RuntimeObject* L_40 = V_1;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_40);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_41 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_39;
		RuntimeObject* L_42 = V_2;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_42);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_43 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_41;
		RuntimeObject* L_44 = V_3;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_44);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_45 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_43;
		RuntimeObject* L_46 = V_4;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_46);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_46);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_47 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_45;
		RuntimeObject* L_48 = V_5;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_48);
		RuntimeObject* L_49;
		L_49 = StableCompositeDisposable_Create_mBC13843A41918AB7409895E4C900877A9ED60530((IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_47, /*hidden argument*/NULL);
		return (RuntimeObject*)L_49;
	}
}
// TR UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipLatest_GetResult_mC3767D04FACAC108E80C3CAC56680BB29C43BA05_gshared (ZipLatest_tA523166BE7EABB4D4B6CA83AB5B9340210892DE9 * __this, const RuntimeMethod* method)
{
	{
		// return parent.resultSelector(c1.Value, c2.Value, c3.Value, c4.Value, c5.Value, c6.Value);
		ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 * L_0 = (ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 *)__this->get_parent_5();
		NullCheck(L_0);
		ZipLatestFunc_7_t0D0C162176AFF4EA815561A183E0CADD1B8C5B86 * L_1 = (ZipLatestFunc_7_t0D0C162176AFF4EA815561A183E0CADD1B8C5B86 *)L_0->get_resultSelector_7();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_2 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c1_7();
		NullCheck((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_2);
		RuntimeObject * L_3;
		L_3 = ((  RuntimeObject * (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_4 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c2_8();
		NullCheck((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_4);
		RuntimeObject * L_5;
		L_5 = ((  RuntimeObject * (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22)->methodPointer)((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 22));
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_6 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c3_9();
		NullCheck((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_6);
		RuntimeObject * L_7;
		L_7 = ((  RuntimeObject * (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 23)->methodPointer)((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 23));
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_8 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c4_10();
		NullCheck((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_8);
		RuntimeObject * L_9;
		L_9 = ((  RuntimeObject * (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 24)->methodPointer)((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 24));
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_10 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c5_11();
		NullCheck((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_10);
		RuntimeObject * L_11;
		L_11 = ((  RuntimeObject * (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 25)->methodPointer)((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 25));
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_12 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c6_12();
		NullCheck((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_12);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 26)->methodPointer)((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 26));
		NullCheck((ZipLatestFunc_7_t0D0C162176AFF4EA815561A183E0CADD1B8C5B86 *)L_1);
		RuntimeObject * L_14;
		L_14 = ((  RuntimeObject * (*) (ZipLatestFunc_7_t0D0C162176AFF4EA815561A183E0CADD1B8C5B86 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27)->methodPointer)((ZipLatestFunc_7_t0D0C162176AFF4EA815561A183E0CADD1B8C5B86 *)L_1, (RuntimeObject *)L_3, (RuntimeObject *)L_5, (RuntimeObject *)L_7, (RuntimeObject *)L_9, (RuntimeObject *)L_11, (RuntimeObject *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27));
		return (RuntimeObject *)L_14;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m435FDB202953314BC71ECF760CB6190F9D77D9D6_gshared (ZipLatest_tA523166BE7EABB4D4B6CA83AB5B9340210892DE9 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		RuntimeObject * L_1 = ___value0;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Object>::OnNext(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 28), (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_m9C0DB6E2EC1228EE4B6562B3BEC51671060192BF_gshared (ZipLatest_tA523166BE7EABB4D4B6CA83AB5B9340210892DE9 * __this, Exception_t * ___error0, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// try { observer.OnError(error); }
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		Exception_t * L_1 = ___error0;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker1< Exception_t * >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Object>::OnError(System.Exception) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 28), (RuntimeObject*)L_0, (Exception_t *)L_1);
		// try { observer.OnError(error); }
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		// finally { Dispose(); }
		NullCheck((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this);
		((  void (*) (OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 29)->methodPointer)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 29));
		// finally { Dispose(); }
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x17, IL_0017)
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`7/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_mA9579C502495A78ED16ED25B543001F06E3DCFBC_gshared (ZipLatest_tA523166BE7EABB4D4B6CA83AB5B9340210892DE9 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// try { observer.OnCompleted(); }
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 28), (RuntimeObject*)L_0);
		// try { observer.OnCompleted(); }
		IL2CPP_LEAVE(0x16, FINALLY_000f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000f;
	}

FINALLY_000f:
	{ // begin finally (depth: 1)
		// finally { Dispose(); }
		NullCheck((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this);
		((  void (*) (OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 29)->methodPointer)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 29));
		// finally { Dispose(); }
		IL2CPP_END_FINALLY(15)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(15)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Int32,UniRx.Operators.ZipLatestObservable`8<T1,T2,T3,T4,T5,T6,T7,TR>,UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_mADA19E9555901FD4C907FCA01B3763847273D3EA_gshared (ZipLatest_t47889B985CBFCE2D038A6C0CB8E42DE8C062E068 * __this, int32_t ___length0, ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C * ___parent1, RuntimeObject* ___observer2, RuntimeObject* ___cancel3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set_gate_6(L_0);
		// : base(length, observer, cancel)
		int32_t L_1 = ___length0;
		RuntimeObject* L_2 = ___observer2;
		RuntimeObject* L_3 = ___cancel3;
		NullCheck((NthZipLatestObserverBase_1_t6F813A271D5EBE9494AD05FD5062388354B6AD75 *)__this);
		((  void (*) (NthZipLatestObserverBase_1_t6F813A271D5EBE9494AD05FD5062388354B6AD75 *, int32_t, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((NthZipLatestObserverBase_1_t6F813A271D5EBE9494AD05FD5062388354B6AD75 *)__this, (int32_t)L_1, (RuntimeObject*)L_2, (RuntimeObject*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// this.parent = parent;
		ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C * L_4 = ___parent1;
		__this->set_parent_5(L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_mD0E7BC4C98B9EE73FA5B35EA5F125717742B1D72_gshared (ZipLatest_t47889B985CBFCE2D038A6C0CB8E42DE8C062E068 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// c1 = new ZipLatestObserver<T1>(gate, this, 0);
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_gate_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_1 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_1, (RuntimeObject *)L_0, (RuntimeObject*)__this, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_c1_7(L_1);
		// c2 = new ZipLatestObserver<T2>(gate, this, 1);
		RuntimeObject * L_2 = (RuntimeObject *)__this->get_gate_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_3 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5));
		((  void (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(L_3, (RuntimeObject *)L_2, (RuntimeObject*)__this, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		__this->set_c2_8(L_3);
		// c3 = new ZipLatestObserver<T3>(gate, this, 2);
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_gate_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_5 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_5, (RuntimeObject *)L_4, (RuntimeObject*)__this, (int32_t)2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		__this->set_c3_9(L_5);
		// c4 = new ZipLatestObserver<T4>(gate, this, 3);
		RuntimeObject * L_6 = (RuntimeObject *)__this->get_gate_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_7 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_7, (RuntimeObject *)L_6, (RuntimeObject*)__this, (int32_t)3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		__this->set_c4_10(L_7);
		// c5 = new ZipLatestObserver<T5>(gate, this, 4);
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_gate_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_9 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 11));
		((  void (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)(L_9, (RuntimeObject *)L_8, (RuntimeObject*)__this, (int32_t)4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		__this->set_c5_11(L_9);
		// c6 = new ZipLatestObserver<T6>(gate, this, 5);
		RuntimeObject * L_10 = (RuntimeObject *)__this->get_gate_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_11 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 13));
		((  void (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)(L_11, (RuntimeObject *)L_10, (RuntimeObject*)__this, (int32_t)5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		__this->set_c6_12(L_11);
		// c7 = new ZipLatestObserver<T7>(gate, this, 6);
		RuntimeObject * L_12 = (RuntimeObject *)__this->get_gate_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_13 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 15));
		((  void (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, RuntimeObject *, RuntimeObject*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16)->methodPointer)(L_13, (RuntimeObject *)L_12, (RuntimeObject*)__this, (int32_t)6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 16));
		__this->set_c7_13(L_13);
		// var s1 = parent.source1.Subscribe(c1);
		ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C * L_14 = (ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C *)__this->get_parent_5();
		NullCheck(L_14);
		RuntimeObject* L_15 = (RuntimeObject*)L_14->get_source1_1();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_16 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c1_7();
		NullCheck((RuntimeObject*)L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 17), (RuntimeObject*)L_15, (RuntimeObject*)L_16);
		V_0 = (RuntimeObject*)L_17;
		// var s2 = parent.source2.Subscribe(c2);
		ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C * L_18 = (ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C *)__this->get_parent_5();
		NullCheck(L_18);
		RuntimeObject* L_19 = (RuntimeObject*)L_18->get_source2_2();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_20 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c2_8();
		NullCheck((RuntimeObject*)L_19);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), (RuntimeObject*)L_19, (RuntimeObject*)L_20);
		V_1 = (RuntimeObject*)L_21;
		// var s3 = parent.source3.Subscribe(c3);
		ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C * L_22 = (ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C *)__this->get_parent_5();
		NullCheck(L_22);
		RuntimeObject* L_23 = (RuntimeObject*)L_22->get_source3_3();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_24 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c3_9();
		NullCheck((RuntimeObject*)L_23);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 19), (RuntimeObject*)L_23, (RuntimeObject*)L_24);
		V_2 = (RuntimeObject*)L_25;
		// var s4 = parent.source4.Subscribe(c4);
		ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C * L_26 = (ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C *)__this->get_parent_5();
		NullCheck(L_26);
		RuntimeObject* L_27 = (RuntimeObject*)L_26->get_source4_4();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_28 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c4_10();
		NullCheck((RuntimeObject*)L_27);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20), (RuntimeObject*)L_27, (RuntimeObject*)L_28);
		V_3 = (RuntimeObject*)L_29;
		// var s5 = parent.source5.Subscribe(c5);
		ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C * L_30 = (ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C *)__this->get_parent_5();
		NullCheck(L_30);
		RuntimeObject* L_31 = (RuntimeObject*)L_30->get_source5_5();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_32 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c5_11();
		NullCheck((RuntimeObject*)L_31);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 21), (RuntimeObject*)L_31, (RuntimeObject*)L_32);
		V_4 = (RuntimeObject*)L_33;
		// var s6 = parent.source6.Subscribe(c6);
		ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C * L_34 = (ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C *)__this->get_parent_5();
		NullCheck(L_34);
		RuntimeObject* L_35 = (RuntimeObject*)L_34->get_source6_6();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_36 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c6_12();
		NullCheck((RuntimeObject*)L_35);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 22), (RuntimeObject*)L_35, (RuntimeObject*)L_36);
		V_5 = (RuntimeObject*)L_37;
		// var s7 = parent.source7.Subscribe(c7);
		ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C * L_38 = (ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C *)__this->get_parent_5();
		NullCheck(L_38);
		RuntimeObject* L_39 = (RuntimeObject*)L_38->get_source7_7();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_40 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c7_13();
		NullCheck((RuntimeObject*)L_39);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable UniRx.IObservable`1<System.Object>::Subscribe(UniRx.IObserver`1<T>) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 23), (RuntimeObject*)L_39, (RuntimeObject*)L_40);
		V_6 = (RuntimeObject*)L_41;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, s5, s6, s7);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_42 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)(IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)SZArrayNew(IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65_il2cpp_TypeInfo_var, (uint32_t)7);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_43 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_42;
		RuntimeObject* L_44 = V_0;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_44);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_45 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_43;
		RuntimeObject* L_46 = V_1;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_46);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_46);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_47 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_45;
		RuntimeObject* L_48 = V_2;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_48);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_49 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_47;
		RuntimeObject* L_50 = V_3;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_50);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_50);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_51 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_49;
		RuntimeObject* L_52 = V_4;
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_52);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_53 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_51;
		RuntimeObject* L_54 = V_5;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_54);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_54);
		IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65* L_55 = (IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_53;
		RuntimeObject* L_56 = V_6;
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_56);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_56);
		RuntimeObject* L_57;
		L_57 = StableCompositeDisposable_Create_mBC13843A41918AB7409895E4C900877A9ED60530((IDisposableU5BU5D_tA118A91699805C6191EC7EC5368D525034AB6E65*)L_55, /*hidden argument*/NULL);
		return (RuntimeObject*)L_57;
	}
}
// TR UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipLatest_GetResult_m37DCA2294040C552B6E83A7CBCC62CCDB789BD65_gshared (ZipLatest_t47889B985CBFCE2D038A6C0CB8E42DE8C062E068 * __this, const RuntimeMethod* method)
{
	{
		// return parent.resultSelector(c1.Value, c2.Value, c3.Value, c4.Value, c5.Value, c6.Value, c7.Value);
		ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C * L_0 = (ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C *)__this->get_parent_5();
		NullCheck(L_0);
		ZipLatestFunc_8_tEB12C1F53C18B98647F21300DA101C6A90F29305 * L_1 = (ZipLatestFunc_8_tEB12C1F53C18B98647F21300DA101C6A90F29305 *)L_0->get_resultSelector_8();
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_2 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c1_7();
		NullCheck((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_2);
		RuntimeObject * L_3;
		L_3 = ((  RuntimeObject * (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 24)->methodPointer)((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 24));
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_4 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c2_8();
		NullCheck((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_4);
		RuntimeObject * L_5;
		L_5 = ((  RuntimeObject * (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 25)->methodPointer)((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 25));
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_6 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c3_9();
		NullCheck((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_6);
		RuntimeObject * L_7;
		L_7 = ((  RuntimeObject * (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 26)->methodPointer)((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 26));
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_8 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c4_10();
		NullCheck((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_8);
		RuntimeObject * L_9;
		L_9 = ((  RuntimeObject * (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27)->methodPointer)((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 27));
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_10 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c5_11();
		NullCheck((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_10);
		RuntimeObject * L_11;
		L_11 = ((  RuntimeObject * (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 28)->methodPointer)((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 28));
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_12 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c6_12();
		NullCheck((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_12);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 29)->methodPointer)((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 29));
		ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * L_14 = (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)__this->get_c7_13();
		NullCheck((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_14);
		RuntimeObject * L_15;
		L_15 = ((  RuntimeObject * (*) (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 30)->methodPointer)((ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 30));
		NullCheck((ZipLatestFunc_8_tEB12C1F53C18B98647F21300DA101C6A90F29305 *)L_1);
		RuntimeObject * L_16;
		L_16 = ((  RuntimeObject * (*) (ZipLatestFunc_8_tEB12C1F53C18B98647F21300DA101C6A90F29305 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 31)->methodPointer)((ZipLatestFunc_8_tEB12C1F53C18B98647F21300DA101C6A90F29305 *)L_1, (RuntimeObject *)L_3, (RuntimeObject *)L_5, (RuntimeObject *)L_7, (RuntimeObject *)L_9, (RuntimeObject *)L_11, (RuntimeObject *)L_13, (RuntimeObject *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 31));
		return (RuntimeObject *)L_16;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m2BAF92312085BA625AFD62F9A2B350C254047488_gshared (ZipLatest_t47889B985CBFCE2D038A6C0CB8E42DE8C062E068 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		RuntimeObject * L_1 = ___value0;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(2 /* System.Void UniRx.IObserver`1<System.Object>::OnNext(T) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 32), (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_m996E0697713451D4BC39F1CB8C899A334819FEA7_gshared (ZipLatest_t47889B985CBFCE2D038A6C0CB8E42DE8C062E068 * __this, Exception_t * ___error0, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// try { observer.OnError(error); }
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		Exception_t * L_1 = ___error0;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker1< Exception_t * >::Invoke(1 /* System.Void UniRx.IObserver`1<System.Object>::OnError(System.Exception) */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 32), (RuntimeObject*)L_0, (Exception_t *)L_1);
		// try { observer.OnError(error); }
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		// finally { Dispose(); }
		NullCheck((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this);
		((  void (*) (OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 33)->methodPointer)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 33));
		// finally { Dispose(); }
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x17, IL_0017)
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`8/ZipLatest<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_mA5D2352AA220C29173749D3FBDFEDA29F57F8B6D_gshared (ZipLatest_t47889B985CBFCE2D038A6C0CB8E42DE8C062E068 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// try { observer.OnCompleted(); }
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this)->get_observer_0();
		il2cpp_codegen_memory_barrier();
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UniRx.IObserver`1<System.Object>::OnCompleted() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 32), (RuntimeObject*)L_0);
		// try { observer.OnCompleted(); }
		IL2CPP_LEAVE(0x16, FINALLY_000f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000f;
	}

FINALLY_000f:
	{ // begin finally (depth: 1)
		// finally { Dispose(); }
		NullCheck((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this);
		((  void (*) (OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 33)->methodPointer)((OperatorObserverBase_2_t5D734A6C256E0B2EF7363BC96C7DA9FB4585FE2C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 33));
		// finally { Dispose(); }
		IL2CPP_END_FINALLY(15)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(15)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16, IL_0016)
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_4__ctor_mA1E0E111674358245ABC0AA8567FDEC7C9CC6323_gshared (ZipLatestFunc_4_t068AA5074A55A9170C834EA64F905EC3D61E11CD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TR UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipLatestFunc_4_Invoke_m2A55ED824B94CED1D3DFA57429BCAF2BD9490EBE_gshared (ZipLatestFunc_4_t068AA5074A55A9170C834EA64F905EC3D61E11CD * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg10, ___arg21, ___arg32, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg10, ___arg21, ___arg32);
					else
						result = GenericVirtFuncInvoker2< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg10, ___arg21, ___arg32);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg10, ___arg21, ___arg32);
					else
						result = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg10, ___arg21, ___arg32);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg10, ___arg21, ___arg32);
					else
						result = GenericVirtFuncInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg10, ___arg21, ___arg32);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg10, ___arg21, ___arg32);
					else
						result = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg10, ___arg21, ___arg32);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg10, ___arg21, ___arg32, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_4_BeginInvoke_m85C49F3238525EEEF6501F8BDAE4F5CDE8693D49_gshared (ZipLatestFunc_4_t068AA5074A55A9170C834EA64F905EC3D61E11CD * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = ___arg32;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// TR UniRx.Operators.ZipLatestFunc`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipLatestFunc_4_EndInvoke_mAE57F48F04D50B3EC0F9EFF00215C42F6E842314_gshared (ZipLatestFunc_4_t068AA5074A55A9170C834EA64F905EC3D61E11CD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_5__ctor_m5A31796057487F3C855BE0C0393795139E52AFA5_gshared (ZipLatestFunc_5_t034B18D7B7806B768547ED63ED6523F49D3EE0B2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TR UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipLatestFunc_5_Invoke_m3C13AE046F043D19F4A0CF4EFC9019F73796FA64_gshared (ZipLatestFunc_5_t034B18D7B7806B768547ED63ED6523F49D3EE0B2 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, ___arg43, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg10, ___arg21, ___arg32, ___arg43, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg10, ___arg21, ___arg32, ___arg43);
					else
						result = GenericVirtFuncInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg10, ___arg21, ___arg32, ___arg43);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg10, ___arg21, ___arg32, ___arg43);
					else
						result = VirtFuncInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg10, ___arg21, ___arg32, ___arg43);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, ___arg43, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg10, ___arg21, ___arg32, ___arg43);
					else
						result = GenericVirtFuncInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg10, ___arg21, ___arg32, ___arg43);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg10, ___arg21, ___arg32, ___arg43);
					else
						result = VirtFuncInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg10, ___arg21, ___arg32, ___arg43);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, ___arg43, targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg10, ___arg21, ___arg32, ___arg43, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_5_BeginInvoke_mFC6B95E7B5B21515F08EEA217EB31C82B06A8325_gshared (ZipLatestFunc_5_t034B18D7B7806B768547ED63ED6523F49D3EE0B2 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = ___arg32;
	__d_args[3] = ___arg43;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// TR UniRx.Operators.ZipLatestFunc`5<System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipLatestFunc_5_EndInvoke_m80A253B1DB0F90E45968C47EC8F7BDDEC1D9CCB0_gshared (ZipLatestFunc_5_t034B18D7B7806B768547ED63ED6523F49D3EE0B2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_6__ctor_mB8BE6464A1ADA89B7CD707723675DCADD5B1FEC1_gshared (ZipLatestFunc_6_tF57A196B92A803627A820609E6441E884CEC0366 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TR UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipLatestFunc_6_Invoke_m5733CEC6A4A24AF947FB2B96FA7E971BB6AEB0F0_gshared (ZipLatestFunc_6_tF57A196B92A803627A820609E6441E884CEC0366 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, RuntimeObject * ___arg54, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, ___arg43, ___arg54, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, targetMethod);
			}
		}
		else if (___parameterCount != 5)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
					else
						result = GenericVirtFuncInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
					else
						result = VirtFuncInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, ___arg43, ___arg54, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker5< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
					else
						result = GenericVirtFuncInvoker5< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
					else
						result = VirtFuncInvoker5< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, ___arg43, ___arg54, targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,T5,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_6_BeginInvoke_m625B0BDCE07900508E1A369E9C330C9A5B1DF0E2_gshared (ZipLatestFunc_6_tF57A196B92A803627A820609E6441E884CEC0366 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, RuntimeObject * ___arg54, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	void *__d_args[6] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = ___arg32;
	__d_args[3] = ___arg43;
	__d_args[4] = ___arg54;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// TR UniRx.Operators.ZipLatestFunc`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipLatestFunc_6_EndInvoke_m8F84E9ED408A5CEB84E606D26AF903ECAC36CE82_gshared (ZipLatestFunc_6_tF57A196B92A803627A820609E6441E884CEC0366 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_7__ctor_m9849482FF7D25571301BFE0FA754740EB9063E25_gshared (ZipLatestFunc_7_t0D0C162176AFF4EA815561A183E0CADD1B8C5B86 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TR UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4,T5,T6)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipLatestFunc_7_Invoke_mAA856A5253FA376DCCE544AEFE109CD8274EE4BD_gshared (ZipLatestFunc_7_t0D0C162176AFF4EA815561A183E0CADD1B8C5B86 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, RuntimeObject * ___arg54, RuntimeObject * ___arg65, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 6)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, targetMethod);
			}
		}
		else if (___parameterCount != 6)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker5< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
					else
						result = GenericVirtFuncInvoker5< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
					else
						result = VirtFuncInvoker5< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker6< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
					else
						result = GenericVirtFuncInvoker6< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker6< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
					else
						result = VirtFuncInvoker6< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,T5,T6,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_7_BeginInvoke_m8D8DE61299D1351A21C60BCC6965BA09702F6283_gshared (ZipLatestFunc_7_t0D0C162176AFF4EA815561A183E0CADD1B8C5B86 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, RuntimeObject * ___arg54, RuntimeObject * ___arg65, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback6, RuntimeObject * ___object7, const RuntimeMethod* method)
{
	void *__d_args[7] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = ___arg32;
	__d_args[3] = ___arg43;
	__d_args[4] = ___arg54;
	__d_args[5] = ___arg65;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback6, (RuntimeObject*)___object7);;
}
// TR UniRx.Operators.ZipLatestFunc`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipLatestFunc_7_EndInvoke_m41B9EEA535274F1319A61078027D4249406B079A_gshared (ZipLatestFunc_7_t0D0C162176AFF4EA815561A183E0CADD1B8C5B86 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_8__ctor_m2A28EF8336A42F5FF345DA47415B893BFE612C14_gshared (ZipLatestFunc_8_tEB12C1F53C18B98647F21300DA101C6A90F29305 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// TR UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::Invoke(T1,T2,T3,T4,T5,T6,T7)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipLatestFunc_8_Invoke_mAA8829701F3286E842A8C59200F1E6BA1595E3DD_gshared (ZipLatestFunc_8_tEB12C1F53C18B98647F21300DA101C6A90F29305 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, RuntimeObject * ___arg54, RuntimeObject * ___arg65, RuntimeObject * ___arg76, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 7)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, targetMethod);
			}
		}
		else if (___parameterCount != 7)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker6< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
					else
						result = GenericVirtFuncInvoker6< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker6< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
					else
						result = VirtFuncInvoker6< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker7< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
					else
						result = GenericVirtFuncInvoker7< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker7< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
					else
						result = VirtFuncInvoker7< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T1,T2,T3,T4,T5,T6,T7,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_8_BeginInvoke_m8DF6409FD3CE40FCEAB3B82393DC9429E4B5BBA3_gshared (ZipLatestFunc_8_tEB12C1F53C18B98647F21300DA101C6A90F29305 * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, RuntimeObject * ___arg32, RuntimeObject * ___arg43, RuntimeObject * ___arg54, RuntimeObject * ___arg65, RuntimeObject * ___arg76, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback7, RuntimeObject * ___object8, const RuntimeMethod* method)
{
	void *__d_args[8] = {0};
	__d_args[0] = ___arg10;
	__d_args[1] = ___arg21;
	__d_args[2] = ___arg32;
	__d_args[3] = ___arg43;
	__d_args[4] = ___arg54;
	__d_args[5] = ___arg65;
	__d_args[6] = ___arg76;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback7, (RuntimeObject*)___object8);;
}
// TR UniRx.Operators.ZipLatestFunc`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipLatestFunc_8_EndInvoke_mCB891B3D2690D39EE96A93C094B65C361BCC9436_gshared (ZipLatestFunc_8_tEB12C1F53C18B98647F21300DA101C6A90F29305 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestObservable`1<System.Object>::.ctor(UniRx.IObservable`1<T>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_1__ctor_m5B8D81824C34DC48943BC69787018F18023C0E0D_gshared (ZipLatestObservable_1_t31B47FEB89C2F944C298FC3A1F3C781B58B81D47 * __this, IObservable_1U5BU5D_tA28A0BBFB2F67C11476091A974CA931722B8EAD8* ___sources0, const RuntimeMethod* method)
{
	{
		// : base(true)
		NullCheck((OperatorObservableBase_1_tE47C85622BC76B48DF7E360F0933AE98ECBF76DF *)__this);
		((  void (*) (OperatorObservableBase_1_tE47C85622BC76B48DF7E360F0933AE98ECBF76DF *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((OperatorObservableBase_1_tE47C85622BC76B48DF7E360F0933AE98ECBF76DF *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// this.sources = sources;
		IObservable_1U5BU5D_tA28A0BBFB2F67C11476091A974CA931722B8EAD8* L_0 = ___sources0;
		__this->set_sources_1(L_0);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`1<System.Object>::SubscribeCore(UniRx.IObserver`1<System.Collections.Generic.IList`1<T>>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_1_SubscribeCore_mA337B88CBEED0EEFB082BC7CDDF88B08A7A1A511_gshared (ZipLatestObservable_1_t31B47FEB89C2F944C298FC3A1F3C781B58B81D47 * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	{
		// return new ZipLatest(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA * L_2 = (ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA *, ZipLatestObservable_1_t31B47FEB89C2F944C298FC3A1F3C781B58B81D47 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (ZipLatestObservable_1_t31B47FEB89C2F944C298FC3A1F3C781B58B81D47 *)__this, (RuntimeObject*)L_0, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		NullCheck((ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA *)L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return (RuntimeObject*)L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`3<System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<TLeft>,UniRx.IObservable`1<TRight>,System.Func`3<TLeft,TRight,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_3__ctor_mBB202258BD5329D8288FFCFFF1231DEF37CD49EB_gshared (ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C * __this, RuntimeObject* ___left0, RuntimeObject* ___right1, Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * ___selector2, const RuntimeMethod* method)
{
	ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C * G_B2_0 = NULL;
	ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C * G_B3_1 = NULL;
	{
		// : base(left.IsRequiredSubscribeOnCurrentThread() || right.IsRequiredSubscribeOnCurrentThread())
		RuntimeObject* L_0 = ___left0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		G_B1_0 = ((ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C *)(__this));
		if (L_1)
		{
			G_B2_0 = ((ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C *)(__this));
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = ___right1;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = ((ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C *)(G_B1_0));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
		G_B3_1 = ((ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C *)(G_B2_0));
	}

IL_0012:
	{
		NullCheck((OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *)G_B3_1);
		((  void (*) (OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *)G_B3_1, (bool)G_B3_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// this.left = left;
		RuntimeObject* L_4 = ___left0;
		__this->set_left_1(L_4);
		// this.right = right;
		RuntimeObject* L_5 = ___right1;
		__this->set_right_2(L_5);
		// this.selector = selector;
		Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * L_6 = ___selector2;
		__this->set_selector_3(L_6);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`3<System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_3_SubscribeCore_mB4C325BDC40326EEDB6D6B63C1843CDF2331335B_gshared (ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	{
		// return new ZipLatest(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191 * L_2 = (ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191 *, ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_2, (ZipLatestObservable_3_tACC450DB0B9D6229B516A3E6BE4EC77FA199481C *)__this, (RuntimeObject*)L_0, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		NullCheck((ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191 *)L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((ZipLatest_t196B29B3BA543316A63708CD6F6B7C07A2079191 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return (RuntimeObject*)L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`4<System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.Operators.ZipLatestFunc`4<T1,T2,T3,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_4__ctor_m3431C051F3CCB92E79110F446BDFA381DEE51908_gshared (ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 * __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, ZipLatestFunc_4_t068AA5074A55A9170C834EA64F905EC3D61E11CD * ___resultSelector3, const RuntimeMethod* method)
{
	ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 * G_B3_0 = NULL;
	ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 * G_B1_0 = NULL;
	ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 * G_B4_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		G_B1_0 = ((ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 *)(__this));
		if (L_1)
		{
			G_B3_0 = ((ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 *)(__this));
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		G_B2_0 = ((ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 *)(G_B1_0));
		if (L_3)
		{
			G_B3_0 = ((ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 *)(G_B1_0));
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		G_B4_0 = ((int32_t)(L_5));
		G_B4_1 = ((ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 *)(G_B2_0));
		goto IL_001a;
	}

IL_0019:
	{
		G_B4_0 = 1;
		G_B4_1 = ((ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 *)(G_B3_0));
	}

IL_001a:
	{
		NullCheck((OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *)G_B4_1);
		((  void (*) (OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *)G_B4_1, (bool)G_B4_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// this.source1 = source1;
		RuntimeObject* L_6 = ___source10;
		__this->set_source1_1(L_6);
		// this.source2 = source2;
		RuntimeObject* L_7 = ___source21;
		__this->set_source2_2(L_7);
		// this.source3 = source3;
		RuntimeObject* L_8 = ___source32;
		__this->set_source3_3(L_8);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_4_t068AA5074A55A9170C834EA64F905EC3D61E11CD * L_9 = ___resultSelector3;
		__this->set_resultSelector_4(L_9);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`4<System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_4_SubscribeCore_mA781E414EA1C5108B38F61A688E1FFE3C5C9D11C_gshared (ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	{
		// return new ZipLatest(3, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		ZipLatest_t20F1AB22C93911EA87F0EC37F07CC3E5B998327F * L_2 = (ZipLatest_t20F1AB22C93911EA87F0EC37F07CC3E5B998327F *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5));
		((  void (*) (ZipLatest_t20F1AB22C93911EA87F0EC37F07CC3E5B998327F *, int32_t, ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(L_2, (int32_t)3, (ZipLatestObservable_4_tB0D8BD7ECCF9392B7B5302A98B645D295F861148 *)__this, (RuntimeObject*)L_0, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		NullCheck((ZipLatest_t20F1AB22C93911EA87F0EC37F07CC3E5B998327F *)L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_t20F1AB22C93911EA87F0EC37F07CC3E5B998327F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((ZipLatest_t20F1AB22C93911EA87F0EC37F07CC3E5B998327F *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		return (RuntimeObject*)L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.IObservable`1<T4>,UniRx.Operators.ZipLatestFunc`5<T1,T2,T3,T4,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_5__ctor_m1039C985787CD508244C2F6F3BF4B6A977082845_gshared (ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 * __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, ZipLatestFunc_5_t034B18D7B7806B768547ED63ED6523F49D3EE0B2 * ___resultSelector4, const RuntimeMethod* method)
{
	ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 * G_B4_0 = NULL;
	ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 * G_B1_0 = NULL;
	ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 * G_B2_0 = NULL;
	ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 * G_B5_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		G_B1_0 = ((ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 *)(__this));
		if (L_1)
		{
			G_B4_0 = ((ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 *)(__this));
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		G_B2_0 = ((ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 *)(G_B1_0));
		if (L_3)
		{
			G_B4_0 = ((ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 *)(G_B1_0));
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		G_B3_0 = ((ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 *)(G_B2_0));
		if (L_5)
		{
			G_B4_0 = ((ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 *)(G_B2_0));
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B5_0 = ((int32_t)(L_7));
		G_B5_1 = ((ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 *)(G_B3_0));
		goto IL_0023;
	}

IL_0022:
	{
		G_B5_0 = 1;
		G_B5_1 = ((ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 *)(G_B4_0));
	}

IL_0023:
	{
		NullCheck((OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *)G_B5_1);
		((  void (*) (OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *)G_B5_1, (bool)G_B5_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		// this.source1 = source1;
		RuntimeObject* L_8 = ___source10;
		__this->set_source1_1(L_8);
		// this.source2 = source2;
		RuntimeObject* L_9 = ___source21;
		__this->set_source2_2(L_9);
		// this.source3 = source3;
		RuntimeObject* L_10 = ___source32;
		__this->set_source3_3(L_10);
		// this.source4 = source4;
		RuntimeObject* L_11 = ___source43;
		__this->set_source4_4(L_11);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_5_t034B18D7B7806B768547ED63ED6523F49D3EE0B2 * L_12 = ___resultSelector4;
		__this->set_resultSelector_5(L_12);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_5_SubscribeCore_m2F90AE69B6438A7D97B89EB6883D37E1CB56BE96_gshared (ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	{
		// return new ZipLatest(4, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		ZipLatest_t8B2237E24744E77887FB25D402D547CF534EBA80 * L_2 = (ZipLatest_t8B2237E24744E77887FB25D402D547CF534EBA80 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6));
		((  void (*) (ZipLatest_t8B2237E24744E77887FB25D402D547CF534EBA80 *, int32_t, ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)(L_2, (int32_t)4, (ZipLatestObservable_5_t3263BBF5A80251A8856AC3F8D53B5129CE1F1B69 *)__this, (RuntimeObject*)L_0, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		NullCheck((ZipLatest_t8B2237E24744E77887FB25D402D547CF534EBA80 *)L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_t8B2237E24744E77887FB25D402D547CF534EBA80 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((ZipLatest_t8B2237E24744E77887FB25D402D547CF534EBA80 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.IObservable`1<T4>,UniRx.IObservable`1<T5>,UniRx.Operators.ZipLatestFunc`6<T1,T2,T3,T4,T5,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_6__ctor_m5BB5A26717223B617A5699E98FC75C2B0A9B927B_gshared (ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E * __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, RuntimeObject* ___source54, ZipLatestFunc_6_tF57A196B92A803627A820609E6441E884CEC0366 * ___resultSelector5, const RuntimeMethod* method)
{
	ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E * G_B5_0 = NULL;
	ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E * G_B1_0 = NULL;
	ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E * G_B2_0 = NULL;
	ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E * G_B3_0 = NULL;
	ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E * G_B6_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		G_B1_0 = ((ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E *)(__this));
		if (L_1)
		{
			G_B5_0 = ((ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E *)(__this));
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		G_B2_0 = ((ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E *)(G_B1_0));
		if (L_3)
		{
			G_B5_0 = ((ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E *)(G_B1_0));
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		G_B3_0 = ((ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E *)(G_B2_0));
		if (L_5)
		{
			G_B5_0 = ((ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E *)(G_B2_0));
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B4_0 = ((ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E *)(G_B3_0));
		if (L_7)
		{
			G_B5_0 = ((ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E *)(G_B3_0));
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_8 = ___source54;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		G_B6_0 = ((int32_t)(L_9));
		G_B6_1 = ((ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E *)(G_B4_0));
		goto IL_002c;
	}

IL_002b:
	{
		G_B6_0 = 1;
		G_B6_1 = ((ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E *)(G_B5_0));
	}

IL_002c:
	{
		NullCheck((OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *)G_B6_1);
		((  void (*) (OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *)G_B6_1, (bool)G_B6_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// this.source1 = source1;
		RuntimeObject* L_10 = ___source10;
		__this->set_source1_1(L_10);
		// this.source2 = source2;
		RuntimeObject* L_11 = ___source21;
		__this->set_source2_2(L_11);
		// this.source3 = source3;
		RuntimeObject* L_12 = ___source32;
		__this->set_source3_3(L_12);
		// this.source4 = source4;
		RuntimeObject* L_13 = ___source43;
		__this->set_source4_4(L_13);
		// this.source5 = source5;
		RuntimeObject* L_14 = ___source54;
		__this->set_source5_5(L_14);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_6_tF57A196B92A803627A820609E6441E884CEC0366 * L_15 = ___resultSelector5;
		__this->set_resultSelector_6(L_15);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_6_SubscribeCore_m8A2FD1CDF8827C81EC8B49A5EECDC7FCDAD43E4E_gshared (ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	{
		// return new ZipLatest(5, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		ZipLatest_tDEEB4918A762109EF19D972E2F30FFC4B5C58AC2 * L_2 = (ZipLatest_tDEEB4918A762109EF19D972E2F30FFC4B5C58AC2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (ZipLatest_tDEEB4918A762109EF19D972E2F30FFC4B5C58AC2 *, int32_t, ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_2, (int32_t)5, (ZipLatestObservable_6_t15CD2E23DEDDA86717DB44CAE4F412C16160C33E *)__this, (RuntimeObject*)L_0, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		NullCheck((ZipLatest_tDEEB4918A762109EF19D972E2F30FFC4B5C58AC2 *)L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_tDEEB4918A762109EF19D972E2F30FFC4B5C58AC2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((ZipLatest_tDEEB4918A762109EF19D972E2F30FFC4B5C58AC2 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		return (RuntimeObject*)L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.IObservable`1<T4>,UniRx.IObservable`1<T5>,UniRx.IObservable`1<T6>,UniRx.Operators.ZipLatestFunc`7<T1,T2,T3,T4,T5,T6,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_7__ctor_m46C06C2A7E13C050B8F297CA45F1929987FE67A9_gshared (ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 * __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, RuntimeObject* ___source54, RuntimeObject* ___source65, ZipLatestFunc_7_t0D0C162176AFF4EA815561A183E0CADD1B8C5B86 * ___resultSelector6, const RuntimeMethod* method)
{
	ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 * G_B6_0 = NULL;
	ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 * G_B1_0 = NULL;
	ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 * G_B2_0 = NULL;
	ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 * G_B3_0 = NULL;
	ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 * G_B4_0 = NULL;
	ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 * G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 * G_B7_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		G_B1_0 = ((ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 *)(__this));
		if (L_1)
		{
			G_B6_0 = ((ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 *)(__this));
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		G_B2_0 = ((ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 *)(G_B1_0));
		if (L_3)
		{
			G_B6_0 = ((ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 *)(G_B1_0));
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		G_B3_0 = ((ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 *)(G_B2_0));
		if (L_5)
		{
			G_B6_0 = ((ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 *)(G_B2_0));
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B4_0 = ((ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 *)(G_B3_0));
		if (L_7)
		{
			G_B6_0 = ((ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 *)(G_B3_0));
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_8 = ___source54;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		G_B5_0 = ((ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 *)(G_B4_0));
		if (L_9)
		{
			G_B6_0 = ((ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 *)(G_B4_0));
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_10 = ___source65;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((RuntimeObject*)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		G_B7_0 = ((int32_t)(L_11));
		G_B7_1 = ((ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 *)(G_B5_0));
		goto IL_0035;
	}

IL_0034:
	{
		G_B7_0 = 1;
		G_B7_1 = ((ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 *)(G_B6_0));
	}

IL_0035:
	{
		NullCheck((OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *)G_B7_1);
		((  void (*) (OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *)G_B7_1, (bool)G_B7_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// this.source1 = source1;
		RuntimeObject* L_12 = ___source10;
		__this->set_source1_1(L_12);
		// this.source2 = source2;
		RuntimeObject* L_13 = ___source21;
		__this->set_source2_2(L_13);
		// this.source3 = source3;
		RuntimeObject* L_14 = ___source32;
		__this->set_source3_3(L_14);
		// this.source4 = source4;
		RuntimeObject* L_15 = ___source43;
		__this->set_source4_4(L_15);
		// this.source5 = source5;
		RuntimeObject* L_16 = ___source54;
		__this->set_source5_5(L_16);
		// this.source6 = source6;
		RuntimeObject* L_17 = ___source65;
		__this->set_source6_6(L_17);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_7_t0D0C162176AFF4EA815561A183E0CADD1B8C5B86 * L_18 = ___resultSelector6;
		__this->set_resultSelector_7(L_18);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_7_SubscribeCore_mC756FEE3D182D54C96D02E6E0918DE6A1D364F1F_gshared (ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	{
		// return new ZipLatest(6, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		ZipLatest_tA523166BE7EABB4D4B6CA83AB5B9340210892DE9 * L_2 = (ZipLatest_tA523166BE7EABB4D4B6CA83AB5B9340210892DE9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
		((  void (*) (ZipLatest_tA523166BE7EABB4D4B6CA83AB5B9340210892DE9 *, int32_t, ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)(L_2, (int32_t)6, (ZipLatestObservable_7_t3378672FBE265CB243602DE22F07483E99917D88 *)__this, (RuntimeObject*)L_0, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((ZipLatest_tA523166BE7EABB4D4B6CA83AB5B9340210892DE9 *)L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_tA523166BE7EABB4D4B6CA83AB5B9340210892DE9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((ZipLatest_tA523166BE7EABB4D4B6CA83AB5B9340210892DE9 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.IObservable`1<T4>,UniRx.IObservable`1<T5>,UniRx.IObservable`1<T6>,UniRx.IObservable`1<T7>,UniRx.Operators.ZipLatestFunc`8<T1,T2,T3,T4,T5,T6,T7,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_8__ctor_m79ED081B5C6C7CEF53281F3E8828A6A860C0814A_gshared (ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C * __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, RuntimeObject* ___source54, RuntimeObject* ___source65, RuntimeObject* ___source76, ZipLatestFunc_8_tEB12C1F53C18B98647F21300DA101C6A90F29305 * ___resultSelector7, const RuntimeMethod* method)
{
	ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C * G_B7_0 = NULL;
	ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C * G_B1_0 = NULL;
	ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C * G_B2_0 = NULL;
	ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C * G_B3_0 = NULL;
	ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C * G_B4_0 = NULL;
	ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C * G_B5_0 = NULL;
	ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C * G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C * G_B8_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     source7.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		G_B1_0 = ((ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C *)(__this));
		if (L_1)
		{
			G_B7_0 = ((ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C *)(__this));
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		G_B2_0 = ((ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C *)(G_B1_0));
		if (L_3)
		{
			G_B7_0 = ((ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C *)(G_B1_0));
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		G_B3_0 = ((ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C *)(G_B2_0));
		if (L_5)
		{
			G_B7_0 = ((ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C *)(G_B2_0));
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B4_0 = ((ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C *)(G_B3_0));
		if (L_7)
		{
			G_B7_0 = ((ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C *)(G_B3_0));
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_8 = ___source54;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		G_B5_0 = ((ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C *)(G_B4_0));
		if (L_9)
		{
			G_B7_0 = ((ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C *)(G_B4_0));
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_10 = ___source65;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((RuntimeObject*)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		G_B6_0 = ((ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C *)(G_B5_0));
		if (L_11)
		{
			G_B7_0 = ((ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C *)(G_B5_0));
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_12 = ___source76;
		bool L_13;
		L_13 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((RuntimeObject*)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		G_B8_0 = ((int32_t)(L_13));
		G_B8_1 = ((ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C *)(G_B6_0));
		goto IL_003e;
	}

IL_003d:
	{
		G_B8_0 = 1;
		G_B8_1 = ((ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C *)(G_B7_0));
	}

IL_003e:
	{
		NullCheck((OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *)G_B8_1);
		((  void (*) (OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *)G_B8_1, (bool)G_B8_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		// this.source1 = source1;
		RuntimeObject* L_14 = ___source10;
		__this->set_source1_1(L_14);
		// this.source2 = source2;
		RuntimeObject* L_15 = ___source21;
		__this->set_source2_2(L_15);
		// this.source3 = source3;
		RuntimeObject* L_16 = ___source32;
		__this->set_source3_3(L_16);
		// this.source4 = source4;
		RuntimeObject* L_17 = ___source43;
		__this->set_source4_4(L_17);
		// this.source5 = source5;
		RuntimeObject* L_18 = ___source54;
		__this->set_source5_5(L_18);
		// this.source6 = source6;
		RuntimeObject* L_19 = ___source65;
		__this->set_source6_6(L_19);
		// this.source7 = source7;
		RuntimeObject* L_20 = ___source76;
		__this->set_source7_7(L_20);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_8_tEB12C1F53C18B98647F21300DA101C6A90F29305 * L_21 = ___resultSelector7;
		__this->set_resultSelector_8(L_21);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_8_SubscribeCore_m0A3392CA51C12693467130D46351E399C362DB73_gshared (ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	{
		// return new ZipLatest(7, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		ZipLatest_t47889B985CBFCE2D038A6C0CB8E42DE8C062E068 * L_2 = (ZipLatest_t47889B985CBFCE2D038A6C0CB8E42DE8C062E068 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (ZipLatest_t47889B985CBFCE2D038A6C0CB8E42DE8C062E068 *, int32_t, ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_2, (int32_t)7, (ZipLatestObservable_8_t79FEFB7D05DC5E230A99E225CADEC7AABF28838C *)__this, (RuntimeObject*)L_0, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		NullCheck((ZipLatest_t47889B985CBFCE2D038A6C0CB8E42DE8C062E068 *)L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (ZipLatest_t47889B985CBFCE2D038A6C0CB8E42DE8C062E068 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((ZipLatest_t47889B985CBFCE2D038A6C0CB8E42DE8C062E068 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>::.ctor(UniRx.Operators.ZipLatestObservable`1/ZipLatest<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver__ctor_m971C4C939B90DBD8A12086BBCF6030AB1D587948_gshared (ZipLatestObserver_tB0D86E749479A08029AA6AF4C82BFE4B9597A339 * __this, ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA * ___parent0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		// public ZipLatestObserver(ZipLatest parent, int index)
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// this.parent = parent;
		ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA * L_0 = ___parent0;
		__this->set_parent_0(L_0);
		// this.index = index;
		int32_t L_1 = ___index1;
		__this->set_index_1(L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_OnNext_m5B1CD7B5E424AEF7279150777F079F9FACD21A01_gshared (ZipLatestObserver_tB0D86E749479A08029AA6AF4C82BFE4B9597A339 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (parent.gate)
		ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA * L_0 = (ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA *)__this->get_parent_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)L_0->get_gate_3();
		V_0 = (RuntimeObject *)L_1;
		V_1 = (bool)0;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_2, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		// parent.values[index] = value;
		ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA * L_3 = (ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA *)__this->get_parent_0();
		NullCheck(L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3->get_values_5();
		int32_t L_5 = (int32_t)__this->get_index_1();
		RuntimeObject * L_6 = ___value0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)L_6);
		// parent.Publish(index);
		ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA * L_7 = (ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA *)__this->get_parent_0();
		int32_t L_8 = (int32_t)__this->get_index_1();
		NullCheck((ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA *)L_7);
		((  void (*) (ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// }
		IL2CPP_LEAVE(0x4A, FINALLY_0040);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			bool L_9 = V_1;
			if (!L_9)
			{
				goto IL_0049;
			}
		}

IL_0043:
		{
			RuntimeObject * L_10 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_10, /*hidden argument*/NULL);
		}

IL_0049:
		{
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_OnError_mA342C960CF0E99D1ED2E5DAC50A0D151AF896659_gshared (ZipLatestObserver_tB0D86E749479A08029AA6AF4C82BFE4B9597A339 * __this, Exception_t * ___ex0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (parent.gate)
		ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA * L_0 = (ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA *)__this->get_parent_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)L_0->get_gate_3();
		V_0 = (RuntimeObject *)L_1;
		V_1 = (bool)0;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_2, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		// parent.OnError(ex);
		ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA * L_3 = (ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA *)__this->get_parent_0();
		Exception_t * L_4 = ___ex0;
		NullCheck((OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *)L_3);
		VirtActionInvoker1< Exception_t * >::Invoke(9 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnError(System.Exception) */, (OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *)L_3, (Exception_t *)L_4);
		// }
		IL2CPP_LEAVE(0x2E, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		{
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_002d;
			}
		}

IL_0027:
		{
			RuntimeObject * L_6 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_6, /*hidden argument*/NULL);
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(36)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_OnCompleted_m85B3E498430BA0822FB5401E8ED66F71102E78AD_gshared (ZipLatestObserver_tB0D86E749479A08029AA6AF4C82BFE4B9597A339 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (parent.gate)
		ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA * L_0 = (ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA *)__this->get_parent_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)L_0->get_gate_3();
		V_0 = (RuntimeObject *)L_1;
		V_1 = (bool)0;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_2 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_2, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
			// parent.isCompleted[index] = true;
			ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA * L_3 = (ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA *)__this->get_parent_0();
			NullCheck(L_3);
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_4 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)L_3->get_isCompleted_7();
			int32_t L_5 = (int32_t)__this->get_index_1();
			NullCheck(L_4);
			(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (bool)1);
			// var allTrue = true;
			V_2 = (bool)1;
			// for (int i = 0; i < parent.length; i++)
			V_3 = (int32_t)0;
			goto IL_0046;
		}

IL_002f:
		{
			// if (!parent.isCompleted[i])
			ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA * L_6 = (ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA *)__this->get_parent_0();
			NullCheck(L_6);
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_7 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)L_6->get_isCompleted_7();
			int32_t L_8 = V_3;
			NullCheck(L_7);
			int32_t L_9 = L_8;
			uint8_t L_10 = (uint8_t)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
			if (L_10)
			{
				goto IL_0042;
			}
		}

IL_003e:
		{
			// allTrue = false;
			V_2 = (bool)0;
			// break;
			goto IL_0054;
		}

IL_0042:
		{
			// for (int i = 0; i < parent.length; i++)
			int32_t L_11 = V_3;
			V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		}

IL_0046:
		{
			// for (int i = 0; i < parent.length; i++)
			int32_t L_12 = V_3;
			ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA * L_13 = (ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA *)__this->get_parent_0();
			NullCheck(L_13);
			int32_t L_14 = (int32_t)L_13->get_length_4();
			if ((((int32_t)L_12) < ((int32_t)L_14)))
			{
				goto IL_002f;
			}
		}

IL_0054:
		{
			// if (allTrue)
			bool L_15 = V_2;
			if (!L_15)
			{
				goto IL_0062;
			}
		}

IL_0057:
		{
			// parent.OnCompleted();
			ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA * L_16 = (ZipLatest_t96B84CAD80267A31C0FFE3F69C7F57F0148CEDCA *)__this->get_parent_0();
			NullCheck((OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *)L_16);
			VirtActionInvoker0::Invoke(10 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnCompleted() */, (OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *)L_16);
		}

IL_0062:
		{
			// }
			IL2CPP_LEAVE(0x6E, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		{
			bool L_17 = V_1;
			if (!L_17)
			{
				goto IL_006d;
			}
		}

IL_0067:
		{
			RuntimeObject * L_18 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_18, /*hidden argument*/NULL);
		}

IL_006d:
		{
			IL2CPP_END_FINALLY(100)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
	}

IL_006e:
	{
		// }
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
// T UniRx.Operators.ZipLatestObserver`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ZipLatestObserver_1_get_Value_m7B439D237AC300694F9B826F1102EE17B5A34666_gshared (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * __this, const RuntimeMethod* method)
{
	{
		// public T Value { get { return value; } }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_3();
		return (RuntimeObject *)L_0;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<System.Object>::.ctor(System.Object,UniRx.Operators.IZipLatestObservable,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1__ctor_mBBCAF38EF80AFA291FE8E1A4DC1521B42F4254B0_gshared (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * __this, RuntimeObject * ___gate0, RuntimeObject* ___parent1, int32_t ___index2, const RuntimeMethod* method)
{
	{
		// public ZipLatestObserver(object gate, IZipLatestObservable parent, int index)
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// this.gate = gate;
		RuntimeObject * L_0 = ___gate0;
		__this->set_gate_0(L_0);
		// this.parent = parent;
		RuntimeObject* L_1 = ___parent1;
		__this->set_parent_1(L_1);
		// this.index = index;
		int32_t L_2 = ___index2;
		__this->set_index_2(L_2);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1_OnNext_mE01AAA21E7DF91FDCC388456C97B75F972E26715_gshared (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipLatestObservable_t5E3F673DB7EC30C387DEC8DBCCE89423CEE030D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (gate)
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_gate_0();
		V_0 = (RuntimeObject *)L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_1, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		// this.value = value;
		RuntimeObject * L_2 = ___value0;
		__this->set_value_3(L_2);
		// parent.Publish(index);
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_parent_1();
		int32_t L_4 = (int32_t)__this->get_index_2();
		NullCheck((RuntimeObject*)L_3);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void UniRx.Operators.IZipLatestObservable::Publish(System.Int32) */, IZipLatestObservable_t5E3F673DB7EC30C387DEC8DBCCE89423CEE030D2_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (int32_t)L_4);
		// }
		IL2CPP_LEAVE(0x35, FINALLY_002b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		{
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_0034;
			}
		}

IL_002e:
		{
			RuntimeObject * L_6 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_6, /*hidden argument*/NULL);
		}

IL_0034:
		{
			IL2CPP_END_FINALLY(43)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x35, IL_0035)
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1_OnError_m41A7155114943DDD79D881CA83A15E921752E190_gshared (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * __this, Exception_t * ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipLatestObservable_t5E3F673DB7EC30C387DEC8DBCCE89423CEE030D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (gate)
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_gate_0();
		V_0 = (RuntimeObject *)L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_1, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		// parent.Fail(error);
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_parent_1();
		Exception_t * L_3 = ___error0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker1< Exception_t * >::Invoke(1 /* System.Void UniRx.Operators.IZipLatestObservable::Fail(System.Exception) */, IZipLatestObservable_t5E3F673DB7EC30C387DEC8DBCCE89423CEE030D2_il2cpp_TypeInfo_var, (RuntimeObject*)L_2, (Exception_t *)L_3);
		// }
		IL2CPP_LEAVE(0x29, FINALLY_001f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001f;
	}

FINALLY_001f:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0028;
			}
		}

IL_0022:
		{
			RuntimeObject * L_5 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_5, /*hidden argument*/NULL);
		}

IL_0028:
		{
			IL2CPP_END_FINALLY(31)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(31)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x29, IL_0029)
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1_OnCompleted_mD6D06CE13A680598DAE9B64A64A34E1501147215_gshared (ZipLatestObserver_1_t6AA8295FA33E25885AE3EEAE9093C5A3BA8736D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipLatestObservable_t5E3F673DB7EC30C387DEC8DBCCE89423CEE030D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (gate)
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_gate_0();
		V_0 = (RuntimeObject *)L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_1, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		// parent.Done(index);
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_parent_1();
		int32_t L_3 = (int32_t)__this->get_index_2();
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void UniRx.Operators.IZipLatestObservable::Done(System.Int32) */, IZipLatestObservable_t5E3F673DB7EC30C387DEC8DBCCE89423CEE030D2_il2cpp_TypeInfo_var, (RuntimeObject*)L_2, (int32_t)L_3);
		// }
		IL2CPP_LEAVE(0x2E, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_002d;
			}
		}

IL_0027:
		{
			RuntimeObject * L_5 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_5, /*hidden argument*/NULL);
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(36)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
	}

IL_002e:
	{
		// }
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
// System.Void UniRx.Operators.ZipObservable`1<System.Object>::.ctor(UniRx.IObservable`1<T>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_1__ctor_m896865830E4C6C3ADB28625ED3F4182B2335A55C_gshared (ZipObservable_1_t4F142AABEA860C7E65B5DD043E61D5C70E8019EF * __this, IObservable_1U5BU5D_tA28A0BBFB2F67C11476091A974CA931722B8EAD8* ___sources0, const RuntimeMethod* method)
{
	{
		// : base(true)
		NullCheck((OperatorObservableBase_1_tE47C85622BC76B48DF7E360F0933AE98ECBF76DF *)__this);
		((  void (*) (OperatorObservableBase_1_tE47C85622BC76B48DF7E360F0933AE98ECBF76DF *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((OperatorObservableBase_1_tE47C85622BC76B48DF7E360F0933AE98ECBF76DF *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// this.sources = sources;
		IObservable_1U5BU5D_tA28A0BBFB2F67C11476091A974CA931722B8EAD8* L_0 = ___sources0;
		__this->set_sources_1(L_0);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`1<System.Object>::SubscribeCore(UniRx.IObserver`1<System.Collections.Generic.IList`1<T>>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_1_SubscribeCore_m98351B603E33CF4CAA0F1C360154B9EC7BE4DC47_gshared (ZipObservable_1_t4F142AABEA860C7E65B5DD043E61D5C70E8019EF * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 * L_2 = (Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 *, ZipObservable_1_t4F142AABEA860C7E65B5DD043E61D5C70E8019EF *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (ZipObservable_1_t4F142AABEA860C7E65B5DD043E61D5C70E8019EF *)__this, (RuntimeObject*)L_0, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		NullCheck((Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 *)L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return (RuntimeObject*)L_3;
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
// System.Void UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<TLeft>,UniRx.IObservable`1<TRight>,System.Func`3<TLeft,TRight,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_3__ctor_m66E5DA73FE691D60AC4D7136A51D96D08A34DD79_gshared (ZipObservable_3_t19F669AD1C9E142DFCD663BFB8D4681B41891909 * __this, RuntimeObject* ___left0, RuntimeObject* ___right1, Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * ___selector2, const RuntimeMethod* method)
{
	ZipObservable_3_t19F669AD1C9E142DFCD663BFB8D4681B41891909 * G_B2_0 = NULL;
	ZipObservable_3_t19F669AD1C9E142DFCD663BFB8D4681B41891909 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ZipObservable_3_t19F669AD1C9E142DFCD663BFB8D4681B41891909 * G_B3_1 = NULL;
	{
		// : base(left.IsRequiredSubscribeOnCurrentThread() || right.IsRequiredSubscribeOnCurrentThread())
		RuntimeObject* L_0 = ___left0;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		G_B1_0 = ((ZipObservable_3_t19F669AD1C9E142DFCD663BFB8D4681B41891909 *)(__this));
		if (L_1)
		{
			G_B2_0 = ((ZipObservable_3_t19F669AD1C9E142DFCD663BFB8D4681B41891909 *)(__this));
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = ___right1;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = ((ZipObservable_3_t19F669AD1C9E142DFCD663BFB8D4681B41891909 *)(G_B1_0));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
		G_B3_1 = ((ZipObservable_3_t19F669AD1C9E142DFCD663BFB8D4681B41891909 *)(G_B2_0));
	}

IL_0012:
	{
		NullCheck((OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *)G_B3_1);
		((  void (*) (OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *)G_B3_1, (bool)G_B3_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		// this.left = left;
		RuntimeObject* L_4 = ___left0;
		__this->set_left_1(L_4);
		// this.right = right;
		RuntimeObject* L_5 = ___right1;
		__this->set_right_2(L_5);
		// this.selector = selector;
		Func_3_tBBBFF266D23D5A9A7940D16DA73BCD5DE0753A27 * L_6 = ___selector2;
		__this->set_selector_3(L_6);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`3<System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_3_SubscribeCore_m59E62FE04E99635EE2FAE53ADA3113EC35F9C3AB_gshared (ZipObservable_3_t19F669AD1C9E142DFCD663BFB8D4681B41891909 * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_t13EBD71F04563A56D8061EED082B6C1CD91189A1 * L_2 = (Zip_t13EBD71F04563A56D8061EED082B6C1CD91189A1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (Zip_t13EBD71F04563A56D8061EED082B6C1CD91189A1 *, ZipObservable_3_t19F669AD1C9E142DFCD663BFB8D4681B41891909 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_2, (ZipObservable_3_t19F669AD1C9E142DFCD663BFB8D4681B41891909 *)__this, (RuntimeObject*)L_0, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		NullCheck((Zip_t13EBD71F04563A56D8061EED082B6C1CD91189A1 *)L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t13EBD71F04563A56D8061EED082B6C1CD91189A1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Zip_t13EBD71F04563A56D8061EED082B6C1CD91189A1 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		return (RuntimeObject*)L_3;
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
// System.Void UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.Operators.ZipFunc`4<T1,T2,T3,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_4__ctor_m642F004341763C833192B53B38549D65C89AEB11_gshared (ZipObservable_4_t11DF5FB8681FDEFBF19B4D1632B8FB876B4F4AC8 * __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, ZipFunc_4_t505910809D87AAC499E7BA3A2825D94CB6AB211B * ___resultSelector3, const RuntimeMethod* method)
{
	ZipObservable_4_t11DF5FB8681FDEFBF19B4D1632B8FB876B4F4AC8 * G_B3_0 = NULL;
	ZipObservable_4_t11DF5FB8681FDEFBF19B4D1632B8FB876B4F4AC8 * G_B1_0 = NULL;
	ZipObservable_4_t11DF5FB8681FDEFBF19B4D1632B8FB876B4F4AC8 * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	ZipObservable_4_t11DF5FB8681FDEFBF19B4D1632B8FB876B4F4AC8 * G_B4_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		G_B1_0 = ((ZipObservable_4_t11DF5FB8681FDEFBF19B4D1632B8FB876B4F4AC8 *)(__this));
		if (L_1)
		{
			G_B3_0 = ((ZipObservable_4_t11DF5FB8681FDEFBF19B4D1632B8FB876B4F4AC8 *)(__this));
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		G_B2_0 = ((ZipObservable_4_t11DF5FB8681FDEFBF19B4D1632B8FB876B4F4AC8 *)(G_B1_0));
		if (L_3)
		{
			G_B3_0 = ((ZipObservable_4_t11DF5FB8681FDEFBF19B4D1632B8FB876B4F4AC8 *)(G_B1_0));
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		G_B4_0 = ((int32_t)(L_5));
		G_B4_1 = ((ZipObservable_4_t11DF5FB8681FDEFBF19B4D1632B8FB876B4F4AC8 *)(G_B2_0));
		goto IL_001a;
	}

IL_0019:
	{
		G_B4_0 = 1;
		G_B4_1 = ((ZipObservable_4_t11DF5FB8681FDEFBF19B4D1632B8FB876B4F4AC8 *)(G_B3_0));
	}

IL_001a:
	{
		NullCheck((OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *)G_B4_1);
		((  void (*) (OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *)G_B4_1, (bool)G_B4_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// this.source1 = source1;
		RuntimeObject* L_6 = ___source10;
		__this->set_source1_1(L_6);
		// this.source2 = source2;
		RuntimeObject* L_7 = ___source21;
		__this->set_source2_2(L_7);
		// this.source3 = source3;
		RuntimeObject* L_8 = ___source32;
		__this->set_source3_3(L_8);
		// this.resultSelector = resultSelector;
		ZipFunc_4_t505910809D87AAC499E7BA3A2825D94CB6AB211B * L_9 = ___resultSelector3;
		__this->set_resultSelector_4(L_9);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`4<System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_4_SubscribeCore_m4215B5A74D5F860B2B56B5802C4BB6834C3A0052_gshared (ZipObservable_4_t11DF5FB8681FDEFBF19B4D1632B8FB876B4F4AC8 * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_t6F4A4103745D011459457C968CC4E0DBF38BFDE3 * L_2 = (Zip_t6F4A4103745D011459457C968CC4E0DBF38BFDE3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5));
		((  void (*) (Zip_t6F4A4103745D011459457C968CC4E0DBF38BFDE3 *, ZipObservable_4_t11DF5FB8681FDEFBF19B4D1632B8FB876B4F4AC8 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)(L_2, (ZipObservable_4_t11DF5FB8681FDEFBF19B4D1632B8FB876B4F4AC8 *)__this, (RuntimeObject*)L_0, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		NullCheck((Zip_t6F4A4103745D011459457C968CC4E0DBF38BFDE3 *)L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t6F4A4103745D011459457C968CC4E0DBF38BFDE3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Zip_t6F4A4103745D011459457C968CC4E0DBF38BFDE3 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		return (RuntimeObject*)L_3;
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
// System.Void UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.IObservable`1<T4>,UniRx.Operators.ZipFunc`5<T1,T2,T3,T4,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_5__ctor_mC60770CC720879775EEF570B15C60F7BCF746CC1_gshared (ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C * __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, ZipFunc_5_tF2AEB30C5ED3B56CF895E857FAA7C64B512BB476 * ___resultSelector4, const RuntimeMethod* method)
{
	ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C * G_B4_0 = NULL;
	ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C * G_B1_0 = NULL;
	ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C * G_B2_0 = NULL;
	ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C * G_B5_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		G_B1_0 = ((ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C *)(__this));
		if (L_1)
		{
			G_B4_0 = ((ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C *)(__this));
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		G_B2_0 = ((ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C *)(G_B1_0));
		if (L_3)
		{
			G_B4_0 = ((ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C *)(G_B1_0));
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		G_B3_0 = ((ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C *)(G_B2_0));
		if (L_5)
		{
			G_B4_0 = ((ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C *)(G_B2_0));
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B5_0 = ((int32_t)(L_7));
		G_B5_1 = ((ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C *)(G_B3_0));
		goto IL_0023;
	}

IL_0022:
	{
		G_B5_0 = 1;
		G_B5_1 = ((ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C *)(G_B4_0));
	}

IL_0023:
	{
		NullCheck((OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *)G_B5_1);
		((  void (*) (OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *)G_B5_1, (bool)G_B5_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		// this.source1 = source1;
		RuntimeObject* L_8 = ___source10;
		__this->set_source1_1(L_8);
		// this.source2 = source2;
		RuntimeObject* L_9 = ___source21;
		__this->set_source2_2(L_9);
		// this.source3 = source3;
		RuntimeObject* L_10 = ___source32;
		__this->set_source3_3(L_10);
		// this.source4 = source4;
		RuntimeObject* L_11 = ___source43;
		__this->set_source4_4(L_11);
		// this.resultSelector = resultSelector;
		ZipFunc_5_tF2AEB30C5ED3B56CF895E857FAA7C64B512BB476 * L_12 = ___resultSelector4;
		__this->set_resultSelector_5(L_12);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`5<System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_5_SubscribeCore_mC5793D33F93E4D134FA426F21DEC139556A77A65_gshared (ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_tAECCA6EB650DC83B7D41E72620E9962C062B9BC0 * L_2 = (Zip_tAECCA6EB650DC83B7D41E72620E9962C062B9BC0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6));
		((  void (*) (Zip_tAECCA6EB650DC83B7D41E72620E9962C062B9BC0 *, ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)(L_2, (ZipObservable_5_t332121CD5E009B2FBA61755583AF12401EB4C73C *)__this, (RuntimeObject*)L_0, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		NullCheck((Zip_tAECCA6EB650DC83B7D41E72620E9962C062B9BC0 *)L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_tAECCA6EB650DC83B7D41E72620E9962C062B9BC0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Zip_tAECCA6EB650DC83B7D41E72620E9962C062B9BC0 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_3;
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
// System.Void UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.IObservable`1<T4>,UniRx.IObservable`1<T5>,UniRx.Operators.ZipFunc`6<T1,T2,T3,T4,T5,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_6__ctor_m2BEDBDC41CF7449356C3DA29F72A9D7DEEE1D87C_gshared (ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF * __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, RuntimeObject* ___source54, ZipFunc_6_tE402A210998EFF5E6094C07B9A537A45986F3709 * ___resultSelector5, const RuntimeMethod* method)
{
	ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF * G_B5_0 = NULL;
	ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF * G_B1_0 = NULL;
	ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF * G_B2_0 = NULL;
	ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF * G_B3_0 = NULL;
	ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF * G_B6_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		G_B1_0 = ((ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF *)(__this));
		if (L_1)
		{
			G_B5_0 = ((ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF *)(__this));
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		G_B2_0 = ((ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF *)(G_B1_0));
		if (L_3)
		{
			G_B5_0 = ((ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF *)(G_B1_0));
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		G_B3_0 = ((ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF *)(G_B2_0));
		if (L_5)
		{
			G_B5_0 = ((ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF *)(G_B2_0));
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B4_0 = ((ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF *)(G_B3_0));
		if (L_7)
		{
			G_B5_0 = ((ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF *)(G_B3_0));
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_8 = ___source54;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		G_B6_0 = ((int32_t)(L_9));
		G_B6_1 = ((ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF *)(G_B4_0));
		goto IL_002c;
	}

IL_002b:
	{
		G_B6_0 = 1;
		G_B6_1 = ((ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF *)(G_B5_0));
	}

IL_002c:
	{
		NullCheck((OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *)G_B6_1);
		((  void (*) (OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *)G_B6_1, (bool)G_B6_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// this.source1 = source1;
		RuntimeObject* L_10 = ___source10;
		__this->set_source1_1(L_10);
		// this.source2 = source2;
		RuntimeObject* L_11 = ___source21;
		__this->set_source2_2(L_11);
		// this.source3 = source3;
		RuntimeObject* L_12 = ___source32;
		__this->set_source3_3(L_12);
		// this.source4 = source4;
		RuntimeObject* L_13 = ___source43;
		__this->set_source4_4(L_13);
		// this.source5 = source5;
		RuntimeObject* L_14 = ___source54;
		__this->set_source5_5(L_14);
		// this.resultSelector = resultSelector;
		ZipFunc_6_tE402A210998EFF5E6094C07B9A537A45986F3709 * L_15 = ___resultSelector5;
		__this->set_resultSelector_6(L_15);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`6<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_6_SubscribeCore_m02FE0C26959C786D68B378CD534943B0E2E3B85C_gshared (ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_t15EB7BC544EB283E300FD0781345D4DADD89E8AC * L_2 = (Zip_t15EB7BC544EB283E300FD0781345D4DADD89E8AC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (Zip_t15EB7BC544EB283E300FD0781345D4DADD89E8AC *, ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_2, (ZipObservable_6_tB027B27DF8EE5A1A4C224901D32BE7E54CC99CBF *)__this, (RuntimeObject*)L_0, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		NullCheck((Zip_t15EB7BC544EB283E300FD0781345D4DADD89E8AC *)L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t15EB7BC544EB283E300FD0781345D4DADD89E8AC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Zip_t15EB7BC544EB283E300FD0781345D4DADD89E8AC *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		return (RuntimeObject*)L_3;
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
// System.Void UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.IObservable`1<T4>,UniRx.IObservable`1<T5>,UniRx.IObservable`1<T6>,UniRx.Operators.ZipFunc`7<T1,T2,T3,T4,T5,T6,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_7__ctor_m67DF6DF279D7B135FE22F8C4CC9907ABD2E713A2_gshared (ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A * __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, RuntimeObject* ___source54, RuntimeObject* ___source65, ZipFunc_7_tABC414FCC717501CBEED1ADE34E677D99B8DC3EC * ___resultSelector6, const RuntimeMethod* method)
{
	ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A * G_B6_0 = NULL;
	ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A * G_B1_0 = NULL;
	ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A * G_B2_0 = NULL;
	ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A * G_B3_0 = NULL;
	ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A * G_B4_0 = NULL;
	ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A * G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A * G_B7_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		G_B1_0 = ((ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A *)(__this));
		if (L_1)
		{
			G_B6_0 = ((ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A *)(__this));
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		G_B2_0 = ((ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A *)(G_B1_0));
		if (L_3)
		{
			G_B6_0 = ((ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A *)(G_B1_0));
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		G_B3_0 = ((ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A *)(G_B2_0));
		if (L_5)
		{
			G_B6_0 = ((ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A *)(G_B2_0));
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B4_0 = ((ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A *)(G_B3_0));
		if (L_7)
		{
			G_B6_0 = ((ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A *)(G_B3_0));
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_8 = ___source54;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		G_B5_0 = ((ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A *)(G_B4_0));
		if (L_9)
		{
			G_B6_0 = ((ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A *)(G_B4_0));
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_10 = ___source65;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((RuntimeObject*)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		G_B7_0 = ((int32_t)(L_11));
		G_B7_1 = ((ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A *)(G_B5_0));
		goto IL_0035;
	}

IL_0034:
	{
		G_B7_0 = 1;
		G_B7_1 = ((ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A *)(G_B6_0));
	}

IL_0035:
	{
		NullCheck((OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *)G_B7_1);
		((  void (*) (OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *)G_B7_1, (bool)G_B7_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// this.source1 = source1;
		RuntimeObject* L_12 = ___source10;
		__this->set_source1_1(L_12);
		// this.source2 = source2;
		RuntimeObject* L_13 = ___source21;
		__this->set_source2_2(L_13);
		// this.source3 = source3;
		RuntimeObject* L_14 = ___source32;
		__this->set_source3_3(L_14);
		// this.source4 = source4;
		RuntimeObject* L_15 = ___source43;
		__this->set_source4_4(L_15);
		// this.source5 = source5;
		RuntimeObject* L_16 = ___source54;
		__this->set_source5_5(L_16);
		// this.source6 = source6;
		RuntimeObject* L_17 = ___source65;
		__this->set_source6_6(L_17);
		// this.resultSelector = resultSelector;
		ZipFunc_7_tABC414FCC717501CBEED1ADE34E677D99B8DC3EC * L_18 = ___resultSelector6;
		__this->set_resultSelector_7(L_18);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`7<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_7_SubscribeCore_m19CAD0D77BEF4D28739DB67095D9ADA0053CD96F_gshared (ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_t29F08489999A6A3B3C7A5D088D83B687439565EC * L_2 = (Zip_t29F08489999A6A3B3C7A5D088D83B687439565EC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8));
		((  void (*) (Zip_t29F08489999A6A3B3C7A5D088D83B687439565EC *, ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)(L_2, (ZipObservable_7_t0A6CEAAA3A6A8979D10890681D1DD0F70C324A3A *)__this, (RuntimeObject*)L_0, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		NullCheck((Zip_t29F08489999A6A3B3C7A5D088D83B687439565EC *)L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t29F08489999A6A3B3C7A5D088D83B687439565EC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((Zip_t29F08489999A6A3B3C7A5D088D83B687439565EC *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_3;
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
// System.Void UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(UniRx.IObservable`1<T1>,UniRx.IObservable`1<T2>,UniRx.IObservable`1<T3>,UniRx.IObservable`1<T4>,UniRx.IObservable`1<T5>,UniRx.IObservable`1<T6>,UniRx.IObservable`1<T7>,UniRx.Operators.ZipFunc`8<T1,T2,T3,T4,T5,T6,T7,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_8__ctor_m8C1C377FCC30CDE02FCB7B5086D7DA9854317D50_gshared (ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF * __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, RuntimeObject* ___source54, RuntimeObject* ___source65, RuntimeObject* ___source76, ZipFunc_8_tE636EE02A54058933CDDB715EAE402AD62776D8A * ___resultSelector7, const RuntimeMethod* method)
{
	ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF * G_B7_0 = NULL;
	ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF * G_B1_0 = NULL;
	ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF * G_B2_0 = NULL;
	ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF * G_B3_0 = NULL;
	ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF * G_B4_0 = NULL;
	ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF * G_B5_0 = NULL;
	ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF * G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF * G_B8_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     source7.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		G_B1_0 = ((ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF *)(__this));
		if (L_1)
		{
			G_B7_0 = ((ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF *)(__this));
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		G_B2_0 = ((ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF *)(G_B1_0));
		if (L_3)
		{
			G_B7_0 = ((ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF *)(G_B1_0));
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject*)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		G_B3_0 = ((ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF *)(G_B2_0));
		if (L_5)
		{
			G_B7_0 = ((ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF *)(G_B2_0));
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject*)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B4_0 = ((ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF *)(G_B3_0));
		if (L_7)
		{
			G_B7_0 = ((ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF *)(G_B3_0));
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_8 = ___source54;
		bool L_9;
		L_9 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject*)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		G_B5_0 = ((ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF *)(G_B4_0));
		if (L_9)
		{
			G_B7_0 = ((ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF *)(G_B4_0));
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_10 = ___source65;
		bool L_11;
		L_11 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((RuntimeObject*)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		G_B6_0 = ((ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF *)(G_B5_0));
		if (L_11)
		{
			G_B7_0 = ((ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF *)(G_B5_0));
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_12 = ___source76;
		bool L_13;
		L_13 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((RuntimeObject*)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		G_B8_0 = ((int32_t)(L_13));
		G_B8_1 = ((ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF *)(G_B6_0));
		goto IL_003e;
	}

IL_003d:
	{
		G_B8_0 = 1;
		G_B8_1 = ((ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF *)(G_B7_0));
	}

IL_003e:
	{
		NullCheck((OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *)G_B8_1);
		((  void (*) (OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((OperatorObservableBase_1_tF65FD09C3BF63840ABE3B28505833CDB7B019D70 *)G_B8_1, (bool)G_B8_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		// this.source1 = source1;
		RuntimeObject* L_14 = ___source10;
		__this->set_source1_1(L_14);
		// this.source2 = source2;
		RuntimeObject* L_15 = ___source21;
		__this->set_source2_2(L_15);
		// this.source3 = source3;
		RuntimeObject* L_16 = ___source32;
		__this->set_source3_3(L_16);
		// this.source4 = source4;
		RuntimeObject* L_17 = ___source43;
		__this->set_source4_4(L_17);
		// this.source5 = source5;
		RuntimeObject* L_18 = ___source54;
		__this->set_source5_5(L_18);
		// this.source6 = source6;
		RuntimeObject* L_19 = ___source65;
		__this->set_source6_6(L_19);
		// this.source7 = source7;
		RuntimeObject* L_20 = ___source76;
		__this->set_source7_7(L_20);
		// this.resultSelector = resultSelector;
		ZipFunc_8_tE636EE02A54058933CDDB715EAE402AD62776D8A * L_21 = ___resultSelector7;
		__this->set_resultSelector_8(L_21);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`8<System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object>::SubscribeCore(UniRx.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_8_SubscribeCore_mA0F73D52589C01C8C775A02283DEBAA8E22D8821_gshared (ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF * __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_t0BA95E174034BF81AEBB96CE42C27C1A75805B24 * L_2 = (Zip_t0BA95E174034BF81AEBB96CE42C27C1A75805B24 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (Zip_t0BA95E174034BF81AEBB96CE42C27C1A75805B24 *, ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_2, (ZipObservable_8_t38816E1F6337B7F8FD2E1F000F8D50D25F3466CF *)__this, (RuntimeObject*)L_0, (RuntimeObject*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		NullCheck((Zip_t0BA95E174034BF81AEBB96CE42C27C1A75805B24 *)L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Zip_t0BA95E174034BF81AEBB96CE42C27C1A75805B24 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((Zip_t0BA95E174034BF81AEBB96CE42C27C1A75805B24 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_3;
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
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::.ctor(UniRx.Operators.ZipObservable`1/Zip<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver__ctor_m07DC70A6D1DA22826845584FE1717D2E19D241A7_gshared (ZipObserver_tAA3DAABF90D69ED4D8758F687F57DB1479485513 * __this, Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 * ___parent0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		// public ZipObserver(Zip parent, int index)
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// this.parent = parent;
		Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 * L_0 = ___parent0;
		__this->set_parent_0(L_0);
		// this.index = index;
		int32_t L_1 = ___index1;
		__this->set_index_1(L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnNext_m3476D55ECC444A0CC2C0C11E94C74EE051990F83_gshared (ZipObserver_tAA3DAABF90D69ED4D8758F687F57DB1479485513 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (parent.gate)
		Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 * L_0 = (Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 *)__this->get_parent_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)L_0->get_gate_3();
		V_0 = (RuntimeObject *)L_1;
		V_1 = (bool)0;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_2, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		// parent.queues[index].Enqueue(value);
		Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 * L_3 = (Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 *)__this->get_parent_0();
		NullCheck(L_3);
		Queue_1U5BU5D_t43C618669FBD9DCD6C5D7E717FB9A5B70ED49A40* L_4 = (Queue_1U5BU5D_t43C618669FBD9DCD6C5D7E717FB9A5B70ED49A40*)L_3->get_queues_4();
		int32_t L_5 = (int32_t)__this->get_index_1();
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_7 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		RuntimeObject * L_8 = ___value0;
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_7);
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// parent.Dequeue(index);
		Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 * L_9 = (Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 *)__this->get_parent_0();
		int32_t L_10 = (int32_t)__this->get_index_1();
		NullCheck((Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 *)L_9);
		((  void (*) (Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 *)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		// }
		IL2CPP_LEAVE(0x4B, FINALLY_0041);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		{
			bool L_11 = V_1;
			if (!L_11)
			{
				goto IL_004a;
			}
		}

IL_0044:
		{
			RuntimeObject * L_12 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_12, /*hidden argument*/NULL);
		}

IL_004a:
		{
			IL2CPP_END_FINALLY(65)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnError_mF36653564D5F087BA73547E840D11B511C890BA1_gshared (ZipObserver_tAA3DAABF90D69ED4D8758F687F57DB1479485513 * __this, Exception_t * ___ex0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (parent.gate)
		Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 * L_0 = (Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 *)__this->get_parent_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)L_0->get_gate_3();
		V_0 = (RuntimeObject *)L_1;
		V_1 = (bool)0;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_2, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		// parent.OnError(ex);
		Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 * L_3 = (Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 *)__this->get_parent_0();
		Exception_t * L_4 = ___ex0;
		NullCheck((OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *)L_3);
		VirtActionInvoker1< Exception_t * >::Invoke(9 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnError(System.Exception) */, (OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *)L_3, (Exception_t *)L_4);
		// }
		IL2CPP_LEAVE(0x2E, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		{
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_002d;
			}
		}

IL_0027:
		{
			RuntimeObject * L_6 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_6, /*hidden argument*/NULL);
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(36)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnCompleted_m6657BF44FFF67067B305D68484A23E0275CA36DD_gshared (ZipObserver_tAA3DAABF90D69ED4D8758F687F57DB1479485513 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (parent.gate)
		Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 * L_0 = (Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 *)__this->get_parent_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)L_0->get_gate_3();
		V_0 = (RuntimeObject *)L_1;
		V_1 = (bool)0;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_2 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_2, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
			// parent.isDone[index] = true;
			Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 * L_3 = (Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 *)__this->get_parent_0();
			NullCheck(L_3);
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_4 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)L_3->get_isDone_5();
			int32_t L_5 = (int32_t)__this->get_index_1();
			NullCheck(L_4);
			(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (bool)1);
			// var allTrue = true;
			V_2 = (bool)1;
			// for (int i = 0; i < parent.length; i++)
			V_3 = (int32_t)0;
			goto IL_0046;
		}

IL_002f:
		{
			// if (!parent.isDone[i])
			Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 * L_6 = (Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 *)__this->get_parent_0();
			NullCheck(L_6);
			BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_7 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)L_6->get_isDone_5();
			int32_t L_8 = V_3;
			NullCheck(L_7);
			int32_t L_9 = L_8;
			uint8_t L_10 = (uint8_t)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
			if (L_10)
			{
				goto IL_0042;
			}
		}

IL_003e:
		{
			// allTrue = false;
			V_2 = (bool)0;
			// break;
			goto IL_0054;
		}

IL_0042:
		{
			// for (int i = 0; i < parent.length; i++)
			int32_t L_11 = V_3;
			V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		}

IL_0046:
		{
			// for (int i = 0; i < parent.length; i++)
			int32_t L_12 = V_3;
			Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 * L_13 = (Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 *)__this->get_parent_0();
			NullCheck(L_13);
			int32_t L_14 = (int32_t)L_13->get_length_6();
			if ((((int32_t)L_12) < ((int32_t)L_14)))
			{
				goto IL_002f;
			}
		}

IL_0054:
		{
			// if (allTrue)
			bool L_15 = V_2;
			if (!L_15)
			{
				goto IL_0062;
			}
		}

IL_0057:
		{
			// parent.OnCompleted();
			Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 * L_16 = (Zip_t8BBE31C231C6C1F9EAE2F3695BACA3FA83A72D72 *)__this->get_parent_0();
			NullCheck((OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *)L_16);
			VirtActionInvoker0::Invoke(10 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<System.Object>,System.Collections.Generic.IList`1<System.Object>>::OnCompleted() */, (OperatorObserverBase_2_t3C0A3C5EF61FC76430A0B0951903BBA44B562863 *)L_16);
		}

IL_0062:
		{
			// }
			IL2CPP_LEAVE(0x6E, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		{
			bool L_17 = V_1;
			if (!L_17)
			{
				goto IL_006d;
			}
		}

IL_0067:
		{
			RuntimeObject * L_18 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_18, /*hidden argument*/NULL);
		}

IL_006d:
		{
			IL2CPP_END_FINALLY(100)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
	}

IL_006e:
	{
		// }
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
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::.ctor(System.Object,UniRx.Operators.IZipObservable,System.Int32,System.Collections.Generic.Queue`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1__ctor_m3BDB0309B967230866856D9F6B8F68FA5A957828_gshared (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 * __this, RuntimeObject * ___gate0, RuntimeObject* ___parent1, int32_t ___index2, Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * ___queue3, const RuntimeMethod* method)
{
	{
		// public ZipObserver(object gate, IZipObservable parent, int index, Queue<T> queue)
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// this.gate = gate;
		RuntimeObject * L_0 = ___gate0;
		__this->set_gate_0(L_0);
		// this.parent = parent;
		RuntimeObject* L_1 = ___parent1;
		__this->set_parent_1(L_1);
		// this.index = index;
		int32_t L_2 = ___index2;
		__this->set_index_2(L_2);
		// this.queue = queue;
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_3 = ___queue3;
		__this->set_queue_3(L_3);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnNext_m530BF40B470CFA714E0F77A0D24DB0A2593EB19D_gshared (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_tB3EFBBF63801912415385746DDC53B35491B8702_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (gate)
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_gate_0();
		V_0 = (RuntimeObject *)L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_1, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		// queue.Enqueue(value);
		Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * L_2 = (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)__this->get_queue_3();
		RuntimeObject * L_3 = ___value0;
		NullCheck((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_2);
		((  void (*) (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 *)L_2, (RuntimeObject *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// parent.Dequeue(index);
		RuntimeObject* L_4 = (RuntimeObject*)__this->get_parent_1();
		int32_t L_5 = (int32_t)__this->get_index_2();
		NullCheck((RuntimeObject*)L_4);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void UniRx.Operators.IZipObservable::Dequeue(System.Int32) */, IZipObservable_tB3EFBBF63801912415385746DDC53B35491B8702_il2cpp_TypeInfo_var, (RuntimeObject*)L_4, (int32_t)L_5);
		// }
		IL2CPP_LEAVE(0x3A, FINALLY_0030);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		{
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_0039;
			}
		}

IL_0033:
		{
			RuntimeObject * L_7 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_7, /*hidden argument*/NULL);
		}

IL_0039:
		{
			IL2CPP_END_FINALLY(48)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnError_mC01461E4CF972E3CFA029447F04C8442E0831BFC_gshared (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 * __this, Exception_t * ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_tB3EFBBF63801912415385746DDC53B35491B8702_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (gate)
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_gate_0();
		V_0 = (RuntimeObject *)L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_1, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		// parent.Fail(error);
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_parent_1();
		Exception_t * L_3 = ___error0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker1< Exception_t * >::Invoke(1 /* System.Void UniRx.Operators.IZipObservable::Fail(System.Exception) */, IZipObservable_tB3EFBBF63801912415385746DDC53B35491B8702_il2cpp_TypeInfo_var, (RuntimeObject*)L_2, (Exception_t *)L_3);
		// }
		IL2CPP_LEAVE(0x29, FINALLY_001f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001f;
	}

FINALLY_001f:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0028;
			}
		}

IL_0022:
		{
			RuntimeObject * L_5 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_5, /*hidden argument*/NULL);
		}

IL_0028:
		{
			IL2CPP_END_FINALLY(31)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(31)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x29, IL_0029)
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObserver`1<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnCompleted_mACB5C22931DAC8C0CC2830F61350C3325BEA13AD_gshared (ZipObserver_1_tB02CD0552027A70EF911B29558BC15E9F9A96FB3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_tB3EFBBF63801912415385746DDC53B35491B8702_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// lock (gate)
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_gate_0();
		V_0 = (RuntimeObject *)L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_1, (bool*)(bool*)(&V_1), /*hidden argument*/NULL);
		// parent.Done(index);
		RuntimeObject* L_2 = (RuntimeObject*)__this->get_parent_1();
		int32_t L_3 = (int32_t)__this->get_index_2();
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void UniRx.Operators.IZipObservable::Done(System.Int32) */, IZipObservable_tB3EFBBF63801912415385746DDC53B35491B8702_il2cpp_TypeInfo_var, (RuntimeObject*)L_2, (int32_t)L_3);
		// }
		IL2CPP_LEAVE(0x2E, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_002d;
			}
		}

IL_0027:
		{
			RuntimeObject * L_5 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_5, /*hidden argument*/NULL);
		}

IL_002d:
		{
			IL2CPP_END_FINALLY(36)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
	}

IL_002e:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
