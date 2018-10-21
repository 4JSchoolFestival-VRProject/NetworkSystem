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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// NetwrokSystem.BroadcastClientManager
struct BroadcastClientManager_t2119499817;
// NetwrokSystem.BroadcastServerManager
struct BroadcastServerManager_t3015442646;
// NetwrokSystem.BroadcastSystem
struct BroadcastSystem_t594396148;
// NetwrokSystem.BroadcastSystem/<SendBroadcast>d__5
struct U3CSendBroadcastU3Ed__5_t4209478386;
// NetwrokSystem.ClientManager
struct ClientManager_t1383746268;
// NetwrokSystem.ClientSystem
struct ClientSystem_t4235447217;
// NetwrokSystem.ServerManager
struct ServerManager_t1778859134;
// NetwrokSystem.ServerSystem
struct ServerSystem_t969793282;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t2285235057;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t156472862;
// System.IOAsyncCallback
struct IOAsyncCallback_t705871752;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Net.EndPoint
struct EndPoint_t982345378;
// System.Net.IPAddress
struct IPAddress_t241777590;
// System.Net.IPEndPoint
struct IPEndPoint_t3791887218;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t4071955934;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t610293888;
// System.Net.Sockets.Socket
struct Socket_t1119025450;
// System.Net.Sockets.TcpClient
struct TcpClient_t822906377;
// System.Net.Sockets.TcpListener
struct TcpListener_t3499576757;
// System.Net.Sockets.UdpClient
struct UdpClient_t967282006;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2974092902;
// System.UInt16[]
struct UInt16U5BU5D_t3326319531;
// System.Void
struct Void_t1185182177;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;

extern RuntimeClass* AsyncCallback_t3962456242_il2cpp_TypeInfo_var;
extern RuntimeClass* BroadcastClientManager_t2119499817_il2cpp_TypeInfo_var;
extern RuntimeClass* BroadcastServerManager_t3015442646_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* Console_t3208230065_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* IAsyncResult_t767004451_il2cpp_TypeInfo_var;
extern RuntimeClass* IPAddress_t241777590_il2cpp_TypeInfo_var;
extern RuntimeClass* IPEndPoint_t3791887218_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* TcpClient_t822906377_il2cpp_TypeInfo_var;
extern RuntimeClass* TcpListener_t3499576757_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CSendBroadcastU3Ed__5_t4209478386_il2cpp_TypeInfo_var;
extern RuntimeClass* UdpClient_t967282006_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1704863334;
extern String_t* _stringLiteral1798980456;
extern String_t* _stringLiteral1880994789;
extern String_t* _stringLiteral2286293156;
extern String_t* _stringLiteral2385499530;
extern String_t* _stringLiteral2475682504;
extern String_t* _stringLiteral2526250868;
extern String_t* _stringLiteral2557876128;
extern String_t* _stringLiteral3445060045;
extern String_t* _stringLiteral3452614550;
extern String_t* _stringLiteral3729972845;
extern String_t* _stringLiteral3787497674;
extern String_t* _stringLiteral3826597005;
extern String_t* _stringLiteral4021224642;
extern String_t* _stringLiteral713948858;
extern String_t* _stringLiteral808822055;
extern const RuntimeMethod* BroadcastSystem_OnReceive_m1121289711_RuntimeMethod_var;
extern const RuntimeMethod* ClientSystem_OnConnect_m2056877247_RuntimeMethod_var;
extern const RuntimeMethod* ClientSystem_OnRead_m293147450_RuntimeMethod_var;
extern const RuntimeMethod* ClientSystem_OnWrite_m2721469661_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisClientManager_t1383746268_m641185673_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisServerManager_t1778859134_m133596795_RuntimeMethod_var;
extern const RuntimeMethod* ServerSystem_OnRead_m1512557477_RuntimeMethod_var;
extern const RuntimeMethod* U3CSendBroadcastU3Ed__5_System_Collections_IEnumerator_Reset_m919498822_RuntimeMethod_var;
extern const uint32_t BroadcastClientManager_Awake_m3377825614_MetadataUsageId;
extern const uint32_t BroadcastClientManager_OnGetBroadcast_m1753816323_MetadataUsageId;
extern const uint32_t BroadcastServerManager_Awake_m1632870660_MetadataUsageId;
extern const uint32_t BroadcastSystem_Awake_m168565213_MetadataUsageId;
extern const uint32_t BroadcastSystem_BeginListen_m2866200372_MetadataUsageId;
extern const uint32_t BroadcastSystem_BeginSend_m4057981461_MetadataUsageId;
extern const uint32_t BroadcastSystem_OnReceive_m1121289711_MetadataUsageId;
extern const uint32_t BroadcastSystem_SendBroadcast_m1727385814_MetadataUsageId;
extern const uint32_t ClientManager_OnGetMessage_m3550061581_MetadataUsageId;
extern const uint32_t ClientManager_Send_m4191221563_MetadataUsageId;
extern const uint32_t ClientSystem_Awake_m2717395444_MetadataUsageId;
extern const uint32_t ClientSystem_BeginConnect_m861483464_MetadataUsageId;
extern const uint32_t ClientSystem_DisConnect_m3528052903_MetadataUsageId;
extern const uint32_t ClientSystem_OnConnect_m2056877247_MetadataUsageId;
extern const uint32_t ClientSystem_OnRead_m293147450_MetadataUsageId;
extern const uint32_t ClientSystem_OnWrite_m2721469661_MetadataUsageId;
extern const uint32_t ClientSystem_Send_m1593278515_MetadataUsageId;
extern const uint32_t ServerManager_OnConnectClient_m351059752_MetadataUsageId;
extern const uint32_t ServerManager_OnGetMessage_m372768512_MetadataUsageId;
extern const uint32_t ServerManager_StartAccept_m2394880500_MetadataUsageId;
extern const uint32_t ServerSystem_Awake_m329268399_MetadataUsageId;
extern const uint32_t ServerSystem_BeginAccept_m2229529175_MetadataUsageId;
extern const uint32_t ServerSystem_DisConnect_m96803545_MetadataUsageId;
extern const uint32_t ServerSystem_OnAcceptClient_m3844002481_MetadataUsageId;
extern const uint32_t ServerSystem_OnRead_m1512557477_MetadataUsageId;
extern const uint32_t ServerSystem_OnWrite_m3893389561_MetadataUsageId;
extern const uint32_t U3CSendBroadcastU3Ed__5_MoveNext_m1679860397_MetadataUsageId;
extern const uint32_t U3CSendBroadcastU3Ed__5_System_Collections_IEnumerator_Reset_m919498822_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_t4116647657;
struct ObjectU5BU5D_t2843939325;


#ifndef U3CMODULEU3E_T692745561_H
#define U3CMODULEU3E_T692745561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745561 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745561_H
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
#ifndef U3CSENDBROADCASTU3ED__5_T4209478386_H
#define U3CSENDBROADCASTU3ED__5_T4209478386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetwrokSystem.BroadcastSystem/<SendBroadcast>d__5
struct  U3CSendBroadcastU3Ed__5_t4209478386  : public RuntimeObject
{
public:
	// System.Int32 NetwrokSystem.BroadcastSystem/<SendBroadcast>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object NetwrokSystem.BroadcastSystem/<SendBroadcast>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String NetwrokSystem.BroadcastSystem/<SendBroadcast>d__5::msg
	String_t* ___msg_2;
	// NetwrokSystem.BroadcastSystem NetwrokSystem.BroadcastSystem/<SendBroadcast>d__5::<>4__this
	BroadcastSystem_t594396148 * ___U3CU3E4__this_3;
	// System.Int32 NetwrokSystem.BroadcastSystem/<SendBroadcast>d__5::port
	int32_t ___port_4;
	// System.Byte[] NetwrokSystem.BroadcastSystem/<SendBroadcast>d__5::<buffer>5__2
	ByteU5BU5D_t4116647657* ___U3CbufferU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSendBroadcastU3Ed__5_t4209478386, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSendBroadcastU3Ed__5_t4209478386, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_msg_2() { return static_cast<int32_t>(offsetof(U3CSendBroadcastU3Ed__5_t4209478386, ___msg_2)); }
	inline String_t* get_msg_2() const { return ___msg_2; }
	inline String_t** get_address_of_msg_2() { return &___msg_2; }
	inline void set_msg_2(String_t* value)
	{
		___msg_2 = value;
		Il2CppCodeGenWriteBarrier((&___msg_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CSendBroadcastU3Ed__5_t4209478386, ___U3CU3E4__this_3)); }
	inline BroadcastSystem_t594396148 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline BroadcastSystem_t594396148 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(BroadcastSystem_t594396148 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_3), value);
	}

	inline static int32_t get_offset_of_port_4() { return static_cast<int32_t>(offsetof(U3CSendBroadcastU3Ed__5_t4209478386, ___port_4)); }
	inline int32_t get_port_4() const { return ___port_4; }
	inline int32_t* get_address_of_port_4() { return &___port_4; }
	inline void set_port_4(int32_t value)
	{
		___port_4 = value;
	}

	inline static int32_t get_offset_of_U3CbufferU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CSendBroadcastU3Ed__5_t4209478386, ___U3CbufferU3E5__2_5)); }
	inline ByteU5BU5D_t4116647657* get_U3CbufferU3E5__2_5() const { return ___U3CbufferU3E5__2_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CbufferU3E5__2_5() { return &___U3CbufferU3E5__2_5; }
	inline void set_U3CbufferU3E5__2_5(ByteU5BU5D_t4116647657* value)
	{
		___U3CbufferU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CbufferU3E5__2_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSENDBROADCASTU3ED__5_T4209478386_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
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
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
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
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
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
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
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
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_pinvoke
{
	ServerIdentity_t2342208608 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_com
{
	ServerIdentity_t2342208608 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef ENDPOINT_T982345378_H
#define ENDPOINT_T982345378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.EndPoint
struct  EndPoint_t982345378  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENDPOINT_T982345378_H
#ifndef TCPLISTENER_T3499576757_H
#define TCPLISTENER_T3499576757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.TcpListener
struct  TcpListener_t3499576757  : public RuntimeObject
{
public:
	// System.Net.IPEndPoint System.Net.Sockets.TcpListener::m_ServerSocketEP
	IPEndPoint_t3791887218 * ___m_ServerSocketEP_0;
	// System.Net.Sockets.Socket System.Net.Sockets.TcpListener::m_ServerSocket
	Socket_t1119025450 * ___m_ServerSocket_1;
	// System.Boolean System.Net.Sockets.TcpListener::m_Active
	bool ___m_Active_2;
	// System.Boolean System.Net.Sockets.TcpListener::m_ExclusiveAddressUse
	bool ___m_ExclusiveAddressUse_3;

public:
	inline static int32_t get_offset_of_m_ServerSocketEP_0() { return static_cast<int32_t>(offsetof(TcpListener_t3499576757, ___m_ServerSocketEP_0)); }
	inline IPEndPoint_t3791887218 * get_m_ServerSocketEP_0() const { return ___m_ServerSocketEP_0; }
	inline IPEndPoint_t3791887218 ** get_address_of_m_ServerSocketEP_0() { return &___m_ServerSocketEP_0; }
	inline void set_m_ServerSocketEP_0(IPEndPoint_t3791887218 * value)
	{
		___m_ServerSocketEP_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ServerSocketEP_0), value);
	}

	inline static int32_t get_offset_of_m_ServerSocket_1() { return static_cast<int32_t>(offsetof(TcpListener_t3499576757, ___m_ServerSocket_1)); }
	inline Socket_t1119025450 * get_m_ServerSocket_1() const { return ___m_ServerSocket_1; }
	inline Socket_t1119025450 ** get_address_of_m_ServerSocket_1() { return &___m_ServerSocket_1; }
	inline void set_m_ServerSocket_1(Socket_t1119025450 * value)
	{
		___m_ServerSocket_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ServerSocket_1), value);
	}

	inline static int32_t get_offset_of_m_Active_2() { return static_cast<int32_t>(offsetof(TcpListener_t3499576757, ___m_Active_2)); }
	inline bool get_m_Active_2() const { return ___m_Active_2; }
	inline bool* get_address_of_m_Active_2() { return &___m_Active_2; }
	inline void set_m_Active_2(bool value)
	{
		___m_Active_2 = value;
	}

	inline static int32_t get_offset_of_m_ExclusiveAddressUse_3() { return static_cast<int32_t>(offsetof(TcpListener_t3499576757, ___m_ExclusiveAddressUse_3)); }
	inline bool get_m_ExclusiveAddressUse_3() const { return ___m_ExclusiveAddressUse_3; }
	inline bool* get_address_of_m_ExclusiveAddressUse_3() { return &___m_ExclusiveAddressUse_3; }
	inline void set_m_ExclusiveAddressUse_3(bool value)
	{
		___m_ExclusiveAddressUse_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TCPLISTENER_T3499576757_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t2285235057 * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t1188251036 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t3123823036 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___dataItem_10)); }
	inline CodePageDataItem_t2285235057 * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t2285235057 ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t2285235057 * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((&___dataItem_10), value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoderFallback_13)); }
	inline EncoderFallback_t1188251036 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t1188251036 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___encoderFallback_13), value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoderFallback_14)); }
	inline DecoderFallback_t3123823036 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t3123823036 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___decoderFallback_14), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t1523322056 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t1523322056 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t1523322056 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t1853889766 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t1523322056 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t1523322056 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_0), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_1), value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t1523322056 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t1523322056 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUnicode_2), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t1523322056 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t1523322056 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_3), value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t1523322056 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t1523322056 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t1523322056 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___utf8Encoding_4), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t1523322056 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t1523322056 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_5), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t1523322056 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t1523322056 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_6), value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t1523322056 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t1523322056 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t1523322056 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((&___latin1Encoding_7), value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_8)); }
	inline Hashtable_t1853889766 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t1853889766 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t1853889766 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_8), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public MarshalByRefObject_t2760389100
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t156472862 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2974092902 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t1273022909, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t156472862 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t156472862 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t156472862 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((&____activeReadWriteTask_3), value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t1273022909, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2974092902 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2974092902 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2974092902 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((&____asyncActiveSemaphore_4), value);
	}
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_1)); }
	inline Stream_t1273022909 * get_Null_1() const { return ___Null_1; }
	inline Stream_t1273022909 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t1273022909 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
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
#ifndef IPENDPOINT_T3791887218_H
#define IPENDPOINT_T3791887218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.IPEndPoint
struct  IPEndPoint_t3791887218  : public EndPoint_t982345378
{
public:
	// System.Net.IPAddress System.Net.IPEndPoint::m_Address
	IPAddress_t241777590 * ___m_Address_2;
	// System.Int32 System.Net.IPEndPoint::m_Port
	int32_t ___m_Port_3;

public:
	inline static int32_t get_offset_of_m_Address_2() { return static_cast<int32_t>(offsetof(IPEndPoint_t3791887218, ___m_Address_2)); }
	inline IPAddress_t241777590 * get_m_Address_2() const { return ___m_Address_2; }
	inline IPAddress_t241777590 ** get_address_of_m_Address_2() { return &___m_Address_2; }
	inline void set_m_Address_2(IPAddress_t241777590 * value)
	{
		___m_Address_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Address_2), value);
	}

	inline static int32_t get_offset_of_m_Port_3() { return static_cast<int32_t>(offsetof(IPEndPoint_t3791887218, ___m_Port_3)); }
	inline int32_t get_m_Port_3() const { return ___m_Port_3; }
	inline int32_t* get_address_of_m_Port_3() { return &___m_Port_3; }
	inline void set_m_Port_3(int32_t value)
	{
		___m_Port_3 = value;
	}
};

struct IPEndPoint_t3791887218_StaticFields
{
public:
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t3791887218 * ___Any_5;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t3791887218 * ___IPv6Any_6;

public:
	inline static int32_t get_offset_of_Any_5() { return static_cast<int32_t>(offsetof(IPEndPoint_t3791887218_StaticFields, ___Any_5)); }
	inline IPEndPoint_t3791887218 * get_Any_5() const { return ___Any_5; }
	inline IPEndPoint_t3791887218 ** get_address_of_Any_5() { return &___Any_5; }
	inline void set_Any_5(IPEndPoint_t3791887218 * value)
	{
		___Any_5 = value;
		Il2CppCodeGenWriteBarrier((&___Any_5), value);
	}

	inline static int32_t get_offset_of_IPv6Any_6() { return static_cast<int32_t>(offsetof(IPEndPoint_t3791887218_StaticFields, ___IPv6Any_6)); }
	inline IPEndPoint_t3791887218 * get_IPv6Any_6() const { return ___IPv6Any_6; }
	inline IPEndPoint_t3791887218 ** get_address_of_IPv6Any_6() { return &___IPv6Any_6; }
	inline void set_IPv6Any_6(IPEndPoint_t3791887218 * value)
	{
		___IPv6Any_6 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6Any_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPENDPOINT_T3791887218_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
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
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
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
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef ADDRESSFAMILY_T2612549059_H
#define ADDRESSFAMILY_T2612549059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.AddressFamily
struct  AddressFamily_t2612549059 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_t2612549059, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDRESSFAMILY_T2612549059_H
#ifndef NETWORKSTREAM_T4071955934_H
#define NETWORKSTREAM_T4071955934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.NetworkStream
struct  NetworkStream_t4071955934  : public Stream_t1273022909
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::m_StreamSocket
	Socket_t1119025450 * ___m_StreamSocket_5;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Readable
	bool ___m_Readable_6;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Writeable
	bool ___m_Writeable_7;
	// System.Boolean System.Net.Sockets.NetworkStream::m_OwnsSocket
	bool ___m_OwnsSocket_8;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CloseTimeout
	int32_t ___m_CloseTimeout_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.NetworkStream::m_CleanedUp
	bool ___m_CleanedUp_10;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentReadTimeout
	int32_t ___m_CurrentReadTimeout_11;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentWriteTimeout
	int32_t ___m_CurrentWriteTimeout_12;

public:
	inline static int32_t get_offset_of_m_StreamSocket_5() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_StreamSocket_5)); }
	inline Socket_t1119025450 * get_m_StreamSocket_5() const { return ___m_StreamSocket_5; }
	inline Socket_t1119025450 ** get_address_of_m_StreamSocket_5() { return &___m_StreamSocket_5; }
	inline void set_m_StreamSocket_5(Socket_t1119025450 * value)
	{
		___m_StreamSocket_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_StreamSocket_5), value);
	}

	inline static int32_t get_offset_of_m_Readable_6() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_Readable_6)); }
	inline bool get_m_Readable_6() const { return ___m_Readable_6; }
	inline bool* get_address_of_m_Readable_6() { return &___m_Readable_6; }
	inline void set_m_Readable_6(bool value)
	{
		___m_Readable_6 = value;
	}

	inline static int32_t get_offset_of_m_Writeable_7() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_Writeable_7)); }
	inline bool get_m_Writeable_7() const { return ___m_Writeable_7; }
	inline bool* get_address_of_m_Writeable_7() { return &___m_Writeable_7; }
	inline void set_m_Writeable_7(bool value)
	{
		___m_Writeable_7 = value;
	}

	inline static int32_t get_offset_of_m_OwnsSocket_8() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_OwnsSocket_8)); }
	inline bool get_m_OwnsSocket_8() const { return ___m_OwnsSocket_8; }
	inline bool* get_address_of_m_OwnsSocket_8() { return &___m_OwnsSocket_8; }
	inline void set_m_OwnsSocket_8(bool value)
	{
		___m_OwnsSocket_8 = value;
	}

	inline static int32_t get_offset_of_m_CloseTimeout_9() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_CloseTimeout_9)); }
	inline int32_t get_m_CloseTimeout_9() const { return ___m_CloseTimeout_9; }
	inline int32_t* get_address_of_m_CloseTimeout_9() { return &___m_CloseTimeout_9; }
	inline void set_m_CloseTimeout_9(int32_t value)
	{
		___m_CloseTimeout_9 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_10() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_CleanedUp_10)); }
	inline bool get_m_CleanedUp_10() const { return ___m_CleanedUp_10; }
	inline bool* get_address_of_m_CleanedUp_10() { return &___m_CleanedUp_10; }
	inline void set_m_CleanedUp_10(bool value)
	{
		___m_CleanedUp_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentReadTimeout_11() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_CurrentReadTimeout_11)); }
	inline int32_t get_m_CurrentReadTimeout_11() const { return ___m_CurrentReadTimeout_11; }
	inline int32_t* get_address_of_m_CurrentReadTimeout_11() { return &___m_CurrentReadTimeout_11; }
	inline void set_m_CurrentReadTimeout_11(int32_t value)
	{
		___m_CurrentReadTimeout_11 = value;
	}

	inline static int32_t get_offset_of_m_CurrentWriteTimeout_12() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_CurrentWriteTimeout_12)); }
	inline int32_t get_m_CurrentWriteTimeout_12() const { return ___m_CurrentWriteTimeout_12; }
	inline int32_t* get_address_of_m_CurrentWriteTimeout_12() { return &___m_CurrentWriteTimeout_12; }
	inline void set_m_CurrentWriteTimeout_12(int32_t value)
	{
		___m_CurrentWriteTimeout_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKSTREAM_T4071955934_H
#ifndef PROTOCOLTYPE_T303635025_H
#define PROTOCOLTYPE_T303635025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.ProtocolType
struct  ProtocolType_t303635025 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProtocolType_t303635025, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROTOCOLTYPE_T303635025_H
#ifndef SOCKETTYPE_T2175930299_H
#define SOCKETTYPE_T2175930299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketType
struct  SocketType_t2175930299 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketType_t2175930299, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETTYPE_T2175930299_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef IPADDRESS_T241777590_H
#define IPADDRESS_T241777590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.IPAddress
struct  IPAddress_t241777590  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t3326319531* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_ToString_6), value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t3326319531* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t3326319531** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t3326319531* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Numbers_11), value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t241777590_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t241777590 * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t241777590 * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t241777590 * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t241777590 * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t241777590 * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t241777590 * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t241777590 * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___Any_0)); }
	inline IPAddress_t241777590 * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t241777590 ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t241777590 * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((&___Any_0), value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___Loopback_1)); }
	inline IPAddress_t241777590 * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t241777590 ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t241777590 * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((&___Loopback_1), value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t241777590 * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t241777590 ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t241777590 * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((&___Broadcast_2), value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___None_3)); }
	inline IPAddress_t241777590 * get_None_3() const { return ___None_3; }
	inline IPAddress_t241777590 ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t241777590 * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((&___None_3), value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t241777590 * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t241777590 ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t241777590 * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6Any_7), value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t241777590 * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t241777590 ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t241777590 * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6Loopback_8), value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t241777590 * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t241777590 ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t241777590 * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6None_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPADDRESS_T241777590_H
#ifndef SOCKET_T1119025450_H
#define SOCKET_T1119025450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket
struct  Socket_t1119025450  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_10;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_11;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_12;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_13;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_14;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_15;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_16;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t610293888 * ___m_Handle_17;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t982345378 * ___seed_endpoint_18;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t2974092902 * ___ReadSem_19;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t2974092902 * ___WriteSem_20;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_21;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_22;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_23;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_24;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_25;

public:
	inline static int32_t get_offset_of_is_closed_10() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___is_closed_10)); }
	inline bool get_is_closed_10() const { return ___is_closed_10; }
	inline bool* get_address_of_is_closed_10() { return &___is_closed_10; }
	inline void set_is_closed_10(bool value)
	{
		___is_closed_10 = value;
	}

	inline static int32_t get_offset_of_is_listening_11() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___is_listening_11)); }
	inline bool get_is_listening_11() const { return ___is_listening_11; }
	inline bool* get_address_of_is_listening_11() { return &___is_listening_11; }
	inline void set_is_listening_11(bool value)
	{
		___is_listening_11 = value;
	}

	inline static int32_t get_offset_of_useOverlappedIO_12() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___useOverlappedIO_12)); }
	inline bool get_useOverlappedIO_12() const { return ___useOverlappedIO_12; }
	inline bool* get_address_of_useOverlappedIO_12() { return &___useOverlappedIO_12; }
	inline void set_useOverlappedIO_12(bool value)
	{
		___useOverlappedIO_12 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_13() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___linger_timeout_13)); }
	inline int32_t get_linger_timeout_13() const { return ___linger_timeout_13; }
	inline int32_t* get_address_of_linger_timeout_13() { return &___linger_timeout_13; }
	inline void set_linger_timeout_13(int32_t value)
	{
		___linger_timeout_13 = value;
	}

	inline static int32_t get_offset_of_addressFamily_14() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___addressFamily_14)); }
	inline int32_t get_addressFamily_14() const { return ___addressFamily_14; }
	inline int32_t* get_address_of_addressFamily_14() { return &___addressFamily_14; }
	inline void set_addressFamily_14(int32_t value)
	{
		___addressFamily_14 = value;
	}

	inline static int32_t get_offset_of_socketType_15() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___socketType_15)); }
	inline int32_t get_socketType_15() const { return ___socketType_15; }
	inline int32_t* get_address_of_socketType_15() { return &___socketType_15; }
	inline void set_socketType_15(int32_t value)
	{
		___socketType_15 = value;
	}

	inline static int32_t get_offset_of_protocolType_16() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___protocolType_16)); }
	inline int32_t get_protocolType_16() const { return ___protocolType_16; }
	inline int32_t* get_address_of_protocolType_16() { return &___protocolType_16; }
	inline void set_protocolType_16(int32_t value)
	{
		___protocolType_16 = value;
	}

	inline static int32_t get_offset_of_m_Handle_17() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___m_Handle_17)); }
	inline SafeSocketHandle_t610293888 * get_m_Handle_17() const { return ___m_Handle_17; }
	inline SafeSocketHandle_t610293888 ** get_address_of_m_Handle_17() { return &___m_Handle_17; }
	inline void set_m_Handle_17(SafeSocketHandle_t610293888 * value)
	{
		___m_Handle_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_Handle_17), value);
	}

	inline static int32_t get_offset_of_seed_endpoint_18() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___seed_endpoint_18)); }
	inline EndPoint_t982345378 * get_seed_endpoint_18() const { return ___seed_endpoint_18; }
	inline EndPoint_t982345378 ** get_address_of_seed_endpoint_18() { return &___seed_endpoint_18; }
	inline void set_seed_endpoint_18(EndPoint_t982345378 * value)
	{
		___seed_endpoint_18 = value;
		Il2CppCodeGenWriteBarrier((&___seed_endpoint_18), value);
	}

	inline static int32_t get_offset_of_ReadSem_19() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___ReadSem_19)); }
	inline SemaphoreSlim_t2974092902 * get_ReadSem_19() const { return ___ReadSem_19; }
	inline SemaphoreSlim_t2974092902 ** get_address_of_ReadSem_19() { return &___ReadSem_19; }
	inline void set_ReadSem_19(SemaphoreSlim_t2974092902 * value)
	{
		___ReadSem_19 = value;
		Il2CppCodeGenWriteBarrier((&___ReadSem_19), value);
	}

	inline static int32_t get_offset_of_WriteSem_20() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___WriteSem_20)); }
	inline SemaphoreSlim_t2974092902 * get_WriteSem_20() const { return ___WriteSem_20; }
	inline SemaphoreSlim_t2974092902 ** get_address_of_WriteSem_20() { return &___WriteSem_20; }
	inline void set_WriteSem_20(SemaphoreSlim_t2974092902 * value)
	{
		___WriteSem_20 = value;
		Il2CppCodeGenWriteBarrier((&___WriteSem_20), value);
	}

	inline static int32_t get_offset_of_is_blocking_21() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___is_blocking_21)); }
	inline bool get_is_blocking_21() const { return ___is_blocking_21; }
	inline bool* get_address_of_is_blocking_21() { return &___is_blocking_21; }
	inline void set_is_blocking_21(bool value)
	{
		___is_blocking_21 = value;
	}

	inline static int32_t get_offset_of_is_bound_22() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___is_bound_22)); }
	inline bool get_is_bound_22() const { return ___is_bound_22; }
	inline bool* get_address_of_is_bound_22() { return &___is_bound_22; }
	inline void set_is_bound_22(bool value)
	{
		___is_bound_22 = value;
	}

	inline static int32_t get_offset_of_is_connected_23() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___is_connected_23)); }
	inline bool get_is_connected_23() const { return ___is_connected_23; }
	inline bool* get_address_of_is_connected_23() { return &___is_connected_23; }
	inline void set_is_connected_23(bool value)
	{
		___is_connected_23 = value;
	}

	inline static int32_t get_offset_of_m_IntCleanedUp_24() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___m_IntCleanedUp_24)); }
	inline int32_t get_m_IntCleanedUp_24() const { return ___m_IntCleanedUp_24; }
	inline int32_t* get_address_of_m_IntCleanedUp_24() { return &___m_IntCleanedUp_24; }
	inline void set_m_IntCleanedUp_24(int32_t value)
	{
		___m_IntCleanedUp_24 = value;
	}

	inline static int32_t get_offset_of_connect_in_progress_25() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___connect_in_progress_25)); }
	inline bool get_connect_in_progress_25() const { return ___connect_in_progress_25; }
	inline bool* get_address_of_connect_in_progress_25() { return &___connect_in_progress_25; }
	inline void set_connect_in_progress_25(bool value)
	{
		___connect_in_progress_25 = value;
	}
};

struct Socket_t1119025450_StaticFields
{
public:
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_PerfCountersEnabled
	bool ___s_PerfCountersEnabled_6;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t3962456242 * ___AcceptAsyncCallback_26;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_t705871752 * ___BeginAcceptCallback_27;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_t705871752 * ___BeginAcceptReceiveCallback_28;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t3962456242 * ___ConnectAsyncCallback_29;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_t705871752 * ___BeginConnectCallback_30;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t3962456242 * ___DisconnectAsyncCallback_31;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_t705871752 * ___BeginDisconnectCallback_32;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t3962456242 * ___ReceiveAsyncCallback_33;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_t705871752 * ___BeginReceiveCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_t705871752 * ___BeginReceiveGenericCallback_35;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t3962456242 * ___ReceiveFromAsyncCallback_36;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_t705871752 * ___BeginReceiveFromCallback_37;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t3962456242 * ___SendAsyncCallback_38;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_t705871752 * ___BeginSendGenericCallback_39;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t3962456242 * ___SendToAsyncCallback_40;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_0), value);
	}

	inline static int32_t get_offset_of_s_SupportsIPv4_1() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_SupportsIPv4_1)); }
	inline bool get_s_SupportsIPv4_1() const { return ___s_SupportsIPv4_1; }
	inline bool* get_address_of_s_SupportsIPv4_1() { return &___s_SupportsIPv4_1; }
	inline void set_s_SupportsIPv4_1(bool value)
	{
		___s_SupportsIPv4_1 = value;
	}

	inline static int32_t get_offset_of_s_SupportsIPv6_2() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_SupportsIPv6_2)); }
	inline bool get_s_SupportsIPv6_2() const { return ___s_SupportsIPv6_2; }
	inline bool* get_address_of_s_SupportsIPv6_2() { return &___s_SupportsIPv6_2; }
	inline void set_s_SupportsIPv6_2(bool value)
	{
		___s_SupportsIPv6_2 = value;
	}

	inline static int32_t get_offset_of_s_OSSupportsIPv6_3() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_OSSupportsIPv6_3)); }
	inline bool get_s_OSSupportsIPv6_3() const { return ___s_OSSupportsIPv6_3; }
	inline bool* get_address_of_s_OSSupportsIPv6_3() { return &___s_OSSupportsIPv6_3; }
	inline void set_s_OSSupportsIPv6_3(bool value)
	{
		___s_OSSupportsIPv6_3 = value;
	}

	inline static int32_t get_offset_of_s_Initialized_4() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_Initialized_4)); }
	inline bool get_s_Initialized_4() const { return ___s_Initialized_4; }
	inline bool* get_address_of_s_Initialized_4() { return &___s_Initialized_4; }
	inline void set_s_Initialized_4(bool value)
	{
		___s_Initialized_4 = value;
	}

	inline static int32_t get_offset_of_s_LoggingEnabled_5() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_LoggingEnabled_5)); }
	inline bool get_s_LoggingEnabled_5() const { return ___s_LoggingEnabled_5; }
	inline bool* get_address_of_s_LoggingEnabled_5() { return &___s_LoggingEnabled_5; }
	inline void set_s_LoggingEnabled_5(bool value)
	{
		___s_LoggingEnabled_5 = value;
	}

	inline static int32_t get_offset_of_s_PerfCountersEnabled_6() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_PerfCountersEnabled_6)); }
	inline bool get_s_PerfCountersEnabled_6() const { return ___s_PerfCountersEnabled_6; }
	inline bool* get_address_of_s_PerfCountersEnabled_6() { return &___s_PerfCountersEnabled_6; }
	inline void set_s_PerfCountersEnabled_6(bool value)
	{
		___s_PerfCountersEnabled_6 = value;
	}

	inline static int32_t get_offset_of_AcceptAsyncCallback_26() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___AcceptAsyncCallback_26)); }
	inline AsyncCallback_t3962456242 * get_AcceptAsyncCallback_26() const { return ___AcceptAsyncCallback_26; }
	inline AsyncCallback_t3962456242 ** get_address_of_AcceptAsyncCallback_26() { return &___AcceptAsyncCallback_26; }
	inline void set_AcceptAsyncCallback_26(AsyncCallback_t3962456242 * value)
	{
		___AcceptAsyncCallback_26 = value;
		Il2CppCodeGenWriteBarrier((&___AcceptAsyncCallback_26), value);
	}

	inline static int32_t get_offset_of_BeginAcceptCallback_27() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginAcceptCallback_27)); }
	inline IOAsyncCallback_t705871752 * get_BeginAcceptCallback_27() const { return ___BeginAcceptCallback_27; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginAcceptCallback_27() { return &___BeginAcceptCallback_27; }
	inline void set_BeginAcceptCallback_27(IOAsyncCallback_t705871752 * value)
	{
		___BeginAcceptCallback_27 = value;
		Il2CppCodeGenWriteBarrier((&___BeginAcceptCallback_27), value);
	}

	inline static int32_t get_offset_of_BeginAcceptReceiveCallback_28() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginAcceptReceiveCallback_28)); }
	inline IOAsyncCallback_t705871752 * get_BeginAcceptReceiveCallback_28() const { return ___BeginAcceptReceiveCallback_28; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginAcceptReceiveCallback_28() { return &___BeginAcceptReceiveCallback_28; }
	inline void set_BeginAcceptReceiveCallback_28(IOAsyncCallback_t705871752 * value)
	{
		___BeginAcceptReceiveCallback_28 = value;
		Il2CppCodeGenWriteBarrier((&___BeginAcceptReceiveCallback_28), value);
	}

	inline static int32_t get_offset_of_ConnectAsyncCallback_29() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___ConnectAsyncCallback_29)); }
	inline AsyncCallback_t3962456242 * get_ConnectAsyncCallback_29() const { return ___ConnectAsyncCallback_29; }
	inline AsyncCallback_t3962456242 ** get_address_of_ConnectAsyncCallback_29() { return &___ConnectAsyncCallback_29; }
	inline void set_ConnectAsyncCallback_29(AsyncCallback_t3962456242 * value)
	{
		___ConnectAsyncCallback_29 = value;
		Il2CppCodeGenWriteBarrier((&___ConnectAsyncCallback_29), value);
	}

	inline static int32_t get_offset_of_BeginConnectCallback_30() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginConnectCallback_30)); }
	inline IOAsyncCallback_t705871752 * get_BeginConnectCallback_30() const { return ___BeginConnectCallback_30; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginConnectCallback_30() { return &___BeginConnectCallback_30; }
	inline void set_BeginConnectCallback_30(IOAsyncCallback_t705871752 * value)
	{
		___BeginConnectCallback_30 = value;
		Il2CppCodeGenWriteBarrier((&___BeginConnectCallback_30), value);
	}

	inline static int32_t get_offset_of_DisconnectAsyncCallback_31() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___DisconnectAsyncCallback_31)); }
	inline AsyncCallback_t3962456242 * get_DisconnectAsyncCallback_31() const { return ___DisconnectAsyncCallback_31; }
	inline AsyncCallback_t3962456242 ** get_address_of_DisconnectAsyncCallback_31() { return &___DisconnectAsyncCallback_31; }
	inline void set_DisconnectAsyncCallback_31(AsyncCallback_t3962456242 * value)
	{
		___DisconnectAsyncCallback_31 = value;
		Il2CppCodeGenWriteBarrier((&___DisconnectAsyncCallback_31), value);
	}

	inline static int32_t get_offset_of_BeginDisconnectCallback_32() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginDisconnectCallback_32)); }
	inline IOAsyncCallback_t705871752 * get_BeginDisconnectCallback_32() const { return ___BeginDisconnectCallback_32; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginDisconnectCallback_32() { return &___BeginDisconnectCallback_32; }
	inline void set_BeginDisconnectCallback_32(IOAsyncCallback_t705871752 * value)
	{
		___BeginDisconnectCallback_32 = value;
		Il2CppCodeGenWriteBarrier((&___BeginDisconnectCallback_32), value);
	}

	inline static int32_t get_offset_of_ReceiveAsyncCallback_33() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___ReceiveAsyncCallback_33)); }
	inline AsyncCallback_t3962456242 * get_ReceiveAsyncCallback_33() const { return ___ReceiveAsyncCallback_33; }
	inline AsyncCallback_t3962456242 ** get_address_of_ReceiveAsyncCallback_33() { return &___ReceiveAsyncCallback_33; }
	inline void set_ReceiveAsyncCallback_33(AsyncCallback_t3962456242 * value)
	{
		___ReceiveAsyncCallback_33 = value;
		Il2CppCodeGenWriteBarrier((&___ReceiveAsyncCallback_33), value);
	}

	inline static int32_t get_offset_of_BeginReceiveCallback_34() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginReceiveCallback_34)); }
	inline IOAsyncCallback_t705871752 * get_BeginReceiveCallback_34() const { return ___BeginReceiveCallback_34; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginReceiveCallback_34() { return &___BeginReceiveCallback_34; }
	inline void set_BeginReceiveCallback_34(IOAsyncCallback_t705871752 * value)
	{
		___BeginReceiveCallback_34 = value;
		Il2CppCodeGenWriteBarrier((&___BeginReceiveCallback_34), value);
	}

	inline static int32_t get_offset_of_BeginReceiveGenericCallback_35() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginReceiveGenericCallback_35)); }
	inline IOAsyncCallback_t705871752 * get_BeginReceiveGenericCallback_35() const { return ___BeginReceiveGenericCallback_35; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginReceiveGenericCallback_35() { return &___BeginReceiveGenericCallback_35; }
	inline void set_BeginReceiveGenericCallback_35(IOAsyncCallback_t705871752 * value)
	{
		___BeginReceiveGenericCallback_35 = value;
		Il2CppCodeGenWriteBarrier((&___BeginReceiveGenericCallback_35), value);
	}

	inline static int32_t get_offset_of_ReceiveFromAsyncCallback_36() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___ReceiveFromAsyncCallback_36)); }
	inline AsyncCallback_t3962456242 * get_ReceiveFromAsyncCallback_36() const { return ___ReceiveFromAsyncCallback_36; }
	inline AsyncCallback_t3962456242 ** get_address_of_ReceiveFromAsyncCallback_36() { return &___ReceiveFromAsyncCallback_36; }
	inline void set_ReceiveFromAsyncCallback_36(AsyncCallback_t3962456242 * value)
	{
		___ReceiveFromAsyncCallback_36 = value;
		Il2CppCodeGenWriteBarrier((&___ReceiveFromAsyncCallback_36), value);
	}

	inline static int32_t get_offset_of_BeginReceiveFromCallback_37() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginReceiveFromCallback_37)); }
	inline IOAsyncCallback_t705871752 * get_BeginReceiveFromCallback_37() const { return ___BeginReceiveFromCallback_37; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginReceiveFromCallback_37() { return &___BeginReceiveFromCallback_37; }
	inline void set_BeginReceiveFromCallback_37(IOAsyncCallback_t705871752 * value)
	{
		___BeginReceiveFromCallback_37 = value;
		Il2CppCodeGenWriteBarrier((&___BeginReceiveFromCallback_37), value);
	}

	inline static int32_t get_offset_of_SendAsyncCallback_38() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___SendAsyncCallback_38)); }
	inline AsyncCallback_t3962456242 * get_SendAsyncCallback_38() const { return ___SendAsyncCallback_38; }
	inline AsyncCallback_t3962456242 ** get_address_of_SendAsyncCallback_38() { return &___SendAsyncCallback_38; }
	inline void set_SendAsyncCallback_38(AsyncCallback_t3962456242 * value)
	{
		___SendAsyncCallback_38 = value;
		Il2CppCodeGenWriteBarrier((&___SendAsyncCallback_38), value);
	}

	inline static int32_t get_offset_of_BeginSendGenericCallback_39() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginSendGenericCallback_39)); }
	inline IOAsyncCallback_t705871752 * get_BeginSendGenericCallback_39() const { return ___BeginSendGenericCallback_39; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginSendGenericCallback_39() { return &___BeginSendGenericCallback_39; }
	inline void set_BeginSendGenericCallback_39(IOAsyncCallback_t705871752 * value)
	{
		___BeginSendGenericCallback_39 = value;
		Il2CppCodeGenWriteBarrier((&___BeginSendGenericCallback_39), value);
	}

	inline static int32_t get_offset_of_SendToAsyncCallback_40() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___SendToAsyncCallback_40)); }
	inline AsyncCallback_t3962456242 * get_SendToAsyncCallback_40() const { return ___SendToAsyncCallback_40; }
	inline AsyncCallback_t3962456242 ** get_address_of_SendToAsyncCallback_40() { return &___SendToAsyncCallback_40; }
	inline void set_SendToAsyncCallback_40(AsyncCallback_t3962456242 * value)
	{
		___SendToAsyncCallback_40 = value;
		Il2CppCodeGenWriteBarrier((&___SendToAsyncCallback_40), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKET_T1119025450_H
#ifndef TCPCLIENT_T822906377_H
#define TCPCLIENT_T822906377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.TcpClient
struct  TcpClient_t822906377  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::m_ClientSocket
	Socket_t1119025450 * ___m_ClientSocket_0;
	// System.Boolean System.Net.Sockets.TcpClient::m_Active
	bool ___m_Active_1;
	// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::m_DataStream
	NetworkStream_t4071955934 * ___m_DataStream_2;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.TcpClient::m_Family
	int32_t ___m_Family_3;
	// System.Boolean System.Net.Sockets.TcpClient::m_CleanedUp
	bool ___m_CleanedUp_4;

public:
	inline static int32_t get_offset_of_m_ClientSocket_0() { return static_cast<int32_t>(offsetof(TcpClient_t822906377, ___m_ClientSocket_0)); }
	inline Socket_t1119025450 * get_m_ClientSocket_0() const { return ___m_ClientSocket_0; }
	inline Socket_t1119025450 ** get_address_of_m_ClientSocket_0() { return &___m_ClientSocket_0; }
	inline void set_m_ClientSocket_0(Socket_t1119025450 * value)
	{
		___m_ClientSocket_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClientSocket_0), value);
	}

	inline static int32_t get_offset_of_m_Active_1() { return static_cast<int32_t>(offsetof(TcpClient_t822906377, ___m_Active_1)); }
	inline bool get_m_Active_1() const { return ___m_Active_1; }
	inline bool* get_address_of_m_Active_1() { return &___m_Active_1; }
	inline void set_m_Active_1(bool value)
	{
		___m_Active_1 = value;
	}

	inline static int32_t get_offset_of_m_DataStream_2() { return static_cast<int32_t>(offsetof(TcpClient_t822906377, ___m_DataStream_2)); }
	inline NetworkStream_t4071955934 * get_m_DataStream_2() const { return ___m_DataStream_2; }
	inline NetworkStream_t4071955934 ** get_address_of_m_DataStream_2() { return &___m_DataStream_2; }
	inline void set_m_DataStream_2(NetworkStream_t4071955934 * value)
	{
		___m_DataStream_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DataStream_2), value);
	}

	inline static int32_t get_offset_of_m_Family_3() { return static_cast<int32_t>(offsetof(TcpClient_t822906377, ___m_Family_3)); }
	inline int32_t get_m_Family_3() const { return ___m_Family_3; }
	inline int32_t* get_address_of_m_Family_3() { return &___m_Family_3; }
	inline void set_m_Family_3(int32_t value)
	{
		___m_Family_3 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_4() { return static_cast<int32_t>(offsetof(TcpClient_t822906377, ___m_CleanedUp_4)); }
	inline bool get_m_CleanedUp_4() const { return ___m_CleanedUp_4; }
	inline bool* get_address_of_m_CleanedUp_4() { return &___m_CleanedUp_4; }
	inline void set_m_CleanedUp_4(bool value)
	{
		___m_CleanedUp_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TCPCLIENT_T822906377_H
#ifndef UDPCLIENT_T967282006_H
#define UDPCLIENT_T967282006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.UdpClient
struct  UdpClient_t967282006  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.UdpClient::m_ClientSocket
	Socket_t1119025450 * ___m_ClientSocket_1;
	// System.Boolean System.Net.Sockets.UdpClient::m_Active
	bool ___m_Active_2;
	// System.Byte[] System.Net.Sockets.UdpClient::m_Buffer
	ByteU5BU5D_t4116647657* ___m_Buffer_3;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.UdpClient::m_Family
	int32_t ___m_Family_4;
	// System.Boolean System.Net.Sockets.UdpClient::m_CleanedUp
	bool ___m_CleanedUp_5;
	// System.Boolean System.Net.Sockets.UdpClient::m_IsBroadcast
	bool ___m_IsBroadcast_6;

public:
	inline static int32_t get_offset_of_m_ClientSocket_1() { return static_cast<int32_t>(offsetof(UdpClient_t967282006, ___m_ClientSocket_1)); }
	inline Socket_t1119025450 * get_m_ClientSocket_1() const { return ___m_ClientSocket_1; }
	inline Socket_t1119025450 ** get_address_of_m_ClientSocket_1() { return &___m_ClientSocket_1; }
	inline void set_m_ClientSocket_1(Socket_t1119025450 * value)
	{
		___m_ClientSocket_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClientSocket_1), value);
	}

	inline static int32_t get_offset_of_m_Active_2() { return static_cast<int32_t>(offsetof(UdpClient_t967282006, ___m_Active_2)); }
	inline bool get_m_Active_2() const { return ___m_Active_2; }
	inline bool* get_address_of_m_Active_2() { return &___m_Active_2; }
	inline void set_m_Active_2(bool value)
	{
		___m_Active_2 = value;
	}

	inline static int32_t get_offset_of_m_Buffer_3() { return static_cast<int32_t>(offsetof(UdpClient_t967282006, ___m_Buffer_3)); }
	inline ByteU5BU5D_t4116647657* get_m_Buffer_3() const { return ___m_Buffer_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_Buffer_3() { return &___m_Buffer_3; }
	inline void set_m_Buffer_3(ByteU5BU5D_t4116647657* value)
	{
		___m_Buffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Buffer_3), value);
	}

	inline static int32_t get_offset_of_m_Family_4() { return static_cast<int32_t>(offsetof(UdpClient_t967282006, ___m_Family_4)); }
	inline int32_t get_m_Family_4() const { return ___m_Family_4; }
	inline int32_t* get_address_of_m_Family_4() { return &___m_Family_4; }
	inline void set_m_Family_4(int32_t value)
	{
		___m_Family_4 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_5() { return static_cast<int32_t>(offsetof(UdpClient_t967282006, ___m_CleanedUp_5)); }
	inline bool get_m_CleanedUp_5() const { return ___m_CleanedUp_5; }
	inline bool* get_address_of_m_CleanedUp_5() { return &___m_CleanedUp_5; }
	inline void set_m_CleanedUp_5(bool value)
	{
		___m_CleanedUp_5 = value;
	}

	inline static int32_t get_offset_of_m_IsBroadcast_6() { return static_cast<int32_t>(offsetof(UdpClient_t967282006, ___m_IsBroadcast_6)); }
	inline bool get_m_IsBroadcast_6() const { return ___m_IsBroadcast_6; }
	inline bool* get_address_of_m_IsBroadcast_6() { return &___m_IsBroadcast_6; }
	inline void set_m_IsBroadcast_6(bool value)
	{
		___m_IsBroadcast_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UDPCLIENT_T967282006_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef BROADCASTSYSTEM_T594396148_H
#define BROADCASTSYSTEM_T594396148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetwrokSystem.BroadcastSystem
struct  BroadcastSystem_t594396148  : public MonoBehaviour_t3962482529
{
public:
	// System.Net.Sockets.UdpClient NetwrokSystem.BroadcastSystem::m_Client
	UdpClient_t967282006 * ___m_Client_4;
	// System.Collections.IEnumerator NetwrokSystem.BroadcastSystem::SendBroadcastTask
	RuntimeObject* ___SendBroadcastTask_5;
	// System.AsyncCallback NetwrokSystem.BroadcastSystem::OnReceiveCallback
	AsyncCallback_t3962456242 * ___OnReceiveCallback_6;

public:
	inline static int32_t get_offset_of_m_Client_4() { return static_cast<int32_t>(offsetof(BroadcastSystem_t594396148, ___m_Client_4)); }
	inline UdpClient_t967282006 * get_m_Client_4() const { return ___m_Client_4; }
	inline UdpClient_t967282006 ** get_address_of_m_Client_4() { return &___m_Client_4; }
	inline void set_m_Client_4(UdpClient_t967282006 * value)
	{
		___m_Client_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Client_4), value);
	}

	inline static int32_t get_offset_of_SendBroadcastTask_5() { return static_cast<int32_t>(offsetof(BroadcastSystem_t594396148, ___SendBroadcastTask_5)); }
	inline RuntimeObject* get_SendBroadcastTask_5() const { return ___SendBroadcastTask_5; }
	inline RuntimeObject** get_address_of_SendBroadcastTask_5() { return &___SendBroadcastTask_5; }
	inline void set_SendBroadcastTask_5(RuntimeObject* value)
	{
		___SendBroadcastTask_5 = value;
		Il2CppCodeGenWriteBarrier((&___SendBroadcastTask_5), value);
	}

	inline static int32_t get_offset_of_OnReceiveCallback_6() { return static_cast<int32_t>(offsetof(BroadcastSystem_t594396148, ___OnReceiveCallback_6)); }
	inline AsyncCallback_t3962456242 * get_OnReceiveCallback_6() const { return ___OnReceiveCallback_6; }
	inline AsyncCallback_t3962456242 ** get_address_of_OnReceiveCallback_6() { return &___OnReceiveCallback_6; }
	inline void set_OnReceiveCallback_6(AsyncCallback_t3962456242 * value)
	{
		___OnReceiveCallback_6 = value;
		Il2CppCodeGenWriteBarrier((&___OnReceiveCallback_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BROADCASTSYSTEM_T594396148_H
#ifndef CLIENTSYSTEM_T4235447217_H
#define CLIENTSYSTEM_T4235447217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetwrokSystem.ClientSystem
struct  ClientSystem_t4235447217  : public MonoBehaviour_t3962482529
{
public:
	// System.Net.Sockets.TcpClient NetwrokSystem.ClientSystem::m_Client
	TcpClient_t822906377 * ___m_Client_4;
	// System.Net.Sockets.NetworkStream NetwrokSystem.ClientSystem::m_Stream
	NetworkStream_t4071955934 * ___m_Stream_5;
	// System.Byte[] NetwrokSystem.ClientSystem::m_Buffer
	ByteU5BU5D_t4116647657* ___m_Buffer_6;
	// System.AsyncCallback NetwrokSystem.ClientSystem::OnConnectCallback
	AsyncCallback_t3962456242 * ___OnConnectCallback_7;
	// System.AsyncCallback NetwrokSystem.ClientSystem::OnReadCallback
	AsyncCallback_t3962456242 * ___OnReadCallback_8;
	// System.AsyncCallback NetwrokSystem.ClientSystem::OnWriteCallback
	AsyncCallback_t3962456242 * ___OnWriteCallback_9;

public:
	inline static int32_t get_offset_of_m_Client_4() { return static_cast<int32_t>(offsetof(ClientSystem_t4235447217, ___m_Client_4)); }
	inline TcpClient_t822906377 * get_m_Client_4() const { return ___m_Client_4; }
	inline TcpClient_t822906377 ** get_address_of_m_Client_4() { return &___m_Client_4; }
	inline void set_m_Client_4(TcpClient_t822906377 * value)
	{
		___m_Client_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Client_4), value);
	}

	inline static int32_t get_offset_of_m_Stream_5() { return static_cast<int32_t>(offsetof(ClientSystem_t4235447217, ___m_Stream_5)); }
	inline NetworkStream_t4071955934 * get_m_Stream_5() const { return ___m_Stream_5; }
	inline NetworkStream_t4071955934 ** get_address_of_m_Stream_5() { return &___m_Stream_5; }
	inline void set_m_Stream_5(NetworkStream_t4071955934 * value)
	{
		___m_Stream_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stream_5), value);
	}

	inline static int32_t get_offset_of_m_Buffer_6() { return static_cast<int32_t>(offsetof(ClientSystem_t4235447217, ___m_Buffer_6)); }
	inline ByteU5BU5D_t4116647657* get_m_Buffer_6() const { return ___m_Buffer_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_Buffer_6() { return &___m_Buffer_6; }
	inline void set_m_Buffer_6(ByteU5BU5D_t4116647657* value)
	{
		___m_Buffer_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Buffer_6), value);
	}

	inline static int32_t get_offset_of_OnConnectCallback_7() { return static_cast<int32_t>(offsetof(ClientSystem_t4235447217, ___OnConnectCallback_7)); }
	inline AsyncCallback_t3962456242 * get_OnConnectCallback_7() const { return ___OnConnectCallback_7; }
	inline AsyncCallback_t3962456242 ** get_address_of_OnConnectCallback_7() { return &___OnConnectCallback_7; }
	inline void set_OnConnectCallback_7(AsyncCallback_t3962456242 * value)
	{
		___OnConnectCallback_7 = value;
		Il2CppCodeGenWriteBarrier((&___OnConnectCallback_7), value);
	}

	inline static int32_t get_offset_of_OnReadCallback_8() { return static_cast<int32_t>(offsetof(ClientSystem_t4235447217, ___OnReadCallback_8)); }
	inline AsyncCallback_t3962456242 * get_OnReadCallback_8() const { return ___OnReadCallback_8; }
	inline AsyncCallback_t3962456242 ** get_address_of_OnReadCallback_8() { return &___OnReadCallback_8; }
	inline void set_OnReadCallback_8(AsyncCallback_t3962456242 * value)
	{
		___OnReadCallback_8 = value;
		Il2CppCodeGenWriteBarrier((&___OnReadCallback_8), value);
	}

	inline static int32_t get_offset_of_OnWriteCallback_9() { return static_cast<int32_t>(offsetof(ClientSystem_t4235447217, ___OnWriteCallback_9)); }
	inline AsyncCallback_t3962456242 * get_OnWriteCallback_9() const { return ___OnWriteCallback_9; }
	inline AsyncCallback_t3962456242 ** get_address_of_OnWriteCallback_9() { return &___OnWriteCallback_9; }
	inline void set_OnWriteCallback_9(AsyncCallback_t3962456242 * value)
	{
		___OnWriteCallback_9 = value;
		Il2CppCodeGenWriteBarrier((&___OnWriteCallback_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTSYSTEM_T4235447217_H
#ifndef SERVERSYSTEM_T969793282_H
#define SERVERSYSTEM_T969793282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetwrokSystem.ServerSystem
struct  ServerSystem_t969793282  : public MonoBehaviour_t3962482529
{
public:
	// System.Net.Sockets.TcpListener NetwrokSystem.ServerSystem::m_Listener
	TcpListener_t3499576757 * ___m_Listener_4;
	// System.Net.Sockets.TcpClient NetwrokSystem.ServerSystem::m_Client
	TcpClient_t822906377 * ___m_Client_5;
	// System.Net.Sockets.NetworkStream NetwrokSystem.ServerSystem::m_Stream
	NetworkStream_t4071955934 * ___m_Stream_6;
	// System.Byte[] NetwrokSystem.ServerSystem::m_Buffer
	ByteU5BU5D_t4116647657* ___m_Buffer_7;
	// System.AsyncCallback NetwrokSystem.ServerSystem::OnAcceptCallback
	AsyncCallback_t3962456242 * ___OnAcceptCallback_8;
	// System.AsyncCallback NetwrokSystem.ServerSystem::OnReadCallback
	AsyncCallback_t3962456242 * ___OnReadCallback_9;
	// System.AsyncCallback NetwrokSystem.ServerSystem::OnWriteCallback
	AsyncCallback_t3962456242 * ___OnWriteCallback_10;

public:
	inline static int32_t get_offset_of_m_Listener_4() { return static_cast<int32_t>(offsetof(ServerSystem_t969793282, ___m_Listener_4)); }
	inline TcpListener_t3499576757 * get_m_Listener_4() const { return ___m_Listener_4; }
	inline TcpListener_t3499576757 ** get_address_of_m_Listener_4() { return &___m_Listener_4; }
	inline void set_m_Listener_4(TcpListener_t3499576757 * value)
	{
		___m_Listener_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Listener_4), value);
	}

	inline static int32_t get_offset_of_m_Client_5() { return static_cast<int32_t>(offsetof(ServerSystem_t969793282, ___m_Client_5)); }
	inline TcpClient_t822906377 * get_m_Client_5() const { return ___m_Client_5; }
	inline TcpClient_t822906377 ** get_address_of_m_Client_5() { return &___m_Client_5; }
	inline void set_m_Client_5(TcpClient_t822906377 * value)
	{
		___m_Client_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Client_5), value);
	}

	inline static int32_t get_offset_of_m_Stream_6() { return static_cast<int32_t>(offsetof(ServerSystem_t969793282, ___m_Stream_6)); }
	inline NetworkStream_t4071955934 * get_m_Stream_6() const { return ___m_Stream_6; }
	inline NetworkStream_t4071955934 ** get_address_of_m_Stream_6() { return &___m_Stream_6; }
	inline void set_m_Stream_6(NetworkStream_t4071955934 * value)
	{
		___m_Stream_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Stream_6), value);
	}

	inline static int32_t get_offset_of_m_Buffer_7() { return static_cast<int32_t>(offsetof(ServerSystem_t969793282, ___m_Buffer_7)); }
	inline ByteU5BU5D_t4116647657* get_m_Buffer_7() const { return ___m_Buffer_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_Buffer_7() { return &___m_Buffer_7; }
	inline void set_m_Buffer_7(ByteU5BU5D_t4116647657* value)
	{
		___m_Buffer_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Buffer_7), value);
	}

	inline static int32_t get_offset_of_OnAcceptCallback_8() { return static_cast<int32_t>(offsetof(ServerSystem_t969793282, ___OnAcceptCallback_8)); }
	inline AsyncCallback_t3962456242 * get_OnAcceptCallback_8() const { return ___OnAcceptCallback_8; }
	inline AsyncCallback_t3962456242 ** get_address_of_OnAcceptCallback_8() { return &___OnAcceptCallback_8; }
	inline void set_OnAcceptCallback_8(AsyncCallback_t3962456242 * value)
	{
		___OnAcceptCallback_8 = value;
		Il2CppCodeGenWriteBarrier((&___OnAcceptCallback_8), value);
	}

	inline static int32_t get_offset_of_OnReadCallback_9() { return static_cast<int32_t>(offsetof(ServerSystem_t969793282, ___OnReadCallback_9)); }
	inline AsyncCallback_t3962456242 * get_OnReadCallback_9() const { return ___OnReadCallback_9; }
	inline AsyncCallback_t3962456242 ** get_address_of_OnReadCallback_9() { return &___OnReadCallback_9; }
	inline void set_OnReadCallback_9(AsyncCallback_t3962456242 * value)
	{
		___OnReadCallback_9 = value;
		Il2CppCodeGenWriteBarrier((&___OnReadCallback_9), value);
	}

	inline static int32_t get_offset_of_OnWriteCallback_10() { return static_cast<int32_t>(offsetof(ServerSystem_t969793282, ___OnWriteCallback_10)); }
	inline AsyncCallback_t3962456242 * get_OnWriteCallback_10() const { return ___OnWriteCallback_10; }
	inline AsyncCallback_t3962456242 ** get_address_of_OnWriteCallback_10() { return &___OnWriteCallback_10; }
	inline void set_OnWriteCallback_10(AsyncCallback_t3962456242 * value)
	{
		___OnWriteCallback_10 = value;
		Il2CppCodeGenWriteBarrier((&___OnWriteCallback_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERSYSTEM_T969793282_H
#ifndef BROADCASTCLIENTMANAGER_T2119499817_H
#define BROADCASTCLIENTMANAGER_T2119499817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetwrokSystem.BroadcastClientManager
struct  BroadcastClientManager_t2119499817  : public BroadcastSystem_t594396148
{
public:
	// NetwrokSystem.ClientManager NetwrokSystem.BroadcastClientManager::clientManager
	ClientManager_t1383746268 * ___clientManager_7;

public:
	inline static int32_t get_offset_of_clientManager_7() { return static_cast<int32_t>(offsetof(BroadcastClientManager_t2119499817, ___clientManager_7)); }
	inline ClientManager_t1383746268 * get_clientManager_7() const { return ___clientManager_7; }
	inline ClientManager_t1383746268 ** get_address_of_clientManager_7() { return &___clientManager_7; }
	inline void set_clientManager_7(ClientManager_t1383746268 * value)
	{
		___clientManager_7 = value;
		Il2CppCodeGenWriteBarrier((&___clientManager_7), value);
	}
};

struct BroadcastClientManager_t2119499817_StaticFields
{
public:
	// NetwrokSystem.BroadcastClientManager NetwrokSystem.BroadcastClientManager::singleton
	BroadcastClientManager_t2119499817 * ___singleton_8;

public:
	inline static int32_t get_offset_of_singleton_8() { return static_cast<int32_t>(offsetof(BroadcastClientManager_t2119499817_StaticFields, ___singleton_8)); }
	inline BroadcastClientManager_t2119499817 * get_singleton_8() const { return ___singleton_8; }
	inline BroadcastClientManager_t2119499817 ** get_address_of_singleton_8() { return &___singleton_8; }
	inline void set_singleton_8(BroadcastClientManager_t2119499817 * value)
	{
		___singleton_8 = value;
		Il2CppCodeGenWriteBarrier((&___singleton_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BROADCASTCLIENTMANAGER_T2119499817_H
#ifndef BROADCASTSERVERMANAGER_T3015442646_H
#define BROADCASTSERVERMANAGER_T3015442646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetwrokSystem.BroadcastServerManager
struct  BroadcastServerManager_t3015442646  : public BroadcastSystem_t594396148
{
public:
	// NetwrokSystem.ServerManager NetwrokSystem.BroadcastServerManager::serverManager
	ServerManager_t1778859134 * ___serverManager_7;

public:
	inline static int32_t get_offset_of_serverManager_7() { return static_cast<int32_t>(offsetof(BroadcastServerManager_t3015442646, ___serverManager_7)); }
	inline ServerManager_t1778859134 * get_serverManager_7() const { return ___serverManager_7; }
	inline ServerManager_t1778859134 ** get_address_of_serverManager_7() { return &___serverManager_7; }
	inline void set_serverManager_7(ServerManager_t1778859134 * value)
	{
		___serverManager_7 = value;
		Il2CppCodeGenWriteBarrier((&___serverManager_7), value);
	}
};

struct BroadcastServerManager_t3015442646_StaticFields
{
public:
	// NetwrokSystem.BroadcastServerManager NetwrokSystem.BroadcastServerManager::singleton
	BroadcastServerManager_t3015442646 * ___singleton_8;

public:
	inline static int32_t get_offset_of_singleton_8() { return static_cast<int32_t>(offsetof(BroadcastServerManager_t3015442646_StaticFields, ___singleton_8)); }
	inline BroadcastServerManager_t3015442646 * get_singleton_8() const { return ___singleton_8; }
	inline BroadcastServerManager_t3015442646 ** get_address_of_singleton_8() { return &___singleton_8; }
	inline void set_singleton_8(BroadcastServerManager_t3015442646 * value)
	{
		___singleton_8 = value;
		Il2CppCodeGenWriteBarrier((&___singleton_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BROADCASTSERVERMANAGER_T3015442646_H
#ifndef CLIENTMANAGER_T1383746268_H
#define CLIENTMANAGER_T1383746268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetwrokSystem.ClientManager
struct  ClientManager_t1383746268  : public ClientSystem_t4235447217
{
public:
	// System.Int32 NetwrokSystem.ClientManager::castPort
	int32_t ___castPort_10;

public:
	inline static int32_t get_offset_of_castPort_10() { return static_cast<int32_t>(offsetof(ClientManager_t1383746268, ___castPort_10)); }
	inline int32_t get_castPort_10() const { return ___castPort_10; }
	inline int32_t* get_address_of_castPort_10() { return &___castPort_10; }
	inline void set_castPort_10(int32_t value)
	{
		___castPort_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTMANAGER_T1383746268_H
#ifndef SERVERMANAGER_T1778859134_H
#define SERVERMANAGER_T1778859134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetwrokSystem.ServerManager
struct  ServerManager_t1778859134  : public ServerSystem_t969793282
{
public:
	// System.Int32 NetwrokSystem.ServerManager::tcpPort
	int32_t ___tcpPort_11;
	// System.Int32 NetwrokSystem.ServerManager::castPort
	int32_t ___castPort_12;

public:
	inline static int32_t get_offset_of_tcpPort_11() { return static_cast<int32_t>(offsetof(ServerManager_t1778859134, ___tcpPort_11)); }
	inline int32_t get_tcpPort_11() const { return ___tcpPort_11; }
	inline int32_t* get_address_of_tcpPort_11() { return &___tcpPort_11; }
	inline void set_tcpPort_11(int32_t value)
	{
		___tcpPort_11 = value;
	}

	inline static int32_t get_offset_of_castPort_12() { return static_cast<int32_t>(offsetof(ServerManager_t1778859134, ___castPort_12)); }
	inline int32_t get_castPort_12() const { return ___castPort_12; }
	inline int32_t* get_address_of_castPort_12() { return &___castPort_12; }
	inline void set_castPort_12(int32_t value)
	{
		___castPort_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERMANAGER_T1778859134_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);

// System.Void NetwrokSystem.BroadcastSystem::Awake()
extern "C" IL2CPP_METHOD_ATTR void BroadcastSystem_Awake_m168565213 (BroadcastSystem_t594396148 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<NetwrokSystem.ClientManager>()
inline ClientManager_t1383746268 * Component_GetComponent_TisClientManager_t1383746268_m641185673 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  ClientManager_t1383746268 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void NetwrokSystem.BroadcastSystem::BeginListen(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void BroadcastSystem_BeginListen_m2866200372 (BroadcastSystem_t594396148 * __this, int32_t ___port0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void NetwrokSystem.BroadcastSystem::OnGetBroadcast(System.Net.IPEndPoint,System.String)
extern "C" IL2CPP_METHOD_ATTR void BroadcastSystem_OnGetBroadcast_m3225158178 (BroadcastSystem_t594396148 * __this, IPEndPoint_t3791887218 * ___endPoint0, String_t* ___msg1, const RuntimeMethod* method);
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
extern "C" IL2CPP_METHOD_ATTR IPAddress_t241777590 * IPEndPoint_get_Address_m834732349 (IPEndPoint_t3791887218 * __this, const RuntimeMethod* method);
// System.Int32 System.Net.IPEndPoint::get_Port()
extern "C" IL2CPP_METHOD_ATTR int32_t IPEndPoint_get_Port_m2842923226 (IPEndPoint_t3791887218 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Int32_Parse_m1033611559 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void NetwrokSystem.ClientManager::Connect(System.Net.IPAddress,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ClientManager_Connect_m1312242759 (ClientManager_t1383746268 * __this, IPAddress_t241777590 * ___address0, int32_t ___port1, const RuntimeMethod* method);
// System.Void NetwrokSystem.BroadcastSystem::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BroadcastSystem__ctor_m2058045709 (BroadcastSystem_t594396148 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<NetwrokSystem.ServerManager>()
inline ServerManager_t1778859134 * Component_GetComponent_TisServerManager_t1778859134_m133596795 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  ServerManager_t1778859134 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method);
// System.Void NetwrokSystem.BroadcastSystem::BeginSend(System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR void BroadcastSystem_BeginSend_m4057981461 (BroadcastSystem_t594396148 * __this, int32_t ___port0, String_t* ___msg1, const RuntimeMethod* method);
// System.Void NetwrokSystem.BroadcastSystem::StopSend()
extern "C" IL2CPP_METHOD_ATTR void BroadcastSystem_StopSend_m3712175853 (BroadcastSystem_t594396148 * __this, const RuntimeMethod* method);
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AsyncCallback__ctor_m530647953 (AsyncCallback_t3962456242 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.IEnumerator NetwrokSystem.BroadcastSystem::SendBroadcast(System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BroadcastSystem_SendBroadcast_m1727385814 (BroadcastSystem_t594396148 * __this, int32_t ___port0, String_t* ___msg1, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void NetwrokSystem.BroadcastSystem/<SendBroadcast>d__5::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CSendBroadcastU3Ed__5__ctor_m3694100279 (U3CSendBroadcastU3Ed__5_t4209478386 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m615723318 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.UdpClient::Close()
extern "C" IL2CPP_METHOD_ATTR void UdpClient_Close_m4217442468 (UdpClient_t967282006 * __this, const RuntimeMethod* method);
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m2833647099 (IPEndPoint_t3791887218 * __this, IPAddress_t241777590 * p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.UdpClient::.ctor(System.Net.IPEndPoint)
extern "C" IL2CPP_METHOD_ATTR void UdpClient__ctor_m536015148 (UdpClient_t967282006 * __this, IPEndPoint_t3791887218 * p0, const RuntimeMethod* method);
// System.IAsyncResult System.Net.Sockets.UdpClient::BeginReceive(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UdpClient_BeginReceive_m3486162304 (UdpClient_t967282006 * __this, AsyncCallback_t3962456242 * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Console::WriteLine(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Console_WriteLine_m68308674 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Byte[] System.Net.Sockets.UdpClient::EndReceive(System.IAsyncResult,System.Net.IPEndPoint&)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* UdpClient_EndReceive_m765429616 (UdpClient_t967282006 * __this, RuntimeObject* p0, IPEndPoint_t3791887218 ** p1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * Encoding_get_UTF8_m1008486739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.UdpClient::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UdpClient__ctor_m4119829709 (UdpClient_t967282006 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.UdpClient::set_EnableBroadcast(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UdpClient_set_EnableBroadcast_m1078251458 (UdpClient_t967282006 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.UdpClient::Connect(System.Net.IPEndPoint)
extern "C" IL2CPP_METHOD_ATTR void UdpClient_Connect_m2720166117 (UdpClient_t967282006 * __this, IPEndPoint_t3791887218 * p0, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.UdpClient::Send(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t UdpClient_Send_m2761574969 (UdpClient_t967282006 * __this, ByteU5BU5D_t4116647657* p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Void NetwrokSystem.ClientSystem::BeginConnect(System.Net.IPAddress,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ClientSystem_BeginConnect_m861483464 (ClientSystem_t4235447217 * __this, IPAddress_t241777590 * ___address0, int32_t ___port1, const RuntimeMethod* method);
// System.Void NetwrokSystem.ClientSystem::Send(System.String)
extern "C" IL2CPP_METHOD_ATTR void ClientSystem_Send_m1593278515 (ClientSystem_t4235447217 * __this, String_t* ___msg0, const RuntimeMethod* method);
// System.Void NetwrokSystem.ClientSystem::OnGetMessage(System.String)
extern "C" IL2CPP_METHOD_ATTR void ClientSystem_OnGetMessage_m3868676309 (ClientSystem_t4235447217 * __this, String_t* ___msg0, const RuntimeMethod* method);
// System.Void NetwrokSystem.ClientSystem::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ClientSystem__ctor_m2560080983 (ClientSystem_t4235447217 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TcpClient__ctor_m1992471411 (TcpClient_t822906377 * __this, const RuntimeMethod* method);
// System.IAsyncResult System.Net.Sockets.TcpClient::BeginConnect(System.Net.IPAddress,System.Int32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TcpClient_BeginConnect_m3532703723 (TcpClient_t822906377 * __this, IPAddress_t241777590 * p0, int32_t p1, AsyncCallback_t3962456242 * p2, RuntimeObject * p3, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::Close()
extern "C" IL2CPP_METHOD_ATTR void TcpClient_Close_m3817529922 (TcpClient_t822906377 * __this, const RuntimeMethod* method);
// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::get_Client()
extern "C" IL2CPP_METHOD_ATTR Socket_t1119025450 * TcpClient_get_Client_m139203108 (TcpClient_t822906377 * __this, const RuntimeMethod* method);
// System.Net.EndPoint System.Net.Sockets.Socket::get_RemoteEndPoint()
extern "C" IL2CPP_METHOD_ATTR EndPoint_t982345378 * Socket_get_RemoteEndPoint_m3755127488 (Socket_t1119025450 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
extern "C" IL2CPP_METHOD_ATTR NetworkStream_t4071955934 * TcpClient_GetStream_m960745678 (TcpClient_t822906377 * __this, const RuntimeMethod* method);
// System.Void NetwrokSystem.ClientSystem::DisConnect()
extern "C" IL2CPP_METHOD_ATTR void ClientSystem_DisConnect_m3528052903 (ClientSystem_t4235447217 * __this, const RuntimeMethod* method);
// System.Void NetwrokSystem.ServerSystem::BeginAccept(System.Net.IPAddress,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ServerSystem_BeginAccept_m2229529175 (ServerSystem_t969793282 * __this, IPAddress_t241777590 * ___address0, int32_t ___port1, const RuntimeMethod* method);
// System.Void NetwrokSystem.ServerSystem::OnConnectClient(System.Net.Sockets.TcpClient)
extern "C" IL2CPP_METHOD_ATTR void ServerSystem_OnConnectClient_m2241364360 (ServerSystem_t969793282 * __this, TcpClient_t822906377 * ___client0, const RuntimeMethod* method);
// System.Void NetwrokSystem.BroadcastServerManager::StopCast()
extern "C" IL2CPP_METHOD_ATTR void BroadcastServerManager_StopCast_m1373655198 (BroadcastServerManager_t3015442646 * __this, const RuntimeMethod* method);
// System.Void NetwrokSystem.ServerSystem::OnGetMessage(System.String)
extern "C" IL2CPP_METHOD_ATTR void ServerSystem_OnGetMessage_m1137826446 (ServerSystem_t969793282 * __this, String_t* ___msg0, const RuntimeMethod* method);
// System.Void NetwrokSystem.ServerSystem::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ServerSystem__ctor_m197385444 (ServerSystem_t969793282 * __this, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpListener::.ctor(System.Net.IPAddress,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TcpListener__ctor_m2307803501 (TcpListener_t3499576757 * __this, IPAddress_t241777590 * p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpListener::Start()
extern "C" IL2CPP_METHOD_ATTR void TcpListener_Start_m1510900909 (TcpListener_t3499576757 * __this, const RuntimeMethod* method);
// System.IAsyncResult System.Net.Sockets.TcpListener::BeginAcceptTcpClient(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TcpListener_BeginAcceptTcpClient_m3629060945 (TcpListener_t3499576757 * __this, AsyncCallback_t3962456242 * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpListener::Stop()
extern "C" IL2CPP_METHOD_ATTR void TcpListener_Stop_m996961764 (TcpListener_t3499576757 * __this, const RuntimeMethod* method);
// System.Net.Sockets.TcpClient System.Net.Sockets.TcpListener::EndAcceptTcpClient(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR TcpClient_t822906377 * TcpListener_EndAcceptTcpClient_m2756409428 (TcpListener_t3499576757 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void NetwrokSystem.ServerSystem::DisConnect()
extern "C" IL2CPP_METHOD_ATTR void ServerSystem_DisConnect_m96803545 (ServerSystem_t969793282 * __this, const RuntimeMethod* method);
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
// System.Void NetwrokSystem.BroadcastClientManager::Awake()
extern "C" IL2CPP_METHOD_ATTR void BroadcastClientManager_Awake_m3377825614 (BroadcastClientManager_t2119499817 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BroadcastClientManager_Awake_m3377825614_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// singleton = this;
		((BroadcastClientManager_t2119499817_StaticFields*)il2cpp_codegen_static_fields_for(BroadcastClientManager_t2119499817_il2cpp_TypeInfo_var))->set_singleton_8(__this);
		// base.Awake();
		BroadcastSystem_Awake_m168565213(__this, /*hidden argument*/NULL);
		// if(clientManager == null)
		ClientManager_t1383746268 * L_0 = __this->get_clientManager_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// clientManager = GetComponent<ClientManager>();
		ClientManager_t1383746268 * L_2 = Component_GetComponent_TisClientManager_t1383746268_m641185673(__this, /*hidden argument*/Component_GetComponent_TisClientManager_t1383746268_m641185673_RuntimeMethod_var);
		__this->set_clientManager_7(L_2);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void NetwrokSystem.BroadcastClientManager::StartListen()
extern "C" IL2CPP_METHOD_ATTR void BroadcastClientManager_StartListen_m1485992941 (BroadcastClientManager_t2119499817 * __this, const RuntimeMethod* method)
{
	{
		// BeginListen(clientManager.castPort);
		ClientManager_t1383746268 * L_0 = __this->get_clientManager_7();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_castPort_10();
		BroadcastSystem_BeginListen_m2866200372(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NetwrokSystem.BroadcastClientManager::OnGetBroadcast(System.Net.IPEndPoint,System.String)
extern "C" IL2CPP_METHOD_ATTR void BroadcastClientManager_OnGetBroadcast_m1753816323 (BroadcastClientManager_t2119499817 * __this, IPEndPoint_t3791887218 * ___endPoint0, String_t* ___msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BroadcastClientManager_OnGetBroadcast_m1753816323_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnGetBroadcast");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3729972845, /*hidden argument*/NULL);
		// base.OnGetBroadcast(endPoint, msg);
		IPEndPoint_t3791887218 * L_0 = ___endPoint0;
		String_t* L_1 = ___msg1;
		BroadcastSystem_OnGetBroadcast_m3225158178(__this, L_0, L_1, /*hidden argument*/NULL);
		// Debug.Log(endPoint.Address + " : " + endPoint.Port + " : " + msg);
		ObjectU5BU5D_t2843939325* L_2 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t2843939325* L_3 = L_2;
		IPEndPoint_t3791887218 * L_4 = ___endPoint0;
		NullCheck(L_4);
		IPAddress_t241777590 * L_5 = IPEndPoint_get_Address_m834732349(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral3787497674);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3787497674);
		ObjectU5BU5D_t2843939325* L_7 = L_6;
		IPEndPoint_t3791887218 * L_8 = ___endPoint0;
		NullCheck(L_8);
		int32_t L_9 = IPEndPoint_get_Port_m2842923226(L_8, /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_11);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_7;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral3787497674);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral3787497674);
		ObjectU5BU5D_t2843939325* L_13 = L_12;
		String_t* L_14 = ___msg1;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_14);
		String_t* L_15 = String_Concat_m2971454694(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		// clientManager.Connect(endPoint.Address, int.Parse(msg));
		ClientManager_t1383746268 * L_16 = __this->get_clientManager_7();
		IPEndPoint_t3791887218 * L_17 = ___endPoint0;
		NullCheck(L_17);
		IPAddress_t241777590 * L_18 = IPEndPoint_get_Address_m834732349(L_17, /*hidden argument*/NULL);
		String_t* L_19 = ___msg1;
		int32_t L_20 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		NullCheck(L_16);
		ClientManager_Connect_m1312242759(L_16, L_18, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NetwrokSystem.BroadcastClientManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BroadcastClientManager__ctor_m1862755073 (BroadcastClientManager_t2119499817 * __this, const RuntimeMethod* method)
{
	{
		BroadcastSystem__ctor_m2058045709(__this, /*hidden argument*/NULL);
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
// System.Void NetwrokSystem.BroadcastServerManager::Awake()
extern "C" IL2CPP_METHOD_ATTR void BroadcastServerManager_Awake_m1632870660 (BroadcastServerManager_t3015442646 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BroadcastServerManager_Awake_m1632870660_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// singleton = this;
		((BroadcastServerManager_t3015442646_StaticFields*)il2cpp_codegen_static_fields_for(BroadcastServerManager_t3015442646_il2cpp_TypeInfo_var))->set_singleton_8(__this);
		// base.Awake();
		BroadcastSystem_Awake_m168565213(__this, /*hidden argument*/NULL);
		// if (serverManager == null)
		ServerManager_t1778859134 * L_0 = __this->get_serverManager_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// serverManager = GetComponent<ServerManager>();
		ServerManager_t1778859134 * L_2 = Component_GetComponent_TisServerManager_t1778859134_m133596795(__this, /*hidden argument*/Component_GetComponent_TisServerManager_t1778859134_m133596795_RuntimeMethod_var);
		__this->set_serverManager_7(L_2);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void NetwrokSystem.BroadcastServerManager::StartCast()
extern "C" IL2CPP_METHOD_ATTR void BroadcastServerManager_StartCast_m3492175354 (BroadcastServerManager_t3015442646 * __this, const RuntimeMethod* method)
{
	{
		// BeginSend(serverManager.castPort, serverManager.tcpPort.ToString());
		ServerManager_t1778859134 * L_0 = __this->get_serverManager_7();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_castPort_12();
		ServerManager_t1778859134 * L_2 = __this->get_serverManager_7();
		NullCheck(L_2);
		int32_t* L_3 = L_2->get_address_of_tcpPort_11();
		String_t* L_4 = Int32_ToString_m141394615((int32_t*)L_3, /*hidden argument*/NULL);
		BroadcastSystem_BeginSend_m4057981461(__this, L_1, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NetwrokSystem.BroadcastServerManager::StopCast()
extern "C" IL2CPP_METHOD_ATTR void BroadcastServerManager_StopCast_m1373655198 (BroadcastServerManager_t3015442646 * __this, const RuntimeMethod* method)
{
	{
		// StopSend();
		BroadcastSystem_StopSend_m3712175853(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NetwrokSystem.BroadcastServerManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BroadcastServerManager__ctor_m1745548517 (BroadcastServerManager_t3015442646 * __this, const RuntimeMethod* method)
{
	{
		BroadcastSystem__ctor_m2058045709(__this, /*hidden argument*/NULL);
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
// System.Void NetwrokSystem.BroadcastSystem::Awake()
extern "C" IL2CPP_METHOD_ATTR void BroadcastSystem_Awake_m168565213 (BroadcastSystem_t594396148 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BroadcastSystem_Awake_m168565213_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnReceiveCallback = new AsyncCallback(OnReceive);
		intptr_t L_0 = (intptr_t)BroadcastSystem_OnReceive_m1121289711_RuntimeMethod_var;
		AsyncCallback_t3962456242 * L_1 = (AsyncCallback_t3962456242 *)il2cpp_codegen_object_new(AsyncCallback_t3962456242_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m530647953(L_1, __this, L_0, /*hidden argument*/NULL);
		__this->set_OnReceiveCallback_6(L_1);
		// }
		return;
	}
}
// System.Void NetwrokSystem.BroadcastSystem::BeginSend(System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR void BroadcastSystem_BeginSend_m4057981461 (BroadcastSystem_t594396148 * __this, int32_t ___port0, String_t* ___msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BroadcastSystem_BeginSend_m4057981461_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("BeginSend : " + port + ":" + msg);
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral2475682504);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2475682504);
		ObjectU5BU5D_t2843939325* L_2 = L_1;
		int32_t L_3 = ___port0;
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral3452614550);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3452614550);
		ObjectU5BU5D_t2843939325* L_7 = L_6;
		String_t* L_8 = ___msg1;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_8);
		String_t* L_9 = String_Concat_m2971454694(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		// SendBroadcastTask = SendBroadcast(port, msg);
		int32_t L_10 = ___port0;
		String_t* L_11 = ___msg1;
		RuntimeObject* L_12 = BroadcastSystem_SendBroadcast_m1727385814(__this, L_10, L_11, /*hidden argument*/NULL);
		__this->set_SendBroadcastTask_5(L_12);
		// StartCoroutine(SendBroadcastTask);
		RuntimeObject* L_13 = __this->get_SendBroadcastTask_5();
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator NetwrokSystem.BroadcastSystem::SendBroadcast(System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* BroadcastSystem_SendBroadcast_m1727385814 (BroadcastSystem_t594396148 * __this, int32_t ___port0, String_t* ___msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BroadcastSystem_SendBroadcast_m1727385814_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSendBroadcastU3Ed__5_t4209478386 * L_0 = (U3CSendBroadcastU3Ed__5_t4209478386 *)il2cpp_codegen_object_new(U3CSendBroadcastU3Ed__5_t4209478386_il2cpp_TypeInfo_var);
		U3CSendBroadcastU3Ed__5__ctor_m3694100279(L_0, 0, /*hidden argument*/NULL);
		U3CSendBroadcastU3Ed__5_t4209478386 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CSendBroadcastU3Ed__5_t4209478386 * L_2 = L_1;
		int32_t L_3 = ___port0;
		NullCheck(L_2);
		L_2->set_port_4(L_3);
		U3CSendBroadcastU3Ed__5_t4209478386 * L_4 = L_2;
		String_t* L_5 = ___msg1;
		NullCheck(L_4);
		L_4->set_msg_2(L_5);
		return L_4;
	}
}
// System.Void NetwrokSystem.BroadcastSystem::StopSend()
extern "C" IL2CPP_METHOD_ATTR void BroadcastSystem_StopSend_m3712175853 (BroadcastSystem_t594396148 * __this, const RuntimeMethod* method)
{
	{
		// StopCoroutine(SendBroadcastTask);
		RuntimeObject* L_0 = __this->get_SendBroadcastTask_5();
		MonoBehaviour_StopCoroutine_m615723318(__this, L_0, /*hidden argument*/NULL);
		// m_Client.Close();
		UdpClient_t967282006 * L_1 = __this->get_m_Client_4();
		NullCheck(L_1);
		UdpClient_Close_m4217442468(L_1, /*hidden argument*/NULL);
		// m_Client = null;
		__this->set_m_Client_4((UdpClient_t967282006 *)NULL);
		// }
		return;
	}
}
// System.Void NetwrokSystem.BroadcastSystem::BeginListen(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void BroadcastSystem_BeginListen_m2866200372 (BroadcastSystem_t594396148 * __this, int32_t ___port0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BroadcastSystem_BeginListen_m2866200372_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UdpClient_t967282006 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		// Debug.Log("BeginListen");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2557876128, /*hidden argument*/NULL);
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		// UdpClient client = new UdpClient(new IPEndPoint(IPAddress.Any, port));
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t241777590_il2cpp_TypeInfo_var);
		IPAddress_t241777590 * L_0 = ((IPAddress_t241777590_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t241777590_il2cpp_TypeInfo_var))->get_Any_0();
		int32_t L_1 = ___port0;
		IPEndPoint_t3791887218 * L_2 = (IPEndPoint_t3791887218 *)il2cpp_codegen_object_new(IPEndPoint_t3791887218_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m2833647099(L_2, L_0, L_1, /*hidden argument*/NULL);
		UdpClient_t967282006 * L_3 = (UdpClient_t967282006 *)il2cpp_codegen_object_new(UdpClient_t967282006_il2cpp_TypeInfo_var);
		UdpClient__ctor_m536015148(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// client.BeginReceive(OnReceiveCallback, client);
		UdpClient_t967282006 * L_4 = V_0;
		AsyncCallback_t3962456242 * L_5 = __this->get_OnReceiveCallback_6();
		UdpClient_t967282006 * L_6 = V_0;
		NullCheck(L_4);
		UdpClient_BeginReceive_m3486162304(L_4, L_5, L_6, /*hidden argument*/NULL);
		// }
		goto IL_0032;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_002b;
		throw e;
	}

CATCH_002b:
	{ // begin catch(System.Exception)
		// catch (Exception ex) { Console.WriteLine(ex); }
		IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
		Console_WriteLine_m68308674(NULL /*static, unused*/, ((Exception_t *)__exception_local), /*hidden argument*/NULL);
		// catch (Exception ex) { Console.WriteLine(ex); }
		goto IL_0032;
	} // end catch (depth: 1)

IL_0032:
	{
		// }
		return;
	}
}
// System.Void NetwrokSystem.BroadcastSystem::OnGetBroadcast(System.Net.IPEndPoint,System.String)
extern "C" IL2CPP_METHOD_ATTR void BroadcastSystem_OnGetBroadcast_m3225158178 (BroadcastSystem_t594396148 * __this, IPEndPoint_t3791887218 * ___endPoint0, String_t* ___msg1, const RuntimeMethod* method)
{
	{
		// protected virtual void OnGetBroadcast(IPEndPoint endPoint, string msg) { }
		return;
	}
}
// System.Void NetwrokSystem.BroadcastSystem::OnReceive(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void BroadcastSystem_OnReceive_m1121289711 (BroadcastSystem_t594396148 * __this, RuntimeObject* ___ar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BroadcastSystem_OnReceive_m1121289711_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPEndPoint_t3791887218 * V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		// Debug.Log("OnReceiveBroadcast");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral808822055, /*hidden argument*/NULL);
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		// UdpClient client = ar.AsyncState as UdpClient;
		RuntimeObject* L_0 = ___ar0;
		NullCheck(L_0);
		RuntimeObject * L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(2 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_t767004451_il2cpp_TypeInfo_var, L_0);
		// IPEndPoint remoteIP = null;
		V_0 = (IPEndPoint_t3791887218 *)NULL;
		// byte[] buffer = client.EndReceive(ar, ref remoteIP);
		RuntimeObject* L_2 = ___ar0;
		NullCheck(((UdpClient_t967282006 *)IsInstClass((RuntimeObject*)L_1, UdpClient_t967282006_il2cpp_TypeInfo_var)));
		ByteU5BU5D_t4116647657* L_3 = UdpClient_EndReceive_m765429616(((UdpClient_t967282006 *)IsInstClass((RuntimeObject*)L_1, UdpClient_t967282006_il2cpp_TypeInfo_var)), L_2, (IPEndPoint_t3791887218 **)(&V_0), /*hidden argument*/NULL);
		V_1 = L_3;
		// string msg = Encoding.UTF8.GetString(buffer, 0, buffer.Length);
		Encoding_t1523322056 * L_4 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_5 = V_1;
		ByteU5BU5D_t4116647657* L_6 = V_1;
		NullCheck(L_6);
		NullCheck(L_4);
		String_t* L_7 = VirtFuncInvoker3< String_t*, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))));
		V_2 = L_7;
		// Debug.Log(remoteIP.Address + " : " + msg);
		IPEndPoint_t3791887218 * L_8 = V_0;
		NullCheck(L_8);
		IPAddress_t241777590 * L_9 = IPEndPoint_get_Address_m834732349(L_8, /*hidden argument*/NULL);
		String_t* L_10 = V_2;
		String_t* L_11 = String_Concat_m1715369213(NULL /*static, unused*/, L_9, _stringLiteral3787497674, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		// OnGetBroadcast(remoteIP, msg);
		IPEndPoint_t3791887218 * L_12 = V_0;
		String_t* L_13 = V_2;
		VirtActionInvoker2< IPEndPoint_t3791887218 *, String_t* >::Invoke(5 /* System.Void NetwrokSystem.BroadcastSystem::OnGetBroadcast(System.Net.IPEndPoint,System.String) */, __this, L_12, L_13);
		// }
		goto IL_0057;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0050;
		throw e;
	}

CATCH_0050:
	{ // begin catch(System.Exception)
		// catch (Exception ex) { Debug.Log(ex); }
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, ((Exception_t *)__exception_local), /*hidden argument*/NULL);
		// catch (Exception ex) { Debug.Log(ex); }
		goto IL_0057;
	} // end catch (depth: 1)

IL_0057:
	{
		// }
		return;
	}
}
// System.Void NetwrokSystem.BroadcastSystem::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BroadcastSystem__ctor_m2058045709 (BroadcastSystem_t594396148 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void NetwrokSystem.BroadcastSystem/<SendBroadcast>d__5::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CSendBroadcastU3Ed__5__ctor_m3694100279 (U3CSendBroadcastU3Ed__5_t4209478386 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void NetwrokSystem.BroadcastSystem/<SendBroadcast>d__5::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CSendBroadcastU3Ed__5_System_IDisposable_Dispose_m2458568239 (U3CSendBroadcastU3Ed__5_t4209478386 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean NetwrokSystem.BroadcastSystem/<SendBroadcast>d__5::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CSendBroadcastU3Ed__5_MoveNext_m1679860397 (U3CSendBroadcastU3Ed__5_t4209478386 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSendBroadcastU3Ed__5_MoveNext_m1679860397_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	BroadcastSystem_t594396148 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_1 = L_0;
		BroadcastSystem_t594396148 * L_1 = __this->get_U3CU3E4__this_3();
		V_2 = L_1;
		int32_t L_2 = V_1;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00f7;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// byte[] buffer = Encoding.UTF8.GetBytes(msg);
		Encoding_t1523322056 * L_4 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_5 = __this->get_msg_2();
		NullCheck(L_4);
		ByteU5BU5D_t4116647657* L_6 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, L_5);
		__this->set_U3CbufferU3E5__2_5(L_6);
		// m_Client = new UdpClient(port);
		BroadcastSystem_t594396148 * L_7 = V_2;
		int32_t L_8 = __this->get_port_4();
		UdpClient_t967282006 * L_9 = (UdpClient_t967282006 *)il2cpp_codegen_object_new(UdpClient_t967282006_il2cpp_TypeInfo_var);
		UdpClient__ctor_m4119829709(L_9, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->set_m_Client_4(L_9);
	}

IL_0048:
	{
	}

IL_0049:
	try
	{ // begin try (depth: 1)
		// Debug.Log("Send : " + port + ":" + msg);
		ObjectU5BU5D_t2843939325* L_10 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral1880994789);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1880994789);
		ObjectU5BU5D_t2843939325* L_12 = L_11;
		int32_t L_13 = __this->get_port_4();
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
		ObjectU5BU5D_t2843939325* L_16 = L_12;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral3452614550);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3452614550);
		ObjectU5BU5D_t2843939325* L_17 = L_16;
		String_t* L_18 = __this->get_msg_2();
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_18);
		String_t* L_19 = String_Concat_m2971454694(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		// m_Client.EnableBroadcast = true;
		BroadcastSystem_t594396148 * L_20 = V_2;
		NullCheck(L_20);
		UdpClient_t967282006 * L_21 = L_20->get_m_Client_4();
		NullCheck(L_21);
		UdpClient_set_EnableBroadcast_m1078251458(L_21, (bool)1, /*hidden argument*/NULL);
		// m_Client.Connect(new IPEndPoint(IPAddress.Broadcast, port));
		BroadcastSystem_t594396148 * L_22 = V_2;
		NullCheck(L_22);
		UdpClient_t967282006 * L_23 = L_22->get_m_Client_4();
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t241777590_il2cpp_TypeInfo_var);
		IPAddress_t241777590 * L_24 = ((IPAddress_t241777590_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t241777590_il2cpp_TypeInfo_var))->get_Broadcast_2();
		int32_t L_25 = __this->get_port_4();
		IPEndPoint_t3791887218 * L_26 = (IPEndPoint_t3791887218 *)il2cpp_codegen_object_new(IPEndPoint_t3791887218_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m2833647099(L_26, L_24, L_25, /*hidden argument*/NULL);
		NullCheck(L_23);
		UdpClient_Connect_m2720166117(L_23, L_26, /*hidden argument*/NULL);
		// m_Client.Send(buffer, buffer.Length);
		BroadcastSystem_t594396148 * L_27 = V_2;
		NullCheck(L_27);
		UdpClient_t967282006 * L_28 = L_27->get_m_Client_4();
		ByteU5BU5D_t4116647657* L_29 = __this->get_U3CbufferU3E5__2_5();
		ByteU5BU5D_t4116647657* L_30 = __this->get_U3CbufferU3E5__2_5();
		NullCheck(L_30);
		NullCheck(L_28);
		UdpClient_Send_m2761574969(L_28, L_29, (((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))), /*hidden argument*/NULL);
		// }
		goto IL_00de;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00c3;
		throw e;
	}

CATCH_00c3:
	{ // begin catch(System.Exception)
		// Debug.Log(ex);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, ((Exception_t *)__exception_local), /*hidden argument*/NULL);
		// m_Client.Close();
		BroadcastSystem_t594396148 * L_31 = V_2;
		NullCheck(L_31);
		UdpClient_t967282006 * L_32 = L_31->get_m_Client_4();
		NullCheck(L_32);
		UdpClient_Close_m4217442468(L_32, /*hidden argument*/NULL);
		// m_Client = null;
		BroadcastSystem_t594396148 * L_33 = V_2;
		NullCheck(L_33);
		L_33->set_m_Client_4((UdpClient_t967282006 *)NULL);
		// yield break;
		V_0 = (bool)0;
		goto IL_0103;
	} // end catch (depth: 1)

IL_00de:
	{
		// yield return new WaitForSeconds(5.0f);
		WaitForSeconds_t1699091251 * L_34 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_34, (5.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_34);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00f7:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_0048;
	}

IL_0103:
	{
		bool L_35 = V_0;
		return L_35;
	}
}
// System.Object NetwrokSystem.BroadcastSystem/<SendBroadcast>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CSendBroadcastU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m470298566 (U3CSendBroadcastU3Ed__5_t4209478386 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void NetwrokSystem.BroadcastSystem/<SendBroadcast>d__5::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CSendBroadcastU3Ed__5_System_Collections_IEnumerator_Reset_m919498822 (U3CSendBroadcastU3Ed__5_t4209478386 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSendBroadcastU3Ed__5_System_Collections_IEnumerator_Reset_m919498822_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CSendBroadcastU3Ed__5_System_Collections_IEnumerator_Reset_m919498822_RuntimeMethod_var);
	}
}
// System.Object NetwrokSystem.BroadcastSystem/<SendBroadcast>d__5::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CSendBroadcastU3Ed__5_System_Collections_IEnumerator_get_Current_m3348964002 (U3CSendBroadcastU3Ed__5_t4209478386 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void NetwrokSystem.ClientManager::Connect(System.Net.IPAddress,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ClientManager_Connect_m1312242759 (ClientManager_t1383746268 * __this, IPAddress_t241777590 * ___address0, int32_t ___port1, const RuntimeMethod* method)
{
	{
		// BeginConnect(address, port);
		IPAddress_t241777590 * L_0 = ___address0;
		int32_t L_1 = ___port1;
		ClientSystem_BeginConnect_m861483464(__this, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NetwrokSystem.ClientManager::Send()
extern "C" IL2CPP_METHOD_ATTR void ClientManager_Send_m4191221563 (ClientManager_t1383746268 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientManager_Send_m4191221563_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Send("TestMessage");
		ClientSystem_Send_m1593278515(__this, _stringLiteral713948858, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NetwrokSystem.ClientManager::OnGetMessage(System.String)
extern "C" IL2CPP_METHOD_ATTR void ClientManager_OnGetMessage_m3550061581 (ClientManager_t1383746268 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientManager_OnGetMessage_m3550061581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnGetMessage(msg);
		String_t* L_0 = ___msg0;
		ClientSystem_OnGetMessage_m3868676309(__this, L_0, /*hidden argument*/NULL);
		// Debug.Log(msg);
		String_t* L_1 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NetwrokSystem.ClientManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ClientManager__ctor_m3194458783 (ClientManager_t1383746268 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] public int castPort = 50001;
		__this->set_castPort_10(((int32_t)50001));
		ClientSystem__ctor_m2560080983(__this, /*hidden argument*/NULL);
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
// System.Void NetwrokSystem.ClientSystem::Awake()
extern "C" IL2CPP_METHOD_ATTR void ClientSystem_Awake_m2717395444 (ClientSystem_t4235447217 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientSystem_Awake_m2717395444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Buffer = new byte[1024];
		ByteU5BU5D_t4116647657* L_0 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->set_m_Buffer_6(L_0);
		// OnConnectCallback = new AsyncCallback(OnConnect);
		intptr_t L_1 = (intptr_t)ClientSystem_OnConnect_m2056877247_RuntimeMethod_var;
		AsyncCallback_t3962456242 * L_2 = (AsyncCallback_t3962456242 *)il2cpp_codegen_object_new(AsyncCallback_t3962456242_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m530647953(L_2, __this, L_1, /*hidden argument*/NULL);
		__this->set_OnConnectCallback_7(L_2);
		// OnReadCallback = new AsyncCallback(OnRead);
		intptr_t L_3 = (intptr_t)ClientSystem_OnRead_m293147450_RuntimeMethod_var;
		AsyncCallback_t3962456242 * L_4 = (AsyncCallback_t3962456242 *)il2cpp_codegen_object_new(AsyncCallback_t3962456242_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m530647953(L_4, __this, L_3, /*hidden argument*/NULL);
		__this->set_OnReadCallback_8(L_4);
		// OnWriteCallback = new AsyncCallback(OnWrite);
		intptr_t L_5 = (intptr_t)ClientSystem_OnWrite_m2721469661_RuntimeMethod_var;
		AsyncCallback_t3962456242 * L_6 = (AsyncCallback_t3962456242 *)il2cpp_codegen_object_new(AsyncCallback_t3962456242_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m530647953(L_6, __this, L_5, /*hidden argument*/NULL);
		__this->set_OnWriteCallback_9(L_6);
		// }
		return;
	}
}
// System.Void NetwrokSystem.ClientSystem::BeginConnect(System.Net.IPAddress,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ClientSystem_BeginConnect_m861483464 (ClientSystem_t4235447217 * __this, IPAddress_t241777590 * ___address0, int32_t ___port1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientSystem_BeginConnect_m861483464_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("BeginConnect : " + address.ToString() + ":" + port);
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral3445060045);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3445060045);
		ObjectU5BU5D_t2843939325* L_2 = L_1;
		IPAddress_t241777590 * L_3 = ___address0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral3452614550);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3452614550);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		int32_t L_7 = ___port1;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		String_t* L_10 = String_Concat_m2971454694(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		// m_Client = new TcpClient();
		TcpClient_t822906377 * L_11 = (TcpClient_t822906377 *)il2cpp_codegen_object_new(TcpClient_t822906377_il2cpp_TypeInfo_var);
		TcpClient__ctor_m1992471411(L_11, /*hidden argument*/NULL);
		__this->set_m_Client_4(L_11);
		// m_Client.BeginConnect(address, port, OnConnectCallback, m_Client);
		TcpClient_t822906377 * L_12 = __this->get_m_Client_4();
		IPAddress_t241777590 * L_13 = ___address0;
		int32_t L_14 = ___port1;
		AsyncCallback_t3962456242 * L_15 = __this->get_OnConnectCallback_7();
		TcpClient_t822906377 * L_16 = __this->get_m_Client_4();
		NullCheck(L_12);
		TcpClient_BeginConnect_m3532703723(L_12, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NetwrokSystem.ClientSystem::DisConnect()
extern "C" IL2CPP_METHOD_ATTR void ClientSystem_DisConnect_m3528052903 (ClientSystem_t4235447217 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientSystem_DisConnect_m3528052903_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("DisConnect");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2526250868, /*hidden argument*/NULL);
		// m_Stream.Close();
		NetworkStream_t4071955934 * L_0 = __this->get_m_Stream_5();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Close() */, L_0);
		// m_Client.Close();
		TcpClient_t822906377 * L_1 = __this->get_m_Client_4();
		NullCheck(L_1);
		TcpClient_Close_m3817529922(L_1, /*hidden argument*/NULL);
		// m_Stream = null;
		__this->set_m_Stream_5((NetworkStream_t4071955934 *)NULL);
		// m_Client = null;
		__this->set_m_Client_4((TcpClient_t822906377 *)NULL);
		// }
		return;
	}
}
// System.Void NetwrokSystem.ClientSystem::Send(System.String)
extern "C" IL2CPP_METHOD_ATTR void ClientSystem_Send_m1593278515 (ClientSystem_t4235447217 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientSystem_Send_m1593278515_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		// byte[] sendBytes = Encoding.UTF8.GetBytes(msg);
		Encoding_t1523322056 * L_0 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___msg0;
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_2 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		// m_Stream.BeginWrite(sendBytes, 0, sendBytes.Length, OnWriteCallback, m_Stream);
		NetworkStream_t4071955934 * L_3 = __this->get_m_Stream_5();
		ByteU5BU5D_t4116647657* L_4 = V_0;
		ByteU5BU5D_t4116647657* L_5 = V_0;
		NullCheck(L_5);
		AsyncCallback_t3962456242 * L_6 = __this->get_OnWriteCallback_9();
		NetworkStream_t4071955934 * L_7 = __this->get_m_Stream_5();
		NullCheck(L_3);
		VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_t4116647657*, int32_t, int32_t, AsyncCallback_t3962456242 *, RuntimeObject * >::Invoke(21 /* System.IAsyncResult System.IO.Stream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_3, L_4, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))), L_6, L_7);
		// }
		goto IL_0032;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_002b;
		throw e;
	}

CATCH_002b:
	{ // begin catch(System.Exception)
		// catch(Exception ex) { Debug.Log(ex); }
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, ((Exception_t *)__exception_local), /*hidden argument*/NULL);
		// catch(Exception ex) { Debug.Log(ex); }
		goto IL_0032;
	} // end catch (depth: 1)

IL_0032:
	{
		// }
		return;
	}
}
// System.Void NetwrokSystem.ClientSystem::OnGetMessage(System.String)
extern "C" IL2CPP_METHOD_ATTR void ClientSystem_OnGetMessage_m3868676309 (ClientSystem_t4235447217 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void NetwrokSystem.ClientSystem::OnConnect(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ClientSystem_OnConnect_m2056877247 (ClientSystem_t4235447217 * __this, RuntimeObject* ___ar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientSystem_OnConnect_m2056877247_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TcpClient_t822906377 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		// Debug.Log("OnConnect");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2286293156, /*hidden argument*/NULL);
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		// TcpClient server = ar.AsyncState as TcpClient;
		RuntimeObject* L_0 = ___ar0;
		NullCheck(L_0);
		RuntimeObject * L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(2 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_t767004451_il2cpp_TypeInfo_var, L_0);
		V_0 = ((TcpClient_t822906377 *)IsInstClass((RuntimeObject*)L_1, TcpClient_t822906377_il2cpp_TypeInfo_var));
		// Debug.Log("Connect : " + server.Client.RemoteEndPoint);
		TcpClient_t822906377 * L_2 = V_0;
		NullCheck(L_2);
		Socket_t1119025450 * L_3 = TcpClient_get_Client_m139203108(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		EndPoint_t982345378 * L_4 = Socket_get_RemoteEndPoint_m3755127488(L_3, /*hidden argument*/NULL);
		String_t* L_5 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3826597005, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		// m_Stream = server.GetStream();
		TcpClient_t822906377 * L_6 = V_0;
		NullCheck(L_6);
		NetworkStream_t4071955934 * L_7 = TcpClient_GetStream_m960745678(L_6, /*hidden argument*/NULL);
		__this->set_m_Stream_5(L_7);
		// m_Stream.BeginRead(m_Buffer, 0, m_Buffer.Length, OnReadCallback, m_Stream);
		NetworkStream_t4071955934 * L_8 = __this->get_m_Stream_5();
		ByteU5BU5D_t4116647657* L_9 = __this->get_m_Buffer_6();
		ByteU5BU5D_t4116647657* L_10 = __this->get_m_Buffer_6();
		NullCheck(L_10);
		AsyncCallback_t3962456242 * L_11 = __this->get_OnReadCallback_8();
		NetworkStream_t4071955934 * L_12 = __this->get_m_Stream_5();
		NullCheck(L_8);
		VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_t4116647657*, int32_t, int32_t, AsyncCallback_t3962456242 *, RuntimeObject * >::Invoke(18 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_8, L_9, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))), L_11, L_12);
		// }
		goto IL_006c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0065;
		throw e;
	}

CATCH_0065:
	{ // begin catch(System.Exception)
		// catch (Exception ex) { Debug.Log(ex); }
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, ((Exception_t *)__exception_local), /*hidden argument*/NULL);
		// catch (Exception ex) { Debug.Log(ex); }
		goto IL_006c;
	} // end catch (depth: 1)

IL_006c:
	{
		// }
		return;
	}
}
// System.Void NetwrokSystem.ClientSystem::OnRead(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ClientSystem_OnRead_m293147450 (ClientSystem_t4235447217 * __this, RuntimeObject* ___ar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientSystem_OnRead_m293147450_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// Debug.Log("OnRead");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1798980456, /*hidden argument*/NULL);
		// int byteRead = m_Stream.EndRead(ar);
		NetworkStream_t4071955934 * L_0 = __this->get_m_Stream_5();
		RuntimeObject* L_1 = ___ar0;
		NullCheck(L_0);
		int32_t L_2 = VirtFuncInvoker1< int32_t, RuntimeObject* >::Invoke(19 /* System.Int32 System.IO.Stream::EndRead(System.IAsyncResult) */, L_0, L_1);
		// if (byteRead > 0)
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		// string msg = Encoding.UTF8.GetString(m_Buffer, 0, m_Buffer.Length);
		Encoding_t1523322056 * L_3 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_4 = __this->get_m_Buffer_6();
		ByteU5BU5D_t4116647657* L_5 = __this->get_m_Buffer_6();
		NullCheck(L_5);
		NullCheck(L_3);
		String_t* L_6 = VirtFuncInvoker3< String_t*, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))));
		V_0 = L_6;
		// OnGetMessage(msg);
		String_t* L_7 = V_0;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void NetwrokSystem.ClientSystem::OnGetMessage(System.String) */, __this, L_7);
		// }
		return;
	}

IL_003b:
	{
		// DisConnect();
		ClientSystem_DisConnect_m3528052903(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NetwrokSystem.ClientSystem::OnWrite(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ClientSystem_OnWrite_m2721469661 (ClientSystem_t4235447217 * __this, RuntimeObject* ___ar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientSystem_OnWrite_m2721469661_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnWrite");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1704863334, /*hidden argument*/NULL);
		// m_Stream.EndWrite(ar);
		NetworkStream_t4071955934 * L_0 = __this->get_m_Stream_5();
		RuntimeObject* L_1 = ___ar0;
		NullCheck(L_0);
		VirtActionInvoker1< RuntimeObject* >::Invoke(22 /* System.Void System.IO.Stream::EndWrite(System.IAsyncResult) */, L_0, L_1);
		// m_Stream.BeginRead(m_Buffer, 0, m_Buffer.Length, OnRead, m_Stream);
		NetworkStream_t4071955934 * L_2 = __this->get_m_Stream_5();
		ByteU5BU5D_t4116647657* L_3 = __this->get_m_Buffer_6();
		ByteU5BU5D_t4116647657* L_4 = __this->get_m_Buffer_6();
		NullCheck(L_4);
		intptr_t L_5 = (intptr_t)ClientSystem_OnRead_m293147450_RuntimeMethod_var;
		AsyncCallback_t3962456242 * L_6 = (AsyncCallback_t3962456242 *)il2cpp_codegen_object_new(AsyncCallback_t3962456242_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m530647953(L_6, __this, L_5, /*hidden argument*/NULL);
		NetworkStream_t4071955934 * L_7 = __this->get_m_Stream_5();
		NullCheck(L_2);
		VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_t4116647657*, int32_t, int32_t, AsyncCallback_t3962456242 *, RuntimeObject * >::Invoke(18 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_2, L_3, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))), L_6, L_7);
		// }
		return;
	}
}
// System.Void NetwrokSystem.ClientSystem::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ClientSystem__ctor_m2560080983 (ClientSystem_t4235447217 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void NetwrokSystem.ServerManager::StartAccept()
extern "C" IL2CPP_METHOD_ATTR void ServerManager_StartAccept_m2394880500 (ServerManager_t1778859134 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerManager_StartAccept_m2394880500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BeginAccept(IPAddress.Any, tcpPort);
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t241777590_il2cpp_TypeInfo_var);
		IPAddress_t241777590 * L_0 = ((IPAddress_t241777590_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t241777590_il2cpp_TypeInfo_var))->get_Any_0();
		int32_t L_1 = __this->get_tcpPort_11();
		ServerSystem_BeginAccept_m2229529175(__this, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NetwrokSystem.ServerManager::OnConnectClient(System.Net.Sockets.TcpClient)
extern "C" IL2CPP_METHOD_ATTR void ServerManager_OnConnectClient_m351059752 (ServerManager_t1778859134 * __this, TcpClient_t822906377 * ___client0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerManager_OnConnectClient_m351059752_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnConnectClient(client);
		TcpClient_t822906377 * L_0 = ___client0;
		ServerSystem_OnConnectClient_m2241364360(__this, L_0, /*hidden argument*/NULL);
		// BroadcastServerManager.singleton.StopCast();
		BroadcastServerManager_t3015442646 * L_1 = ((BroadcastServerManager_t3015442646_StaticFields*)il2cpp_codegen_static_fields_for(BroadcastServerManager_t3015442646_il2cpp_TypeInfo_var))->get_singleton_8();
		NullCheck(L_1);
		BroadcastServerManager_StopCast_m1373655198(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NetwrokSystem.ServerManager::OnGetMessage(System.String)
extern "C" IL2CPP_METHOD_ATTR void ServerManager_OnGetMessage_m372768512 (ServerManager_t1778859134 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerManager_OnGetMessage_m372768512_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnGetMessage(msg);
		String_t* L_0 = ___msg0;
		ServerSystem_OnGetMessage_m1137826446(__this, L_0, /*hidden argument*/NULL);
		// Debug.Log(msg);
		String_t* L_1 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NetwrokSystem.ServerManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ServerManager__ctor_m4031944136 (ServerManager_t1778859134 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] public int tcpPort = 50000;
		__this->set_tcpPort_11(((int32_t)50000));
		// [SerializeField] public int castPort = 50001;
		__this->set_castPort_12(((int32_t)50001));
		ServerSystem__ctor_m197385444(__this, /*hidden argument*/NULL);
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
// System.Boolean NetwrokSystem.ServerSystem::get_isConnect()
extern "C" IL2CPP_METHOD_ATTR bool ServerSystem_get_isConnect_m3853283832 (ServerSystem_t969793282 * __this, const RuntimeMethod* method)
{
	{
		// public bool isConnect { get { return m_Client != null; } }
		TcpClient_t822906377 * L_0 = __this->get_m_Client_5();
		return (bool)((!(((RuntimeObject*)(TcpClient_t822906377 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void NetwrokSystem.ServerSystem::Awake()
extern "C" IL2CPP_METHOD_ATTR void ServerSystem_Awake_m329268399 (ServerSystem_t969793282 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerSystem_Awake_m329268399_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Buffer = new byte[1024];
		ByteU5BU5D_t4116647657* L_0 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->set_m_Buffer_7(L_0);
		// }
		return;
	}
}
// System.Void NetwrokSystem.ServerSystem::BeginAccept(System.Net.IPAddress,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ServerSystem_BeginAccept_m2229529175 (ServerSystem_t969793282 * __this, IPAddress_t241777590 * ___address0, int32_t ___port1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerSystem_BeginAccept_m2229529175_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		// Debug.Log("BeginAccept : " + address.ToString() + ":" + port);
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral4021224642);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral4021224642);
		ObjectU5BU5D_t2843939325* L_2 = L_1;
		IPAddress_t241777590 * L_3 = ___address0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral3452614550);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3452614550);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		int32_t L_7 = ___port1;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		String_t* L_10 = String_Concat_m2971454694(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
	}

IL_0032:
	try
	{ // begin try (depth: 1)
		// m_Listener = new TcpListener(address, port);
		IPAddress_t241777590 * L_11 = ___address0;
		int32_t L_12 = ___port1;
		TcpListener_t3499576757 * L_13 = (TcpListener_t3499576757 *)il2cpp_codegen_object_new(TcpListener_t3499576757_il2cpp_TypeInfo_var);
		TcpListener__ctor_m2307803501(L_13, L_11, L_12, /*hidden argument*/NULL);
		__this->set_m_Listener_4(L_13);
		// m_Listener.Start();
		TcpListener_t3499576757 * L_14 = __this->get_m_Listener_4();
		NullCheck(L_14);
		TcpListener_Start_m1510900909(L_14, /*hidden argument*/NULL);
		// m_Listener.BeginAcceptTcpClient(OnAcceptCallback, m_Listener);
		TcpListener_t3499576757 * L_15 = __this->get_m_Listener_4();
		AsyncCallback_t3962456242 * L_16 = __this->get_OnAcceptCallback_8();
		TcpListener_t3499576757 * L_17 = __this->get_m_Listener_4();
		NullCheck(L_15);
		TcpListener_BeginAcceptTcpClient_m3629060945(L_15, L_16, L_17, /*hidden argument*/NULL);
		// }
		goto IL_006b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0064;
		throw e;
	}

CATCH_0064:
	{ // begin catch(System.Exception)
		// catch (Exception ex) { Console.WriteLine(ex); }
		IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
		Console_WriteLine_m68308674(NULL /*static, unused*/, ((Exception_t *)__exception_local), /*hidden argument*/NULL);
		// catch (Exception ex) { Console.WriteLine(ex); }
		goto IL_006b;
	} // end catch (depth: 1)

IL_006b:
	{
		// }
		return;
	}
}
// System.Void NetwrokSystem.ServerSystem::DisConnect()
extern "C" IL2CPP_METHOD_ATTR void ServerSystem_DisConnect_m96803545 (ServerSystem_t969793282 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerSystem_DisConnect_m96803545_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("DisConnect");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2526250868, /*hidden argument*/NULL);
		// m_Stream.Close();
		NetworkStream_t4071955934 * L_0 = __this->get_m_Stream_6();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Close() */, L_0);
		// m_Listener.Stop();
		TcpListener_t3499576757 * L_1 = __this->get_m_Listener_4();
		NullCheck(L_1);
		TcpListener_Stop_m996961764(L_1, /*hidden argument*/NULL);
		// m_Stream = null;
		__this->set_m_Stream_6((NetworkStream_t4071955934 *)NULL);
		// m_Listener = null;
		__this->set_m_Listener_4((TcpListener_t3499576757 *)NULL);
		// }
		return;
	}
}
// System.Void NetwrokSystem.ServerSystem::OnConnectClient(System.Net.Sockets.TcpClient)
extern "C" IL2CPP_METHOD_ATTR void ServerSystem_OnConnectClient_m2241364360 (ServerSystem_t969793282 * __this, TcpClient_t822906377 * ___client0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void NetwrokSystem.ServerSystem::OnGetMessage(System.String)
extern "C" IL2CPP_METHOD_ATTR void ServerSystem_OnGetMessage_m1137826446 (ServerSystem_t969793282 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void NetwrokSystem.ServerSystem::OnAcceptClient(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ServerSystem_OnAcceptClient_m3844002481 (ServerSystem_t969793282 * __this, RuntimeObject* ___ar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerSystem_OnAcceptClient_m3844002481_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TcpListener_t3499576757 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		// Debug.Log("OnAcceptClient");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2385499530, /*hidden argument*/NULL);
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		// TcpListener listener = ar.AsyncState as TcpListener;
		RuntimeObject* L_0 = ___ar0;
		NullCheck(L_0);
		RuntimeObject * L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(2 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_t767004451_il2cpp_TypeInfo_var, L_0);
		V_0 = ((TcpListener_t3499576757 *)IsInstClass((RuntimeObject*)L_1, TcpListener_t3499576757_il2cpp_TypeInfo_var));
		// m_Client = listener.EndAcceptTcpClient(ar);
		TcpListener_t3499576757 * L_2 = V_0;
		RuntimeObject* L_3 = ___ar0;
		NullCheck(L_2);
		TcpClient_t822906377 * L_4 = TcpListener_EndAcceptTcpClient_m2756409428(L_2, L_3, /*hidden argument*/NULL);
		__this->set_m_Client_5(L_4);
		// Debug.Log("Connect : " + m_Client.Client.RemoteEndPoint);
		TcpClient_t822906377 * L_5 = __this->get_m_Client_5();
		NullCheck(L_5);
		Socket_t1119025450 * L_6 = TcpClient_get_Client_m139203108(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		EndPoint_t982345378 * L_7 = Socket_get_RemoteEndPoint_m3755127488(L_6, /*hidden argument*/NULL);
		String_t* L_8 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3826597005, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		// m_Stream = m_Client.GetStream();
		TcpClient_t822906377 * L_9 = __this->get_m_Client_5();
		NullCheck(L_9);
		NetworkStream_t4071955934 * L_10 = TcpClient_GetStream_m960745678(L_9, /*hidden argument*/NULL);
		__this->set_m_Stream_6(L_10);
		// m_Stream.BeginRead(m_Buffer, 0, m_Buffer.Length, OnReadCallback, m_Stream);
		NetworkStream_t4071955934 * L_11 = __this->get_m_Stream_6();
		ByteU5BU5D_t4116647657* L_12 = __this->get_m_Buffer_7();
		ByteU5BU5D_t4116647657* L_13 = __this->get_m_Buffer_7();
		NullCheck(L_13);
		AsyncCallback_t3962456242 * L_14 = __this->get_OnReadCallback_9();
		NetworkStream_t4071955934 * L_15 = __this->get_m_Stream_6();
		NullCheck(L_11);
		VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_t4116647657*, int32_t, int32_t, AsyncCallback_t3962456242 *, RuntimeObject * >::Invoke(18 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_11, L_12, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))), L_14, L_15);
		// OnConnectClient(m_Client);
		TcpClient_t822906377 * L_16 = __this->get_m_Client_5();
		VirtActionInvoker1< TcpClient_t822906377 * >::Invoke(5 /* System.Void NetwrokSystem.ServerSystem::OnConnectClient(System.Net.Sockets.TcpClient) */, __this, L_16);
		// }
		goto IL_008f;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0088;
		throw e;
	}

CATCH_0088:
	{ // begin catch(System.Exception)
		// catch (Exception ex) { Console.WriteLine(ex); }
		IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
		Console_WriteLine_m68308674(NULL /*static, unused*/, ((Exception_t *)__exception_local), /*hidden argument*/NULL);
		// catch (Exception ex) { Console.WriteLine(ex); }
		goto IL_008f;
	} // end catch (depth: 1)

IL_008f:
	{
		// }
		return;
	}
}
// System.Void NetwrokSystem.ServerSystem::OnRead(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ServerSystem_OnRead_m1512557477 (ServerSystem_t969793282 * __this, RuntimeObject* ___ar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerSystem_OnRead_m1512557477_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// Debug.Log("OnRead");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1798980456, /*hidden argument*/NULL);
		// int byteRead = m_Stream.EndRead(ar);
		NetworkStream_t4071955934 * L_0 = __this->get_m_Stream_6();
		RuntimeObject* L_1 = ___ar0;
		NullCheck(L_0);
		int32_t L_2 = VirtFuncInvoker1< int32_t, RuntimeObject* >::Invoke(19 /* System.Int32 System.IO.Stream::EndRead(System.IAsyncResult) */, L_0, L_1);
		// if (byteRead > 0)
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		// string msg = Encoding.UTF8.GetString(m_Buffer, 0, m_Buffer.Length);
		Encoding_t1523322056 * L_3 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_4 = __this->get_m_Buffer_7();
		ByteU5BU5D_t4116647657* L_5 = __this->get_m_Buffer_7();
		NullCheck(L_5);
		NullCheck(L_3);
		String_t* L_6 = VirtFuncInvoker3< String_t*, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(43 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))));
		V_0 = L_6;
		// OnGetMessage(msg);
		String_t* L_7 = V_0;
		VirtActionInvoker1< String_t* >::Invoke(6 /* System.Void NetwrokSystem.ServerSystem::OnGetMessage(System.String) */, __this, L_7);
		// }
		return;
	}

IL_003b:
	{
		// DisConnect();
		ServerSystem_DisConnect_m96803545(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NetwrokSystem.ServerSystem::OnWrite(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ServerSystem_OnWrite_m3893389561 (ServerSystem_t969793282 * __this, RuntimeObject* ___ar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ServerSystem_OnWrite_m3893389561_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnWrite");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1704863334, /*hidden argument*/NULL);
		// m_Stream.EndWrite(ar);
		NetworkStream_t4071955934 * L_0 = __this->get_m_Stream_6();
		RuntimeObject* L_1 = ___ar0;
		NullCheck(L_0);
		VirtActionInvoker1< RuntimeObject* >::Invoke(22 /* System.Void System.IO.Stream::EndWrite(System.IAsyncResult) */, L_0, L_1);
		// m_Stream.BeginRead(m_Buffer, 0, m_Buffer.Length, OnRead, m_Stream);
		NetworkStream_t4071955934 * L_2 = __this->get_m_Stream_6();
		ByteU5BU5D_t4116647657* L_3 = __this->get_m_Buffer_7();
		ByteU5BU5D_t4116647657* L_4 = __this->get_m_Buffer_7();
		NullCheck(L_4);
		intptr_t L_5 = (intptr_t)ServerSystem_OnRead_m1512557477_RuntimeMethod_var;
		AsyncCallback_t3962456242 * L_6 = (AsyncCallback_t3962456242 *)il2cpp_codegen_object_new(AsyncCallback_t3962456242_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m530647953(L_6, __this, L_5, /*hidden argument*/NULL);
		NetworkStream_t4071955934 * L_7 = __this->get_m_Stream_6();
		NullCheck(L_2);
		VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_t4116647657*, int32_t, int32_t, AsyncCallback_t3962456242 *, RuntimeObject * >::Invoke(18 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_2, L_3, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))), L_6, L_7);
		// }
		return;
	}
}
// System.Void NetwrokSystem.ServerSystem::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ServerSystem__ctor_m197385444 (ServerSystem_t969793282 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
