#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// GLTFast.FakeSchema.Material[]
struct MaterialU5BU5D_tFFA94071901F6101B513C622CC059DF8FFCCD6FA;
// GLTFast.FakeSchema.Material
struct Material_tEE7DAF31EB948972D95E74252D663CAED22745E7;
// GLTFast.FakeSchema.MaterialExtension
struct MaterialExtension_t426485A5BF98DEF23E5BBC67D6EC2AE6674ADCDB;
// GLTFast.FakeSchema.Root
struct Root_t606255B02E7003C35B4D890B05CB6E5A7AEE3524;
// GLTFast.FakeSchema.RootChild
struct RootChild_tBC4DA904B56BE3415BE5461D68C6FA36B986AC59;
// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t1892B92DCEFF811A53838FAF0BFBDB06FFB72695 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// GLTFast.FakeSchema.MaterialExtension
struct MaterialExtension_t426485A5BF98DEF23E5BBC67D6EC2AE6674ADCDB  : public RuntimeObject
{
public:
	// System.String GLTFast.FakeSchema.MaterialExtension::KHR_materials_pbrSpecularGlossiness
	String_t* ___KHR_materials_pbrSpecularGlossiness_0;
	// System.String GLTFast.FakeSchema.MaterialExtension::KHR_materials_unlit
	String_t* ___KHR_materials_unlit_1;

public:
	inline static int32_t get_offset_of_KHR_materials_pbrSpecularGlossiness_0() { return static_cast<int32_t>(offsetof(MaterialExtension_t426485A5BF98DEF23E5BBC67D6EC2AE6674ADCDB, ___KHR_materials_pbrSpecularGlossiness_0)); }
	inline String_t* get_KHR_materials_pbrSpecularGlossiness_0() const { return ___KHR_materials_pbrSpecularGlossiness_0; }
	inline String_t** get_address_of_KHR_materials_pbrSpecularGlossiness_0() { return &___KHR_materials_pbrSpecularGlossiness_0; }
	inline void set_KHR_materials_pbrSpecularGlossiness_0(String_t* value)
	{
		___KHR_materials_pbrSpecularGlossiness_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KHR_materials_pbrSpecularGlossiness_0), (void*)value);
	}

	inline static int32_t get_offset_of_KHR_materials_unlit_1() { return static_cast<int32_t>(offsetof(MaterialExtension_t426485A5BF98DEF23E5BBC67D6EC2AE6674ADCDB, ___KHR_materials_unlit_1)); }
	inline String_t* get_KHR_materials_unlit_1() const { return ___KHR_materials_unlit_1; }
	inline String_t** get_address_of_KHR_materials_unlit_1() { return &___KHR_materials_unlit_1; }
	inline void set_KHR_materials_unlit_1(String_t* value)
	{
		___KHR_materials_unlit_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KHR_materials_unlit_1), (void*)value);
	}
};


// GLTFast.FakeSchema.Root
struct Root_t606255B02E7003C35B4D890B05CB6E5A7AEE3524  : public RuntimeObject
{
public:
	// GLTFast.FakeSchema.Material[] GLTFast.FakeSchema.Root::materials
	MaterialU5BU5D_tFFA94071901F6101B513C622CC059DF8FFCCD6FA* ___materials_0;

public:
	inline static int32_t get_offset_of_materials_0() { return static_cast<int32_t>(offsetof(Root_t606255B02E7003C35B4D890B05CB6E5A7AEE3524, ___materials_0)); }
	inline MaterialU5BU5D_tFFA94071901F6101B513C622CC059DF8FFCCD6FA* get_materials_0() const { return ___materials_0; }
	inline MaterialU5BU5D_tFFA94071901F6101B513C622CC059DF8FFCCD6FA** get_address_of_materials_0() { return &___materials_0; }
	inline void set_materials_0(MaterialU5BU5D_tFFA94071901F6101B513C622CC059DF8FFCCD6FA* value)
	{
		___materials_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___materials_0), (void*)value);
	}
};


// GLTFast.FakeSchema.RootChild
struct RootChild_tBC4DA904B56BE3415BE5461D68C6FA36B986AC59  : public RuntimeObject
{
public:
	// System.String GLTFast.FakeSchema.RootChild::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(RootChild_tBC4DA904B56BE3415BE5461D68C6FA36B986AC59, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}
};


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

// GLTFast.FakeSchema.Material
struct Material_tEE7DAF31EB948972D95E74252D663CAED22745E7  : public RootChild_tBC4DA904B56BE3415BE5461D68C6FA36B986AC59
{
public:
	// GLTFast.FakeSchema.MaterialExtension GLTFast.FakeSchema.Material::extensions
	MaterialExtension_t426485A5BF98DEF23E5BBC67D6EC2AE6674ADCDB * ___extensions_1;

public:
	inline static int32_t get_offset_of_extensions_1() { return static_cast<int32_t>(offsetof(Material_tEE7DAF31EB948972D95E74252D663CAED22745E7, ___extensions_1)); }
	inline MaterialExtension_t426485A5BF98DEF23E5BBC67D6EC2AE6674ADCDB * get_extensions_1() const { return ___extensions_1; }
	inline MaterialExtension_t426485A5BF98DEF23E5BBC67D6EC2AE6674ADCDB ** get_address_of_extensions_1() { return &___extensions_1; }
	inline void set_extensions_1(MaterialExtension_t426485A5BF98DEF23E5BBC67D6EC2AE6674ADCDB * value)
	{
		___extensions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensions_1), (void*)value);
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void GLTFast.FakeSchema.RootChild::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RootChild__ctor_m9B86330888067C4DBCDC0382C914429389C65982 (RootChild_tBC4DA904B56BE3415BE5461D68C6FA36B986AC59 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
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
// System.Void GLTFast.FakeSchema.Material::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m95563D9DA4574476D68A00CA3D08D939C4758CD6 (Material_tEE7DAF31EB948972D95E74252D663CAED22745E7 * __this, const RuntimeMethod* method)
{
	{
		RootChild__ctor_m9B86330888067C4DBCDC0382C914429389C65982(__this, /*hidden argument*/NULL);
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
// System.Void GLTFast.FakeSchema.MaterialExtension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialExtension__ctor_m490E4BA84C3D864934D3E861DC1CCB3983DD1204 (MaterialExtension_t426485A5BF98DEF23E5BBC67D6EC2AE6674ADCDB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void GLTFast.FakeSchema.Root::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Root__ctor_mDEA071E0C6809AC3151712E0C8382EA8D28FB5DE (Root_t606255B02E7003C35B4D890B05CB6E5A7AEE3524 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void GLTFast.FakeSchema.RootChild::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RootChild__ctor_m9B86330888067C4DBCDC0382C914429389C65982 (RootChild_tBC4DA904B56BE3415BE5461D68C6FA36B986AC59 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
