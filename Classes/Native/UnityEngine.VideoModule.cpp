﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Video.VideoClip
struct VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral702CAC6E5B2A0B5052071E4FF4BD80AFF05EA14C;
IL2CPP_EXTERN_C const RuntimeMethod* VideoPlayer_set_controlledAudioTrackCount_mEB194256CE8DDECD698B615CC635953BB28631CF_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7757219A6D4DF3F0E2950E860119AEA621C68AF1 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
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


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.Video.Video3DLayout
struct Video3DLayout_t128A1265A65BE3B41138D19C5A827986A2F22F45 
{
public:
	// System.Int32 UnityEngine.Video.Video3DLayout::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Video3DLayout_t128A1265A65BE3B41138D19C5A827986A2F22F45, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Video.VideoAspectRatio
struct VideoAspectRatio_tB3C11859B0FA98E77D62BE7E1BD59084E7919B5E 
{
public:
	// System.Int32 UnityEngine.Video.VideoAspectRatio::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoAspectRatio_tB3C11859B0FA98E77D62BE7E1BD59084E7919B5E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Video.VideoAudioOutputMode
struct VideoAudioOutputMode_tDD6B846B9A65F1C53DA4D4D8117CDB223BE3DE56 
{
public:
	// System.Int32 UnityEngine.Video.VideoAudioOutputMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoAudioOutputMode_tDD6B846B9A65F1C53DA4D4D8117CDB223BE3DE56, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Video.VideoRenderMode
struct VideoRenderMode_tB2F8E98B2EBB3216E6322E55C246CE0587CC0A7B 
{
public:
	// System.Int32 UnityEngine.Video.VideoRenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoRenderMode_tB2F8E98B2EBB3216E6322E55C246CE0587CC0A7B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Video.VideoSource
struct VideoSource_t66E8298534E5BB7DFD28A7D8ADE397E328CD8896 
{
public:
	// System.Int32 UnityEngine.Video.VideoSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoSource_t66E8298534E5BB7DFD28A7D8ADE397E328CD8896, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Video.VideoTimeReference
struct VideoTimeReference_tDF02822B01320D3B0ADBE75452C8FA6B5FE96F1E 
{
public:
	// System.Int32 UnityEngine.Video.VideoTimeReference::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoTimeReference_tDF02822B01320D3B0ADBE75452C8FA6B5FE96F1E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Video.VideoTimeSource
struct VideoTimeSource_t881900D70589FDDD1C7471CB8C7FEA132B98038F 
{
public:
	// System.Int32 UnityEngine.Video.VideoTimeSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoTimeSource_t881900D70589FDDD1C7471CB8C7FEA132B98038F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Video.VideoClip
struct VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Experimental.Video.VideoClipPlayable
struct VideoClipPlayable_tC49201F6C8E1AB1CC8F4E31EFC12C7E1C03BC2E1 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Video.VideoClipPlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(VideoClipPlayable_tC49201F6C8E1AB1CC8F4E31EFC12C7E1C03BC2E1, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * ___frameReady_11;

public:
	inline static int32_t get_offset_of_prepareCompleted_4() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___prepareCompleted_4)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_prepareCompleted_4() const { return ___prepareCompleted_4; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_prepareCompleted_4() { return &___prepareCompleted_4; }
	inline void set_prepareCompleted_4(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___prepareCompleted_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prepareCompleted_4), (void*)value);
	}

	inline static int32_t get_offset_of_loopPointReached_5() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___loopPointReached_5)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_loopPointReached_5() const { return ___loopPointReached_5; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_loopPointReached_5() { return &___loopPointReached_5; }
	inline void set_loopPointReached_5(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___loopPointReached_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loopPointReached_5), (void*)value);
	}

	inline static int32_t get_offset_of_started_6() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___started_6)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_started_6() const { return ___started_6; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_started_6() { return &___started_6; }
	inline void set_started_6(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___started_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___started_6), (void*)value);
	}

	inline static int32_t get_offset_of_frameDropped_7() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___frameDropped_7)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_frameDropped_7() const { return ___frameDropped_7; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_frameDropped_7() { return &___frameDropped_7; }
	inline void set_frameDropped_7(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___frameDropped_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameDropped_7), (void*)value);
	}

	inline static int32_t get_offset_of_errorReceived_8() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___errorReceived_8)); }
	inline ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * get_errorReceived_8() const { return ___errorReceived_8; }
	inline ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 ** get_address_of_errorReceived_8() { return &___errorReceived_8; }
	inline void set_errorReceived_8(ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * value)
	{
		___errorReceived_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorReceived_8), (void*)value);
	}

	inline static int32_t get_offset_of_seekCompleted_9() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___seekCompleted_9)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_seekCompleted_9() const { return ___seekCompleted_9; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_seekCompleted_9() { return &___seekCompleted_9; }
	inline void set_seekCompleted_9(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___seekCompleted_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seekCompleted_9), (void*)value);
	}

	inline static int32_t get_offset_of_clockResyncOccurred_10() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___clockResyncOccurred_10)); }
	inline TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * get_clockResyncOccurred_10() const { return ___clockResyncOccurred_10; }
	inline TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 ** get_address_of_clockResyncOccurred_10() { return &___clockResyncOccurred_10; }
	inline void set_clockResyncOccurred_10(TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * value)
	{
		___clockResyncOccurred_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clockResyncOccurred_10), (void*)value);
	}

	inline static int32_t get_offset_of_frameReady_11() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___frameReady_11)); }
	inline FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * get_frameReady_11() const { return ___frameReady_11; }
	inline FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC ** get_address_of_frameReady_11() { return &___frameReady_11; }
	inline void set_frameReady_11(FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * value)
	{
		___frameReady_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameReady_11), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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



// System.Void UnityEngine.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m4DCF5CDB32C2C69290894101A81F473865169279 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Video.VideoClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  VideoClipPlayable_GetHandle_mE4D1CCE51DFBB2228B54187915C00D4E5FAD4F86 (VideoClipPlayable_tC49201F6C8E1AB1CC8F4E31EFC12C7E1C03BC2E1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_mFD26CFA8ECF2B622B1A3D4117066CAE965C9F704 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___x0, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.Video.VideoClipPlayable::Equals(UnityEngine.Experimental.Video.VideoClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoClipPlayable_Equals_m8BFF58C5788058758A88D0C2E0295D994BAC1E1E (VideoClipPlayable_tC49201F6C8E1AB1CC8F4E31EFC12C7E1C03BC2E1 * __this, VideoClipPlayable_tC49201F6C8E1AB1CC8F4E31EFC12C7E1C03BC2E1  ___other0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Video.VideoPlayer::GetControlledAudioTrackCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t VideoPlayer_GetControlledAudioTrackCount_m38A3B0E50124BC91A126089B686A9F7E6C6440BC (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Video.VideoPlayer::get_controlledAudioTrackMaxCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t VideoPlayer_get_controlledAudioTrackMaxCount_m683574289898B0B95742ED9375871124515B4913 (const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::SetControlledAudioTrackCount(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_SetControlledAudioTrackCount_m7CD969E68222FC13FEBE59D6C819A256BE5B2031 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::Invoke(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_Invoke_m0B3144B6BE309B7644E15FB9668F595F92F4C684 (EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * __this, VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___source0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameReadyEventHandler_Invoke_m4BA6EA29ED4CF35A85BAC6AD123D809474FBD325 (FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * __this, VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___source0, int64_t ___frameIdx1, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEventHandler_Invoke_mF6EEEB7A362D50D2FE7B757648470E3B1F809414 (ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * __this, VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___source0, String_t* ___message1, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeEventHandler_Invoke_m2AEC774186134B8F0CEF7B61C5754F4AA3D4A60C (TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * __this, VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___source0, double ___seconds1, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
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
// System.Void UnityEngine.Video.VideoClip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoClip__ctor_m93B6053D34E5FD1DF0FB31153347A1888C9085B6 (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object__ctor_m4DCF5CDB32C2C69290894101A81F473865169279(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Video.VideoClip::get_originalPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoClip_get_originalPath_m4FC1C06D55749C839742CA087DE38069663F6F16 (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * __this, const RuntimeMethod* method)
{
	typedef String_t* (*VideoClip_get_originalPath_m4FC1C06D55749C839742CA087DE38069663F6F16_ftn) (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F *);
	static VideoClip_get_originalPath_m4FC1C06D55749C839742CA087DE38069663F6F16_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_originalPath_m4FC1C06D55749C839742CA087DE38069663F6F16_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_originalPath()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.UInt64 UnityEngine.Video.VideoClip::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t VideoClip_get_frameCount_m503F1333BEF37B359002D8D9465CDBA47D2573E0 (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * __this, const RuntimeMethod* method)
{
	typedef uint64_t (*VideoClip_get_frameCount_m503F1333BEF37B359002D8D9465CDBA47D2573E0_ftn) (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F *);
	static VideoClip_get_frameCount_m503F1333BEF37B359002D8D9465CDBA47D2573E0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_frameCount_m503F1333BEF37B359002D8D9465CDBA47D2573E0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_frameCount()");
	uint64_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Double UnityEngine.Video.VideoClip::get_frameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VideoClip_get_frameRate_m1E2800A3EF4CB524C59A4892C43320E1531E84BA (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * __this, const RuntimeMethod* method)
{
	typedef double (*VideoClip_get_frameRate_m1E2800A3EF4CB524C59A4892C43320E1531E84BA_ftn) (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F *);
	static VideoClip_get_frameRate_m1E2800A3EF4CB524C59A4892C43320E1531E84BA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_frameRate_m1E2800A3EF4CB524C59A4892C43320E1531E84BA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_frameRate()");
	double icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Double UnityEngine.Video.VideoClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VideoClip_get_length_mB843A0F9F93A027396208D2249F8D4D492549109 (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * __this, const RuntimeMethod* method)
{
	typedef double (*VideoClip_get_length_mB843A0F9F93A027396208D2249F8D4D492549109_ftn) (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F *);
	static VideoClip_get_length_mB843A0F9F93A027396208D2249F8D4D492549109_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_length_mB843A0F9F93A027396208D2249F8D4D492549109_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_length()");
	double icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.UInt32 UnityEngine.Video.VideoClip::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t VideoClip_get_width_mDE4855566F875846E2C2F0E1191DB5E50BF295AF (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * __this, const RuntimeMethod* method)
{
	typedef uint32_t (*VideoClip_get_width_mDE4855566F875846E2C2F0E1191DB5E50BF295AF_ftn) (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F *);
	static VideoClip_get_width_mDE4855566F875846E2C2F0E1191DB5E50BF295AF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_width_mDE4855566F875846E2C2F0E1191DB5E50BF295AF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_width()");
	uint32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.UInt32 UnityEngine.Video.VideoClip::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t VideoClip_get_height_mFF269947D254C19C89A7E2892F5E8C409B0B9532 (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * __this, const RuntimeMethod* method)
{
	typedef uint32_t (*VideoClip_get_height_mFF269947D254C19C89A7E2892F5E8C409B0B9532_ftn) (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F *);
	static VideoClip_get_height_mFF269947D254C19C89A7E2892F5E8C409B0B9532_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_height_mFF269947D254C19C89A7E2892F5E8C409B0B9532_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_height()");
	uint32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.UInt32 UnityEngine.Video.VideoClip::get_pixelAspectRatioNumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t VideoClip_get_pixelAspectRatioNumerator_m5FF862FE2E97F7BB8ECE1905FDFA4862FAFE42A3 (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * __this, const RuntimeMethod* method)
{
	typedef uint32_t (*VideoClip_get_pixelAspectRatioNumerator_m5FF862FE2E97F7BB8ECE1905FDFA4862FAFE42A3_ftn) (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F *);
	static VideoClip_get_pixelAspectRatioNumerator_m5FF862FE2E97F7BB8ECE1905FDFA4862FAFE42A3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_pixelAspectRatioNumerator_m5FF862FE2E97F7BB8ECE1905FDFA4862FAFE42A3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_pixelAspectRatioNumerator()");
	uint32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.UInt32 UnityEngine.Video.VideoClip::get_pixelAspectRatioDenominator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t VideoClip_get_pixelAspectRatioDenominator_mDA0C8AC590C8554981FBC0D08434F0EA9D9DCA33 (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * __this, const RuntimeMethod* method)
{
	typedef uint32_t (*VideoClip_get_pixelAspectRatioDenominator_mDA0C8AC590C8554981FBC0D08434F0EA9D9DCA33_ftn) (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F *);
	static VideoClip_get_pixelAspectRatioDenominator_mDA0C8AC590C8554981FBC0D08434F0EA9D9DCA33_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_pixelAspectRatioDenominator_mDA0C8AC590C8554981FBC0D08434F0EA9D9DCA33_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_pixelAspectRatioDenominator()");
	uint32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Video.VideoClip::get_sRGB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoClip_get_sRGB_mDE664C0D199D9D0DD3E9F3A8436F4385C5B6D5BD (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoClip_get_sRGB_mDE664C0D199D9D0DD3E9F3A8436F4385C5B6D5BD_ftn) (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F *);
	static VideoClip_get_sRGB_mDE664C0D199D9D0DD3E9F3A8436F4385C5B6D5BD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_sRGB_mDE664C0D199D9D0DD3E9F3A8436F4385C5B6D5BD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_sRGB()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.UInt16 UnityEngine.Video.VideoClip::get_audioTrackCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t VideoClip_get_audioTrackCount_mCAEDE4B09E8BFDF57E51D918D015604434CD4E08 (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * __this, const RuntimeMethod* method)
{
	typedef uint16_t (*VideoClip_get_audioTrackCount_mCAEDE4B09E8BFDF57E51D918D015604434CD4E08_ftn) (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F *);
	static VideoClip_get_audioTrackCount_mCAEDE4B09E8BFDF57E51D918D015604434CD4E08_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_audioTrackCount_mCAEDE4B09E8BFDF57E51D918D015604434CD4E08_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_audioTrackCount()");
	uint16_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.UInt16 UnityEngine.Video.VideoClip::GetAudioChannelCount(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t VideoClip_GetAudioChannelCount_m980FF7AC06AA7505D231A753FEC9C3A8B75B8EE0 (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * __this, uint16_t ___audioTrackIdx0, const RuntimeMethod* method)
{
	typedef uint16_t (*VideoClip_GetAudioChannelCount_m980FF7AC06AA7505D231A753FEC9C3A8B75B8EE0_ftn) (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F *, uint16_t);
	static VideoClip_GetAudioChannelCount_m980FF7AC06AA7505D231A753FEC9C3A8B75B8EE0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_GetAudioChannelCount_m980FF7AC06AA7505D231A753FEC9C3A8B75B8EE0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::GetAudioChannelCount(System.UInt16)");
	uint16_t icallRetVal = _il2cpp_icall_func(__this, ___audioTrackIdx0);
	return icallRetVal;
}
// System.UInt32 UnityEngine.Video.VideoClip::GetAudioSampleRate(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t VideoClip_GetAudioSampleRate_m520C122DA2B96C9E8F07F5F281CD22E47F86F43F (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * __this, uint16_t ___audioTrackIdx0, const RuntimeMethod* method)
{
	typedef uint32_t (*VideoClip_GetAudioSampleRate_m520C122DA2B96C9E8F07F5F281CD22E47F86F43F_ftn) (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F *, uint16_t);
	static VideoClip_GetAudioSampleRate_m520C122DA2B96C9E8F07F5F281CD22E47F86F43F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_GetAudioSampleRate_m520C122DA2B96C9E8F07F5F281CD22E47F86F43F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::GetAudioSampleRate(System.UInt16)");
	uint32_t icallRetVal = _il2cpp_icall_func(__this, ___audioTrackIdx0);
	return icallRetVal;
}
// System.String UnityEngine.Video.VideoClip::GetAudioLanguage(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoClip_GetAudioLanguage_m43E77304E32121B2F792283561AB2F8AA673B449 (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * __this, uint16_t ___audioTrackIdx0, const RuntimeMethod* method)
{
	typedef String_t* (*VideoClip_GetAudioLanguage_m43E77304E32121B2F792283561AB2F8AA673B449_ftn) (VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F *, uint16_t);
	static VideoClip_GetAudioLanguage_m43E77304E32121B2F792283561AB2F8AA673B449_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_GetAudioLanguage_m43E77304E32121B2F792283561AB2F8AA673B449_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::GetAudioLanguage(System.UInt16)");
	String_t* icallRetVal = _il2cpp_icall_func(__this, ___audioTrackIdx0);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Video.VideoClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  VideoClipPlayable_GetHandle_mE4D1CCE51DFBB2228B54187915C00D4E5FAD4F86 (VideoClipPlayable_tC49201F6C8E1AB1CC8F4E31EFC12C7E1C03BC2E1 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  VideoClipPlayable_GetHandle_mE4D1CCE51DFBB2228B54187915C00D4E5FAD4F86_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VideoClipPlayable_tC49201F6C8E1AB1CC8F4E31EFC12C7E1C03BC2E1 * _thisAdjusted = reinterpret_cast<VideoClipPlayable_tC49201F6C8E1AB1CC8F4E31EFC12C7E1C03BC2E1 *>(__this + _offset);
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  _returnValue;
	_returnValue = VideoClipPlayable_GetHandle_mE4D1CCE51DFBB2228B54187915C00D4E5FAD4F86(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Experimental.Video.VideoClipPlayable::Equals(UnityEngine.Experimental.Video.VideoClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoClipPlayable_Equals_m8BFF58C5788058758A88D0C2E0295D994BAC1E1E (VideoClipPlayable_tC49201F6C8E1AB1CC8F4E31EFC12C7E1C03BC2E1 * __this, VideoClipPlayable_tC49201F6C8E1AB1CC8F4E31EFC12C7E1C03BC2E1  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = VideoClipPlayable_GetHandle_mE4D1CCE51DFBB2228B54187915C00D4E5FAD4F86((VideoClipPlayable_tC49201F6C8E1AB1CC8F4E31EFC12C7E1C03BC2E1 *)__this, /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = VideoClipPlayable_GetHandle_mE4D1CCE51DFBB2228B54187915C00D4E5FAD4F86((VideoClipPlayable_tC49201F6C8E1AB1CC8F4E31EFC12C7E1C03BC2E1 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_mFD26CFA8ECF2B622B1A3D4117066CAE965C9F704(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool VideoClipPlayable_Equals_m8BFF58C5788058758A88D0C2E0295D994BAC1E1E_AdjustorThunk (RuntimeObject * __this, VideoClipPlayable_tC49201F6C8E1AB1CC8F4E31EFC12C7E1C03BC2E1  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VideoClipPlayable_tC49201F6C8E1AB1CC8F4E31EFC12C7E1C03BC2E1 * _thisAdjusted = reinterpret_cast<VideoClipPlayable_tC49201F6C8E1AB1CC8F4E31EFC12C7E1C03BC2E1 *>(__this + _offset);
	bool _returnValue;
	_returnValue = VideoClipPlayable_Equals_m8BFF58C5788058758A88D0C2E0295D994BAC1E1E(_thisAdjusted, ___other0, method);
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
// UnityEngine.Video.VideoSource UnityEngine.Video.VideoPlayer::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoPlayer_get_source_mB8C57D3081600B99FFBF0BB57460C7078DE293F6 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*VideoPlayer_get_source_mB8C57D3081600B99FFBF0BB57460C7078DE293F6_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_source_mB8C57D3081600B99FFBF0BB57460C7078DE293F6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_source_mB8C57D3081600B99FFBF0BB57460C7078DE293F6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_source()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_source(UnityEngine.Video.VideoSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_source_m5F69BF92205E90B384B83E73403A43735E2526F7 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_source_m5F69BF92205E90B384B83E73403A43735E2526F7_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, int32_t);
	static VideoPlayer_set_source_m5F69BF92205E90B384B83E73403A43735E2526F7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_source_m5F69BF92205E90B384B83E73403A43735E2526F7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_source(UnityEngine.Video.VideoSource)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.String UnityEngine.Video.VideoPlayer::get_url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoPlayer_get_url_mB8187B7D8C11C143F51F0554E0690FEA213E805D (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef String_t* (*VideoPlayer_get_url_mB8187B7D8C11C143F51F0554E0690FEA213E805D_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_url_mB8187B7D8C11C143F51F0554E0690FEA213E805D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_url_mB8187B7D8C11C143F51F0554E0690FEA213E805D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_url()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_url_m9C9942D6C54D50F6255A2AA1646D9F40E551BF13 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_url_m9C9942D6C54D50F6255A2AA1646D9F40E551BF13_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, String_t*);
	static VideoPlayer_set_url_m9C9942D6C54D50F6255A2AA1646D9F40E551BF13_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_url_m9C9942D6C54D50F6255A2AA1646D9F40E551BF13_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_url(System.String)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Video.VideoClip UnityEngine.Video.VideoPlayer::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * VideoPlayer_get_clip_m71F8BD08FF5AF313B554457187CA7C4EBC84308F (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * (*VideoPlayer_get_clip_m71F8BD08FF5AF313B554457187CA7C4EBC84308F_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_clip_m71F8BD08FF5AF313B554457187CA7C4EBC84308F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_clip_m71F8BD08FF5AF313B554457187CA7C4EBC84308F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_clip()");
	VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_clip(UnityEngine.Video.VideoClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_clip_mECA56632F836FE1297D1A10115570E07D05FDB6C (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F * ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_clip_mECA56632F836FE1297D1A10115570E07D05FDB6C_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, VideoClip_tA8C2507553BEE394C46B7A876D6F56DD09F6C90F *);
	static VideoPlayer_set_clip_mECA56632F836FE1297D1A10115570E07D05FDB6C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_clip_mECA56632F836FE1297D1A10115570E07D05FDB6C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_clip(UnityEngine.Video.VideoClip)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Video.VideoRenderMode UnityEngine.Video.VideoPlayer::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoPlayer_get_renderMode_m6C968B89B0ADD3B79D6744AB1C00BDE9392727DE (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*VideoPlayer_get_renderMode_m6C968B89B0ADD3B79D6744AB1C00BDE9392727DE_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_renderMode_m6C968B89B0ADD3B79D6744AB1C00BDE9392727DE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_renderMode_m6C968B89B0ADD3B79D6744AB1C00BDE9392727DE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_renderMode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_renderMode(UnityEngine.Video.VideoRenderMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_renderMode_mAD567D3904B2D8C3B2E5A131A5673D89418ABE06 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_renderMode_mAD567D3904B2D8C3B2E5A131A5673D89418ABE06_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, int32_t);
	static VideoPlayer_set_renderMode_mAD567D3904B2D8C3B2E5A131A5673D89418ABE06_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_renderMode_mAD567D3904B2D8C3B2E5A131A5673D89418ABE06_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_renderMode(UnityEngine.Video.VideoRenderMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Camera UnityEngine.Video.VideoPlayer::get_targetCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * VideoPlayer_get_targetCamera_mABA0BC2A6FB2C28835DB206D4DECCFA720DC1B8C (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*VideoPlayer_get_targetCamera_mABA0BC2A6FB2C28835DB206D4DECCFA720DC1B8C_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_targetCamera_mABA0BC2A6FB2C28835DB206D4DECCFA720DC1B8C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_targetCamera_mABA0BC2A6FB2C28835DB206D4DECCFA720DC1B8C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_targetCamera()");
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_targetCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_targetCamera_m68F38B3CC7FD9497836EDCF798FA06FB8C3905B1 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_targetCamera_m68F38B3CC7FD9497836EDCF798FA06FB8C3905B1_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *);
	static VideoPlayer_set_targetCamera_m68F38B3CC7FD9497836EDCF798FA06FB8C3905B1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_targetCamera_m68F38B3CC7FD9497836EDCF798FA06FB8C3905B1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_targetCamera(UnityEngine.Camera)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.RenderTexture UnityEngine.Video.VideoPlayer::get_targetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * VideoPlayer_get_targetTexture_mBF23A9FD8FBD6989708C0244AE1105D789C51417 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * (*VideoPlayer_get_targetTexture_mBF23A9FD8FBD6989708C0244AE1105D789C51417_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_targetTexture_mBF23A9FD8FBD6989708C0244AE1105D789C51417_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_targetTexture_mBF23A9FD8FBD6989708C0244AE1105D789C51417_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_targetTexture()");
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_targetTexture_mFA47467D9AC733F509941F3618FDC5829A4D37F4 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_targetTexture_mFA47467D9AC733F509941F3618FDC5829A4D37F4_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *);
	static VideoPlayer_set_targetTexture_mFA47467D9AC733F509941F3618FDC5829A4D37F4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_targetTexture_mFA47467D9AC733F509941F3618FDC5829A4D37F4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_targetTexture(UnityEngine.RenderTexture)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Renderer UnityEngine.Video.VideoPlayer::get_targetMaterialRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * VideoPlayer_get_targetMaterialRenderer_m1C2CA124BD8477FD2864B8FEA747BA472217E4E8 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*VideoPlayer_get_targetMaterialRenderer_m1C2CA124BD8477FD2864B8FEA747BA472217E4E8_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_targetMaterialRenderer_m1C2CA124BD8477FD2864B8FEA747BA472217E4E8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_targetMaterialRenderer_m1C2CA124BD8477FD2864B8FEA747BA472217E4E8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_targetMaterialRenderer()");
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_targetMaterialRenderer(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_targetMaterialRenderer_m14EE96AEA9D793C69EB4937D8ACC465BDD99C8E1 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_targetMaterialRenderer_m14EE96AEA9D793C69EB4937D8ACC465BDD99C8E1_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *);
	static VideoPlayer_set_targetMaterialRenderer_m14EE96AEA9D793C69EB4937D8ACC465BDD99C8E1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_targetMaterialRenderer_m14EE96AEA9D793C69EB4937D8ACC465BDD99C8E1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_targetMaterialRenderer(UnityEngine.Renderer)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.String UnityEngine.Video.VideoPlayer::get_targetMaterialProperty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoPlayer_get_targetMaterialProperty_m91E405D1967AD27F49C4BFB17E56AF1CEBF5000F (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef String_t* (*VideoPlayer_get_targetMaterialProperty_m91E405D1967AD27F49C4BFB17E56AF1CEBF5000F_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_targetMaterialProperty_m91E405D1967AD27F49C4BFB17E56AF1CEBF5000F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_targetMaterialProperty_m91E405D1967AD27F49C4BFB17E56AF1CEBF5000F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_targetMaterialProperty()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_targetMaterialProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_targetMaterialProperty_m22EAC7DAAA6CD5A855B189BB326801A2DA56F575 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_targetMaterialProperty_m22EAC7DAAA6CD5A855B189BB326801A2DA56F575_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, String_t*);
	static VideoPlayer_set_targetMaterialProperty_m22EAC7DAAA6CD5A855B189BB326801A2DA56F575_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_targetMaterialProperty_m22EAC7DAAA6CD5A855B189BB326801A2DA56F575_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_targetMaterialProperty(System.String)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Video.VideoAspectRatio UnityEngine.Video.VideoPlayer::get_aspectRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoPlayer_get_aspectRatio_mD575C5AFF7BFB941310961BF1C9C2F82E5F38DEE (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*VideoPlayer_get_aspectRatio_mD575C5AFF7BFB941310961BF1C9C2F82E5F38DEE_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_aspectRatio_mD575C5AFF7BFB941310961BF1C9C2F82E5F38DEE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_aspectRatio_mD575C5AFF7BFB941310961BF1C9C2F82E5F38DEE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_aspectRatio()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_aspectRatio(UnityEngine.Video.VideoAspectRatio)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_aspectRatio_m2037267D5FFF60F15B143E073D20673FC7F81EA6 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_aspectRatio_m2037267D5FFF60F15B143E073D20673FC7F81EA6_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, int32_t);
	static VideoPlayer_set_aspectRatio_m2037267D5FFF60F15B143E073D20673FC7F81EA6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_aspectRatio_m2037267D5FFF60F15B143E073D20673FC7F81EA6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_aspectRatio(UnityEngine.Video.VideoAspectRatio)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Video.VideoPlayer::get_targetCameraAlpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VideoPlayer_get_targetCameraAlpha_m1F1E52F22E3EAE857C3C66EF3DD4808BEC918663 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef float (*VideoPlayer_get_targetCameraAlpha_m1F1E52F22E3EAE857C3C66EF3DD4808BEC918663_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_targetCameraAlpha_m1F1E52F22E3EAE857C3C66EF3DD4808BEC918663_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_targetCameraAlpha_m1F1E52F22E3EAE857C3C66EF3DD4808BEC918663_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_targetCameraAlpha()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_targetCameraAlpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_targetCameraAlpha_m82F91A643AB55FE8F2B3B4C22BC8B7778C9AA249 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_targetCameraAlpha_m82F91A643AB55FE8F2B3B4C22BC8B7778C9AA249_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, float);
	static VideoPlayer_set_targetCameraAlpha_m82F91A643AB55FE8F2B3B4C22BC8B7778C9AA249_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_targetCameraAlpha_m82F91A643AB55FE8F2B3B4C22BC8B7778C9AA249_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_targetCameraAlpha(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Video.Video3DLayout UnityEngine.Video.VideoPlayer::get_targetCamera3DLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoPlayer_get_targetCamera3DLayout_m4A8B5823D7F322206A722A495832901EED0C49CB (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*VideoPlayer_get_targetCamera3DLayout_m4A8B5823D7F322206A722A495832901EED0C49CB_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_targetCamera3DLayout_m4A8B5823D7F322206A722A495832901EED0C49CB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_targetCamera3DLayout_m4A8B5823D7F322206A722A495832901EED0C49CB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_targetCamera3DLayout()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_targetCamera3DLayout(UnityEngine.Video.Video3DLayout)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_targetCamera3DLayout_m1CBCC94ED67951EE345B1CC801A969A782CF335A (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_targetCamera3DLayout_m1CBCC94ED67951EE345B1CC801A969A782CF335A_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, int32_t);
	static VideoPlayer_set_targetCamera3DLayout_m1CBCC94ED67951EE345B1CC801A969A782CF335A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_targetCamera3DLayout_m1CBCC94ED67951EE345B1CC801A969A782CF335A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_targetCamera3DLayout(UnityEngine.Video.Video3DLayout)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Texture UnityEngine.Video.VideoPlayer::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * VideoPlayer_get_texture_m8DF9A2351F42E2F9622BF5DFD8439F2CBAB95A29 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * (*VideoPlayer_get_texture_m8DF9A2351F42E2F9622BF5DFD8439F2CBAB95A29_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_texture_m8DF9A2351F42E2F9622BF5DFD8439F2CBAB95A29_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_texture_m8DF9A2351F42E2F9622BF5DFD8439F2CBAB95A29_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_texture()");
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Prepare_m3B32C1AA66866136ABDEF92F762D3479C0459903 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_Prepare_m3B32C1AA66866136ABDEF92F762D3479C0459903_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_Prepare_m3B32C1AA66866136ABDEF92F762D3479C0459903_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_Prepare_m3B32C1AA66866136ABDEF92F762D3479C0459903_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::Prepare()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPrepared()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPrepared_m747401DA6ADE60190873F918AD83AB7382D0E423 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_isPrepared_m747401DA6ADE60190873F918AD83AB7382D0E423_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_isPrepared_m747401DA6ADE60190873F918AD83AB7382D0E423_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_isPrepared_m747401DA6ADE60190873F918AD83AB7382D0E423_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_isPrepared()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_waitForFirstFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_waitForFirstFrame_m4599F5F859B9FDC045AFFD089D68557F235F58E3 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_waitForFirstFrame_m4599F5F859B9FDC045AFFD089D68557F235F58E3_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_waitForFirstFrame_m4599F5F859B9FDC045AFFD089D68557F235F58E3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_waitForFirstFrame_m4599F5F859B9FDC045AFFD089D68557F235F58E3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_waitForFirstFrame()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_waitForFirstFrame(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_waitForFirstFrame_m1705BDF01773506E0BF0585B0BB5FF4ECD073532 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_waitForFirstFrame_m1705BDF01773506E0BF0585B0BB5FF4ECD073532_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, bool);
	static VideoPlayer_set_waitForFirstFrame_m1705BDF01773506E0BF0585B0BB5FF4ECD073532_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_waitForFirstFrame_m1705BDF01773506E0BF0585B0BB5FF4ECD073532_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_waitForFirstFrame(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_playOnAwake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_playOnAwake_mFAF53A73803BB832FF80327EB3988D1F42E3C9BC (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_playOnAwake_mFAF53A73803BB832FF80327EB3988D1F42E3C9BC_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_playOnAwake_mFAF53A73803BB832FF80327EB3988D1F42E3C9BC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_playOnAwake_mFAF53A73803BB832FF80327EB3988D1F42E3C9BC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_playOnAwake()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_playOnAwake_m30420ABD3827A5A7BD663815D64DBA68CF88A8D2 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_playOnAwake_m30420ABD3827A5A7BD663815D64DBA68CF88A8D2_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, bool);
	static VideoPlayer_set_playOnAwake_m30420ABD3827A5A7BD663815D64DBA68CF88A8D2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_playOnAwake_m30420ABD3827A5A7BD663815D64DBA68CF88A8D2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_playOnAwake(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Video.VideoPlayer::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Play_m2AD0D39D70055A5AADCF63430D3D9CEC7DCB0516 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_Play_m2AD0D39D70055A5AADCF63430D3D9CEC7DCB0516_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_Play_m2AD0D39D70055A5AADCF63430D3D9CEC7DCB0516_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_Play_m2AD0D39D70055A5AADCF63430D3D9CEC7DCB0516_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::Play()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Video.VideoPlayer::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Pause_m9A4568E69F3C3DDD2F83AF8FC0D594E39C9B479A (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_Pause_m9A4568E69F3C3DDD2F83AF8FC0D594E39C9B479A_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_Pause_m9A4568E69F3C3DDD2F83AF8FC0D594E39C9B479A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_Pause_m9A4568E69F3C3DDD2F83AF8FC0D594E39C9B479A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::Pause()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Video.VideoPlayer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Stop_mC65F299C170F41E6823207427F782982031DE293 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_Stop_mC65F299C170F41E6823207427F782982031DE293_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_Stop_mC65F299C170F41E6823207427F782982031DE293_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_Stop_mC65F299C170F41E6823207427F782982031DE293_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::Stop()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPlaying_m457BE1719C1CF9A9BD6D6BFB02505E9778D68D6F (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_isPlaying_m457BE1719C1CF9A9BD6D6BFB02505E9778D68D6F_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_isPlaying_m457BE1719C1CF9A9BD6D6BFB02505E9778D68D6F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_isPlaying_m457BE1719C1CF9A9BD6D6BFB02505E9778D68D6F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_isPlaying()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPaused_mD2983280A0974DA8B8278A62E4DF44EF4ED7F372 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_isPaused_mD2983280A0974DA8B8278A62E4DF44EF4ED7F372_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_isPaused_mD2983280A0974DA8B8278A62E4DF44EF4ED7F372_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_isPaused_mD2983280A0974DA8B8278A62E4DF44EF4ED7F372_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_isPaused()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_canSetTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_canSetTime_m2BD1A2BD78D9886A555D84E076206FB58B92CD31 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_canSetTime_m2BD1A2BD78D9886A555D84E076206FB58B92CD31_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_canSetTime_m2BD1A2BD78D9886A555D84E076206FB58B92CD31_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_canSetTime_m2BD1A2BD78D9886A555D84E076206FB58B92CD31_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_canSetTime()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Double UnityEngine.Video.VideoPlayer::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VideoPlayer_get_time_m4FCBD72BE8C0D494F944545F9D9757D819FC60A9 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef double (*VideoPlayer_get_time_m4FCBD72BE8C0D494F944545F9D9757D819FC60A9_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_time_m4FCBD72BE8C0D494F944545F9D9757D819FC60A9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_time_m4FCBD72BE8C0D494F944545F9D9757D819FC60A9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_time()");
	double icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_time(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_time_mF90763ADC9770931EFAEC1F28EC0F4BB97EF4445 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, double ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_time_mF90763ADC9770931EFAEC1F28EC0F4BB97EF4445_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, double);
	static VideoPlayer_set_time_mF90763ADC9770931EFAEC1F28EC0F4BB97EF4445_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_time_mF90763ADC9770931EFAEC1F28EC0F4BB97EF4445_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_time(System.Double)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int64 UnityEngine.Video.VideoPlayer::get_frame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t VideoPlayer_get_frame_m86205149C0DB9B9A42C1177F846950B495E6882E (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef int64_t (*VideoPlayer_get_frame_m86205149C0DB9B9A42C1177F846950B495E6882E_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_frame_m86205149C0DB9B9A42C1177F846950B495E6882E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_frame_m86205149C0DB9B9A42C1177F846950B495E6882E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_frame()");
	int64_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_frame(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_frame_mC94AD83B85EF441B374D71F332F51D2CA8BDE42A (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_frame_mC94AD83B85EF441B374D71F332F51D2CA8BDE42A_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, int64_t);
	static VideoPlayer_set_frame_mC94AD83B85EF441B374D71F332F51D2CA8BDE42A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_frame_mC94AD83B85EF441B374D71F332F51D2CA8BDE42A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_frame(System.Int64)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Double UnityEngine.Video.VideoPlayer::get_clockTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VideoPlayer_get_clockTime_m39CD89F5FB61373E84DA41C2B4A8BC43317D92B0 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef double (*VideoPlayer_get_clockTime_m39CD89F5FB61373E84DA41C2B4A8BC43317D92B0_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_clockTime_m39CD89F5FB61373E84DA41C2B4A8BC43317D92B0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_clockTime_m39CD89F5FB61373E84DA41C2B4A8BC43317D92B0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_clockTime()");
	double icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_canStep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_canStep_m92BECB7E8D199977C93516CDB66AA7C3315921D7 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_canStep_m92BECB7E8D199977C93516CDB66AA7C3315921D7_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_canStep_m92BECB7E8D199977C93516CDB66AA7C3315921D7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_canStep_m92BECB7E8D199977C93516CDB66AA7C3315921D7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_canStep()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::StepForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_StepForward_m06C849B3CE22EE18580B47525F884A3B06791EFC (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_StepForward_m06C849B3CE22EE18580B47525F884A3B06791EFC_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_StepForward_m06C849B3CE22EE18580B47525F884A3B06791EFC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_StepForward_m06C849B3CE22EE18580B47525F884A3B06791EFC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::StepForward()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_canSetPlaybackSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_canSetPlaybackSpeed_mF16C33FF1841FEC837C004EA208689E00AF450E3 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_canSetPlaybackSpeed_mF16C33FF1841FEC837C004EA208689E00AF450E3_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_canSetPlaybackSpeed_mF16C33FF1841FEC837C004EA208689E00AF450E3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_canSetPlaybackSpeed_mF16C33FF1841FEC837C004EA208689E00AF450E3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_canSetPlaybackSpeed()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.Video.VideoPlayer::get_playbackSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VideoPlayer_get_playbackSpeed_m181BB81DA01A9A73368545F6469AEA182C5BE5E9 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef float (*VideoPlayer_get_playbackSpeed_m181BB81DA01A9A73368545F6469AEA182C5BE5E9_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_playbackSpeed_m181BB81DA01A9A73368545F6469AEA182C5BE5E9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_playbackSpeed_m181BB81DA01A9A73368545F6469AEA182C5BE5E9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_playbackSpeed()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_playbackSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_playbackSpeed_m2B8E70EA74E6BB0EEB9B9A58CB528A9DE7867B94 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_playbackSpeed_m2B8E70EA74E6BB0EEB9B9A58CB528A9DE7867B94_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, float);
	static VideoPlayer_set_playbackSpeed_m2B8E70EA74E6BB0EEB9B9A58CB528A9DE7867B94_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_playbackSpeed_m2B8E70EA74E6BB0EEB9B9A58CB528A9DE7867B94_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_playbackSpeed(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_isLooping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isLooping_m40585B4A012A2E1BB6C970912D5E7451F24538EC (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_isLooping_m40585B4A012A2E1BB6C970912D5E7451F24538EC_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_isLooping_m40585B4A012A2E1BB6C970912D5E7451F24538EC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_isLooping_m40585B4A012A2E1BB6C970912D5E7451F24538EC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_isLooping()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_isLooping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_isLooping_mBA932FED6AA886C07C4770D7FAC369D249F0E7C2 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_isLooping_mBA932FED6AA886C07C4770D7FAC369D249F0E7C2_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, bool);
	static VideoPlayer_set_isLooping_mBA932FED6AA886C07C4770D7FAC369D249F0E7C2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_isLooping_mBA932FED6AA886C07C4770D7FAC369D249F0E7C2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_isLooping(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_canSetTimeSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_canSetTimeSource_m2916E1177AEC79FC2D90C0E6DD6579A69E416534 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_canSetTimeSource_m2916E1177AEC79FC2D90C0E6DD6579A69E416534_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_canSetTimeSource_m2916E1177AEC79FC2D90C0E6DD6579A69E416534_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_canSetTimeSource_m2916E1177AEC79FC2D90C0E6DD6579A69E416534_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_canSetTimeSource()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Video.VideoTimeSource UnityEngine.Video.VideoPlayer::get_timeSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoPlayer_get_timeSource_m684040FCC0983C9D9C8B2B1C74B258E64BDDB8E6 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*VideoPlayer_get_timeSource_m684040FCC0983C9D9C8B2B1C74B258E64BDDB8E6_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_timeSource_m684040FCC0983C9D9C8B2B1C74B258E64BDDB8E6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_timeSource_m684040FCC0983C9D9C8B2B1C74B258E64BDDB8E6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_timeSource()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_timeSource(UnityEngine.Video.VideoTimeSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_timeSource_m8BA00E404CB536C6D5F93AE2A641D20CCF6DCBBF (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_timeSource_m8BA00E404CB536C6D5F93AE2A641D20CCF6DCBBF_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, int32_t);
	static VideoPlayer_set_timeSource_m8BA00E404CB536C6D5F93AE2A641D20CCF6DCBBF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_timeSource_m8BA00E404CB536C6D5F93AE2A641D20CCF6DCBBF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_timeSource(UnityEngine.Video.VideoTimeSource)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Video.VideoTimeReference UnityEngine.Video.VideoPlayer::get_timeReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoPlayer_get_timeReference_mCE9671109E831CB6E6558C029E61015315C8597A (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*VideoPlayer_get_timeReference_mCE9671109E831CB6E6558C029E61015315C8597A_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_timeReference_mCE9671109E831CB6E6558C029E61015315C8597A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_timeReference_mCE9671109E831CB6E6558C029E61015315C8597A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_timeReference()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_timeReference(UnityEngine.Video.VideoTimeReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_timeReference_m81505434FFE9D6C90B4DFAEE895FD76D192074CA (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_timeReference_m81505434FFE9D6C90B4DFAEE895FD76D192074CA_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, int32_t);
	static VideoPlayer_set_timeReference_m81505434FFE9D6C90B4DFAEE895FD76D192074CA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_timeReference_m81505434FFE9D6C90B4DFAEE895FD76D192074CA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_timeReference(UnityEngine.Video.VideoTimeReference)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Double UnityEngine.Video.VideoPlayer::get_externalReferenceTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VideoPlayer_get_externalReferenceTime_mAA00B368BB96FA939BC6C48F6D35F5B28FEA4819 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef double (*VideoPlayer_get_externalReferenceTime_mAA00B368BB96FA939BC6C48F6D35F5B28FEA4819_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_externalReferenceTime_mAA00B368BB96FA939BC6C48F6D35F5B28FEA4819_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_externalReferenceTime_mAA00B368BB96FA939BC6C48F6D35F5B28FEA4819_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_externalReferenceTime()");
	double icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_externalReferenceTime(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_externalReferenceTime_m14DE8B639F0FEB4D74DE97ADD3B39D465D45608C (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, double ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_externalReferenceTime_m14DE8B639F0FEB4D74DE97ADD3B39D465D45608C_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, double);
	static VideoPlayer_set_externalReferenceTime_m14DE8B639F0FEB4D74DE97ADD3B39D465D45608C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_externalReferenceTime_m14DE8B639F0FEB4D74DE97ADD3B39D465D45608C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_externalReferenceTime(System.Double)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_canSetSkipOnDrop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_canSetSkipOnDrop_m13924B56D4B5803460CCA6DFA368F324FFE6211A (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_canSetSkipOnDrop_m13924B56D4B5803460CCA6DFA368F324FFE6211A_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_canSetSkipOnDrop_m13924B56D4B5803460CCA6DFA368F324FFE6211A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_canSetSkipOnDrop_m13924B56D4B5803460CCA6DFA368F324FFE6211A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_canSetSkipOnDrop()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_skipOnDrop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_skipOnDrop_m4052F319D0E3473BFC0A34F4C089EE3714EC5E69 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_skipOnDrop_m4052F319D0E3473BFC0A34F4C089EE3714EC5E69_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_skipOnDrop_m4052F319D0E3473BFC0A34F4C089EE3714EC5E69_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_skipOnDrop_m4052F319D0E3473BFC0A34F4C089EE3714EC5E69_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_skipOnDrop()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_skipOnDrop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_skipOnDrop_mA8C4DC173EBDA383ED2B7341653B2A61427626D1 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_skipOnDrop_mA8C4DC173EBDA383ED2B7341653B2A61427626D1_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, bool);
	static VideoPlayer_set_skipOnDrop_mA8C4DC173EBDA383ED2B7341653B2A61427626D1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_skipOnDrop_mA8C4DC173EBDA383ED2B7341653B2A61427626D1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_skipOnDrop(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.UInt64 UnityEngine.Video.VideoPlayer::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t VideoPlayer_get_frameCount_mE7B49C44E393A2EC65424C29F2D6563A130D9044 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef uint64_t (*VideoPlayer_get_frameCount_mE7B49C44E393A2EC65424C29F2D6563A130D9044_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_frameCount_mE7B49C44E393A2EC65424C29F2D6563A130D9044_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_frameCount_mE7B49C44E393A2EC65424C29F2D6563A130D9044_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_frameCount()");
	uint64_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.Video.VideoPlayer::get_frameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VideoPlayer_get_frameRate_m09BEB09F2BF9BA564FB73CA731635AA42F11A2C2 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef float (*VideoPlayer_get_frameRate_m09BEB09F2BF9BA564FB73CA731635AA42F11A2C2_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_frameRate_m09BEB09F2BF9BA564FB73CA731635AA42F11A2C2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_frameRate_m09BEB09F2BF9BA564FB73CA731635AA42F11A2C2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_frameRate()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Double UnityEngine.Video.VideoPlayer::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VideoPlayer_get_length_mBC6C3F1F75BA3273B4F8AF12944799BAFEE1103E (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef double (*VideoPlayer_get_length_mBC6C3F1F75BA3273B4F8AF12944799BAFEE1103E_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_length_mBC6C3F1F75BA3273B4F8AF12944799BAFEE1103E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_length_mBC6C3F1F75BA3273B4F8AF12944799BAFEE1103E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_length()");
	double icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.UInt32 UnityEngine.Video.VideoPlayer::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t VideoPlayer_get_width_m48BAC5D5E4F5838BEA07C9ECCE5F374F19642637 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef uint32_t (*VideoPlayer_get_width_m48BAC5D5E4F5838BEA07C9ECCE5F374F19642637_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_width_m48BAC5D5E4F5838BEA07C9ECCE5F374F19642637_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_width_m48BAC5D5E4F5838BEA07C9ECCE5F374F19642637_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_width()");
	uint32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.UInt32 UnityEngine.Video.VideoPlayer::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t VideoPlayer_get_height_mDE03C81FCC43AD4B50101D4DAB32525561A462BF (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef uint32_t (*VideoPlayer_get_height_mDE03C81FCC43AD4B50101D4DAB32525561A462BF_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_height_mDE03C81FCC43AD4B50101D4DAB32525561A462BF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_height_mDE03C81FCC43AD4B50101D4DAB32525561A462BF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_height()");
	uint32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.UInt32 UnityEngine.Video.VideoPlayer::get_pixelAspectRatioNumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t VideoPlayer_get_pixelAspectRatioNumerator_m1F121AB279F6FA0FDCFFB72692ADE3F9830F2764 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef uint32_t (*VideoPlayer_get_pixelAspectRatioNumerator_m1F121AB279F6FA0FDCFFB72692ADE3F9830F2764_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_pixelAspectRatioNumerator_m1F121AB279F6FA0FDCFFB72692ADE3F9830F2764_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_pixelAspectRatioNumerator_m1F121AB279F6FA0FDCFFB72692ADE3F9830F2764_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_pixelAspectRatioNumerator()");
	uint32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.UInt32 UnityEngine.Video.VideoPlayer::get_pixelAspectRatioDenominator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t VideoPlayer_get_pixelAspectRatioDenominator_m28F0C945476A0E3F892B1BF11168CFFD80AAFD45 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef uint32_t (*VideoPlayer_get_pixelAspectRatioDenominator_m28F0C945476A0E3F892B1BF11168CFFD80AAFD45_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_pixelAspectRatioDenominator_m28F0C945476A0E3F892B1BF11168CFFD80AAFD45_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_pixelAspectRatioDenominator_m28F0C945476A0E3F892B1BF11168CFFD80AAFD45_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_pixelAspectRatioDenominator()");
	uint32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.UInt16 UnityEngine.Video.VideoPlayer::get_audioTrackCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t VideoPlayer_get_audioTrackCount_m9007B1BC772C413BB6DE8390400FB58067855AD8 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef uint16_t (*VideoPlayer_get_audioTrackCount_m9007B1BC772C413BB6DE8390400FB58067855AD8_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_audioTrackCount_m9007B1BC772C413BB6DE8390400FB58067855AD8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_audioTrackCount_m9007B1BC772C413BB6DE8390400FB58067855AD8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_audioTrackCount()");
	uint16_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.String UnityEngine.Video.VideoPlayer::GetAudioLanguageCode(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoPlayer_GetAudioLanguageCode_m2CD2200343940E198AC2B9D60EDF19F160F9D7DC (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, uint16_t ___trackIndex0, const RuntimeMethod* method)
{
	typedef String_t* (*VideoPlayer_GetAudioLanguageCode_m2CD2200343940E198AC2B9D60EDF19F160F9D7DC_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, uint16_t);
	static VideoPlayer_GetAudioLanguageCode_m2CD2200343940E198AC2B9D60EDF19F160F9D7DC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_GetAudioLanguageCode_m2CD2200343940E198AC2B9D60EDF19F160F9D7DC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::GetAudioLanguageCode(System.UInt16)");
	String_t* icallRetVal = _il2cpp_icall_func(__this, ___trackIndex0);
	return icallRetVal;
}
// System.UInt16 UnityEngine.Video.VideoPlayer::GetAudioChannelCount(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t VideoPlayer_GetAudioChannelCount_mB1375DB06E32FA1A3F29725738CACE08A2ABDC1D (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, uint16_t ___trackIndex0, const RuntimeMethod* method)
{
	typedef uint16_t (*VideoPlayer_GetAudioChannelCount_mB1375DB06E32FA1A3F29725738CACE08A2ABDC1D_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, uint16_t);
	static VideoPlayer_GetAudioChannelCount_mB1375DB06E32FA1A3F29725738CACE08A2ABDC1D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_GetAudioChannelCount_mB1375DB06E32FA1A3F29725738CACE08A2ABDC1D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::GetAudioChannelCount(System.UInt16)");
	uint16_t icallRetVal = _il2cpp_icall_func(__this, ___trackIndex0);
	return icallRetVal;
}
// System.UInt32 UnityEngine.Video.VideoPlayer::GetAudioSampleRate(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t VideoPlayer_GetAudioSampleRate_mEFF284E9F2D96A5AAB8F69F08EDE90FB00BB817B (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, uint16_t ___trackIndex0, const RuntimeMethod* method)
{
	typedef uint32_t (*VideoPlayer_GetAudioSampleRate_mEFF284E9F2D96A5AAB8F69F08EDE90FB00BB817B_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, uint16_t);
	static VideoPlayer_GetAudioSampleRate_mEFF284E9F2D96A5AAB8F69F08EDE90FB00BB817B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_GetAudioSampleRate_mEFF284E9F2D96A5AAB8F69F08EDE90FB00BB817B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::GetAudioSampleRate(System.UInt16)");
	uint32_t icallRetVal = _il2cpp_icall_func(__this, ___trackIndex0);
	return icallRetVal;
}
// System.UInt16 UnityEngine.Video.VideoPlayer::get_controlledAudioTrackMaxCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t VideoPlayer_get_controlledAudioTrackMaxCount_m683574289898B0B95742ED9375871124515B4913 (const RuntimeMethod* method)
{
	typedef uint16_t (*VideoPlayer_get_controlledAudioTrackMaxCount_m683574289898B0B95742ED9375871124515B4913_ftn) ();
	static VideoPlayer_get_controlledAudioTrackMaxCount_m683574289898B0B95742ED9375871124515B4913_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_controlledAudioTrackMaxCount_m683574289898B0B95742ED9375871124515B4913_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_controlledAudioTrackMaxCount()");
	uint16_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.UInt16 UnityEngine.Video.VideoPlayer::get_controlledAudioTrackCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t VideoPlayer_get_controlledAudioTrackCount_mF5F281A1DE2F16305DBFC03FB32F3A0E80669BAE (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0;
		L_0 = VideoPlayer_GetControlledAudioTrackCount_m38A3B0E50124BC91A126089B686A9F7E6C6440BC(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::set_controlledAudioTrackCount(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_controlledAudioTrackCount_mEB194256CE8DDECD698B615CC635953BB28631CF (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		uint16_t L_0;
		L_0 = VideoPlayer_get_controlledAudioTrackMaxCount_m683574289898B0B95742ED9375871124515B4913(/*hidden argument*/NULL);
		V_0 = L_0;
		uint16_t L_1 = ___value0;
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_1) > ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_5);
		String_t* L_7;
		L_7 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral702CAC6E5B2A0B5052071E4FF4BD80AFF05EA14C)), L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VideoPlayer_set_controlledAudioTrackCount_mEB194256CE8DDECD698B615CC635953BB28631CF_RuntimeMethod_var)));
	}

IL_002a:
	{
		uint16_t L_9 = ___value0;
		VideoPlayer_SetControlledAudioTrackCount_m7CD969E68222FC13FEBE59D6C819A256BE5B2031(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.UInt16 UnityEngine.Video.VideoPlayer::GetControlledAudioTrackCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t VideoPlayer_GetControlledAudioTrackCount_m38A3B0E50124BC91A126089B686A9F7E6C6440BC (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef uint16_t (*VideoPlayer_GetControlledAudioTrackCount_m38A3B0E50124BC91A126089B686A9F7E6C6440BC_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_GetControlledAudioTrackCount_m38A3B0E50124BC91A126089B686A9F7E6C6440BC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_GetControlledAudioTrackCount_m38A3B0E50124BC91A126089B686A9F7E6C6440BC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::GetControlledAudioTrackCount()");
	uint16_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::SetControlledAudioTrackCount(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_SetControlledAudioTrackCount_m7CD969E68222FC13FEBE59D6C819A256BE5B2031 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_SetControlledAudioTrackCount_m7CD969E68222FC13FEBE59D6C819A256BE5B2031_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, uint16_t);
	static VideoPlayer_SetControlledAudioTrackCount_m7CD969E68222FC13FEBE59D6C819A256BE5B2031_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_SetControlledAudioTrackCount_m7CD969E68222FC13FEBE59D6C819A256BE5B2031_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::SetControlledAudioTrackCount(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Video.VideoPlayer::EnableAudioTrack(System.UInt16,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_EnableAudioTrack_m373B3A7E450347ED724201BA29635550EDCA1DEC (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, uint16_t ___trackIndex0, bool ___enabled1, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_EnableAudioTrack_m373B3A7E450347ED724201BA29635550EDCA1DEC_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, uint16_t, bool);
	static VideoPlayer_EnableAudioTrack_m373B3A7E450347ED724201BA29635550EDCA1DEC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_EnableAudioTrack_m373B3A7E450347ED724201BA29635550EDCA1DEC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::EnableAudioTrack(System.UInt16,System.Boolean)");
	_il2cpp_icall_func(__this, ___trackIndex0, ___enabled1);
}
// System.Boolean UnityEngine.Video.VideoPlayer::IsAudioTrackEnabled(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_IsAudioTrackEnabled_m39837D22F5BA220CE573003FC48DD0B7A9623802 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, uint16_t ___trackIndex0, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_IsAudioTrackEnabled_m39837D22F5BA220CE573003FC48DD0B7A9623802_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, uint16_t);
	static VideoPlayer_IsAudioTrackEnabled_m39837D22F5BA220CE573003FC48DD0B7A9623802_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_IsAudioTrackEnabled_m39837D22F5BA220CE573003FC48DD0B7A9623802_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::IsAudioTrackEnabled(System.UInt16)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___trackIndex0);
	return icallRetVal;
}
// UnityEngine.Video.VideoAudioOutputMode UnityEngine.Video.VideoPlayer::get_audioOutputMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoPlayer_get_audioOutputMode_m4AA2D591AD72C676A9B0DE7885EB92BA7336159F (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*VideoPlayer_get_audioOutputMode_m4AA2D591AD72C676A9B0DE7885EB92BA7336159F_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_audioOutputMode_m4AA2D591AD72C676A9B0DE7885EB92BA7336159F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_audioOutputMode_m4AA2D591AD72C676A9B0DE7885EB92BA7336159F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_audioOutputMode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_audioOutputMode(UnityEngine.Video.VideoAudioOutputMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_audioOutputMode_mF5F9D36B418462081E9173675C0D5945BA432510 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_audioOutputMode_mF5F9D36B418462081E9173675C0D5945BA432510_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, int32_t);
	static VideoPlayer_set_audioOutputMode_mF5F9D36B418462081E9173675C0D5945BA432510_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_audioOutputMode_mF5F9D36B418462081E9173675C0D5945BA432510_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_audioOutputMode(UnityEngine.Video.VideoAudioOutputMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_canSetDirectAudioVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_canSetDirectAudioVolume_m0F5F4D0241054DAE443B9E34C861F04FE6C41205 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_canSetDirectAudioVolume_m0F5F4D0241054DAE443B9E34C861F04FE6C41205_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_canSetDirectAudioVolume_m0F5F4D0241054DAE443B9E34C861F04FE6C41205_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_canSetDirectAudioVolume_m0F5F4D0241054DAE443B9E34C861F04FE6C41205_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_canSetDirectAudioVolume()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.Video.VideoPlayer::GetDirectAudioVolume(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VideoPlayer_GetDirectAudioVolume_m0CF490B4A9E326D985CF65A0ABF75E85A6E8222B (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, uint16_t ___trackIndex0, const RuntimeMethod* method)
{
	typedef float (*VideoPlayer_GetDirectAudioVolume_m0CF490B4A9E326D985CF65A0ABF75E85A6E8222B_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, uint16_t);
	static VideoPlayer_GetDirectAudioVolume_m0CF490B4A9E326D985CF65A0ABF75E85A6E8222B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_GetDirectAudioVolume_m0CF490B4A9E326D985CF65A0ABF75E85A6E8222B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::GetDirectAudioVolume(System.UInt16)");
	float icallRetVal = _il2cpp_icall_func(__this, ___trackIndex0);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::SetDirectAudioVolume(System.UInt16,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_SetDirectAudioVolume_m8C516AC24BC2CF0BAC204785277E8E286DFEDD65 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, uint16_t ___trackIndex0, float ___volume1, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_SetDirectAudioVolume_m8C516AC24BC2CF0BAC204785277E8E286DFEDD65_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, uint16_t, float);
	static VideoPlayer_SetDirectAudioVolume_m8C516AC24BC2CF0BAC204785277E8E286DFEDD65_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_SetDirectAudioVolume_m8C516AC24BC2CF0BAC204785277E8E286DFEDD65_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::SetDirectAudioVolume(System.UInt16,System.Single)");
	_il2cpp_icall_func(__this, ___trackIndex0, ___volume1);
}
// System.Boolean UnityEngine.Video.VideoPlayer::GetDirectAudioMute(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_GetDirectAudioMute_mDBCF147A0FCBC185B464D367341923AA65C6E932 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, uint16_t ___trackIndex0, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_GetDirectAudioMute_mDBCF147A0FCBC185B464D367341923AA65C6E932_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, uint16_t);
	static VideoPlayer_GetDirectAudioMute_mDBCF147A0FCBC185B464D367341923AA65C6E932_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_GetDirectAudioMute_mDBCF147A0FCBC185B464D367341923AA65C6E932_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::GetDirectAudioMute(System.UInt16)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___trackIndex0);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::SetDirectAudioMute(System.UInt16,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_SetDirectAudioMute_m53A8A48BD2886F98F367358D76D41B47ADA95FED (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, uint16_t ___trackIndex0, bool ___mute1, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_SetDirectAudioMute_m53A8A48BD2886F98F367358D76D41B47ADA95FED_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, uint16_t, bool);
	static VideoPlayer_SetDirectAudioMute_m53A8A48BD2886F98F367358D76D41B47ADA95FED_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_SetDirectAudioMute_m53A8A48BD2886F98F367358D76D41B47ADA95FED_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::SetDirectAudioMute(System.UInt16,System.Boolean)");
	_il2cpp_icall_func(__this, ___trackIndex0, ___mute1);
}
// UnityEngine.AudioSource UnityEngine.Video.VideoPlayer::GetTargetAudioSource(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * VideoPlayer_GetTargetAudioSource_mA416E890B769A8EC7C6903EE6B6E4D17F6177846 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, uint16_t ___trackIndex0, const RuntimeMethod* method)
{
	typedef AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*VideoPlayer_GetTargetAudioSource_mA416E890B769A8EC7C6903EE6B6E4D17F6177846_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, uint16_t);
	static VideoPlayer_GetTargetAudioSource_mA416E890B769A8EC7C6903EE6B6E4D17F6177846_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_GetTargetAudioSource_mA416E890B769A8EC7C6903EE6B6E4D17F6177846_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::GetTargetAudioSource(System.UInt16)");
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * icallRetVal = _il2cpp_icall_func(__this, ___trackIndex0);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::SetTargetAudioSource(System.UInt16,UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_SetTargetAudioSource_mD62E0486A91ABCB8579FFCD1F8C70BBAE859739A (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, uint16_t ___trackIndex0, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___source1, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_SetTargetAudioSource_mD62E0486A91ABCB8579FFCD1F8C70BBAE859739A_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, uint16_t, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *);
	static VideoPlayer_SetTargetAudioSource_mD62E0486A91ABCB8579FFCD1F8C70BBAE859739A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_SetTargetAudioSource_mD62E0486A91ABCB8579FFCD1F8C70BBAE859739A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::SetTargetAudioSource(System.UInt16,UnityEngine.AudioSource)");
	_il2cpp_icall_func(__this, ___trackIndex0, ___source1);
}
// System.Void UnityEngine.Video.VideoPlayer::add_prepareCompleted(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_prepareCompleted_mEE18082D6DCA2DA4DD1FB1D42BD811BC8EDD783F (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_0 = NULL;
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_1 = NULL;
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_2 = NULL;
	{
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_0 = __this->get_prepareCompleted_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_2 = V_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var));
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** L_5 = __this->get_address_of_prepareCompleted_4();
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_6 = V_2;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_7 = V_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *>((EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_9 = V_0;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)L_9) == ((RuntimeObject*)(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_prepareCompleted(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_remove_prepareCompleted_m0749A4CF00F7E08E2C716024A86CFA7D2A528256 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_0 = NULL;
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_1 = NULL;
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_2 = NULL;
	{
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_0 = __this->get_prepareCompleted_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_2 = V_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var));
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** L_5 = __this->get_address_of_prepareCompleted_4();
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_6 = V_2;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_7 = V_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *>((EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_9 = V_0;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)L_9) == ((RuntimeObject*)(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::add_loopPointReached(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_loopPointReached_m01BBFFE55835498DFF2A1C8CEF3292B4780E4964 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_0 = NULL;
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_1 = NULL;
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_2 = NULL;
	{
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_0 = __this->get_loopPointReached_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_2 = V_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var));
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** L_5 = __this->get_address_of_loopPointReached_5();
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_6 = V_2;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_7 = V_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *>((EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_9 = V_0;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)L_9) == ((RuntimeObject*)(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_loopPointReached(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_remove_loopPointReached_m55D082EACE8B0BB952132704939A712BBCBE5A2D (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_0 = NULL;
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_1 = NULL;
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_2 = NULL;
	{
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_0 = __this->get_loopPointReached_5();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_2 = V_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var));
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** L_5 = __this->get_address_of_loopPointReached_5();
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_6 = V_2;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_7 = V_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *>((EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_9 = V_0;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)L_9) == ((RuntimeObject*)(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::add_started(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_started_mCF94075E95992F117E4F572F6A9C4533DFF79230 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_0 = NULL;
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_1 = NULL;
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_2 = NULL;
	{
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_0 = __this->get_started_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_2 = V_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var));
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** L_5 = __this->get_address_of_started_6();
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_6 = V_2;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_7 = V_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *>((EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_9 = V_0;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)L_9) == ((RuntimeObject*)(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_started(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_remove_started_m413FD525DAA289A2D65BB757C06314D8DDF4356C (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_0 = NULL;
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_1 = NULL;
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_2 = NULL;
	{
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_0 = __this->get_started_6();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_2 = V_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var));
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** L_5 = __this->get_address_of_started_6();
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_6 = V_2;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_7 = V_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *>((EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_9 = V_0;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)L_9) == ((RuntimeObject*)(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::add_frameDropped(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_frameDropped_m3B479EDDB7063CEEEE2B3220883D3A87FE195388 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_0 = NULL;
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_1 = NULL;
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_2 = NULL;
	{
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_0 = __this->get_frameDropped_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_2 = V_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var));
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** L_5 = __this->get_address_of_frameDropped_7();
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_6 = V_2;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_7 = V_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *>((EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_9 = V_0;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)L_9) == ((RuntimeObject*)(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_frameDropped(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_remove_frameDropped_mF8641C4ECC62D2629D88EAF17DBA7B42D3F39355 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_0 = NULL;
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_1 = NULL;
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_2 = NULL;
	{
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_0 = __this->get_frameDropped_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_2 = V_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var));
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** L_5 = __this->get_address_of_frameDropped_7();
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_6 = V_2;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_7 = V_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *>((EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_9 = V_0;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)L_9) == ((RuntimeObject*)(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::add_errorReceived(UnityEngine.Video.VideoPlayer/ErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_errorReceived_m3191CC4503DB77582C88285800DA862F4E9081AC (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * V_0 = NULL;
	ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * V_1 = NULL;
	ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * V_2 = NULL;
	{
		ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * L_0 = __this->get_errorReceived_8();
		V_0 = L_0;
	}

IL_0007:
	{
		ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * L_1 = V_0;
		V_1 = L_1;
		ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * L_2 = V_1;
		ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 *)CastclassSealed((RuntimeObject*)L_4, ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2_il2cpp_TypeInfo_var));
		ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 ** L_5 = __this->get_address_of_errorReceived_8();
		ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * L_6 = V_2;
		ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * L_7 = V_1;
		ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * L_8;
		L_8 = InterlockedCompareExchangeImpl<ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 *>((ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 **)L_5, L_6, L_7);
		V_0 = L_8;
		ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * L_9 = V_0;
		ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * L_10 = V_1;
		if ((!(((RuntimeObject*)(ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 *)L_9) == ((RuntimeObject*)(ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_errorReceived(UnityEngine.Video.VideoPlayer/ErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_remove_errorReceived_m31138D9F117261951481B8F096B3BC7247DC2B55 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * V_0 = NULL;
	ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * V_1 = NULL;
	ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * V_2 = NULL;
	{
		ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * L_0 = __this->get_errorReceived_8();
		V_0 = L_0;
	}

IL_0007:
	{
		ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * L_1 = V_0;
		V_1 = L_1;
		ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * L_2 = V_1;
		ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 *)CastclassSealed((RuntimeObject*)L_4, ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2_il2cpp_TypeInfo_var));
		ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 ** L_5 = __this->get_address_of_errorReceived_8();
		ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * L_6 = V_2;
		ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * L_7 = V_1;
		ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * L_8;
		L_8 = InterlockedCompareExchangeImpl<ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 *>((ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 **)L_5, L_6, L_7);
		V_0 = L_8;
		ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * L_9 = V_0;
		ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * L_10 = V_1;
		if ((!(((RuntimeObject*)(ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 *)L_9) == ((RuntimeObject*)(ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::add_seekCompleted(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_seekCompleted_m482B8CF4D354F42D99664140037C51054A46206B (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_0 = NULL;
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_1 = NULL;
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_2 = NULL;
	{
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_0 = __this->get_seekCompleted_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_2 = V_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var));
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** L_5 = __this->get_address_of_seekCompleted_9();
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_6 = V_2;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_7 = V_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *>((EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_9 = V_0;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)L_9) == ((RuntimeObject*)(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_seekCompleted(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_remove_seekCompleted_m147AB9BF7E28DA27D8E6ED5F44FF0F0CCFCE9A20 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_0 = NULL;
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_1 = NULL;
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * V_2 = NULL;
	{
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_0 = __this->get_seekCompleted_9();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_2 = V_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)CastclassSealed((RuntimeObject*)L_4, EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var));
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** L_5 = __this->get_address_of_seekCompleted_9();
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_6 = V_2;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_7 = V_1;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *>((EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_9 = V_0;
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)L_9) == ((RuntimeObject*)(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::add_clockResyncOccurred(UnityEngine.Video.VideoPlayer/TimeEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_clockResyncOccurred_mDB489C01B4EA1EEB332F0342A1678884415A12D5 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * V_0 = NULL;
	TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * V_1 = NULL;
	TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * V_2 = NULL;
	{
		TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * L_0 = __this->get_clockResyncOccurred_10();
		V_0 = L_0;
	}

IL_0007:
	{
		TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * L_1 = V_0;
		V_1 = L_1;
		TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * L_2 = V_1;
		TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 *)CastclassSealed((RuntimeObject*)L_4, TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8_il2cpp_TypeInfo_var));
		TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 ** L_5 = __this->get_address_of_clockResyncOccurred_10();
		TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * L_6 = V_2;
		TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * L_7 = V_1;
		TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * L_8;
		L_8 = InterlockedCompareExchangeImpl<TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 *>((TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 **)L_5, L_6, L_7);
		V_0 = L_8;
		TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * L_9 = V_0;
		TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * L_10 = V_1;
		if ((!(((RuntimeObject*)(TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 *)L_9) == ((RuntimeObject*)(TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_clockResyncOccurred(UnityEngine.Video.VideoPlayer/TimeEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_remove_clockResyncOccurred_mF57B8D6040F3B06B2EE3579405262C844A749324 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * V_0 = NULL;
	TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * V_1 = NULL;
	TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * V_2 = NULL;
	{
		TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * L_0 = __this->get_clockResyncOccurred_10();
		V_0 = L_0;
	}

IL_0007:
	{
		TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * L_1 = V_0;
		V_1 = L_1;
		TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * L_2 = V_1;
		TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 *)CastclassSealed((RuntimeObject*)L_4, TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8_il2cpp_TypeInfo_var));
		TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 ** L_5 = __this->get_address_of_clockResyncOccurred_10();
		TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * L_6 = V_2;
		TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * L_7 = V_1;
		TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * L_8;
		L_8 = InterlockedCompareExchangeImpl<TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 *>((TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 **)L_5, L_6, L_7);
		V_0 = L_8;
		TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * L_9 = V_0;
		TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * L_10 = V_1;
		if ((!(((RuntimeObject*)(TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 *)L_9) == ((RuntimeObject*)(TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_sendFrameReadyEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_sendFrameReadyEvents_m76BCD90B1072723D51D64E5C7928D1CC7AF323C9 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_sendFrameReadyEvents_m76BCD90B1072723D51D64E5C7928D1CC7AF323C9_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *);
	static VideoPlayer_get_sendFrameReadyEvents_m76BCD90B1072723D51D64E5C7928D1CC7AF323C9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_sendFrameReadyEvents_m76BCD90B1072723D51D64E5C7928D1CC7AF323C9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_sendFrameReadyEvents()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_sendFrameReadyEvents(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_sendFrameReadyEvents_m3B7E79AC02FA346B42006F3A0C759F8BF0AA28F1 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_set_sendFrameReadyEvents_m3B7E79AC02FA346B42006F3A0C759F8BF0AA28F1_ftn) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, bool);
	static VideoPlayer_set_sendFrameReadyEvents_m3B7E79AC02FA346B42006F3A0C759F8BF0AA28F1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_sendFrameReadyEvents_m3B7E79AC02FA346B42006F3A0C759F8BF0AA28F1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_sendFrameReadyEvents(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Video.VideoPlayer::add_frameReady(UnityEngine.Video.VideoPlayer/FrameReadyEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_frameReady_m0D19F160E93230FD97EF46517CBE2D38D7A59BD3 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * V_0 = NULL;
	FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * V_1 = NULL;
	FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * V_2 = NULL;
	{
		FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * L_0 = __this->get_frameReady_11();
		V_0 = L_0;
	}

IL_0007:
	{
		FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * L_1 = V_0;
		V_1 = L_1;
		FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * L_2 = V_1;
		FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC *)CastclassSealed((RuntimeObject*)L_4, FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC_il2cpp_TypeInfo_var));
		FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC ** L_5 = __this->get_address_of_frameReady_11();
		FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * L_6 = V_2;
		FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * L_7 = V_1;
		FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * L_8;
		L_8 = InterlockedCompareExchangeImpl<FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC *>((FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC **)L_5, L_6, L_7);
		V_0 = L_8;
		FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * L_9 = V_0;
		FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * L_10 = V_1;
		if ((!(((RuntimeObject*)(FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC *)L_9) == ((RuntimeObject*)(FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_frameReady(UnityEngine.Video.VideoPlayer/FrameReadyEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_remove_frameReady_mF977F23E41BD055146552228478AF8CDE4797661 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * V_0 = NULL;
	FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * V_1 = NULL;
	FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * V_2 = NULL;
	{
		FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * L_0 = __this->get_frameReady_11();
		V_0 = L_0;
	}

IL_0007:
	{
		FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * L_1 = V_0;
		V_1 = L_1;
		FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * L_2 = V_1;
		FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC *)CastclassSealed((RuntimeObject*)L_4, FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC_il2cpp_TypeInfo_var));
		FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC ** L_5 = __this->get_address_of_frameReady_11();
		FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * L_6 = V_2;
		FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * L_7 = V_1;
		FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * L_8;
		L_8 = InterlockedCompareExchangeImpl<FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC *>((FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC **)L_5, L_6, L_7);
		V_0 = L_8;
		FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * L_9 = V_0;
		FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * L_10 = V_1;
		if ((!(((RuntimeObject*)(FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC *)L_9) == ((RuntimeObject*)(FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokePrepareCompletedCallback_Internal(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokePrepareCompletedCallback_Internal_m484EB137376A703BF6A3FA6C256B2A6FF1AE43C0 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___source0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_1 = L_0->get_prepareCompleted_4();
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_3 = ___source0;
		NullCheck(L_3);
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_4 = L_3->get_prepareCompleted_4();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_5 = ___source0;
		NullCheck(L_4);
		EventHandler_Invoke_m0B3144B6BE309B7644E15FB9668F595F92F4C684(L_4, L_5, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeFrameReadyCallback_Internal(UnityEngine.Video.VideoPlayer,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeFrameReadyCallback_Internal_m5D9A702C59BC6E2F509910283A64A8962EB8BB26 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___source0, int64_t ___frameIdx1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = ___source0;
		NullCheck(L_0);
		FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * L_1 = L_0->get_frameReady_11();
		V_0 = (bool)((!(((RuntimeObject*)(FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_3 = ___source0;
		NullCheck(L_3);
		FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * L_4 = L_3->get_frameReady_11();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_5 = ___source0;
		int64_t L_6 = ___frameIdx1;
		NullCheck(L_4);
		FrameReadyEventHandler_Invoke_m4BA6EA29ED4CF35A85BAC6AD123D809474FBD325(L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeLoopPointReachedCallback_Internal(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeLoopPointReachedCallback_Internal_mAA1C70B8E462025007C56ED08C4F7C91A39462D2 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___source0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_1 = L_0->get_loopPointReached_5();
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_3 = ___source0;
		NullCheck(L_3);
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_4 = L_3->get_loopPointReached_5();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_5 = ___source0;
		NullCheck(L_4);
		EventHandler_Invoke_m0B3144B6BE309B7644E15FB9668F595F92F4C684(L_4, L_5, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeStartedCallback_Internal(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeStartedCallback_Internal_m842536698ACF972E7954A270792270B0D2335143 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___source0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_1 = L_0->get_started_6();
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_3 = ___source0;
		NullCheck(L_3);
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_4 = L_3->get_started_6();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_5 = ___source0;
		NullCheck(L_4);
		EventHandler_Invoke_m0B3144B6BE309B7644E15FB9668F595F92F4C684(L_4, L_5, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeFrameDroppedCallback_Internal(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeFrameDroppedCallback_Internal_mC9E91AE49227E065E6AF18D530BE099E2D5B37CB (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___source0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_1 = L_0->get_frameDropped_7();
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_3 = ___source0;
		NullCheck(L_3);
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_4 = L_3->get_frameDropped_7();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_5 = ___source0;
		NullCheck(L_4);
		EventHandler_Invoke_m0B3144B6BE309B7644E15FB9668F595F92F4C684(L_4, L_5, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeErrorReceivedCallback_Internal(UnityEngine.Video.VideoPlayer,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeErrorReceivedCallback_Internal_mD7F2EDBA83C890C6989991799AC10A59243B0845 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___source0, String_t* ___errorStr1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = ___source0;
		NullCheck(L_0);
		ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * L_1 = L_0->get_errorReceived_8();
		V_0 = (bool)((!(((RuntimeObject*)(ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_3 = ___source0;
		NullCheck(L_3);
		ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * L_4 = L_3->get_errorReceived_8();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_5 = ___source0;
		String_t* L_6 = ___errorStr1;
		NullCheck(L_4);
		ErrorEventHandler_Invoke_mF6EEEB7A362D50D2FE7B757648470E3B1F809414(L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeSeekCompletedCallback_Internal(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeSeekCompletedCallback_Internal_m60B679E91A699FA7F697F32076538EC118658642 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___source0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_1 = L_0->get_seekCompleted_9();
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_3 = ___source0;
		NullCheck(L_3);
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_4 = L_3->get_seekCompleted_9();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_5 = ___source0;
		NullCheck(L_4);
		EventHandler_Invoke_m0B3144B6BE309B7644E15FB9668F595F92F4C684(L_4, L_5, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeClockResyncOccurredCallback_Internal(UnityEngine.Video.VideoPlayer,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeClockResyncOccurredCallback_Internal_m23AD479F955C56D148B48DC3BCB468783964A01E (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___source0, double ___seconds1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = ___source0;
		NullCheck(L_0);
		TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * L_1 = L_0->get_clockResyncOccurred_10();
		V_0 = (bool)((!(((RuntimeObject*)(TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_3 = ___source0;
		NullCheck(L_3);
		TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * L_4 = L_3->get_clockResyncOccurred_10();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_5 = ___source0;
		double L_6 = ___seconds1;
		NullCheck(L_4);
		TimeEventHandler_Invoke_m2AEC774186134B8F0CEF7B61C5754F4AA3D4A60C(L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer__ctor_mD9553C409F57C5FCA7B2FCE4B0B8FECFD2F1F9A7 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method)
{
	{
		Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEventHandler__ctor_m655F594F6CC7F8735011F785B0A0429BC08A7502 (ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEventHandler_Invoke_mF6EEEB7A362D50D2FE7B757648470E3B1F809414 (ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * __this, VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___source0, String_t* ___message1, const RuntimeMethod* method)
{
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___message1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___message1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___source0, ___message1);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___source0, ___message1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0, ___message1);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0, ___message1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___message1, targetMethod);
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
						GenericInterfaceActionInvoker2< VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, String_t* >::Invoke(targetMethod, targetThis, ___source0, ___message1);
					else
						GenericVirtActionInvoker2< VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, String_t* >::Invoke(targetMethod, targetThis, ___source0, ___message1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___message1);
					else
						VirtActionInvoker2< VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___message1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___message1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___message1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Video.VideoPlayer/ErrorEventHandler::BeginInvoke(UnityEngine.Video.VideoPlayer,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ErrorEventHandler_BeginInvoke_mD229D40406E6FF4A9E70A55AD9A97A0C4D1B24E3 (ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * __this, VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___source0, String_t* ___message1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___source0;
	__d_args[1] = ___message1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEventHandler_EndInvoke_m71707244BC66E8031D49D3D23FDC4F2D9361FC79 (ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_mA1A6722C36644D8F49E5A5008B68352561E03400 (EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::Invoke(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_Invoke_m0B3144B6BE309B7644E15FB9668F595F92F4C684 (EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * __this, VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___source0, const RuntimeMethod* method)
{
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___source0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___source0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, targetMethod);
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
						GenericInterfaceActionInvoker1< VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * >::Invoke(targetMethod, targetThis, ___source0);
					else
						GenericVirtActionInvoker1< VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * >::Invoke(targetMethod, targetThis, ___source0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0);
					else
						VirtActionInvoker1< VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Video.VideoPlayer/EventHandler::BeginInvoke(UnityEngine.Video.VideoPlayer,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EventHandler_BeginInvoke_m3C25E8FC4549E9B4C9A801E4F81D481B6528F1AB (EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * __this, VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___source0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___source0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_EndInvoke_mD3FAA4D9AB6E36C74DF8DADD464FD3330FAE24F7 (EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameReadyEventHandler__ctor_mA7834775230CC8D9C0337941FEF38222CF5AD9D6 (FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameReadyEventHandler_Invoke_m4BA6EA29ED4CF35A85BAC6AD123D809474FBD325 (FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * __this, VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___source0, int64_t ___frameIdx1, const RuntimeMethod* method)
{
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___frameIdx1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___frameIdx1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int64_t >::Invoke(targetMethod, ___source0, ___frameIdx1);
					else
						GenericVirtActionInvoker1< int64_t >::Invoke(targetMethod, ___source0, ___frameIdx1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0, ___frameIdx1);
					else
						VirtActionInvoker1< int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0, ___frameIdx1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___frameIdx1, targetMethod);
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
						GenericInterfaceActionInvoker2< VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, int64_t >::Invoke(targetMethod, targetThis, ___source0, ___frameIdx1);
					else
						GenericVirtActionInvoker2< VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, int64_t >::Invoke(targetMethod, targetThis, ___source0, ___frameIdx1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___frameIdx1);
					else
						VirtActionInvoker2< VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___frameIdx1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, int64_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___frameIdx1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, int64_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___frameIdx1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::BeginInvoke(UnityEngine.Video.VideoPlayer,System.Int64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FrameReadyEventHandler_BeginInvoke_m11D1FDEF49CAED27A4E4FACDC9D281B79F13698E (FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * __this, VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___source0, int64_t ___frameIdx1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___source0;
	__d_args[1] = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &___frameIdx1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameReadyEventHandler_EndInvoke_mBE6AA092028120E465EAFF6125BAD2574CBF45D5 (FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeEventHandler__ctor_m085DCE43EA4D04D7146A1A8BFA8175082862E1F5 (TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeEventHandler_Invoke_m2AEC774186134B8F0CEF7B61C5754F4AA3D4A60C (TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * __this, VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___source0, double ___seconds1, const RuntimeMethod* method)
{
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___seconds1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___seconds1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< double >::Invoke(targetMethod, ___source0, ___seconds1);
					else
						GenericVirtActionInvoker1< double >::Invoke(targetMethod, ___source0, ___seconds1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___source0, ___seconds1);
					else
						VirtActionInvoker1< double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___source0, ___seconds1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, double, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___seconds1, targetMethod);
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
						GenericInterfaceActionInvoker2< VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, double >::Invoke(targetMethod, targetThis, ___source0, ___seconds1);
					else
						GenericVirtActionInvoker2< VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, double >::Invoke(targetMethod, targetThis, ___source0, ___seconds1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___seconds1);
					else
						VirtActionInvoker2< VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, double >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___seconds1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, double, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___seconds1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 *, double, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___seconds1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Video.VideoPlayer/TimeEventHandler::BeginInvoke(UnityEngine.Video.VideoPlayer,System.Double,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeEventHandler_BeginInvoke_mE8C2EB6FF93C322A58952CE6735611162D194A8D (TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * __this, VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___source0, double ___seconds1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___source0;
	__d_args[1] = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &___seconds1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeEventHandler_EndInvoke_m746D841C545DCBBB09A5FF25346DAEB2FD2DE37C (TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
