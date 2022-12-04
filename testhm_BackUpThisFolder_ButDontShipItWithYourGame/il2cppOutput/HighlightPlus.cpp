#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
		method->invoker_method(methodPtr, method, obj, params, NULL);
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
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4)
	{
		void* params[4] = { p1, p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3*, T4*, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5 p5)
	{
		void* params[5] = { p1, p2, p3, p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
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
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Int32>
struct Dictionary_2_t2F04C0C0C1E2089CA197A8E9E8045ABC0EB4F5C1;
// System.Collections.Generic.Dictionary`2<UnityEngine.Mesh,UnityEngine.Mesh>
struct Dictionary_2_t1F3778521E542002424701BBC4C99E4CFB1C891D;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>
struct Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Camera>
struct IEqualityComparer_1_t57A43DC72C9BCCA9EDCF71364B5BF21D7EB6497C;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Mesh>
struct IEqualityComparer_1_t81ED550082D7FA9DD9644A873DB590B91498D2E1;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector3>
struct IEqualityComparer_1_t9E98CD5E012FAD3C745699045489B5B858B1B8B5;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,System.Int32>
struct KeyCollection_tF85E81CBFBA697171070F238D8AFF9AF62B070B7;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Mesh,UnityEngine.Mesh>
struct KeyCollection_tC23C95B27EBCFB8AF77498C32DA3213B4169BDBE;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Vector3,System.Int32>
struct KeyCollection_t9D3228EA67952941D2E66BA7203A71C15DD17EEC;
// System.Collections.Generic.List`1<HighlightPlus.HighlightEffect>
struct List_1_tC895C2717B87D5478D455D92736B5A12A5A041A9;
// System.Collections.Generic.List`1<HighlightPlus.HighlightSeeThroughOccluder>
struct List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,System.Int32>
struct ValueCollection_tA6750A2FB6BC1FCCADBE0757203578FFFCE95DFE;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Mesh,UnityEngine.Mesh>
struct ValueCollection_tE8AB520EF27F814543958316B3EECAE202308423;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Vector3,System.Int32>
struct ValueCollection_t271A5045952D1D4ADCA653C7397D27178BF7B871;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Camera,System.Int32>[]
struct EntryU5BU5D_tA2D88F875BFB893C08F0893083481FC8A19DEC15;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Mesh,UnityEngine.Mesh>[]
struct EntryU5BU5D_t7087018C29B4207FCB089E3FE73CF1CA97C03A7A;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Vector3,System.Int32>[]
struct EntryU5BU5D_t5E7CD25D0A8D6FD60E510F4C0431718581279506;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// HighlightPlus.GlowPassData[]
struct GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F;
// HighlightPlus.HighlightEffect[]
struct HighlightEffectU5BU5D_t4F21AED881B38EDD99DE579D420CA60A834E0A75;
// HighlightPlus.HighlightSeeThroughOccluder[]
struct HighlightSeeThroughOccluderU5BU5D_t88855C935E771C63AEBDAB0CDB70B80331A0D896;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
// HighlightPlus.MeshData[]
struct MeshDataU5BU5D_t8BC3C6C8513F1E989D460DAAEB565E4A3FA13A70;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// HighlightPlus.HighlightEffect/ModelMaterials[]
struct ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// HighlightPlus.HighlightEffect
struct HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130;
// HighlightPlus.HighlightManager
struct HighlightManager_tA3E889F4F48FB623A6B189B9AC50ECFD48A8465F;
// HighlightPlus.HighlightProfile
struct HighlightProfile_t4149BE3C0201F863B4CA7CEDFEC447B696183CA2;
// HighlightPlus.HighlightSeeThroughOccluder
struct HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236;
// HighlightPlus.HighlightTrigger
struct HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// HighlightPlus.OnObjectHighlightEndEvent
struct OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F;
// HighlightPlus.OnObjectHighlightStartEvent
struct OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497;
// HighlightPlus.OnRendererHighlightEvent
struct OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6;
// HighlightPlus.OnTargetAnimatesEvent
struct OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// HighlightPlus.HighlightTrigger/<DoRayCast>d__11
struct U3CDoRayCastU3Ed__11_t64A74AF467E9FE0DBF76E3532C8E0A7CE704FC37;

IL2CPP_EXTERN_C RuntimeClass* CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1F3778521E542002424701BBC4C99E4CFB1C891D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t2F04C0C0C1E2089CA197A8E9E8045ABC0EB4F5C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC895C2717B87D5478D455D92736B5A12A5A041A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshDataU5BU5D_t8BC3C6C8513F1E989D460DAAEB565E4A3FA13A70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDoRayCastU3Ed__11_t64A74AF467E9FE0DBF76E3532C8E0A7CE704FC37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tB7E4E10E6E9BC0658E9B7DA29CB2FA232B0F9AF2____4F3A974D03B4939FC26A965844D8E5F89E151FF80F59BB8AF511CC703F5DA157_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00976D4B6B8B09FDE83FAF103A558B8E7E5649A5;
IL2CPP_EXTERN_C String_t* _stringLiteral0D78359D3EB91DCF02FBACA94CE86EFF7C13709B;
IL2CPP_EXTERN_C String_t* _stringLiteral11DADE9907947E6EEC4080ACA8F9A86EC386CA40;
IL2CPP_EXTERN_C String_t* _stringLiteral14126D6B9401D493B66201B4A9C99E7CB5DE3FFF;
IL2CPP_EXTERN_C String_t* _stringLiteral17E861409735E76469AAA432AC85057B52A0546D;
IL2CPP_EXTERN_C String_t* _stringLiteral17FC0954E2BA29F862AC82AAF54615D8CF0A5190;
IL2CPP_EXTERN_C String_t* _stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22;
IL2CPP_EXTERN_C String_t* _stringLiteral18A5138DFD61275AD7D4FB584920473F74C83673;
IL2CPP_EXTERN_C String_t* _stringLiteral20205C80F44E832330753E566D890CA7994A43F2;
IL2CPP_EXTERN_C String_t* _stringLiteral2C4E7BC541B49713DD3B9DCB6A7BADB805172193;
IL2CPP_EXTERN_C String_t* _stringLiteral2DF57E2CA1BCDEE73B8DEB94F07709B9AF56526E;
IL2CPP_EXTERN_C String_t* _stringLiteral302B7CA4FEA9A905B76ADACDB7E584B9F385C54D;
IL2CPP_EXTERN_C String_t* _stringLiteral348D6C19AE7049865399FB2019432FF81FC6D17D;
IL2CPP_EXTERN_C String_t* _stringLiteral36AF1BE80C97B2D83C812C7AAB43703DAA26B715;
IL2CPP_EXTERN_C String_t* _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75;
IL2CPP_EXTERN_C String_t* _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5;
IL2CPP_EXTERN_C String_t* _stringLiteral3EF0244AAB3ACE4C466D87590257757244FE3554;
IL2CPP_EXTERN_C String_t* _stringLiteral43AD1BD6C27526D7893DD88B86511D1C248720D2;
IL2CPP_EXTERN_C String_t* _stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257;
IL2CPP_EXTERN_C String_t* _stringLiteral478EBBF58D43F3214E6350AEC652978DA26C9482;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral48DFDC8C33A0AF1CBEE6B4C3F550E629E667C311;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral4F2D12F9C2C36614892D7B0101726115135AEFE0;
IL2CPP_EXTERN_C String_t* _stringLiteral4F4901345F295B883EB3E19E83AD9AB4BF9D000A;
IL2CPP_EXTERN_C String_t* _stringLiteral565A8338444E4AF278C41AEBC005C7D715AE9254;
IL2CPP_EXTERN_C String_t* _stringLiteral5978B2B60718173E0FD1F1A908840042DE9368A0;
IL2CPP_EXTERN_C String_t* _stringLiteral5B399F095CF9ED25677ABDF72E009C797C083D21;
IL2CPP_EXTERN_C String_t* _stringLiteral60208702E3C26366B11B2A1D6389AA63A1E090BE;
IL2CPP_EXTERN_C String_t* _stringLiteral61AC4D55EC040D39E39A759020B5A4A42F7C16DD;
IL2CPP_EXTERN_C String_t* _stringLiteral67BEC592386C17C68CF044FFB14169A1073AC7EB;
IL2CPP_EXTERN_C String_t* _stringLiteral685FD683BF750E957EF5AB6B84FA8272E2A5A74B;
IL2CPP_EXTERN_C String_t* _stringLiteral6A30941431F0D4C7D06A2C25AFAA93156F13DB33;
IL2CPP_EXTERN_C String_t* _stringLiteral6F8E51D85E067917148A712F8E56CF44F8E30C4E;
IL2CPP_EXTERN_C String_t* _stringLiteral74792F483F57373C14CC24DA7B9C0A5DE0F6F50B;
IL2CPP_EXTERN_C String_t* _stringLiteral77369AA1F21D3E40777EC56F7D3566D72F1841B3;
IL2CPP_EXTERN_C String_t* _stringLiteral7A6D6EF533746C6F0884C39238B4ED3D27DC28B6;
IL2CPP_EXTERN_C String_t* _stringLiteral815F9B82280FB931D808B67ED0F0A9F3165BC88B;
IL2CPP_EXTERN_C String_t* _stringLiteral85CBB0087B6D1D3A66165EDFA153AEF9933267AD;
IL2CPP_EXTERN_C String_t* _stringLiteral87E90A4CCFA75561F75488FC4B2DFA99A3431C1B;
IL2CPP_EXTERN_C String_t* _stringLiteral885516E057703E4DAEB49FBC12F5DD445D288AC3;
IL2CPP_EXTERN_C String_t* _stringLiteral8FA5E1703139EC5624F0E8FE4D0D7B4D00BFD97C;
IL2CPP_EXTERN_C String_t* _stringLiteral963825F4E386826F5183358E6D6875214068ED50;
IL2CPP_EXTERN_C String_t* _stringLiteral9A0E07956661BE92156BA01A49D3BE4CA8774CD5;
IL2CPP_EXTERN_C String_t* _stringLiteralA71E57745058D60F269DB1627BE11D82F41FBD77;
IL2CPP_EXTERN_C String_t* _stringLiteralAE1E6BA53790886823A3F537B19A3A1AB302558E;
IL2CPP_EXTERN_C String_t* _stringLiteralB38367465F760B367A32071218C3C5CE8D15077C;
IL2CPP_EXTERN_C String_t* _stringLiteralB4F78CE90CE16BABB60B82B9B7E3B20575EE5183;
IL2CPP_EXTERN_C String_t* _stringLiteralB7B33121028D2111A26D530F62393F0D0A5670F1;
IL2CPP_EXTERN_C String_t* _stringLiteralBAC5184F954A065399561E210B9EA8BCB130F8AE;
IL2CPP_EXTERN_C String_t* _stringLiteralBCBC87E0E465F7BE4CC1A31564E634C8C7F68060;
IL2CPP_EXTERN_C String_t* _stringLiteralC1014D7DB4CB07D8B10FBAA0B4B973A88F916870;
IL2CPP_EXTERN_C String_t* _stringLiteralC262CD37555BC29491C76457667D00F708E20977;
IL2CPP_EXTERN_C String_t* _stringLiteralC6904CD822ED40458DE745BDFB4E21FB7A729022;
IL2CPP_EXTERN_C String_t* _stringLiteralC7787202F7DDBAF6915C1C0FF217FB2B24C63264;
IL2CPP_EXTERN_C String_t* _stringLiteralCE5CDEC86E604948D547E530FD8FCD7A52576D5B;
IL2CPP_EXTERN_C String_t* _stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C;
IL2CPP_EXTERN_C String_t* _stringLiteralD1690E6F93BECAFC30D9717621ABA2DA8C6F60AF;
IL2CPP_EXTERN_C String_t* _stringLiteralD585E57680D3C1E5598B6C5D183D469B6AA2C913;
IL2CPP_EXTERN_C String_t* _stringLiteralE066DD3CA3CA9295CC83FA394543BA7B03B848BE;
IL2CPP_EXTERN_C String_t* _stringLiteralE110C564279CEB504D276A2381974E7A196D5104;
IL2CPP_EXTERN_C String_t* _stringLiteralE87CFD8323D21F3055725F0A2C033CBBD0F74888;
IL2CPP_EXTERN_C String_t* _stringLiteralEA6F0091C0F4C6C5BD7271CF1420AE410D38DFAB;
IL2CPP_EXTERN_C String_t* _stringLiteralEDB8B65FA045F3C6E71807EED7435224B8B69BFE;
IL2CPP_EXTERN_C String_t* _stringLiteralF50A055213A92FD57A98E40FB266BE0889696DE0;
IL2CPP_EXTERN_C String_t* _stringLiteralF803724443C2AF40A3BE0ECD99E081EEE7DC4D13;
IL2CPP_EXTERN_C String_t* _stringLiteralFA7345BB53C18C51F2F2D9023F9980E61A3B56D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFC47B489AF3EC18C22208208283F839984ACE798;
IL2CPP_EXTERN_C String_t* _stringLiteralFDEC9C07A7A4C1154E034A4E3CE7368E730E6A70;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_m8739CFB57B40043E52DEBE91B09BFA6342DE9255_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913_m15999E44C865C0D1B238518237AE143FDC9C32BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFC0F02CCD26A6A186031CF43E92D7B60EA1CC370_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mBBF8A68E10A9B71E580782A0FF65484595D61966_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mD9C1F50088CCD1E05534B8692A64DCB2824137C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m59B574D52CFCC7A39DF04081CC751E9947011933_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m74C1A74AF0C5C5A09082C2E95BC15B56937DE09E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mFA530B10C632B3CE94B37D1A12916909897B1F34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m224A0903E4694C420F3A13D5CDF8BD3FBB9C8D78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2490F345EB09891D2C13DD1BC202D67C36D38C54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m34B1AD57666C052D367EE98ED14DCF1183D4A774_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m3B1C7B18AF5833372B42AAB56A959A9766FF3201_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mA53F92CEF2D7E3057257D336DB1AFFBBE844FE57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mF1598D9A2BE47C5C9C2994A99F217A7FD624EAC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_mF86F84555AEC1D85DD09B9C341C91FFD1BF94F0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFE0E36B3C1670C308B04C39EDC76838DD59826B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5845CD95419E3BE7009C004DF4C27A3980553598_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m885F08C9F401FA8D6ED8964DBB45FDF3A09A51EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m6A13344402243643B18F102507DCAAC72711EDA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_mA13BB03189D3A8A2047207BA18FBF07A1C7C5663_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m2A1E4A48A8E28D26D8986ABF5BF31E16C1839C00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mB81B49439425E218155C62BC228A7DD59F4A4C18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mB524B909209E02C6B5202568C4006AF3CA71EFA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m49BF8D72A498F88B4CA42BCECF1D1C744EE56002_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEB82E11F5C86A91F63F27CA2D407BFDA537EF0A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0B3872F713AC87961C023F1FCDC3FB3968031494_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA533E222E90031FD47C0825021C5F9E97B129353_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3D85609E0A4EE301B50F6AF691611EA62DD26F6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m3A2AA29F0DAF9A715FBCEF3DFA506F7BE8564E0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC1DC863B344E1F38257F041D70495B706A5FCBE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m269810FFD0356A0743AF08CD15D6ACA5B856982A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m301E95E824CB214DD0BA6D04221CE97B30BE9ACD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDoRayCastU3Ed__11_System_Collections_IEnumerator_Reset_m032B5454371294FB0C5014F89AC1FA563839D943_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct MeshDataU5BU5D_t8BC3C6C8513F1E989D460DAAEB565E4A3FA13A70;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t2AD50CDA919D1C7EBC4286B785E954201FFEA9E6 
{
};

// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Int32>
struct Dictionary_2_t2F04C0C0C1E2089CA197A8E9E8045ABC0EB4F5C1  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA2D88F875BFB893C08F0893083481FC8A19DEC15* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tF85E81CBFBA697171070F238D8AFF9AF62B070B7* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA6750A2FB6BC1FCCADBE0757203578FFFCE95DFE* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.Mesh,UnityEngine.Mesh>
struct Dictionary_2_t1F3778521E542002424701BBC4C99E4CFB1C891D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7087018C29B4207FCB089E3FE73CF1CA97C03A7A* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC23C95B27EBCFB8AF77498C32DA3213B4169BDBE* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE8AB520EF27F814543958316B3EECAE202308423* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>
struct Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t5E7CD25D0A8D6FD60E510F4C0431718581279506* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t9D3228EA67952941D2E66BA7203A71C15DD17EEC* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t271A5045952D1D4ADCA653C7397D27178BF7B871* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<HighlightPlus.HighlightEffect>
struct List_1_tC895C2717B87D5478D455D92736B5A12A5A041A9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	HighlightEffectU5BU5D_t4F21AED881B38EDD99DE579D420CA60A834E0A75* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC895C2717B87D5478D455D92736B5A12A5A041A9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	HighlightEffectU5BU5D_t4F21AED881B38EDD99DE579D420CA60A834E0A75* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<HighlightPlus.HighlightSeeThroughOccluder>
struct List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	HighlightSeeThroughOccluderU5BU5D_t88855C935E771C63AEBDAB0CDB70B80331A0D896* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	HighlightSeeThroughOccluderU5BU5D_t88855C935E771C63AEBDAB0CDB70B80331A0D896* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Renderer>
struct List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// HighlightPlus.QualityLevelExtensions
struct QualityLevelExtensions_t27A25FB6281F7AB1C64EDD9BB7ACB7E0C32BAB6E  : public RuntimeObject
{
};

// HighlightPlus.ShaderParams
struct ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4  : public RuntimeObject
{
};

struct ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields
{
	// System.Int32 HighlightPlus.ShaderParams::StereoRendering
	int32_t ___StereoRendering_0;
	// System.Int32 HighlightPlus.ShaderParams::Cull
	int32_t ___Cull_1;
	// System.Int32 HighlightPlus.ShaderParams::BlurScale
	int32_t ___BlurScale_2;
	// System.Int32 HighlightPlus.ShaderParams::Speed
	int32_t ___Speed_3;
	// System.Int32 HighlightPlus.ShaderParams::ConstantWidth
	int32_t ___ConstantWidth_4;
	// System.Int32 HighlightPlus.ShaderParams::CutOff
	int32_t ___CutOff_5;
	// System.Int32 HighlightPlus.ShaderParams::ZTest
	int32_t ___ZTest_6;
	// System.Int32 HighlightPlus.ShaderParams::Flip
	int32_t ___Flip_7;
	// System.Int32 HighlightPlus.ShaderParams::Debug
	int32_t ___Debug_8;
	// System.Int32 HighlightPlus.ShaderParams::Color
	int32_t ___Color_9;
	// System.Int32 HighlightPlus.ShaderParams::MainTex
	int32_t ___MainTex_10;
	// System.Int32 HighlightPlus.ShaderParams::BaseMap
	int32_t ___BaseMap_11;
	// System.Int32 HighlightPlus.ShaderParams::OutlineWidth
	int32_t ___OutlineWidth_12;
	// System.Int32 HighlightPlus.ShaderParams::OutlineZTest
	int32_t ___OutlineZTest_13;
	// System.Int32 HighlightPlus.ShaderParams::OutlineDirection
	int32_t ___OutlineDirection_14;
	// System.Int32 HighlightPlus.ShaderParams::OutlineColor
	int32_t ___OutlineColor_15;
	// System.Int32 HighlightPlus.ShaderParams::GlowZTest
	int32_t ___GlowZTest_16;
	// System.Int32 HighlightPlus.ShaderParams::GlowStencilOp
	int32_t ___GlowStencilOp_17;
	// System.Int32 HighlightPlus.ShaderParams::GlowDirection
	int32_t ___GlowDirection_18;
	// System.Int32 HighlightPlus.ShaderParams::Glow
	int32_t ___Glow_19;
	// System.Int32 HighlightPlus.ShaderParams::GlowColor
	int32_t ___GlowColor_20;
	// System.Int32 HighlightPlus.ShaderParams::Glow2
	int32_t ___Glow2_21;
	// System.Int32 HighlightPlus.ShaderParams::SeeThrough
	int32_t ___SeeThrough_22;
	// System.Int32 HighlightPlus.ShaderParams::SeeThroughNoise
	int32_t ___SeeThroughNoise_23;
	// System.Int32 HighlightPlus.ShaderParams::SeeThroughBorderWidth
	int32_t ___SeeThroughBorderWidth_24;
	// System.Int32 HighlightPlus.ShaderParams::SeeThroughBorderConstantWidth
	int32_t ___SeeThroughBorderConstantWidth_25;
	// System.Int32 HighlightPlus.ShaderParams::SeeThroughTintColor
	int32_t ___SeeThroughTintColor_26;
	// System.Int32 HighlightPlus.ShaderParams::SeeThroughBorderColor
	int32_t ___SeeThroughBorderColor_27;
	// System.Int32 HighlightPlus.ShaderParams::SeeThroughStencilRef
	int32_t ___SeeThroughStencilRef_28;
	// System.Int32 HighlightPlus.ShaderParams::SeeThroughStencilComp
	int32_t ___SeeThroughStencilComp_29;
	// System.Int32 HighlightPlus.ShaderParams::InnerGlowWidth
	int32_t ___InnerGlowWidth_30;
	// System.Int32 HighlightPlus.ShaderParams::InnerGlowZTest
	int32_t ___InnerGlowZTest_31;
	// System.Int32 HighlightPlus.ShaderParams::OverlayData
	int32_t ___OverlayData_32;
	// System.Int32 HighlightPlus.ShaderParams::OverlayBackColor
	int32_t ___OverlayBackColor_33;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// HighlightPlus.HighlightTrigger/<DoRayCast>d__11
struct U3CDoRayCastU3Ed__11_t64A74AF467E9FE0DBF76E3532C8E0A7CE704FC37  : public RuntimeObject
{
	// System.Int32 HighlightPlus.HighlightTrigger/<DoRayCast>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object HighlightPlus.HighlightTrigger/<DoRayCast>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// HighlightPlus.HighlightTrigger HighlightPlus.HighlightTrigger/<DoRayCast>d__11::<>4__this
	HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* ___U3CU3E4__this_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// HighlightPlus.MeshData
struct MeshData_tB7B04F2B6CC400BB80D211CBDE8F84C422A0A803 
{
	// UnityEngine.Renderer HighlightPlus.MeshData::renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer_0;
	// System.Int32 HighlightPlus.MeshData::subMeshCount
	int32_t ___subMeshCount_1;
};
// Native definition for P/Invoke marshalling of HighlightPlus.MeshData
struct MeshData_tB7B04F2B6CC400BB80D211CBDE8F84C422A0A803_marshaled_pinvoke
{
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer_0;
	int32_t ___subMeshCount_1;
};
// Native definition for COM marshalling of HighlightPlus.MeshData
struct MeshData_tB7B04F2B6CC400BB80D211CBDE8F84C422A0A803_marshaled_com
{
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer_0;
	int32_t ___subMeshCount_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.RenderTextureDescriptor
struct RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 
{
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<mipCount>k__BackingField
	int32_t ___U3CmipCountU3Ek__BackingField_4;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::_graphicsFormat
	int32_t ____graphicsFormat_5;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<stencilFormat>k__BackingField
	int32_t ___U3CstencilFormatU3Ek__BackingField_6;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<depthStencilFormat>k__BackingField
	int32_t ___U3CdepthStencilFormatU3Ek__BackingField_7;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_8;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_9;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_10;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_11;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_12;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t1412A0A20B7BFABE273AEFD319D750006585CFA8 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t1412A0A20B7BFABE273AEFD319D750006585CFA8__padding[24];
	};
};

// HighlightPlus.HighlightEffect/ModelMaterials
struct ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04 
{
	// System.Boolean HighlightPlus.HighlightEffect/ModelMaterials::render
	bool ___render_0;
	// UnityEngine.Transform HighlightPlus.HighlightEffect/ModelMaterials::transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_1;
	// System.Boolean HighlightPlus.HighlightEffect/ModelMaterials::renderWasVisibleDuringSetup
	bool ___renderWasVisibleDuringSetup_2;
	// UnityEngine.Mesh HighlightPlus.HighlightEffect/ModelMaterials::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_3;
	// UnityEngine.Mesh HighlightPlus.HighlightEffect/ModelMaterials::originalMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___originalMesh_4;
	// UnityEngine.Renderer HighlightPlus.HighlightEffect/ModelMaterials::renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer_5;
	// System.Boolean HighlightPlus.HighlightEffect/ModelMaterials::skinnedMesh
	bool ___skinnedMesh_6;
	// UnityEngine.Material[] HighlightPlus.HighlightEffect/ModelMaterials::fxMatMask
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___fxMatMask_7;
	// UnityEngine.Material[] HighlightPlus.HighlightEffect/ModelMaterials::fxMatSolidColor
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___fxMatSolidColor_8;
	// UnityEngine.Material[] HighlightPlus.HighlightEffect/ModelMaterials::fxMatSeeThrough
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___fxMatSeeThrough_9;
	// UnityEngine.Material[] HighlightPlus.HighlightEffect/ModelMaterials::fxMatOverlay
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___fxMatOverlay_10;
	// UnityEngine.Material[] HighlightPlus.HighlightEffect/ModelMaterials::fxMatInnerGlow
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___fxMatInnerGlow_11;
	// HighlightPlus.NormalsOption HighlightPlus.HighlightEffect/ModelMaterials::normalsOption
	int32_t ___normalsOption_12;
};
// Native definition for P/Invoke marshalling of HighlightPlus.HighlightEffect/ModelMaterials
struct ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04_marshaled_pinvoke
{
	int32_t ___render_0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_1;
	int32_t ___renderWasVisibleDuringSetup_2;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_3;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___originalMesh_4;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer_5;
	int32_t ___skinnedMesh_6;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___fxMatMask_7;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___fxMatSolidColor_8;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___fxMatSeeThrough_9;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___fxMatOverlay_10;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___fxMatInnerGlow_11;
	int32_t ___normalsOption_12;
};
// Native definition for COM marshalling of HighlightPlus.HighlightEffect/ModelMaterials
struct ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04_marshaled_com
{
	int32_t ___render_0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform_1;
	int32_t ___renderWasVisibleDuringSetup_2;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_3;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___originalMesh_4;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer_5;
	int32_t ___skinnedMesh_6;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___fxMatMask_7;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___fxMatSolidColor_8;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___fxMatSeeThrough_9;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___fxMatOverlay_10;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___fxMatInnerGlow_11;
	int32_t ___normalsOption_12;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tB7E4E10E6E9BC0658E9B7DA29CB2FA232B0F9AF2  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tB7E4E10E6E9BC0658E9B7DA29CB2FA232B0F9AF2_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::4F3A974D03B4939FC26A965844D8E5F89E151FF80F59BB8AF511CC703F5DA157
	__StaticArrayInitTypeSizeU3D24_t1412A0A20B7BFABE273AEFD319D750006585CFA8 ___4F3A974D03B4939FC26A965844D8E5F89E151FF80F59BB8AF511CC703F5DA157_0;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// HighlightPlus.GlowPassData
struct GlowPassData_t2D6DC0B6C392F444CA769D4761F1FEC41D092B50 
{
	// System.Single HighlightPlus.GlowPassData::offset
	float ___offset_0;
	// System.Single HighlightPlus.GlowPassData::alpha
	float ___alpha_1;
	// UnityEngine.Color HighlightPlus.GlowPassData::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.Rendering.RenderTargetIdentifier
struct RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B 
{
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_2;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_3;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_4;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_5;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_6;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_7;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// HighlightPlus.HighlightProfile
struct HighlightProfile_t4149BE3C0201F863B4CA7CEDFEC447B696183CA2  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// HighlightPlus.TargetOptions HighlightPlus.HighlightProfile::effectGroup
	int32_t ___effectGroup_4;
	// UnityEngine.LayerMask HighlightPlus.HighlightProfile::effectGroupLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___effectGroupLayer_5;
	// System.Single HighlightPlus.HighlightProfile::alphaCutOff
	float ___alphaCutOff_6;
	// System.Boolean HighlightPlus.HighlightProfile::cullBackFaces
	bool ___cullBackFaces_7;
	// HighlightPlus.NormalsOption HighlightPlus.HighlightProfile::normalsOption
	int32_t ___normalsOption_8;
	// System.Single HighlightPlus.HighlightProfile::fadeInDuration
	float ___fadeInDuration_9;
	// System.Single HighlightPlus.HighlightProfile::fadeOutDuration
	float ___fadeOutDuration_10;
	// System.Boolean HighlightPlus.HighlightProfile::constantWidth
	bool ___constantWidth_11;
	// System.Single HighlightPlus.HighlightProfile::overlay
	float ___overlay_12;
	// UnityEngine.Color HighlightPlus.HighlightProfile::overlayColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___overlayColor_13;
	// System.Single HighlightPlus.HighlightProfile::overlayAnimationSpeed
	float ___overlayAnimationSpeed_14;
	// System.Single HighlightPlus.HighlightProfile::overlayMinIntensity
	float ___overlayMinIntensity_15;
	// System.Single HighlightPlus.HighlightProfile::overlayBlending
	float ___overlayBlending_16;
	// System.Single HighlightPlus.HighlightProfile::outline
	float ___outline_17;
	// UnityEngine.Color HighlightPlus.HighlightProfile::outlineColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___outlineColor_18;
	// System.Single HighlightPlus.HighlightProfile::outlineWidth
	float ___outlineWidth_19;
	// HighlightPlus.QualityLevel HighlightPlus.HighlightProfile::outlineQuality
	int32_t ___outlineQuality_20;
	// System.Int32 HighlightPlus.HighlightProfile::outlineDownsampling
	int32_t ___outlineDownsampling_21;
	// HighlightPlus.Visibility HighlightPlus.HighlightProfile::outlineVisibility
	int32_t ___outlineVisibility_22;
	// System.Boolean HighlightPlus.HighlightProfile::outlineIndependent
	bool ___outlineIndependent_23;
	// System.Single HighlightPlus.HighlightProfile::glow
	float ___glow_24;
	// System.Single HighlightPlus.HighlightProfile::glowWidth
	float ___glowWidth_25;
	// HighlightPlus.QualityLevel HighlightPlus.HighlightProfile::glowQuality
	int32_t ___glowQuality_26;
	// System.Int32 HighlightPlus.HighlightProfile::glowDownsampling
	int32_t ___glowDownsampling_27;
	// UnityEngine.Color HighlightPlus.HighlightProfile::glowHQColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___glowHQColor_28;
	// System.Boolean HighlightPlus.HighlightProfile::glowDithering
	bool ___glowDithering_29;
	// System.Single HighlightPlus.HighlightProfile::glowMagicNumber1
	float ___glowMagicNumber1_30;
	// System.Single HighlightPlus.HighlightProfile::glowMagicNumber2
	float ___glowMagicNumber2_31;
	// System.Single HighlightPlus.HighlightProfile::glowAnimationSpeed
	float ___glowAnimationSpeed_32;
	// HighlightPlus.Visibility HighlightPlus.HighlightProfile::glowVisibility
	int32_t ___glowVisibility_33;
	// System.Boolean HighlightPlus.HighlightProfile::glowBlendPasses
	bool ___glowBlendPasses_34;
	// HighlightPlus.GlowPassData[] HighlightPlus.HighlightProfile::glowPasses
	GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* ___glowPasses_35;
	// System.Single HighlightPlus.HighlightProfile::innerGlow
	float ___innerGlow_36;
	// System.Single HighlightPlus.HighlightProfile::innerGlowWidth
	float ___innerGlowWidth_37;
	// UnityEngine.Color HighlightPlus.HighlightProfile::innerGlowColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___innerGlowColor_38;
	// HighlightPlus.Visibility HighlightPlus.HighlightProfile::innerGlowVisibility
	int32_t ___innerGlowVisibility_39;
	// System.Boolean HighlightPlus.HighlightProfile::targetFX
	bool ___targetFX_40;
	// UnityEngine.Texture2D HighlightPlus.HighlightProfile::targetFXTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___targetFXTexture_41;
	// UnityEngine.Color HighlightPlus.HighlightProfile::targetFXColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___targetFXColor_42;
	// System.Single HighlightPlus.HighlightProfile::targetFXRotationSpeed
	float ___targetFXRotationSpeed_43;
	// System.Single HighlightPlus.HighlightProfile::targetFXInitialScale
	float ___targetFXInitialScale_44;
	// System.Single HighlightPlus.HighlightProfile::targetFXEndScale
	float ___targetFXEndScale_45;
	// System.Single HighlightPlus.HighlightProfile::targetFXTransitionDuration
	float ___targetFXTransitionDuration_46;
	// System.Single HighlightPlus.HighlightProfile::targetFXStayDuration
	float ___targetFXStayDuration_47;
	// HighlightPlus.SeeThroughMode HighlightPlus.HighlightProfile::seeThrough
	int32_t ___seeThrough_48;
	// System.Single HighlightPlus.HighlightProfile::seeThroughIntensity
	float ___seeThroughIntensity_49;
	// System.Single HighlightPlus.HighlightProfile::seeThroughTintAlpha
	float ___seeThroughTintAlpha_50;
	// UnityEngine.Color HighlightPlus.HighlightProfile::seeThroughTintColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___seeThroughTintColor_51;
	// System.Single HighlightPlus.HighlightProfile::seeThroughNoise
	float ___seeThroughNoise_52;
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// HighlightPlus.OnObjectHighlightEndEvent
struct OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F  : public MulticastDelegate_t
{
};

// HighlightPlus.OnObjectHighlightStartEvent
struct OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497  : public MulticastDelegate_t
{
};

// HighlightPlus.OnRendererHighlightEvent
struct OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6  : public MulticastDelegate_t
{
};

// HighlightPlus.OnTargetAnimatesEvent
struct OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066  : public MulticastDelegate_t
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// HighlightPlus.HighlightEffect
struct HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// HighlightPlus.HighlightProfile HighlightPlus.HighlightEffect::profile
	HighlightProfile_t4149BE3C0201F863B4CA7CEDFEC447B696183CA2* ___profile_4;
	// System.Boolean HighlightPlus.HighlightEffect::profileSync
	bool ___profileSync_5;
	// System.Boolean HighlightPlus.HighlightEffect::previewInEditor
	bool ___previewInEditor_6;
	// HighlightPlus.TargetOptions HighlightPlus.HighlightEffect::effectGroup
	int32_t ___effectGroup_7;
	// UnityEngine.LayerMask HighlightPlus.HighlightEffect::effectGroupLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___effectGroupLayer_8;
	// System.Single HighlightPlus.HighlightEffect::alphaCutOff
	float ___alphaCutOff_9;
	// System.Boolean HighlightPlus.HighlightEffect::cullBackFaces
	bool ___cullBackFaces_10;
	// System.Boolean HighlightPlus.HighlightEffect::ignoreObjectVisibility
	bool ___ignoreObjectVisibility_11;
	// System.Boolean HighlightPlus.HighlightEffect::reflectionProbes
	bool ___reflectionProbes_12;
	// System.Boolean HighlightPlus.HighlightEffect::GPUInstancing
	bool ___GPUInstancing_13;
	// HighlightPlus.NormalsOption HighlightPlus.HighlightEffect::normalsOption
	int32_t ___normalsOption_14;
	// System.Boolean HighlightPlus.HighlightEffect::ignore
	bool ___ignore_15;
	// System.Boolean HighlightPlus.HighlightEffect::_highlighted
	bool ____highlighted_16;
	// System.Single HighlightPlus.HighlightEffect::fadeInDuration
	float ___fadeInDuration_17;
	// System.Single HighlightPlus.HighlightEffect::fadeOutDuration
	float ___fadeOutDuration_18;
	// System.Boolean HighlightPlus.HighlightEffect::flipY
	bool ___flipY_19;
	// System.Boolean HighlightPlus.HighlightEffect::constantWidth
	bool ___constantWidth_20;
	// System.Int32 HighlightPlus.HighlightEffect::subMeshMask
	int32_t ___subMeshMask_21;
	// System.Single HighlightPlus.HighlightEffect::overlay
	float ___overlay_22;
	// UnityEngine.Color HighlightPlus.HighlightEffect::overlayColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___overlayColor_23;
	// System.Single HighlightPlus.HighlightEffect::overlayAnimationSpeed
	float ___overlayAnimationSpeed_24;
	// System.Single HighlightPlus.HighlightEffect::overlayMinIntensity
	float ___overlayMinIntensity_25;
	// System.Single HighlightPlus.HighlightEffect::overlayBlending
	float ___overlayBlending_26;
	// System.Single HighlightPlus.HighlightEffect::outline
	float ___outline_27;
	// UnityEngine.Color HighlightPlus.HighlightEffect::outlineColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___outlineColor_28;
	// System.Single HighlightPlus.HighlightEffect::outlineWidth
	float ___outlineWidth_29;
	// HighlightPlus.QualityLevel HighlightPlus.HighlightEffect::outlineQuality
	int32_t ___outlineQuality_30;
	// System.Int32 HighlightPlus.HighlightEffect::outlineDownsampling
	int32_t ___outlineDownsampling_31;
	// HighlightPlus.Visibility HighlightPlus.HighlightEffect::outlineVisibility
	int32_t ___outlineVisibility_32;
	// System.Boolean HighlightPlus.HighlightEffect::outlineBlitDebug
	bool ___outlineBlitDebug_33;
	// System.Boolean HighlightPlus.HighlightEffect::outlineIndependent
	bool ___outlineIndependent_34;
	// System.Single HighlightPlus.HighlightEffect::glow
	float ___glow_35;
	// System.Single HighlightPlus.HighlightEffect::glowWidth
	float ___glowWidth_36;
	// HighlightPlus.QualityLevel HighlightPlus.HighlightEffect::glowQuality
	int32_t ___glowQuality_37;
	// System.Int32 HighlightPlus.HighlightEffect::glowDownsampling
	int32_t ___glowDownsampling_38;
	// UnityEngine.Color HighlightPlus.HighlightEffect::glowHQColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___glowHQColor_39;
	// System.Boolean HighlightPlus.HighlightEffect::glowDithering
	bool ___glowDithering_40;
	// System.Single HighlightPlus.HighlightEffect::glowMagicNumber1
	float ___glowMagicNumber1_41;
	// System.Single HighlightPlus.HighlightEffect::glowMagicNumber2
	float ___glowMagicNumber2_42;
	// System.Single HighlightPlus.HighlightEffect::glowAnimationSpeed
	float ___glowAnimationSpeed_43;
	// HighlightPlus.Visibility HighlightPlus.HighlightEffect::glowVisibility
	int32_t ___glowVisibility_44;
	// System.Boolean HighlightPlus.HighlightEffect::glowBlitDebug
	bool ___glowBlitDebug_45;
	// System.Boolean HighlightPlus.HighlightEffect::glowBlendPasses
	bool ___glowBlendPasses_46;
	// HighlightPlus.GlowPassData[] HighlightPlus.HighlightEffect::glowPasses
	GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* ___glowPasses_47;
	// System.Single HighlightPlus.HighlightEffect::innerGlow
	float ___innerGlow_48;
	// System.Single HighlightPlus.HighlightEffect::innerGlowWidth
	float ___innerGlowWidth_49;
	// UnityEngine.Color HighlightPlus.HighlightEffect::innerGlowColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___innerGlowColor_50;
	// HighlightPlus.Visibility HighlightPlus.HighlightEffect::innerGlowVisibility
	int32_t ___innerGlowVisibility_51;
	// System.Boolean HighlightPlus.HighlightEffect::targetFX
	bool ___targetFX_52;
	// UnityEngine.Texture2D HighlightPlus.HighlightEffect::targetFXTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___targetFXTexture_53;
	// UnityEngine.Color HighlightPlus.HighlightEffect::targetFXColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___targetFXColor_54;
	// UnityEngine.Transform HighlightPlus.HighlightEffect::targetFXCenter
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetFXCenter_55;
	// System.Single HighlightPlus.HighlightEffect::targetFXRotationSpeed
	float ___targetFXRotationSpeed_56;
	// System.Single HighlightPlus.HighlightEffect::targetFXInitialScale
	float ___targetFXInitialScale_57;
	// System.Single HighlightPlus.HighlightEffect::targetFXEndScale
	float ___targetFXEndScale_58;
	// System.Single HighlightPlus.HighlightEffect::targetFXTransitionDuration
	float ___targetFXTransitionDuration_59;
	// System.Single HighlightPlus.HighlightEffect::targetFXStayDuration
	float ___targetFXStayDuration_60;
	// HighlightPlus.OnObjectHighlightStartEvent HighlightPlus.HighlightEffect::OnObjectHighlightStart
	OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* ___OnObjectHighlightStart_61;
	// HighlightPlus.OnObjectHighlightEndEvent HighlightPlus.HighlightEffect::OnObjectHighlightEnd
	OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* ___OnObjectHighlightEnd_62;
	// HighlightPlus.OnRendererHighlightEvent HighlightPlus.HighlightEffect::OnRendererHighlightStart
	OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* ___OnRendererHighlightStart_63;
	// HighlightPlus.OnTargetAnimatesEvent HighlightPlus.HighlightEffect::OnTargetAnimates
	OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* ___OnTargetAnimates_64;
	// HighlightPlus.SeeThroughMode HighlightPlus.HighlightEffect::seeThrough
	int32_t ___seeThrough_65;
	// System.Single HighlightPlus.HighlightEffect::seeThroughIntensity
	float ___seeThroughIntensity_66;
	// System.Single HighlightPlus.HighlightEffect::seeThroughTintAlpha
	float ___seeThroughTintAlpha_67;
	// UnityEngine.Color HighlightPlus.HighlightEffect::seeThroughTintColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___seeThroughTintColor_68;
	// System.Single HighlightPlus.HighlightEffect::seeThroughNoise
	float ___seeThroughNoise_69;
	// HighlightPlus.HighlightEffect/ModelMaterials[] HighlightPlus.HighlightEffect::rms
	ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* ___rms_70;
	// System.Int32 HighlightPlus.HighlightEffect::rmsCount
	int32_t ___rmsCount_71;
	// UnityEngine.Transform HighlightPlus.HighlightEffect::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_72;
	// System.Single HighlightPlus.HighlightEffect::highlightStartTime
	float ___highlightStartTime_73;
	// UnityEngine.Material HighlightPlus.HighlightEffect::fxMatGlowTemplate
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fxMatGlowTemplate_83;
	// UnityEngine.Material HighlightPlus.HighlightEffect::fxMatInnerGlow
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fxMatInnerGlow_84;
	// UnityEngine.Material HighlightPlus.HighlightEffect::fxMatOutlineTemplate
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fxMatOutlineTemplate_85;
	// UnityEngine.Material HighlightPlus.HighlightEffect::fxMatTarget
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fxMatTarget_86;
	// UnityEngine.Material HighlightPlus.HighlightEffect::fxMatComposeGlow
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fxMatComposeGlow_87;
	// UnityEngine.Material HighlightPlus.HighlightEffect::fxMatComposeOutline
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fxMatComposeOutline_88;
	// UnityEngine.Material HighlightPlus.HighlightEffect::fxMatBlurGlow
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fxMatBlurGlow_89;
	// UnityEngine.Material HighlightPlus.HighlightEffect::fxMatBlurOutline
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fxMatBlurOutline_90;
	// UnityEngine.Material[] HighlightPlus.HighlightEffect::fxMatOutline
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___fxMatOutline_91;
	// UnityEngine.Material[] HighlightPlus.HighlightEffect::fxMatGlow
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___fxMatGlow_92;
	// System.Single HighlightPlus.HighlightEffect::fadeStartTime
	float ___fadeStartTime_94;
	// HighlightPlus.HighlightEffect/FadingState HighlightPlus.HighlightEffect::fading
	int32_t ___fading_95;
	// UnityEngine.Rendering.CommandBuffer HighlightPlus.HighlightEffect::cbHighlight
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cbHighlight_96;
	// UnityEngine.Rendering.CommandBuffer HighlightPlus.HighlightEffect::cbSeeThrough
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cbSeeThrough_97;
	// UnityEngine.Rendering.CommandBuffer HighlightPlus.HighlightEffect::cbOverlay
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cbOverlay_98;
	// UnityEngine.Rendering.CommandBuffer HighlightPlus.HighlightEffect::cbInnerGlow
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cbInnerGlow_99;
	// System.Int32[] HighlightPlus.HighlightEffect::mipGlowBuffers
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___mipGlowBuffers_100;
	// System.Int32[] HighlightPlus.HighlightEffect::mipOutlineBuffers
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___mipOutlineBuffers_101;
	// System.Int32 HighlightPlus.HighlightEffect::glowRT
	int32_t ___glowRT_102;
	// System.Int32 HighlightPlus.HighlightEffect::outlineRT
	int32_t ___outlineRT_103;
	// System.Int32 HighlightPlus.HighlightEffect::sourceRT
	int32_t ___sourceRT_105;
	// UnityEngine.Matrix4x4 HighlightPlus.HighlightEffect::quadGlowMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___quadGlowMatrix_106;
	// UnityEngine.Matrix4x4 HighlightPlus.HighlightEffect::quadOutlineMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___quadOutlineMatrix_107;
	// UnityEngine.Vector3[] HighlightPlus.HighlightEffect::corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___corners_108;
	// UnityEngine.RenderTextureDescriptor HighlightPlus.HighlightEffect::sourceDesc
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___sourceDesc_109;
	// UnityEngine.Color HighlightPlus.HighlightEffect::debugColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___debugColor_110;
	// UnityEngine.Color HighlightPlus.HighlightEffect::blackColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___blackColor_111;
	// HighlightPlus.Visibility HighlightPlus.HighlightEffect::lastOutlineVisibility
	int32_t ___lastOutlineVisibility_112;
	// System.Boolean HighlightPlus.HighlightEffect::requireUpdateMaterial
	bool ___requireUpdateMaterial_113;
	// System.Boolean HighlightPlus.HighlightEffect::useSmoothGlow
	bool ___useSmoothGlow_115;
	// System.Boolean HighlightPlus.HighlightEffect::useSmoothOutline
	bool ___useSmoothOutline_116;
	// System.Boolean HighlightPlus.HighlightEffect::useSmoothBlend
	bool ___useSmoothBlend_117;
	// System.Boolean HighlightPlus.HighlightEffect::useGPUInstancing
	bool ___useGPUInstancing_118;
	// UnityEngine.MaterialPropertyBlock HighlightPlus.HighlightEffect::glowPropertyBlock
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___glowPropertyBlock_119;
	// UnityEngine.MaterialPropertyBlock HighlightPlus.HighlightEffect::outlinePropertyBlock
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___outlinePropertyBlock_120;
	// System.Int32 HighlightPlus.HighlightEffect::outlineOffsetsMin
	int32_t ___outlineOffsetsMin_125;
	// System.Int32 HighlightPlus.HighlightEffect::outlineOffsetsMax
	int32_t ___outlineOffsetsMax_126;
	// System.Int32 HighlightPlus.HighlightEffect::glowOffsetsMin
	int32_t ___glowOffsetsMin_127;
	// System.Int32 HighlightPlus.HighlightEffect::glowOffsetsMax
	int32_t ___glowOffsetsMax_128;
	// UnityEngine.Rendering.RenderTargetIdentifier HighlightPlus.HighlightEffect::colorAttachmentBuffer
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___colorAttachmentBuffer_129;
	// UnityEngine.Rendering.RenderTargetIdentifier HighlightPlus.HighlightEffect::depthAttachmentBuffer
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___depthAttachmentBuffer_130;
	// System.Collections.Generic.List`1<UnityEngine.Renderer> HighlightPlus.HighlightEffect::tempRR
	List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* ___tempRR_131;
	// System.Single HighlightPlus.HighlightEffect::hitInitialIntensity
	float ___hitInitialIntensity_139;
	// System.Single HighlightPlus.HighlightEffect::hitStartTime
	float ___hitStartTime_140;
	// System.Single HighlightPlus.HighlightEffect::hitFadeOutDuration
	float ___hitFadeOutDuration_141;
	// UnityEngine.Color HighlightPlus.HighlightEffect::hitColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___hitColor_142;
	// System.Boolean HighlightPlus.HighlightEffect::hitActive
	bool ___hitActive_143;
	// System.Boolean HighlightPlus.HighlightEffect::cancelSeeThroughThisFrame
	bool ___cancelSeeThroughThisFrame_149;
};

struct HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields
{
	// UnityEngine.Material HighlightPlus.HighlightEffect::fxMatMask
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fxMatMask_78;
	// UnityEngine.Material HighlightPlus.HighlightEffect::fxMatSolidColor
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fxMatSolidColor_79;
	// UnityEngine.Material HighlightPlus.HighlightEffect::fxMatSeeThrough
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fxMatSeeThrough_80;
	// UnityEngine.Material HighlightPlus.HighlightEffect::fxMatOverlay
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fxMatOverlay_81;
	// UnityEngine.Material HighlightPlus.HighlightEffect::fxMatClearStencil
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fxMatClearStencil_82;
	// UnityEngine.Vector3[] HighlightPlus.HighlightEffect::offsets
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___offsets_93;
	// UnityEngine.Mesh HighlightPlus.HighlightEffect::quadMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___quadMesh_104;
	// System.Collections.Generic.List`1<HighlightPlus.HighlightEffect> HighlightPlus.HighlightEffect::instances
	List_1_tC895C2717B87D5478D455D92736B5A12A5A041A9* ___instances_114;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> HighlightPlus.HighlightEffect::matDataDirection
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___matDataDirection_121;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> HighlightPlus.HighlightEffect::matDataGlow
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___matDataGlow_122;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> HighlightPlus.HighlightEffect::matDataColor
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___matDataColor_123;
	// UnityEngine.Matrix4x4[] HighlightPlus.HighlightEffect::matrices
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___matrices_124;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> HighlightPlus.HighlightEffect::vertices
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___vertices_132;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> HighlightPlus.HighlightEffect::normals
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___normals_133;
	// UnityEngine.Vector3[] HighlightPlus.HighlightEffect::newNormals
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___newNormals_134;
	// System.Int32[] HighlightPlus.HighlightEffect::matches
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___matches_135;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32> HighlightPlus.HighlightEffect::vv
	Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8* ___vv_136;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Mesh,UnityEngine.Mesh> HighlightPlus.HighlightEffect::smoothMeshes
	Dictionary_2_t1F3778521E542002424701BBC4C99E4CFB1C891D* ___smoothMeshes_137;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Mesh,UnityEngine.Mesh> HighlightPlus.HighlightEffect::reorientedMeshes
	Dictionary_2_t1F3778521E542002424701BBC4C99E4CFB1C891D* ___reorientedMeshes_138;
	// System.Collections.Generic.List`1<HighlightPlus.HighlightSeeThroughOccluder> HighlightPlus.HighlightEffect::occluders
	List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA* ___occluders_144;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Int32> HighlightPlus.HighlightEffect::occludersFrameCount
	Dictionary_2_t2F04C0C0C1E2089CA197A8E9E8045ABC0EB4F5C1* ___occludersFrameCount_145;
	// UnityEngine.Rendering.CommandBuffer HighlightPlus.HighlightEffect::cbOccluder
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cbOccluder_146;
	// UnityEngine.Material HighlightPlus.HighlightEffect::fxMatOccluder
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fxMatOccluder_147;
	// UnityEngine.RaycastHit[] HighlightPlus.HighlightEffect::hits
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___hits_148;
};

// HighlightPlus.HighlightManager
struct HighlightManager_tA3E889F4F48FB623A6B189B9AC50ECFD48A8465F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.LayerMask HighlightPlus.HighlightManager::layerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask_4;
	// UnityEngine.Camera HighlightPlus.HighlightManager::raycastCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___raycastCamera_5;
	// HighlightPlus.RayCastSource HighlightPlus.HighlightManager::raycastSource
	int32_t ___raycastSource_6;
	// System.Single HighlightPlus.HighlightManager::maxDistance
	float ___maxDistance_7;
	// HighlightPlus.HighlightEffect HighlightPlus.HighlightManager::baseEffect
	HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* ___baseEffect_8;
	// HighlightPlus.HighlightEffect HighlightPlus.HighlightManager::currentEffect
	HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* ___currentEffect_9;
	// UnityEngine.Transform HighlightPlus.HighlightManager::currentObject
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___currentObject_10;
};

// HighlightPlus.HighlightSeeThroughOccluder
struct HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// HighlightPlus.DetectionMethod HighlightPlus.HighlightSeeThroughOccluder::detectionMethod
	int32_t ___detectionMethod_4;
	// HighlightPlus.MeshData[] HighlightPlus.HighlightSeeThroughOccluder::meshData
	MeshDataU5BU5D_t8BC3C6C8513F1E989D460DAAEB565E4A3FA13A70* ___meshData_5;
	// System.Collections.Generic.List`1<UnityEngine.Renderer> HighlightPlus.HighlightSeeThroughOccluder::rr
	List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* ___rr_6;
};

// HighlightPlus.HighlightTrigger
struct HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// HighlightPlus.TriggerMode HighlightPlus.HighlightTrigger::triggerMode
	int32_t ___triggerMode_4;
	// UnityEngine.Camera HighlightPlus.HighlightTrigger::raycastCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___raycastCamera_5;
	// HighlightPlus.RayCastSource HighlightPlus.HighlightTrigger::raycastSource
	int32_t ___raycastSource_6;
	// System.Single HighlightPlus.HighlightTrigger::maxDistance
	float ___maxDistance_7;
	// UnityEngine.LayerMask HighlightPlus.HighlightTrigger::volumeLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___volumeLayerMask_8;
	// UnityEngine.Collider[] HighlightPlus.HighlightTrigger::colliders
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___colliders_10;
	// UnityEngine.Collider HighlightPlus.HighlightTrigger::currentCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___currentCollider_11;
};

struct HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913_StaticFields
{
	// UnityEngine.RaycastHit[] HighlightPlus.HighlightTrigger::hits
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___hits_12;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// HighlightPlus.GlowPassData[]
struct GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F  : public RuntimeArray
{
	ALIGN_FIELD (8) GlowPassData_t2D6DC0B6C392F444CA769D4761F1FEC41D092B50 m_Items[1];

	inline GlowPassData_t2D6DC0B6C392F444CA769D4761F1FEC41D092B50 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GlowPassData_t2D6DC0B6C392F444CA769D4761F1FEC41D092B50* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GlowPassData_t2D6DC0B6C392F444CA769D4761F1FEC41D092B50 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GlowPassData_t2D6DC0B6C392F444CA769D4761F1FEC41D092B50 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GlowPassData_t2D6DC0B6C392F444CA769D4761F1FEC41D092B50* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GlowPassData_t2D6DC0B6C392F444CA769D4761F1FEC41D092B50 value)
	{
		m_Items[index] = value;
	}
};
// HighlightPlus.HighlightEffect/ModelMaterials[]
struct ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C  : public RuntimeArray
{
	ALIGN_FIELD (8) ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04 m_Items[1];

	inline ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___transform_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___mesh_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___originalMesh_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___renderer_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fxMatMask_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fxMatSolidColor_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fxMatSeeThrough_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fxMatOverlay_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fxMatInnerGlow_11), (void*)NULL);
		#endif
	}
	inline ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___transform_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___mesh_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___originalMesh_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___renderer_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fxMatMask_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fxMatSolidColor_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fxMatSeeThrough_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fxMatOverlay_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fxMatInnerGlow_11), (void*)NULL);
		#endif
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
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
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A  : public RuntimeArray
{
	ALIGN_FIELD (8) Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* m_Items[1];

	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 m_Items[1];

	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		m_Items[index] = value;
	}
};
// HighlightPlus.MeshData[]
struct MeshDataU5BU5D_t8BC3C6C8513F1E989D460DAAEB565E4A3FA13A70  : public RuntimeArray
{
	ALIGN_FIELD (8) MeshData_tB7B04F2B6CC400BB80D211CBDE8F84C422A0A803 m_Items[1];

	inline MeshData_tB7B04F2B6CC400BB80D211CBDE8F84C422A0A803 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshData_tB7B04F2B6CC400BB80D211CBDE8F84C422A0A803* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshData_tB7B04F2B6CC400BB80D211CBDE8F84C422A0A803 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___renderer_0), (void*)NULL);
	}
	inline MeshData_tB7B04F2B6CC400BB80D211CBDE8F84C422A0A803 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshData_tB7B04F2B6CC400BB80D211CBDE8F84C422A0A803* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshData_tB7B04F2B6CC400BB80D211CBDE8F84C422A0A803 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___renderer_0), (void*)NULL);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
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
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mD9C1F50088CCD1E05534B8692A64DCB2824137C4_gshared (Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mFA530B10C632B3CE94B37D1A12916909897B1F34_gshared (Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___key0, int32_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF1598D9A2BE47C5C9C2994A99F217A7FD624EAC3_gshared (Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m34B1AD57666C052D367EE98ED14DCF1183D4A774_gshared (Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// System.Void UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentsInChildren_TisRuntimeObject_mF5CFEDA88E7B7E944C9BE14D1DA8F46101AEE83B_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___results0, const RuntimeMethod* method) ;

// System.Void HighlightPlus.HighlightEffect::SetHighlighted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_SetHighlighted_m0E7796EB34B79F2BD65D6ADC618CEF5661CD1E46 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, bool ___state0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void HighlightPlus.HighlightEffect::BuildQuad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_BuildQuad_m29B5FCF65215915351648B4D14BE913C4F71897D (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void HighlightPlus.HighlightProfile::Load(HighlightPlus.HighlightEffect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightProfile_Load_mE43F76141CCCAA3D5B113AA2AF598F6BD9D5FC30 (HighlightProfile_t4149BE3C0201F863B4CA7CEDFEC447B696183CA2* __this, HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* ___effect0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsInstancing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsInstancing_m1EAB72F7149F96B5B2F6DCE89A489C26FDBB5A75 (const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, const RuntimeMethod* method) ;
// System.Void HighlightPlus.HighlightEffect::CheckGeometrySupportDependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_CheckGeometrySupportDependencies_m5D52A357287B32A694C66A6B946F7EA65B82310B (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, const RuntimeMethod* method) ;
// System.Void HighlightPlus.HighlightEffect::SetupMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_SetupMaterial_m2BFF4C99FCFBE3F59A1EE08CBF21BA8C4A747806 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<HighlightPlus.HighlightEffect>::Add(T)
inline void List_1_Add_m5845CD95419E3BE7009C004DF4C27A3980553598_inline (List_1_tC895C2717B87D5478D455D92736B5A12A5A041A9* __this, HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC895C2717B87D5478D455D92736B5A12A5A041A9*, HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void HighlightPlus.HighlightEffect::UpdateMaterialProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_UpdateMaterialProperties_m207F5DECD7AB1E89B3EB08F4F23E2924CEC79BFA (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<HighlightPlus.HighlightEffect>::IndexOf(T)
inline int32_t List_1_IndexOf_mA13BB03189D3A8A2047207BA18FBF07A1C7C5663 (List_1_tC895C2717B87D5478D455D92736B5A12A5A041A9* __this, HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC895C2717B87D5478D455D92736B5A12A5A041A9*, HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<HighlightPlus.HighlightEffect>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m2A1E4A48A8E28D26D8986ABF5BF31E16C1839C00 (List_1_tC895C2717B87D5478D455D92736B5A12A5A041A9* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC895C2717B87D5478D455D92736B5A12A5A041A9*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void HighlightPlus.HighlightProfile::Save(HighlightPlus.HighlightEffect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightProfile_Save_m5E746756E4CF4800BE3D9415E43BD1D50099B44C (HighlightProfile_t4149BE3C0201F863B4CA7CEDFEC447B696183CA2* __this, HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* ___effect0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void HighlightPlus.HighlightEffect::BuildCommandBuffer(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_BuildCommandBuffer_m36822E0D81EC743729E05C89D20C8CB1CC8676F0 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, const RuntimeMethod* method) ;
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B RenderTargetIdentifier_op_Implicit_m84624C22E2F3271EBEE2E96A8404969B9E99E526 (int32_t ___nameID0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.RenderTargetIdentifier::op_Equality(UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTargetIdentifier_op_Equality_m77ABAA9A264984CA70912BF0A49B03F888A45F02 (RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___lhs0, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.Rendering.RenderTargetIdentifier::op_Implicit(UnityEngine.Rendering.BuiltinRenderTextureType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B RenderTargetIdentifier_op_Implicit_m4A8EE3AFC545170F3F2215D8DA0F2474B0015CC8 (int32_t ___type0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_Clear_m4E1272BD1A0C162C9C26434E115279F42FA557C7 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, const RuntimeMethod* method) ;
// System.Void HighlightPlus.HighlightEffect::RenderOccluders(UnityEngine.Rendering.CommandBuffer,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_RenderOccluders_m5A6E7F1C205136A034AB2DA2168658471A72F473 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cb0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_cullingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_cullingMask_m6F5AFF8FB522F876D99E839BF77D8F27F26A1EF8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Renderer::get_isVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_isVisible_mBCDDEB0EF27442FD1D910CD26754135B677B8251 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.CameraType UnityEngine.Camera::get_cameraType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_cameraType_m85434C4C986D2EAC04FBFA44B284840AFC497851 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_DrawMesh_m45BA88D4388EC7E5CDAABD42CD6CE29A5120042C (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material2, const RuntimeMethod* method) ;
// System.Boolean HighlightPlus.QualityLevelExtensions::UsesMultipleOffsets(HighlightPlus.QualityLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QualityLevelExtensions_UsesMultipleOffsets_mC4531683604025C304753CBBE3AD5A72388F28D5 (int32_t ___qualityLevel0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::DrawRenderer(UnityEngine.Renderer,UnityEngine.Material,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_DrawRenderer_m0E01900E0CA8B52F3BB03C82A27214A354007138 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material1, int32_t ___submeshIndex2, int32_t ___shaderPass3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mesh::get_subMeshCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::DrawRenderer(UnityEngine.Renderer,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_DrawRenderer_m6667EA1141D0759454E51CDC2A24DB531357C7C6 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material1, int32_t ___submeshIndex2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Void HighlightPlus.OnObjectHighlightEndEvent::Invoke(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnObjectHighlightEndEvent_Invoke_m7EBAEDB3E40C6587FFE7808B8953D8A534B36993_inline (OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_SendMessage_m7CD6568BD5D93384C683CFF1E5088D17F20F3459 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___methodName0, RuntimeObject* ___value1, int32_t ___options2, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Clear()
inline void List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, const RuntimeMethod*))List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::Add(T)
inline void List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector4>::get_Count()
inline int32_t List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, const RuntimeMethod*))List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_gshared_inline)(__this, method);
}
// System.Void UnityEngine.MaterialPropertyBlock::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_Clear_m83CE1CC476A80F162FC89DBF6C2C78659B6E1253 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::SetVectorArray(System.String,System.Collections.Generic.List`1<UnityEngine.Vector4>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetVectorArray_m4A8A90178454BE449DCA42B43D860FE08E512E71 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, String_t* ___name0, List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___values1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::DrawMeshInstanced(UnityEngine.Mesh,System.Int32,UnityEngine.Material,System.Int32,UnityEngine.Matrix4x4[],System.Int32,UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_DrawMeshInstanced_mABC4059E4316A76508915D89CD16D238D3285974 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, int32_t ___submeshIndex1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material2, int32_t ___shaderPass3, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___matrices4, int32_t ___count5, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___properties6, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_DrawMesh_m2CDCAC3E41416226D38770259BB2C56CB37D5EEF (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material2, int32_t ___submeshIndex3, int32_t ___shaderPass4, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0 (const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Today()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Today_mC32D6B4A0EBD6BFBC0E978BEBA48CB4DA5E38FB0 (const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::Subtract(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_Subtract_m4064A98F489219E9C414DF5C03EE041351B4502A (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void HighlightPlus.OnTargetAnimatesEvent::Invoke(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnTargetAnimatesEvent_Invoke_m45D255781DC043D4C6EADAFC94D73ADFEF74E5D1_inline (OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___center0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rotation1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___scale2, float ___t3, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_DrawMesh_m10A0404616C386DB3C4A61A5E5BAF7D0706C7305 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___matrix1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material2, int32_t ___submeshIndex3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_pixelWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelWidth_m55AC8AD744FC0179865C2E630C68F9AD0799065D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_pixelHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_pixelHeight_m00881B5A440B0018D5A8F837694027050B500F59 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.XRSettings::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSettings_get_enabled_m5ECD63DA0B306F7A3FBFD6B67A5B0702F8AEFB54 (const RuntimeMethod* method) ;
// UnityEngine.RenderTextureDescriptor UnityEngine.XR.XRSettings::get_eyeTextureDesc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 XRSettings_get_eyeTextureDesc_m5E3192C4B94BF8173315571B335444CB4644D324 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isMobilePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53 (const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::.ctor(System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor__ctor_m939E1427BCEEEDDF2CE6479198FB5E03561B3D3D (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___width0, int32_t ___height1, int32_t ___colorFormat2, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_volumeDepth(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_volumeDepth_mEF9610D1C14182417A01B7243DEE6B559A13B34D_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_msaaSamples(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_msaaSamples_m6910E09489372746391B14FBAF59A7237539D6C4_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_useMipMap(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_useMipMap_m2A2A3BC4C8ECCC532AC33E7034502EB2AE242539 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_depthBufferBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_depthBufferBits_mA3710C0D6E485BA6465B328CD8B1954F0E4C5819 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::GetTemporaryRT(System.Int32,UnityEngine.RenderTextureDescriptor,UnityEngine.FilterMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_GetTemporaryRT_m98BCBFF670DDD3AC8657664F8252A9DF64D49FA5 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, int32_t ___nameID0, RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___desc1, int32_t ___filter2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetRenderTarget_m89782BA1E8AD50020DBDB9EABF32F8AA9356628A (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___rt0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::ClearRenderTarget(System.Boolean,System.Boolean,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_ClearRenderTarget_mABBE498A16DCEADCAA8F5DB50073012F74D03F14 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, bool ___clearDepth0, bool ___clearColor1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds0, const RuntimeMethod* method) ;
// System.Boolean HighlightPlus.HighlightEffect::ComputeSmoothQuadMatrix(UnityEngine.Camera,UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HighlightEffect_ComputeSmoothQuadMatrix_mE2EACE1BB49A343B995A2B5A2360F1EF9718D7A0 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds1, const RuntimeMethod* method) ;
// System.Void HighlightPlus.HighlightEffect::SmoothGlow(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_SmoothGlow_m85CA502CC1213664584C1BD07E74FC3EF564A051 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, int32_t ___rtWidth0, int32_t ___rtHeight1, const RuntimeMethod* method) ;
// System.Void HighlightPlus.HighlightEffect::SmoothOutline(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_SmoothOutline_m84FD66554EF830644ED46B28DEA1EAD174482B02 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, int32_t ___rtWidth0, int32_t ___rtHeight1, const RuntimeMethod* method) ;
// System.Void HighlightPlus.HighlightEffect::ComposeSmoothBlend(HighlightPlus.Visibility,HighlightPlus.Visibility)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_ComposeSmoothBlend_mE3F2D1A1D5E457F812226CF13775D692ED65C2D7 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, int32_t ___smoothGlowVisibility0, int32_t ___smoothOutlineVisibility1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void HighlightPlus.HighlightEffect::BuildMatrix(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_BuildMatrix_m597CDD0B2A76DDC4CE943705C804597C6A9BB2B6 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scrMin1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scrMax2, int32_t ___border3, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___quadMatrix4, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::get_vrUsage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_vrUsage_m061FAE1190A623B9DEE133F1506ADB23C983F6B0_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_vrUsage(UnityEngine.VRTextureUsage)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_vrUsage_m994CB3D4B250A70BE005D9FDFD24D868E07A52F0_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_width(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_width_m3B2494007BFE3AD4D14403407C9B24F5045E7E10_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_height(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_height_m1FE41111472DAA9B5E80FFAF3445004D72A3CFA5_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::Blit(UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_Blit_m20AC38869B1D9D16C37E1A697B4EF3E2B0D12530 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___source0, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___dest1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat2, int32_t ___pass3, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTarget(UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetRenderTarget_mE30BCA8259825C1CD2F88B6A98587CB90A119452 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___color0, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___depth1, const RuntimeMethod* method) ;
// System.Int32 HighlightPlus.HighlightEffect::GetZTestValue(HighlightPlus.Visibility)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HighlightEffect_GetZTestValue_m649B1407B452B08B8F6326CDAF831529A46EF6D7 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, int32_t ___param0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::ReleaseTemporaryRT(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_ReleaseTemporaryRT_m4651A4B373DF432AA44F06A6F20852ED5996CC8E (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, int32_t ___nameID0, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72 (String_t* ___name0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.Material>(T)
inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Object_Instantiate_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC1DC863B344E1F38257F041D70495B706A5FCBE4 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___original0, const RuntimeMethod* method)
{
	return ((  Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* (*) (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// System.Void HighlightPlus.HighlightEffect::SetupMaterial(UnityEngine.Renderer[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_SetupMaterial_m63F7BD88B10F94862FE2240CBEA249E4F301FDE6 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ___rr0, const RuntimeMethod* method) ;
// System.Boolean HighlightPlus.OnObjectHighlightStartEvent::Invoke(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OnObjectHighlightStartEvent_Invoke_m9BACA4A0E81A3843B0872B6F8475386C5FBEC742_inline (OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) ;
// System.Void HighlightPlus.HighlightEffect::ForkMaterial(UnityEngine.Material,UnityEngine.Material[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_ForkMaterial_m1A1856DE9F512098E252DA28742283CC854CB6E4 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D** ___array1, int32_t ___count2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Renderer>::.ctor()
inline void List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>()
inline RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Renderer>::Add(T)
inline void List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_inline (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.Renderer>::ToArray()
inline RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* List_1_ToArray_mB524B909209E02C6B5202568C4006AF3CA71EFA0 (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<HighlightPlus.HighlightEffect>()
inline HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* Component_GetComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_m8739CFB57B40043E52DEBE91B09BFA6342DE9255 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Renderer[] HighlightPlus.HighlightEffect::FindRenderersWithLayerInScene(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* HighlightEffect_FindRenderersWithLayerInScene_m458BA97B2F525D03F2C86F552A014EDCCE47FACA (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layer0, const RuntimeMethod* method) ;
// UnityEngine.Renderer[] HighlightPlus.HighlightEffect::FindRenderersWithLayerInChildren(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* HighlightEffect_FindRenderersWithLayerInChildren_mD4FB6FA57F09F114B453108F0BCB120EB115D6FA (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layer0, const RuntimeMethod* method) ;
// System.Boolean HighlightPlus.HighlightEffect::get_highlighted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HighlightEffect_get_highlighted_m377F5C74676DAE438F36EF0C24444FB7314EC741_inline (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, const RuntimeMethod* method) ;
// System.Void HighlightPlus.HighlightEffect::set_highlighted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_set_highlighted_mD8E96F517EA4F033686749E84BE0D0697305A5A5 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean HighlightPlus.OnRendererHighlightEvent::Invoke(UnityEngine.Renderer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OnRendererHighlightEvent_Invoke_m2BBFCFC882793839F1CE2591B2963B0B28701B52_inline (OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer0, const RuntimeMethod* method) ;
// System.Void HighlightPlus.HighlightEffect::CheckCommandBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_CheckCommandBuffers_mCE9F65BA168348543B882E93ABF1A38EE3E6A3F8 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.SkinnedMeshRenderer::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Renderer::get_isPartOfStaticBatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_isPartOfStaticBatch_m53CAB216927C6A8D61AC1529132AE7966D9443E0 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshCollider>()
inline MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* Component_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFC0F02CCD26A6A186031CF43E92D7B60EA1CC370 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshCollider::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshCollider_get_sharedMesh_mFB4B8534501C29930D2D3710D6D82E60093FA21E (MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// UnityEngine.Material[] HighlightPlus.HighlightEffect::Fork(UnityEngine.Material,UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* HighlightEffect_Fork_m2D8F3EEA181B94445C551405BCD2F2524F134D40 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat0, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh1, const RuntimeMethod* method) ;
// System.Boolean HighlightPlus.HighlightEffect/ModelMaterials::get_preserveOriginalMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ModelMaterials_get_preserveOriginalMesh_m38D52DDFF7E797991380BE4FFB267EF3CB87E1DB (ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04* __this, const RuntimeMethod* method) ;
// System.Void HighlightPlus.HighlightEffect::ReorientNormals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_ReorientNormals_m992F4431FB136BF853314B374CBC1D28B20F7C61 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, int32_t ___objIndex0, const RuntimeMethod* method) ;
// System.Void HighlightPlus.HighlightEffect::AverageNormals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_AverageNormals_mA95BEE9B97C08F922B6567DB87E6D5EAA3E8EC2A (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, int32_t ___objIndex0, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<UnityEngine.Renderer>()
inline RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* Object_FindObjectsOfType_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m3A2AA29F0DAF9A715FBCEF3DFA506F7BE8564E0A (const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared)(method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Renderer>::Clear()
inline void List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_inline (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Void HighlightPlus.HighlightEffect::InitMaterial(UnityEngine.Material&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_InitMaterial_m41641602445EACD919BE6383A9200A8A63CB1470 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** ___material0, String_t* ___shaderName1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_enableInstancing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_enableInstancing_m84BA72A28BCFE94B50535BDE410A539A7CD7AF80 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer__ctor_m9445F1606331B732FCA393591F3E230714FD5FF4 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.CommandBuffer::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_set_name_mEC83B7FE28D6817A36A8B894A661D6D217488965 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Material[] UnityEngine.Renderer::get_sharedMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* Renderer_get_sharedMaterials_m0B61AFD8EDA35A70C796FFB2F28BB62380051ABF (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Material::get_mainTextureOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Material_get_mainTextureOffset_m642934E0FF835323FCAFE2F43E314722E8B6A439 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Material::get_mainTextureScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Material_get_mainTextureScale_mF28E905E1331B3F6AB145193026A1729E17BE7ED (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTextureScale(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTextureScale_mABC2B4327CCDC6BB0E0EA72C6F29817400F56EF1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.Texture2D>(System.String)
inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Resources_Load_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m301E95E824CB214DD0BA6D04221CE97B30BE9ACD (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared)(___path0, method);
}
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Mesh,UnityEngine.Mesh>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m59B574D52CFCC7A39DF04081CC751E9947011933 (Dictionary_2_t1F3778521E542002424701BBC4C99E4CFB1C891D* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___key0, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1F3778521E542002424701BBC4C99E4CFB1C891D*, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean UnityEngine.Mesh::get_isReadable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mesh_get_isReadable_m3309900DB9B66BD321128839E6801722D15CD1E0 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Mesh::GetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetNormals_m6D4E3261EDC58B487E7F77C1C164495A42D41314 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___normals0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Mesh::GetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetVertices_m5BF8777074E383AD8C4B9974D27E4AB52963D92E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___vertices0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>::Clear()
inline void Dictionary_2_Clear_mD9C1F50088CCD1E05534B8692A64DCB2824137C4 (Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8*, const RuntimeMethod*))Dictionary_2_Clear_mD9C1F50088CCD1E05534B8692A64DCB2824137C4_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mFA530B10C632B3CE94B37D1A12916909897B1F34 (Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_mFA530B10C632B3CE94B37D1A12916909897B1F34_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mF1598D9A2BE47C5C9C2994A99F217A7FD624EAC3 (Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_mF1598D9A2BE47C5C9C2994A99F217A7FD624EAC3_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,T)
inline void List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_gshared)(__this, ___index0, ___value1, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.Mesh>(T)
inline Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* Object_Instantiate_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m269810FFD0356A0743AF08CD15D6ACA5B856982A (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___original0, const RuntimeMethod* method)
{
	return ((  Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* (*) (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetNormals_mB4072A4D2600768FD62BC9CAAFF8C43955A4A365 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___inNormals0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Mesh,UnityEngine.Mesh>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m3B1C7B18AF5833372B42AAB56A959A9766FF3201 (Dictionary_2_t1F3778521E542002424701BBC4C99E4CFB1C891D* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___key0, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1F3778521E542002424701BBC4C99E4CFB1C891D*, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<HighlightPlus.HighlightSeeThroughOccluder>::Contains(T)
inline bool List_1_Contains_m6A13344402243643B18F102507DCAAC72711EDA3 (List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA* __this, HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA*, HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<HighlightPlus.HighlightSeeThroughOccluder>::Add(T)
inline void List_1_Add_m885F08C9F401FA8D6ED8964DBB45FDF3A09A51EC_inline (List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA* __this, HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA*, HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<HighlightPlus.HighlightSeeThroughOccluder>::Remove(T)
inline bool List_1_Remove_mB81B49439425E218155C62BC228A7DD59F4A4C18 (List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA* __this, HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA*, HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<HighlightPlus.HighlightSeeThroughOccluder>::get_Count()
inline int32_t List_1_get_Count_m0B3872F713AC87961C023F1FCDC3FB3968031494_inline (List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<HighlightPlus.HighlightSeeThroughOccluder>::get_Item(System.Int32)
inline HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* List_1_get_Item_mA533E222E90031FD47C0825021C5F9E97B129353 (List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* (*) (List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Physics::BoxCastNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit[],UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Physics_BoxCastNonAlloc_m471B2702BCB529313AA3F68123F499A636C6B898 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___halfExtents1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction2, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___results3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation4, float ___maxDistance5, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Int32>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m74C1A74AF0C5C5A09082C2E95BC15B56937DE09E (Dictionary_2_t2F04C0C0C1E2089CA197A8E9E8045ABC0EB4F5C1* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2F04C0C0C1E2089CA197A8E9E8045ABC0EB4F5C1*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Int32>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mA53F92CEF2D7E3057257D336DB1AFFBBE844FE57 (Dictionary_2_t2F04C0C0C1E2089CA197A8E9E8045ABC0EB4F5C1* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2F04C0C0C1E2089CA197A8E9E8045ABC0EB4F5C1*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922 (int32_t ___intVal0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m1EF7276EF58050DFBA8921E2383F0249C08D346F_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<HighlightPlus.HighlightEffect>::.ctor()
inline void List_1__ctor_m49BF8D72A498F88B4CA42BCECF1D1C744EE56002 (List_1_tC895C2717B87D5478D455D92736B5A12A5A041A9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC895C2717B87D5478D455D92736B5A12A5A041A9*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector4>::.ctor()
inline void List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20 (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, const RuntimeMethod*))List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Vector3,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m34B1AD57666C052D367EE98ED14DCF1183D4A774 (Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8*, const RuntimeMethod*))Dictionary_2__ctor_m34B1AD57666C052D367EE98ED14DCF1183D4A774_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Mesh,UnityEngine.Mesh>::.ctor()
inline void Dictionary_2__ctor_m224A0903E4694C420F3A13D5CDF8BD3FBB9C8D78 (Dictionary_2_t1F3778521E542002424701BBC4C99E4CFB1C891D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1F3778521E542002424701BBC4C99E4CFB1C891D*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<HighlightPlus.HighlightSeeThroughOccluder>::.ctor()
inline void List_1__ctor_mEB82E11F5C86A91F63F27CA2D407BFDA537EF0A7 (List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m2490F345EB09891D2C13DD1BC202D67C36D38C54 (Dictionary_2_t2F04C0C0C1E2089CA197A8E9E8045ABC0EB4F5C1* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2F04C0C0C1E2089CA197A8E9E8045ABC0EB4F5C1*, const RuntimeMethod*))Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<HighlightPlus.HighlightEffect>()
inline HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* GameObject_AddComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_mF86F84555AEC1D85DD09B9C341C91FFD1BF94F0C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Camera HighlightPlus.HighlightManager::GetCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* HighlightManager_GetCamera_m26F0D1288DF912768015149DCBB8F33D499A30EF (const RuntimeMethod* method) ;
// System.Void HighlightPlus.HighlightManager::SwitchesCollider(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightManager_SwitchesCollider_m218CF95D99433566BBE504F545DD2F7A46F763A3 (HighlightManager_tA3E889F4F48FB623A6B189B9AC50ECFD48A8465F* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___newObject0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m6140FC91F32547F11C687FA1A002850598B74A0D (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<HighlightPlus.HighlightTrigger>()
inline HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* Component_GetComponent_TisHighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913_m15999E44C865C0D1B238518237AE143FDC9C32BE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void HighlightPlus.HighlightEffect::SetTarget(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_SetTarget_m4C130CF82BB4E4BD902B3FEA5C6677EC0DC45A5A (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Object_FindObjectOfType_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3D85609E0A4EE301B50F6AF691611EA62DD26F6E (const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// HighlightPlus.GlowPassData[] HighlightPlus.HighlightProfile::GetGlowPassesCopy(HighlightPlus.GlowPassData[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* HighlightProfile_GetGlowPassesCopy_m3E742C02F915AD34CB66ABF67A26A1AF2EAF0893 (HighlightProfile_t4149BE3C0201F863B4CA7CEDFEC447B696183CA2* __this, GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* ___glowPasses0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void HighlightPlus.HighlightSeeThroughOccluder::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightSeeThroughOccluder_Init_mD9CFF9659AD22D9FF128285099A7DDEFCBC4489A (HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* __this, const RuntimeMethod* method) ;
// System.Void HighlightPlus.HighlightEffect::RegisterOccluder(HighlightPlus.HighlightSeeThroughOccluder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_RegisterOccluder_mD55882B9F47DE93BAAE0E48FB43CDBA9AEAD0430 (HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* ___occluder0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>(System.Collections.Generic.List`1<T>)
inline void Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mBBF8A68E10A9B71E580782A0FF65484595D61966 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* ___results0, const RuntimeMethod* method)
{
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mF5CFEDA88E7B7E944C9BE14D1DA8F46101AEE83B_gshared)(__this, ___results0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Renderer>::get_Count()
inline int32_t List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_inline (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Renderer>::get_Item(System.Int32)
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2 (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void HighlightPlus.HighlightEffect::UnregisterOccluder(HighlightPlus.HighlightSeeThroughOccluder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_UnregisterOccluder_m3D8A5F77B2FA604CCA5B43D08869B533949747B3 (HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* ___occluder0, const RuntimeMethod* method) ;
// System.Void HighlightPlus.HighlightTrigger::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightTrigger_Init_m5140449532326607F95E90A107E3EEE8D1250F4E (HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator HighlightPlus.HighlightTrigger::DoRayCast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HighlightTrigger_DoRayCast_mE539910444E8929A4E84CF8331E0D92BF9C6E7C8 (HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.MeshCollider>()
inline MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* GameObject_AddComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFE0E36B3C1670C308B04C39EDC76838DD59826B7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void HighlightPlus.HighlightTrigger/<DoRayCast>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoRayCastU3Ed__11__ctor_m0C33B00FB10CBD08B440842B0E69A626722E951B (U3CDoRayCastU3Ed__11_t64A74AF467E9FE0DBF76E3532C8E0A7CE704FC37* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void HighlightPlus.HighlightTrigger::Highlight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightTrigger_Highlight_mC7DBF2ADC4C95CF0493C76796D3F96943DB4DCAB (HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* __this, bool ___state0, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>()
inline ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Physics::RaycastNonAlloc(UnityEngine.Ray,UnityEngine.RaycastHit[],System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Physics_RaycastNonAlloc_mAE03085BE7D7DF23D88E330C8C6C7ABA7AFD48DE (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___results1, float ___maxDistance2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Physics::RaycastNonAlloc(UnityEngine.Ray,UnityEngine.RaycastHit[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Physics_RaycastNonAlloc_m6FF218093B5910E12EE77682906C6D41ECD205B7 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___results1, const RuntimeMethod* method) ;
// System.Void HighlightPlus.HighlightTrigger::SwitchCollider(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightTrigger_SwitchCollider_mFF25DB4A90C3E29589CCF539854BE224E9376250 (HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___newCollider0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
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
bool OnObjectHighlightStartEvent_Invoke_m9BACA4A0E81A3843B0872B6F8475386C5FBEC742_Multicast(OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* currentDelegate = reinterpret_cast<OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool OnObjectHighlightStartEvent_Invoke_m9BACA4A0E81A3843B0872B6F8475386C5FBEC742_Open(OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___obj0, method);
}
bool OnObjectHighlightStartEvent_Invoke_m9BACA4A0E81A3843B0872B6F8475386C5FBEC742_OpenStaticInvoker(OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(__this->___method_ptr_0, method, NULL, ___obj0);
}
bool OnObjectHighlightStartEvent_Invoke_m9BACA4A0E81A3843B0872B6F8475386C5FBEC742_ClosedStaticInvoker(OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___obj0);
}
// System.Void HighlightPlus.OnObjectHighlightStartEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnObjectHighlightStartEvent__ctor_m65D4BA25165A6CB5E1B52506A18E021CA7571DCB (OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnObjectHighlightStartEvent_Invoke_m9BACA4A0E81A3843B0872B6F8475386C5FBEC742_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnObjectHighlightStartEvent_Invoke_m9BACA4A0E81A3843B0872B6F8475386C5FBEC742_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnObjectHighlightStartEvent_Invoke_m9BACA4A0E81A3843B0872B6F8475386C5FBEC742_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&OnObjectHighlightStartEvent_Invoke_m9BACA4A0E81A3843B0872B6F8475386C5FBEC742_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnObjectHighlightStartEvent_Invoke_m9BACA4A0E81A3843B0872B6F8475386C5FBEC742_Multicast;
}
// System.Boolean HighlightPlus.OnObjectHighlightStartEvent::Invoke(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OnObjectHighlightStartEvent_Invoke_m9BACA4A0E81A3843B0872B6F8475386C5FBEC742 (OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HighlightPlus.OnObjectHighlightStartEvent::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnObjectHighlightStartEvent_BeginInvoke_m59F3DFCFEF9CBB3376D19F8AACBC9D4870E12DE0 (OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___obj0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean HighlightPlus.OnObjectHighlightStartEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OnObjectHighlightStartEvent_EndInvoke_mA32D91F1CF3C19B6FCD48E622B5FC35E88DBADBA (OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnObjectHighlightEndEvent_Invoke_m7EBAEDB3E40C6587FFE7808B8953D8A534B36993_Multicast(OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* currentDelegate = reinterpret_cast<OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnObjectHighlightEndEvent_Invoke_m7EBAEDB3E40C6587FFE7808B8953D8A534B36993_Open(OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___obj0, method);
}
void OnObjectHighlightEndEvent_Invoke_m7EBAEDB3E40C6587FFE7808B8953D8A534B36993_OpenStaticInvoker(OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(__this->___method_ptr_0, method, NULL, ___obj0);
}
void OnObjectHighlightEndEvent_Invoke_m7EBAEDB3E40C6587FFE7808B8953D8A534B36993_ClosedStaticInvoker(OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___obj0);
}
// System.Void HighlightPlus.OnObjectHighlightEndEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnObjectHighlightEndEvent__ctor_mCC2ED3650C1F3B4E3505510A7F446997E5C70403 (OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnObjectHighlightEndEvent_Invoke_m7EBAEDB3E40C6587FFE7808B8953D8A534B36993_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnObjectHighlightEndEvent_Invoke_m7EBAEDB3E40C6587FFE7808B8953D8A534B36993_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnObjectHighlightEndEvent_Invoke_m7EBAEDB3E40C6587FFE7808B8953D8A534B36993_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&OnObjectHighlightEndEvent_Invoke_m7EBAEDB3E40C6587FFE7808B8953D8A534B36993_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnObjectHighlightEndEvent_Invoke_m7EBAEDB3E40C6587FFE7808B8953D8A534B36993_Multicast;
}
// System.Void HighlightPlus.OnObjectHighlightEndEvent::Invoke(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnObjectHighlightEndEvent_Invoke_m7EBAEDB3E40C6587FFE7808B8953D8A534B36993 (OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HighlightPlus.OnObjectHighlightEndEvent::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnObjectHighlightEndEvent_BeginInvoke_m37D35B98CFD6448103F2A787BD64053B18CA4ED0 (OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___obj0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void HighlightPlus.OnObjectHighlightEndEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnObjectHighlightEndEvent_EndInvoke_m4489A103B73228EA2419EE6EFD5E302FF0DF1C7F (OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
bool OnRendererHighlightEvent_Invoke_m2BBFCFC882793839F1CE2591B2963B0B28701B52_Multicast(OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* currentDelegate = reinterpret_cast<OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___renderer0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool OnRendererHighlightEvent_Invoke_m2BBFCFC882793839F1CE2591B2963B0B28701B52_Open(OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer0, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___renderer0, method);
}
bool OnRendererHighlightEvent_Invoke_m2BBFCFC882793839F1CE2591B2963B0B28701B52_OpenStaticInvoker(OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* >::Invoke(__this->___method_ptr_0, method, NULL, ___renderer0);
}
bool OnRendererHighlightEvent_Invoke_m2BBFCFC882793839F1CE2591B2963B0B28701B52_ClosedStaticInvoker(OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, RuntimeObject*, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___renderer0);
}
bool OnRendererHighlightEvent_Invoke_m2BBFCFC882793839F1CE2591B2963B0B28701B52_OpenVirtual(OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer0, const RuntimeMethod* method)
{
	return VirtualFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), ___renderer0);
}
bool OnRendererHighlightEvent_Invoke_m2BBFCFC882793839F1CE2591B2963B0B28701B52_OpenInterface(OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer0, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___renderer0);
}
bool OnRendererHighlightEvent_Invoke_m2BBFCFC882793839F1CE2591B2963B0B28701B52_OpenGenericVirtual(OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer0, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker0< bool >::Invoke(method, ___renderer0);
}
bool OnRendererHighlightEvent_Invoke_m2BBFCFC882793839F1CE2591B2963B0B28701B52_OpenGenericInterface(OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer0, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker0< bool >::Invoke(method, ___renderer0);
}
// System.Void HighlightPlus.OnRendererHighlightEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRendererHighlightEvent__ctor_m22A3FCA9C9E8EB3E9D749D3E12E863BD25BF5EAC (OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnRendererHighlightEvent_Invoke_m2BBFCFC882793839F1CE2591B2963B0B28701B52_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnRendererHighlightEvent_Invoke_m2BBFCFC882793839F1CE2591B2963B0B28701B52_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnRendererHighlightEvent_Invoke_m2BBFCFC882793839F1CE2591B2963B0B28701B52_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnRendererHighlightEvent_Invoke_m2BBFCFC882793839F1CE2591B2963B0B28701B52_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnRendererHighlightEvent_Invoke_m2BBFCFC882793839F1CE2591B2963B0B28701B52_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnRendererHighlightEvent_Invoke_m2BBFCFC882793839F1CE2591B2963B0B28701B52_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnRendererHighlightEvent_Invoke_m2BBFCFC882793839F1CE2591B2963B0B28701B52_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnRendererHighlightEvent_Invoke_m2BBFCFC882793839F1CE2591B2963B0B28701B52_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnRendererHighlightEvent_Invoke_m2BBFCFC882793839F1CE2591B2963B0B28701B52_Multicast;
}
// System.Boolean HighlightPlus.OnRendererHighlightEvent::Invoke(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OnRendererHighlightEvent_Invoke_m2BBFCFC882793839F1CE2591B2963B0B28701B52 (OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___renderer0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HighlightPlus.OnRendererHighlightEvent::BeginInvoke(UnityEngine.Renderer,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnRendererHighlightEvent_BeginInvoke_mB60273B96FC8FBCD6EB2651A5A58DE628B87A780 (OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___renderer0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean HighlightPlus.OnRendererHighlightEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OnRendererHighlightEvent_EndInvoke_m54F7D60DA8F17CEE5AB8A9437EC664F15B48CB82 (OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnTargetAnimatesEvent_Invoke_m45D255781DC043D4C6EADAFC94D73ADFEF74E5D1_Multicast(OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___center0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rotation1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___scale2, float ___t3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* currentDelegate = reinterpret_cast<OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___center0, ___rotation1, ___scale2, ___t3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnTargetAnimatesEvent_Invoke_m45D255781DC043D4C6EADAFC94D73ADFEF74E5D1_Open(OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___center0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rotation1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___scale2, float ___t3, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___center0, ___rotation1, ___scale2, ___t3, method);
}
void OnTargetAnimatesEvent_Invoke_m45D255781DC043D4C6EADAFC94D73ADFEF74E5D1_OpenStaticInvoker(OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___center0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rotation1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___scale2, float ___t3, const RuntimeMethod* method)
{
	InvokerActionInvoker4< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float >::Invoke(__this->___method_ptr_0, method, NULL, ___center0, ___rotation1, ___scale2, ___t3);
}
void OnTargetAnimatesEvent_Invoke_m45D255781DC043D4C6EADAFC94D73ADFEF74E5D1_ClosedStaticInvoker(OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___center0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rotation1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___scale2, float ___t3, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___center0, ___rotation1, ___scale2, ___t3);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066 (OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___center0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rotation1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___scale2, float ___t3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___center0, ___rotation1, ___scale2, ___t3);

}
// System.Void HighlightPlus.OnTargetAnimatesEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTargetAnimatesEvent__ctor_mA186B373B5D9178C8D14E47D64B20E893E7C028C (OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnTargetAnimatesEvent_Invoke_m45D255781DC043D4C6EADAFC94D73ADFEF74E5D1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnTargetAnimatesEvent_Invoke_m45D255781DC043D4C6EADAFC94D73ADFEF74E5D1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnTargetAnimatesEvent_Invoke_m45D255781DC043D4C6EADAFC94D73ADFEF74E5D1_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&OnTargetAnimatesEvent_Invoke_m45D255781DC043D4C6EADAFC94D73ADFEF74E5D1_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnTargetAnimatesEvent_Invoke_m45D255781DC043D4C6EADAFC94D73ADFEF74E5D1_Multicast;
}
// System.Void HighlightPlus.OnTargetAnimatesEvent::Invoke(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTargetAnimatesEvent_Invoke_m45D255781DC043D4C6EADAFC94D73ADFEF74E5D1 (OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___center0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rotation1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___scale2, float ___t3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___center0, ___rotation1, ___scale2, ___t3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HighlightPlus.OnTargetAnimatesEvent::BeginInvoke(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnTargetAnimatesEvent_BeginInvoke_m56C8CE100DC274FFBD13D56C5B9680E1D333ABF2 (OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___center0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rotation1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___scale2, float ___t3, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback4, RuntimeObject* ___object5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &*___center0);
	__d_args[1] = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &*___rotation1);
	__d_args[2] = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &*___scale2);
	__d_args[3] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___t3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void HighlightPlus.OnTargetAnimatesEvent::EndInvoke(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTargetAnimatesEvent_EndInvoke_m7FF3C00B5BEC8C14BD9B8C518F7CD612DECD54B4 (OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___center0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rotation1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___scale2, RuntimeObject* ___result3, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___center0,
	___rotation1,
	___scale2,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result3, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean HighlightPlus.QualityLevelExtensions::UsesMultipleOffsets(HighlightPlus.QualityLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QualityLevelExtensions_UsesMultipleOffsets_mC4531683604025C304753CBBE3AD5A72388F28D5 (int32_t ___qualityLevel0, const RuntimeMethod* method) 
{
	{
		// public static bool UsesMultipleOffsets(this QualityLevel qualityLevel) => qualityLevel == QualityLevel.Medium || qualityLevel == QualityLevel.High;
		int32_t L_0 = ___qualityLevel0;
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___qualityLevel0;
		return (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
	}

IL_0009:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean HighlightPlus.HighlightEffect::get_highlighted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HighlightEffect_get_highlighted_m377F5C74676DAE438F36EF0C24444FB7314EC741 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, const RuntimeMethod* method) 
{
	{
		// public bool highlighted { get { return _highlighted; } set { SetHighlighted(value); } }
		bool L_0 = __this->____highlighted_16;
		return L_0;
	}
}
// System.Void HighlightPlus.HighlightEffect::set_highlighted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_set_highlighted_mD8E96F517EA4F033686749E84BE0D0697305A5A5 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool highlighted { get { return _highlighted; } set { SetHighlighted(value); } }
		bool L_0 = ___value0;
		HighlightEffect_SetHighlighted_m0E7796EB34B79F2BD65D6ADC618CEF5661CD1E46(__this, L_0, NULL);
		// public bool highlighted { get { return _highlighted; } set { SetHighlighted(value); } }
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::add_OnObjectHighlightStart(HighlightPlus.OnObjectHighlightStartEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_add_OnObjectHighlightStart_m78DE68CA53BBEC452428C30E6BED5377A4764F52 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* V_0 = NULL;
	OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* V_1 = NULL;
	OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* V_2 = NULL;
	{
		OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* L_0 = __this->___OnObjectHighlightStart_61;
		V_0 = L_0;
	}

IL_0007:
	{
		OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* L_1 = V_0;
		V_1 = L_1;
		OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* L_2 = V_1;
		OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497*)CastclassSealed((RuntimeObject*)L_4, OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497_il2cpp_TypeInfo_var));
		OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497** L_5 = (&__this->___OnObjectHighlightStart_61);
		OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* L_6 = V_2;
		OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* L_7 = V_1;
		OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* L_9 = V_0;
		OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497*)L_9) == ((RuntimeObject*)(OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::remove_OnObjectHighlightStart(HighlightPlus.OnObjectHighlightStartEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_remove_OnObjectHighlightStart_mD0B8FC8994C077197DE5497D038EB64C102CC572 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* V_0 = NULL;
	OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* V_1 = NULL;
	OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* V_2 = NULL;
	{
		OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* L_0 = __this->___OnObjectHighlightStart_61;
		V_0 = L_0;
	}

IL_0007:
	{
		OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* L_1 = V_0;
		V_1 = L_1;
		OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* L_2 = V_1;
		OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497*)CastclassSealed((RuntimeObject*)L_4, OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497_il2cpp_TypeInfo_var));
		OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497** L_5 = (&__this->___OnObjectHighlightStart_61);
		OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* L_6 = V_2;
		OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* L_7 = V_1;
		OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* L_9 = V_0;
		OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497*)L_9) == ((RuntimeObject*)(OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::add_OnObjectHighlightEnd(HighlightPlus.OnObjectHighlightEndEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_add_OnObjectHighlightEnd_mE785966330C2EEE86D63E1C7469CF036431079F0 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* V_0 = NULL;
	OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* V_1 = NULL;
	OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* V_2 = NULL;
	{
		OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* L_0 = __this->___OnObjectHighlightEnd_62;
		V_0 = L_0;
	}

IL_0007:
	{
		OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* L_1 = V_0;
		V_1 = L_1;
		OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* L_2 = V_1;
		OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F*)CastclassSealed((RuntimeObject*)L_4, OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F_il2cpp_TypeInfo_var));
		OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F** L_5 = (&__this->___OnObjectHighlightEnd_62);
		OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* L_6 = V_2;
		OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* L_7 = V_1;
		OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* L_9 = V_0;
		OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F*)L_9) == ((RuntimeObject*)(OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::remove_OnObjectHighlightEnd(HighlightPlus.OnObjectHighlightEndEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_remove_OnObjectHighlightEnd_m2F4C8E49E0C34331C3331578DABCF2E11ABF97FB (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* V_0 = NULL;
	OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* V_1 = NULL;
	OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* V_2 = NULL;
	{
		OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* L_0 = __this->___OnObjectHighlightEnd_62;
		V_0 = L_0;
	}

IL_0007:
	{
		OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* L_1 = V_0;
		V_1 = L_1;
		OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* L_2 = V_1;
		OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F*)CastclassSealed((RuntimeObject*)L_4, OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F_il2cpp_TypeInfo_var));
		OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F** L_5 = (&__this->___OnObjectHighlightEnd_62);
		OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* L_6 = V_2;
		OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* L_7 = V_1;
		OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* L_9 = V_0;
		OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F*)L_9) == ((RuntimeObject*)(OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::add_OnRendererHighlightStart(HighlightPlus.OnRendererHighlightEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_add_OnRendererHighlightStart_mBF9403DCF42BBD2B7F274FAF4AD8DE2552F70FF7 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* V_0 = NULL;
	OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* V_1 = NULL;
	OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* V_2 = NULL;
	{
		OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* L_0 = __this->___OnRendererHighlightStart_63;
		V_0 = L_0;
	}

IL_0007:
	{
		OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* L_1 = V_0;
		V_1 = L_1;
		OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* L_2 = V_1;
		OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6*)CastclassSealed((RuntimeObject*)L_4, OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6_il2cpp_TypeInfo_var));
		OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6** L_5 = (&__this->___OnRendererHighlightStart_63);
		OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* L_6 = V_2;
		OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* L_7 = V_1;
		OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* L_9 = V_0;
		OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6*)L_9) == ((RuntimeObject*)(OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::remove_OnRendererHighlightStart(HighlightPlus.OnRendererHighlightEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_remove_OnRendererHighlightStart_m43146B3EABCCE3A346DF159397F6678DD07DEAC8 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* V_0 = NULL;
	OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* V_1 = NULL;
	OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* V_2 = NULL;
	{
		OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* L_0 = __this->___OnRendererHighlightStart_63;
		V_0 = L_0;
	}

IL_0007:
	{
		OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* L_1 = V_0;
		V_1 = L_1;
		OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* L_2 = V_1;
		OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6*)CastclassSealed((RuntimeObject*)L_4, OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6_il2cpp_TypeInfo_var));
		OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6** L_5 = (&__this->___OnRendererHighlightStart_63);
		OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* L_6 = V_2;
		OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* L_7 = V_1;
		OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* L_9 = V_0;
		OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6*)L_9) == ((RuntimeObject*)(OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::add_OnTargetAnimates(HighlightPlus.OnTargetAnimatesEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_add_OnTargetAnimates_m2E91A1FF42F7A87EFEF857EDEC5BEF855A9B9589 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* V_0 = NULL;
	OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* V_1 = NULL;
	OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* V_2 = NULL;
	{
		OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* L_0 = __this->___OnTargetAnimates_64;
		V_0 = L_0;
	}

IL_0007:
	{
		OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* L_1 = V_0;
		V_1 = L_1;
		OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* L_2 = V_1;
		OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066*)CastclassSealed((RuntimeObject*)L_4, OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066_il2cpp_TypeInfo_var));
		OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066** L_5 = (&__this->___OnTargetAnimates_64);
		OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* L_6 = V_2;
		OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* L_7 = V_1;
		OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* L_9 = V_0;
		OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066*)L_9) == ((RuntimeObject*)(OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::remove_OnTargetAnimates(HighlightPlus.OnTargetAnimatesEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_remove_OnTargetAnimates_m0049D2DB8F989FBEA85A2CBDFF47F92847C4FAB6 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* V_0 = NULL;
	OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* V_1 = NULL;
	OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* V_2 = NULL;
	{
		OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* L_0 = __this->___OnTargetAnimates_64;
		V_0 = L_0;
	}

IL_0007:
	{
		OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* L_1 = V_0;
		V_1 = L_1;
		OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* L_2 = V_1;
		OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066*)CastclassSealed((RuntimeObject*)L_4, OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066_il2cpp_TypeInfo_var));
		OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066** L_5 = (&__this->___OnTargetAnimates_64);
		OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* L_6 = V_2;
		OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* L_7 = V_1;
		OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* L_9 = V_0;
		OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066*)L_9) == ((RuntimeObject*)(OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_OnEnable_m47089953E0447A56AE1FF22250199AB585CC12BE (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5845CD95419E3BE7009C004DF4C27A3980553598_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11DADE9907947E6EEC4080ACA8F9A86EC386CA40);
		s_Il2CppMethodInitialized = true;
	}
	GlowPassData_t2D6DC0B6C392F444CA769D4761F1FEC41D092B50 V_0;
	memset((&V_0), 0, sizeof(V_0));
	HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* G_B18_0 = NULL;
	HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* G_B19_1 = NULL;
	{
		// lastOutlineVisibility = outlineVisibility;
		int32_t L_0 = __this->___outlineVisibility_32;
		__this->___lastOutlineVisibility_112 = L_0;
		// debugColor = new Color(1f, 0f, 0f, 0.5f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_1), (1.0f), (0.0f), (0.0f), (0.5f), /*hidden argument*/NULL);
		__this->___debugColor_110 = L_1;
		// blackColor = new Color(0, 0, 0, 0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_2), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___blackColor_111 = L_2;
		// if (offsets == null || offsets.Length != 8) {
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___offsets_93;
		if (!L_3)
		{
			goto IL_005e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___offsets_93;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)8)))
		{
			goto IL_0105;
		}
	}

IL_005e:
	{
		// offsets = new Vector3[] {
		//     Vector3.up,
		//     Vector3.right,
		//     Vector3.down,
		//     Vector3.left,
		//     new Vector3 (-TAU, TAU, 0),
		//     new Vector3 (TAU, TAU, 0),
		//     new Vector3 (TAU, -TAU, 0),
		//     new Vector3 (-TAU, -TAU, 0)
		// };
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)8);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_7);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_9);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_11);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline(NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_13);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), (-0.707109988f), (0.707109988f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_15);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16 = L_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), (0.707109988f), (0.707109988f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(5), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_17);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = L_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), (0.707109988f), (-0.707109988f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(6), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_19);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20 = L_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_21), (-0.707109988f), (-0.707109988f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_21);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___offsets_93 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___offsets_93), (void*)L_20);
	}

IL_0105:
	{
		// if (corners == null || corners.Length != 8) {
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22 = __this->___corners_108;
		if (!L_22)
		{
			goto IL_0118;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_23 = __this->___corners_108;
		NullCheck(L_23);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))) == ((int32_t)8)))
		{
			goto IL_0124;
		}
	}

IL_0118:
	{
		// corners = new Vector3[8];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___corners_108 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___corners_108), (void*)L_24);
	}

IL_0124:
	{
		// if (quadMesh == null) {
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_25 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___quadMesh_104;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_26)
		{
			goto IL_0137;
		}
	}
	{
		// BuildQuad();
		HighlightEffect_BuildQuad_m29B5FCF65215915351648B4D14BE913C4F71897D(__this, NULL);
	}

IL_0137:
	{
		// if (target == null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___target_72;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_28)
		{
			goto IL_0151;
		}
	}
	{
		// target = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___target_72 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_72), (void*)L_29);
	}

IL_0151:
	{
		// if (profileSync && profile != null) {
		bool L_30 = __this->___profileSync_5;
		if (!L_30)
		{
			goto IL_0173;
		}
	}
	{
		HighlightProfile_t4149BE3C0201F863B4CA7CEDFEC447B696183CA2* L_31 = __this->___profile_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_31, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_32)
		{
			goto IL_0173;
		}
	}
	{
		// profile.Load(this);
		HighlightProfile_t4149BE3C0201F863B4CA7CEDFEC447B696183CA2* L_33 = __this->___profile_4;
		NullCheck(L_33);
		HighlightProfile_Load_mE43F76141CCCAA3D5B113AA2AF598F6BD9D5FC30(L_33, __this, NULL);
	}

IL_0173:
	{
		// if (glowPasses == null || glowPasses.Length == 0) {
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_34 = __this->___glowPasses_47;
		if (!L_34)
		{
			goto IL_0187;
		}
	}
	{
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_35 = __this->___glowPasses_47;
		NullCheck(L_35);
		if ((((RuntimeArray*)L_35)->max_length))
		{
			goto IL_02c7;
		}
	}

IL_0187:
	{
		// glowPasses = new GlowPassData[4];
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_36 = (GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F*)(GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F*)SZArrayNew(GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___glowPasses_47 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___glowPasses_47), (void*)L_36);
		// glowPasses[0] = new GlowPassData() { offset = 4, alpha = 0.1f, color = new Color(0.64f, 1f, 0f, 1f) };
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_37 = __this->___glowPasses_47;
		il2cpp_codegen_initobj((&V_0), sizeof(GlowPassData_t2D6DC0B6C392F444CA769D4761F1FEC41D092B50));
		(&V_0)->___offset_0 = (4.0f);
		(&V_0)->___alpha_1 = (0.100000001f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		memset((&L_38), 0, sizeof(L_38));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_38), (0.639999986f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		(&V_0)->___color_2 = L_38;
		GlowPassData_t2D6DC0B6C392F444CA769D4761F1FEC41D092B50 L_39 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (GlowPassData_t2D6DC0B6C392F444CA769D4761F1FEC41D092B50)L_39);
		// glowPasses[1] = new GlowPassData() { offset = 3, alpha = 0.2f, color = new Color(0.64f, 1f, 0f, 1f) };
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_40 = __this->___glowPasses_47;
		il2cpp_codegen_initobj((&V_0), sizeof(GlowPassData_t2D6DC0B6C392F444CA769D4761F1FEC41D092B50));
		(&V_0)->___offset_0 = (3.0f);
		(&V_0)->___alpha_1 = (0.200000003f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		memset((&L_41), 0, sizeof(L_41));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_41), (0.639999986f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		(&V_0)->___color_2 = L_41;
		GlowPassData_t2D6DC0B6C392F444CA769D4761F1FEC41D092B50 L_42 = V_0;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(1), (GlowPassData_t2D6DC0B6C392F444CA769D4761F1FEC41D092B50)L_42);
		// glowPasses[2] = new GlowPassData() { offset = 2, alpha = 0.3f, color = new Color(0.64f, 1f, 0f, 1f) };
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_43 = __this->___glowPasses_47;
		il2cpp_codegen_initobj((&V_0), sizeof(GlowPassData_t2D6DC0B6C392F444CA769D4761F1FEC41D092B50));
		(&V_0)->___offset_0 = (2.0f);
		(&V_0)->___alpha_1 = (0.300000012f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44;
		memset((&L_44), 0, sizeof(L_44));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_44), (0.639999986f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		(&V_0)->___color_2 = L_44;
		GlowPassData_t2D6DC0B6C392F444CA769D4761F1FEC41D092B50 L_45 = V_0;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(2), (GlowPassData_t2D6DC0B6C392F444CA769D4761F1FEC41D092B50)L_45);
		// glowPasses[3] = new GlowPassData() { offset = 1, alpha = 0.4f, color = new Color(0.64f, 1f, 0f, 1f) };
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_46 = __this->___glowPasses_47;
		il2cpp_codegen_initobj((&V_0), sizeof(GlowPassData_t2D6DC0B6C392F444CA769D4761F1FEC41D092B50));
		(&V_0)->___offset_0 = (1.0f);
		(&V_0)->___alpha_1 = (0.400000006f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_47;
		memset((&L_47), 0, sizeof(L_47));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_47), (0.639999986f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		(&V_0)->___color_2 = L_47;
		GlowPassData_t2D6DC0B6C392F444CA769D4761F1FEC41D092B50 L_48 = V_0;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(3), (GlowPassData_t2D6DC0B6C392F444CA769D4761F1FEC41D092B50)L_48);
	}

IL_02c7:
	{
		// sourceRT = Shader.PropertyToID("_HPSourceRT");
		int32_t L_49;
		L_49 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral11DADE9907947E6EEC4080ACA8F9A86EC386CA40, NULL);
		__this->___sourceRT_105 = L_49;
		// useGPUInstancing = GPUInstancing && SystemInfo.supportsInstancing;
		bool L_50 = __this->___GPUInstancing_13;
		G_B17_0 = __this;
		if (!L_50)
		{
			G_B18_0 = __this;
			goto IL_02e7;
		}
	}
	{
		bool L_51;
		L_51 = SystemInfo_get_supportsInstancing_m1EAB72F7149F96B5B2F6DCE89A489C26FDBB5A75(NULL);
		G_B19_0 = ((int32_t)(L_51));
		G_B19_1 = G_B17_0;
		goto IL_02e8;
	}

IL_02e7:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_02e8:
	{
		NullCheck(G_B19_1);
		G_B19_1->___useGPUInstancing_118 = (bool)G_B19_0;
		// if (useGPUInstancing) {
		bool L_52 = __this->___useGPUInstancing_118;
		if (!L_52)
		{
			goto IL_031b;
		}
	}
	{
		// if (glowPropertyBlock == null) {
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_53 = __this->___glowPropertyBlock_119;
		if (L_53)
		{
			goto IL_0308;
		}
	}
	{
		// glowPropertyBlock = new MaterialPropertyBlock();
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_54 = (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)il2cpp_codegen_object_new(MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB(L_54, NULL);
		__this->___glowPropertyBlock_119 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___glowPropertyBlock_119), (void*)L_54);
	}

IL_0308:
	{
		// if (outlinePropertyBlock == null) {
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_55 = __this->___outlinePropertyBlock_120;
		if (L_55)
		{
			goto IL_031b;
		}
	}
	{
		// outlinePropertyBlock = new MaterialPropertyBlock();
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_56 = (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)il2cpp_codegen_object_new(MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB(L_56, NULL);
		__this->___outlinePropertyBlock_120 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outlinePropertyBlock_120), (void*)L_56);
	}

IL_031b:
	{
		// CheckGeometrySupportDependencies();
		HighlightEffect_CheckGeometrySupportDependencies_m5D52A357287B32A694C66A6B946F7EA65B82310B(__this, NULL);
		// SetupMaterial();
		HighlightEffect_SetupMaterial_m2BFF4C99FCFBE3F59A1EE08CBF21BA8C4A747806(__this, NULL);
		// instances.Add(this);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_tC895C2717B87D5478D455D92736B5A12A5A041A9* L_57 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___instances_114;
		NullCheck(L_57);
		List_1_Add_m5845CD95419E3BE7009C004DF4C27A3980553598_inline(L_57, __this, List_1_Add_m5845CD95419E3BE7009C004DF4C27A3980553598_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_OnDisable_mA5C5EEBDBEF0A435F7A90856C3DCC4CA2B15A70B (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mA13BB03189D3A8A2047207BA18FBF07A1C7C5663_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m2A1E4A48A8E28D26D8986ABF5BF31E16C1839C00_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// UpdateMaterialProperties();
		HighlightEffect_UpdateMaterialProperties_m207F5DECD7AB1E89B3EB08F4F23E2924CEC79BFA(__this, NULL);
		// if (instances != null) {
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_tC895C2717B87D5478D455D92736B5A12A5A041A9* L_0 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___instances_114;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		// int k = instances.IndexOf(this);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_tC895C2717B87D5478D455D92736B5A12A5A041A9* L_1 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___instances_114;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_IndexOf_mA13BB03189D3A8A2047207BA18FBF07A1C7C5663(L_1, __this, List_1_IndexOf_mA13BB03189D3A8A2047207BA18FBF07A1C7C5663_RuntimeMethod_var);
		V_0 = L_2;
		// if (k >= 0) {
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		// instances.RemoveAt(k);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_tC895C2717B87D5478D455D92736B5A12A5A041A9* L_4 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___instances_114;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		List_1_RemoveAt_m2A1E4A48A8E28D26D8986ABF5BF31E16C1839C00(L_4, L_5, List_1_RemoveAt_m2A1E4A48A8E28D26D8986ABF5BF31E16C1839C00_RuntimeMethod_var);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_Reset_m6CE1E13F61EB0D9D737BB83EC28578029A87714D (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, const RuntimeMethod* method) 
{
	{
		// SetupMaterial();
		HighlightEffect_SetupMaterial_m2BFF4C99FCFBE3F59A1EE08CBF21BA8C4A747806(__this, NULL);
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::ProfileLoad(HighlightPlus.HighlightProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_ProfileLoad_m337F8C9A0676D65D4624EB96FF290521A30DA59D (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, HighlightProfile_t4149BE3C0201F863B4CA7CEDFEC447B696183CA2* ___profile0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (profile != null) {
		HighlightProfile_t4149BE3C0201F863B4CA7CEDFEC447B696183CA2* L_0 = ___profile0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// profile.Load(this);
		HighlightProfile_t4149BE3C0201F863B4CA7CEDFEC447B696183CA2* L_2 = ___profile0;
		NullCheck(L_2);
		HighlightProfile_Load_mE43F76141CCCAA3D5B113AA2AF598F6BD9D5FC30(L_2, __this, NULL);
	}

IL_0010:
	{
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::ProfileReload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_ProfileReload_m694ABEF1C1A9DC1CCFA63E2812E60F648D51EF79 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (profile != null) {
		HighlightProfile_t4149BE3C0201F863B4CA7CEDFEC447B696183CA2* L_0 = __this->___profile_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// profile.Load(this);
		HighlightProfile_t4149BE3C0201F863B4CA7CEDFEC447B696183CA2* L_2 = __this->___profile_4;
		NullCheck(L_2);
		HighlightProfile_Load_mE43F76141CCCAA3D5B113AA2AF598F6BD9D5FC30(L_2, __this, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::ProfileSaveChanges(HighlightPlus.HighlightProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_ProfileSaveChanges_m846D3F6F20072ECCEA94EE143EF6B093C8300617 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, HighlightProfile_t4149BE3C0201F863B4CA7CEDFEC447B696183CA2* ___profile0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (profile != null) {
		HighlightProfile_t4149BE3C0201F863B4CA7CEDFEC447B696183CA2* L_0 = ___profile0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// profile.Save(this);
		HighlightProfile_t4149BE3C0201F863B4CA7CEDFEC447B696183CA2* L_2 = ___profile0;
		NullCheck(L_2);
		HighlightProfile_Save_m5E746756E4CF4800BE3D9415E43BD1D50099B44C(L_2, __this, NULL);
	}

IL_0010:
	{
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::ProfileSaveChanges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_ProfileSaveChanges_m3B9D2BFBC0A984B45861A3E5EF619B905DE52511 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (profile != null) {
		HighlightProfile_t4149BE3C0201F863B4CA7CEDFEC447B696183CA2* L_0 = __this->___profile_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// profile.Save(this);
		HighlightProfile_t4149BE3C0201F863B4CA7CEDFEC447B696183CA2* L_2 = __this->___profile_4;
		NullCheck(L_2);
		HighlightProfile_Save_m5E746756E4CF4800BE3D9415E43BD1D50099B44C(L_2, __this, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_Refresh_mC2AF818CFF80015348FEF64B3957843C1CB47063 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, const RuntimeMethod* method) 
{
	{
		// if (enabled) {
		bool L_0;
		L_0 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(__this, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// SetupMaterial();
		HighlightEffect_SetupMaterial_m2BFF4C99FCFBE3F59A1EE08CBF21BA8C4A747806(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// UnityEngine.Rendering.CommandBuffer HighlightPlus.HighlightEffect::GetCommandBuffer(UnityEngine.Camera,UnityEngine.Rendering.RenderTargetIdentifier,UnityEngine.Rendering.RenderTargetIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* HighlightEffect_GetCommandBuffer_m1BE6321D4621FDA943755D74176173996754A161 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___colorAttachmentBuffer1, RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___depthAttachmentBuffer2, const RuntimeMethod* method) 
{
	{
		// this.colorAttachmentBuffer = colorAttachmentBuffer;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_0 = ___colorAttachmentBuffer1;
		__this->___colorAttachmentBuffer_129 = L_0;
		// this.depthAttachmentBuffer = depthAttachmentBuffer;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_1 = ___depthAttachmentBuffer2;
		__this->___depthAttachmentBuffer_130 = L_1;
		// BuildCommandBuffer(cam);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ___cam0;
		HighlightEffect_BuildCommandBuffer_m36822E0D81EC743729E05C89D20C8CB1CC8676F0(__this, L_2, NULL);
		// return cbHighlight;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_3 = __this->___cbHighlight_96;
		return L_3;
	}
}
// System.Void HighlightPlus.HighlightEffect::BuildCommandBuffer(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_BuildCommandBuffer_m36822E0D81EC743729E05C89D20C8CB1CC8676F0 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43AD1BD6C27526D7893DD88B86511D1C248720D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48DFDC8C33A0AF1CBEE6B4C3F550E629E667C311);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral885516E057703E4DAEB49FBC12F5DD445D288AC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE066DD3CA3CA9295CC83FA394543BA7B03B848BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA6F0091C0F4C6C5BD7271CF1420AE410D38DFAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC47B489AF3EC18C22208208283F839984ACE798);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	bool V_6 = false;
	bool V_7 = false;
	float V_8 = 0.0f;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_12 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_19 = NULL;
	bool V_20 = false;
	int32_t V_21 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_22;
	memset((&V_22), 0, sizeof(V_22));
	float V_23 = 0.0f;
	float V_24 = 0.0f;
	float V_25 = 0.0f;
	bool V_26 = false;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_31;
	memset((&V_31), 0, sizeof(V_31));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_32;
	memset((&V_32), 0, sizeof(V_32));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_33;
	memset((&V_33), 0, sizeof(V_33));
	int32_t V_34 = 0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_35;
	memset((&V_35), 0, sizeof(V_35));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_36;
	memset((&V_36), 0, sizeof(V_36));
	int32_t V_37 = 0;
	int32_t V_38 = 0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_39;
	memset((&V_39), 0, sizeof(V_39));
	int32_t V_40 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_41;
	memset((&V_41), 0, sizeof(V_41));
	int32_t V_42 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_43;
	memset((&V_43), 0, sizeof(V_43));
	int32_t V_44 = 0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_45;
	memset((&V_45), 0, sizeof(V_45));
	int32_t V_46 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_47;
	memset((&V_47), 0, sizeof(V_47));
	float V_48 = 0.0f;
	bool V_49 = false;
	float V_50 = 0.0f;
	float V_51 = 0.0f;
	float V_52 = 0.0f;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_53;
	memset((&V_53), 0, sizeof(V_53));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_54;
	memset((&V_54), 0, sizeof(V_54));
	float V_55 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_56;
	memset((&V_56), 0, sizeof(V_56));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_57;
	memset((&V_57), 0, sizeof(V_57));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_58;
	memset((&V_58), 0, sizeof(V_58));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_59;
	memset((&V_59), 0, sizeof(V_59));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_60;
	memset((&V_60), 0, sizeof(V_60));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_61;
	memset((&V_61), 0, sizeof(V_61));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_62;
	memset((&V_62), 0, sizeof(V_62));
	float V_63 = 0.0f;
	int32_t V_64 = 0;
	int32_t V_65 = 0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_66;
	memset((&V_66), 0, sizeof(V_66));
	int32_t V_67 = 0;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_68 = NULL;
	int32_t V_69 = 0;
	float V_70 = 0.0f;
	float V_71 = 0.0f;
	int32_t G_B16_0 = 0;
	float G_B34_0 = 0.0f;
	float G_B104_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B107_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B106_0 = NULL;
	float G_B108_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B108_1 = NULL;
	int32_t G_B112_0 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B115_0;
	memset((&G_B115_0), 0, sizeof(G_B115_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B117_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B116_0 = NULL;
	float G_B118_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B118_1 = NULL;
	int32_t G_B132_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B207_0;
	memset((&G_B207_0), 0, sizeof(G_B207_0));
	int32_t G_B215_0 = 0;
	int32_t G_B223_0 = 0;
	int32_t G_B223_1 = 0;
	HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* G_B223_2 = NULL;
	int32_t G_B222_0 = 0;
	int32_t G_B222_1 = 0;
	HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* G_B222_2 = NULL;
	int32_t G_B224_0 = 0;
	int32_t G_B224_1 = 0;
	int32_t G_B224_2 = 0;
	HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* G_B224_3 = NULL;
	{
		// if (colorAttachmentBuffer == 0) {
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_0 = __this->___colorAttachmentBuffer_129;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_1;
		L_1 = RenderTargetIdentifier_op_Implicit_m84624C22E2F3271EBEE2E96A8404969B9E99E526(0, NULL);
		bool L_2;
		L_2 = RenderTargetIdentifier_op_Equality_m77ABAA9A264984CA70912BF0A49B03F888A45F02(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// colorAttachmentBuffer = BuiltinRenderTextureType.CameraTarget;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_3;
		L_3 = RenderTargetIdentifier_op_Implicit_m4A8EE3AFC545170F3F2215D8DA0F2474B0015CC8(2, NULL);
		__this->___colorAttachmentBuffer_129 = L_3;
	}

IL_001f:
	{
		// if (depthAttachmentBuffer == 0) {
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_4 = __this->___depthAttachmentBuffer_130;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_5;
		L_5 = RenderTargetIdentifier_op_Implicit_m84624C22E2F3271EBEE2E96A8404969B9E99E526(0, NULL);
		bool L_6;
		L_6 = RenderTargetIdentifier_op_Equality_m77ABAA9A264984CA70912BF0A49B03F888A45F02(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		// depthAttachmentBuffer = BuiltinRenderTextureType.CameraTarget;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_7;
		L_7 = RenderTargetIdentifier_op_Implicit_m4A8EE3AFC545170F3F2215D8DA0F2474B0015CC8(2, NULL);
		__this->___depthAttachmentBuffer_130 = L_7;
	}

IL_003e:
	{
		// if (cam == null || cbHighlight == null) return;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = ___cam0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_9)
		{
			goto IL_004f;
		}
	}
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_10 = __this->___cbHighlight_96;
		if (L_10)
		{
			goto IL_0050;
		}
	}

IL_004f:
	{
		// if (cam == null || cbHighlight == null) return;
		return;
	}

IL_0050:
	{
		// cbHighlight.Clear();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_11 = __this->___cbHighlight_96;
		NullCheck(L_11);
		CommandBuffer_Clear_m4E1272BD1A0C162C9C26434E115279F42FA557C7(L_11, NULL);
		// if (requireUpdateMaterial) {
		bool L_12 = __this->___requireUpdateMaterial_113;
		if (!L_12)
		{
			goto IL_0070;
		}
	}
	{
		// requireUpdateMaterial = false;
		__this->___requireUpdateMaterial_113 = (bool)0;
		// UpdateMaterialProperties();
		HighlightEffect_UpdateMaterialProperties_m207F5DECD7AB1E89B3EB08F4F23E2924CEC79BFA(__this, NULL);
	}

IL_0070:
	{
		// bool seeThroughReal = seeThroughIntensity > 0 && (this.seeThrough == SeeThroughMode.AlwaysWhenOccluded || (this.seeThrough == SeeThroughMode.WhenHighlighted && _highlighted));
		float L_13 = __this->___seeThroughIntensity_66;
		if ((!(((float)L_13) > ((float)(0.0f)))))
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_14 = __this->___seeThrough_65;
		if ((((int32_t)L_14) == ((int32_t)1)))
		{
			goto IL_0099;
		}
	}
	{
		int32_t L_15 = __this->___seeThrough_65;
		if (L_15)
		{
			goto IL_0096;
		}
	}
	{
		bool L_16 = __this->____highlighted_16;
		G_B16_0 = ((int32_t)(L_16));
		goto IL_009d;
	}

IL_0096:
	{
		G_B16_0 = 0;
		goto IL_009d;
	}

IL_0099:
	{
		G_B16_0 = 1;
		goto IL_009d;
	}

IL_009c:
	{
		G_B16_0 = 0;
	}

IL_009d:
	{
		V_0 = (bool)G_B16_0;
		// if (seeThroughReal) {
		bool L_17 = V_0;
		if (!L_17)
		{
			goto IL_00ae;
		}
	}
	{
		// RenderOccluders(cbHighlight, cam);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_18 = __this->___cbHighlight_96;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19 = ___cam0;
		HighlightEffect_RenderOccluders_m5A6E7F1C205136A034AB2DA2168658471A72F473(__this, L_18, L_19, NULL);
	}

IL_00ae:
	{
		// if (cancelSeeThroughThisFrame) {
		bool L_20 = __this->___cancelSeeThroughThisFrame_149;
		if (!L_20)
		{
			goto IL_00bf;
		}
	}
	{
		// cancelSeeThroughThisFrame = false;
		__this->___cancelSeeThroughThisFrame_149 = (bool)0;
		// seeThroughReal = false;
		V_0 = (bool)0;
	}

IL_00bf:
	{
		// if (!_highlighted && !seeThroughReal && !hitActive) {
		bool L_21 = __this->____highlighted_16;
		if (L_21)
		{
			goto IL_00d3;
		}
	}
	{
		bool L_22 = V_0;
		if (L_22)
		{
			goto IL_00d3;
		}
	}
	{
		bool L_23 = __this->___hitActive_143;
		if (L_23)
		{
			goto IL_00d3;
		}
	}
	{
		// return;
		return;
	}

IL_00d3:
	{
		// int cullingMask = cam.cullingMask;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_24 = ___cam0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = Camera_get_cullingMask_m6F5AFF8FB522F876D99E839BF77D8F27F26A1EF8(L_24, NULL);
		V_1 = L_25;
		// if (!ignoreObjectVisibility) {
		bool L_26 = __this->___ignoreObjectVisibility_11;
		if (L_26)
		{
			goto IL_0144;
		}
	}
	{
		// for (int k = 0; k < rmsCount; k++) {
		V_10 = 0;
		goto IL_013a;
	}

IL_00e7:
	{
		// if (rms[k].renderer != null && rms[k].renderer.isVisible != rms[k].renderWasVisibleDuringSetup) {
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_27 = __this->___rms_70;
		int32_t L_28 = V_10;
		NullCheck(L_27);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___renderer_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_29, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_30)
		{
			goto IL_0134;
		}
	}
	{
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_31 = __this->___rms_70;
		int32_t L_32 = V_10;
		NullCheck(L_31);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_33 = ((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___renderer_5;
		NullCheck(L_33);
		bool L_34;
		L_34 = Renderer_get_isVisible_mBCDDEB0EF27442FD1D910CD26754135B677B8251(L_33, NULL);
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_35 = __this->___rms_70;
		int32_t L_36 = V_10;
		NullCheck(L_35);
		bool L_37 = ((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___renderWasVisibleDuringSetup_2;
		if ((((int32_t)L_34) == ((int32_t)L_37)))
		{
			goto IL_0134;
		}
	}
	{
		// SetupMaterial();
		HighlightEffect_SetupMaterial_m2BFF4C99FCFBE3F59A1EE08CBF21BA8C4A747806(__this, NULL);
		// break;
		goto IL_0144;
	}

IL_0134:
	{
		// for (int k = 0; k < rmsCount; k++) {
		int32_t L_38 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_013a:
	{
		// for (int k = 0; k < rmsCount; k++) {
		int32_t L_39 = V_10;
		int32_t L_40 = __this->___rmsCount_71;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_00e7;
		}
	}

IL_0144:
	{
		// float glowReal = _highlighted ? this.glow : 0;
		bool L_41 = __this->____highlighted_16;
		if (L_41)
		{
			goto IL_0153;
		}
	}
	{
		G_B34_0 = (0.0f);
		goto IL_0159;
	}

IL_0153:
	{
		float L_42 = __this->___glow_35;
		G_B34_0 = L_42;
	}

IL_0159:
	{
		V_2 = G_B34_0;
		// int layer = gameObject.layer;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
		L_43 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_43);
		int32_t L_44;
		L_44 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_43, NULL);
		// if (fxMatMask == null)
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___fxMatMask_78;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_45, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_46)
		{
			goto IL_0174;
		}
	}
	{
		// return;
		return;
	}

IL_0174:
	{
		// Visibility smoothGlowVisibility = glowVisibility;
		int32_t L_47 = __this->___glowVisibility_44;
		V_3 = L_47;
		// Visibility smoothOutlineVisibility = outlineVisibility;
		int32_t L_48 = __this->___outlineVisibility_32;
		V_4 = L_48;
		// float aspect = cam.aspect;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_49 = ___cam0;
		NullCheck(L_49);
		float L_50;
		L_50 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_49, NULL);
		V_5 = L_50;
		// bool somePartVisible = false;
		V_6 = (bool)0;
		// bool independentFullScreenNotExecuted = true;
		V_7 = (bool)1;
		// for (int k = 0; k < rmsCount; k++) {
		V_11 = 0;
		goto IL_0494;
	}

IL_0199:
	{
		// rms[k].render = false;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_51 = __this->___rms_70;
		int32_t L_52 = V_11;
		NullCheck(L_51);
		((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->___render_0 = (bool)0;
		// Transform t = rms[k].transform;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_53 = __this->___rms_70;
		int32_t L_54 = V_11;
		NullCheck(L_53);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55 = ((L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_54)))->___transform_1;
		V_12 = L_55;
		// if (t == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56 = V_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_57;
		L_57 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_56, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_57)
		{
			goto IL_048e;
		}
	}
	{
		// Mesh mesh = rms[k].mesh;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_58 = __this->___rms_70;
		int32_t L_59 = V_11;
		NullCheck(L_58);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_60 = ((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___mesh_3;
		V_13 = L_60;
		// if (mesh == null)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_61 = V_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_62;
		L_62 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_61, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_62)
		{
			goto IL_048e;
		}
	}
	{
		// if (((1 << t.gameObject.layer) & cullingMask) == 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63 = V_12;
		NullCheck(L_63);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64;
		L_64 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_63, NULL);
		NullCheck(L_64);
		int32_t L_65;
		L_65 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_64, NULL);
		int32_t L_66 = V_1;
		if (!((int32_t)(((int32_t)(1<<((int32_t)(L_65&((int32_t)31)))))&L_66)))
		{
			goto IL_048e;
		}
	}
	{
		// if (!rms[k].renderer.isVisible && !ignoreObjectVisibility)
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_67 = __this->___rms_70;
		int32_t L_68 = V_11;
		NullCheck(L_67);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_69 = ((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68)))->___renderer_5;
		NullCheck(L_69);
		bool L_70;
		L_70 = Renderer_get_isVisible_mBCDDEB0EF27442FD1D910CD26754135B677B8251(L_69, NULL);
		if (L_70)
		{
			goto IL_022a;
		}
	}
	{
		bool L_71 = __this->___ignoreObjectVisibility_11;
		if (!L_71)
		{
			goto IL_048e;
		}
	}

IL_022a:
	{
		// if (!reflectionProbes && cam.cameraType == CameraType.Reflection)
		bool L_72 = __this->___reflectionProbes_12;
		if (L_72)
		{
			goto IL_023f;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_73 = ___cam0;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = Camera_get_cameraType_m85434C4C986D2EAC04FBFA44B284840AFC497851(L_73, NULL);
		if ((((int32_t)L_74) == ((int32_t)((int32_t)16))))
		{
			goto IL_048e;
		}
	}

IL_023f:
	{
		// rms[k].render = true;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_75 = __this->___rms_70;
		int32_t L_76 = V_11;
		NullCheck(L_75);
		((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_76)))->___render_0 = (bool)1;
		// somePartVisible = true;
		V_6 = (bool)1;
		// if (outlineIndependent) {
		bool L_77 = __this->___outlineIndependent_34;
		if (!L_77)
		{
			goto IL_03ab;
		}
	}
	{
		// if (useSmoothBlend && independentFullScreenNotExecuted) {
		bool L_78 = __this->___useSmoothBlend_117;
		bool L_79 = V_7;
		if (!((int32_t)((int32_t)L_78&(int32_t)L_79)))
		{
			goto IL_028d;
		}
	}
	{
		// independentFullScreenNotExecuted = false;
		V_7 = (bool)0;
		// cbHighlight.DrawMesh(quadMesh, Matrix4x4.identity, fxMatClearStencil);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_80 = __this->___cbHighlight_96;
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_81 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___quadMesh_104;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_82;
		L_82 = Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline(NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_83 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___fxMatClearStencil_82;
		NullCheck(L_80);
		CommandBuffer_DrawMesh_m45BA88D4388EC7E5CDAABD42CD6CE29A5120042C(L_80, L_81, L_82, L_83, NULL);
		goto IL_03ab;
	}

IL_028d:
	{
		// } else if (outline > 0) {
		float L_84 = __this->___outline_27;
		if ((!(((float)L_84) > ((float)(0.0f)))))
		{
			goto IL_03ab;
		}
	}
	{
		// for (int l = 0; l < mesh.subMeshCount; l++) {
		V_14 = 0;
		goto IL_039d;
	}

IL_02a5:
	{
		// if (((1 << l) & subMeshMask) == 0) continue;
		int32_t L_85 = V_14;
		int32_t L_86 = __this->___subMeshMask_21;
		if (!((int32_t)(((int32_t)(1<<((int32_t)(L_85&((int32_t)31)))))&L_86)))
		{
			goto IL_0397;
		}
	}
	{
		// if (outlineQuality.UsesMultipleOffsets()) {
		int32_t L_87 = __this->___outlineQuality_30;
		bool L_88;
		L_88 = QualityLevelExtensions_UsesMultipleOffsets_mC4531683604025C304753CBBE3AD5A72388F28D5(L_87, NULL);
		if (!L_88)
		{
			goto IL_0353;
		}
	}
	{
		// for (int o = outlineOffsetsMin; o <= outlineOffsetsMax; o++) {
		int32_t L_89 = __this->___outlineOffsetsMin_125;
		V_15 = L_89;
		goto IL_0347;
	}

IL_02d2:
	{
		// Vector3 direction = offsets[o] * (outlineWidth / 100f);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_90 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___offsets_93;
		int32_t L_91 = V_15;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		float L_94 = __this->___outlineWidth_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_93, ((float)(L_94/(100.0f))), NULL);
		V_16 = L_95;
		// direction.y *= aspect;
		float* L_96 = (&(&V_16)->___y_3);
		float* L_97 = L_96;
		float L_98 = *((float*)L_97);
		float L_99 = V_5;
		*((float*)L_97) = (float)((float)il2cpp_codegen_multiply(L_98, L_99));
		// fxMatOutline[o].SetVector("_OutlineDirection", direction);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_100 = __this->___fxMatOutline_91;
		int32_t L_101 = V_15;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104 = V_16;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_105;
		L_105 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_104, NULL);
		NullCheck(L_103);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_103, _stringLiteralFC47B489AF3EC18C22208208283F839984ACE798, L_105, NULL);
		// cbHighlight.DrawRenderer(rms[k].renderer, fxMatOutline[o], l, 1);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_106 = __this->___cbHighlight_96;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_107 = __this->___rms_70;
		int32_t L_108 = V_11;
		NullCheck(L_107);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_109 = ((L_107)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_108)))->___renderer_5;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_110 = __this->___fxMatOutline_91;
		int32_t L_111 = V_15;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		int32_t L_114 = V_14;
		NullCheck(L_106);
		CommandBuffer_DrawRenderer_m0E01900E0CA8B52F3BB03C82A27214A354007138(L_106, L_109, L_113, L_114, 1, NULL);
		// for (int o = outlineOffsetsMin; o <= outlineOffsetsMax; o++) {
		int32_t L_115 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_0347:
	{
		// for (int o = outlineOffsetsMin; o <= outlineOffsetsMax; o++) {
		int32_t L_116 = V_15;
		int32_t L_117 = __this->___outlineOffsetsMax_126;
		if ((((int32_t)L_116) <= ((int32_t)L_117)))
		{
			goto IL_02d2;
		}
	}
	{
		goto IL_0397;
	}

IL_0353:
	{
		// fxMatOutline[0].SetVector("_OutlineDirection", Vector3.zero);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_118 = __this->___fxMatOutline_91;
		NullCheck(L_118);
		int32_t L_119 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_120 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121;
		L_121 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_122;
		L_122 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_121, NULL);
		NullCheck(L_120);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_120, _stringLiteralFC47B489AF3EC18C22208208283F839984ACE798, L_122, NULL);
		// cbHighlight.DrawRenderer(rms[k].renderer, fxMatOutline[0], l, 1);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_123 = __this->___cbHighlight_96;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_124 = __this->___rms_70;
		int32_t L_125 = V_11;
		NullCheck(L_124);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_126 = ((L_124)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_125)))->___renderer_5;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_127 = __this->___fxMatOutline_91;
		NullCheck(L_127);
		int32_t L_128 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		int32_t L_130 = V_14;
		NullCheck(L_123);
		CommandBuffer_DrawRenderer_m0E01900E0CA8B52F3BB03C82A27214A354007138(L_123, L_126, L_129, L_130, 1, NULL);
	}

IL_0397:
	{
		// for (int l = 0; l < mesh.subMeshCount; l++) {
		int32_t L_131 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_131, 1));
	}

IL_039d:
	{
		// for (int l = 0; l < mesh.subMeshCount; l++) {
		int32_t L_132 = V_14;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_133 = V_13;
		NullCheck(L_133);
		int32_t L_134;
		L_134 = Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B(L_133, NULL);
		if ((((int32_t)L_132) < ((int32_t)L_134)))
		{
			goto IL_02a5;
		}
	}

IL_03ab:
	{
		// for (int l = 0; l < mesh.subMeshCount; l++) {
		V_17 = 0;
		goto IL_0480;
	}

IL_03b3:
	{
		// if (((1 << l) & subMeshMask) == 0) continue;
		int32_t L_135 = V_17;
		int32_t L_136 = __this->___subMeshMask_21;
		if (!((int32_t)(((int32_t)(1<<((int32_t)(L_135&((int32_t)31)))))&L_136)))
		{
			goto IL_047a;
		}
	}
	{
		// if (_highlighted && ((outline > 0 && smoothOutlineVisibility != Visibility.Normal) || (glow > 0 && smoothGlowVisibility != Visibility.Normal) || (innerGlow > 0 && innerGlowVisibility != Visibility.Normal))) {
		bool L_137 = __this->____highlighted_16;
		if (!L_137)
		{
			goto IL_0426;
		}
	}
	{
		float L_138 = __this->___outline_27;
		if ((!(((float)L_138) > ((float)(0.0f)))))
		{
			goto IL_03df;
		}
	}
	{
		int32_t L_139 = V_4;
		if (L_139)
		{
			goto IL_0404;
		}
	}

IL_03df:
	{
		float L_140 = __this->___glow_35;
		if ((!(((float)L_140) > ((float)(0.0f)))))
		{
			goto IL_03ef;
		}
	}
	{
		int32_t L_141 = V_3;
		if (L_141)
		{
			goto IL_0404;
		}
	}

IL_03ef:
	{
		float L_142 = __this->___innerGlow_48;
		if ((!(((float)L_142) > ((float)(0.0f)))))
		{
			goto IL_0426;
		}
	}
	{
		int32_t L_143 = __this->___innerGlowVisibility_51;
		if (!L_143)
		{
			goto IL_0426;
		}
	}

IL_0404:
	{
		// rms[k].fxMatMask[l].SetInt("_ZTest", (int)UnityEngine.Rendering.CompareFunction.Always);
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_144 = __this->___rms_70;
		int32_t L_145 = V_11;
		NullCheck(L_144);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_146 = ((L_144)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_145)))->___fxMatMask_7;
		int32_t L_147 = V_17;
		NullCheck(L_146);
		int32_t L_148 = L_147;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		NullCheck(L_149);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_149, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, 8, NULL);
		goto IL_0446;
	}

IL_0426:
	{
		// rms[k].fxMatMask[l].SetInt("_ZTest", (int)UnityEngine.Rendering.CompareFunction.LessEqual);
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_150 = __this->___rms_70;
		int32_t L_151 = V_11;
		NullCheck(L_150);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_152 = ((L_150)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_151)))->___fxMatMask_7;
		int32_t L_153 = V_17;
		NullCheck(L_152);
		int32_t L_154 = L_153;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_155 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		NullCheck(L_155);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_155, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, 4, NULL);
	}

IL_0446:
	{
		// cbHighlight.DrawRenderer(rms[k].renderer, rms[k].fxMatMask[l], l);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_156 = __this->___cbHighlight_96;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_157 = __this->___rms_70;
		int32_t L_158 = V_11;
		NullCheck(L_157);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_159 = ((L_157)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_158)))->___renderer_5;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_160 = __this->___rms_70;
		int32_t L_161 = V_11;
		NullCheck(L_160);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_162 = ((L_160)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_161)))->___fxMatMask_7;
		int32_t L_163 = V_17;
		NullCheck(L_162);
		int32_t L_164 = L_163;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		int32_t L_166 = V_17;
		NullCheck(L_156);
		CommandBuffer_DrawRenderer_m6667EA1141D0759454E51CDC2A24DB531357C7C6(L_156, L_159, L_165, L_166, NULL);
	}

IL_047a:
	{
		// for (int l = 0; l < mesh.subMeshCount; l++) {
		int32_t L_167 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_167, 1));
	}

IL_0480:
	{
		// for (int l = 0; l < mesh.subMeshCount; l++) {
		int32_t L_168 = V_17;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_169 = V_13;
		NullCheck(L_169);
		int32_t L_170;
		L_170 = Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B(L_169, NULL);
		if ((((int32_t)L_168) < ((int32_t)L_170)))
		{
			goto IL_03b3;
		}
	}

IL_048e:
	{
		// for (int k = 0; k < rmsCount; k++) {
		int32_t L_171 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_171, 1));
	}

IL_0494:
	{
		// for (int k = 0; k < rmsCount; k++) {
		int32_t L_172 = V_11;
		int32_t L_173 = __this->___rmsCount_71;
		if ((((int32_t)L_172) < ((int32_t)L_173)))
		{
			goto IL_0199;
		}
	}
	{
		// float fade = 1f;
		V_8 = (1.0f);
		// if (fading != FadingState.NoFading) {
		int32_t L_174 = __this->___fading_95;
		if (!L_174)
		{
			goto IL_0566;
		}
	}
	{
		// if (fading == FadingState.FadingIn) {
		int32_t L_175 = __this->___fading_95;
		if ((!(((uint32_t)L_175) == ((uint32_t)1))))
		{
			goto IL_04fa;
		}
	}
	{
		// if (fadeInDuration > 0) {
		float L_176 = __this->___fadeInDuration_17;
		if ((!(((float)L_176) > ((float)(0.0f)))))
		{
			goto IL_0566;
		}
	}
	{
		// fade = (Time.time - fadeStartTime) / fadeInDuration;
		float L_177;
		L_177 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_178 = __this->___fadeStartTime_94;
		float L_179 = __this->___fadeInDuration_17;
		V_8 = ((float)(((float)il2cpp_codegen_subtract(L_177, L_178))/L_179));
		// if (fade > 1f) {
		float L_180 = V_8;
		if ((!(((float)L_180) > ((float)(1.0f)))))
		{
			goto IL_0566;
		}
	}
	{
		// fade = 1f;
		V_8 = (1.0f);
		// fading = FadingState.NoFading;
		__this->___fading_95 = 0;
		goto IL_0566;
	}

IL_04fa:
	{
		// } else if (fadeOutDuration > 0) {
		float L_181 = __this->___fadeOutDuration_18;
		if ((!(((float)L_181) > ((float)(0.0f)))))
		{
			goto IL_0566;
		}
	}
	{
		// fade = 1f - (Time.time - fadeStartTime) / fadeOutDuration;
		float L_182;
		L_182 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_183 = __this->___fadeStartTime_94;
		float L_184 = __this->___fadeOutDuration_18;
		V_8 = ((float)il2cpp_codegen_subtract((1.0f), ((float)(((float)il2cpp_codegen_subtract(L_182, L_183))/L_184))));
		// if (fade < 0f) {
		float L_185 = V_8;
		if ((!(((float)L_185) < ((float)(0.0f)))))
		{
			goto IL_0566;
		}
	}
	{
		// fade = 0f;
		V_8 = (0.0f);
		// fading = FadingState.NoFading;
		__this->___fading_95 = 0;
		// _highlighted = false;
		__this->____highlighted_16 = (bool)0;
		// if (OnObjectHighlightEnd != null) {
		OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* L_186 = __this->___OnObjectHighlightEnd_62;
		if (!L_186)
		{
			goto IL_0559;
		}
	}
	{
		// OnObjectHighlightEnd(gameObject);
		OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* L_187 = __this->___OnObjectHighlightEnd_62;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_188;
		L_188 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_187);
		OnObjectHighlightEndEvent_Invoke_m7EBAEDB3E40C6587FFE7808B8953D8A534B36993_inline(L_187, L_188, NULL);
	}

IL_0559:
	{
		// SendMessage("HighlightEnd", null, SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m7CD6568BD5D93384C683CFF1E5088D17F20F3459(__this, _stringLiteral885516E057703E4DAEB49FBC12F5DD445D288AC3, NULL, 1, NULL);
	}

IL_0566:
	{
		// if (glowQuality == QualityLevel.High) {
		int32_t L_189 = __this->___glowQuality_37;
		if ((!(((uint32_t)L_189) == ((uint32_t)1))))
		{
			goto IL_0579;
		}
	}
	{
		// glowReal *= 0.25f;
		float L_190 = V_2;
		V_2 = ((float)il2cpp_codegen_multiply(L_190, (0.25f)));
		goto IL_058a;
	}

IL_0579:
	{
		// } else if (glowQuality == QualityLevel.Medium) {
		int32_t L_191 = __this->___glowQuality_37;
		if ((!(((uint32_t)L_191) == ((uint32_t)3))))
		{
			goto IL_058a;
		}
	}
	{
		// glowReal *= 0.5f;
		float L_192 = V_2;
		V_2 = ((float)il2cpp_codegen_multiply(L_192, (0.5f)));
	}

IL_058a:
	{
		// bool targetEffectRendered = false;
		V_9 = (bool)0;
		// for (int k = 0; k < rmsCount; k++) {
		V_18 = 0;
		goto IL_1231;
	}

IL_0595:
	{
		// if (!rms[k].render)
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_193 = __this->___rms_70;
		int32_t L_194 = V_18;
		NullCheck(L_193);
		bool L_195 = ((L_193)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_194)))->___render_0;
		if (!L_195)
		{
			goto IL_122b;
		}
	}
	{
		// Mesh mesh = rms[k].mesh;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_196 = __this->___rms_70;
		int32_t L_197 = V_18;
		NullCheck(L_196);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_198 = ((L_196)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_197)))->___mesh_3;
		V_19 = L_198;
		// if (seeThroughReal) {
		bool L_199 = V_0;
		if (!L_199)
		{
			goto IL_0658;
		}
	}
	{
		// for (int l = 0; l < mesh.subMeshCount; l++) {
		V_21 = 0;
		goto IL_064a;
	}

IL_05cb:
	{
		// if (((1 << l) & subMeshMask) == 0) continue;
		int32_t L_200 = V_21;
		int32_t L_201 = __this->___subMeshMask_21;
		if (!((int32_t)(((int32_t)(1<<((int32_t)(L_200&((int32_t)31)))))&L_201)))
		{
			goto IL_0644;
		}
	}
	{
		// if (l < rms[k].fxMatSeeThrough.Length && rms[k].fxMatSeeThrough[l] != null) {
		int32_t L_202 = V_21;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_203 = __this->___rms_70;
		int32_t L_204 = V_18;
		NullCheck(L_203);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_205 = ((L_203)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_204)))->___fxMatSeeThrough_9;
		NullCheck(L_205);
		if ((((int32_t)L_202) >= ((int32_t)((int32_t)(((RuntimeArray*)L_205)->max_length)))))
		{
			goto IL_0644;
		}
	}
	{
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_206 = __this->___rms_70;
		int32_t L_207 = V_18;
		NullCheck(L_206);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_208 = ((L_206)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_207)))->___fxMatSeeThrough_9;
		int32_t L_209 = V_21;
		NullCheck(L_208);
		int32_t L_210 = L_209;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_211 = (L_208)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_212;
		L_212 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_211, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_212)
		{
			goto IL_0644;
		}
	}
	{
		// cbHighlight.DrawRenderer(rms[k].renderer, rms[k].fxMatSeeThrough[l], l);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_213 = __this->___cbHighlight_96;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_214 = __this->___rms_70;
		int32_t L_215 = V_18;
		NullCheck(L_214);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_216 = ((L_214)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_215)))->___renderer_5;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_217 = __this->___rms_70;
		int32_t L_218 = V_18;
		NullCheck(L_217);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_219 = ((L_217)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_218)))->___fxMatSeeThrough_9;
		int32_t L_220 = V_21;
		NullCheck(L_219);
		int32_t L_221 = L_220;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_222 = (L_219)->GetAt(static_cast<il2cpp_array_size_t>(L_221));
		int32_t L_223 = V_21;
		NullCheck(L_213);
		CommandBuffer_DrawRenderer_m6667EA1141D0759454E51CDC2A24DB531357C7C6(L_213, L_216, L_222, L_223, NULL);
	}

IL_0644:
	{
		// for (int l = 0; l < mesh.subMeshCount; l++) {
		int32_t L_224 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_224, 1));
	}

IL_064a:
	{
		// for (int l = 0; l < mesh.subMeshCount; l++) {
		int32_t L_225 = V_21;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_226 = V_19;
		NullCheck(L_226);
		int32_t L_227;
		L_227 = Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B(L_226, NULL);
		if ((((int32_t)L_225) < ((int32_t)L_227)))
		{
			goto IL_05cb;
		}
	}

IL_0658:
	{
		// if (_highlighted || hitActive) {
		bool L_228 = __this->____highlighted_16;
		if (L_228)
		{
			goto IL_066b;
		}
	}
	{
		bool L_229 = __this->___hitActive_143;
		if (!L_229)
		{
			goto IL_0877;
		}
	}

IL_066b:
	{
		// Color overlayColor = this.overlayColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_230 = __this->___overlayColor_23;
		V_22 = L_230;
		// float overlayMinIntensity = this.overlayMinIntensity;
		float L_231 = __this->___overlayMinIntensity_25;
		V_23 = L_231;
		// float overlayBlending = this.overlayBlending;
		float L_232 = __this->___overlayBlending_26;
		V_24 = L_232;
		// if (hitActive) {
		bool L_233 = __this->___hitActive_143;
		if (!L_233)
		{
			goto IL_076a;
		}
	}
	{
		// float t = hitFadeOutDuration > 0 ? (Time.time - hitStartTime) / hitFadeOutDuration : 1f;
		float L_234 = __this->___hitFadeOutDuration_141;
		if ((((float)L_234) > ((float)(0.0f))))
		{
			goto IL_06a2;
		}
	}
	{
		G_B104_0 = (1.0f);
		goto IL_06b5;
	}

IL_06a2:
	{
		float L_235;
		L_235 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_236 = __this->___hitStartTime_140;
		float L_237 = __this->___hitFadeOutDuration_141;
		G_B104_0 = ((float)(((float)il2cpp_codegen_subtract(L_235, L_236))/L_237));
	}

IL_06b5:
	{
		V_25 = G_B104_0;
		// if (t >= 1f) {
		float L_238 = V_25;
		if ((!(((float)L_238) >= ((float)(1.0f)))))
		{
			goto IL_06e8;
		}
	}
	{
		// hitActive = false;
		__this->___hitActive_143 = (bool)0;
		// overlayColor.a = _highlighted ? overlay : 0;
		bool L_239 = __this->____highlighted_16;
		G_B106_0 = (&V_22);
		if (L_239)
		{
			G_B107_0 = (&V_22);
			goto IL_06d8;
		}
	}
	{
		G_B108_0 = (0.0f);
		G_B108_1 = G_B106_0;
		goto IL_06de;
	}

IL_06d8:
	{
		float L_240 = __this->___overlay_22;
		G_B108_0 = L_240;
		G_B108_1 = G_B107_0;
	}

IL_06de:
	{
		G_B108_1->___a_3 = G_B108_0;
		goto IL_077a;
	}

IL_06e8:
	{
		// bool lerpToCurrentOverlay = _highlighted && overlay > 0;
		bool L_241 = __this->____highlighted_16;
		if (!L_241)
		{
			goto IL_06ff;
		}
	}
	{
		float L_242 = __this->___overlay_22;
		G_B112_0 = ((((float)L_242) > ((float)(0.0f)))? 1 : 0);
		goto IL_0700;
	}

IL_06ff:
	{
		G_B112_0 = 0;
	}

IL_0700:
	{
		V_26 = (bool)G_B112_0;
		// overlayColor = lerpToCurrentOverlay ? Color.Lerp(hitColor, overlayColor, t) : hitColor;
		bool L_243 = V_26;
		if (L_243)
		{
			goto IL_070e;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_244 = __this->___hitColor_142;
		G_B115_0 = L_244;
		goto IL_071d;
	}

IL_070e:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_245 = __this->___hitColor_142;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_246 = V_22;
		float L_247 = V_25;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_248;
		L_248 = Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline(L_245, L_246, L_247, NULL);
		G_B115_0 = L_248;
	}

IL_071d:
	{
		V_22 = G_B115_0;
		// overlayColor.a = lerpToCurrentOverlay ? Mathf.Lerp(1f - t, overlay, t) : 1f - t;
		bool L_249 = V_26;
		G_B116_0 = (&V_22);
		if (L_249)
		{
			G_B117_0 = (&V_22);
			goto IL_072f;
		}
	}
	{
		float L_250 = V_25;
		G_B118_0 = ((float)il2cpp_codegen_subtract((1.0f), L_250));
		G_B118_1 = G_B116_0;
		goto IL_0744;
	}

IL_072f:
	{
		float L_251 = V_25;
		float L_252 = __this->___overlay_22;
		float L_253 = V_25;
		float L_254;
		L_254 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(((float)il2cpp_codegen_subtract((1.0f), L_251)), L_252, L_253, NULL);
		G_B118_0 = L_254;
		G_B118_1 = G_B117_0;
	}

IL_0744:
	{
		G_B118_1->___a_3 = G_B118_0;
		// overlayColor.a *= hitInitialIntensity;
		float* L_255 = (&(&V_22)->___a_3);
		float* L_256 = L_255;
		float L_257 = *((float*)L_256);
		float L_258 = __this->___hitInitialIntensity_139;
		*((float*)L_256) = (float)((float)il2cpp_codegen_multiply(L_257, L_258));
		// overlayMinIntensity = 1f;
		V_23 = (1.0f);
		// overlayBlending = 0;
		V_24 = (0.0f);
		goto IL_077a;
	}

IL_076a:
	{
		// overlayColor.a = overlay * fade;
		float L_259 = __this->___overlay_22;
		float L_260 = V_8;
		(&V_22)->___a_3 = ((float)il2cpp_codegen_multiply(L_259, L_260));
	}

IL_077a:
	{
		// if (overlay > 0) {
		float L_261 = __this->___overlay_22;
		if ((!(((float)L_261) > ((float)(0.0f)))))
		{
			goto IL_0877;
		}
	}
	{
		// for (int l = 0; l < mesh.subMeshCount; l++) {
		V_27 = 0;
		goto IL_0869;
	}

IL_0792:
	{
		// if (((1 << l) & subMeshMask) == 0) continue;
		int32_t L_262 = V_27;
		int32_t L_263 = __this->___subMeshMask_21;
		if (!((int32_t)(((int32_t)(1<<((int32_t)(L_262&((int32_t)31)))))&L_263)))
		{
			goto IL_0863;
		}
	}
	{
		// if (l < rms[k].fxMatOverlay.Length && rms[k].fxMatOverlay[l] != null) {
		int32_t L_264 = V_27;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_265 = __this->___rms_70;
		int32_t L_266 = V_18;
		NullCheck(L_265);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_267 = ((L_265)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_266)))->___fxMatOverlay_10;
		NullCheck(L_267);
		if ((((int32_t)L_264) >= ((int32_t)((int32_t)(((RuntimeArray*)L_267)->max_length)))))
		{
			goto IL_0863;
		}
	}
	{
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_268 = __this->___rms_70;
		int32_t L_269 = V_18;
		NullCheck(L_268);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_270 = ((L_268)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_269)))->___fxMatOverlay_10;
		int32_t L_271 = V_27;
		NullCheck(L_270);
		int32_t L_272 = L_271;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_273 = (L_270)->GetAt(static_cast<il2cpp_array_size_t>(L_272));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_274;
		L_274 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_273, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_274)
		{
			goto IL_0863;
		}
	}
	{
		// rms[k].fxMatOverlay[l].color = overlayColor;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_275 = __this->___rms_70;
		int32_t L_276 = V_18;
		NullCheck(L_275);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_277 = ((L_275)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_276)))->___fxMatOverlay_10;
		int32_t L_278 = V_27;
		NullCheck(L_277);
		int32_t L_279 = L_278;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_280 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_279));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_281 = V_22;
		NullCheck(L_280);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_280, L_281, NULL);
		// rms[k].fxMatOverlay[l].SetVector("_OverlayData", new Vector3(overlayAnimationSpeed, overlayMinIntensity, overlayBlending));
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_282 = __this->___rms_70;
		int32_t L_283 = V_18;
		NullCheck(L_282);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_284 = ((L_282)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_283)))->___fxMatOverlay_10;
		int32_t L_285 = V_27;
		NullCheck(L_284);
		int32_t L_286 = L_285;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_287 = (L_284)->GetAt(static_cast<il2cpp_array_size_t>(L_286));
		float L_288 = __this->___overlayAnimationSpeed_24;
		float L_289 = V_23;
		float L_290 = V_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_291;
		memset((&L_291), 0, sizeof(L_291));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_291), L_288, L_289, L_290, /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_292;
		L_292 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_291, NULL);
		NullCheck(L_287);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_287, _stringLiteral43AD1BD6C27526D7893DD88B86511D1C248720D2, L_292, NULL);
		// cbHighlight.DrawRenderer(rms[k].renderer, rms[k].fxMatOverlay[l], l);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_293 = __this->___cbHighlight_96;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_294 = __this->___rms_70;
		int32_t L_295 = V_18;
		NullCheck(L_294);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_296 = ((L_294)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_295)))->___renderer_5;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_297 = __this->___rms_70;
		int32_t L_298 = V_18;
		NullCheck(L_297);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_299 = ((L_297)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_298)))->___fxMatOverlay_10;
		int32_t L_300 = V_27;
		NullCheck(L_299);
		int32_t L_301 = L_300;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_302 = (L_299)->GetAt(static_cast<il2cpp_array_size_t>(L_301));
		int32_t L_303 = V_27;
		NullCheck(L_293);
		CommandBuffer_DrawRenderer_m6667EA1141D0759454E51CDC2A24DB531357C7C6(L_293, L_296, L_302, L_303, NULL);
	}

IL_0863:
	{
		// for (int l = 0; l < mesh.subMeshCount; l++) {
		int32_t L_304 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_304, 1));
	}

IL_0869:
	{
		// for (int l = 0; l < mesh.subMeshCount; l++) {
		int32_t L_305 = V_27;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_306 = V_19;
		NullCheck(L_306);
		int32_t L_307;
		L_307 = Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B(L_306, NULL);
		if ((((int32_t)L_305) < ((int32_t)L_307)))
		{
			goto IL_0792;
		}
	}

IL_0877:
	{
		// if (!_highlighted)
		bool L_308 = __this->____highlighted_16;
		if (!L_308)
		{
			goto IL_122b;
		}
	}
	{
		// bool allowGPUInstancing = useGPUInstancing && !rms[k].skinnedMesh;
		bool L_309 = __this->___useGPUInstancing_118;
		if (!L_309)
		{
			goto IL_08a1;
		}
	}
	{
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_310 = __this->___rms_70;
		int32_t L_311 = V_18;
		NullCheck(L_310);
		bool L_312 = ((L_310)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_311)))->___skinnedMesh_6;
		G_B132_0 = ((((int32_t)L_312) == ((int32_t)0))? 1 : 0);
		goto IL_08a2;
	}

IL_08a1:
	{
		G_B132_0 = 0;
	}

IL_08a2:
	{
		V_20 = (bool)G_B132_0;
		// for (int l = 0; l < mesh.subMeshCount; l++) {
		V_28 = 0;
		goto IL_0fba;
	}

IL_08ac:
	{
		// if (((1 << l) & subMeshMask) == 0) continue;
		int32_t L_313 = V_28;
		int32_t L_314 = __this->___subMeshMask_21;
		if (!((int32_t)(((int32_t)(1<<((int32_t)(L_313&((int32_t)31)))))&L_314)))
		{
			goto IL_0fb4;
		}
	}
	{
		// if (glow > 0 && glowQuality != QualityLevel.Highest) {
		float L_315 = __this->___glow_35;
		if ((!(((float)L_315) > ((float)(0.0f)))))
		{
			goto IL_0c8e;
		}
	}
	{
		int32_t L_316 = __this->___glowQuality_37;
		if ((((int32_t)L_316) == ((int32_t)2)))
		{
			goto IL_0c8e;
		}
	}
	{
		// matDataGlow.Clear();
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_317 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matDataGlow_122;
		NullCheck(L_317);
		List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_inline(L_317, List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_RuntimeMethod_var);
		// matDataColor.Clear();
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_318 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matDataColor_123;
		NullCheck(L_318);
		List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_inline(L_318, List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_RuntimeMethod_var);
		// matDataDirection.Clear();
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_319 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matDataDirection_121;
		NullCheck(L_319);
		List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_inline(L_319, List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_RuntimeMethod_var);
		// for (int glowPass = 0; glowPass < glowPasses.Length; glowPass++) {
		V_29 = 0;
		goto IL_0b9f;
	}

IL_0901:
	{
		// if (glowQuality.UsesMultipleOffsets()) {
		int32_t L_320 = __this->___glowQuality_37;
		bool L_321;
		L_321 = QualityLevelExtensions_UsesMultipleOffsets_mC4531683604025C304753CBBE3AD5A72388F28D5(L_320, NULL);
		if (!L_321)
		{
			goto IL_0a76;
		}
	}
	{
		// for (int o = glowOffsetsMin; o <= glowOffsetsMax; o++) {
		int32_t L_322 = __this->___glowOffsetsMin_127;
		V_30 = L_322;
		goto IL_0a64;
	}

IL_091e:
	{
		// Vector3 direction = offsets[o];
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_323 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___offsets_93;
		int32_t L_324 = V_30;
		NullCheck(L_323);
		int32_t L_325 = L_324;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_326 = (L_323)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		V_31 = L_326;
		// direction.y *= aspect;
		float* L_327 = (&(&V_31)->___y_3);
		float* L_328 = L_327;
		float L_329 = *((float*)L_328);
		float L_330 = V_5;
		*((float*)L_328) = (float)((float)il2cpp_codegen_multiply(L_329, L_330));
		// Color dataColor = glowPasses[glowPass].color;
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_331 = __this->___glowPasses_47;
		int32_t L_332 = V_29;
		NullCheck(L_331);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_333 = ((L_331)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_332)))->___color_2;
		V_32 = L_333;
		// Vector4 dataGlow = new Vector4(fade * glowReal * glowPasses[glowPass].alpha, glowPasses[glowPass].offset * glowWidth / 100f, glowMagicNumber1, glowMagicNumber2);
		float L_334 = V_8;
		float L_335 = V_2;
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_336 = __this->___glowPasses_47;
		int32_t L_337 = V_29;
		NullCheck(L_336);
		float L_338 = ((L_336)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_337)))->___alpha_1;
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_339 = __this->___glowPasses_47;
		int32_t L_340 = V_29;
		NullCheck(L_339);
		float L_341 = ((L_339)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_340)))->___offset_0;
		float L_342 = __this->___glowWidth_36;
		float L_343 = __this->___glowMagicNumber1_41;
		float L_344 = __this->___glowMagicNumber2_42;
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_33), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_334, L_335)), L_338)), ((float)(((float)il2cpp_codegen_multiply(L_341, L_342))/(100.0f))), L_343, L_344, NULL);
		// if (allowGPUInstancing) {
		bool L_345 = V_20;
		if (!L_345)
		{
			goto IL_09e9;
		}
	}
	{
		// matDataDirection.Add(direction);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_346 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matDataDirection_121;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_347 = V_31;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_348;
		L_348 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_347, NULL);
		NullCheck(L_346);
		List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_inline(L_346, L_348, List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_RuntimeMethod_var);
		// matDataGlow.Add(dataGlow);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_349 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matDataGlow_122;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_350 = V_33;
		NullCheck(L_349);
		List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_inline(L_349, L_350, List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_RuntimeMethod_var);
		// matDataColor.Add(new Color(dataColor.r, dataColor.g, dataColor.b, dataColor.a));
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_351 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matDataColor_123;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_352 = V_32;
		float L_353 = L_352.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_354 = V_32;
		float L_355 = L_354.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_356 = V_32;
		float L_357 = L_356.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_358 = V_32;
		float L_359 = L_358.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_360;
		memset((&L_360), 0, sizeof(L_360));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_360), L_353, L_355, L_357, L_359, /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_361;
		L_361 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_360, NULL);
		NullCheck(L_351);
		List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_inline(L_351, L_361, List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_RuntimeMethod_var);
		goto IL_0a5e;
	}

IL_09e9:
	{
		// int matIndex = glowPass * 8 + o;
		int32_t L_362 = V_29;
		int32_t L_363 = V_30;
		V_34 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_362, 8)), L_363));
		// fxMatGlow[matIndex].SetVector("_GlowDirection", direction);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_364 = __this->___fxMatGlow_92;
		int32_t L_365 = V_34;
		NullCheck(L_364);
		int32_t L_366 = L_365;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_367 = (L_364)->GetAt(static_cast<il2cpp_array_size_t>(L_366));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_368 = V_31;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_369;
		L_369 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_368, NULL);
		NullCheck(L_367);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_367, _stringLiteral48DFDC8C33A0AF1CBEE6B4C3F550E629E667C311, L_369, NULL);
		// fxMatGlow[matIndex].SetColor("_GlowColor", dataColor);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_370 = __this->___fxMatGlow_92;
		int32_t L_371 = V_34;
		NullCheck(L_370);
		int32_t L_372 = L_371;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_373 = (L_370)->GetAt(static_cast<il2cpp_array_size_t>(L_372));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_374 = V_32;
		NullCheck(L_373);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_373, _stringLiteralE066DD3CA3CA9295CC83FA394543BA7B03B848BE, L_374, NULL);
		// fxMatGlow[matIndex].SetVector("_Glow", dataGlow);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_375 = __this->___fxMatGlow_92;
		int32_t L_376 = V_34;
		NullCheck(L_375);
		int32_t L_377 = L_376;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_378 = (L_375)->GetAt(static_cast<il2cpp_array_size_t>(L_377));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_379 = V_33;
		NullCheck(L_378);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_378, _stringLiteralEA6F0091C0F4C6C5BD7271CF1420AE410D38DFAB, L_379, NULL);
		// cbHighlight.DrawRenderer(rms[k].renderer, fxMatGlow[matIndex], l);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_380 = __this->___cbHighlight_96;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_381 = __this->___rms_70;
		int32_t L_382 = V_18;
		NullCheck(L_381);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_383 = ((L_381)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_382)))->___renderer_5;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_384 = __this->___fxMatGlow_92;
		int32_t L_385 = V_34;
		NullCheck(L_384);
		int32_t L_386 = L_385;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_387 = (L_384)->GetAt(static_cast<il2cpp_array_size_t>(L_386));
		int32_t L_388 = V_28;
		NullCheck(L_380);
		CommandBuffer_DrawRenderer_m6667EA1141D0759454E51CDC2A24DB531357C7C6(L_380, L_383, L_387, L_388, NULL);
	}

IL_0a5e:
	{
		// for (int o = glowOffsetsMin; o <= glowOffsetsMax; o++) {
		int32_t L_389 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add(L_389, 1));
	}

IL_0a64:
	{
		// for (int o = glowOffsetsMin; o <= glowOffsetsMax; o++) {
		int32_t L_390 = V_30;
		int32_t L_391 = __this->___glowOffsetsMax_128;
		if ((((int32_t)L_390) <= ((int32_t)L_391)))
		{
			goto IL_091e;
		}
	}
	{
		goto IL_0b99;
	}

IL_0a76:
	{
		// Vector4 dataGlow = new Vector4(fade * glowReal * glowPasses[glowPass].alpha, glowPasses[glowPass].offset * glowWidth / 100f, glowMagicNumber1, glowMagicNumber2);
		float L_392 = V_8;
		float L_393 = V_2;
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_394 = __this->___glowPasses_47;
		int32_t L_395 = V_29;
		NullCheck(L_394);
		float L_396 = ((L_394)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_395)))->___alpha_1;
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_397 = __this->___glowPasses_47;
		int32_t L_398 = V_29;
		NullCheck(L_397);
		float L_399 = ((L_397)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_398)))->___offset_0;
		float L_400 = __this->___glowWidth_36;
		float L_401 = __this->___glowMagicNumber1_41;
		float L_402 = __this->___glowMagicNumber2_42;
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_35), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_392, L_393)), L_396)), ((float)(((float)il2cpp_codegen_multiply(L_399, L_400))/(100.0f))), L_401, L_402, NULL);
		// Color dataColor = glowPasses[glowPass].color;
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_403 = __this->___glowPasses_47;
		int32_t L_404 = V_29;
		NullCheck(L_403);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_405 = ((L_403)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_404)))->___color_2;
		V_36 = L_405;
		// if (allowGPUInstancing) {
		bool L_406 = V_20;
		if (!L_406)
		{
			goto IL_0b24;
		}
	}
	{
		// matDataDirection.Add(Vector4.zero);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_407 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matDataDirection_121;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_408;
		L_408 = Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline(NULL);
		NullCheck(L_407);
		List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_inline(L_407, L_408, List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_RuntimeMethod_var);
		// matDataGlow.Add(dataGlow);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_409 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matDataGlow_122;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_410 = V_35;
		NullCheck(L_409);
		List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_inline(L_409, L_410, List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_RuntimeMethod_var);
		// matDataColor.Add(new Color(dataColor.r, dataColor.g, dataColor.b, dataColor.a));
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_411 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matDataColor_123;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_412 = V_36;
		float L_413 = L_412.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_414 = V_36;
		float L_415 = L_414.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_416 = V_36;
		float L_417 = L_416.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_418 = V_36;
		float L_419 = L_418.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_420;
		memset((&L_420), 0, sizeof(L_420));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_420), L_413, L_415, L_417, L_419, /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_421;
		L_421 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_420, NULL);
		NullCheck(L_411);
		List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_inline(L_411, L_421, List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_RuntimeMethod_var);
		goto IL_0b99;
	}

IL_0b24:
	{
		// int matIndex = glowPass * 8;
		int32_t L_422 = V_29;
		V_37 = ((int32_t)il2cpp_codegen_multiply(L_422, 8));
		// fxMatGlow[matIndex].SetColor("_GlowColor", dataColor);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_423 = __this->___fxMatGlow_92;
		int32_t L_424 = V_37;
		NullCheck(L_423);
		int32_t L_425 = L_424;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_426 = (L_423)->GetAt(static_cast<il2cpp_array_size_t>(L_425));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_427 = V_36;
		NullCheck(L_426);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_426, _stringLiteralE066DD3CA3CA9295CC83FA394543BA7B03B848BE, L_427, NULL);
		// fxMatGlow[matIndex].SetVector("_Glow", dataGlow);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_428 = __this->___fxMatGlow_92;
		int32_t L_429 = V_37;
		NullCheck(L_428);
		int32_t L_430 = L_429;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_431 = (L_428)->GetAt(static_cast<il2cpp_array_size_t>(L_430));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_432 = V_35;
		NullCheck(L_431);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_431, _stringLiteralEA6F0091C0F4C6C5BD7271CF1420AE410D38DFAB, L_432, NULL);
		// fxMatGlow[matIndex].SetVector("_GlowDirection", Vector3.zero);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_433 = __this->___fxMatGlow_92;
		int32_t L_434 = V_37;
		NullCheck(L_433);
		int32_t L_435 = L_434;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_436 = (L_433)->GetAt(static_cast<il2cpp_array_size_t>(L_435));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_437;
		L_437 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_438;
		L_438 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_437, NULL);
		NullCheck(L_436);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_436, _stringLiteral48DFDC8C33A0AF1CBEE6B4C3F550E629E667C311, L_438, NULL);
		// cbHighlight.DrawRenderer(rms[k].renderer, fxMatGlow[matIndex], l);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_439 = __this->___cbHighlight_96;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_440 = __this->___rms_70;
		int32_t L_441 = V_18;
		NullCheck(L_440);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_442 = ((L_440)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_441)))->___renderer_5;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_443 = __this->___fxMatGlow_92;
		int32_t L_444 = V_37;
		NullCheck(L_443);
		int32_t L_445 = L_444;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_446 = (L_443)->GetAt(static_cast<il2cpp_array_size_t>(L_445));
		int32_t L_447 = V_28;
		NullCheck(L_439);
		CommandBuffer_DrawRenderer_m6667EA1141D0759454E51CDC2A24DB531357C7C6(L_439, L_442, L_446, L_447, NULL);
	}

IL_0b99:
	{
		// for (int glowPass = 0; glowPass < glowPasses.Length; glowPass++) {
		int32_t L_448 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add(L_448, 1));
	}

IL_0b9f:
	{
		// for (int glowPass = 0; glowPass < glowPasses.Length; glowPass++) {
		int32_t L_449 = V_29;
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_450 = __this->___glowPasses_47;
		NullCheck(L_450);
		if ((((int32_t)L_449) < ((int32_t)((int32_t)(((RuntimeArray*)L_450)->max_length)))))
		{
			goto IL_0901;
		}
	}
	{
		// if (allowGPUInstancing) {
		bool L_451 = V_20;
		if (!L_451)
		{
			goto IL_0c8e;
		}
	}
	{
		// int instanceCount = matDataDirection.Count;
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_452 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matDataDirection_121;
		NullCheck(L_452);
		int32_t L_453;
		L_453 = List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_inline(L_452, List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_RuntimeMethod_var);
		V_38 = L_453;
		// if (instanceCount > 0) {
		int32_t L_454 = V_38;
		if ((((int32_t)L_454) <= ((int32_t)0)))
		{
			goto IL_0c8e;
		}
	}
	{
		// glowPropertyBlock.Clear();
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_455 = __this->___glowPropertyBlock_119;
		NullCheck(L_455);
		MaterialPropertyBlock_Clear_m83CE1CC476A80F162FC89DBF6C2C78659B6E1253(L_455, NULL);
		// glowPropertyBlock.SetVectorArray("_GlowDirection", matDataDirection);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_456 = __this->___glowPropertyBlock_119;
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_457 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matDataDirection_121;
		NullCheck(L_456);
		MaterialPropertyBlock_SetVectorArray_m4A8A90178454BE449DCA42B43D860FE08E512E71(L_456, _stringLiteral48DFDC8C33A0AF1CBEE6B4C3F550E629E667C311, L_457, NULL);
		// glowPropertyBlock.SetVectorArray("_GlowColor", matDataColor);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_458 = __this->___glowPropertyBlock_119;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_459 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matDataColor_123;
		NullCheck(L_458);
		MaterialPropertyBlock_SetVectorArray_m4A8A90178454BE449DCA42B43D860FE08E512E71(L_458, _stringLiteralE066DD3CA3CA9295CC83FA394543BA7B03B848BE, L_459, NULL);
		// glowPropertyBlock.SetVectorArray("_Glow", matDataGlow);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_460 = __this->___glowPropertyBlock_119;
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_461 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matDataGlow_122;
		NullCheck(L_460);
		MaterialPropertyBlock_SetVectorArray_m4A8A90178454BE449DCA42B43D860FE08E512E71(L_460, _stringLiteralEA6F0091C0F4C6C5BD7271CF1420AE410D38DFAB, L_461, NULL);
		// if (matrices == null || matrices.Length < instanceCount) {
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_462 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matrices_124;
		if (!L_462)
		{
			goto IL_0c25;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_463 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matrices_124;
		NullCheck(L_463);
		int32_t L_464 = V_38;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_463)->max_length))) >= ((int32_t)L_464)))
		{
			goto IL_0c31;
		}
	}

IL_0c25:
	{
		// matrices = new Matrix4x4[instanceCount];
		int32_t L_465 = V_38;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_466 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var, (uint32_t)L_465);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matrices_124 = L_466;
		Il2CppCodeGenWriteBarrier((void**)(&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matrices_124), (void*)L_466);
	}

IL_0c31:
	{
		// Matrix4x4 objectToWorld = rms[k].transform.localToWorldMatrix;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_467 = __this->___rms_70;
		int32_t L_468 = V_18;
		NullCheck(L_467);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_469 = ((L_467)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_468)))->___transform_1;
		NullCheck(L_469);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_470;
		L_470 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_469, NULL);
		V_39 = L_470;
		// for (int m = 0; m < instanceCount; m++) {
		V_40 = 0;
		goto IL_0c63;
	}

IL_0c4f:
	{
		// matrices[m] = objectToWorld;
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_471 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matrices_124;
		int32_t L_472 = V_40;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_473 = V_39;
		NullCheck(L_471);
		(L_471)->SetAt(static_cast<il2cpp_array_size_t>(L_472), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_473);
		// for (int m = 0; m < instanceCount; m++) {
		int32_t L_474 = V_40;
		V_40 = ((int32_t)il2cpp_codegen_add(L_474, 1));
	}

IL_0c63:
	{
		// for (int m = 0; m < instanceCount; m++) {
		int32_t L_475 = V_40;
		int32_t L_476 = V_38;
		if ((((int32_t)L_475) < ((int32_t)L_476)))
		{
			goto IL_0c4f;
		}
	}
	{
		// cbHighlight.DrawMeshInstanced(mesh, l, fxMatGlow[0], 0, matrices, instanceCount, glowPropertyBlock);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_477 = __this->___cbHighlight_96;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_478 = V_19;
		int32_t L_479 = V_28;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_480 = __this->___fxMatGlow_92;
		NullCheck(L_480);
		int32_t L_481 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_482 = (L_480)->GetAt(static_cast<il2cpp_array_size_t>(L_481));
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_483 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matrices_124;
		int32_t L_484 = V_38;
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_485 = __this->___glowPropertyBlock_119;
		NullCheck(L_477);
		CommandBuffer_DrawMeshInstanced_mABC4059E4316A76508915D89CD16D238D3285974(L_477, L_478, L_479, L_482, 0, L_483, L_484, L_485, NULL);
	}

IL_0c8e:
	{
		// if (outline > 0 && outlineQuality != QualityLevel.Highest) {
		float L_486 = __this->___outline_27;
		if ((!(((float)L_486) > ((float)(0.0f)))))
		{
			goto IL_0eef;
		}
	}
	{
		int32_t L_487 = __this->___outlineQuality_30;
		if ((((int32_t)L_487) == ((int32_t)2)))
		{
			goto IL_0eef;
		}
	}
	{
		// Color outlineColor = this.outlineColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_488 = __this->___outlineColor_28;
		V_41 = L_488;
		// outlineColor.a = outline * fade;
		float L_489 = __this->___outline_27;
		float L_490 = V_8;
		(&V_41)->___a_3 = ((float)il2cpp_codegen_multiply(L_489, L_490));
		// if (outlineQuality.UsesMultipleOffsets()) {
		int32_t L_491 = __this->___outlineQuality_30;
		bool L_492;
		L_492 = QualityLevelExtensions_UsesMultipleOffsets_mC4531683604025C304753CBBE3AD5A72388F28D5(L_491, NULL);
		if (!L_492)
		{
			goto IL_0e52;
		}
	}
	{
		// matDataDirection.Clear();
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_493 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matDataDirection_121;
		NullCheck(L_493);
		List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_inline(L_493, List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_RuntimeMethod_var);
		// for (int o = outlineOffsetsMin; o <= outlineOffsetsMax; o++) {
		int32_t L_494 = __this->___outlineOffsetsMin_125;
		V_42 = L_494;
		goto IL_0d8a;
	}

IL_0ce9:
	{
		// fxMatOutline[o].SetColor("_OutlineColor", outlineColor);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_495 = __this->___fxMatOutline_91;
		int32_t L_496 = V_42;
		NullCheck(L_495);
		int32_t L_497 = L_496;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_498 = (L_495)->GetAt(static_cast<il2cpp_array_size_t>(L_497));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_499 = V_41;
		NullCheck(L_498);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_498, _stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C, L_499, NULL);
		// Vector3 direction = offsets[o] * (outlineWidth / 100f);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_500 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___offsets_93;
		int32_t L_501 = V_42;
		NullCheck(L_500);
		int32_t L_502 = L_501;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_503 = (L_500)->GetAt(static_cast<il2cpp_array_size_t>(L_502));
		float L_504 = __this->___outlineWidth_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_505;
		L_505 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_503, ((float)(L_504/(100.0f))), NULL);
		V_43 = L_505;
		// direction.y *= aspect;
		float* L_506 = (&(&V_43)->___y_3);
		float* L_507 = L_506;
		float L_508 = *((float*)L_507);
		float L_509 = V_5;
		*((float*)L_507) = (float)((float)il2cpp_codegen_multiply(L_508, L_509));
		// if (allowGPUInstancing) {
		bool L_510 = V_20;
		if (!L_510)
		{
			goto IL_0d41;
		}
	}
	{
		// matDataDirection.Add(direction);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_511 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matDataDirection_121;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_512 = V_43;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_513;
		L_513 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_512, NULL);
		NullCheck(L_511);
		List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_inline(L_511, L_513, List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_RuntimeMethod_var);
		goto IL_0d84;
	}

IL_0d41:
	{
		// fxMatOutline[o].SetVector("_OutlineDirection", direction);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_514 = __this->___fxMatOutline_91;
		int32_t L_515 = V_42;
		NullCheck(L_514);
		int32_t L_516 = L_515;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_517 = (L_514)->GetAt(static_cast<il2cpp_array_size_t>(L_516));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_518 = V_43;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_519;
		L_519 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_518, NULL);
		NullCheck(L_517);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_517, _stringLiteralFC47B489AF3EC18C22208208283F839984ACE798, L_519, NULL);
		// cbHighlight.DrawRenderer(rms[k].renderer, fxMatOutline[o], l, 0);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_520 = __this->___cbHighlight_96;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_521 = __this->___rms_70;
		int32_t L_522 = V_18;
		NullCheck(L_521);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_523 = ((L_521)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_522)))->___renderer_5;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_524 = __this->___fxMatOutline_91;
		int32_t L_525 = V_42;
		NullCheck(L_524);
		int32_t L_526 = L_525;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_527 = (L_524)->GetAt(static_cast<il2cpp_array_size_t>(L_526));
		int32_t L_528 = V_28;
		NullCheck(L_520);
		CommandBuffer_DrawRenderer_m0E01900E0CA8B52F3BB03C82A27214A354007138(L_520, L_523, L_527, L_528, 0, NULL);
	}

IL_0d84:
	{
		// for (int o = outlineOffsetsMin; o <= outlineOffsetsMax; o++) {
		int32_t L_529 = V_42;
		V_42 = ((int32_t)il2cpp_codegen_add(L_529, 1));
	}

IL_0d8a:
	{
		// for (int o = outlineOffsetsMin; o <= outlineOffsetsMax; o++) {
		int32_t L_530 = V_42;
		int32_t L_531 = __this->___outlineOffsetsMax_126;
		if ((((int32_t)L_530) <= ((int32_t)L_531)))
		{
			goto IL_0ce9;
		}
	}
	{
		// if (allowGPUInstancing) {
		bool L_532 = V_20;
		if (!L_532)
		{
			goto IL_0eef;
		}
	}
	{
		// int instanceCount = matDataDirection.Count;
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_533 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matDataDirection_121;
		NullCheck(L_533);
		int32_t L_534;
		L_534 = List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_inline(L_533, List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_RuntimeMethod_var);
		V_44 = L_534;
		// if (instanceCount > 0) {
		int32_t L_535 = V_44;
		if ((((int32_t)L_535) <= ((int32_t)0)))
		{
			goto IL_0eef;
		}
	}
	{
		// outlinePropertyBlock.Clear();
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_536 = __this->___outlinePropertyBlock_120;
		NullCheck(L_536);
		MaterialPropertyBlock_Clear_m83CE1CC476A80F162FC89DBF6C2C78659B6E1253(L_536, NULL);
		// outlinePropertyBlock.SetVectorArray("_OutlineDirection", matDataDirection);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_537 = __this->___outlinePropertyBlock_120;
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_538 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matDataDirection_121;
		NullCheck(L_537);
		MaterialPropertyBlock_SetVectorArray_m4A8A90178454BE449DCA42B43D860FE08E512E71(L_537, _stringLiteralFC47B489AF3EC18C22208208283F839984ACE798, L_538, NULL);
		// if (matrices == null || matrices.Length < instanceCount) {
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_539 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matrices_124;
		if (!L_539)
		{
			goto IL_0de4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_540 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matrices_124;
		NullCheck(L_540);
		int32_t L_541 = V_44;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_540)->max_length))) >= ((int32_t)L_541)))
		{
			goto IL_0df0;
		}
	}

IL_0de4:
	{
		// matrices = new Matrix4x4[instanceCount];
		int32_t L_542 = V_44;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_543 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var, (uint32_t)L_542);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matrices_124 = L_543;
		Il2CppCodeGenWriteBarrier((void**)(&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matrices_124), (void*)L_543);
	}

IL_0df0:
	{
		// Matrix4x4 objectToWorld = rms[k].transform.localToWorldMatrix;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_544 = __this->___rms_70;
		int32_t L_545 = V_18;
		NullCheck(L_544);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_546 = ((L_544)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_545)))->___transform_1;
		NullCheck(L_546);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_547;
		L_547 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_546, NULL);
		V_45 = L_547;
		// for (int m = 0; m < instanceCount; m++) {
		V_46 = 0;
		goto IL_0e22;
	}

IL_0e0e:
	{
		// matrices[m] = objectToWorld;
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_548 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matrices_124;
		int32_t L_549 = V_46;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_550 = V_45;
		NullCheck(L_548);
		(L_548)->SetAt(static_cast<il2cpp_array_size_t>(L_549), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_550);
		// for (int m = 0; m < instanceCount; m++) {
		int32_t L_551 = V_46;
		V_46 = ((int32_t)il2cpp_codegen_add(L_551, 1));
	}

IL_0e22:
	{
		// for (int m = 0; m < instanceCount; m++) {
		int32_t L_552 = V_46;
		int32_t L_553 = V_44;
		if ((((int32_t)L_552) < ((int32_t)L_553)))
		{
			goto IL_0e0e;
		}
	}
	{
		// cbHighlight.DrawMeshInstanced(mesh, l, fxMatOutline[0], 0, matrices, instanceCount, outlinePropertyBlock);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_554 = __this->___cbHighlight_96;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_555 = V_19;
		int32_t L_556 = V_28;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_557 = __this->___fxMatOutline_91;
		NullCheck(L_557);
		int32_t L_558 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_559 = (L_557)->GetAt(static_cast<il2cpp_array_size_t>(L_558));
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_560 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matrices_124;
		int32_t L_561 = V_44;
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_562 = __this->___outlinePropertyBlock_120;
		NullCheck(L_554);
		CommandBuffer_DrawMeshInstanced_mABC4059E4316A76508915D89CD16D238D3285974(L_554, L_555, L_556, L_559, 0, L_560, L_561, L_562, NULL);
		goto IL_0eef;
	}

IL_0e52:
	{
		// fxMatOutline[0].SetColor("_OutlineColor", outlineColor);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_563 = __this->___fxMatOutline_91;
		NullCheck(L_563);
		int32_t L_564 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_565 = (L_563)->GetAt(static_cast<il2cpp_array_size_t>(L_564));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_566 = V_41;
		NullCheck(L_565);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_565, _stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C, L_566, NULL);
		// fxMatOutline[0].SetVector("_OutlineDirection", Vector3.zero);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_567 = __this->___fxMatOutline_91;
		NullCheck(L_567);
		int32_t L_568 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_569 = (L_567)->GetAt(static_cast<il2cpp_array_size_t>(L_568));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_570;
		L_570 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_571;
		L_571 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_570, NULL);
		NullCheck(L_569);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_569, _stringLiteralFC47B489AF3EC18C22208208283F839984ACE798, L_571, NULL);
		// if (rms[k].skinnedMesh) {
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_572 = __this->___rms_70;
		int32_t L_573 = V_18;
		NullCheck(L_572);
		bool L_574 = ((L_572)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_573)))->___skinnedMesh_6;
		if (!L_574)
		{
			goto IL_0ec0;
		}
	}
	{
		// cbHighlight.DrawRenderer(rms[k].renderer, fxMatOutline[0], l, 0);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_575 = __this->___cbHighlight_96;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_576 = __this->___rms_70;
		int32_t L_577 = V_18;
		NullCheck(L_576);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_578 = ((L_576)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_577)))->___renderer_5;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_579 = __this->___fxMatOutline_91;
		NullCheck(L_579);
		int32_t L_580 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_581 = (L_579)->GetAt(static_cast<il2cpp_array_size_t>(L_580));
		int32_t L_582 = V_28;
		NullCheck(L_575);
		CommandBuffer_DrawRenderer_m0E01900E0CA8B52F3BB03C82A27214A354007138(L_575, L_578, L_581, L_582, 0, NULL);
		goto IL_0eef;
	}

IL_0ec0:
	{
		// cbHighlight.DrawMesh(mesh, rms[k].transform.localToWorldMatrix, fxMatOutline[0], l, 0);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_583 = __this->___cbHighlight_96;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_584 = V_19;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_585 = __this->___rms_70;
		int32_t L_586 = V_18;
		NullCheck(L_585);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_587 = ((L_585)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_586)))->___transform_1;
		NullCheck(L_587);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_588;
		L_588 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_587, NULL);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_589 = __this->___fxMatOutline_91;
		NullCheck(L_589);
		int32_t L_590 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_591 = (L_589)->GetAt(static_cast<il2cpp_array_size_t>(L_590));
		int32_t L_592 = V_28;
		NullCheck(L_583);
		CommandBuffer_DrawMesh_m2CDCAC3E41416226D38770259BB2C56CB37D5EEF(L_583, L_584, L_588, L_591, L_592, 0, NULL);
	}

IL_0eef:
	{
		// if (innerGlow > 0 && innerGlowWidth > 0) {
		float L_593 = __this->___innerGlow_48;
		if ((!(((float)L_593) > ((float)(0.0f)))))
		{
			goto IL_0fb4;
		}
	}
	{
		float L_594 = __this->___innerGlowWidth_49;
		if ((!(((float)L_594) > ((float)(0.0f)))))
		{
			goto IL_0fb4;
		}
	}
	{
		// if (l < rms[k].fxMatInnerGlow.Length && rms[k].fxMatInnerGlow[l] != null) {
		int32_t L_595 = V_28;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_596 = __this->___rms_70;
		int32_t L_597 = V_18;
		NullCheck(L_596);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_598 = ((L_596)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_597)))->___fxMatInnerGlow_11;
		NullCheck(L_598);
		if ((((int32_t)L_595) >= ((int32_t)((int32_t)(((RuntimeArray*)L_598)->max_length)))))
		{
			goto IL_0fb4;
		}
	}
	{
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_599 = __this->___rms_70;
		int32_t L_600 = V_18;
		NullCheck(L_599);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_601 = ((L_599)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_600)))->___fxMatInnerGlow_11;
		int32_t L_602 = V_28;
		NullCheck(L_601);
		int32_t L_603 = L_602;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_604 = (L_601)->GetAt(static_cast<il2cpp_array_size_t>(L_603));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_605;
		L_605 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_604, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_605)
		{
			goto IL_0fb4;
		}
	}
	{
		// Color innerGlowColorA = innerGlowColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_606 = __this->___innerGlowColor_50;
		V_47 = L_606;
		// innerGlowColorA.a = innerGlow * fade;
		float L_607 = __this->___innerGlow_48;
		float L_608 = V_8;
		(&V_47)->___a_3 = ((float)il2cpp_codegen_multiply(L_607, L_608));
		// rms[k].fxMatInnerGlow[l].SetColor("_Color", innerGlowColorA);
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_609 = __this->___rms_70;
		int32_t L_610 = V_18;
		NullCheck(L_609);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_611 = ((L_609)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_610)))->___fxMatInnerGlow_11;
		int32_t L_612 = V_28;
		NullCheck(L_611);
		int32_t L_613 = L_612;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_614 = (L_611)->GetAt(static_cast<il2cpp_array_size_t>(L_613));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_615 = V_47;
		NullCheck(L_614);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_614, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_615, NULL);
		// cbHighlight.DrawRenderer(rms[k].renderer, rms[k].fxMatInnerGlow[l], l);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_616 = __this->___cbHighlight_96;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_617 = __this->___rms_70;
		int32_t L_618 = V_18;
		NullCheck(L_617);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_619 = ((L_617)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_618)))->___renderer_5;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_620 = __this->___rms_70;
		int32_t L_621 = V_18;
		NullCheck(L_620);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_622 = ((L_620)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_621)))->___fxMatInnerGlow_11;
		int32_t L_623 = V_28;
		NullCheck(L_622);
		int32_t L_624 = L_623;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_625 = (L_622)->GetAt(static_cast<il2cpp_array_size_t>(L_624));
		int32_t L_626 = V_28;
		NullCheck(L_616);
		CommandBuffer_DrawRenderer_m6667EA1141D0759454E51CDC2A24DB531357C7C6(L_616, L_619, L_625, L_626, NULL);
	}

IL_0fb4:
	{
		// for (int l = 0; l < mesh.subMeshCount; l++) {
		int32_t L_627 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add(L_627, 1));
	}

IL_0fba:
	{
		// for (int l = 0; l < mesh.subMeshCount; l++) {
		int32_t L_628 = V_28;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_629 = V_19;
		NullCheck(L_629);
		int32_t L_630;
		L_630 = Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B(L_629, NULL);
		if ((((int32_t)L_628) < ((int32_t)L_630)))
		{
			goto IL_08ac;
		}
	}
	{
		// if (targetFX) {
		bool L_631 = __this->___targetFX_52;
		if (!L_631)
		{
			goto IL_122b;
		}
	}
	{
		// float fadeOut = 1f;
		V_48 = (1.0f);
		// if (Application.isPlaying) {
		bool L_632;
		L_632 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_632)
		{
			goto IL_101e;
		}
	}
	{
		// fadeOut = (Time.time - highlightStartTime);
		float L_633;
		L_633 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_634 = __this->___highlightStartTime_73;
		V_48 = ((float)il2cpp_codegen_subtract(L_633, L_634));
		// if (fadeOut >= targetFXStayDuration) {
		float L_635 = V_48;
		float L_636 = __this->___targetFXStayDuration_60;
		if ((!(((float)L_635) >= ((float)L_636))))
		{
			goto IL_100e;
		}
	}
	{
		// fadeOut -= targetFXStayDuration;
		float L_637 = V_48;
		float L_638 = __this->___targetFXStayDuration_60;
		V_48 = ((float)il2cpp_codegen_subtract(L_637, L_638));
		// fadeOut = 1f - fadeOut;
		float L_639 = V_48;
		V_48 = ((float)il2cpp_codegen_subtract((1.0f), L_639));
	}

IL_100e:
	{
		// if (fadeOut > 1f) {
		float L_640 = V_48;
		if ((!(((float)L_640) > ((float)(1.0f)))))
		{
			goto IL_101e;
		}
	}
	{
		// fadeOut = 1f;
		V_48 = (1.0f);
	}

IL_101e:
	{
		// bool usesTarget = targetFXCenter != null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_641 = __this->___targetFXCenter_55;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_642;
		L_642 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_641, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_49 = L_642;
		// if (fadeOut > 0 && !(targetEffectRendered && usesTarget)) {
		float L_643 = V_48;
		if ((!(((float)L_643) > ((float)(0.0f)))))
		{
			goto IL_122b;
		}
	}
	{
		bool L_644 = V_9;
		bool L_645 = V_49;
		if (((int32_t)((int32_t)L_644&(int32_t)L_645)))
		{
			goto IL_122b;
		}
	}
	{
		// targetEffectRendered = true;
		V_9 = (bool)1;
		// float scaleT = 1f;
		V_50 = (1.0f);
		// float normalizedTime = 0;
		V_52 = (0.0f);
		// if (Application.isPlaying) {
		bool L_646;
		L_646 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_646)
		{
			goto IL_109d;
		}
	}
	{
		// normalizedTime = (Time.time - highlightStartTime) / targetFXTransitionDuration;
		float L_647;
		L_647 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_648 = __this->___highlightStartTime_73;
		float L_649 = __this->___targetFXTransitionDuration_59;
		V_52 = ((float)(((float)il2cpp_codegen_subtract(L_647, L_648))/L_649));
		// if (normalizedTime > 1f) {
		float L_650 = V_52;
		if ((!(((float)L_650) > ((float)(1.0f)))))
		{
			goto IL_107f;
		}
	}
	{
		// normalizedTime = 1f;
		V_52 = (1.0f);
	}

IL_107f:
	{
		// scaleT = Mathf.Sin(normalizedTime * Mathf.PI * 0.5f);
		float L_651 = V_52;
		float L_652;
		L_652 = sinf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_651, (3.14159274f))), (0.5f))));
		V_50 = L_652;
		// time = Time.time;
		float L_653;
		L_653 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		V_51 = L_653;
		goto IL_10bc;
	}

IL_109d:
	{
		// time = (float)DateTime.Now.Subtract(DateTime.Today).TotalSeconds;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_654;
		L_654 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		V_61 = L_654;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_655;
		L_655 = DateTime_get_Today_mC32D6B4A0EBD6BFBC0E978BEBA48CB4DA5E38FB0(NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_656;
		L_656 = DateTime_Subtract_m4064A98F489219E9C414DF5C03EE041351B4502A((&V_61), L_655, NULL);
		V_62 = L_656;
		double L_657;
		L_657 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_62), NULL);
		V_51 = ((float)L_657);
	}

IL_10bc:
	{
		// Bounds bounds = rms[k].renderer.bounds;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_658 = __this->___rms_70;
		int32_t L_659 = V_18;
		NullCheck(L_658);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_660 = ((L_658)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_659)))->___renderer_5;
		NullCheck(L_660);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_661;
		L_661 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_660, NULL);
		V_53 = L_661;
		// Vector3 scale = bounds.size;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_662;
		L_662 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_53), NULL);
		V_54 = L_662;
		// float minSize = scale.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_663 = V_54;
		float L_664 = L_663.___x_2;
		V_55 = L_664;
		// if (scale.y < minSize) {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_665 = V_54;
		float L_666 = L_665.___y_3;
		float L_667 = V_55;
		if ((!(((float)L_666) < ((float)L_667))))
		{
			goto IL_10fb;
		}
	}
	{
		// minSize = scale.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_668 = V_54;
		float L_669 = L_668.___y_3;
		V_55 = L_669;
	}

IL_10fb:
	{
		// if (scale.z < minSize) {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_670 = V_54;
		float L_671 = L_670.___z_4;
		float L_672 = V_55;
		if ((!(((float)L_671) < ((float)L_672))))
		{
			goto IL_110f;
		}
	}
	{
		// minSize = scale.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_673 = V_54;
		float L_674 = L_673.___z_4;
		V_55 = L_674;
	}

IL_110f:
	{
		// scale.x = scale.y = scale.z = minSize;
		float L_675 = V_55;
		float L_676 = L_675;
		V_63 = L_676;
		(&V_54)->___z_4 = L_676;
		float L_677 = V_63;
		float L_678 = L_677;
		V_63 = L_678;
		(&V_54)->___y_3 = L_678;
		float L_679 = V_63;
		(&V_54)->___x_2 = L_679;
		// scale = Vector3.Lerp(scale * targetFXInitialScale, scale * targetFXEndScale, scaleT);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_680 = V_54;
		float L_681 = __this->___targetFXInitialScale_57;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_682;
		L_682 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_680, L_681, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_683 = V_54;
		float L_684 = __this->___targetFXEndScale_58;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_685;
		L_685 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_683, L_684, NULL);
		float L_686 = V_50;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_687;
		L_687 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_682, L_685, L_686, NULL);
		V_54 = L_687;
		// Quaternion rotation = Quaternion.LookRotation(cam.transform.position - rms[k].transform.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_688 = ___cam0;
		NullCheck(L_688);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_689;
		L_689 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_688, NULL);
		NullCheck(L_689);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_690;
		L_690 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_689, NULL);
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_691 = __this->___rms_70;
		int32_t L_692 = V_18;
		NullCheck(L_691);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_693 = ((L_691)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_692)))->___transform_1;
		NullCheck(L_693);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_694;
		L_694 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_693, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_695;
		L_695 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_690, L_694, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_696;
		L_696 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_695, NULL);
		V_56 = L_696;
		// Quaternion animationRot = Quaternion.Euler(0, 0, time * targetFXRotationSpeed);
		float L_697 = V_51;
		float L_698 = __this->___targetFXRotationSpeed_56;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_699;
		L_699 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_697, L_698)), NULL);
		V_57 = L_699;
		// rotation *= animationRot;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_700 = V_56;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_701 = V_57;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_702;
		L_702 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_700, L_701, NULL);
		V_56 = L_702;
		// Vector3 center = usesTarget ? targetFXCenter.transform.position : bounds.center;
		bool L_703 = V_49;
		if (L_703)
		{
			goto IL_11b3;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_704;
		L_704 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_53), NULL);
		G_B207_0 = L_704;
		goto IL_11c3;
	}

IL_11b3:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_705 = __this->___targetFXCenter_55;
		NullCheck(L_705);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_706;
		L_706 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_705, NULL);
		NullCheck(L_706);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_707;
		L_707 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_706, NULL);
		G_B207_0 = L_707;
	}

IL_11c3:
	{
		V_58 = G_B207_0;
		// if (OnTargetAnimates != null) {
		OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* L_708 = __this->___OnTargetAnimates_64;
		if (!L_708)
		{
			goto IL_11e0;
		}
	}
	{
		// OnTargetAnimates(ref center, ref rotation, ref scale, normalizedTime);
		OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* L_709 = __this->___OnTargetAnimates_64;
		float L_710 = V_52;
		NullCheck(L_709);
		OnTargetAnimatesEvent_Invoke_m45D255781DC043D4C6EADAFC94D73ADFEF74E5D1_inline(L_709, (&V_58), (&V_56), (&V_54), L_710, NULL);
	}

IL_11e0:
	{
		// Matrix4x4 m = Matrix4x4.TRS(center, rotation, scale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_711 = V_58;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_712 = V_56;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_713 = V_54;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_714;
		L_714 = Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680(L_711, L_712, L_713, NULL);
		V_59 = L_714;
		// Color color = targetFXColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_715 = __this->___targetFXColor_54;
		V_60 = L_715;
		// color.a *= fade * fadeOut;
		float* L_716 = (&(&V_60)->___a_3);
		float* L_717 = L_716;
		float L_718 = *((float*)L_717);
		float L_719 = V_8;
		float L_720 = V_48;
		*((float*)L_717) = (float)((float)il2cpp_codegen_multiply(L_718, ((float)il2cpp_codegen_multiply(L_719, L_720))));
		// fxMatTarget.color = color;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_721 = __this->___fxMatTarget_86;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_722 = V_60;
		NullCheck(L_721);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_721, L_722, NULL);
		// cbHighlight.DrawMesh(quadMesh, m, fxMatTarget, 0);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_723 = __this->___cbHighlight_96;
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_724 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___quadMesh_104;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_725 = V_59;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_726 = __this->___fxMatTarget_86;
		NullCheck(L_723);
		CommandBuffer_DrawMesh_m10A0404616C386DB3C4A61A5E5BAF7D0706C7305(L_723, L_724, L_725, L_726, 0, NULL);
	}

IL_122b:
	{
		// for (int k = 0; k < rmsCount; k++) {
		int32_t L_727 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_727, 1));
	}

IL_1231:
	{
		// for (int k = 0; k < rmsCount; k++) {
		int32_t L_728 = V_18;
		int32_t L_729 = __this->___rmsCount_71;
		if ((((int32_t)L_728) < ((int32_t)L_729)))
		{
			goto IL_0595;
		}
	}
	{
		// if (useSmoothBlend && _highlighted && somePartVisible) {
		bool L_730 = __this->___useSmoothBlend_117;
		if (!L_730)
		{
			goto IL_124e;
		}
	}
	{
		bool L_731 = __this->____highlighted_16;
		G_B215_0 = ((int32_t)(L_731));
		goto IL_124f;
	}

IL_124e:
	{
		G_B215_0 = 0;
	}

IL_124f:
	{
		bool L_732 = V_6;
		if (!((int32_t)(G_B215_0&(int32_t)L_732)))
		{
			goto IL_1526;
		}
	}
	{
		// int smoothRTWidth = 0;
		V_64 = 0;
		// int smoothRTHeight = 0;
		V_65 = 0;
		// Bounds smoothBounds = new Bounds();
		il2cpp_codegen_initobj((&V_66), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		// smoothRTWidth = cam.pixelWidth;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_733 = ___cam0;
		NullCheck(L_733);
		int32_t L_734;
		L_734 = Camera_get_pixelWidth_m55AC8AD744FC0179865C2E630C68F9AD0799065D(L_733, NULL);
		V_64 = L_734;
		// smoothRTHeight = cam.pixelHeight;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_735 = ___cam0;
		NullCheck(L_735);
		int32_t L_736;
		L_736 = Camera_get_pixelHeight_m00881B5A440B0018D5A8F837694027050B500F59(L_735, NULL);
		V_65 = L_736;
		// if (smoothRTHeight <= 0) {
		int32_t L_737 = V_65;
		if ((((int32_t)L_737) > ((int32_t)0)))
		{
			goto IL_127d;
		}
	}
	{
		// smoothRTHeight = 1;
		V_65 = 1;
	}

IL_127d:
	{
		// if (UnityEngine.XR.XRSettings.enabled && Application.isPlaying) {
		bool L_738;
		L_738 = XRSettings_get_enabled_m5ECD63DA0B306F7A3FBFD6B67A5B0702F8AEFB54(NULL);
		if (!L_738)
		{
			goto IL_1298;
		}
	}
	{
		bool L_739;
		L_739 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_739)
		{
			goto IL_1298;
		}
	}
	{
		// sourceDesc = UnityEngine.XR.XRSettings.eyeTextureDesc;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_740;
		L_740 = XRSettings_get_eyeTextureDesc_m5E3192C4B94BF8173315571B335444CB4644D324(NULL);
		__this->___sourceDesc_109 = L_740;
		goto IL_12bf;
	}

IL_1298:
	{
		// sourceDesc = new RenderTextureDescriptor(smoothRTWidth, smoothRTHeight, Application.isMobilePlatform ? RenderTextureFormat.Default : RenderTextureFormat.DefaultHDR);
		int32_t L_741 = V_64;
		int32_t L_742 = V_65;
		bool L_743;
		L_743 = Application_get_isMobilePlatform_mBFFD8F419C7FB2FF99C84497C135007BFB5F8B53(NULL);
		G_B222_0 = L_742;
		G_B222_1 = L_741;
		G_B222_2 = __this;
		if (L_743)
		{
			G_B223_0 = L_742;
			G_B223_1 = L_741;
			G_B223_2 = __this;
			goto IL_12a8;
		}
	}
	{
		G_B224_0 = ((int32_t)9);
		G_B224_1 = G_B222_0;
		G_B224_2 = G_B222_1;
		G_B224_3 = G_B222_2;
		goto IL_12a9;
	}

IL_12a8:
	{
		G_B224_0 = 7;
		G_B224_1 = G_B223_0;
		G_B224_2 = G_B223_1;
		G_B224_3 = G_B223_2;
	}

IL_12a9:
	{
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_744;
		memset((&L_744), 0, sizeof(L_744));
		RenderTextureDescriptor__ctor_m939E1427BCEEEDDF2CE6479198FB5E03561B3D3D((&L_744), G_B224_2, G_B224_1, G_B224_0, /*hidden argument*/NULL);
		NullCheck(G_B224_3);
		G_B224_3->___sourceDesc_109 = L_744;
		// sourceDesc.volumeDepth = 1;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_745 = (&__this->___sourceDesc_109);
		RenderTextureDescriptor_set_volumeDepth_mEF9610D1C14182417A01B7243DEE6B559A13B34D_inline(L_745, 1, NULL);
	}

IL_12bf:
	{
		// sourceDesc.msaaSamples = 1;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_746 = (&__this->___sourceDesc_109);
		RenderTextureDescriptor_set_msaaSamples_m6910E09489372746391B14FBAF59A7237539D6C4_inline(L_746, 1, NULL);
		// sourceDesc.useMipMap = false;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_747 = (&__this->___sourceDesc_109);
		RenderTextureDescriptor_set_useMipMap_m2A2A3BC4C8ECCC532AC33E7034502EB2AE242539(L_747, (bool)0, NULL);
		// sourceDesc.depthBufferBits = 0;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_748 = (&__this->___sourceDesc_109);
		RenderTextureDescriptor_set_depthBufferBits_mA3710C0D6E485BA6465B328CD8B1954F0E4C5819(L_748, 0, NULL);
		// cbHighlight.GetTemporaryRT(sourceRT, sourceDesc, FilterMode.Bilinear);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_749 = __this->___cbHighlight_96;
		int32_t L_750 = __this->___sourceRT_105;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_751 = __this->___sourceDesc_109;
		NullCheck(L_749);
		CommandBuffer_GetTemporaryRT_m98BCBFF670DDD3AC8657664F8252A9DF64D49FA5(L_749, L_750, L_751, 1, NULL);
		// cbHighlight.SetRenderTarget(sourceRT);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_752 = __this->___cbHighlight_96;
		int32_t L_753 = __this->___sourceRT_105;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_754;
		L_754 = RenderTargetIdentifier_op_Implicit_m84624C22E2F3271EBEE2E96A8404969B9E99E526(L_753, NULL);
		NullCheck(L_752);
		CommandBuffer_SetRenderTarget_m89782BA1E8AD50020DBDB9EABF32F8AA9356628A(L_752, L_754, NULL);
		// cbHighlight.ClearRenderTarget(false, true, new Color(0, 0, 0, 0));
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_755 = __this->___cbHighlight_96;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_756;
		memset((&L_756), 0, sizeof(L_756));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_756), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_755);
		CommandBuffer_ClearRenderTarget_mABBE498A16DCEADCAA8F5DB50073012F74D03F14(L_755, (bool)0, (bool)1, L_756, NULL);
		// for (int k = 0; k < rmsCount; k++) {
		V_67 = 0;
		goto IL_141f;
	}

IL_133f:
	{
		// if (!rms[k].render)
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_757 = __this->___rms_70;
		int32_t L_758 = V_67;
		NullCheck(L_757);
		bool L_759 = ((L_757)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_758)))->___render_0;
		if (!L_759)
		{
			goto IL_1419;
		}
	}
	{
		// if (k == 0) {
		int32_t L_760 = V_67;
		if (L_760)
		{
			goto IL_1375;
		}
	}
	{
		// smoothBounds = rms[k].renderer.bounds;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_761 = __this->___rms_70;
		int32_t L_762 = V_67;
		NullCheck(L_761);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_763 = ((L_761)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_762)))->___renderer_5;
		NullCheck(L_763);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_764;
		L_764 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_763, NULL);
		V_66 = L_764;
		goto IL_1393;
	}

IL_1375:
	{
		// smoothBounds.Encapsulate(rms[k].renderer.bounds);
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_765 = __this->___rms_70;
		int32_t L_766 = V_67;
		NullCheck(L_765);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_767 = ((L_765)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_766)))->___renderer_5;
		NullCheck(L_767);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_768;
		L_768 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_767, NULL);
		Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22((&V_66), L_768, NULL);
	}

IL_1393:
	{
		// Mesh mesh = rms[k].mesh;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_769 = __this->___rms_70;
		int32_t L_770 = V_67;
		NullCheck(L_769);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_771 = ((L_769)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_770)))->___mesh_3;
		V_68 = L_771;
		// for (int l = 0; l < mesh.subMeshCount; l++) {
		V_69 = 0;
		goto IL_140e;
	}

IL_13ac:
	{
		// if (((1 << l) & subMeshMask) == 0) continue;
		int32_t L_772 = V_69;
		int32_t L_773 = __this->___subMeshMask_21;
		if (!((int32_t)(((int32_t)(1<<((int32_t)(L_772&((int32_t)31)))))&L_773)))
		{
			goto IL_1408;
		}
	}
	{
		// if (l < rms[k].fxMatSolidColor.Length) {
		int32_t L_774 = V_69;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_775 = __this->___rms_70;
		int32_t L_776 = V_67;
		NullCheck(L_775);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_777 = ((L_775)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_776)))->___fxMatSolidColor_8;
		NullCheck(L_777);
		if ((((int32_t)L_774) >= ((int32_t)((int32_t)(((RuntimeArray*)L_777)->max_length)))))
		{
			goto IL_1408;
		}
	}
	{
		// cbHighlight.DrawRenderer(rms[k].renderer, rms[k].fxMatSolidColor[l], l);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_778 = __this->___cbHighlight_96;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_779 = __this->___rms_70;
		int32_t L_780 = V_67;
		NullCheck(L_779);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_781 = ((L_779)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_780)))->___renderer_5;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_782 = __this->___rms_70;
		int32_t L_783 = V_67;
		NullCheck(L_782);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_784 = ((L_782)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_783)))->___fxMatSolidColor_8;
		int32_t L_785 = V_69;
		NullCheck(L_784);
		int32_t L_786 = L_785;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_787 = (L_784)->GetAt(static_cast<il2cpp_array_size_t>(L_786));
		int32_t L_788 = V_69;
		NullCheck(L_778);
		CommandBuffer_DrawRenderer_m6667EA1141D0759454E51CDC2A24DB531357C7C6(L_778, L_781, L_787, L_788, NULL);
	}

IL_1408:
	{
		// for (int l = 0; l < mesh.subMeshCount; l++) {
		int32_t L_789 = V_69;
		V_69 = ((int32_t)il2cpp_codegen_add(L_789, 1));
	}

IL_140e:
	{
		// for (int l = 0; l < mesh.subMeshCount; l++) {
		int32_t L_790 = V_69;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_791 = V_68;
		NullCheck(L_791);
		int32_t L_792;
		L_792 = Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B(L_791, NULL);
		if ((((int32_t)L_790) < ((int32_t)L_792)))
		{
			goto IL_13ac;
		}
	}

IL_1419:
	{
		// for (int k = 0; k < rmsCount; k++) {
		int32_t L_793 = V_67;
		V_67 = ((int32_t)il2cpp_codegen_add(L_793, 1));
	}

IL_141f:
	{
		// for (int k = 0; k < rmsCount; k++) {
		int32_t L_794 = V_67;
		int32_t L_795 = __this->___rmsCount_71;
		if ((((int32_t)L_794) < ((int32_t)L_795)))
		{
			goto IL_133f;
		}
	}
	{
		// if (ComputeSmoothQuadMatrix(cam, smoothBounds)) {
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_796 = ___cam0;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_797 = V_66;
		bool L_798;
		L_798 = HighlightEffect_ComputeSmoothQuadMatrix_mE2EACE1BB49A343B995A2B5A2360F1EF9718D7A0(__this, L_796, L_797, NULL);
		if (!L_798)
		{
			goto IL_1526;
		}
	}
	{
		// if (useSmoothGlow) {
		bool L_799 = __this->___useSmoothGlow_115;
		if (!L_799)
		{
			goto IL_14ad;
		}
	}
	{
		// float intensity = glow * fade;
		float L_800 = __this->___glow_35;
		float L_801 = V_8;
		V_70 = ((float)il2cpp_codegen_multiply(L_800, L_801));
		// fxMatComposeGlow.color = new Color(glowHQColor.r * intensity, glowHQColor.g * intensity, glowHQColor.b * intensity, glowHQColor.a * intensity);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_802 = __this->___fxMatComposeGlow_87;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_803 = (&__this->___glowHQColor_39);
		float L_804 = L_803->___r_0;
		float L_805 = V_70;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_806 = (&__this->___glowHQColor_39);
		float L_807 = L_806->___g_1;
		float L_808 = V_70;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_809 = (&__this->___glowHQColor_39);
		float L_810 = L_809->___b_2;
		float L_811 = V_70;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_812 = (&__this->___glowHQColor_39);
		float L_813 = L_812->___a_3;
		float L_814 = V_70;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_815;
		memset((&L_815), 0, sizeof(L_815));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_815), ((float)il2cpp_codegen_multiply(L_804, L_805)), ((float)il2cpp_codegen_multiply(L_807, L_808)), ((float)il2cpp_codegen_multiply(L_810, L_811)), ((float)il2cpp_codegen_multiply(L_813, L_814)), /*hidden argument*/NULL);
		NullCheck(L_802);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_802, L_815, NULL);
		// SmoothGlow(smoothRTWidth / glowDownsampling, smoothRTHeight / glowDownsampling);
		int32_t L_816 = V_64;
		int32_t L_817 = __this->___glowDownsampling_38;
		int32_t L_818 = V_65;
		int32_t L_819 = __this->___glowDownsampling_38;
		HighlightEffect_SmoothGlow_m85CA502CC1213664584C1BD07E74FC3EF564A051(__this, ((int32_t)(L_816/L_817)), ((int32_t)(L_818/L_819)), NULL);
	}

IL_14ad:
	{
		// if (useSmoothOutline) {
		bool L_820 = __this->___useSmoothOutline_116;
		if (!L_820)
		{
			goto IL_151d;
		}
	}
	{
		// float intensity = outline * fade;
		float L_821 = __this->___outline_27;
		float L_822 = V_8;
		V_71 = ((float)il2cpp_codegen_multiply(L_821, L_822));
		// fxMatComposeOutline.color = new Color(outlineColor.r, outlineColor.g, outlineColor.b, outlineColor.a * intensity * 10f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_823 = __this->___fxMatComposeOutline_88;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_824 = (&__this->___outlineColor_28);
		float L_825 = L_824->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_826 = (&__this->___outlineColor_28);
		float L_827 = L_826->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_828 = (&__this->___outlineColor_28);
		float L_829 = L_828->___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_830 = (&__this->___outlineColor_28);
		float L_831 = L_830->___a_3;
		float L_832 = V_71;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_833;
		memset((&L_833), 0, sizeof(L_833));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_833), L_825, L_827, L_829, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_831, L_832)), (10.0f))), /*hidden argument*/NULL);
		NullCheck(L_823);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_823, L_833, NULL);
		// SmoothOutline(smoothRTWidth / outlineDownsampling, smoothRTHeight / outlineDownsampling);
		int32_t L_834 = V_64;
		int32_t L_835 = __this->___outlineDownsampling_31;
		int32_t L_836 = V_65;
		int32_t L_837 = __this->___outlineDownsampling_31;
		HighlightEffect_SmoothOutline_m84FD66554EF830644ED46B28DEA1EAD174482B02(__this, ((int32_t)(L_834/L_835)), ((int32_t)(L_836/L_837)), NULL);
	}

IL_151d:
	{
		// ComposeSmoothBlend(smoothGlowVisibility, smoothOutlineVisibility);
		int32_t L_838 = V_3;
		int32_t L_839 = V_4;
		HighlightEffect_ComposeSmoothBlend_mE3F2D1A1D5E457F812226CF13775D692ED65C2D7(__this, L_838, L_839, NULL);
	}

IL_1526:
	{
		// }
		return;
	}
}
// System.Boolean HighlightPlus.HighlightEffect::ComputeSmoothQuadMatrix(UnityEngine.Camera,UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HighlightEffect_ComputeSmoothQuadMatrix_mE2EACE1BB49A343B995A2B5A2360F1EF9718D7A0 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	{
		// Vector3 min = bounds.min;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13((&___bounds1), NULL);
		V_0 = L_0;
		// Vector3 max = bounds.max;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09((&___bounds1), NULL);
		V_1 = L_1;
		// corners[0] = new Vector3(min.x, min.y, min.z);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = __this->___corners_108;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4 = L_3.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		float L_6 = L_5.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = L_7.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), L_4, L_6, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_9);
		// corners[1] = new Vector3(min.x, min.y, max.z);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = __this->___corners_108;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		float L_12 = L_11.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		float L_14 = L_13.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		float L_16 = L_15.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), L_12, L_14, L_16, /*hidden argument*/NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_17);
		// corners[2] = new Vector3(max.x, min.y, min.z);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = __this->___corners_108;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		float L_20 = L_19.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		float L_22 = L_21.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_0;
		float L_24 = L_23.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), L_20, L_22, L_24, /*hidden argument*/NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_25);
		// corners[3] = new Vector3(max.x, min.y, max.z);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = __this->___corners_108;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_1;
		float L_28 = L_27.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_0;
		float L_30 = L_29.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_1;
		float L_32 = L_31.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_33), L_28, L_30, L_32, /*hidden argument*/NULL);
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_33);
		// corners[4] = new Vector3(min.x, max.y, min.z);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_34 = __this->___corners_108;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_0;
		float L_36 = L_35.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_1;
		float L_38 = L_37.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_0;
		float L_40 = L_39.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_41), L_36, L_38, L_40, /*hidden argument*/NULL);
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(4), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_41);
		// corners[5] = new Vector3(min.x, max.y, max.z);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_42 = __this->___corners_108;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_0;
		float L_44 = L_43.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = V_1;
		float L_46 = L_45.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_1;
		float L_48 = L_47.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_49), L_44, L_46, L_48, /*hidden argument*/NULL);
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(5), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_49);
		// corners[6] = new Vector3(max.x, max.y, min.z);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_50 = __this->___corners_108;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_1;
		float L_52 = L_51.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_1;
		float L_54 = L_53.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_0;
		float L_56 = L_55.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_57), L_52, L_54, L_56, /*hidden argument*/NULL);
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(6), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_57);
		// corners[7] = new Vector3(max.x, max.y, max.z);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_58 = __this->___corners_108;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_1;
		float L_60 = L_59.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = V_1;
		float L_62 = L_61.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_1;
		float L_64 = L_63.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_65), L_60, L_62, L_64, /*hidden argument*/NULL);
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_65);
		// Vector3 scrMin = new Vector3(float.MaxValue, float.MaxValue, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), ((std::numeric_limits<float>::max)()), ((std::numeric_limits<float>::max)()), (0.0f), NULL);
		// Vector3 scrMax = new Vector3(float.MinValue, float.MinValue, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), (-(std::numeric_limits<float>::max)()), (-(std::numeric_limits<float>::max)()), (0.0f), NULL);
		// float distance = float.MaxValue;
		V_4 = ((std::numeric_limits<float>::max)());
		// for (int k = 0; k < corners.Length; k++) {
		V_5 = 0;
		goto IL_02bf;
	}

IL_0163:
	{
		// corners[k] = cam.WorldToScreenPoint(corners[k]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_66 = __this->___corners_108;
		int32_t L_67 = V_5;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_68 = ___cam0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_69 = __this->___corners_108;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_68);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_68, L_72, NULL);
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_73);
		// if (corners[k].x < scrMin.x) {
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_74 = __this->___corners_108;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		float L_76 = ((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = V_2;
		float L_78 = L_77.___x_2;
		if ((!(((float)L_76) < ((float)L_78))))
		{
			goto IL_01b6;
		}
	}
	{
		// scrMin.x = corners[k].x;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_79 = __this->___corners_108;
		int32_t L_80 = V_5;
		NullCheck(L_79);
		float L_81 = ((L_79)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_80)))->___x_2;
		(&V_2)->___x_2 = L_81;
	}

IL_01b6:
	{
		// if (corners[k].y < scrMin.y) {
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_82 = __this->___corners_108;
		int32_t L_83 = V_5;
		NullCheck(L_82);
		float L_84 = ((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_83)))->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = V_2;
		float L_86 = L_85.___y_3;
		if ((!(((float)L_84) < ((float)L_86))))
		{
			goto IL_01e9;
		}
	}
	{
		// scrMin.y = corners[k].y;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_87 = __this->___corners_108;
		int32_t L_88 = V_5;
		NullCheck(L_87);
		float L_89 = ((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_88)))->___y_3;
		(&V_2)->___y_3 = L_89;
	}

IL_01e9:
	{
		// if (corners[k].x > scrMax.x) {
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_90 = __this->___corners_108;
		int32_t L_91 = V_5;
		NullCheck(L_90);
		float L_92 = ((L_90)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_91)))->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93 = V_3;
		float L_94 = L_93.___x_2;
		if ((!(((float)L_92) > ((float)L_94))))
		{
			goto IL_021c;
		}
	}
	{
		// scrMax.x = corners[k].x;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_95 = __this->___corners_108;
		int32_t L_96 = V_5;
		NullCheck(L_95);
		float L_97 = ((L_95)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_96)))->___x_2;
		(&V_3)->___x_2 = L_97;
	}

IL_021c:
	{
		// if (corners[k].y > scrMax.y) {
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_98 = __this->___corners_108;
		int32_t L_99 = V_5;
		NullCheck(L_98);
		float L_100 = ((L_98)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_99)))->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = V_3;
		float L_102 = L_101.___y_3;
		if ((!(((float)L_100) > ((float)L_102))))
		{
			goto IL_024f;
		}
	}
	{
		// scrMax.y = corners[k].y;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_103 = __this->___corners_108;
		int32_t L_104 = V_5;
		NullCheck(L_103);
		float L_105 = ((L_103)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_104)))->___y_3;
		(&V_3)->___y_3 = L_105;
	}

IL_024f:
	{
		// if (corners[k].z < distance) {
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_106 = __this->___corners_108;
		int32_t L_107 = V_5;
		NullCheck(L_106);
		float L_108 = ((L_106)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_107)))->___z_4;
		float L_109 = V_4;
		if ((!(((float)L_108) < ((float)L_109))))
		{
			goto IL_02b9;
		}
	}
	{
		// distance = corners[k].z;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_110 = __this->___corners_108;
		int32_t L_111 = V_5;
		NullCheck(L_110);
		float L_112 = ((L_110)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_111)))->___z_4;
		V_4 = L_112;
		// if (distance < cam.nearClipPlane) {
		float L_113 = V_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_114 = ___cam0;
		NullCheck(L_114);
		float L_115;
		L_115 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_114, NULL);
		if ((!(((float)L_113) < ((float)L_115))))
		{
			goto IL_02b9;
		}
	}
	{
		// scrMin.x = scrMin.y = 0;
		float L_116 = (0.0f);
		V_6 = L_116;
		(&V_2)->___y_3 = L_116;
		float L_117 = V_6;
		(&V_2)->___x_2 = L_117;
		// scrMax.x = cam.pixelWidth;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_118 = ___cam0;
		NullCheck(L_118);
		int32_t L_119;
		L_119 = Camera_get_pixelWidth_m55AC8AD744FC0179865C2E630C68F9AD0799065D(L_118, NULL);
		(&V_3)->___x_2 = ((float)L_119);
		// scrMax.y = cam.pixelHeight;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_120 = ___cam0;
		NullCheck(L_120);
		int32_t L_121;
		L_121 = Camera_get_pixelHeight_m00881B5A440B0018D5A8F837694027050B500F59(L_120, NULL);
		(&V_3)->___y_3 = ((float)L_121);
		// break;
		goto IL_02ce;
	}

IL_02b9:
	{
		// for (int k = 0; k < corners.Length; k++) {
		int32_t L_122 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_122, 1));
	}

IL_02bf:
	{
		// for (int k = 0; k < corners.Length; k++) {
		int32_t L_123 = V_5;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_124 = __this->___corners_108;
		NullCheck(L_124);
		if ((((int32_t)L_123) < ((int32_t)((int32_t)(((RuntimeArray*)L_124)->max_length)))))
		{
			goto IL_0163;
		}
	}

IL_02ce:
	{
		// if (scrMax.y == scrMin.y)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125 = V_3;
		float L_126 = L_125.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127 = V_2;
		float L_128 = L_127.___y_3;
		if ((!(((float)L_126) == ((float)L_128))))
		{
			goto IL_02de;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_02de:
	{
		// if (distance < cam.nearClipPlane) {
		float L_129 = V_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_130 = ___cam0;
		NullCheck(L_130);
		float L_131;
		L_131 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_130, NULL);
		if ((!(((float)L_129) < ((float)L_131))))
		{
			goto IL_02f6;
		}
	}
	{
		// distance = cam.nearClipPlane + 0.01f;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_132 = ___cam0;
		NullCheck(L_132);
		float L_133;
		L_133 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_132, NULL);
		V_4 = ((float)il2cpp_codegen_add(L_133, (0.00999999978f)));
	}

IL_02f6:
	{
		// scrMin.z = scrMax.z = distance;
		float L_134 = V_4;
		float L_135 = L_134;
		V_6 = L_135;
		(&V_3)->___z_4 = L_135;
		float L_136 = V_6;
		(&V_2)->___z_4 = L_136;
		// if (outline > 0) {
		float L_137 = __this->___outline_27;
		if ((!(((float)L_137) > ((float)(0.0f)))))
		{
			goto IL_0344;
		}
	}
	{
		// BuildMatrix(cam, scrMin, scrMax, (int)(10 + 20 * outlineWidth + 5 * outlineDownsampling), ref quadOutlineMatrix);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_138 = ___cam0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140 = V_3;
		float L_141 = __this->___outlineWidth_29;
		int32_t L_142 = __this->___outlineDownsampling_31;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_143 = (&__this->___quadOutlineMatrix_107);
		HighlightEffect_BuildMatrix_m597CDD0B2A76DDC4CE943705C804597C6A9BB2B6(__this, L_138, L_139, L_140, il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add((10.0f), ((float)il2cpp_codegen_multiply((20.0f), L_141)))), ((float)((int32_t)il2cpp_codegen_multiply(5, L_142)))))), L_143, NULL);
	}

IL_0344:
	{
		// if (glow > 0) {
		float L_144 = __this->___glow_35;
		if ((!(((float)L_144) > ((float)(0.0f)))))
		{
			goto IL_037e;
		}
	}
	{
		// BuildMatrix(cam, scrMin, scrMax, (int)(20 + 30 * glowWidth + 10 * glowDownsampling), ref quadGlowMatrix);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_145 = ___cam0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_147 = V_3;
		float L_148 = __this->___glowWidth_36;
		int32_t L_149 = __this->___glowDownsampling_38;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_150 = (&__this->___quadGlowMatrix_106);
		HighlightEffect_BuildMatrix_m597CDD0B2A76DDC4CE943705C804597C6A9BB2B6(__this, L_145, L_146, L_147, il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add((20.0f), ((float)il2cpp_codegen_multiply((30.0f), L_148)))), ((float)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_149)))))), L_150, NULL);
	}

IL_037e:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void HighlightPlus.HighlightEffect::BuildMatrix(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_BuildMatrix_m597CDD0B2A76DDC4CE943705C804597C6A9BB2B6 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scrMin1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scrMax2, int32_t ___border3, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___quadMatrix4, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// scrMin.x -= border;
		float* L_0 = (&(&___scrMin1)->___x_2);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		int32_t L_3 = ___border3;
		*((float*)L_1) = (float)((float)il2cpp_codegen_subtract(L_2, ((float)L_3)));
		// scrMin.y -= border;
		float* L_4 = (&(&___scrMin1)->___y_3);
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		int32_t L_7 = ___border3;
		*((float*)L_5) = (float)((float)il2cpp_codegen_subtract(L_6, ((float)L_7)));
		// scrMax.x += border;
		float* L_8 = (&(&___scrMax2)->___x_2);
		float* L_9 = L_8;
		float L_10 = *((float*)L_9);
		int32_t L_11 = ___border3;
		*((float*)L_9) = (float)((float)il2cpp_codegen_add(L_10, ((float)L_11)));
		// scrMax.y += border;
		float* L_12 = (&(&___scrMax2)->___y_3);
		float* L_13 = L_12;
		float L_14 = *((float*)L_13);
		int32_t L_15 = ___border3;
		*((float*)L_13) = (float)((float)il2cpp_codegen_add(L_14, ((float)L_15)));
		// Vector3 third = new Vector3(scrMax.x, scrMin.y, scrMin.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___scrMax2;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___scrMin1;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___scrMin1;
		float L_21 = L_20.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_17, L_19, L_21, NULL);
		// scrMin = cam.ScreenToWorldPoint(scrMin);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22 = ___cam0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___scrMin1;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_22, L_23, NULL);
		___scrMin1 = L_24;
		// scrMax = cam.ScreenToWorldPoint(scrMax);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_25 = ___cam0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = ___scrMax2;
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_25, L_26, NULL);
		___scrMax2 = L_27;
		// third = cam.ScreenToWorldPoint(third);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_28 = ___cam0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_0;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_28, L_29, NULL);
		V_0 = L_30;
		// float width = Vector3.Distance(scrMin, third);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = ___scrMin1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_0;
		float L_33;
		L_33 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_31, L_32, NULL);
		V_1 = L_33;
		// float height = Vector3.Distance(scrMax, third);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = ___scrMax2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_0;
		float L_36;
		L_36 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_34, L_35, NULL);
		V_2 = L_36;
		// quadMatrix = Matrix4x4.TRS((scrMin + scrMax) * 0.5f, cam.transform.rotation, new Vector3(width, height, 1f));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_37 = ___quadMatrix4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = ___scrMin1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = ___scrMax2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_38, L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_40, (0.5f), NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_42 = ___cam0;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_42, NULL);
		NullCheck(L_43);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44;
		L_44 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_43, NULL);
		float L_45 = V_1;
		float L_46 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_47), L_45, L_46, (1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_48;
		L_48 = Matrix4x4_TRS_mFEBA6926DB0044B96EF0CE98F30FEE7596820680(L_41, L_44, L_47, NULL);
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)L_37 = L_48;
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::SmoothGlow(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_SmoothGlow_m85CA502CC1213664584C1BD07E74FC3EF564A051 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, int32_t ___rtWidth0, int32_t ___rtHeight1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral565A8338444E4AF278C41AEBC005C7D715AE9254);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61AC4D55EC040D39E39A759020B5A4A42F7C16DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA71E57745058D60F269DB1627BE11D82F41FBD77);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// int bufferCount = blurPasses * 2;
		V_0 = 8;
		// if (mipGlowBuffers == null || mipGlowBuffers.Length != bufferCount) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___mipGlowBuffers_100;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___mipGlowBuffers_100;
		NullCheck(L_1);
		int32_t L_2 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) == ((int32_t)L_2)))
		{
			goto IL_006b;
		}
	}

IL_0015:
	{
		// mipGlowBuffers = new int[bufferCount];
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->___mipGlowBuffers_100 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mipGlowBuffers_100), (void*)L_4);
		// for (int k = 0; k < bufferCount; k++) {
		V_2 = 0;
		goto IL_0047;
	}

IL_0025:
	{
		// mipGlowBuffers[k] = Shader.PropertyToID("_HPSmoothGlowTemp" + k);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___mipGlowBuffers_100;
		int32_t L_6 = V_2;
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral565A8338444E4AF278C41AEBC005C7D715AE9254, L_7, NULL);
		int32_t L_9;
		L_9 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(L_8, NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int32_t)L_9);
		// for (int k = 0; k < bufferCount; k++) {
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0047:
	{
		// for (int k = 0; k < bufferCount; k++) {
		int32_t L_11 = V_2;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0025;
		}
	}
	{
		// glowRT = Shader.PropertyToID("_HPComposeGlowFinal");
		int32_t L_13;
		L_13 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral61AC4D55EC040D39E39A759020B5A4A42F7C16DD, NULL);
		__this->___glowRT_102 = L_13;
		// mipGlowBuffers[bufferCount - 2] = glowRT;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->___mipGlowBuffers_100;
		int32_t L_15 = V_0;
		int32_t L_16 = __this->___glowRT_102;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_15, 2))), (int32_t)L_16);
	}

IL_006b:
	{
		// RenderTextureDescriptor glowDesc = sourceDesc;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_17 = __this->___sourceDesc_109;
		V_1 = L_17;
		// glowDesc.depthBufferBits = 0;
		RenderTextureDescriptor_set_depthBufferBits_mA3710C0D6E485BA6465B328CD8B1954F0E4C5819((&V_1), 0, NULL);
		// if (glowDesc.vrUsage == VRTextureUsage.TwoEyes) {
		int32_t L_18;
		L_18 = RenderTextureDescriptor_get_vrUsage_m061FAE1190A623B9DEE133F1506ADB23C983F6B0_inline((&V_1), NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)2))))
		{
			goto IL_00b8;
		}
	}
	{
		// glowDesc.vrUsage = VRTextureUsage.None;
		RenderTextureDescriptor_set_vrUsage_m994CB3D4B250A70BE005D9FDFD24D868E07A52F0_inline((&V_1), 0, NULL);
		// fxMatBlurGlow.SetFloat("_StereoRendering", 0.5f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___fxMatBlurGlow_89;
		NullCheck(L_19);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_19, _stringLiteralA71E57745058D60F269DB1627BE11D82F41FBD77, (0.5f), NULL);
		// fxMatComposeGlow.SetFloat("_StereoRendering", 0.5f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___fxMatComposeGlow_87;
		NullCheck(L_20);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_20, _stringLiteralA71E57745058D60F269DB1627BE11D82F41FBD77, (0.5f), NULL);
		goto IL_00e2;
	}

IL_00b8:
	{
		// fxMatBlurGlow.SetFloat("_StereoRendering", 1f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___fxMatBlurGlow_89;
		NullCheck(L_21);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_21, _stringLiteralA71E57745058D60F269DB1627BE11D82F41FBD77, (1.0f), NULL);
		// fxMatComposeGlow.SetFloat("_StereoRendering", 1f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = __this->___fxMatComposeGlow_87;
		NullCheck(L_22);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_22, _stringLiteralA71E57745058D60F269DB1627BE11D82F41FBD77, (1.0f), NULL);
	}

IL_00e2:
	{
		// for (int k = 0; k < bufferCount; k++) {
		V_3 = 0;
		goto IL_0139;
	}

IL_00e6:
	{
		// float reduction = k / 2 + 2;
		int32_t L_23 = V_3;
		V_4 = ((float)((int32_t)il2cpp_codegen_add(((int32_t)(L_23/2)), 2)));
		// int reducedWidth = (int)(rtWidth / reduction);
		int32_t L_24 = ___rtWidth0;
		float L_25 = V_4;
		V_5 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(((float)L_24)/L_25)));
		// int reducedHeight = (int)(rtHeight / reduction);
		int32_t L_26 = ___rtHeight1;
		float L_27 = V_4;
		V_6 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(((float)L_26)/L_27)));
		// if (reducedWidth <= 0) {
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) > ((int32_t)0)))
		{
			goto IL_0106;
		}
	}
	{
		// reducedWidth = 1;
		V_5 = 1;
	}

IL_0106:
	{
		// if (reducedHeight <= 0) {
		int32_t L_29 = V_6;
		if ((((int32_t)L_29) > ((int32_t)0)))
		{
			goto IL_010e;
		}
	}
	{
		// reducedHeight = 1;
		V_6 = 1;
	}

IL_010e:
	{
		// glowDesc.width = reducedWidth;
		int32_t L_30 = V_5;
		RenderTextureDescriptor_set_width_m3B2494007BFE3AD4D14403407C9B24F5045E7E10_inline((&V_1), L_30, NULL);
		// glowDesc.height = reducedHeight;
		int32_t L_31 = V_6;
		RenderTextureDescriptor_set_height_m1FE41111472DAA9B5E80FFAF3445004D72A3CFA5_inline((&V_1), L_31, NULL);
		// cbHighlight.GetTemporaryRT(mipGlowBuffers[k], glowDesc, FilterMode.Bilinear);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_32 = __this->___cbHighlight_96;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = __this->___mipGlowBuffers_100;
		int32_t L_34 = V_3;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_37 = V_1;
		NullCheck(L_32);
		CommandBuffer_GetTemporaryRT_m98BCBFF670DDD3AC8657664F8252A9DF64D49FA5(L_32, L_36, L_37, 1, NULL);
		// for (int k = 0; k < bufferCount; k++) {
		int32_t L_38 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0139:
	{
		// for (int k = 0; k < bufferCount; k++) {
		int32_t L_39 = V_3;
		int32_t L_40 = V_0;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_00e6;
		}
	}
	{
		// for (int k = 0; k < bufferCount - 1; k += 2) {
		V_7 = 0;
		goto IL_0215;
	}

IL_0145:
	{
		// if (k == 0) {
		int32_t L_41 = V_7;
		if (L_41)
		{
			goto IL_0178;
		}
	}
	{
		// cbHighlight.Blit(sourceRT, mipGlowBuffers[k + 1], fxMatBlurGlow, 0);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_42 = __this->___cbHighlight_96;
		int32_t L_43 = __this->___sourceRT_105;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_44;
		L_44 = RenderTargetIdentifier_op_Implicit_m84624C22E2F3271EBEE2E96A8404969B9E99E526(L_43, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = __this->___mipGlowBuffers_100;
		int32_t L_46 = V_7;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_49;
		L_49 = RenderTargetIdentifier_op_Implicit_m84624C22E2F3271EBEE2E96A8404969B9E99E526(L_48, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_50 = __this->___fxMatBlurGlow_89;
		NullCheck(L_42);
		CommandBuffer_Blit_m20AC38869B1D9D16C37E1A697B4EF3E2B0D12530(L_42, L_44, L_49, L_50, 0, NULL);
		goto IL_01a8;
	}

IL_0178:
	{
		// cbHighlight.Blit(mipGlowBuffers[k], mipGlowBuffers[k + 1], fxMatBlurGlow, 0);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_51 = __this->___cbHighlight_96;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = __this->___mipGlowBuffers_100;
		int32_t L_53 = V_7;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		int32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_56;
		L_56 = RenderTargetIdentifier_op_Implicit_m84624C22E2F3271EBEE2E96A8404969B9E99E526(L_55, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->___mipGlowBuffers_100;
		int32_t L_58 = V_7;
		NullCheck(L_57);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		int32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_61;
		L_61 = RenderTargetIdentifier_op_Implicit_m84624C22E2F3271EBEE2E96A8404969B9E99E526(L_60, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62 = __this->___fxMatBlurGlow_89;
		NullCheck(L_51);
		CommandBuffer_Blit_m20AC38869B1D9D16C37E1A697B4EF3E2B0D12530(L_51, L_56, L_61, L_62, 0, NULL);
	}

IL_01a8:
	{
		// cbHighlight.Blit(mipGlowBuffers[k + 1], mipGlowBuffers[k], fxMatBlurGlow, 1);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_63 = __this->___cbHighlight_96;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = __this->___mipGlowBuffers_100;
		int32_t L_65 = V_7;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		int32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_68;
		L_68 = RenderTargetIdentifier_op_Implicit_m84624C22E2F3271EBEE2E96A8404969B9E99E526(L_67, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = __this->___mipGlowBuffers_100;
		int32_t L_70 = V_7;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		int32_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_73;
		L_73 = RenderTargetIdentifier_op_Implicit_m84624C22E2F3271EBEE2E96A8404969B9E99E526(L_72, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_74 = __this->___fxMatBlurGlow_89;
		NullCheck(L_63);
		CommandBuffer_Blit_m20AC38869B1D9D16C37E1A697B4EF3E2B0D12530(L_63, L_68, L_73, L_74, 1, NULL);
		// if (k < bufferCount - 2) {
		int32_t L_75 = V_7;
		int32_t L_76 = V_0;
		if ((((int32_t)L_75) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_76, 2)))))
		{
			goto IL_020f;
		}
	}
	{
		// cbHighlight.Blit(mipGlowBuffers[k], mipGlowBuffers[k + 2], fxMatBlurGlow, 2);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_77 = __this->___cbHighlight_96;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_78 = __this->___mipGlowBuffers_100;
		int32_t L_79 = V_7;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		int32_t L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_82;
		L_82 = RenderTargetIdentifier_op_Implicit_m84624C22E2F3271EBEE2E96A8404969B9E99E526(L_81, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->___mipGlowBuffers_100;
		int32_t L_84 = V_7;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_84, 2));
		int32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_87;
		L_87 = RenderTargetIdentifier_op_Implicit_m84624C22E2F3271EBEE2E96A8404969B9E99E526(L_86, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_88 = __this->___fxMatBlurGlow_89;
		NullCheck(L_77);
		CommandBuffer_Blit_m20AC38869B1D9D16C37E1A697B4EF3E2B0D12530(L_77, L_82, L_87, L_88, 2, NULL);
	}

IL_020f:
	{
		// for (int k = 0; k < bufferCount - 1; k += 2) {
		int32_t L_89 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0215:
	{
		// for (int k = 0; k < bufferCount - 1; k += 2) {
		int32_t L_90 = V_7;
		int32_t L_91 = V_0;
		if ((((int32_t)L_90) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_91, 1)))))
		{
			goto IL_0145;
		}
	}
	{
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::SmoothOutline(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_SmoothOutline_m84FD66554EF830644ED46B28DEA1EAD174482B02 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, int32_t ___rtWidth0, int32_t ___rtHeight1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral478EBBF58D43F3214E6350AEC652978DA26C9482);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5978B2B60718173E0FD1F1A908840042DE9368A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA71E57745058D60F269DB1627BE11D82F41FBD77);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// int bufferCount = blurPasses * 2;
		V_0 = 4;
		// if (mipOutlineBuffers == null || mipOutlineBuffers.Length != bufferCount) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___mipOutlineBuffers_101;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___mipOutlineBuffers_101;
		NullCheck(L_1);
		int32_t L_2 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) == ((int32_t)L_2)))
		{
			goto IL_006b;
		}
	}

IL_0015:
	{
		// mipOutlineBuffers = new int[bufferCount];
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->___mipOutlineBuffers_101 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mipOutlineBuffers_101), (void*)L_4);
		// for (int k = 0; k < bufferCount; k++) {
		V_2 = 0;
		goto IL_0047;
	}

IL_0025:
	{
		// mipOutlineBuffers[k] = Shader.PropertyToID("_HPSmoothOutlineTemp" + k);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___mipOutlineBuffers_101;
		int32_t L_6 = V_2;
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral478EBBF58D43F3214E6350AEC652978DA26C9482, L_7, NULL);
		int32_t L_9;
		L_9 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(L_8, NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int32_t)L_9);
		// for (int k = 0; k < bufferCount; k++) {
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0047:
	{
		// for (int k = 0; k < bufferCount; k++) {
		int32_t L_11 = V_2;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0025;
		}
	}
	{
		// outlineRT = Shader.PropertyToID("_HPComposeOutlineFinal");
		int32_t L_13;
		L_13 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral5978B2B60718173E0FD1F1A908840042DE9368A0, NULL);
		__this->___outlineRT_103 = L_13;
		// mipOutlineBuffers[bufferCount - 2] = outlineRT;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->___mipOutlineBuffers_101;
		int32_t L_15 = V_0;
		int32_t L_16 = __this->___outlineRT_103;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_15, 2))), (int32_t)L_16);
	}

IL_006b:
	{
		// RenderTextureDescriptor outlineDesc = sourceDesc;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_17 = __this->___sourceDesc_109;
		V_1 = L_17;
		// outlineDesc.depthBufferBits = 0;
		RenderTextureDescriptor_set_depthBufferBits_mA3710C0D6E485BA6465B328CD8B1954F0E4C5819((&V_1), 0, NULL);
		// if (outlineDesc.vrUsage == VRTextureUsage.TwoEyes) {
		int32_t L_18;
		L_18 = RenderTextureDescriptor_get_vrUsage_m061FAE1190A623B9DEE133F1506ADB23C983F6B0_inline((&V_1), NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)2))))
		{
			goto IL_00b8;
		}
	}
	{
		// outlineDesc.vrUsage = VRTextureUsage.None;
		RenderTextureDescriptor_set_vrUsage_m994CB3D4B250A70BE005D9FDFD24D868E07A52F0_inline((&V_1), 0, NULL);
		// fxMatBlurOutline.SetFloat("_StereoRendering", 0.5f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___fxMatBlurOutline_90;
		NullCheck(L_19);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_19, _stringLiteralA71E57745058D60F269DB1627BE11D82F41FBD77, (0.5f), NULL);
		// fxMatComposeOutline.SetFloat("_StereoRendering", 0.5f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___fxMatComposeOutline_88;
		NullCheck(L_20);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_20, _stringLiteralA71E57745058D60F269DB1627BE11D82F41FBD77, (0.5f), NULL);
		goto IL_00e2;
	}

IL_00b8:
	{
		// fxMatBlurOutline.SetFloat("_StereoRendering", 1f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = __this->___fxMatBlurOutline_90;
		NullCheck(L_21);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_21, _stringLiteralA71E57745058D60F269DB1627BE11D82F41FBD77, (1.0f), NULL);
		// fxMatComposeOutline.SetFloat("_StereoRendering", 1f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = __this->___fxMatComposeOutline_88;
		NullCheck(L_22);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_22, _stringLiteralA71E57745058D60F269DB1627BE11D82F41FBD77, (1.0f), NULL);
	}

IL_00e2:
	{
		// for (int k = 0; k < bufferCount; k++) {
		V_3 = 0;
		goto IL_0139;
	}

IL_00e6:
	{
		// float reduction = k / 2 + 2;
		int32_t L_23 = V_3;
		V_4 = ((float)((int32_t)il2cpp_codegen_add(((int32_t)(L_23/2)), 2)));
		// int reducedWidth = (int)(rtWidth / reduction);
		int32_t L_24 = ___rtWidth0;
		float L_25 = V_4;
		V_5 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(((float)L_24)/L_25)));
		// int reducedHeight = (int)(rtHeight / reduction);
		int32_t L_26 = ___rtHeight1;
		float L_27 = V_4;
		V_6 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(((float)L_26)/L_27)));
		// if (reducedWidth <= 0) {
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) > ((int32_t)0)))
		{
			goto IL_0106;
		}
	}
	{
		// reducedWidth = 1;
		V_5 = 1;
	}

IL_0106:
	{
		// if (reducedHeight <= 0) {
		int32_t L_29 = V_6;
		if ((((int32_t)L_29) > ((int32_t)0)))
		{
			goto IL_010e;
		}
	}
	{
		// reducedHeight = 1;
		V_6 = 1;
	}

IL_010e:
	{
		// outlineDesc.width = reducedWidth;
		int32_t L_30 = V_5;
		RenderTextureDescriptor_set_width_m3B2494007BFE3AD4D14403407C9B24F5045E7E10_inline((&V_1), L_30, NULL);
		// outlineDesc.height = reducedHeight;
		int32_t L_31 = V_6;
		RenderTextureDescriptor_set_height_m1FE41111472DAA9B5E80FFAF3445004D72A3CFA5_inline((&V_1), L_31, NULL);
		// cbHighlight.GetTemporaryRT(mipOutlineBuffers[k], outlineDesc, FilterMode.Bilinear);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_32 = __this->___cbHighlight_96;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = __this->___mipOutlineBuffers_101;
		int32_t L_34 = V_3;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_37 = V_1;
		NullCheck(L_32);
		CommandBuffer_GetTemporaryRT_m98BCBFF670DDD3AC8657664F8252A9DF64D49FA5(L_32, L_36, L_37, 1, NULL);
		// for (int k = 0; k < bufferCount; k++) {
		int32_t L_38 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0139:
	{
		// for (int k = 0; k < bufferCount; k++) {
		int32_t L_39 = V_3;
		int32_t L_40 = V_0;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_00e6;
		}
	}
	{
		// for (int k = 0; k < bufferCount - 1; k += 2) {
		V_7 = 0;
		goto IL_0215;
	}

IL_0145:
	{
		// if (k == 0) {
		int32_t L_41 = V_7;
		if (L_41)
		{
			goto IL_0178;
		}
	}
	{
		// cbHighlight.Blit(sourceRT, mipOutlineBuffers[k + 1], fxMatBlurOutline, 0);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_42 = __this->___cbHighlight_96;
		int32_t L_43 = __this->___sourceRT_105;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_44;
		L_44 = RenderTargetIdentifier_op_Implicit_m84624C22E2F3271EBEE2E96A8404969B9E99E526(L_43, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = __this->___mipOutlineBuffers_101;
		int32_t L_46 = V_7;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_49;
		L_49 = RenderTargetIdentifier_op_Implicit_m84624C22E2F3271EBEE2E96A8404969B9E99E526(L_48, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_50 = __this->___fxMatBlurOutline_90;
		NullCheck(L_42);
		CommandBuffer_Blit_m20AC38869B1D9D16C37E1A697B4EF3E2B0D12530(L_42, L_44, L_49, L_50, 0, NULL);
		goto IL_01a8;
	}

IL_0178:
	{
		// cbHighlight.Blit(mipOutlineBuffers[k], mipOutlineBuffers[k + 1], fxMatBlurOutline, 0);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_51 = __this->___cbHighlight_96;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = __this->___mipOutlineBuffers_101;
		int32_t L_53 = V_7;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		int32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_56;
		L_56 = RenderTargetIdentifier_op_Implicit_m84624C22E2F3271EBEE2E96A8404969B9E99E526(L_55, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->___mipOutlineBuffers_101;
		int32_t L_58 = V_7;
		NullCheck(L_57);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		int32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_61;
		L_61 = RenderTargetIdentifier_op_Implicit_m84624C22E2F3271EBEE2E96A8404969B9E99E526(L_60, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62 = __this->___fxMatBlurOutline_90;
		NullCheck(L_51);
		CommandBuffer_Blit_m20AC38869B1D9D16C37E1A697B4EF3E2B0D12530(L_51, L_56, L_61, L_62, 0, NULL);
	}

IL_01a8:
	{
		// cbHighlight.Blit(mipOutlineBuffers[k + 1], mipOutlineBuffers[k], fxMatBlurOutline, 1);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_63 = __this->___cbHighlight_96;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = __this->___mipOutlineBuffers_101;
		int32_t L_65 = V_7;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		int32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_68;
		L_68 = RenderTargetIdentifier_op_Implicit_m84624C22E2F3271EBEE2E96A8404969B9E99E526(L_67, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = __this->___mipOutlineBuffers_101;
		int32_t L_70 = V_7;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		int32_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_73;
		L_73 = RenderTargetIdentifier_op_Implicit_m84624C22E2F3271EBEE2E96A8404969B9E99E526(L_72, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_74 = __this->___fxMatBlurOutline_90;
		NullCheck(L_63);
		CommandBuffer_Blit_m20AC38869B1D9D16C37E1A697B4EF3E2B0D12530(L_63, L_68, L_73, L_74, 1, NULL);
		// if (k < bufferCount - 2) {
		int32_t L_75 = V_7;
		int32_t L_76 = V_0;
		if ((((int32_t)L_75) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_76, 2)))))
		{
			goto IL_020f;
		}
	}
	{
		// cbHighlight.Blit(mipOutlineBuffers[k], mipOutlineBuffers[k + 2], fxMatBlurOutline, 2);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_77 = __this->___cbHighlight_96;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_78 = __this->___mipOutlineBuffers_101;
		int32_t L_79 = V_7;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		int32_t L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_82;
		L_82 = RenderTargetIdentifier_op_Implicit_m84624C22E2F3271EBEE2E96A8404969B9E99E526(L_81, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->___mipOutlineBuffers_101;
		int32_t L_84 = V_7;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_84, 2));
		int32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_87;
		L_87 = RenderTargetIdentifier_op_Implicit_m84624C22E2F3271EBEE2E96A8404969B9E99E526(L_86, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_88 = __this->___fxMatBlurOutline_90;
		NullCheck(L_77);
		CommandBuffer_Blit_m20AC38869B1D9D16C37E1A697B4EF3E2B0D12530(L_77, L_82, L_87, L_88, 2, NULL);
	}

IL_020f:
	{
		// for (int k = 0; k < bufferCount - 1; k += 2) {
		int32_t L_89 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0215:
	{
		// for (int k = 0; k < bufferCount - 1; k += 2) {
		int32_t L_90 = V_7;
		int32_t L_91 = V_0;
		if ((((int32_t)L_90) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_91, 1)))))
		{
			goto IL_0145;
		}
	}
	{
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::ComposeSmoothBlend(HighlightPlus.Visibility,HighlightPlus.Visibility)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_ComposeSmoothBlend_mE3F2D1A1D5E457F812226CF13775D692ED65C2D7 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, int32_t ___smoothGlowVisibility0, int32_t ___smoothOutlineVisibility1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00976D4B6B8B09FDE83FAF103A558B8E7E5649A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE5CDEC86E604948D547E530FD8FCD7A52576D5B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B9_0 = 0;
	String_t* G_B11_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B11_1 = NULL;
	int32_t G_B11_2 = 0;
	String_t* G_B10_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B10_1 = NULL;
	int32_t G_B10_2 = 0;
	String_t* G_B12_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B12_1 = NULL;
	int32_t G_B12_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B13_0;
	memset((&G_B13_0), 0, sizeof(G_B13_0));
	String_t* G_B13_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B13_2 = NULL;
	int32_t G_B13_3 = 0;
	String_t* G_B15_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B15_1 = NULL;
	int32_t G_B15_2 = 0;
	String_t* G_B14_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B14_1 = NULL;
	int32_t G_B14_2 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B16_0;
	memset((&G_B16_0), 0, sizeof(G_B16_0));
	String_t* G_B16_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B16_2 = NULL;
	int32_t G_B16_3 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B29_0 = 0;
	int32_t G_B21_0 = 0;
	String_t* G_B23_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B23_1 = NULL;
	int32_t G_B23_2 = 0;
	String_t* G_B22_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B22_1 = NULL;
	int32_t G_B22_2 = 0;
	String_t* G_B24_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B24_1 = NULL;
	int32_t G_B24_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B25_0;
	memset((&G_B25_0), 0, sizeof(G_B25_0));
	String_t* G_B25_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B25_2 = NULL;
	int32_t G_B25_3 = 0;
	String_t* G_B27_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B27_1 = NULL;
	int32_t G_B27_2 = 0;
	String_t* G_B26_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B26_1 = NULL;
	int32_t G_B26_2 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B28_0;
	memset((&G_B28_0), 0, sizeof(G_B28_0));
	String_t* G_B28_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B28_2 = NULL;
	int32_t G_B28_3 = 0;
	{
		// if (Application.platform == RuntimePlatform.OSXEditor || Application.platform == RuntimePlatform.OSXPlayer || Application.platform == RuntimePlatform.IPhonePlayer) {
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1;
		L_1 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2;
		L_2 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)8))))
		{
			goto IL_0030;
		}
	}

IL_0017:
	{
		// cbHighlight.SetRenderTarget(colorAttachmentBuffer, depthAttachmentBuffer);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_3 = __this->___cbHighlight_96;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_4 = __this->___colorAttachmentBuffer_129;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_5 = __this->___depthAttachmentBuffer_130;
		NullCheck(L_3);
		CommandBuffer_SetRenderTarget_mE30BCA8259825C1CD2F88B6A98587CB90A119452(L_3, L_4, L_5, NULL);
		goto IL_0041;
	}

IL_0030:
	{
		// cbHighlight.SetRenderTarget(colorAttachmentBuffer);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_6 = __this->___cbHighlight_96;
		RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B L_7 = __this->___colorAttachmentBuffer_129;
		NullCheck(L_6);
		CommandBuffer_SetRenderTarget_m89782BA1E8AD50020DBDB9EABF32F8AA9356628A(L_6, L_7, NULL);
	}

IL_0041:
	{
		// bool renderSmoothGlow = glow > 0 && glowQuality == QualityLevel.Highest;
		float L_8 = __this->___glow_35;
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_9 = __this->___glowQuality_37;
		G_B8_0 = ((((int32_t)L_9) == ((int32_t)2))? 1 : 0);
		goto IL_005a;
	}

IL_0059:
	{
		G_B8_0 = 0;
	}

IL_005a:
	{
		// if (renderSmoothGlow) {
		int32_t L_10 = G_B8_0;
		G_B9_0 = L_10;
		if (!L_10)
		{
			G_B17_0 = L_10;
			goto IL_0109;
		}
	}
	{
		// fxMatComposeGlow.SetVector("_Flip", (UnityEngine.XR.XRSettings.enabled && flipY) ? new Vector3(1, -1, 0) : new Vector3(0, 1, 0));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = __this->___fxMatComposeGlow_87;
		bool L_12;
		L_12 = XRSettings_get_enabled_m5ECD63DA0B306F7A3FBFD6B67A5B0702F8AEFB54(NULL);
		G_B10_0 = _stringLiteral00976D4B6B8B09FDE83FAF103A558B8E7E5649A5;
		G_B10_1 = L_11;
		G_B10_2 = G_B9_0;
		if (!L_12)
		{
			G_B11_0 = _stringLiteral00976D4B6B8B09FDE83FAF103A558B8E7E5649A5;
			G_B11_1 = L_11;
			G_B11_2 = G_B9_0;
			goto IL_007a;
		}
	}
	{
		bool L_13 = __this->___flipY_19;
		G_B11_0 = G_B10_0;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
		if (L_13)
		{
			G_B12_0 = G_B10_0;
			G_B12_1 = G_B10_1;
			G_B12_2 = G_B10_2;
			goto IL_0090;
		}
	}

IL_007a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		G_B13_0 = L_14;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		G_B13_3 = G_B11_2;
		goto IL_00a4;
	}

IL_0090:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), (1.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		G_B13_0 = L_15;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
	}

IL_00a4:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16;
		L_16 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(G_B13_0, NULL);
		NullCheck(G_B13_2);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(G_B13_2, G_B13_1, L_16, NULL);
		// fxMatComposeGlow.SetInt("_ZTest", GetZTestValue(smoothGlowVisibility));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___fxMatComposeGlow_87;
		int32_t L_18 = ___smoothGlowVisibility0;
		int32_t L_19;
		L_19 = HighlightEffect_GetZTestValue_m649B1407B452B08B8F6326CDAF831529A46EF6D7(__this, L_18, NULL);
		NullCheck(L_17);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_17, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, L_19, NULL);
		// fxMatComposeGlow.SetColor("_Debug", glowBlitDebug ? debugColor : blackColor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___fxMatComposeGlow_87;
		bool L_21 = __this->___glowBlitDebug_45;
		G_B14_0 = _stringLiteralCE5CDEC86E604948D547E530FD8FCD7A52576D5B;
		G_B14_1 = L_20;
		G_B14_2 = G_B13_3;
		if (L_21)
		{
			G_B15_0 = _stringLiteralCE5CDEC86E604948D547E530FD8FCD7A52576D5B;
			G_B15_1 = L_20;
			G_B15_2 = G_B13_3;
			goto IL_00e0;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = __this->___blackColor_111;
		G_B16_0 = L_22;
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		G_B16_3 = G_B14_2;
		goto IL_00e6;
	}

IL_00e0:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = __this->___debugColor_110;
		G_B16_0 = L_23;
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
		G_B16_3 = G_B15_2;
	}

IL_00e6:
	{
		NullCheck(G_B16_2);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(G_B16_2, G_B16_1, G_B16_0, NULL);
		// cbHighlight.DrawMesh(quadMesh, quadGlowMatrix, fxMatComposeGlow, 0, 0);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_24 = __this->___cbHighlight_96;
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_25 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___quadMesh_104;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_26 = __this->___quadGlowMatrix_106;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = __this->___fxMatComposeGlow_87;
		NullCheck(L_24);
		CommandBuffer_DrawMesh_m2CDCAC3E41416226D38770259BB2C56CB37D5EEF(L_24, L_25, L_26, L_27, 0, 0, NULL);
		G_B17_0 = G_B16_3;
	}

IL_0109:
	{
		// bool renderSmoothOutline = outline > 0 && outlineQuality == QualityLevel.Highest;
		float L_28 = __this->___outline_27;
		G_B18_0 = G_B17_0;
		if ((!(((float)L_28) > ((float)(0.0f)))))
		{
			G_B19_0 = G_B17_0;
			goto IL_0121;
		}
	}
	{
		int32_t L_29 = __this->___outlineQuality_30;
		G_B20_0 = ((((int32_t)L_29) == ((int32_t)2))? 1 : 0);
		G_B20_1 = G_B18_0;
		goto IL_0122;
	}

IL_0121:
	{
		G_B20_0 = 0;
		G_B20_1 = G_B19_0;
	}

IL_0122:
	{
		V_0 = (bool)G_B20_0;
		// if (renderSmoothOutline) {
		bool L_30 = V_0;
		G_B21_0 = G_B20_1;
		if (!L_30)
		{
			G_B29_0 = G_B20_1;
			goto IL_01d2;
		}
	}
	{
		// fxMatComposeOutline.SetVector("_Flip", (UnityEngine.XR.XRSettings.enabled && flipY) ? new Vector3(1, -1, 0) : new Vector3(0, 1, 0));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = __this->___fxMatComposeOutline_88;
		bool L_32;
		L_32 = XRSettings_get_enabled_m5ECD63DA0B306F7A3FBFD6B67A5B0702F8AEFB54(NULL);
		G_B22_0 = _stringLiteral00976D4B6B8B09FDE83FAF103A558B8E7E5649A5;
		G_B22_1 = L_31;
		G_B22_2 = G_B21_0;
		if (!L_32)
		{
			G_B23_0 = _stringLiteral00976D4B6B8B09FDE83FAF103A558B8E7E5649A5;
			G_B23_1 = L_31;
			G_B23_2 = G_B21_0;
			goto IL_0143;
		}
	}
	{
		bool L_33 = __this->___flipY_19;
		G_B23_0 = G_B22_0;
		G_B23_1 = G_B22_1;
		G_B23_2 = G_B22_2;
		if (L_33)
		{
			G_B24_0 = G_B22_0;
			G_B24_1 = G_B22_1;
			G_B24_2 = G_B22_2;
			goto IL_0159;
		}
	}

IL_0143:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_34), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		G_B25_0 = L_34;
		G_B25_1 = G_B23_0;
		G_B25_2 = G_B23_1;
		G_B25_3 = G_B23_2;
		goto IL_016d;
	}

IL_0159:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_35), (1.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		G_B25_0 = L_35;
		G_B25_1 = G_B24_0;
		G_B25_2 = G_B24_1;
		G_B25_3 = G_B24_2;
	}

IL_016d:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_36;
		L_36 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(G_B25_0, NULL);
		NullCheck(G_B25_2);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(G_B25_2, G_B25_1, L_36, NULL);
		// fxMatComposeOutline.SetInt("_ZTest", GetZTestValue(smoothOutlineVisibility));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___fxMatComposeOutline_88;
		int32_t L_38 = ___smoothOutlineVisibility1;
		int32_t L_39;
		L_39 = HighlightEffect_GetZTestValue_m649B1407B452B08B8F6326CDAF831529A46EF6D7(__this, L_38, NULL);
		NullCheck(L_37);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_37, _stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, L_39, NULL);
		// fxMatComposeOutline.SetColor("_Debug", outlineBlitDebug ? debugColor : blackColor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = __this->___fxMatComposeOutline_88;
		bool L_41 = __this->___outlineBlitDebug_33;
		G_B26_0 = _stringLiteralCE5CDEC86E604948D547E530FD8FCD7A52576D5B;
		G_B26_1 = L_40;
		G_B26_2 = G_B25_3;
		if (L_41)
		{
			G_B27_0 = _stringLiteralCE5CDEC86E604948D547E530FD8FCD7A52576D5B;
			G_B27_1 = L_40;
			G_B27_2 = G_B25_3;
			goto IL_01a9;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42 = __this->___blackColor_111;
		G_B28_0 = L_42;
		G_B28_1 = G_B26_0;
		G_B28_2 = G_B26_1;
		G_B28_3 = G_B26_2;
		goto IL_01af;
	}

IL_01a9:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43 = __this->___debugColor_110;
		G_B28_0 = L_43;
		G_B28_1 = G_B27_0;
		G_B28_2 = G_B27_1;
		G_B28_3 = G_B27_2;
	}

IL_01af:
	{
		NullCheck(G_B28_2);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(G_B28_2, G_B28_1, G_B28_0, NULL);
		// cbHighlight.DrawMesh(quadMesh, quadOutlineMatrix, fxMatComposeOutline, 0, 0);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_44 = __this->___cbHighlight_96;
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_45 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___quadMesh_104;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_46 = __this->___quadOutlineMatrix_107;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_47 = __this->___fxMatComposeOutline_88;
		NullCheck(L_44);
		CommandBuffer_DrawMesh_m2CDCAC3E41416226D38770259BB2C56CB37D5EEF(L_44, L_45, L_46, L_47, 0, 0, NULL);
		G_B29_0 = G_B28_3;
	}

IL_01d2:
	{
		// if (renderSmoothGlow) {
		if (!G_B29_0)
		{
			goto IL_01fa;
		}
	}
	{
		// for (int k = 0; k < mipGlowBuffers.Length; k++) {
		V_1 = 0;
		goto IL_01ef;
	}

IL_01d8:
	{
		// cbHighlight.ReleaseTemporaryRT(mipGlowBuffers[k]);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_48 = __this->___cbHighlight_96;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->___mipGlowBuffers_100;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_48);
		CommandBuffer_ReleaseTemporaryRT_m4651A4B373DF432AA44F06A6F20852ED5996CC8E(L_48, L_52, NULL);
		// for (int k = 0; k < mipGlowBuffers.Length; k++) {
		int32_t L_53 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_01ef:
	{
		// for (int k = 0; k < mipGlowBuffers.Length; k++) {
		int32_t L_54 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = __this->___mipGlowBuffers_100;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_01d8;
		}
	}

IL_01fa:
	{
		// if (renderSmoothOutline) {
		bool L_56 = V_0;
		if (!L_56)
		{
			goto IL_0223;
		}
	}
	{
		// for (int k = 0; k < mipOutlineBuffers.Length; k++) {
		V_2 = 0;
		goto IL_0218;
	}

IL_0201:
	{
		// cbHighlight.ReleaseTemporaryRT(mipOutlineBuffers[k]);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_57 = __this->___cbHighlight_96;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = __this->___mipOutlineBuffers_101;
		int32_t L_59 = V_2;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		int32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_57);
		CommandBuffer_ReleaseTemporaryRT_m4651A4B373DF432AA44F06A6F20852ED5996CC8E(L_57, L_61, NULL);
		// for (int k = 0; k < mipOutlineBuffers.Length; k++) {
		int32_t L_62 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0218:
	{
		// for (int k = 0; k < mipOutlineBuffers.Length; k++) {
		int32_t L_63 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = __this->___mipOutlineBuffers_101;
		NullCheck(L_64);
		if ((((int32_t)L_63) < ((int32_t)((int32_t)(((RuntimeArray*)L_64)->max_length)))))
		{
			goto IL_0201;
		}
	}

IL_0223:
	{
		// cbHighlight.ReleaseTemporaryRT(sourceRT);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_65 = __this->___cbHighlight_96;
		int32_t L_66 = __this->___sourceRT_105;
		NullCheck(L_65);
		CommandBuffer_ReleaseTemporaryRT_m4651A4B373DF432AA44F06A6F20852ED5996CC8E(L_65, L_66, NULL);
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::InitMaterial(UnityEngine.Material&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_InitMaterial_m41641602445EACD919BE6383A9200A8A63CB1470 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** ___material0, String_t* ___shaderName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17FC0954E2BA29F862AC82AAF54615D8CF0A5190);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7B33121028D2111A26D530F62393F0D0A5670F1);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	{
		// if (material == null) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** L_0 = ___material0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = *((Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3**)L_0);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		// Shader shaderFX = Shader.Find(shaderName);
		String_t* L_3 = ___shaderName1;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4;
		L_4 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(L_3, NULL);
		V_0 = L_4;
		// if (shaderFX == null) {
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		// Debug.LogError("Shader " + shaderName + " not found.");
		String_t* L_7 = ___shaderName1;
		String_t* L_8;
		L_8 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralB7B33121028D2111A26D530F62393F0D0A5670F1, L_7, _stringLiteral17FC0954E2BA29F862AC82AAF54615D8CF0A5190, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_8, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_0037:
	{
		// material = new Material(shaderFX);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** L_9 = ___material0;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_11, L_10, NULL);
		*((RuntimeObject**)L_9) = (RuntimeObject*)L_11;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)(RuntimeObject*)L_11);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::ForkMaterial(UnityEngine.Material,UnityEngine.Material[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_ForkMaterial_m1A1856DE9F512098E252DA28742283CC854CB6E4 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D** ___array1, int32_t ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC1DC863B344E1F38257F041D70495B706A5FCBE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (array == null || array.Length != count) {
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D** L_0 = ___array1;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_1 = *((MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D**)L_0);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D** L_2 = ___array1;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_3 = *((MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D**)L_2);
		NullCheck(L_3);
		int32_t L_4 = ___count2;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) == ((int32_t)L_4)))
		{
			goto IL_0013;
		}
	}

IL_000b:
	{
		// array = new Material[count];
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D** L_5 = ___array1;
		int32_t L_6 = ___count2;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_7 = (MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D*)(MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D*)SZArrayNew(MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var, (uint32_t)L_6);
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_7);
	}

IL_0013:
	{
		// for (int k = 0; k < count; k++) {
		V_0 = 0;
		goto IL_0031;
	}

IL_0017:
	{
		// if (array[k] == null) {
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D** L_8 = ___array1;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_9 = *((MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D**)L_8);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_002d;
		}
	}
	{
		// array[k] = Instantiate<Material>(material);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D** L_14 = ___array1;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_15 = *((MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D**)L_14);
		int32_t L_16 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = ___material0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18;
		L_18 = Object_Instantiate_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC1DC863B344E1F38257F041D70495B706A5FCBE4(L_17, Object_Instantiate_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC1DC863B344E1F38257F041D70495B706A5FCBE4_RuntimeMethod_var);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)L_18);
	}

IL_002d:
	{
		// for (int k = 0; k < count; k++) {
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0031:
	{
		// for (int k = 0; k < count; k++) {
		int32_t L_20 = V_0;
		int32_t L_21 = ___count2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0017;
		}
	}
	{
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::SetTarget(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_SetTarget_m4C130CF82BB4E4BD902B3FEA5C6677EC0DC45A5A (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transform == target || transform == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___transform0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___target_72;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___transform0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0018;
		}
	}

IL_0017:
	{
		// return;
		return;
	}

IL_0018:
	{
		// if (_highlighted) {
		bool L_5 = __this->____highlighted_16;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		// SetHighlighted(false);
		HighlightEffect_SetHighlighted_m0E7796EB34B79F2BD65D6ADC618CEF5661CD1E46(__this, (bool)0, NULL);
	}

IL_0027:
	{
		// target = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___transform0;
		__this->___target_72 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_72), (void*)L_6);
		// SetupMaterial();
		HighlightEffect_SetupMaterial_m2BFF4C99FCFBE3F59A1EE08CBF21BA8C4A747806(__this, NULL);
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::SetTargets(UnityEngine.Transform,UnityEngine.Renderer[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_SetTargets_m1C5D1D4C013D909C5C1AB89874C3E912852F4C2A (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform0, RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ___renderers1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transform == target || transform == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___transform0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___target_72;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___transform0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0018;
		}
	}

IL_0017:
	{
		// return;
		return;
	}

IL_0018:
	{
		// if (_highlighted) {
		bool L_5 = __this->____highlighted_16;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		// SetHighlighted(false);
		HighlightEffect_SetHighlighted_m0E7796EB34B79F2BD65D6ADC618CEF5661CD1E46(__this, (bool)0, NULL);
	}

IL_0027:
	{
		// target = transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___transform0;
		__this->___target_72 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_72), (void*)L_6);
		// SetupMaterial(renderers);
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_7 = ___renderers1;
		HighlightEffect_SetupMaterial_m63F7BD88B10F94862FE2240CBEA249E4F301FDE6(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::SetHighlighted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_SetHighlighted_m0E7796EB34B79F2BD65D6ADC618CEF5661CD1E46 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, bool ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral885516E057703E4DAEB49FBC12F5DD445D288AC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6904CD822ED40458DE745BDFB4E21FB7A729022);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (!Application.isPlaying) {
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// _highlighted = state;
		bool L_1 = ___state0;
		__this->____highlighted_16 = L_1;
		// return;
		return;
	}

IL_000f:
	{
		// if (fading == FadingState.NoFading) {
		int32_t L_2 = __this->___fading_95;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// fadeStartTime = Time.time;
		float L_3;
		L_3 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___fadeStartTime_94 = L_3;
	}

IL_0022:
	{
		// if (state && !ignore) {
		bool L_4 = ___state0;
		if (!L_4)
		{
			goto IL_00ce;
		}
	}
	{
		bool L_5 = __this->___ignore_15;
		if (L_5)
		{
			goto IL_00ce;
		}
	}
	{
		// if (_highlighted && fading == FadingState.NoFading) {
		bool L_6 = __this->____highlighted_16;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_7 = __this->___fading_95;
		if (L_7)
		{
			goto IL_0044;
		}
	}
	{
		// return;
		return;
	}

IL_0044:
	{
		// if (OnObjectHighlightStart != null) {
		OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* L_8 = __this->___OnObjectHighlightStart_61;
		if (!L_8)
		{
			goto IL_0060;
		}
	}
	{
		// if (!OnObjectHighlightStart(gameObject)) {
		OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* L_9 = __this->___OnObjectHighlightStart_61;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		bool L_11;
		L_11 = OnObjectHighlightStartEvent_Invoke_m9BACA4A0E81A3843B0872B6F8475386C5FBEC742_inline(L_9, L_10, NULL);
		if (L_11)
		{
			goto IL_0060;
		}
	}
	{
		// return;
		return;
	}

IL_0060:
	{
		// SendMessage("HighlightStart", null, SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m7CD6568BD5D93384C683CFF1E5088D17F20F3459(__this, _stringLiteralC6904CD822ED40458DE745BDFB4E21FB7A729022, NULL, 1, NULL);
		// highlightStartTime = Time.time;
		float L_12;
		L_12 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___highlightStartTime_73 = L_12;
		// if (fadeInDuration > 0) {
		float L_13 = __this->___fadeInDuration_17;
		if ((!(((float)L_13) > ((float)(0.0f)))))
		{
			goto IL_00b8;
		}
	}
	{
		// if (fading == FadingState.FadingOut) {
		int32_t L_14 = __this->___fading_95;
		if ((!(((uint32_t)L_14) == ((uint32_t)(-1)))))
		{
			goto IL_00af;
		}
	}
	{
		// float remaining = fadeOutDuration - (Time.time - fadeStartTime);
		float L_15 = __this->___fadeOutDuration_18;
		float L_16;
		L_16 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_17 = __this->___fadeStartTime_94;
		V_0 = ((float)il2cpp_codegen_subtract(L_15, ((float)il2cpp_codegen_subtract(L_16, L_17))));
		// fadeStartTime = Time.time - remaining;
		float L_18;
		L_18 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_19 = V_0;
		__this->___fadeStartTime_94 = ((float)il2cpp_codegen_subtract(L_18, L_19));
	}

IL_00af:
	{
		// fading = FadingState.FadingIn;
		__this->___fading_95 = 1;
		goto IL_00bf;
	}

IL_00b8:
	{
		// fading = FadingState.NoFading;
		__this->___fading_95 = 0;
	}

IL_00bf:
	{
		// _highlighted = true;
		__this->____highlighted_16 = (bool)1;
		// requireUpdateMaterial = true;
		__this->___requireUpdateMaterial_113 = (bool)1;
		return;
	}

IL_00ce:
	{
		// } else if (_highlighted) {
		bool L_20 = __this->____highlighted_16;
		if (!L_20)
		{
			goto IL_0150;
		}
	}
	{
		// if (fadeOutDuration > 0) {
		float L_21 = __this->___fadeOutDuration_18;
		if ((!(((float)L_21) > ((float)(0.0f)))))
		{
			goto IL_0115;
		}
	}
	{
		// if (fading == FadingState.FadingIn) {
		int32_t L_22 = __this->___fading_95;
		if ((!(((uint32_t)L_22) == ((uint32_t)1))))
		{
			goto IL_010d;
		}
	}
	{
		// float elapsed = Time.time - fadeStartTime;
		float L_23;
		L_23 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_24 = __this->___fadeStartTime_94;
		V_1 = ((float)il2cpp_codegen_subtract(L_23, L_24));
		// fadeStartTime = Time.time + elapsed - fadeInDuration;
		float L_25;
		L_25 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_26 = V_1;
		float L_27 = __this->___fadeInDuration_17;
		__this->___fadeStartTime_94 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_25, L_26)), L_27));
	}

IL_010d:
	{
		// fading = FadingState.FadingOut; // when fade out ends, highlighted will be set to false in OnRenderObject
		__this->___fading_95 = (-1);
		return;
	}

IL_0115:
	{
		// fading = FadingState.NoFading;
		__this->___fading_95 = 0;
		// _highlighted = false;
		__this->____highlighted_16 = (bool)0;
		// if (OnObjectHighlightEnd != null) {
		OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* L_28 = __this->___OnObjectHighlightEnd_62;
		if (!L_28)
		{
			goto IL_013c;
		}
	}
	{
		// OnObjectHighlightEnd(gameObject);
		OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* L_29 = __this->___OnObjectHighlightEnd_62;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_29);
		OnObjectHighlightEndEvent_Invoke_m7EBAEDB3E40C6587FFE7808B8953D8A534B36993_inline(L_29, L_30, NULL);
	}

IL_013c:
	{
		// SendMessage("HighlightEnd", null, SendMessageOptions.DontRequireReceiver);
		Component_SendMessage_m7CD6568BD5D93384C683CFF1E5088D17F20F3459(__this, _stringLiteral885516E057703E4DAEB49FBC12F5DD445D288AC3, NULL, 1, NULL);
		// requireUpdateMaterial = true;
		__this->___requireUpdateMaterial_113 = (bool)1;
	}

IL_0150:
	{
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::SetupMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_SetupMaterial_m2BFF4C99FCFBE3F59A1EE08CBF21BA8C4A747806 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_m8739CFB57B40043E52DEBE91B09BFA6342DE9255_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB524B909209E02C6B5202568C4006AF3CA71EFA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* V_0 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	int32_t V_3 = 0;
	List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* V_4 = NULL;
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* V_5 = NULL;
	int32_t V_6 = 0;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_7 = NULL;
	HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* V_8 = NULL;
	HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* V_9 = NULL;
	HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* V_10 = NULL;
	HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* V_11 = NULL;
	{
		// if (target == null || fxMatMask == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_72;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___fxMatMask_78;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001c;
		}
	}

IL_001b:
	{
		// return;
		return;
	}

IL_001c:
	{
		// ForkMaterial(fxMatOutlineTemplate, ref fxMatOutline, 8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___fxMatOutlineTemplate_85;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D** L_5 = (&__this->___fxMatOutline_91);
		HighlightEffect_ForkMaterial_m1A1856DE9F512098E252DA28742283CC854CB6E4(__this, L_4, L_5, 8, NULL);
		// ForkMaterial(fxMatGlowTemplate, ref fxMatGlow, 8 * glowPasses.Length);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___fxMatGlowTemplate_83;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D** L_7 = (&__this->___fxMatGlow_92);
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_8 = __this->___glowPasses_47;
		NullCheck(L_8);
		HighlightEffect_ForkMaterial_m1A1856DE9F512098E252DA28742283CC854CB6E4(__this, L_6, L_7, ((int32_t)il2cpp_codegen_multiply(8, ((int32_t)(((RuntimeArray*)L_8)->max_length)))), NULL);
		// Renderer[] rr = null;
		V_0 = (RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A*)NULL;
		// switch (effectGroup) {
		int32_t L_9 = __this->___effectGroup_7;
		V_3 = L_9;
		int32_t L_10 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, 1)))
		{
			case 0:
			{
				goto IL_00f1;
			}
			case 1:
			{
				goto IL_0119;
			}
			case 2:
			{
				goto IL_0143;
			}
			case 3:
			{
				goto IL_0184;
			}
			case 4:
			{
				goto IL_0075;
			}
		}
	}
	{
		goto IL_01c5;
	}

IL_0075:
	{
		// if (target.GetComponent<Renderer>() != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___target_72;
		NullCheck(L_11);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_12;
		L_12 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_11, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_00e0;
		}
	}
	{
		// List<Renderer> renderers = new List<Renderer>();
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_14 = (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*)il2cpp_codegen_object_new(List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE(L_14, List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE_RuntimeMethod_var);
		V_4 = L_14;
		// foreach (Renderer renderer1 in target.GetComponentsInChildren<Renderer>())
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = __this->___target_72;
		NullCheck(L_15);
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_16;
		L_16 = Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7(L_15, Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var);
		V_5 = L_16;
		V_6 = 0;
		goto IL_00cb;
	}

IL_00a1:
	{
		// foreach (Renderer renderer1 in target.GetComponentsInChildren<Renderer>())
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_17 = V_5;
		int32_t L_18 = V_6;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_7 = L_20;
		// if (!renderer1.Equals(target.GetComponent<Renderer>()))
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_21 = V_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___target_72;
		NullCheck(L_22);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_23;
		L_23 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_22, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_21);
		bool L_24;
		L_24 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_21, L_23);
		if (L_24)
		{
			goto IL_00c5;
		}
	}
	{
		// renderers.Add(renderer1);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_25 = V_4;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_26 = V_7;
		NullCheck(L_25);
		List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_inline(L_25, L_26, List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_RuntimeMethod_var);
	}

IL_00c5:
	{
		int32_t L_27 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00cb:
	{
		// foreach (Renderer renderer1 in target.GetComponentsInChildren<Renderer>())
		int32_t L_28 = V_6;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_29 = V_5;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_00a1;
		}
	}
	{
		// rr = renderers.ToArray();
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_30 = V_4;
		NullCheck(L_30);
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_31;
		L_31 = List_1_ToArray_mB524B909209E02C6B5202568C4006AF3CA71EFA0(L_30, List_1_ToArray_mB524B909209E02C6B5202568C4006AF3CA71EFA0_RuntimeMethod_var);
		V_0 = L_31;
		goto IL_01d1;
	}

IL_00e0:
	{
		// rr = target.GetComponentsInChildren<Renderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___target_72;
		NullCheck(L_32);
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_33;
		L_33 = Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7(L_32, Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var);
		V_0 = L_33;
		// break;
		goto IL_01d1;
	}

IL_00f1:
	{
		// Renderer renderer = target.GetComponent<Renderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = __this->___target_72;
		NullCheck(L_34);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_35;
		L_35 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_34, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		V_1 = L_35;
		// if (renderer != null) {
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_36 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_36, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_37)
		{
			goto IL_01d1;
		}
	}
	{
		// rr = new Renderer[1];
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_38 = (RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A*)(RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A*)SZArrayNew(RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_38;
		// rr[0] = renderer;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_39 = V_0;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_40 = V_1;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)L_40);
		// break;
		goto IL_01d1;
	}

IL_0119:
	{
		// Transform root = target;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = __this->___target_72;
		V_2 = L_41;
		goto IL_0129;
	}

IL_0122:
	{
		// root = root.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = V_2;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_42, NULL);
		V_2 = L_43;
	}

IL_0129:
	{
		// while (root.parent != null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = V_2;
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_44, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_45, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_46)
		{
			goto IL_0122;
		}
	}
	{
		// rr = root.GetComponentsInChildren<Renderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = V_2;
		NullCheck(L_47);
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_48;
		L_48 = Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7(L_47, Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var);
		V_0 = L_48;
		// break;
		goto IL_01d1;
	}

IL_0143:
	{
		// HighlightEffect eg = this;
		V_8 = __this;
		// if (target != transform) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49 = __this->___target_72;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_51;
		L_51 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_49, L_50, NULL);
		if (!L_51)
		{
			goto IL_0174;
		}
	}
	{
		// HighlightEffect targetEffect = target.GetComponent<HighlightEffect>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52 = __this->___target_72;
		NullCheck(L_52);
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_53;
		L_53 = Component_GetComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_m8739CFB57B40043E52DEBE91B09BFA6342DE9255(L_52, Component_GetComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_m8739CFB57B40043E52DEBE91B09BFA6342DE9255_RuntimeMethod_var);
		V_9 = L_53;
		// if (targetEffect != null) {
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_54 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_54, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_55)
		{
			goto IL_0174;
		}
	}
	{
		// eg = targetEffect;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_56 = V_9;
		V_8 = L_56;
	}

IL_0174:
	{
		// rr = FindRenderersWithLayerInScene(eg.effectGroupLayer);
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_57 = V_8;
		NullCheck(L_57);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_58 = L_57->___effectGroupLayer_8;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_59;
		L_59 = HighlightEffect_FindRenderersWithLayerInScene_m458BA97B2F525D03F2C86F552A014EDCCE47FACA(__this, L_58, NULL);
		V_0 = L_59;
		// break;
		goto IL_01d1;
	}

IL_0184:
	{
		// HighlightEffect eg = this;
		V_10 = __this;
		// if (target != transform) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60 = __this->___target_72;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61;
		L_61 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_62;
		L_62 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_60, L_61, NULL);
		if (!L_62)
		{
			goto IL_01b5;
		}
	}
	{
		// HighlightEffect targetEffect = target.GetComponent<HighlightEffect>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63 = __this->___target_72;
		NullCheck(L_63);
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_64;
		L_64 = Component_GetComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_m8739CFB57B40043E52DEBE91B09BFA6342DE9255(L_63, Component_GetComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_m8739CFB57B40043E52DEBE91B09BFA6342DE9255_RuntimeMethod_var);
		V_11 = L_64;
		// if (targetEffect != null) {
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_65 = V_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_66;
		L_66 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_65, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_66)
		{
			goto IL_01b5;
		}
	}
	{
		// eg = targetEffect;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_67 = V_11;
		V_10 = L_67;
	}

IL_01b5:
	{
		// rr = FindRenderersWithLayerInChildren(eg.effectGroupLayer);
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_68 = V_10;
		NullCheck(L_68);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_69 = L_68->___effectGroupLayer_8;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_70;
		L_70 = HighlightEffect_FindRenderersWithLayerInChildren_mD4FB6FA57F09F114B453108F0BCB120EB115D6FA(__this, L_69, NULL);
		V_0 = L_70;
		// break;
		goto IL_01d1;
	}

IL_01c5:
	{
		// rr = target.GetComponentsInChildren<Renderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71 = __this->___target_72;
		NullCheck(L_71);
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_72;
		L_72 = Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7(L_71, Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var);
		V_0 = L_72;
	}

IL_01d1:
	{
		// SetupMaterial(rr);
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_73 = V_0;
		HighlightEffect_SetupMaterial_m63F7BD88B10F94862FE2240CBEA249E4F301FDE6(__this, L_73, NULL);
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::SetupMaterial(UnityEngine.Renderer[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_SetupMaterial_m63F7BD88B10F94862FE2240CBEA249E4F301FDE6 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* ___rr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_m8739CFB57B40043E52DEBE91B09BFA6342DE9255_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFC0F02CCD26A6A186031CF43E92D7B60EA1CC370_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_1 = NULL;
	bool V_2 = false;
	HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* V_3 = NULL;
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* V_4 = NULL;
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* V_5 = NULL;
	ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04* G_B15_0 = NULL;
	ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04* G_B14_0 = NULL;
	int32_t G_B16_0 = 0;
	ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04* G_B16_1 = NULL;
	{
		// if (rr == null) {
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_0 = ___rr0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// rr = new Renderer[0];
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_1 = (RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A*)(RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A*)SZArrayNew(RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A_il2cpp_TypeInfo_var, (uint32_t)0);
		___rr0 = L_1;
	}

IL_000b:
	{
		// if (rms == null || rms.Length < rr.Length) {
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_2 = __this->___rms_70;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_3 = __this->___rms_70;
		NullCheck(L_3);
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_4 = ___rr0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_002e;
		}
	}

IL_0020:
	{
		// rms = new ModelMaterials[rr.Length];
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_5 = ___rr0;
		NullCheck(L_5);
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_6 = (ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C*)(ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C*)SZArrayNew(ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)));
		__this->___rms_70 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rms_70), (void*)L_6);
	}

IL_002e:
	{
		// rmsCount = 0;
		__this->___rmsCount_71 = 0;
		// for (int k = 0; k < rr.Length; k++) {
		V_0 = 0;
		goto IL_03d0;
	}

IL_003c:
	{
		// rms[rmsCount] = new ModelMaterials();
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_7 = __this->___rms_70;
		int32_t L_8 = __this->___rmsCount_71;
		NullCheck(L_7);
		il2cpp_codegen_initobj(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), sizeof(ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04));
		// Renderer renderer = rr[k];
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_9 = ___rr0;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_1 = L_12;
		// rms[rmsCount].renderer = renderer;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_13 = __this->___rms_70;
		int32_t L_14 = __this->___rmsCount_71;
		NullCheck(L_13);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_15 = V_1;
		((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___renderer_5 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___renderer_5), (void*)L_15);
		// rms[rmsCount].renderWasVisibleDuringSetup = renderer.isVisible;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_16 = __this->___rms_70;
		int32_t L_17 = __this->___rmsCount_71;
		NullCheck(L_16);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_18 = V_1;
		NullCheck(L_18);
		bool L_19;
		L_19 = Renderer_get_isVisible_mBCDDEB0EF27442FD1D910CD26754135B677B8251(L_18, NULL);
		((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___renderWasVisibleDuringSetup_2 = L_19;
		// if (renderer.transform != target) {
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_20 = V_1;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___target_72;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_21, L_22, NULL);
		if (!L_23)
		{
			goto IL_00c6;
		}
	}
	{
		// HighlightEffect otherEffect = renderer.GetComponent<HighlightEffect>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_24 = V_1;
		NullCheck(L_24);
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_25;
		L_25 = Component_GetComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_m8739CFB57B40043E52DEBE91B09BFA6342DE9255(L_24, Component_GetComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_m8739CFB57B40043E52DEBE91B09BFA6342DE9255_RuntimeMethod_var);
		V_3 = L_25;
		// if (otherEffect != null && otherEffect.enabled) {
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_26 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_00c6;
		}
	}
	{
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_28 = V_3;
		NullCheck(L_28);
		bool L_29;
		L_29 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_28, NULL);
		if (!L_29)
		{
			goto IL_00c6;
		}
	}
	{
		// otherEffect.highlighted = highlighted;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_30 = V_3;
		bool L_31;
		L_31 = HighlightEffect_get_highlighted_m377F5C74676DAE438F36EF0C24444FB7314EC741_inline(__this, NULL);
		NullCheck(L_30);
		HighlightEffect_set_highlighted_mD8E96F517EA4F033686749E84BE0D0697305A5A5(L_30, L_31, NULL);
		// continue; // independent subobject
		goto IL_03cc;
	}

IL_00c6:
	{
		// if (OnRendererHighlightStart != null) {
		OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* L_32 = __this->___OnRendererHighlightStart_63;
		if (!L_32)
		{
			goto IL_00ef;
		}
	}
	{
		// if (!OnRendererHighlightStart(renderer)) {
		OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* L_33 = __this->___OnRendererHighlightStart_63;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_34 = V_1;
		NullCheck(L_33);
		bool L_35;
		L_35 = OnRendererHighlightEvent_Invoke_m2BBFCFC882793839F1CE2591B2963B0B28701B52_inline(L_33, L_34, NULL);
		if (L_35)
		{
			goto IL_00ef;
		}
	}
	{
		// rmsCount++;
		int32_t L_36 = __this->___rmsCount_71;
		__this->___rmsCount_71 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		// continue;
		goto IL_03cc;
	}

IL_00ef:
	{
		// bool isSkinnedMesh = renderer is SkinnedMeshRenderer;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_37 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E*)((SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E*)IsInstClass((RuntimeObject*)L_37, SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		// rms[rmsCount].normalsOption = isSkinnedMesh ? NormalsOption.PreserveOriginal : normalsOption;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_38 = __this->___rms_70;
		int32_t L_39 = __this->___rmsCount_71;
		NullCheck(L_38);
		bool L_40 = V_2;
		G_B14_0 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)));
		if (L_40)
		{
			G_B15_0 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)));
			goto IL_0115;
		}
	}
	{
		int32_t L_41 = __this->___normalsOption_14;
		G_B16_0 = ((int32_t)(L_41));
		G_B16_1 = G_B14_0;
		goto IL_0116;
	}

IL_0115:
	{
		G_B16_0 = 1;
		G_B16_1 = G_B15_0;
	}

IL_0116:
	{
		G_B16_1->___normalsOption_12 = G_B16_0;
		// CheckCommandBuffers();
		HighlightEffect_CheckCommandBuffers_mCE9F65BA168348543B882E93ABF1A38EE3E6A3F8(__this, NULL);
		// if (isSkinnedMesh) {
		bool L_42 = V_2;
		if (!L_42)
		{
			goto IL_015e;
		}
	}
	{
		// rms[rmsCount].skinnedMesh = true;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_43 = __this->___rms_70;
		int32_t L_44 = __this->___rmsCount_71;
		NullCheck(L_43);
		((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___skinnedMesh_6 = (bool)1;
		// rms[rmsCount].mesh = ((SkinnedMeshRenderer)renderer).sharedMesh;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_45 = __this->___rms_70;
		int32_t L_46 = __this->___rmsCount_71;
		NullCheck(L_45);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_47 = V_1;
		NullCheck(((SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E*)CastclassClass((RuntimeObject*)L_47, SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_il2cpp_TypeInfo_var)));
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_48;
		L_48 = SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302(((SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E*)CastclassClass((RuntimeObject*)L_47, SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_il2cpp_TypeInfo_var)), NULL);
		((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___mesh_3 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)))->___mesh_3), (void*)L_48);
		goto IL_01cd;
	}

IL_015e:
	{
		// } else if (Application.isPlaying && renderer.isPartOfStaticBatch) {
		bool L_49;
		L_49 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_49)
		{
			goto IL_019e;
		}
	}
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_50 = V_1;
		NullCheck(L_50);
		bool L_51;
		L_51 = Renderer_get_isPartOfStaticBatch_m53CAB216927C6A8D61AC1529132AE7966D9443E0(L_50, NULL);
		if (!L_51)
		{
			goto IL_019e;
		}
	}
	{
		// MeshCollider mc = renderer.GetComponent<MeshCollider>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_52 = V_1;
		NullCheck(L_52);
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_53;
		L_53 = Component_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFC0F02CCD26A6A186031CF43E92D7B60EA1CC370(L_52, Component_GetComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFC0F02CCD26A6A186031CF43E92D7B60EA1CC370_RuntimeMethod_var);
		V_4 = L_53;
		// if (mc != null) {
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_54 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_54, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_55)
		{
			goto IL_01cd;
		}
	}
	{
		// rms[rmsCount].mesh = mc.sharedMesh;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_56 = __this->___rms_70;
		int32_t L_57 = __this->___rmsCount_71;
		NullCheck(L_56);
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_58 = V_4;
		NullCheck(L_58);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_59;
		L_59 = MeshCollider_get_sharedMesh_mFB4B8534501C29930D2D3710D6D82E60093FA21E(L_58, NULL);
		((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___mesh_3 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___mesh_3), (void*)L_59);
		goto IL_01cd;
	}

IL_019e:
	{
		// MeshFilter mf = renderer.GetComponent<MeshFilter>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_60 = V_1;
		NullCheck(L_60);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_61;
		L_61 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(L_60, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		V_5 = L_61;
		// if (mf != null) {
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_62 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_63;
		L_63 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_62, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_63)
		{
			goto IL_01cd;
		}
	}
	{
		// rms[rmsCount].mesh = mf.sharedMesh;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_64 = __this->___rms_70;
		int32_t L_65 = __this->___rmsCount_71;
		NullCheck(L_64);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_66 = V_5;
		NullCheck(L_66);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_67;
		L_67 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_66, NULL);
		((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___mesh_3 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_65)))->___mesh_3), (void*)L_67);
	}

IL_01cd:
	{
		// if (rms[rmsCount].mesh == null) {
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_68 = __this->___rms_70;
		int32_t L_69 = __this->___rmsCount_71;
		NullCheck(L_68);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_70 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)))->___mesh_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_71;
		L_71 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_70, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_71)
		{
			goto IL_03cc;
		}
	}
	{
		// rms[rmsCount].transform = renderer.transform;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_72 = __this->___rms_70;
		int32_t L_73 = __this->___rmsCount_71;
		NullCheck(L_72);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_74 = V_1;
		NullCheck(L_74);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75;
		L_75 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_74, NULL);
		((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_73)))->___transform_1 = L_75;
		Il2CppCodeGenWriteBarrier((void**)(&((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_73)))->___transform_1), (void*)L_75);
		// rms[rmsCount].fxMatMask = Fork(fxMatMask, rms[rmsCount].mesh);
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_76 = __this->___rms_70;
		int32_t L_77 = __this->___rmsCount_71;
		NullCheck(L_76);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_78 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___fxMatMask_78;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_79 = __this->___rms_70;
		int32_t L_80 = __this->___rmsCount_71;
		NullCheck(L_79);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_81 = ((L_79)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_80)))->___mesh_3;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_82;
		L_82 = HighlightEffect_Fork_m2D8F3EEA181B94445C551405BCD2F2524F134D40(__this, L_78, L_81, NULL);
		((L_76)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_77)))->___fxMatMask_7 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&((L_76)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_77)))->___fxMatMask_7), (void*)L_82);
		// rms[rmsCount].fxMatSeeThrough = Fork(fxMatSeeThrough, rms[rmsCount].mesh);
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_83 = __this->___rms_70;
		int32_t L_84 = __this->___rmsCount_71;
		NullCheck(L_83);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___fxMatSeeThrough_80;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_86 = __this->___rms_70;
		int32_t L_87 = __this->___rmsCount_71;
		NullCheck(L_86);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_88 = ((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)))->___mesh_3;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_89;
		L_89 = HighlightEffect_Fork_m2D8F3EEA181B94445C551405BCD2F2524F134D40(__this, L_85, L_88, NULL);
		((L_83)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_84)))->___fxMatSeeThrough_9 = L_89;
		Il2CppCodeGenWriteBarrier((void**)(&((L_83)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_84)))->___fxMatSeeThrough_9), (void*)L_89);
		// rms[rmsCount].fxMatOverlay = Fork(fxMatOverlay, rms[rmsCount].mesh);
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_90 = __this->___rms_70;
		int32_t L_91 = __this->___rmsCount_71;
		NullCheck(L_90);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___fxMatOverlay_81;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_93 = __this->___rms_70;
		int32_t L_94 = __this->___rmsCount_71;
		NullCheck(L_93);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_95 = ((L_93)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_94)))->___mesh_3;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_96;
		L_96 = HighlightEffect_Fork_m2D8F3EEA181B94445C551405BCD2F2524F134D40(__this, L_92, L_95, NULL);
		((L_90)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_91)))->___fxMatOverlay_10 = L_96;
		Il2CppCodeGenWriteBarrier((void**)(&((L_90)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_91)))->___fxMatOverlay_10), (void*)L_96);
		// rms[rmsCount].fxMatInnerGlow = Fork(fxMatInnerGlow, rms[rmsCount].mesh);
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_97 = __this->___rms_70;
		int32_t L_98 = __this->___rmsCount_71;
		NullCheck(L_97);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_99 = __this->___fxMatInnerGlow_84;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_100 = __this->___rms_70;
		int32_t L_101 = __this->___rmsCount_71;
		NullCheck(L_100);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_102 = ((L_100)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_101)))->___mesh_3;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_103;
		L_103 = HighlightEffect_Fork_m2D8F3EEA181B94445C551405BCD2F2524F134D40(__this, L_99, L_102, NULL);
		((L_97)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_98)))->___fxMatInnerGlow_11 = L_103;
		Il2CppCodeGenWriteBarrier((void**)(&((L_97)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_98)))->___fxMatInnerGlow_11), (void*)L_103);
		// rms[rmsCount].fxMatSolidColor = Fork(fxMatSolidColor, rms[rmsCount].mesh);
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_104 = __this->___rms_70;
		int32_t L_105 = __this->___rmsCount_71;
		NullCheck(L_104);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_106 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___fxMatSolidColor_79;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_107 = __this->___rms_70;
		int32_t L_108 = __this->___rmsCount_71;
		NullCheck(L_107);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_109 = ((L_107)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_108)))->___mesh_3;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_110;
		L_110 = HighlightEffect_Fork_m2D8F3EEA181B94445C551405BCD2F2524F134D40(__this, L_106, L_109, NULL);
		((L_104)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_105)))->___fxMatSolidColor_8 = L_110;
		Il2CppCodeGenWriteBarrier((void**)(&((L_104)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_105)))->___fxMatSolidColor_8), (void*)L_110);
		// rms[rmsCount].originalMesh = rms[rmsCount].mesh;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_111 = __this->___rms_70;
		int32_t L_112 = __this->___rmsCount_71;
		NullCheck(L_111);
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_113 = __this->___rms_70;
		int32_t L_114 = __this->___rmsCount_71;
		NullCheck(L_113);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_115 = ((L_113)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_114)))->___mesh_3;
		((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)))->___originalMesh_4 = L_115;
		Il2CppCodeGenWriteBarrier((void**)(&((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)))->___originalMesh_4), (void*)L_115);
		// if (!rms[rmsCount].preserveOriginalMesh) {
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_116 = __this->___rms_70;
		int32_t L_117 = __this->___rmsCount_71;
		NullCheck(L_116);
		bool L_118;
		L_118 = ModelMaterials_get_preserveOriginalMesh_m38D52DDFF7E797991380BE4FFB267EF3CB87E1DB(((L_116)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_117))), NULL);
		if (L_118)
		{
			goto IL_03be;
		}
	}
	{
		// if (innerGlow > 0 || (glow > 0 && glowQuality != QualityLevel.Highest) || (outline > 0 && outlineQuality != QualityLevel.Highest)) {
		float L_119 = __this->___innerGlow_48;
		if ((((float)L_119) > ((float)(0.0f))))
		{
			goto IL_039b;
		}
	}
	{
		float L_120 = __this->___glow_35;
		if ((!(((float)L_120) > ((float)(0.0f)))))
		{
			goto IL_0385;
		}
	}
	{
		int32_t L_121 = __this->___glowQuality_37;
		if ((!(((uint32_t)L_121) == ((uint32_t)2))))
		{
			goto IL_039b;
		}
	}

IL_0385:
	{
		float L_122 = __this->___outline_27;
		if ((!(((float)L_122) > ((float)(0.0f)))))
		{
			goto IL_03be;
		}
	}
	{
		int32_t L_123 = __this->___outlineQuality_30;
		if ((((int32_t)L_123) == ((int32_t)2)))
		{
			goto IL_03be;
		}
	}

IL_039b:
	{
		// if (normalsOption == NormalsOption.Reorient) {
		int32_t L_124 = __this->___normalsOption_14;
		if ((!(((uint32_t)L_124) == ((uint32_t)2))))
		{
			goto IL_03b2;
		}
	}
	{
		// ReorientNormals(rmsCount);
		int32_t L_125 = __this->___rmsCount_71;
		HighlightEffect_ReorientNormals_m992F4431FB136BF853314B374CBC1D28B20F7C61(__this, L_125, NULL);
		goto IL_03be;
	}

IL_03b2:
	{
		// AverageNormals(rmsCount);
		int32_t L_126 = __this->___rmsCount_71;
		HighlightEffect_AverageNormals_mA95BEE9B97C08F922B6567DB87E6D5EAA3E8EC2A(__this, L_126, NULL);
	}

IL_03be:
	{
		// rmsCount++;
		int32_t L_127 = __this->___rmsCount_71;
		__this->___rmsCount_71 = ((int32_t)il2cpp_codegen_add(L_127, 1));
	}

IL_03cc:
	{
		// for (int k = 0; k < rr.Length; k++) {
		int32_t L_128 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_128, 1));
	}

IL_03d0:
	{
		// for (int k = 0; k < rr.Length; k++) {
		int32_t L_129 = V_0;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_130 = ___rr0;
		NullCheck(L_130);
		if ((((int32_t)L_129) < ((int32_t)((int32_t)(((RuntimeArray*)L_130)->max_length)))))
		{
			goto IL_003c;
		}
	}
	{
		// UpdateMaterialProperties();
		HighlightEffect_UpdateMaterialProperties_m207F5DECD7AB1E89B3EB08F4F23E2924CEC79BFA(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.Renderer[] HighlightPlus.HighlightEffect::FindRenderersWithLayerInScene(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* HighlightEffect_FindRenderersWithLayerInScene_m458BA97B2F525D03F2C86F552A014EDCCE47FACA (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB524B909209E02C6B5202568C4006AF3CA71EFA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m3A2AA29F0DAF9A715FBCEF3DFA506F7BE8564E0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* V_0 = NULL;
	int32_t V_1 = 0;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_2 = NULL;
	{
		// Renderer[] rr = FindObjectsOfType<Renderer>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_0;
		L_0 = Object_FindObjectsOfType_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m3A2AA29F0DAF9A715FBCEF3DFA506F7BE8564E0A(Object_FindObjectsOfType_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m3A2AA29F0DAF9A715FBCEF3DFA506F7BE8564E0A_RuntimeMethod_var);
		V_0 = L_0;
		// if (tempRR == null) {
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_1 = __this->___tempRR_131;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		// tempRR = new List<Renderer>();
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_2 = (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*)il2cpp_codegen_object_new(List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE(L_2, List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE_RuntimeMethod_var);
		__this->___tempRR_131 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempRR_131), (void*)L_2);
		goto IL_0026;
	}

IL_001b:
	{
		// tempRR.Clear();
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_3 = __this->___tempRR_131;
		NullCheck(L_3);
		List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_inline(L_3, List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_RuntimeMethod_var);
	}

IL_0026:
	{
		// for (var i = 0; i < rr.Length; i++) {
		V_1 = 0;
		goto IL_0057;
	}

IL_002a:
	{
		// Renderer r = rr[i];
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		// if (((1 << r.gameObject.layer) & layer) != 0) {
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_8 = V_2;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_9, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = ___layer0;
		int32_t L_12;
		L_12 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_11, NULL);
		if (!((int32_t)(((int32_t)(1<<((int32_t)(L_10&((int32_t)31)))))&L_12)))
		{
			goto IL_0053;
		}
	}
	{
		// tempRR.Add(r);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_13 = __this->___tempRR_131;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_14 = V_2;
		NullCheck(L_13);
		List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_inline(L_13, L_14, List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_RuntimeMethod_var);
	}

IL_0053:
	{
		// for (var i = 0; i < rr.Length; i++) {
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0057:
	{
		// for (var i = 0; i < rr.Length; i++) {
		int32_t L_16 = V_1;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_002a;
		}
	}
	{
		// return tempRR.ToArray();
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_18 = __this->___tempRR_131;
		NullCheck(L_18);
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_19;
		L_19 = List_1_ToArray_mB524B909209E02C6B5202568C4006AF3CA71EFA0(L_18, List_1_ToArray_mB524B909209E02C6B5202568C4006AF3CA71EFA0_RuntimeMethod_var);
		return L_19;
	}
}
// UnityEngine.Renderer[] HighlightPlus.HighlightEffect::FindRenderersWithLayerInChildren(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* HighlightEffect_FindRenderersWithLayerInChildren_mD4FB6FA57F09F114B453108F0BCB120EB115D6FA (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB524B909209E02C6B5202568C4006AF3CA71EFA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* V_0 = NULL;
	int32_t V_1 = 0;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_2 = NULL;
	{
		// Renderer[] rr = target.GetComponentsInChildren<Renderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_72;
		NullCheck(L_0);
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_1;
		L_1 = Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7(L_0, Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m35AC34F858BD2F34770712CD020AA0518D9409C7_RuntimeMethod_var);
		V_0 = L_1;
		// if (tempRR == null) {
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_2 = __this->___tempRR_131;
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		// tempRR = new List<Renderer>();
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_3 = (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*)il2cpp_codegen_object_new(List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE(L_3, List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE_RuntimeMethod_var);
		__this->___tempRR_131 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempRR_131), (void*)L_3);
		goto IL_002c;
	}

IL_0021:
	{
		// tempRR.Clear();
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_4 = __this->___tempRR_131;
		NullCheck(L_4);
		List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_inline(L_4, List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_RuntimeMethod_var);
	}

IL_002c:
	{
		// for (var i = 0; i < rr.Length; i++) {
		V_1 = 0;
		goto IL_005d;
	}

IL_0030:
	{
		// Renderer r = rr[i];
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		// if (((1 << r.gameObject.layer) & layer) != 0) {
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_9 = V_2;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_10, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_12 = ___layer0;
		int32_t L_13;
		L_13 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_12, NULL);
		if (!((int32_t)(((int32_t)(1<<((int32_t)(L_11&((int32_t)31)))))&L_13)))
		{
			goto IL_0059;
		}
	}
	{
		// tempRR.Add(r);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_14 = __this->___tempRR_131;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_15 = V_2;
		NullCheck(L_14);
		List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_inline(L_14, L_15, List_1_Add_mB608316C3D0F44AB60BB05CC6676E509D51F7AC2_RuntimeMethod_var);
	}

IL_0059:
	{
		// for (var i = 0; i < rr.Length; i++) {
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_005d:
	{
		// for (var i = 0; i < rr.Length; i++) {
		int32_t L_17 = V_1;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0030;
		}
	}
	{
		// return tempRR.ToArray();
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_19 = __this->___tempRR_131;
		NullCheck(L_19);
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_20;
		L_20 = List_1_ToArray_mB524B909209E02C6B5202568C4006AF3CA71EFA0(L_19, List_1_ToArray_mB524B909209E02C6B5202568C4006AF3CA71EFA0_RuntimeMethod_var);
		return L_20;
	}
}
// System.Void HighlightPlus.HighlightEffect::CheckGeometrySupportDependencies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_CheckGeometrySupportDependencies_m5D52A357287B32A694C66A6B946F7EA65B82310B (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D78359D3EB91DCF02FBACA94CE86EFF7C13709B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C4E7BC541B49713DD3B9DCB6A7BADB805172193);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DF57E2CA1BCDEE73B8DEB94F07709B9AF56526E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral348D6C19AE7049865399FB2019432FF81FC6D17D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F2D12F9C2C36614892D7B0101726115135AEFE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F4901345F295B883EB3E19E83AD9AB4BF9D000A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral685FD683BF750E957EF5AB6B84FA8272E2A5A74B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77369AA1F21D3E40777EC56F7D3566D72F1841B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7787202F7DDBAF6915C1C0FF217FB2B24C63264);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1690E6F93BECAFC30D9717621ABA2DA8C6F60AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE110C564279CEB504D276A2381974E7A196D5104);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF803724443C2AF40A3BE0ECD99E081EEE7DC4D13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDEC9C07A7A4C1154E034A4E3CE7368E730E6A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InitMaterial(ref fxMatMask, "HighlightPlus/Geometry/Mask");
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		HighlightEffect_InitMaterial_m41641602445EACD919BE6383A9200A8A63CB1470(__this, (&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___fxMatMask_78), _stringLiteral4F2D12F9C2C36614892D7B0101726115135AEFE0, NULL);
		// InitMaterial(ref fxMatGlowTemplate, "HighlightPlus/Geometry/Glow");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** L_0 = (&__this->___fxMatGlowTemplate_83);
		HighlightEffect_InitMaterial_m41641602445EACD919BE6383A9200A8A63CB1470(__this, L_0, _stringLiteral2DF57E2CA1BCDEE73B8DEB94F07709B9AF56526E, NULL);
		// if (fxMatGlowTemplate != null && useGPUInstancing) fxMatGlowTemplate.enableInstancing = true;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___fxMatGlowTemplate_83;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		bool L_3 = __this->___useGPUInstancing_118;
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		// if (fxMatGlowTemplate != null && useGPUInstancing) fxMatGlowTemplate.enableInstancing = true;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___fxMatGlowTemplate_83;
		NullCheck(L_4);
		Material_set_enableInstancing_m84BA72A28BCFE94B50535BDE410A539A7CD7AF80(L_4, (bool)1, NULL);
	}

IL_0043:
	{
		// InitMaterial(ref fxMatInnerGlow, "HighlightPlus/Geometry/InnerGlow");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** L_5 = (&__this->___fxMatInnerGlow_84);
		HighlightEffect_InitMaterial_m41641602445EACD919BE6383A9200A8A63CB1470(__this, L_5, _stringLiteral0D78359D3EB91DCF02FBACA94CE86EFF7C13709B, NULL);
		// InitMaterial(ref fxMatOutlineTemplate, "HighlightPlus/Geometry/Outline");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** L_6 = (&__this->___fxMatOutlineTemplate_85);
		HighlightEffect_InitMaterial_m41641602445EACD919BE6383A9200A8A63CB1470(__this, L_6, _stringLiteral2C4E7BC541B49713DD3B9DCB6A7BADB805172193, NULL);
		// if (fxMatOutlineTemplate != null && useGPUInstancing) fxMatOutlineTemplate.enableInstancing = true;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___fxMatOutlineTemplate_85;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0087;
		}
	}
	{
		bool L_9 = __this->___useGPUInstancing_118;
		if (!L_9)
		{
			goto IL_0087;
		}
	}
	{
		// if (fxMatOutlineTemplate != null && useGPUInstancing) fxMatOutlineTemplate.enableInstancing = true;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = __this->___fxMatOutlineTemplate_85;
		NullCheck(L_10);
		Material_set_enableInstancing_m84BA72A28BCFE94B50535BDE410A539A7CD7AF80(L_10, (bool)1, NULL);
	}

IL_0087:
	{
		// InitMaterial(ref fxMatOverlay, "HighlightPlus/Geometry/Overlay");
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		HighlightEffect_InitMaterial_m41641602445EACD919BE6383A9200A8A63CB1470(__this, (&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___fxMatOverlay_81), _stringLiteralC7787202F7DDBAF6915C1C0FF217FB2B24C63264, NULL);
		// InitMaterial(ref fxMatSeeThrough, "HighlightPlus/Geometry/SeeThrough");
		HighlightEffect_InitMaterial_m41641602445EACD919BE6383A9200A8A63CB1470(__this, (&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___fxMatSeeThrough_80), _stringLiteral4F4901345F295B883EB3E19E83AD9AB4BF9D000A, NULL);
		// InitMaterial(ref fxMatTarget, "HighlightPlus/Geometry/Target");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** L_11 = (&__this->___fxMatTarget_86);
		HighlightEffect_InitMaterial_m41641602445EACD919BE6383A9200A8A63CB1470(__this, L_11, _stringLiteralD1690E6F93BECAFC30D9717621ABA2DA8C6F60AF, NULL);
		// InitMaterial(ref fxMatComposeGlow, "HighlightPlus/Geometry/ComposeGlow");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** L_12 = (&__this->___fxMatComposeGlow_87);
		HighlightEffect_InitMaterial_m41641602445EACD919BE6383A9200A8A63CB1470(__this, L_12, _stringLiteralFDEC9C07A7A4C1154E034A4E3CE7368E730E6A70, NULL);
		// InitMaterial(ref fxMatComposeOutline, "HighlightPlus/Geometry/ComposeOutline");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** L_13 = (&__this->___fxMatComposeOutline_88);
		HighlightEffect_InitMaterial_m41641602445EACD919BE6383A9200A8A63CB1470(__this, L_13, _stringLiteralE110C564279CEB504D276A2381974E7A196D5104, NULL);
		// InitMaterial(ref fxMatSolidColor, "HighlightPlus/Geometry/SolidColor");
		HighlightEffect_InitMaterial_m41641602445EACD919BE6383A9200A8A63CB1470(__this, (&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___fxMatSolidColor_79), _stringLiteralF803724443C2AF40A3BE0ECD99E081EEE7DC4D13, NULL);
		// InitMaterial(ref fxMatBlurGlow, "HighlightPlus/Geometry/BlurGlow");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** L_14 = (&__this->___fxMatBlurGlow_89);
		HighlightEffect_InitMaterial_m41641602445EACD919BE6383A9200A8A63CB1470(__this, L_14, _stringLiteral348D6C19AE7049865399FB2019432FF81FC6D17D, NULL);
		// InitMaterial(ref fxMatBlurOutline, "HighlightPlus/Geometry/BlurOutline");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** L_15 = (&__this->___fxMatBlurOutline_90);
		HighlightEffect_InitMaterial_m41641602445EACD919BE6383A9200A8A63CB1470(__this, L_15, _stringLiteral685FD683BF750E957EF5AB6B84FA8272E2A5A74B, NULL);
		// InitMaterial(ref fxMatClearStencil, "HighlightPlus/ClearStencil");
		HighlightEffect_InitMaterial_m41641602445EACD919BE6383A9200A8A63CB1470(__this, (&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___fxMatClearStencil_82), _stringLiteral77369AA1F21D3E40777EC56F7D3566D72F1841B3, NULL);
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::CheckCommandBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_CheckCommandBuffers_mCE9F65BA168348543B882E93ABF1A38EE3E6A3F8 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74792F483F57373C14CC24DA7B9C0A5DE0F6F50B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB38367465F760B367A32071218C3C5CE8D15077C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAC5184F954A065399561E210B9EA8BCB130F8AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDB8B65FA045F3C6E71807EED7435224B8B69BFE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (cbHighlight == null) {
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = __this->___cbHighlight_96;
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		// cbHighlight = new CommandBuffer();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_1 = (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*)il2cpp_codegen_object_new(CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CommandBuffer__ctor_m9445F1606331B732FCA393591F3E230714FD5FF4(L_1, NULL);
		__this->___cbHighlight_96 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cbHighlight_96), (void*)L_1);
		// cbHighlight.name = "Highlight Plus for " + name;
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_2 = __this->___cbHighlight_96;
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralBAC5184F954A065399561E210B9EA8BCB130F8AE, L_3, NULL);
		NullCheck(L_2);
		CommandBuffer_set_name_mEC83B7FE28D6817A36A8B894A661D6D217488965(L_2, L_4, NULL);
	}

IL_002e:
	{
		// if (cbSeeThrough == null) {
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_5 = __this->___cbSeeThrough_97;
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		// cbSeeThrough = new CommandBuffer();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_6 = (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*)il2cpp_codegen_object_new(CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		CommandBuffer__ctor_m9445F1606331B732FCA393591F3E230714FD5FF4(L_6, NULL);
		__this->___cbSeeThrough_97 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cbSeeThrough_97), (void*)L_6);
		// cbSeeThrough.name = "See Through";
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_7 = __this->___cbSeeThrough_97;
		NullCheck(L_7);
		CommandBuffer_set_name_mEC83B7FE28D6817A36A8B894A661D6D217488965(L_7, _stringLiteralEDB8B65FA045F3C6E71807EED7435224B8B69BFE, NULL);
	}

IL_0051:
	{
		// if (cbOverlay == null) {
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_8 = __this->___cbOverlay_98;
		if (L_8)
		{
			goto IL_0074;
		}
	}
	{
		// cbOverlay = new CommandBuffer();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_9 = (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*)il2cpp_codegen_object_new(CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		CommandBuffer__ctor_m9445F1606331B732FCA393591F3E230714FD5FF4(L_9, NULL);
		__this->___cbOverlay_98 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cbOverlay_98), (void*)L_9);
		// cbOverlay.name = "Overlay";
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_10 = __this->___cbOverlay_98;
		NullCheck(L_10);
		CommandBuffer_set_name_mEC83B7FE28D6817A36A8B894A661D6D217488965(L_10, _stringLiteralB38367465F760B367A32071218C3C5CE8D15077C, NULL);
	}

IL_0074:
	{
		// if (cbInnerGlow == null) {
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_11 = __this->___cbInnerGlow_99;
		if (L_11)
		{
			goto IL_0097;
		}
	}
	{
		// cbInnerGlow = new CommandBuffer();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_12 = (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*)il2cpp_codegen_object_new(CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		CommandBuffer__ctor_m9445F1606331B732FCA393591F3E230714FD5FF4(L_12, NULL);
		__this->___cbInnerGlow_99 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cbInnerGlow_99), (void*)L_12);
		// cbInnerGlow.name = "Inner Glow";
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_13 = __this->___cbInnerGlow_99;
		NullCheck(L_13);
		CommandBuffer_set_name_mEC83B7FE28D6817A36A8B894A661D6D217488965(L_13, _stringLiteral74792F483F57373C14CC24DA7B9C0A5DE0F6F50B, NULL);
	}

IL_0097:
	{
		// }
		return;
	}
}
// UnityEngine.Material[] HighlightPlus.HighlightEffect::Fork(UnityEngine.Material,UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* HighlightEffect_Fork_m2D8F3EEA181B94445C551405BCD2F2524F134D40 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat0, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC1DC863B344E1F38257F041D70495B706A5FCBE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (mesh == null)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___mesh1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return null;
		return (MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D*)NULL;
	}

IL_000b:
	{
		// int count = mesh.subMeshCount;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = ___mesh1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B(L_2, NULL);
		V_0 = L_3;
		// Material[] mm = new Material[count];
		int32_t L_4 = V_0;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_5 = (MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D*)(MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D*)SZArrayNew(MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// for (int k = 0; k < count; k++) {
		V_2 = 0;
		goto IL_002a;
	}

IL_001d:
	{
		// mm[k] = Instantiate<Material>(mat);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_6 = V_1;
		int32_t L_7 = V_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = ___mat0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Object_Instantiate_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC1DC863B344E1F38257F041D70495B706A5FCBE4(L_8, Object_Instantiate_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC1DC863B344E1F38257F041D70495B706A5FCBE4_RuntimeMethod_var);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)L_9);
		// for (int k = 0; k < count; k++) {
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002a:
	{
		// for (int k = 0; k < count; k++) {
		int32_t L_11 = V_2;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001d;
		}
	}
	{
		// return mm;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_13 = V_1;
		return L_13;
	}
}
// System.Void HighlightPlus.HighlightEffect::UpdateMaterialProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_UpdateMaterialProperties_m207F5DECD7AB1E89B3EB08F4F23E2924CEC79BFA (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m301E95E824CB214DD0BA6D04221CE97B30BE9ACD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17E861409735E76469AAA432AC85057B52A0546D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20205C80F44E832330753E566D890CA7994A43F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral302B7CA4FEA9A905B76ADACDB7E584B9F385C54D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36AF1BE80C97B2D83C812C7AAB43703DAA26B715);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39E3629B886CB412720ADA081113F5133F78CE75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EF0244AAB3ACE4C466D87590257757244FE3554);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B399F095CF9ED25677ABDF72E009C797C083D21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67BEC592386C17C68CF044FFB14169A1073AC7EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F8E51D85E067917148A712F8E56CF44F8E30C4E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A6D6EF533746C6F0884C39238B4ED3D27DC28B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral815F9B82280FB931D808B67ED0F0A9F3165BC88B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85CBB0087B6D1D3A66165EDFA153AEF9933267AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E90A4CCFA75561F75488FC4B2DFA99A3431C1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral963825F4E386826F5183358E6D6875214068ED50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A0E07956661BE92156BA01A49D3BE4CA8774CD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4F78CE90CE16BABB60B82B9B7E3B20575EE5183);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD585E57680D3C1E5598B6C5D183D469B6AA2C913);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE87CFD8323D21F3055725F0A2C033CBBD0F74888);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC47B489AF3EC18C22208208283F839984ACE798);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_3 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_7 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_9;
	memset((&V_9), 0, sizeof(V_9));
	float V_10 = 0.0f;
	int32_t V_11 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_12 = NULL;
	int32_t V_13 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_14 = NULL;
	int32_t V_15 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_16 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_17 = NULL;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* V_18 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_19 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_20 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_21 = NULL;
	HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* G_B31_0 = NULL;
	HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* G_B30_0 = NULL;
	int32_t G_B32_0 = 0;
	HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* G_B32_1 = NULL;
	HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* G_B34_0 = NULL;
	HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* G_B33_0 = NULL;
	int32_t G_B35_0 = 0;
	HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* G_B35_1 = NULL;
	HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* G_B37_0 = NULL;
	HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* G_B36_0 = NULL;
	int32_t G_B38_0 = 0;
	HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* G_B38_1 = NULL;
	String_t* G_B45_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B45_1 = NULL;
	String_t* G_B44_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B44_1 = NULL;
	int32_t G_B46_0 = 0;
	String_t* G_B46_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B46_2 = NULL;
	String_t* G_B50_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B50_1 = NULL;
	String_t* G_B49_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B49_1 = NULL;
	int32_t G_B51_0 = 0;
	String_t* G_B51_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B51_2 = NULL;
	int32_t G_B63_0 = 0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* G_B66_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B69_0;
	memset((&G_B69_0), 0, sizeof(G_B69_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B72_0;
	memset((&G_B72_0), 0, sizeof(G_B72_0));
	float G_B75_0 = 0.0f;
	String_t* G_B78_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B78_1 = NULL;
	String_t* G_B77_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B77_1 = NULL;
	int32_t G_B79_0 = 0;
	String_t* G_B79_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B79_2 = NULL;
	String_t* G_B81_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B81_1 = NULL;
	String_t* G_B80_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B80_1 = NULL;
	float G_B82_0 = 0.0f;
	String_t* G_B82_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B82_2 = NULL;
	String_t* G_B90_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B90_1 = NULL;
	String_t* G_B89_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B89_1 = NULL;
	float G_B91_0 = 0.0f;
	String_t* G_B91_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B91_2 = NULL;
	float G_B93_0 = 0.0f;
	float G_B93_1 = 0.0f;
	String_t* G_B93_2 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B93_3 = NULL;
	float G_B92_0 = 0.0f;
	float G_B92_1 = 0.0f;
	String_t* G_B92_2 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B92_3 = NULL;
	int32_t G_B94_0 = 0;
	float G_B94_1 = 0.0f;
	float G_B94_2 = 0.0f;
	String_t* G_B94_3 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B94_4 = NULL;
	String_t* G_B96_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B96_1 = NULL;
	String_t* G_B95_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B95_1 = NULL;
	int32_t G_B97_0 = 0;
	String_t* G_B97_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B97_2 = NULL;
	String_t* G_B99_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B99_1 = NULL;
	String_t* G_B98_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B98_1 = NULL;
	float G_B100_0 = 0.0f;
	String_t* G_B100_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B100_2 = NULL;
	String_t* G_B102_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B102_1 = NULL;
	String_t* G_B101_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B101_1 = NULL;
	int32_t G_B103_0 = 0;
	String_t* G_B103_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B103_2 = NULL;
	String_t* G_B128_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B128_1 = NULL;
	String_t* G_B127_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B127_1 = NULL;
	int32_t G_B129_0 = 0;
	String_t* G_B129_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B129_2 = NULL;
	String_t* G_B161_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B161_1 = NULL;
	String_t* G_B160_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B160_1 = NULL;
	int32_t G_B162_0 = 0;
	String_t* G_B162_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B162_2 = NULL;
	{
		// if (rms == null)
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_0 = __this->___rms_70;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (ignore) {
		bool L_1 = __this->___ignore_15;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// _highlighted = false;
		__this->____highlighted_16 = (bool)0;
	}

IL_0018:
	{
		// Color seeThroughTintColor = this.seeThroughTintColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___seeThroughTintColor_68;
		V_0 = L_2;
		// seeThroughTintColor.a = this.seeThroughTintAlpha;
		float L_3 = __this->___seeThroughTintAlpha_67;
		(&V_0)->___a_3 = L_3;
		// if (lastOutlineVisibility != outlineVisibility) {
		int32_t L_4 = __this->___lastOutlineVisibility_112;
		int32_t L_5 = __this->___outlineVisibility_32;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0064;
		}
	}
	{
		// if (glowQuality == QualityLevel.Highest && outlineQuality == QualityLevel.Highest) {
		int32_t L_6 = __this->___glowQuality_37;
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_7 = __this->___outlineQuality_30;
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_0058;
		}
	}
	{
		// glowVisibility = outlineVisibility;
		int32_t L_8 = __this->___outlineVisibility_32;
		__this->___glowVisibility_44 = L_8;
	}

IL_0058:
	{
		// lastOutlineVisibility = outlineVisibility;
		int32_t L_9 = __this->___outlineVisibility_32;
		__this->___lastOutlineVisibility_112 = L_9;
	}

IL_0064:
	{
		// if (outlineWidth < 0) {
		float L_10 = __this->___outlineWidth_29;
		if ((!(((float)L_10) < ((float)(0.0f)))))
		{
			goto IL_007c;
		}
	}
	{
		// outlineWidth = 0;
		__this->___outlineWidth_29 = (0.0f);
	}

IL_007c:
	{
		// if (outlineQuality == QualityLevel.Medium) {
		int32_t L_11 = __this->___outlineQuality_30;
		if ((!(((uint32_t)L_11) == ((uint32_t)3))))
		{
			goto IL_0095;
		}
	}
	{
		// outlineOffsetsMin = 4; outlineOffsetsMax = 7;
		__this->___outlineOffsetsMin_125 = 4;
		// outlineOffsetsMin = 4; outlineOffsetsMax = 7;
		__this->___outlineOffsetsMax_126 = 7;
		goto IL_00be;
	}

IL_0095:
	{
		// } else if (outlineQuality == QualityLevel.High) {
		int32_t L_12 = __this->___outlineQuality_30;
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_00ae;
		}
	}
	{
		// outlineOffsetsMin = 0; outlineOffsetsMax = 7;
		__this->___outlineOffsetsMin_125 = 0;
		// outlineOffsetsMin = 0; outlineOffsetsMax = 7;
		__this->___outlineOffsetsMax_126 = 7;
		goto IL_00be;
	}

IL_00ae:
	{
		// outlineOffsetsMin = outlineOffsetsMax = 0;
		int32_t L_13 = 0;
		V_1 = L_13;
		__this->___outlineOffsetsMax_126 = L_13;
		int32_t L_14 = V_1;
		__this->___outlineOffsetsMin_125 = L_14;
	}

IL_00be:
	{
		// if (glowWidth < 0) {
		float L_15 = __this->___glowWidth_36;
		if ((!(((float)L_15) < ((float)(0.0f)))))
		{
			goto IL_00d6;
		}
	}
	{
		// glowWidth = 0;
		__this->___glowWidth_36 = (0.0f);
	}

IL_00d6:
	{
		// if (glowQuality == QualityLevel.Medium) {
		int32_t L_16 = __this->___glowQuality_37;
		if ((!(((uint32_t)L_16) == ((uint32_t)3))))
		{
			goto IL_00ef;
		}
	}
	{
		// glowOffsetsMin = 4; glowOffsetsMax = 7;
		__this->___glowOffsetsMin_127 = 4;
		// glowOffsetsMin = 4; glowOffsetsMax = 7;
		__this->___glowOffsetsMax_128 = 7;
		goto IL_0118;
	}

IL_00ef:
	{
		// } else if (glowQuality == QualityLevel.High) {
		int32_t L_17 = __this->___glowQuality_37;
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_0108;
		}
	}
	{
		// glowOffsetsMin = 0; glowOffsetsMax = 7;
		__this->___glowOffsetsMin_127 = 0;
		// glowOffsetsMin = 0; glowOffsetsMax = 7;
		__this->___glowOffsetsMax_128 = 7;
		goto IL_0118;
	}

IL_0108:
	{
		// glowOffsetsMin = glowOffsetsMax = 0;
		int32_t L_18 = 0;
		V_1 = L_18;
		__this->___glowOffsetsMax_128 = L_18;
		int32_t L_19 = V_1;
		__this->___glowOffsetsMin_127 = L_19;
	}

IL_0118:
	{
		// if (overlay < overlayMinIntensity) {
		float L_20 = __this->___overlay_22;
		float L_21 = __this->___overlayMinIntensity_25;
		if ((!(((float)L_20) < ((float)L_21))))
		{
			goto IL_0132;
		}
	}
	{
		// overlay = overlayMinIntensity;
		float L_22 = __this->___overlayMinIntensity_25;
		__this->___overlay_22 = L_22;
	}

IL_0132:
	{
		// if (targetFXTransitionDuration <= 0) {
		float L_23 = __this->___targetFXTransitionDuration_59;
		if ((!(((float)L_23) <= ((float)(0.0f)))))
		{
			goto IL_014a;
		}
	}
	{
		// targetFXTransitionDuration = 0.0001f;
		__this->___targetFXTransitionDuration_59 = (9.99999975E-05f);
	}

IL_014a:
	{
		// if (targetFXStayDuration <= 0) {
		float L_24 = __this->___targetFXStayDuration_60;
		if ((!(((float)L_24) <= ((float)(0.0f)))))
		{
			goto IL_0162;
		}
	}
	{
		// targetFXStayDuration = 0.0001f;
		__this->___targetFXStayDuration_60 = (9.99999975E-05f);
	}

IL_0162:
	{
		// useSmoothGlow = glow > 0 && glowQuality == QualityLevel.Highest;
		float L_25 = __this->___glow_35;
		G_B30_0 = __this;
		if ((!(((float)L_25) > ((float)(0.0f)))))
		{
			G_B31_0 = __this;
			goto IL_017b;
		}
	}
	{
		int32_t L_26 = __this->___glowQuality_37;
		G_B32_0 = ((((int32_t)L_26) == ((int32_t)2))? 1 : 0);
		G_B32_1 = G_B30_0;
		goto IL_017c;
	}

IL_017b:
	{
		G_B32_0 = 0;
		G_B32_1 = G_B31_0;
	}

IL_017c:
	{
		NullCheck(G_B32_1);
		G_B32_1->___useSmoothGlow_115 = (bool)G_B32_0;
		// useSmoothOutline = outline > 0 && outlineQuality == QualityLevel.Highest;
		float L_27 = __this->___outline_27;
		G_B33_0 = __this;
		if ((!(((float)L_27) > ((float)(0.0f)))))
		{
			G_B34_0 = __this;
			goto IL_019a;
		}
	}
	{
		int32_t L_28 = __this->___outlineQuality_30;
		G_B35_0 = ((((int32_t)L_28) == ((int32_t)2))? 1 : 0);
		G_B35_1 = G_B33_0;
		goto IL_019b;
	}

IL_019a:
	{
		G_B35_0 = 0;
		G_B35_1 = G_B34_0;
	}

IL_019b:
	{
		NullCheck(G_B35_1);
		G_B35_1->___useSmoothOutline_116 = (bool)G_B35_0;
		// useSmoothBlend = useSmoothGlow || useSmoothOutline;
		bool L_29 = __this->___useSmoothGlow_115;
		G_B36_0 = __this;
		if (L_29)
		{
			G_B37_0 = __this;
			goto IL_01b1;
		}
	}
	{
		bool L_30 = __this->___useSmoothOutline_116;
		G_B38_0 = ((int32_t)(L_30));
		G_B38_1 = G_B36_0;
		goto IL_01b2;
	}

IL_01b1:
	{
		G_B38_0 = 1;
		G_B38_1 = G_B37_0;
	}

IL_01b2:
	{
		NullCheck(G_B38_1);
		G_B38_1->___useSmoothBlend_117 = (bool)G_B38_0;
		// if (useSmoothBlend) {
		bool L_31 = __this->___useSmoothBlend_117;
		if (!L_31)
		{
			goto IL_01db;
		}
	}
	{
		// if (useSmoothGlow && useSmoothOutline) {
		bool L_32 = __this->___useSmoothGlow_115;
		if (!L_32)
		{
			goto IL_01db;
		}
	}
	{
		bool L_33 = __this->___useSmoothOutline_116;
		if (!L_33)
		{
			goto IL_01db;
		}
	}
	{
		// outlineVisibility = glowVisibility;
		int32_t L_34 = __this->___glowVisibility_44;
		__this->___outlineVisibility_32 = L_34;
	}

IL_01db:
	{
		// if (useSmoothGlow) {
		bool L_35 = __this->___useSmoothGlow_115;
		if (!L_35)
		{
			goto IL_0233;
		}
	}
	{
		// fxMatComposeGlow.SetInt("_Cull", cullBackFaces ? (int)CullMode.Back : (int)CullMode.Off);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_36 = __this->___fxMatComposeGlow_87;
		bool L_37 = __this->___cullBackFaces_10;
		G_B44_0 = _stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22;
		G_B44_1 = L_36;
		if (L_37)
		{
			G_B45_0 = _stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22;
			G_B45_1 = L_36;
			goto IL_01f9;
		}
	}
	{
		G_B46_0 = 0;
		G_B46_1 = G_B44_0;
		G_B46_2 = G_B44_1;
		goto IL_01fa;
	}

IL_01f9:
	{
		G_B46_0 = 2;
		G_B46_1 = G_B45_0;
		G_B46_2 = G_B45_1;
	}

IL_01fa:
	{
		NullCheck(G_B46_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(G_B46_2, G_B46_1, G_B46_0, NULL);
		// fxMatBlurGlow.SetFloat("_BlurScale", glowWidth / glowDownsampling);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_38 = __this->___fxMatBlurGlow_89;
		float L_39 = __this->___glowWidth_36;
		int32_t L_40 = __this->___glowDownsampling_38;
		NullCheck(L_38);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_38, _stringLiteral963825F4E386826F5183358E6D6875214068ED50, ((float)(L_39/((float)L_40))), NULL);
		// fxMatBlurGlow.SetFloat("_Speed", glowAnimationSpeed);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___fxMatBlurGlow_89;
		float L_42 = __this->___glowAnimationSpeed_43;
		NullCheck(L_41);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_41, _stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, L_42, NULL);
	}

IL_0233:
	{
		// if (useSmoothOutline) {
		bool L_43 = __this->___useSmoothOutline_116;
		if (!L_43)
		{
			goto IL_0275;
		}
	}
	{
		// fxMatComposeOutline.SetInt("_Cull", cullBackFaces ? (int)CullMode.Back : (int)CullMode.Off);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_44 = __this->___fxMatComposeOutline_88;
		bool L_45 = __this->___cullBackFaces_10;
		G_B49_0 = _stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22;
		G_B49_1 = L_44;
		if (L_45)
		{
			G_B50_0 = _stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22;
			G_B50_1 = L_44;
			goto IL_0251;
		}
	}
	{
		G_B51_0 = 0;
		G_B51_1 = G_B49_0;
		G_B51_2 = G_B49_1;
		goto IL_0252;
	}

IL_0251:
	{
		G_B51_0 = 2;
		G_B51_1 = G_B50_0;
		G_B51_2 = G_B50_1;
	}

IL_0252:
	{
		NullCheck(G_B51_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(G_B51_2, G_B51_1, G_B51_0, NULL);
		// fxMatBlurOutline.SetFloat("_BlurScale", outlineWidth / outlineDownsampling);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_46 = __this->___fxMatBlurOutline_90;
		float L_47 = __this->___outlineWidth_29;
		int32_t L_48 = __this->___outlineDownsampling_31;
		NullCheck(L_46);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_46, _stringLiteral963825F4E386826F5183358E6D6875214068ED50, ((float)(L_47/((float)L_48))), NULL);
	}

IL_0275:
	{
		// for (int k = 0; k < rmsCount; k++) {
		V_2 = 0;
		goto IL_0a87;
	}

IL_027c:
	{
		// if (rms[k].mesh != null) {
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_49 = __this->___rms_70;
		int32_t L_50 = V_2;
		NullCheck(L_49);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___mesh_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_52;
		L_52 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_51, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_52)
		{
			goto IL_0a83;
		}
	}
	{
		// Renderer renderer = rms[k].renderer;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_53 = __this->___rms_70;
		int32_t L_54 = V_2;
		NullCheck(L_53);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_55 = ((L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_54)))->___renderer_5;
		V_3 = L_55;
		// if (renderer == null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_56 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_57;
		L_57 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_56, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_57)
		{
			goto IL_0a83;
		}
	}
	{
		// Material mat = null;
		V_4 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		// if (renderer.sharedMaterials != null && renderer.sharedMaterials.Length > 0) {
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_58 = V_3;
		NullCheck(L_58);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_59;
		L_59 = Renderer_get_sharedMaterials_m0B61AFD8EDA35A70C796FFB2F28BB62380051ABF(L_58, NULL);
		if (!L_59)
		{
			goto IL_02d4;
		}
	}
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_60 = V_3;
		NullCheck(L_60);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_61;
		L_61 = Renderer_get_sharedMaterials_m0B61AFD8EDA35A70C796FFB2F28BB62380051ABF(L_60, NULL);
		NullCheck(L_61);
		if (!(((RuntimeArray*)L_61)->max_length))
		{
			goto IL_02d4;
		}
	}
	{
		// mat = renderer.sharedMaterials[0];
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_62 = V_3;
		NullCheck(L_62);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_63;
		L_63 = Renderer_get_sharedMaterials_m0B61AFD8EDA35A70C796FFB2F28BB62380051ABF(L_62, NULL);
		NullCheck(L_63);
		int32_t L_64 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		V_4 = L_65;
	}

IL_02d4:
	{
		// bool hasTexture = mat != null && (mat.HasProperty("_MainTex") || mat.HasProperty("_BaseMap"));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_66 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_67;
		L_67 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_66, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_67)
		{
			goto IL_02fd;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_68 = V_4;
		NullCheck(L_68);
		bool L_69;
		L_69 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_68, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, NULL);
		if (L_69)
		{
			goto IL_02fa;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_70 = V_4;
		NullCheck(L_70);
		bool L_71;
		L_71 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_70, _stringLiteral67BEC592386C17C68CF044FFB14169A1073AC7EB, NULL);
		G_B63_0 = ((int32_t)(L_71));
		goto IL_02fe;
	}

IL_02fa:
	{
		G_B63_0 = 1;
		goto IL_02fe;
	}

IL_02fd:
	{
		G_B63_0 = 0;
	}

IL_02fe:
	{
		V_5 = (bool)G_B63_0;
		// bool useAlphaTest = alphaCutOff > 0 && hasTexture;
		float L_72 = __this->___alphaCutOff_9;
		bool L_73 = V_5;
		V_6 = (bool)((int32_t)(((((float)L_72) > ((float)(0.0f)))? 1 : 0)&(int32_t)L_73));
		// Texture matTexture = hasTexture ? mat.mainTexture : null;
		bool L_74 = V_5;
		if (L_74)
		{
			goto IL_0319;
		}
	}
	{
		G_B66_0 = ((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)(NULL));
		goto IL_0320;
	}

IL_0319:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_75 = V_4;
		NullCheck(L_75);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_76;
		L_76 = Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D(L_75, NULL);
		G_B66_0 = L_76;
	}

IL_0320:
	{
		V_7 = G_B66_0;
		// Vector2 matTextureOffset = hasTexture ? mat.mainTextureOffset : Vector2.zero;
		bool L_77 = V_5;
		if (L_77)
		{
			goto IL_032d;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_78;
		L_78 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		G_B69_0 = L_78;
		goto IL_0334;
	}

IL_032d:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_79 = V_4;
		NullCheck(L_79);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_80;
		L_80 = Material_get_mainTextureOffset_m642934E0FF835323FCAFE2F43E314722E8B6A439(L_79, NULL);
		G_B69_0 = L_80;
	}

IL_0334:
	{
		V_8 = G_B69_0;
		// Vector2 matTextureScale = hasTexture ? mat.mainTextureScale : Vector2.one;
		bool L_81 = V_5;
		if (L_81)
		{
			goto IL_0341;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82;
		L_82 = Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline(NULL);
		G_B72_0 = L_82;
		goto IL_0348;
	}

IL_0341:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_83 = V_4;
		NullCheck(L_83);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_84;
		L_84 = Material_get_mainTextureScale_mF28E905E1331B3F6AB145193026A1729E17BE7ED(L_83, NULL);
		G_B72_0 = L_84;
	}

IL_0348:
	{
		V_9 = G_B72_0;
		// float scaledOutlineWidth = outlineQuality.UsesMultipleOffsets() ? 0f : outlineWidth / 100f;
		int32_t L_85 = __this->___outlineQuality_30;
		bool L_86;
		L_86 = QualityLevelExtensions_UsesMultipleOffsets_mC4531683604025C304753CBBE3AD5A72388F28D5(L_85, NULL);
		if (L_86)
		{
			goto IL_0365;
		}
	}
	{
		float L_87 = __this->___outlineWidth_29;
		G_B75_0 = ((float)(L_87/(100.0f)));
		goto IL_036a;
	}

IL_0365:
	{
		G_B75_0 = (0.0f);
	}

IL_036a:
	{
		V_10 = G_B75_0;
		// for (int m = 0; m < fxMatOutline.Length; m++) {
		V_11 = 0;
		goto IL_0444;
	}

IL_0374:
	{
		// Material fxMat = fxMatOutline[m];
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_88 = __this->___fxMatOutline_91;
		int32_t L_89 = V_11;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		V_12 = L_91;
		// fxMat.SetFloat("_OutlineWidth", scaledOutlineWidth);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92 = V_12;
		float L_93 = V_10;
		NullCheck(L_92);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_92, _stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257, L_93, NULL);
		// fxMat.SetVector("_OutlineDirection", Vector3.zero);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_94 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_96;
		L_96 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_95, NULL);
		NullCheck(L_94);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(L_94, _stringLiteralFC47B489AF3EC18C22208208283F839984ACE798, L_96, NULL);
		// fxMat.SetInt("_OutlineZTest", GetZTestValue(outlineVisibility));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_97 = V_12;
		int32_t L_98 = __this->___outlineVisibility_32;
		int32_t L_99;
		L_99 = HighlightEffect_GetZTestValue_m649B1407B452B08B8F6326CDAF831529A46EF6D7(__this, L_98, NULL);
		NullCheck(L_97);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_97, _stringLiteralD585E57680D3C1E5598B6C5D183D469B6AA2C913, L_99, NULL);
		// fxMat.SetInt("_Cull", cullBackFaces ? (int)CullMode.Back : (int)CullMode.Off);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_100 = V_12;
		bool L_101 = __this->___cullBackFaces_10;
		G_B77_0 = _stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22;
		G_B77_1 = L_100;
		if (L_101)
		{
			G_B78_0 = _stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22;
			G_B78_1 = L_100;
			goto IL_03cd;
		}
	}
	{
		G_B79_0 = 0;
		G_B79_1 = G_B77_0;
		G_B79_2 = G_B77_1;
		goto IL_03ce;
	}

IL_03cd:
	{
		G_B79_0 = 2;
		G_B79_1 = G_B78_0;
		G_B79_2 = G_B78_1;
	}

IL_03ce:
	{
		NullCheck(G_B79_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(G_B79_2, G_B79_1, G_B79_0, NULL);
		// fxMat.SetFloat("_ConstantWidth", constantWidth ? 1.0f : 0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_102 = V_12;
		bool L_103 = __this->___constantWidth_20;
		G_B80_0 = _stringLiteral17E861409735E76469AAA432AC85057B52A0546D;
		G_B80_1 = L_102;
		if (L_103)
		{
			G_B81_0 = _stringLiteral17E861409735E76469AAA432AC85057B52A0546D;
			G_B81_1 = L_102;
			goto IL_03e9;
		}
	}
	{
		G_B82_0 = (0.0f);
		G_B82_1 = G_B80_0;
		G_B82_2 = G_B80_1;
		goto IL_03ee;
	}

IL_03e9:
	{
		G_B82_0 = (1.0f);
		G_B82_1 = G_B81_0;
		G_B82_2 = G_B81_1;
	}

IL_03ee:
	{
		NullCheck(G_B82_2);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(G_B82_2, G_B82_1, G_B82_0, NULL);
		// if (useAlphaTest) {
		bool L_104 = V_6;
		if (!L_104)
		{
			goto IL_0432;
		}
	}
	{
		// fxMat.mainTexture = matTexture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_105 = V_12;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_106 = V_7;
		NullCheck(L_105);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_105, L_106, NULL);
		// fxMat.mainTextureOffset = matTextureOffset;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_107 = V_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_108 = V_8;
		NullCheck(L_107);
		Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12(L_107, L_108, NULL);
		// fxMat.mainTextureScale = matTextureScale;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_109 = V_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_110 = V_9;
		NullCheck(L_109);
		Material_set_mainTextureScale_mABC2B4327CCDC6BB0E0EA72C6F29817400F56EF1(L_109, L_110, NULL);
		// fxMat.SetFloat(UNIFORM_CUTOFF, alphaCutOff);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_111 = V_12;
		float L_112 = __this->___alphaCutOff_9;
		NullCheck(L_111);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_111, _stringLiteral9A0E07956661BE92156BA01A49D3BE4CA8774CD5, L_112, NULL);
		// fxMat.EnableKeyword(SKW_ALPHACLIP);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_113 = V_12;
		NullCheck(L_113);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_113, _stringLiteral3EF0244AAB3ACE4C466D87590257757244FE3554, NULL);
		goto IL_043e;
	}

IL_0432:
	{
		// fxMat.DisableKeyword(SKW_ALPHACLIP);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_114 = V_12;
		NullCheck(L_114);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_114, _stringLiteral3EF0244AAB3ACE4C466D87590257757244FE3554, NULL);
	}

IL_043e:
	{
		// for (int m = 0; m < fxMatOutline.Length; m++) {
		int32_t L_115 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_0444:
	{
		// for (int m = 0; m < fxMatOutline.Length; m++) {
		int32_t L_116 = V_11;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_117 = __this->___fxMatOutline_91;
		NullCheck(L_117);
		if ((((int32_t)L_116) < ((int32_t)((int32_t)(((RuntimeArray*)L_117)->max_length)))))
		{
			goto IL_0374;
		}
	}
	{
		// for (int m = 0; m < fxMatGlow.Length; m++) {
		V_13 = 0;
		goto IL_0568;
	}

IL_045b:
	{
		// Material fxMat = fxMatGlow[m];
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_118 = __this->___fxMatGlow_92;
		int32_t L_119 = V_13;
		NullCheck(L_118);
		int32_t L_120 = L_119;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		V_14 = L_121;
		// fxMat.SetVector("_Glow2", new Vector3(outline > 0 ? outlineWidth / 100f : 0, glowAnimationSpeed, glowDithering ? 0 : 1));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_122 = V_14;
		float L_123 = __this->___outline_27;
		G_B89_0 = _stringLiteral815F9B82280FB931D808B67ED0F0A9F3165BC88B;
		G_B89_1 = L_122;
		if ((((float)L_123) > ((float)(0.0f))))
		{
			G_B90_0 = _stringLiteral815F9B82280FB931D808B67ED0F0A9F3165BC88B;
			G_B90_1 = L_122;
			goto IL_0481;
		}
	}
	{
		G_B91_0 = (0.0f);
		G_B91_1 = G_B89_0;
		G_B91_2 = G_B89_1;
		goto IL_048d;
	}

IL_0481:
	{
		float L_124 = __this->___outlineWidth_29;
		G_B91_0 = ((float)(L_124/(100.0f)));
		G_B91_1 = G_B90_0;
		G_B91_2 = G_B90_1;
	}

IL_048d:
	{
		float L_125 = __this->___glowAnimationSpeed_43;
		bool L_126 = __this->___glowDithering_40;
		G_B92_0 = L_125;
		G_B92_1 = G_B91_0;
		G_B92_2 = G_B91_1;
		G_B92_3 = G_B91_2;
		if (L_126)
		{
			G_B93_0 = L_125;
			G_B93_1 = G_B91_0;
			G_B93_2 = G_B91_1;
			G_B93_3 = G_B91_2;
			goto IL_049e;
		}
	}
	{
		G_B94_0 = 1;
		G_B94_1 = G_B92_0;
		G_B94_2 = G_B92_1;
		G_B94_3 = G_B92_2;
		G_B94_4 = G_B92_3;
		goto IL_049f;
	}

IL_049e:
	{
		G_B94_0 = 0;
		G_B94_1 = G_B93_0;
		G_B94_2 = G_B93_1;
		G_B94_3 = G_B93_2;
		G_B94_4 = G_B93_3;
	}

IL_049f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127;
		memset((&L_127), 0, sizeof(L_127));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_127), G_B94_2, G_B94_1, ((float)G_B94_0), /*hidden argument*/NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_128;
		L_128 = Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline(L_127, NULL);
		NullCheck(G_B94_4);
		Material_SetVector_m69444B8040D955821F241113446CC8713C9E12D1(G_B94_4, G_B94_3, L_128, NULL);
		// fxMat.SetInt("_GlowZTest", GetZTestValue(glowVisibility));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_129 = V_14;
		int32_t L_130 = __this->___glowVisibility_44;
		int32_t L_131;
		L_131 = HighlightEffect_GetZTestValue_m649B1407B452B08B8F6326CDAF831529A46EF6D7(__this, L_130, NULL);
		NullCheck(L_129);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_129, _stringLiteralE87CFD8323D21F3055725F0A2C033CBBD0F74888, L_131, NULL);
		// fxMat.SetInt("_Cull", cullBackFaces ? (int)CullMode.Back : (int)CullMode.Off);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_132 = V_14;
		bool L_133 = __this->___cullBackFaces_10;
		G_B95_0 = _stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22;
		G_B95_1 = L_132;
		if (L_133)
		{
			G_B96_0 = _stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22;
			G_B96_1 = L_132;
			goto IL_04d9;
		}
	}
	{
		G_B97_0 = 0;
		G_B97_1 = G_B95_0;
		G_B97_2 = G_B95_1;
		goto IL_04da;
	}

IL_04d9:
	{
		G_B97_0 = 2;
		G_B97_1 = G_B96_0;
		G_B97_2 = G_B96_1;
	}

IL_04da:
	{
		NullCheck(G_B97_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(G_B97_2, G_B97_1, G_B97_0, NULL);
		// fxMat.SetFloat("_ConstantWidth", constantWidth ? 1.0f : 0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_134 = V_14;
		bool L_135 = __this->___constantWidth_20;
		G_B98_0 = _stringLiteral17E861409735E76469AAA432AC85057B52A0546D;
		G_B98_1 = L_134;
		if (L_135)
		{
			G_B99_0 = _stringLiteral17E861409735E76469AAA432AC85057B52A0546D;
			G_B99_1 = L_134;
			goto IL_04f5;
		}
	}
	{
		G_B100_0 = (0.0f);
		G_B100_1 = G_B98_0;
		G_B100_2 = G_B98_1;
		goto IL_04fa;
	}

IL_04f5:
	{
		G_B100_0 = (1.0f);
		G_B100_1 = G_B99_0;
		G_B100_2 = G_B99_1;
	}

IL_04fa:
	{
		NullCheck(G_B100_2);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(G_B100_2, G_B100_1, G_B100_0, NULL);
		// fxMat.SetInt("_GlowStencilOp", glowBlendPasses ? (int)StencilOp.Keep : (int)StencilOp.Replace);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_136 = V_14;
		bool L_137 = __this->___glowBlendPasses_46;
		G_B101_0 = _stringLiteral87E90A4CCFA75561F75488FC4B2DFA99A3431C1B;
		G_B101_1 = L_136;
		if (L_137)
		{
			G_B102_0 = _stringLiteral87E90A4CCFA75561F75488FC4B2DFA99A3431C1B;
			G_B102_1 = L_136;
			goto IL_0511;
		}
	}
	{
		G_B103_0 = 2;
		G_B103_1 = G_B101_0;
		G_B103_2 = G_B101_1;
		goto IL_0512;
	}

IL_0511:
	{
		G_B103_0 = 0;
		G_B103_1 = G_B102_0;
		G_B103_2 = G_B102_1;
	}

IL_0512:
	{
		NullCheck(G_B103_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(G_B103_2, G_B103_1, G_B103_0, NULL);
		// if (useAlphaTest) {
		bool L_138 = V_6;
		if (!L_138)
		{
			goto IL_0556;
		}
	}
	{
		// fxMat.mainTexture = matTexture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_139 = V_14;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_140 = V_7;
		NullCheck(L_139);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_139, L_140, NULL);
		// fxMat.mainTextureOffset = matTextureOffset;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_141 = V_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_142 = V_8;
		NullCheck(L_141);
		Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12(L_141, L_142, NULL);
		// fxMat.mainTextureScale = matTextureScale;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_143 = V_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_144 = V_9;
		NullCheck(L_143);
		Material_set_mainTextureScale_mABC2B4327CCDC6BB0E0EA72C6F29817400F56EF1(L_143, L_144, NULL);
		// fxMat.SetFloat(UNIFORM_CUTOFF, alphaCutOff);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_145 = V_14;
		float L_146 = __this->___alphaCutOff_9;
		NullCheck(L_145);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_145, _stringLiteral9A0E07956661BE92156BA01A49D3BE4CA8774CD5, L_146, NULL);
		// fxMat.EnableKeyword(SKW_ALPHACLIP);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_147 = V_14;
		NullCheck(L_147);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_147, _stringLiteral3EF0244AAB3ACE4C466D87590257757244FE3554, NULL);
		goto IL_0562;
	}

IL_0556:
	{
		// fxMat.DisableKeyword(SKW_ALPHACLIP);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_148 = V_14;
		NullCheck(L_148);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_148, _stringLiteral3EF0244AAB3ACE4C466D87590257757244FE3554, NULL);
	}

IL_0562:
	{
		// for (int m = 0; m < fxMatGlow.Length; m++) {
		int32_t L_149 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_149, 1));
	}

IL_0568:
	{
		// for (int m = 0; m < fxMatGlow.Length; m++) {
		int32_t L_150 = V_13;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_151 = __this->___fxMatGlow_92;
		NullCheck(L_151);
		if ((((int32_t)L_150) < ((int32_t)((int32_t)(((RuntimeArray*)L_151)->max_length)))))
		{
			goto IL_045b;
		}
	}
	{
		// if (targetFX) {
		bool L_152 = __this->___targetFX_52;
		if (!L_152)
		{
			goto IL_05ae;
		}
	}
	{
		// if (targetFXTexture == null) {
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_153 = __this->___targetFXTexture_53;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_154;
		L_154 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_153, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_154)
		{
			goto IL_059d;
		}
	}
	{
		// targetFXTexture = Resources.Load<Texture2D>("HighlightPlus/target");
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_155;
		L_155 = Resources_Load_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m301E95E824CB214DD0BA6D04221CE97B30BE9ACD(_stringLiteral85CBB0087B6D1D3A66165EDFA153AEF9933267AD, Resources_Load_TisTexture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_m301E95E824CB214DD0BA6D04221CE97B30BE9ACD_RuntimeMethod_var);
		__this->___targetFXTexture_53 = L_155;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetFXTexture_53), (void*)L_155);
	}

IL_059d:
	{
		// fxMatTarget.mainTexture = targetFXTexture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_156 = __this->___fxMatTarget_86;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_157 = __this->___targetFXTexture_53;
		NullCheck(L_156);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_156, L_157, NULL);
	}

IL_05ae:
	{
		// for (int l = 0; l < rms[k].mesh.subMeshCount; l++) {
		V_15 = 0;
		goto IL_0a66;
	}

IL_05b6:
	{
		// if (((1 << l) & subMeshMask) == 0) continue;
		int32_t L_158 = V_15;
		int32_t L_159 = __this->___subMeshMask_21;
		if (!((int32_t)(((int32_t)(1<<((int32_t)(L_158&((int32_t)31)))))&L_159)))
		{
			goto IL_0a60;
		}
	}
	{
		// mat = null;
		V_4 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		// if (renderer.sharedMaterials != null && l < renderer.sharedMaterials.Length) {
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_160 = V_3;
		NullCheck(L_160);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_161;
		L_161 = Renderer_get_sharedMaterials_m0B61AFD8EDA35A70C796FFB2F28BB62380051ABF(L_160, NULL);
		if (!L_161)
		{
			goto IL_05eb;
		}
	}
	{
		int32_t L_162 = V_15;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_163 = V_3;
		NullCheck(L_163);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_164;
		L_164 = Renderer_get_sharedMaterials_m0B61AFD8EDA35A70C796FFB2F28BB62380051ABF(L_163, NULL);
		NullCheck(L_164);
		if ((((int32_t)L_162) >= ((int32_t)((int32_t)(((RuntimeArray*)L_164)->max_length)))))
		{
			goto IL_05eb;
		}
	}
	{
		// mat = renderer.sharedMaterials[l];
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_165 = V_3;
		NullCheck(L_165);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_166;
		L_166 = Renderer_get_sharedMaterials_m0B61AFD8EDA35A70C796FFB2F28BB62380051ABF(L_165, NULL);
		int32_t L_167 = V_15;
		NullCheck(L_166);
		int32_t L_168 = L_167;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_169 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		V_4 = L_169;
	}

IL_05eb:
	{
		// if (mat == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_170 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_171;
		L_171 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_170, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_171)
		{
			goto IL_0a60;
		}
	}
	{
		// hasTexture = mat.HasProperty("_MainTex");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_172 = V_4;
		NullCheck(L_172);
		bool L_173;
		L_173 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_172, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, NULL);
		V_5 = L_173;
		// useAlphaTest = alphaCutOff > 0 && hasTexture;
		float L_174 = __this->___alphaCutOff_9;
		bool L_175 = V_5;
		V_6 = (bool)((int32_t)(((((float)L_174) > ((float)(0.0f)))? 1 : 0)&(int32_t)L_175));
		// if (rms[k].fxMatMask != null && rms[k].fxMatMask.Length > l) {
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_176 = __this->___rms_70;
		int32_t L_177 = V_2;
		NullCheck(L_176);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_178 = ((L_176)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_177)))->___fxMatMask_7;
		if (!L_178)
		{
			goto IL_06cf;
		}
	}
	{
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_179 = __this->___rms_70;
		int32_t L_180 = V_2;
		NullCheck(L_179);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_181 = ((L_179)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_180)))->___fxMatMask_7;
		NullCheck(L_181);
		int32_t L_182 = V_15;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_181)->max_length))) <= ((int32_t)L_182)))
		{
			goto IL_06cf;
		}
	}
	{
		// Material fxMat = rms[k].fxMatMask[l];
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_183 = __this->___rms_70;
		int32_t L_184 = V_2;
		NullCheck(L_183);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_185 = ((L_183)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_184)))->___fxMatMask_7;
		int32_t L_186 = V_15;
		NullCheck(L_185);
		int32_t L_187 = L_186;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_188 = (L_185)->GetAt(static_cast<il2cpp_array_size_t>(L_187));
		V_16 = L_188;
		// if (fxMat != null) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_189 = V_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_190;
		L_190 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_189, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_190)
		{
			goto IL_06cf;
		}
	}
	{
		// if (hasTexture) {
		bool L_191 = V_5;
		if (!L_191)
		{
			goto IL_0687;
		}
	}
	{
		// fxMat.mainTexture = matTexture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_192 = V_16;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_193 = V_7;
		NullCheck(L_192);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_192, L_193, NULL);
		// fxMat.mainTextureOffset = matTextureOffset;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_194 = V_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_195 = V_8;
		NullCheck(L_194);
		Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12(L_194, L_195, NULL);
		// fxMat.mainTextureScale = matTextureScale;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_196 = V_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_197 = V_9;
		NullCheck(L_196);
		Material_set_mainTextureScale_mABC2B4327CCDC6BB0E0EA72C6F29817400F56EF1(L_196, L_197, NULL);
	}

IL_0687:
	{
		// if (useAlphaTest) {
		bool L_198 = V_6;
		if (!L_198)
		{
			goto IL_06ab;
		}
	}
	{
		// fxMat.SetFloat(UNIFORM_CUTOFF, alphaCutOff);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_199 = V_16;
		float L_200 = __this->___alphaCutOff_9;
		NullCheck(L_199);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_199, _stringLiteral9A0E07956661BE92156BA01A49D3BE4CA8774CD5, L_200, NULL);
		// fxMat.EnableKeyword(SKW_ALPHACLIP);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_201 = V_16;
		NullCheck(L_201);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_201, _stringLiteral3EF0244AAB3ACE4C466D87590257757244FE3554, NULL);
		goto IL_06b7;
	}

IL_06ab:
	{
		// fxMat.DisableKeyword(SKW_ALPHACLIP);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_202 = V_16;
		NullCheck(L_202);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_202, _stringLiteral3EF0244AAB3ACE4C466D87590257757244FE3554, NULL);
	}

IL_06b7:
	{
		// fxMat.SetInt("_Cull", cullBackFaces ? (int)UnityEngine.Rendering.CullMode.Back : (int)UnityEngine.Rendering.CullMode.Off);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_203 = V_16;
		bool L_204 = __this->___cullBackFaces_10;
		G_B127_0 = _stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22;
		G_B127_1 = L_203;
		if (L_204)
		{
			G_B128_0 = _stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22;
			G_B128_1 = L_203;
			goto IL_06c9;
		}
	}
	{
		G_B129_0 = 0;
		G_B129_1 = G_B127_0;
		G_B129_2 = G_B127_1;
		goto IL_06ca;
	}

IL_06c9:
	{
		G_B129_0 = 2;
		G_B129_1 = G_B128_0;
		G_B129_2 = G_B128_1;
	}

IL_06ca:
	{
		NullCheck(G_B129_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(G_B129_2, G_B129_1, G_B129_0, NULL);
	}

IL_06cf:
	{
		// if (rms[k].fxMatSeeThrough != null && rms[k].fxMatSeeThrough.Length > l) {
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_205 = __this->___rms_70;
		int32_t L_206 = V_2;
		NullCheck(L_205);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_207 = ((L_205)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_206)))->___fxMatSeeThrough_9;
		if (!L_207)
		{
			goto IL_07b5;
		}
	}
	{
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_208 = __this->___rms_70;
		int32_t L_209 = V_2;
		NullCheck(L_208);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_210 = ((L_208)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_209)))->___fxMatSeeThrough_9;
		NullCheck(L_210);
		int32_t L_211 = V_15;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_210)->max_length))) <= ((int32_t)L_211)))
		{
			goto IL_07b5;
		}
	}
	{
		// Material fxMat = rms[k].fxMatSeeThrough[l];
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_212 = __this->___rms_70;
		int32_t L_213 = V_2;
		NullCheck(L_212);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_214 = ((L_212)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_213)))->___fxMatSeeThrough_9;
		int32_t L_215 = V_15;
		NullCheck(L_214);
		int32_t L_216 = L_215;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_217 = (L_214)->GetAt(static_cast<il2cpp_array_size_t>(L_216));
		V_17 = L_217;
		// if (fxMat != null) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_218 = V_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_219;
		L_219 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_218, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_219)
		{
			goto IL_07b5;
		}
	}
	{
		// fxMat.SetFloat("_SeeThrough", seeThroughIntensity);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_220 = V_17;
		float L_221 = __this->___seeThroughIntensity_66;
		NullCheck(L_220);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_220, _stringLiteral36AF1BE80C97B2D83C812C7AAB43703DAA26B715, L_221, NULL);
		// fxMat.SetFloat("_SeeThroughNoise", seeThroughNoise);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_222 = V_17;
		float L_223 = __this->___seeThroughNoise_69;
		NullCheck(L_222);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_222, _stringLiteral302B7CA4FEA9A905B76ADACDB7E584B9F385C54D, L_223, NULL);
		// fxMat.SetColor("_SeeThroughTintColor", seeThroughTintColor);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_224 = V_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_225 = V_0;
		NullCheck(L_224);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_224, _stringLiteral20205C80F44E832330753E566D890CA7994A43F2, L_225, NULL);
		// if (hasTexture) {
		bool L_226 = V_5;
		if (!L_226)
		{
			goto IL_0785;
		}
	}
	{
		// Texture texture = mat.mainTexture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_227 = V_4;
		NullCheck(L_227);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_228;
		L_228 = Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D(L_227, NULL);
		V_18 = L_228;
		// fxMat.mainTexture = texture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_229 = V_17;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_230 = V_18;
		NullCheck(L_229);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_229, L_230, NULL);
		// fxMat.mainTextureOffset = mat.mainTextureOffset;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_231 = V_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_232 = V_4;
		NullCheck(L_232);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_233;
		L_233 = Material_get_mainTextureOffset_m642934E0FF835323FCAFE2F43E314722E8B6A439(L_232, NULL);
		NullCheck(L_231);
		Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12(L_231, L_233, NULL);
		// fxMat.mainTextureScale = mat.mainTextureScale;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_234 = V_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_235 = V_4;
		NullCheck(L_235);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_236;
		L_236 = Material_get_mainTextureScale_mF28E905E1331B3F6AB145193026A1729E17BE7ED(L_235, NULL);
		NullCheck(L_234);
		Material_set_mainTextureScale_mABC2B4327CCDC6BB0E0EA72C6F29817400F56EF1(L_234, L_236, NULL);
	}

IL_0785:
	{
		// if (useAlphaTest) {
		bool L_237 = V_6;
		if (!L_237)
		{
			goto IL_07a9;
		}
	}
	{
		// fxMat.SetFloat(UNIFORM_CUTOFF, alphaCutOff);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_238 = V_17;
		float L_239 = __this->___alphaCutOff_9;
		NullCheck(L_238);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_238, _stringLiteral9A0E07956661BE92156BA01A49D3BE4CA8774CD5, L_239, NULL);
		// fxMat.EnableKeyword(SKW_ALPHACLIP);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_240 = V_17;
		NullCheck(L_240);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_240, _stringLiteral3EF0244AAB3ACE4C466D87590257757244FE3554, NULL);
		goto IL_07b5;
	}

IL_07a9:
	{
		// fxMat.DisableKeyword(SKW_ALPHACLIP);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_241 = V_17;
		NullCheck(L_241);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_241, _stringLiteral3EF0244AAB3ACE4C466D87590257757244FE3554, NULL);
	}

IL_07b5:
	{
		// if (rms[k].fxMatOverlay != null && rms[k].fxMatOverlay.Length > l) {
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_242 = __this->___rms_70;
		int32_t L_243 = V_2;
		NullCheck(L_242);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_244 = ((L_242)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_243)))->___fxMatOverlay_10;
		if (!L_244)
		{
			goto IL_087a;
		}
	}
	{
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_245 = __this->___rms_70;
		int32_t L_246 = V_2;
		NullCheck(L_245);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_247 = ((L_245)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_246)))->___fxMatOverlay_10;
		NullCheck(L_247);
		int32_t L_248 = V_15;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_247)->max_length))) <= ((int32_t)L_248)))
		{
			goto IL_087a;
		}
	}
	{
		// Material fxMat = rms[k].fxMatOverlay[l];
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_249 = __this->___rms_70;
		int32_t L_250 = V_2;
		NullCheck(L_249);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_251 = ((L_249)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_250)))->___fxMatOverlay_10;
		int32_t L_252 = V_15;
		NullCheck(L_251);
		int32_t L_253 = L_252;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_254 = (L_251)->GetAt(static_cast<il2cpp_array_size_t>(L_253));
		V_19 = L_254;
		// if (fxMat != null) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_255 = V_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_256;
		L_256 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_255, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_256)
		{
			goto IL_087a;
		}
	}
	{
		// if (hasTexture) {
		bool L_257 = V_5;
		if (!L_257)
		{
			goto IL_0824;
		}
	}
	{
		// fxMat.mainTexture = matTexture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_258 = V_19;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_259 = V_7;
		NullCheck(L_258);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_258, L_259, NULL);
		// fxMat.mainTextureOffset = matTextureOffset;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_260 = V_19;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_261 = V_8;
		NullCheck(L_260);
		Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12(L_260, L_261, NULL);
		// fxMat.mainTextureScale = matTextureScale;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_262 = V_19;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_263 = V_9;
		NullCheck(L_262);
		Material_set_mainTextureScale_mABC2B4327CCDC6BB0E0EA72C6F29817400F56EF1(L_262, L_263, NULL);
	}

IL_0824:
	{
		// if (mat.HasProperty("_Color")) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_264 = V_4;
		NullCheck(L_264);
		bool L_265;
		L_265 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_264, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, NULL);
		if (!L_265)
		{
			goto IL_084a;
		}
	}
	{
		// fxMat.SetColor("_OverlayBackColor", mat.GetColor("_Color"));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_266 = V_19;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_267 = V_4;
		NullCheck(L_267);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_268;
		L_268 = Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609(L_267, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, NULL);
		NullCheck(L_266);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_266, _stringLiteralB4F78CE90CE16BABB60B82B9B7E3B20575EE5183, L_268, NULL);
	}

IL_084a:
	{
		// if (useAlphaTest) {
		bool L_269 = V_6;
		if (!L_269)
		{
			goto IL_086e;
		}
	}
	{
		// fxMat.SetFloat(UNIFORM_CUTOFF, alphaCutOff);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_270 = V_19;
		float L_271 = __this->___alphaCutOff_9;
		NullCheck(L_270);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_270, _stringLiteral9A0E07956661BE92156BA01A49D3BE4CA8774CD5, L_271, NULL);
		// fxMat.EnableKeyword(SKW_ALPHACLIP);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_272 = V_19;
		NullCheck(L_272);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_272, _stringLiteral3EF0244AAB3ACE4C466D87590257757244FE3554, NULL);
		goto IL_087a;
	}

IL_086e:
	{
		// fxMat.DisableKeyword(SKW_ALPHACLIP);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_273 = V_19;
		NullCheck(L_273);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_273, _stringLiteral3EF0244AAB3ACE4C466D87590257757244FE3554, NULL);
	}

IL_087a:
	{
		// if (rms[k].fxMatInnerGlow != null && rms[k].fxMatInnerGlow.Length > l) {
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_274 = __this->___rms_70;
		int32_t L_275 = V_2;
		NullCheck(L_274);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_276 = ((L_274)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_275)))->___fxMatInnerGlow_11;
		if (!L_276)
		{
			goto IL_0943;
		}
	}
	{
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_277 = __this->___rms_70;
		int32_t L_278 = V_2;
		NullCheck(L_277);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_279 = ((L_277)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_278)))->___fxMatInnerGlow_11;
		NullCheck(L_279);
		int32_t L_280 = V_15;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_279)->max_length))) <= ((int32_t)L_280)))
		{
			goto IL_0943;
		}
	}
	{
		// Material fxMat = rms[k].fxMatInnerGlow[l];
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_281 = __this->___rms_70;
		int32_t L_282 = V_2;
		NullCheck(L_281);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_283 = ((L_281)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_282)))->___fxMatInnerGlow_11;
		int32_t L_284 = V_15;
		NullCheck(L_283);
		int32_t L_285 = L_284;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_286 = (L_283)->GetAt(static_cast<il2cpp_array_size_t>(L_285));
		V_20 = L_286;
		// if (fxMat != null) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_287 = V_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_288;
		L_288 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_287, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_288)
		{
			goto IL_0943;
		}
	}
	{
		// if (hasTexture) {
		bool L_289 = V_5;
		if (!L_289)
		{
			goto IL_08e9;
		}
	}
	{
		// fxMat.mainTexture = matTexture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_290 = V_20;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_291 = V_7;
		NullCheck(L_290);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_290, L_291, NULL);
		// fxMat.mainTextureOffset = matTextureOffset;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_292 = V_20;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_293 = V_8;
		NullCheck(L_292);
		Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12(L_292, L_293, NULL);
		// fxMat.mainTextureScale = matTextureScale;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_294 = V_20;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_295 = V_9;
		NullCheck(L_294);
		Material_set_mainTextureScale_mABC2B4327CCDC6BB0E0EA72C6F29817400F56EF1(L_294, L_295, NULL);
	}

IL_08e9:
	{
		// fxMat.SetFloat("_Width", innerGlowWidth);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_296 = V_20;
		float L_297 = __this->___innerGlowWidth_49;
		NullCheck(L_296);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_296, _stringLiteral5B399F095CF9ED25677ABDF72E009C797C083D21, L_297, NULL);
		// fxMat.SetInt("_InnerGlowZTest", GetZTestValue(innerGlowVisibility));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_298 = V_20;
		int32_t L_299 = __this->___innerGlowVisibility_51;
		int32_t L_300;
		L_300 = HighlightEffect_GetZTestValue_m649B1407B452B08B8F6326CDAF831529A46EF6D7(__this, L_299, NULL);
		NullCheck(L_298);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_298, _stringLiteral6F8E51D85E067917148A712F8E56CF44F8E30C4E, L_300, NULL);
		// if (useAlphaTest) {
		bool L_301 = V_6;
		if (!L_301)
		{
			goto IL_0937;
		}
	}
	{
		// fxMat.SetFloat(UNIFORM_CUTOFF, alphaCutOff);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_302 = V_20;
		float L_303 = __this->___alphaCutOff_9;
		NullCheck(L_302);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_302, _stringLiteral9A0E07956661BE92156BA01A49D3BE4CA8774CD5, L_303, NULL);
		// fxMat.EnableKeyword(SKW_ALPHACLIP);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_304 = V_20;
		NullCheck(L_304);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_304, _stringLiteral3EF0244AAB3ACE4C466D87590257757244FE3554, NULL);
		goto IL_0943;
	}

IL_0937:
	{
		// fxMat.DisableKeyword(SKW_ALPHACLIP);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_305 = V_20;
		NullCheck(L_305);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_305, _stringLiteral3EF0244AAB3ACE4C466D87590257757244FE3554, NULL);
	}

IL_0943:
	{
		// if (rms[k].fxMatSolidColor != null && rms[k].fxMatSolidColor.Length > l) {
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_306 = __this->___rms_70;
		int32_t L_307 = V_2;
		NullCheck(L_306);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_308 = ((L_306)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_307)))->___fxMatSolidColor_8;
		if (!L_308)
		{
			goto IL_0a60;
		}
	}
	{
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_309 = __this->___rms_70;
		int32_t L_310 = V_2;
		NullCheck(L_309);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_311 = ((L_309)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_310)))->___fxMatSolidColor_8;
		NullCheck(L_311);
		int32_t L_312 = V_15;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_311)->max_length))) <= ((int32_t)L_312)))
		{
			goto IL_0a60;
		}
	}
	{
		// Material fxMat = rms[k].fxMatSolidColor[l];
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_313 = __this->___rms_70;
		int32_t L_314 = V_2;
		NullCheck(L_313);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_315 = ((L_313)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_314)))->___fxMatSolidColor_8;
		int32_t L_316 = V_15;
		NullCheck(L_315);
		int32_t L_317 = L_316;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_318 = (L_315)->GetAt(static_cast<il2cpp_array_size_t>(L_317));
		V_21 = L_318;
		// if (fxMat != null) {
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_319 = V_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_320;
		L_320 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_319, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_320)
		{
			goto IL_0a60;
		}
	}
	{
		// fxMat.color = glowHQColor;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_321 = V_21;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_322 = __this->___glowHQColor_39;
		NullCheck(L_321);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_321, L_322, NULL);
		// fxMat.SetInt("_Cull", cullBackFaces ? (int)UnityEngine.Rendering.CullMode.Back : (int)UnityEngine.Rendering.CullMode.Off);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_323 = V_21;
		bool L_324 = __this->___cullBackFaces_10;
		G_B160_0 = _stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22;
		G_B160_1 = L_323;
		if (L_324)
		{
			G_B161_0 = _stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22;
			G_B161_1 = L_323;
			goto IL_09b5;
		}
	}
	{
		G_B162_0 = 0;
		G_B162_1 = G_B160_0;
		G_B162_2 = G_B160_1;
		goto IL_09b6;
	}

IL_09b5:
	{
		G_B162_0 = 2;
		G_B162_1 = G_B161_0;
		G_B162_2 = G_B161_1;
	}

IL_09b6:
	{
		NullCheck(G_B162_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(G_B162_2, G_B162_1, G_B162_0, NULL);
		// if (hasTexture) {
		bool L_325 = V_5;
		if (!L_325)
		{
			goto IL_09da;
		}
	}
	{
		// fxMat.mainTexture = matTexture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_326 = V_21;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_327 = V_7;
		NullCheck(L_326);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_326, L_327, NULL);
		// fxMat.mainTextureOffset = matTextureOffset;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_328 = V_21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_329 = V_8;
		NullCheck(L_328);
		Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12(L_328, L_329, NULL);
		// fxMat.mainTextureScale = matTextureScale;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_330 = V_21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_331 = V_9;
		NullCheck(L_330);
		Material_set_mainTextureScale_mABC2B4327CCDC6BB0E0EA72C6F29817400F56EF1(L_330, L_331, NULL);
	}

IL_09da:
	{
		// if ((glow > 0 && glowQuality == QualityLevel.Highest && glowVisibility == Visibility.Normal) || (outline > 0 && outlineQuality == QualityLevel.Highest && outlineVisibility == Visibility.Normal)) {
		float L_332 = __this->___glow_35;
		if ((!(((float)L_332) > ((float)(0.0f)))))
		{
			goto IL_09f8;
		}
	}
	{
		int32_t L_333 = __this->___glowQuality_37;
		if ((!(((uint32_t)L_333) == ((uint32_t)2))))
		{
			goto IL_09f8;
		}
	}
	{
		int32_t L_334 = __this->___glowVisibility_44;
		if (!L_334)
		{
			goto IL_0a16;
		}
	}

IL_09f8:
	{
		float L_335 = __this->___outline_27;
		if ((!(((float)L_335) > ((float)(0.0f)))))
		{
			goto IL_0a24;
		}
	}
	{
		int32_t L_336 = __this->___outlineQuality_30;
		if ((!(((uint32_t)L_336) == ((uint32_t)2))))
		{
			goto IL_0a24;
		}
	}
	{
		int32_t L_337 = __this->___outlineVisibility_32;
		if (L_337)
		{
			goto IL_0a24;
		}
	}

IL_0a16:
	{
		// fxMat.EnableKeyword(SKW_DEPTHCLIP);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_338 = V_21;
		NullCheck(L_338);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_338, _stringLiteral7A6D6EF533746C6F0884C39238B4ED3D27DC28B6, NULL);
		goto IL_0a30;
	}

IL_0a24:
	{
		// fxMat.DisableKeyword(SKW_DEPTHCLIP);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_339 = V_21;
		NullCheck(L_339);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_339, _stringLiteral7A6D6EF533746C6F0884C39238B4ED3D27DC28B6, NULL);
	}

IL_0a30:
	{
		// if (useAlphaTest) {
		bool L_340 = V_6;
		if (!L_340)
		{
			goto IL_0a54;
		}
	}
	{
		// fxMat.SetFloat(UNIFORM_CUTOFF, alphaCutOff);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_341 = V_21;
		float L_342 = __this->___alphaCutOff_9;
		NullCheck(L_341);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_341, _stringLiteral9A0E07956661BE92156BA01A49D3BE4CA8774CD5, L_342, NULL);
		// fxMat.EnableKeyword(SKW_ALPHACLIP);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_343 = V_21;
		NullCheck(L_343);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_343, _stringLiteral3EF0244AAB3ACE4C466D87590257757244FE3554, NULL);
		goto IL_0a60;
	}

IL_0a54:
	{
		// fxMat.DisableKeyword(SKW_ALPHACLIP);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_344 = V_21;
		NullCheck(L_344);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_344, _stringLiteral3EF0244AAB3ACE4C466D87590257757244FE3554, NULL);
	}

IL_0a60:
	{
		// for (int l = 0; l < rms[k].mesh.subMeshCount; l++) {
		int32_t L_345 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_345, 1));
	}

IL_0a66:
	{
		// for (int l = 0; l < rms[k].mesh.subMeshCount; l++) {
		int32_t L_346 = V_15;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_347 = __this->___rms_70;
		int32_t L_348 = V_2;
		NullCheck(L_347);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_349 = ((L_347)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_348)))->___mesh_3;
		NullCheck(L_349);
		int32_t L_350;
		L_350 = Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B(L_349, NULL);
		if ((((int32_t)L_346) < ((int32_t)L_350)))
		{
			goto IL_05b6;
		}
	}

IL_0a83:
	{
		// for (int k = 0; k < rmsCount; k++) {
		int32_t L_351 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_351, 1));
	}

IL_0a87:
	{
		// for (int k = 0; k < rmsCount; k++) {
		int32_t L_352 = V_2;
		int32_t L_353 = __this->___rmsCount_71;
		if ((((int32_t)L_352) < ((int32_t)L_353)))
		{
			goto IL_027c;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 HighlightPlus.HighlightEffect::GetZTestValue(HighlightPlus.Visibility)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HighlightEffect_GetZTestValue_m649B1407B452B08B8F6326CDAF831529A46EF6D7 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, int32_t ___param0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___param0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___param0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_000c;
		}
	}
	{
		goto IL_000e;
	}

IL_000a:
	{
		// case Visibility.AlwaysOnTop: return (int)UnityEngine.Rendering.CompareFunction.Always;
		return 8;
	}

IL_000c:
	{
		// case Visibility.OnlyWhenOccluded: return (int)UnityEngine.Rendering.CompareFunction.Greater;
		return 5;
	}

IL_000e:
	{
		// return (int)UnityEngine.Rendering.CompareFunction.LessEqual;
		return 4;
	}
}
// System.Void HighlightPlus.HighlightEffect::BuildQuad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_BuildQuad_m29B5FCF65215915351648B4D14BE913C4F71897D (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tB7E4E10E6E9BC0658E9B7DA29CB2FA232B0F9AF2____4F3A974D03B4939FC26A965844D8E5F89E151FF80F59BB8AF511CC703F5DA157_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_5 = NULL;
	int32_t V_6 = 0;
	{
		// quadMesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___quadMesh_104 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___quadMesh_104), (void*)L_0);
		// Vector3[] newVertices = new Vector3[4];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_1;
		// float halfHeight = 0.5f;
		V_1 = (0.5f);
		// float halfWidth = 0.5f;
		V_2 = (0.5f);
		// newVertices[0] = new Vector3(-halfWidth, -halfHeight, 0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = V_0;
		float L_3 = V_2;
		float L_4 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), ((-L_3)), ((-L_4)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_5);
		// newVertices[1] = new Vector3(-halfWidth, halfHeight, 0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		float L_7 = V_2;
		float L_8 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((-L_7)), L_8, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_9);
		// newVertices[2] = new Vector3(halfWidth, -halfHeight, 0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = V_0;
		float L_11 = V_2;
		float L_12 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_11, ((-L_12)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_13);
		// newVertices[3] = new Vector3(halfWidth, halfHeight, 0);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = V_0;
		float L_15 = V_2;
		float L_16 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), L_15, L_16, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_17);
		// Vector2[] newUVs = new Vector2[newVertices.Length];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = V_0;
		NullCheck(L_18);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_19 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)));
		V_3 = L_19;
		// newUVs[0] = new Vector2(0, 0);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_20 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_21), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_21);
		// newUVs[1] = new Vector2(0, 1);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_22 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_23), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_23);
		// newUVs[2] = new Vector2(1, 0);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_24 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_25), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_25);
		// newUVs[3] = new Vector2(1, 1);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_26 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_27), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_27);
		// int[] newTriangles = { 0, 1, 2, 3, 2, 1 };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = L_28;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_30 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB7E4E10E6E9BC0658E9B7DA29CB2FA232B0F9AF2____4F3A974D03B4939FC26A965844D8E5F89E151FF80F59BB8AF511CC703F5DA157_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_29, L_30, NULL);
		V_4 = L_29;
		// Vector3[] newNormals = new Vector3[newVertices.Length];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_31 = V_0;
		NullCheck(L_31);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_32 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)));
		V_5 = L_32;
		// for (int i = 0; i < newNormals.Length; i++) {
		V_6 = 0;
		goto IL_0104;
	}

IL_00f0:
	{
		// newNormals[i] = Vector3.forward;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_33 = V_5;
		int32_t L_34 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_35);
		// for (int i = 0; i < newNormals.Length; i++) {
		int32_t L_36 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_0104:
	{
		// for (int i = 0; i < newNormals.Length; i++) {
		int32_t L_37 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_38 = V_5;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))
		{
			goto IL_00f0;
		}
	}
	{
		// quadMesh.vertices = newVertices;
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_39 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___quadMesh_104;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_40 = V_0;
		NullCheck(L_39);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_39, L_40, NULL);
		// quadMesh.uv = newUVs;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_41 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___quadMesh_104;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_42 = V_3;
		NullCheck(L_41);
		Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_41, L_42, NULL);
		// quadMesh.triangles = newTriangles;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_43 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___quadMesh_104;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = V_4;
		NullCheck(L_43);
		Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(L_43, L_44, NULL);
		// quadMesh.normals = newNormals;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_45 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___quadMesh_104;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_46 = V_5;
		NullCheck(L_45);
		Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B(L_45, L_46, NULL);
		// quadMesh.RecalculateBounds();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_47 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___quadMesh_104;
		NullCheck(L_47);
		Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B(L_47, NULL);
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::AverageNormals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_AverageNormals_mA95BEE9B97C08F922B6567DB87E6D5EAA3E8EC2A (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, int32_t ___objIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mD9C1F50088CCD1E05534B8692A64DCB2824137C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59B574D52CFCC7A39DF04081CC751E9947011933_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mFA530B10C632B3CE94B37D1A12916909897B1F34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m3B1C7B18AF5833372B42AAB56A959A9766FF3201_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mF1598D9A2BE47C5C9C2994A99F217A7FD624EAC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m269810FFD0356A0743AF08CD15D6ACA5B856982A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	{
		// if (rms == null || objIndex >= rms.Length) return;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_0 = __this->___rms_70;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___objIndex0;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_2 = __this->___rms_70;
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0014;
		}
	}

IL_0013:
	{
		// if (rms == null || objIndex >= rms.Length) return;
		return;
	}

IL_0014:
	{
		// Mesh mesh = rms[objIndex].mesh;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_3 = __this->___rms_70;
		int32_t L_4 = ___objIndex0;
		NullCheck(L_3);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___mesh_3;
		V_0 = L_5;
		// if (!smoothMeshes.TryGetValue(mesh, out newMesh)) {
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Dictionary_2_t1F3778521E542002424701BBC4C99E4CFB1C891D* L_6 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___smoothMeshes_137;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_7 = V_0;
		NullCheck(L_6);
		bool L_8;
		L_8 = Dictionary_2_TryGetValue_m59B574D52CFCC7A39DF04081CC751E9947011933(L_6, L_7, (&V_1), Dictionary_2_TryGetValue_m59B574D52CFCC7A39DF04081CC751E9947011933_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_0202;
		}
	}
	{
		// if (!mesh.isReadable) return;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_9 = V_0;
		NullCheck(L_9);
		bool L_10;
		L_10 = Mesh_get_isReadable_m3309900DB9B66BD321128839E6801722D15CD1E0(L_9, NULL);
		if (L_10)
		{
			goto IL_0041;
		}
	}
	{
		// if (!mesh.isReadable) return;
		return;
	}

IL_0041:
	{
		// if (normals == null) {
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___normals_133;
		if (L_11)
		{
			goto IL_0054;
		}
	}
	{
		// normals = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_12 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_12, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___normals_133 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___normals_133), (void*)L_12);
		goto IL_005e;
	}

IL_0054:
	{
		// normals.Clear();
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_13 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___normals_133;
		NullCheck(L_13);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_13, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
	}

IL_005e:
	{
		// mesh.GetNormals(normals);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_15 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___normals_133;
		NullCheck(L_14);
		Mesh_GetNormals_m6D4E3261EDC58B487E7F77C1C164495A42D41314(L_14, L_15, NULL);
		// int normalsCount = normals.Count;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_16 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___normals_133;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_16, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		V_2 = L_17;
		// if (normalsCount == 0)
		int32_t L_18 = V_2;
		if (L_18)
		{
			goto IL_0078;
		}
	}
	{
		// return;
		return;
	}

IL_0078:
	{
		// if (vertices == null) {
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_19 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___vertices_132;
		if (L_19)
		{
			goto IL_008b;
		}
	}
	{
		// vertices = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_20 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_20, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___vertices_132 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___vertices_132), (void*)L_20);
		goto IL_0095;
	}

IL_008b:
	{
		// vertices.Clear();
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_21 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___vertices_132;
		NullCheck(L_21);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_21, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
	}

IL_0095:
	{
		// mesh.GetVertices(vertices);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_22 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_23 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___vertices_132;
		NullCheck(L_22);
		Mesh_GetVertices_m5BF8777074E383AD8C4B9974D27E4AB52963D92E(L_22, L_23, NULL);
		// int vertexCount = vertices.Count;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_24 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___vertices_132;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_24, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		V_3 = L_25;
		// if (normalsCount < vertexCount) {
		int32_t L_26 = V_2;
		int32_t L_27 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)L_27)))
		{
			goto IL_00b1;
		}
	}
	{
		// vertexCount = normalsCount;
		int32_t L_28 = V_2;
		V_3 = L_28;
	}

IL_00b1:
	{
		// if (newNormals == null || newNormals.Length < vertexCount) {
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_29 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___newNormals_134;
		if (!L_29)
		{
			goto IL_00c2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_30 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___newNormals_134;
		NullCheck(L_30);
		int32_t L_31 = V_3;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))) >= ((int32_t)L_31)))
		{
			goto IL_00cf;
		}
	}

IL_00c2:
	{
		// newNormals = new Vector3[vertexCount];
		int32_t L_32 = V_3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_33 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_32);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___newNormals_134 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___newNormals_134), (void*)L_33);
		goto IL_00f4;
	}

IL_00cf:
	{
		// Vector3 zero = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_4 = L_34;
		// for (int k = 0; k < vertexCount; k++) {
		V_5 = 0;
		goto IL_00ef;
	}

IL_00db:
	{
		// newNormals[k] = zero;
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_35 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___newNormals_134;
		int32_t L_36 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_4;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_37);
		// for (int k = 0; k < vertexCount; k++) {
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00ef:
	{
		// for (int k = 0; k < vertexCount; k++) {
		int32_t L_39 = V_5;
		int32_t L_40 = V_3;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_00db;
		}
	}

IL_00f4:
	{
		// if (matches == null || matches.Length < vertexCount) {
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matches_135;
		if (!L_41)
		{
			goto IL_0105;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matches_135;
		NullCheck(L_42);
		int32_t L_43 = V_3;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))) >= ((int32_t)L_43)))
		{
			goto IL_0110;
		}
	}

IL_0105:
	{
		// matches = new int[vertexCount];
		int32_t L_44 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_44);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matches_135 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matches_135), (void*)L_45);
	}

IL_0110:
	{
		// vv.Clear();
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8* L_46 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___vv_136;
		NullCheck(L_46);
		Dictionary_2_Clear_mD9C1F50088CCD1E05534B8692A64DCB2824137C4(L_46, Dictionary_2_Clear_mD9C1F50088CCD1E05534B8692A64DCB2824137C4_RuntimeMethod_var);
		// for (int k = 0; k < vertexCount; k++) {
		V_6 = 0;
		goto IL_015e;
	}

IL_011f:
	{
		// Vector3 v = vertices[k];
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_47 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___vertices_132;
		int32_t L_48 = V_6;
		NullCheck(L_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_47, L_48, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		V_8 = L_49;
		// if (!vv.TryGetValue(v, out i)) {
		Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8* L_50 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___vv_136;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_8;
		NullCheck(L_50);
		bool L_52;
		L_52 = Dictionary_2_TryGetValue_mFA530B10C632B3CE94B37D1A12916909897B1F34(L_50, L_51, (&V_7), Dictionary_2_TryGetValue_mFA530B10C632B3CE94B37D1A12916909897B1F34_RuntimeMethod_var);
		if (L_52)
		{
			goto IL_014e;
		}
	}
	{
		// vv[v] = i = k;
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8* L_53 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___vv_136;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = V_8;
		int32_t L_55 = V_6;
		int32_t L_56 = L_55;
		V_7 = L_56;
		NullCheck(L_53);
		Dictionary_2_set_Item_mF1598D9A2BE47C5C9C2994A99F217A7FD624EAC3(L_53, L_54, L_56, Dictionary_2_set_Item_mF1598D9A2BE47C5C9C2994A99F217A7FD624EAC3_RuntimeMethod_var);
	}

IL_014e:
	{
		// matches[k] = i;
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matches_135;
		int32_t L_58 = V_6;
		int32_t L_59 = V_7;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)L_59);
		// for (int k = 0; k < vertexCount; k++) {
		int32_t L_60 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_015e:
	{
		// for (int k = 0; k < vertexCount; k++) {
		int32_t L_61 = V_6;
		int32_t L_62 = V_3;
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_011f;
		}
	}
	{
		// for (int k = 0; k < vertexCount; k++) {
		V_9 = 0;
		goto IL_01a0;
	}

IL_0168:
	{
		// int match = matches[k];
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matches_135;
		int32_t L_64 = V_9;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		int32_t L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_10 = L_66;
		// newNormals[match] += normals[k];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_67 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___newNormals_134;
		int32_t L_68 = V_10;
		NullCheck(L_67);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_69 = ((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_69);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_71 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___normals_133;
		int32_t L_72 = V_9;
		NullCheck(L_71);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_71, L_72, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_70, L_73, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_69 = L_74;
		// for (int k = 0; k < vertexCount; k++) {
		int32_t L_75 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01a0:
	{
		// for (int k = 0; k < vertexCount; k++) {
		int32_t L_76 = V_9;
		int32_t L_77 = V_3;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_0168;
		}
	}
	{
		// for (int k = 0; k < vertexCount; k++) {
		V_11 = 0;
		goto IL_01d7;
	}

IL_01aa:
	{
		// int match = matches[k];
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_78 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matches_135;
		int32_t L_79 = V_11;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		int32_t L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		V_12 = L_81;
		// normals[k] = newNormals[match].normalized;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_82 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___normals_133;
		int32_t L_83 = V_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_84 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___newNormals_134;
		int32_t L_85 = V_12;
		NullCheck(L_84);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85))), NULL);
		NullCheck(L_82);
		List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C(L_82, L_83, L_86, List_1_set_Item_m35C8C18BF5DF9A5C8867BF0C872BC39275A41A9C_RuntimeMethod_var);
		// for (int k = 0; k < vertexCount; k++) {
		int32_t L_87 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_87, 1));
	}

IL_01d7:
	{
		// for (int k = 0; k < vertexCount; k++) {
		int32_t L_88 = V_11;
		int32_t L_89 = V_3;
		if ((((int32_t)L_88) < ((int32_t)L_89)))
		{
			goto IL_01aa;
		}
	}
	{
		// newMesh = Instantiate(mesh);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_90 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_91;
		L_91 = Object_Instantiate_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m269810FFD0356A0743AF08CD15D6ACA5B856982A(L_90, Object_Instantiate_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m269810FFD0356A0743AF08CD15D6ACA5B856982A_RuntimeMethod_var);
		V_1 = L_91;
		// newMesh.hideFlags = HideFlags.DontSave;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_92 = V_1;
		NullCheck(L_92);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_92, ((int32_t)52), NULL);
		// newMesh.SetNormals(normals);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_93 = V_1;
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_94 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___normals_133;
		NullCheck(L_93);
		Mesh_SetNormals_mB4072A4D2600768FD62BC9CAAFF8C43955A4A365(L_93, L_94, NULL);
		// smoothMeshes[mesh] = newMesh;
		Dictionary_2_t1F3778521E542002424701BBC4C99E4CFB1C891D* L_95 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___smoothMeshes_137;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_96 = V_0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_97 = V_1;
		NullCheck(L_95);
		Dictionary_2_set_Item_m3B1C7B18AF5833372B42AAB56A959A9766FF3201(L_95, L_96, L_97, Dictionary_2_set_Item_m3B1C7B18AF5833372B42AAB56A959A9766FF3201_RuntimeMethod_var);
	}

IL_0202:
	{
		// rms[objIndex].mesh = newMesh;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_98 = __this->___rms_70;
		int32_t L_99 = ___objIndex0;
		NullCheck(L_98);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_100 = V_1;
		((L_98)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_99)))->___mesh_3 = L_100;
		Il2CppCodeGenWriteBarrier((void**)(&((L_98)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_99)))->___mesh_3), (void*)L_100);
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::ReorientNormals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_ReorientNormals_m992F4431FB136BF853314B374CBC1D28B20F7C61 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, int32_t ___objIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m59B574D52CFCC7A39DF04081CC751E9947011933_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m3B1C7B18AF5833372B42AAB56A959A9766FF3201_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m269810FFD0356A0743AF08CD15D6ACA5B856982A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_1 = NULL;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if (rms == null || objIndex >= rms.Length) return;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_0 = __this->___rms_70;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___objIndex0;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_2 = __this->___rms_70;
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0014;
		}
	}

IL_0013:
	{
		// if (rms == null || objIndex >= rms.Length) return;
		return;
	}

IL_0014:
	{
		// Mesh mesh = rms[objIndex].mesh;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_3 = __this->___rms_70;
		int32_t L_4 = ___objIndex0;
		NullCheck(L_3);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___mesh_3;
		V_0 = L_5;
		// if (!reorientedMeshes.TryGetValue(mesh, out newMesh)) {
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Dictionary_2_t1F3778521E542002424701BBC4C99E4CFB1C891D* L_6 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___reorientedMeshes_138;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_7 = V_0;
		NullCheck(L_6);
		bool L_8;
		L_8 = Dictionary_2_TryGetValue_m59B574D52CFCC7A39DF04081CC751E9947011933(L_6, L_7, (&V_1), Dictionary_2_TryGetValue_m59B574D52CFCC7A39DF04081CC751E9947011933_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_0122;
		}
	}
	{
		// if (!mesh.isReadable) return;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_9 = V_0;
		NullCheck(L_9);
		bool L_10;
		L_10 = Mesh_get_isReadable_m3309900DB9B66BD321128839E6801722D15CD1E0(L_9, NULL);
		if (L_10)
		{
			goto IL_0041;
		}
	}
	{
		// if (!mesh.isReadable) return;
		return;
	}

IL_0041:
	{
		// if (normals == null) {
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___normals_133;
		if (L_11)
		{
			goto IL_0054;
		}
	}
	{
		// normals = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_12 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_12, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___normals_133 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___normals_133), (void*)L_12);
		goto IL_005e;
	}

IL_0054:
	{
		// normals.Clear();
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_13 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___normals_133;
		NullCheck(L_13);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_13, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
	}

IL_005e:
	{
		// if (vertices == null) {
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_14 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___vertices_132;
		if (L_14)
		{
			goto IL_0071;
		}
	}
	{
		// vertices = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_15 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_15, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___vertices_132 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___vertices_132), (void*)L_15);
		goto IL_007b;
	}

IL_0071:
	{
		// vertices.Clear();
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_16 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___vertices_132;
		NullCheck(L_16);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_16, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
	}

IL_007b:
	{
		// mesh.GetVertices(vertices);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_18 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___vertices_132;
		NullCheck(L_17);
		Mesh_GetVertices_m5BF8777074E383AD8C4B9974D27E4AB52963D92E(L_17, L_18, NULL);
		// int vertexCount = vertices.Count;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_19 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___vertices_132;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_19, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		V_2 = L_20;
		// if (vertexCount == 0) return;
		int32_t L_21 = V_2;
		if (L_21)
		{
			goto IL_0095;
		}
	}
	{
		// if (vertexCount == 0) return;
		return;
	}

IL_0095:
	{
		// Vector3 mid = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_3 = L_22;
		// for (int k = 0; k < vertexCount; k++) {
		V_4 = 0;
		goto IL_00b9;
	}

IL_00a0:
	{
		// mid += vertices[k];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_3;
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_24 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___vertices_132;
		int32_t L_25 = V_4;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_24, L_25, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_23, L_26, NULL);
		V_3 = L_27;
		// for (int k = 0; k < vertexCount; k++) {
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00b9:
	{
		// for (int k = 0; k < vertexCount; k++) {
		int32_t L_29 = V_4;
		int32_t L_30 = V_2;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_00a0;
		}
	}
	{
		// mid /= vertexCount;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_3;
		int32_t L_32 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_31, ((float)L_32), NULL);
		V_3 = L_33;
		// for (int k = 0; k < vertexCount; k++) {
		V_5 = 0;
		goto IL_00f7;
	}

IL_00cc:
	{
		// normals.Add((vertices[k] - mid).normalized);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_34 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___normals_133;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_35 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___vertices_132;
		int32_t L_36 = V_5;
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_35, L_36, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_37, L_38, NULL);
		V_6 = L_39;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_6), NULL);
		NullCheck(L_34);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_34, L_40, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int k = 0; k < vertexCount; k++) {
		int32_t L_41 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00f7:
	{
		// for (int k = 0; k < vertexCount; k++) {
		int32_t L_42 = V_5;
		int32_t L_43 = V_2;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_00cc;
		}
	}
	{
		// newMesh = Instantiate(mesh);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_44 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_45;
		L_45 = Object_Instantiate_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m269810FFD0356A0743AF08CD15D6ACA5B856982A(L_44, Object_Instantiate_TisMesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_m269810FFD0356A0743AF08CD15D6ACA5B856982A_RuntimeMethod_var);
		V_1 = L_45;
		// newMesh.hideFlags = HideFlags.DontSave;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_46 = V_1;
		NullCheck(L_46);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_46, ((int32_t)52), NULL);
		// newMesh.SetNormals(normals);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_47 = V_1;
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_48 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___normals_133;
		NullCheck(L_47);
		Mesh_SetNormals_mB4072A4D2600768FD62BC9CAAFF8C43955A4A365(L_47, L_48, NULL);
		// reorientedMeshes[mesh] = newMesh;
		Dictionary_2_t1F3778521E542002424701BBC4C99E4CFB1C891D* L_49 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___reorientedMeshes_138;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_50 = V_0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_51 = V_1;
		NullCheck(L_49);
		Dictionary_2_set_Item_m3B1C7B18AF5833372B42AAB56A959A9766FF3201(L_49, L_50, L_51, Dictionary_2_set_Item_m3B1C7B18AF5833372B42AAB56A959A9766FF3201_RuntimeMethod_var);
	}

IL_0122:
	{
		// rms[objIndex].mesh = newMesh;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_52 = __this->___rms_70;
		int32_t L_53 = ___objIndex0;
		NullCheck(L_52);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_54 = V_1;
		((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___mesh_3 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->___mesh_3), (void*)L_54);
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::HitFX(UnityEngine.Color,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_HitFX_m2FFB4B0FE0B03C90EEA86DD9E2D446364F975CCF (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, float ___fadeOutDuration1, float ___initialIntensity2, const RuntimeMethod* method) 
{
	{
		// hitInitialIntensity = initialIntensity;
		float L_0 = ___initialIntensity2;
		__this->___hitInitialIntensity_139 = L_0;
		// hitFadeOutDuration = fadeOutDuration;
		float L_1 = ___fadeOutDuration1;
		__this->___hitFadeOutDuration_141 = L_1;
		// hitColor = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___color0;
		__this->___hitColor_142 = L_2;
		// hitStartTime = Time.time;
		float L_3;
		L_3 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___hitStartTime_140 = L_3;
		// hitActive = true;
		__this->___hitActive_143 = (bool)1;
		// if (overlay == 0) {
		float L_4 = __this->___overlay_22;
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_0046;
		}
	}
	{
		// overlay = hitInitialIntensity;
		float L_5 = __this->___hitInitialIntensity_139;
		__this->___overlay_22 = L_5;
		// UpdateMaterialProperties();
		HighlightEffect_UpdateMaterialProperties_m207F5DECD7AB1E89B3EB08F4F23E2924CEC79BFA(__this, NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::RegisterOccluder(HighlightPlus.HighlightSeeThroughOccluder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_RegisterOccluder_mD55882B9F47DE93BAAE0E48FB43CDBA9AEAD0430 (HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* ___occluder0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m885F08C9F401FA8D6ED8964DBB45FDF3A09A51EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m6A13344402243643B18F102507DCAAC72711EDA3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!occluders.Contains(occluder)) {
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA* L_0 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___occluders_144;
		HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* L_1 = ___occluder0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m6A13344402243643B18F102507DCAAC72711EDA3(L_0, L_1, List_1_Contains_m6A13344402243643B18F102507DCAAC72711EDA3_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		// occluders.Add(occluder);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA* L_3 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___occluders_144;
		HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* L_4 = ___occluder0;
		NullCheck(L_3);
		List_1_Add_m885F08C9F401FA8D6ED8964DBB45FDF3A09A51EC_inline(L_3, L_4, List_1_Add_m885F08C9F401FA8D6ED8964DBB45FDF3A09A51EC_RuntimeMethod_var);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::UnregisterOccluder(HighlightPlus.HighlightSeeThroughOccluder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_UnregisterOccluder_m3D8A5F77B2FA604CCA5B43D08869B533949747B3 (HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* ___occluder0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m6A13344402243643B18F102507DCAAC72711EDA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mB81B49439425E218155C62BC228A7DD59F4A4C18_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (occluders.Contains(occluder)) {
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA* L_0 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___occluders_144;
		HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* L_1 = ___occluder0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m6A13344402243643B18F102507DCAAC72711EDA3(L_0, L_1, List_1_Contains_m6A13344402243643B18F102507DCAAC72711EDA3_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// occluders.Remove(occluder);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA* L_3 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___occluders_144;
		HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* L_4 = ___occluder0;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_mB81B49439425E218155C62BC228A7DD59F4A4C18(L_3, L_4, List_1_Remove_mB81B49439425E218155C62BC228A7DD59F4A4C18_RuntimeMethod_var);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::RenderOccluders(UnityEngine.Rendering.CommandBuffer,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect_RenderOccluders_m5A6E7F1C205136A034AB2DA2168658471A72F473 (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___cb0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m74C1A74AF0C5C5A09082C2E95BC15B56937DE09E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mA53F92CEF2D7E3057257D336DB1AFFBBE844FE57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0B3872F713AC87961C023F1FCDC3FB3968031494_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA533E222E90031FD47C0825021C5F9E97B129353_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14126D6B9401D493B66201B4A9C99E7CB5DE3FFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1014D7DB4CB07D8B10FBAA0B4B973A88F916870);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* V_6 = NULL;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* V_15 = NULL;
	int32_t V_16 = 0;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_17 = NULL;
	int32_t V_18 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B20_0;
	memset((&G_B20_0), 0, sizeof(G_B20_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B21_0;
	memset((&G_B21_0), 0, sizeof(G_B21_0));
	{
		// int occludersCount = occluders.Count;
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA* L_0 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___occluders_144;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m0B3872F713AC87961C023F1FCDC3FB3968031494_inline(L_0, List_1_get_Count_m0B3872F713AC87961C023F1FCDC3FB3968031494_RuntimeMethod_var);
		V_0 = L_1;
		// if (occludersCount == 0 || rmsCount == 0) return;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = __this->___rmsCount_71;
		if (L_3)
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		// if (occludersCount == 0 || rmsCount == 0) return;
		return;
	}

IL_0017:
	{
		// Vector3 camPos = cam.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = ___cam1;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		V_1 = L_6;
		// bool useRayCastCheck = false;
		V_2 = (bool)0;
		// for (int k = 0; k < occludersCount; k++) {
		V_5 = 0;
		goto IL_005f;
	}

IL_002a:
	{
		// HighlightSeeThroughOccluder occluder = occluders[k];
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA* L_7 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___occluders_144;
		int32_t L_8 = V_5;
		NullCheck(L_7);
		HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* L_9;
		L_9 = List_1_get_Item_mA533E222E90031FD47C0825021C5F9E97B129353(L_7, L_8, List_1_get_Item_mA533E222E90031FD47C0825021C5F9E97B129353_RuntimeMethod_var);
		V_6 = L_9;
		// if (occluder == null || !occluder.isActiveAndEnabled) continue;
		HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* L_10 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_11)
		{
			goto IL_0059;
		}
	}
	{
		HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* L_12 = V_6;
		NullCheck(L_12);
		bool L_13;
		L_13 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(L_12, NULL);
		if (!L_13)
		{
			goto IL_0059;
		}
	}
	{
		// if (occluder.detectionMethod == DetectionMethod.RayCast) {
		HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* L_14 = V_6;
		NullCheck(L_14);
		int32_t L_15 = L_14->___detectionMethod_4;
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_0059;
		}
	}
	{
		// useRayCastCheck = true;
		V_2 = (bool)1;
		// break;
		goto IL_0064;
	}

IL_0059:
	{
		// for (int k = 0; k < occludersCount; k++) {
		int32_t L_16 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_005f:
	{
		// for (int k = 0; k < occludersCount; k++) {
		int32_t L_17 = V_5;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_002a;
		}
	}

IL_0064:
	{
		// if (useRayCastCheck) {
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_01ac;
		}
	}
	{
		// Bounds bounds = new Bounds();
		il2cpp_codegen_initobj((&V_7), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		// for (int r = 0; r < rms.Length; r++) {
		V_11 = 0;
		goto IL_00e3;
	}

IL_0077:
	{
		// if (rms[r].renderer != null) {
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_20 = __this->___rms_70;
		int32_t L_21 = V_11;
		NullCheck(L_20);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___renderer_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_00dd;
		}
	}
	{
		// if (bounds.size.x == 0) {
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_7), NULL);
		float L_25 = L_24.___x_2;
		if ((!(((float)L_25) == ((float)(0.0f)))))
		{
			goto IL_00bf;
		}
	}
	{
		// bounds = rms[r].renderer.bounds;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_26 = __this->___rms_70;
		int32_t L_27 = V_11;
		NullCheck(L_26);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___renderer_5;
		NullCheck(L_28);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_29;
		L_29 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_28, NULL);
		V_7 = L_29;
		goto IL_00dd;
	}

IL_00bf:
	{
		// bounds.Encapsulate(rms[r].renderer.bounds);
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_30 = __this->___rms_70;
		int32_t L_31 = V_11;
		NullCheck(L_30);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___renderer_5;
		NullCheck(L_32);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_33;
		L_33 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_32, NULL);
		Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22((&V_7), L_33, NULL);
	}

IL_00dd:
	{
		// for (int r = 0; r < rms.Length; r++) {
		int32_t L_34 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00e3:
	{
		// for (int r = 0; r < rms.Length; r++) {
		int32_t L_35 = V_11;
		ModelMaterialsU5BU5D_tA03891200E543E6705B7CA7C8ADD14D175DBF98C* L_36 = __this->___rms_70;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
		{
			goto IL_0077;
		}
	}
	{
		// Vector3 pos = bounds.center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_7), NULL);
		// Vector3 offset = pos - camPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = L_37;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_38, L_39, NULL);
		V_8 = L_40;
		// float maxDistance = Vector3.Distance(pos, camPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = L_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_1;
		float L_43;
		L_43 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_41, L_42, NULL);
		V_9 = L_43;
		// if (hits == null || hits.Length == 0) {
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_44 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___hits_148;
		G_B19_0 = L_41;
		if (!L_44)
		{
			G_B20_0 = L_41;
			goto IL_0117;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_45 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___hits_148;
		NullCheck(L_45);
		G_B20_0 = G_B19_0;
		if ((((RuntimeArray*)L_45)->max_length))
		{
			G_B21_0 = G_B19_0;
			goto IL_0123;
		}
	}

IL_0117:
	{
		// hits = new RaycastHit[64];
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_46 = (RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)(RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)SZArrayNew(RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___hits_148 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___hits_148), (void*)L_46);
		G_B21_0 = G_B20_0;
	}

IL_0123:
	{
		// int hitCount = Physics.BoxCastNonAlloc(pos - offset, bounds.extents * 0.9f, offset.normalized, hits, Quaternion.identity, maxDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(G_B21_0, L_47, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&V_7), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_49, (0.899999976f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_8), NULL);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_52 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___hits_148;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_53;
		L_53 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		float L_54 = V_9;
		int32_t L_55;
		L_55 = Physics_BoxCastNonAlloc_m471B2702BCB529313AA3F68123F499A636C6B898(L_48, L_50, L_51, L_52, L_53, L_54, NULL);
		V_10 = L_55;
		// for (int k = 0; k < hitCount; k++) {
		V_12 = 0;
		goto IL_01a6;
	}

IL_015a:
	{
		// for (int j = 0; j < occludersCount; j++) {
		V_13 = 0;
		goto IL_019b;
	}

IL_015f:
	{
		// if (hits[k].collider.transform == occluders[j].transform) {
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_56 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___hits_148;
		int32_t L_57 = V_12;
		NullCheck(L_56);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_58;
		L_58 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57))), NULL);
		NullCheck(L_58);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59;
		L_59 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_58, NULL);
		List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA* L_60 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___occluders_144;
		int32_t L_61 = V_13;
		NullCheck(L_60);
		HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* L_62;
		L_62 = List_1_get_Item_mA533E222E90031FD47C0825021C5F9E97B129353(L_60, L_61, List_1_get_Item_mA533E222E90031FD47C0825021C5F9E97B129353_RuntimeMethod_var);
		NullCheck(L_62);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_62, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_64;
		L_64 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_59, L_63, NULL);
		if (!L_64)
		{
			goto IL_0195;
		}
	}
	{
		// cancelSeeThroughThisFrame = true;
		__this->___cancelSeeThroughThisFrame_149 = (bool)1;
		// return;
		return;
	}

IL_0195:
	{
		// for (int j = 0; j < occludersCount; j++) {
		int32_t L_65 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_019b:
	{
		// for (int j = 0; j < occludersCount; j++) {
		int32_t L_66 = V_13;
		int32_t L_67 = V_0;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_015f;
		}
	}
	{
		// for (int k = 0; k < hitCount; k++) {
		int32_t L_68 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_01a6:
	{
		// for (int k = 0; k < hitCount; k++) {
		int32_t L_69 = V_12;
		int32_t L_70 = V_10;
		if ((((int32_t)L_69) < ((int32_t)L_70)))
		{
			goto IL_015a;
		}
	}

IL_01ac:
	{
		// occludersFrameCount.TryGetValue(cam, out lastFrameCount);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Dictionary_2_t2F04C0C0C1E2089CA197A8E9E8045ABC0EB4F5C1* L_71 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___occludersFrameCount_145;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_72 = ___cam1;
		NullCheck(L_71);
		bool L_73;
		L_73 = Dictionary_2_TryGetValue_m74C1A74AF0C5C5A09082C2E95BC15B56937DE09E(L_71, L_72, (&V_3), Dictionary_2_TryGetValue_m74C1A74AF0C5C5A09082C2E95BC15B56937DE09E_RuntimeMethod_var);
		// int currentFrameCount = Time.frameCount;
		int32_t L_74;
		L_74 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		V_4 = L_74;
		// if (currentFrameCount == lastFrameCount) return;
		int32_t L_75 = V_4;
		int32_t L_76 = V_3;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_76))))
		{
			goto IL_01c7;
		}
	}
	{
		// if (currentFrameCount == lastFrameCount) return;
		return;
	}

IL_01c7:
	{
		// occludersFrameCount[cam] = currentFrameCount;
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Dictionary_2_t2F04C0C0C1E2089CA197A8E9E8045ABC0EB4F5C1* L_77 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___occludersFrameCount_145;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_78 = ___cam1;
		int32_t L_79 = V_4;
		NullCheck(L_77);
		Dictionary_2_set_Item_mA53F92CEF2D7E3057257D336DB1AFFBBE844FE57(L_77, L_78, L_79, Dictionary_2_set_Item_mA53F92CEF2D7E3057257D336DB1AFFBBE844FE57_RuntimeMethod_var);
		// if (cbOccluder == null) {
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_80 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___cbOccluder_146;
		if (L_80)
		{
			goto IL_01f4;
		}
	}
	{
		// cbOccluder = new CommandBuffer();
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_81 = (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*)il2cpp_codegen_object_new(CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_il2cpp_TypeInfo_var);
		NullCheck(L_81);
		CommandBuffer__ctor_m9445F1606331B732FCA393591F3E230714FD5FF4(L_81, NULL);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___cbOccluder_146 = L_81;
		Il2CppCodeGenWriteBarrier((void**)(&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___cbOccluder_146), (void*)L_81);
		// cbOccluder.name = "Occluder";
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_82 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___cbOccluder_146;
		NullCheck(L_82);
		CommandBuffer_set_name_mEC83B7FE28D6817A36A8B894A661D6D217488965(L_82, _stringLiteral14126D6B9401D493B66201B4A9C99E7CB5DE3FFF, NULL);
	}

IL_01f4:
	{
		// if (fxMatOccluder == null) {
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_83 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___fxMatOccluder_147;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_84;
		L_84 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_83, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_84)
		{
			goto IL_021f;
		}
	}
	{
		// InitMaterial(ref fxMatOccluder, "HighlightPlus/Geometry/SeeThroughOccluder");
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		HighlightEffect_InitMaterial_m41641602445EACD919BE6383A9200A8A63CB1470(__this, (&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___fxMatOccluder_147), _stringLiteralC1014D7DB4CB07D8B10FBAA0B4B973A88F916870, NULL);
		// if (fxMatOccluder == null) return;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_85 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___fxMatOccluder_147;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_86;
		L_86 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_85, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_86)
		{
			goto IL_021f;
		}
	}
	{
		// if (fxMatOccluder == null) return;
		return;
	}

IL_021f:
	{
		// for (int k = 0; k < occludersCount; k++) {
		V_14 = 0;
		goto IL_02d7;
	}

IL_0227:
	{
		// HighlightSeeThroughOccluder occluder = occluders[k];
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA* L_87 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___occluders_144;
		int32_t L_88 = V_14;
		NullCheck(L_87);
		HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* L_89;
		L_89 = List_1_get_Item_mA533E222E90031FD47C0825021C5F9E97B129353(L_87, L_88, List_1_get_Item_mA533E222E90031FD47C0825021C5F9E97B129353_RuntimeMethod_var);
		V_15 = L_89;
		// if (occluder == null || !occluder.isActiveAndEnabled) continue;
		HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* L_90 = V_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_91;
		L_91 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_90, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_91)
		{
			goto IL_02d1;
		}
	}
	{
		HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* L_92 = V_15;
		NullCheck(L_92);
		bool L_93;
		L_93 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(L_92, NULL);
		if (!L_93)
		{
			goto IL_02d1;
		}
	}
	{
		// if (occluder.detectionMethod == DetectionMethod.Stencil) {
		HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* L_94 = V_15;
		NullCheck(L_94);
		int32_t L_95 = L_94->___detectionMethod_4;
		if (L_95)
		{
			goto IL_02d1;
		}
	}
	{
		// if (occluder.meshData == null || occluder.meshData.Length == 0) continue;
		HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* L_96 = V_15;
		NullCheck(L_96);
		MeshDataU5BU5D_t8BC3C6C8513F1E989D460DAAEB565E4A3FA13A70* L_97 = L_96->___meshData_5;
		if (!L_97)
		{
			goto IL_02d1;
		}
	}
	{
		HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* L_98 = V_15;
		NullCheck(L_98);
		MeshDataU5BU5D_t8BC3C6C8513F1E989D460DAAEB565E4A3FA13A70* L_99 = L_98->___meshData_5;
		NullCheck(L_99);
		if (!(((RuntimeArray*)L_99)->max_length))
		{
			goto IL_02d1;
		}
	}
	{
		// for (int m = 0; m < occluder.meshData.Length; m++) {
		V_16 = 0;
		goto IL_02c4;
	}

IL_026f:
	{
		// Renderer renderer = occluder.meshData[m].renderer;
		HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* L_100 = V_15;
		NullCheck(L_100);
		MeshDataU5BU5D_t8BC3C6C8513F1E989D460DAAEB565E4A3FA13A70* L_101 = L_100->___meshData_5;
		int32_t L_102 = V_16;
		NullCheck(L_101);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_103 = ((L_101)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_102)))->___renderer_0;
		V_17 = L_103;
		// if (renderer.isVisible) {
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_104 = V_17;
		NullCheck(L_104);
		bool L_105;
		L_105 = Renderer_get_isVisible_mBCDDEB0EF27442FD1D910CD26754135B677B8251(L_104, NULL);
		if (!L_105)
		{
			goto IL_02be;
		}
	}
	{
		// for (int s = 0; s < occluder.meshData[m].subMeshCount; s++) {
		V_18 = 0;
		goto IL_02a7;
	}

IL_0292:
	{
		// cb.DrawRenderer(renderer, fxMatOccluder, s);
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_106 = ___cb0;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_107 = V_17;
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_108 = ((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___fxMatOccluder_147;
		int32_t L_109 = V_18;
		NullCheck(L_106);
		CommandBuffer_DrawRenderer_m6667EA1141D0759454E51CDC2A24DB531357C7C6(L_106, L_107, L_108, L_109, NULL);
		// for (int s = 0; s < occluder.meshData[m].subMeshCount; s++) {
		int32_t L_110 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_110, 1));
	}

IL_02a7:
	{
		// for (int s = 0; s < occluder.meshData[m].subMeshCount; s++) {
		int32_t L_111 = V_18;
		HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* L_112 = V_15;
		NullCheck(L_112);
		MeshDataU5BU5D_t8BC3C6C8513F1E989D460DAAEB565E4A3FA13A70* L_113 = L_112->___meshData_5;
		int32_t L_114 = V_16;
		NullCheck(L_113);
		int32_t L_115 = ((L_113)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_114)))->___subMeshCount_1;
		if ((((int32_t)L_111) < ((int32_t)L_115)))
		{
			goto IL_0292;
		}
	}

IL_02be:
	{
		// for (int m = 0; m < occluder.meshData.Length; m++) {
		int32_t L_116 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_116, 1));
	}

IL_02c4:
	{
		// for (int m = 0; m < occluder.meshData.Length; m++) {
		int32_t L_117 = V_16;
		HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* L_118 = V_15;
		NullCheck(L_118);
		MeshDataU5BU5D_t8BC3C6C8513F1E989D460DAAEB565E4A3FA13A70* L_119 = L_118->___meshData_5;
		NullCheck(L_119);
		if ((((int32_t)L_117) < ((int32_t)((int32_t)(((RuntimeArray*)L_119)->max_length)))))
		{
			goto IL_026f;
		}
	}

IL_02d1:
	{
		// for (int k = 0; k < occludersCount; k++) {
		int32_t L_120 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_120, 1));
	}

IL_02d7:
	{
		// for (int k = 0; k < occludersCount; k++) {
		int32_t L_121 = V_14;
		int32_t L_122 = V_0;
		if ((((int32_t)L_121) < ((int32_t)L_122)))
		{
			goto IL_0227;
		}
	}
	{
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect__ctor_m04D46BD388A942DB93352003473A333B94E5B6EA (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, const RuntimeMethod* method) 
{
	{
		// public bool previewInEditor = true;
		__this->___previewInEditor_6 = (bool)1;
		// public LayerMask effectGroupLayer = -1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0;
		L_0 = LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922((-1), NULL);
		__this->___effectGroupLayer_8 = L_0;
		// public bool cullBackFaces = true;
		__this->___cullBackFaces_10 = (bool)1;
		// public bool GPUInstancing = true;
		__this->___GPUInstancing_13 = (bool)1;
		// public bool constantWidth = true;
		__this->___constantWidth_20 = (bool)1;
		// public int subMeshMask = -1;
		__this->___subMeshMask_21 = (-1);
		// public float overlay = 0.5f;
		__this->___overlay_22 = (0.5f);
		// [ColorUsage(true, true)] public Color overlayColor = Color.yellow;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_yellow_m1EF7276EF58050DFBA8921E2383F0249C08D346F_inline(NULL);
		__this->___overlayColor_23 = L_1;
		// public float overlayAnimationSpeed = 1f;
		__this->___overlayAnimationSpeed_24 = (1.0f);
		// public float overlayMinIntensity = 0.5f;
		__this->___overlayMinIntensity_25 = (0.5f);
		// public float overlayBlending = 1.0f;
		__this->___overlayBlending_26 = (1.0f);
		// public float outline = 1f;
		__this->___outline_27 = (1.0f);
		// [ColorUsage(true, true)] public Color outlineColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___outlineColor_28 = L_2;
		// public float outlineWidth = 0.45f;
		__this->___outlineWidth_29 = (0.449999988f);
		// public QualityLevel outlineQuality = QualityLevel.Medium;
		__this->___outlineQuality_30 = 3;
		// public int outlineDownsampling = 2;
		__this->___outlineDownsampling_31 = 2;
		// public float glow = 1f;
		__this->___glow_35 = (1.0f);
		// public float glowWidth = 0.4f;
		__this->___glowWidth_36 = (0.400000006f);
		// public QualityLevel glowQuality = QualityLevel.Medium;
		__this->___glowQuality_37 = 3;
		// public int glowDownsampling = 2;
		__this->___glowDownsampling_38 = 2;
		// [ColorUsage(true, true)] public Color glowHQColor = new Color(0.64f, 1f, 0f, 1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_3), (0.639999986f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___glowHQColor_39 = L_3;
		// public bool glowDithering = true;
		__this->___glowDithering_40 = (bool)1;
		// public float glowMagicNumber1 = 0.75f;
		__this->___glowMagicNumber1_41 = (0.75f);
		// public float glowMagicNumber2 = 0.5f;
		__this->___glowMagicNumber2_42 = (0.5f);
		// public float glowAnimationSpeed = 1f;
		__this->___glowAnimationSpeed_43 = (1.0f);
		// public bool glowBlendPasses = true;
		__this->___glowBlendPasses_46 = (bool)1;
		// public float innerGlowWidth = 1f;
		__this->___innerGlowWidth_49 = (1.0f);
		// [ColorUsage(true, true)] public Color innerGlowColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___innerGlowColor_50 = L_4;
		// [ColorUsage(true, true)] public Color targetFXColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___targetFXColor_54 = L_5;
		// public float targetFXRotationSpeed = 50f;
		__this->___targetFXRotationSpeed_56 = (50.0f);
		// public float targetFXInitialScale = 4f;
		__this->___targetFXInitialScale_57 = (4.0f);
		// public float targetFXEndScale = 1.5f;
		__this->___targetFXEndScale_58 = (1.5f);
		// public float targetFXTransitionDuration = 0.5f;
		__this->___targetFXTransitionDuration_59 = (0.5f);
		// public float targetFXStayDuration = 1.5f;
		__this->___targetFXStayDuration_60 = (1.5f);
		// public float seeThroughIntensity = 0.8f;
		__this->___seeThroughIntensity_66 = (0.800000012f);
		// public float seeThroughTintAlpha = 0.5f;
		__this->___seeThroughTintAlpha_67 = (0.5f);
		// [ColorUsage(true, true)] public Color seeThroughTintColor = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		__this->___seeThroughTintColor_68 = L_6;
		// public float seeThroughNoise = 1f;
		__this->___seeThroughNoise_69 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void HighlightPlus.HighlightEffect::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightEffect__cctor_mBB238F9EB13E7D10AB777FB3AFC8B5DD57F7AB85 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m224A0903E4694C420F3A13D5CDF8BD3FBB9C8D78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m2490F345EB09891D2C13DD1BC202D67C36D38C54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m34B1AD57666C052D367EE98ED14DCF1183D4A774_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t1F3778521E542002424701BBC4C99E4CFB1C891D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t2F04C0C0C1E2089CA197A8E9E8045ABC0EB4F5C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m49BF8D72A498F88B4CA42BCECF1D1C744EE56002_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEB82E11F5C86A91F63F27CA2D407BFDA537EF0A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC895C2717B87D5478D455D92736B5A12A5A041A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static List<HighlightEffect> instances = new List<HighlightEffect>();
		List_1_tC895C2717B87D5478D455D92736B5A12A5A041A9* L_0 = (List_1_tC895C2717B87D5478D455D92736B5A12A5A041A9*)il2cpp_codegen_object_new(List_1_tC895C2717B87D5478D455D92736B5A12A5A041A9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m49BF8D72A498F88B4CA42BCECF1D1C744EE56002(L_0, List_1__ctor_m49BF8D72A498F88B4CA42BCECF1D1C744EE56002_RuntimeMethod_var);
		((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___instances_114 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___instances_114), (void*)L_0);
		// static List<Vector4> matDataDirection = new List<Vector4>();
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_1 = (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)il2cpp_codegen_object_new(List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20(L_1, List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20_RuntimeMethod_var);
		((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matDataDirection_121 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matDataDirection_121), (void*)L_1);
		// static List<Vector4> matDataGlow = new List<Vector4>();
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_2 = (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)il2cpp_codegen_object_new(List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20(L_2, List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20_RuntimeMethod_var);
		((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matDataGlow_122 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matDataGlow_122), (void*)L_2);
		// static List<Vector4> matDataColor = new List<Vector4>();
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_3 = (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*)il2cpp_codegen_object_new(List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20(L_3, List_1__ctor_m7A5FFB71CC0B9A11A8FF0FC535B7D700EF76ED20_RuntimeMethod_var);
		((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matDataColor_123 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___matDataColor_123), (void*)L_3);
		// static Dictionary<Vector3, int> vv = new Dictionary<Vector3, int>();
		Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8* L_4 = (Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8*)il2cpp_codegen_object_new(Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_m34B1AD57666C052D367EE98ED14DCF1183D4A774(L_4, Dictionary_2__ctor_m34B1AD57666C052D367EE98ED14DCF1183D4A774_RuntimeMethod_var);
		((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___vv_136 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___vv_136), (void*)L_4);
		// static Dictionary<Mesh, Mesh> smoothMeshes = new Dictionary<Mesh, Mesh>();
		Dictionary_2_t1F3778521E542002424701BBC4C99E4CFB1C891D* L_5 = (Dictionary_2_t1F3778521E542002424701BBC4C99E4CFB1C891D*)il2cpp_codegen_object_new(Dictionary_2_t1F3778521E542002424701BBC4C99E4CFB1C891D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_m224A0903E4694C420F3A13D5CDF8BD3FBB9C8D78(L_5, Dictionary_2__ctor_m224A0903E4694C420F3A13D5CDF8BD3FBB9C8D78_RuntimeMethod_var);
		((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___smoothMeshes_137 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___smoothMeshes_137), (void*)L_5);
		// static Dictionary<Mesh, Mesh> reorientedMeshes = new Dictionary<Mesh, Mesh>();
		Dictionary_2_t1F3778521E542002424701BBC4C99E4CFB1C891D* L_6 = (Dictionary_2_t1F3778521E542002424701BBC4C99E4CFB1C891D*)il2cpp_codegen_object_new(Dictionary_2_t1F3778521E542002424701BBC4C99E4CFB1C891D_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Dictionary_2__ctor_m224A0903E4694C420F3A13D5CDF8BD3FBB9C8D78(L_6, Dictionary_2__ctor_m224A0903E4694C420F3A13D5CDF8BD3FBB9C8D78_RuntimeMethod_var);
		((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___reorientedMeshes_138 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___reorientedMeshes_138), (void*)L_6);
		// static List<HighlightSeeThroughOccluder> occluders = new List<HighlightSeeThroughOccluder>();
		List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA* L_7 = (List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA*)il2cpp_codegen_object_new(List_1_t3DF4E3C6BDC954EB82E293A3141B2F96F19AD9DA_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_mEB82E11F5C86A91F63F27CA2D407BFDA537EF0A7(L_7, List_1__ctor_mEB82E11F5C86A91F63F27CA2D407BFDA537EF0A7_RuntimeMethod_var);
		((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___occluders_144 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___occluders_144), (void*)L_7);
		// static Dictionary<Camera, int> occludersFrameCount = new Dictionary<Camera, int>();
		Dictionary_2_t2F04C0C0C1E2089CA197A8E9E8045ABC0EB4F5C1* L_8 = (Dictionary_2_t2F04C0C0C1E2089CA197A8E9E8045ABC0EB4F5C1*)il2cpp_codegen_object_new(Dictionary_2_t2F04C0C0C1E2089CA197A8E9E8045ABC0EB4F5C1_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Dictionary_2__ctor_m2490F345EB09891D2C13DD1BC202D67C36D38C54(L_8, Dictionary_2__ctor_m2490F345EB09891D2C13DD1BC202D67C36D38C54_RuntimeMethod_var);
		((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___occludersFrameCount_145 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_StaticFields*)il2cpp_codegen_static_fields_for(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var))->___occludersFrameCount_145), (void*)L_8);
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
// Conversion methods for marshalling of: HighlightPlus.HighlightEffect/ModelMaterials
IL2CPP_EXTERN_C void ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04_marshal_pinvoke(const ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04& unmarshaled, ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04_marshaled_pinvoke& marshaled)
{
	Exception_t* ___transform_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'transform' of type 'ModelMaterials': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___transform_1Exception, NULL);
}
IL2CPP_EXTERN_C void ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04_marshal_pinvoke_back(const ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04_marshaled_pinvoke& marshaled, ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04& unmarshaled)
{
	Exception_t* ___transform_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'transform' of type 'ModelMaterials': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___transform_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: HighlightPlus.HighlightEffect/ModelMaterials
IL2CPP_EXTERN_C void ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04_marshal_pinvoke_cleanup(ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: HighlightPlus.HighlightEffect/ModelMaterials
IL2CPP_EXTERN_C void ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04_marshal_com(const ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04& unmarshaled, ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04_marshaled_com& marshaled)
{
	Exception_t* ___transform_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'transform' of type 'ModelMaterials': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___transform_1Exception, NULL);
}
IL2CPP_EXTERN_C void ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04_marshal_com_back(const ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04_marshaled_com& marshaled, ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04& unmarshaled)
{
	Exception_t* ___transform_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'transform' of type 'ModelMaterials': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___transform_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: HighlightPlus.HighlightEffect/ModelMaterials
IL2CPP_EXTERN_C void ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04_marshal_com_cleanup(ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04_marshaled_com& marshaled)
{
}
// System.Boolean HighlightPlus.HighlightEffect/ModelMaterials::get_preserveOriginalMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ModelMaterials_get_preserveOriginalMesh_m38D52DDFF7E797991380BE4FFB267EF3CB87E1DB (ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04* __this, const RuntimeMethod* method) 
{
	{
		// public bool preserveOriginalMesh { get { return normalsOption == NormalsOption.PreserveOriginal; } }
		int32_t L_0 = __this->___normalsOption_12;
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool ModelMaterials_get_preserveOriginalMesh_m38D52DDFF7E797991380BE4FFB267EF3CB87E1DB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ModelMaterials_t33433C6E5F6913281FE9BE3348EB274973AB9A04*>(__this + _offset);
	bool _returnValue;
	_returnValue = ModelMaterials_get_preserveOriginalMesh_m38D52DDFF7E797991380BE4FFB267EF3CB87E1DB(_thisAdjusted, method);
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
// System.Void HighlightPlus.HighlightManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightManager_OnEnable_m7C7010062695B847D78CFF56A550243B958DED73 (HighlightManager_tA3E889F4F48FB623A6B189B9AC50ECFD48A8465F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_m8739CFB57B40043E52DEBE91B09BFA6342DE9255_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_mF86F84555AEC1D85DD09B9C341C91FFD1BF94F0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18A5138DFD61275AD7D4FB584920473F74C83673);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentObject = null;
		__this->___currentObject_10 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentObject_10), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// currentEffect = null;
		__this->___currentEffect_9 = (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentEffect_9), (void*)(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130*)NULL);
		// if (baseEffect == null) {
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_0 = __this->___baseEffect_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		// baseEffect = GetComponent<HighlightEffect> ();
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_2;
		L_2 = Component_GetComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_m8739CFB57B40043E52DEBE91B09BFA6342DE9255(__this, Component_GetComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_m8739CFB57B40043E52DEBE91B09BFA6342DE9255_RuntimeMethod_var);
		__this->___baseEffect_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseEffect_8), (void*)L_2);
		// if (baseEffect == null) {
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_3 = __this->___baseEffect_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		// baseEffect = gameObject.AddComponent<HighlightEffect> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_6;
		L_6 = GameObject_AddComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_mF86F84555AEC1D85DD09B9C341C91FFD1BF94F0C(L_5, GameObject_AddComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_mF86F84555AEC1D85DD09B9C341C91FFD1BF94F0C_RuntimeMethod_var);
		__this->___baseEffect_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseEffect_8), (void*)L_6);
	}

IL_0047:
	{
		// raycastCamera = GetComponent<Camera> ();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		__this->___raycastCamera_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___raycastCamera_5), (void*)L_7);
		// if (raycastCamera == null) {
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = __this->___raycastCamera_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0084;
		}
	}
	{
		// raycastCamera = GetCamera ();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10;
		L_10 = HighlightManager_GetCamera_m26F0D1288DF912768015149DCBB8F33D499A30EF(NULL);
		__this->___raycastCamera_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___raycastCamera_5), (void*)L_10);
		// if (raycastCamera == null) {
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11 = __this->___raycastCamera_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0084;
		}
	}
	{
		// Debug.LogError ("Highlight Manager: no camera found!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral18A5138DFD61275AD7D4FB584920473F74C83673, NULL);
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightManager_OnDisable_m9C6995959697EFCFE672CB1E146EB69D44A0485D (HighlightManager_tA3E889F4F48FB623A6B189B9AC50ECFD48A8465F* __this, const RuntimeMethod* method) 
{
	{
		// SwitchesCollider (null);
		HighlightManager_SwitchesCollider_m218CF95D99433566BBE504F545DD2F7A46F763A3(__this, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightManager_Update_m13EEFB02D123F254EB1B29AB20366454D54EADBF (HighlightManager_tA3E889F4F48FB623A6B189B9AC50ECFD48A8465F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* G_B7_0 = NULL;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 G_B7_1;
	memset((&G_B7_1), 0, sizeof(G_B7_1));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* G_B6_0 = NULL;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	float G_B8_0 = 0.0f;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* G_B8_1 = NULL;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 G_B8_2;
	memset((&G_B8_2), 0, sizeof(G_B8_2));
	{
		// if (raycastCamera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___raycastCamera_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (raycastSource == RayCastSource.MousePosition) {
		int32_t L_2 = __this->___raycastSource_6;
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		// ray = raycastCamera.ScreenPointToRay (Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___raycastCamera_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		NullCheck(L_3);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_5;
		L_5 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0051;
	}

IL_002a:
	{
		// ray = new Ray (raycastCamera.transform.position, raycastCamera.transform.forward);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___raycastCamera_5;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = __this->___raycastCamera_5;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_10, NULL);
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&V_0), L_8, L_11, NULL);
	}

IL_0051:
	{
		// if (Physics.Raycast(ray, out hitInfo, maxDistance > 0 ? maxDistance : raycastCamera.farClipPlane, layerMask)) {
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_12 = V_0;
		float L_13 = __this->___maxDistance_7;
		G_B6_0 = (&V_1);
		G_B6_1 = L_12;
		if ((((float)L_13) > ((float)(0.0f))))
		{
			G_B7_0 = (&V_1);
			G_B7_1 = L_12;
			goto IL_006e;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = __this->___raycastCamera_5;
		NullCheck(L_14);
		float L_15;
		L_15 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_14, NULL);
		G_B8_0 = L_15;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_0074;
	}

IL_006e:
	{
		float L_16 = __this->___maxDistance_7;
		G_B8_0 = L_16;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_0074:
	{
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_17 = __this->___layerMask_4;
		int32_t L_18;
		L_18 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_17, NULL);
		bool L_19;
		L_19 = Physics_Raycast_m6140FC91F32547F11C687FA1A002850598B74A0D(G_B8_2, G_B8_1, G_B8_0, L_18, NULL);
		if (!L_19)
		{
			goto IL_00ad;
		}
	}
	{
		// if (hitInfo.collider != currentObject) {
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_20;
		L_20 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___currentObject_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_20, L_21, NULL);
		if (!L_22)
		{
			goto IL_00ac;
		}
	}
	{
		// SwitchesCollider (hitInfo.collider.transform);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_23;
		L_23 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		HighlightManager_SwitchesCollider_m218CF95D99433566BBE504F545DD2F7A46F763A3(__this, L_24, NULL);
	}

IL_00ac:
	{
		// return;
		return;
	}

IL_00ad:
	{
		// SwitchesCollider (null);
		HighlightManager_SwitchesCollider_m218CF95D99433566BBE504F545DD2F7A46F763A3(__this, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightManager::SwitchesCollider(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightManager_SwitchesCollider_m218CF95D99433566BBE504F545DD2F7A46F763A3 (HighlightManager_tA3E889F4F48FB623A6B189B9AC50ECFD48A8465F* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___newObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_m8739CFB57B40043E52DEBE91B09BFA6342DE9255_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913_m15999E44C865C0D1B238518237AE143FDC9C32BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* V_0 = NULL;
	HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* V_1 = NULL;
	HighlightManager_tA3E889F4F48FB623A6B189B9AC50ECFD48A8465F* G_B9_0 = NULL;
	HighlightManager_tA3E889F4F48FB623A6B189B9AC50ECFD48A8465F* G_B8_0 = NULL;
	HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* G_B10_0 = NULL;
	HighlightManager_tA3E889F4F48FB623A6B189B9AC50ECFD48A8465F* G_B10_1 = NULL;
	{
		// if (currentEffect != null) {
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_0 = __this->___currentEffect_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// currentEffect.SetHighlighted (false);
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_2 = __this->___currentEffect_9;
		NullCheck(L_2);
		HighlightEffect_SetHighlighted_m0E7796EB34B79F2BD65D6ADC618CEF5661CD1E46(L_2, (bool)0, NULL);
		// currentEffect = null;
		__this->___currentEffect_9 = (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentEffect_9), (void*)(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130*)NULL);
	}

IL_0021:
	{
		// currentObject = newObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___newObject0;
		__this->___currentObject_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentObject_10), (void*)L_3);
		// if (newObject == null) return;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___newObject0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// if (newObject == null) return;
		return;
	}

IL_0032:
	{
		// HighlightTrigger ht = newObject.GetComponent<HighlightTrigger>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___newObject0;
		NullCheck(L_6);
		HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* L_7;
		L_7 = Component_GetComponent_TisHighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913_m15999E44C865C0D1B238518237AE143FDC9C32BE(L_6, Component_GetComponent_TisHighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913_m15999E44C865C0D1B238518237AE143FDC9C32BE_RuntimeMethod_var);
		V_0 = L_7;
		// if (ht != null && ht.enabled)
		HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* L_10 = V_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_10, NULL);
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		// return;
		return;
	}

IL_004b:
	{
		// HighlightEffect otherEffect = newObject.GetComponent<HighlightEffect> ();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = ___newObject0;
		NullCheck(L_12);
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_13;
		L_13 = Component_GetComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_m8739CFB57B40043E52DEBE91B09BFA6342DE9255(L_12, Component_GetComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_m8739CFB57B40043E52DEBE91B09BFA6342DE9255_RuntimeMethod_var);
		V_1 = L_13;
		// currentEffect = otherEffect != null ? otherEffect : baseEffect;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B8_0 = __this;
		if (L_15)
		{
			G_B9_0 = __this;
			goto IL_0064;
		}
	}
	{
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_16 = __this->___baseEffect_8;
		G_B10_0 = L_16;
		G_B10_1 = G_B8_0;
		goto IL_0065;
	}

IL_0064:
	{
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_17 = V_1;
		G_B10_0 = L_17;
		G_B10_1 = G_B9_0;
	}

IL_0065:
	{
		NullCheck(G_B10_1);
		G_B10_1->___currentEffect_9 = G_B10_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B10_1->___currentEffect_9), (void*)G_B10_0);
		// currentEffect.SetTarget (currentObject.transform);
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_18 = __this->___currentEffect_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___currentObject_10;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		NullCheck(L_18);
		HighlightEffect_SetTarget_m4C130CF82BB4E4BD902B3FEA5C6677EC0DC45A5A(L_18, L_20, NULL);
		// currentEffect.SetHighlighted (true);
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_21 = __this->___currentEffect_9;
		NullCheck(L_21);
		HighlightEffect_SetHighlighted_m0E7796EB34B79F2BD65D6ADC618CEF5661CD1E46(L_21, (bool)1, NULL);
		// }
		return;
	}
}
// UnityEngine.Camera HighlightPlus.HighlightManager::GetCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* HighlightManager_GetCamera_m26F0D1288DF912768015149DCBB8F33D499A30EF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3D85609E0A4EE301B50F6AF691611EA62DD26F6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	{
		// Camera raycastCamera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		V_0 = L_0;
		// if (raycastCamera == null) {
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// raycastCamera = FindObjectOfType<Camera> ();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Object_FindObjectOfType_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3D85609E0A4EE301B50F6AF691611EA62DD26F6E(Object_FindObjectOfType_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3D85609E0A4EE301B50F6AF691611EA62DD26F6E_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0015:
	{
		// return raycastCamera;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = V_0;
		return L_4;
	}
}
// System.Void HighlightPlus.HighlightManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightManager__ctor_mA1AEE313D049E4B51474AB2B4B7B592A0EF0FB51 (HighlightManager_tA3E889F4F48FB623A6B189B9AC50ECFD48A8465F* __this, const RuntimeMethod* method) 
{
	{
		// public LayerMask layerMask = -1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0;
		L_0 = LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922((-1), NULL);
		__this->___layerMask_4 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void HighlightPlus.HighlightProfile::Load(HighlightPlus.HighlightEffect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightProfile_Load_mE43F76141CCCAA3D5B113AA2AF598F6BD9D5FC30 (HighlightProfile_t4149BE3C0201F863B4CA7CEDFEC447B696183CA2* __this, HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* ___effect0, const RuntimeMethod* method) 
{
	{
		// effect.effectGroup = effectGroup;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_0 = ___effect0;
		int32_t L_1 = __this->___effectGroup_4;
		NullCheck(L_0);
		L_0->___effectGroup_7 = L_1;
		// effect.effectGroupLayer = effectGroupLayer;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_2 = ___effect0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_3 = __this->___effectGroupLayer_5;
		NullCheck(L_2);
		L_2->___effectGroupLayer_8 = L_3;
		// effect.alphaCutOff = alphaCutOff;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_4 = ___effect0;
		float L_5 = __this->___alphaCutOff_6;
		NullCheck(L_4);
		L_4->___alphaCutOff_9 = L_5;
		// effect.cullBackFaces = cullBackFaces;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_6 = ___effect0;
		bool L_7 = __this->___cullBackFaces_7;
		NullCheck(L_6);
		L_6->___cullBackFaces_10 = L_7;
		// effect.normalsOption = normalsOption;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_8 = ___effect0;
		int32_t L_9 = __this->___normalsOption_8;
		NullCheck(L_8);
		L_8->___normalsOption_14 = L_9;
		// effect.fadeInDuration = fadeInDuration;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_10 = ___effect0;
		float L_11 = __this->___fadeInDuration_9;
		NullCheck(L_10);
		L_10->___fadeInDuration_17 = L_11;
		// effect.fadeOutDuration = fadeOutDuration;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_12 = ___effect0;
		float L_13 = __this->___fadeOutDuration_10;
		NullCheck(L_12);
		L_12->___fadeOutDuration_18 = L_13;
		// effect.constantWidth = constantWidth;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_14 = ___effect0;
		bool L_15 = __this->___constantWidth_11;
		NullCheck(L_14);
		L_14->___constantWidth_20 = L_15;
		// effect.overlay = overlay;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_16 = ___effect0;
		float L_17 = __this->___overlay_12;
		NullCheck(L_16);
		L_16->___overlay_22 = L_17;
		// effect.overlayColor = overlayColor;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_18 = ___effect0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = __this->___overlayColor_13;
		NullCheck(L_18);
		L_18->___overlayColor_23 = L_19;
		// effect.overlayAnimationSpeed = overlayAnimationSpeed;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_20 = ___effect0;
		float L_21 = __this->___overlayAnimationSpeed_14;
		NullCheck(L_20);
		L_20->___overlayAnimationSpeed_24 = L_21;
		// effect.overlayMinIntensity = overlayMinIntensity;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_22 = ___effect0;
		float L_23 = __this->___overlayMinIntensity_15;
		NullCheck(L_22);
		L_22->___overlayMinIntensity_25 = L_23;
		// effect.overlayBlending = overlayBlending;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_24 = ___effect0;
		float L_25 = __this->___overlayBlending_16;
		NullCheck(L_24);
		L_24->___overlayBlending_26 = L_25;
		// effect.outline = outline;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_26 = ___effect0;
		float L_27 = __this->___outline_17;
		NullCheck(L_26);
		L_26->___outline_27 = L_27;
		// effect.outlineColor = outlineColor;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_28 = ___effect0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = __this->___outlineColor_18;
		NullCheck(L_28);
		L_28->___outlineColor_28 = L_29;
		// effect.outlineWidth = outlineWidth;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_30 = ___effect0;
		float L_31 = __this->___outlineWidth_19;
		NullCheck(L_30);
		L_30->___outlineWidth_29 = L_31;
		// effect.outlineQuality = outlineQuality;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_32 = ___effect0;
		int32_t L_33 = __this->___outlineQuality_20;
		NullCheck(L_32);
		L_32->___outlineQuality_30 = L_33;
		// effect.outlineDownsampling = outlineDownsampling;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_34 = ___effect0;
		int32_t L_35 = __this->___outlineDownsampling_21;
		NullCheck(L_34);
		L_34->___outlineDownsampling_31 = L_35;
		// effect.outlineVisibility = outlineVisibility;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_36 = ___effect0;
		int32_t L_37 = __this->___outlineVisibility_22;
		NullCheck(L_36);
		L_36->___outlineVisibility_32 = L_37;
		// effect.outlineIndependent = outlineIndependent;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_38 = ___effect0;
		bool L_39 = __this->___outlineIndependent_23;
		NullCheck(L_38);
		L_38->___outlineIndependent_34 = L_39;
		// effect.glow = glow;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_40 = ___effect0;
		float L_41 = __this->___glow_24;
		NullCheck(L_40);
		L_40->___glow_35 = L_41;
		// effect.glowWidth = glowWidth;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_42 = ___effect0;
		float L_43 = __this->___glowWidth_25;
		NullCheck(L_42);
		L_42->___glowWidth_36 = L_43;
		// effect.glowQuality = glowQuality;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_44 = ___effect0;
		int32_t L_45 = __this->___glowQuality_26;
		NullCheck(L_44);
		L_44->___glowQuality_37 = L_45;
		// effect.glowDownsampling = glowDownsampling;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_46 = ___effect0;
		int32_t L_47 = __this->___glowDownsampling_27;
		NullCheck(L_46);
		L_46->___glowDownsampling_38 = L_47;
		// effect.glowHQColor = glowHQColor;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_48 = ___effect0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_49 = __this->___glowHQColor_28;
		NullCheck(L_48);
		L_48->___glowHQColor_39 = L_49;
		// effect.glowDithering = glowDithering;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_50 = ___effect0;
		bool L_51 = __this->___glowDithering_29;
		NullCheck(L_50);
		L_50->___glowDithering_40 = L_51;
		// effect.glowMagicNumber1 = glowMagicNumber1;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_52 = ___effect0;
		float L_53 = __this->___glowMagicNumber1_30;
		NullCheck(L_52);
		L_52->___glowMagicNumber1_41 = L_53;
		// effect.glowMagicNumber2 = glowMagicNumber2;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_54 = ___effect0;
		float L_55 = __this->___glowMagicNumber2_31;
		NullCheck(L_54);
		L_54->___glowMagicNumber2_42 = L_55;
		// effect.glowAnimationSpeed = glowAnimationSpeed;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_56 = ___effect0;
		float L_57 = __this->___glowAnimationSpeed_32;
		NullCheck(L_56);
		L_56->___glowAnimationSpeed_43 = L_57;
		// effect.glowVisibility = glowVisibility;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_58 = ___effect0;
		int32_t L_59 = __this->___glowVisibility_33;
		NullCheck(L_58);
		L_58->___glowVisibility_44 = L_59;
		// effect.glowBlendPasses = glowBlendPasses;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_60 = ___effect0;
		bool L_61 = __this->___glowBlendPasses_34;
		NullCheck(L_60);
		L_60->___glowBlendPasses_46 = L_61;
		// effect.glowPasses = GetGlowPassesCopy (glowPasses);
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_62 = ___effect0;
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_63 = __this->___glowPasses_35;
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_64;
		L_64 = HighlightProfile_GetGlowPassesCopy_m3E742C02F915AD34CB66ABF67A26A1AF2EAF0893(__this, L_63, NULL);
		NullCheck(L_62);
		L_62->___glowPasses_47 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&L_62->___glowPasses_47), (void*)L_64);
		// effect.innerGlow = innerGlow;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_65 = ___effect0;
		float L_66 = __this->___innerGlow_36;
		NullCheck(L_65);
		L_65->___innerGlow_48 = L_66;
		// effect.innerGlowWidth = innerGlowWidth;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_67 = ___effect0;
		float L_68 = __this->___innerGlowWidth_37;
		NullCheck(L_67);
		L_67->___innerGlowWidth_49 = L_68;
		// effect.innerGlowColor = innerGlowColor;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_69 = ___effect0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_70 = __this->___innerGlowColor_38;
		NullCheck(L_69);
		L_69->___innerGlowColor_50 = L_70;
		// effect.innerGlowVisibility = innerGlowVisibility;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_71 = ___effect0;
		int32_t L_72 = __this->___innerGlowVisibility_39;
		NullCheck(L_71);
		L_71->___innerGlowVisibility_51 = L_72;
		// effect.targetFX = targetFX;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_73 = ___effect0;
		bool L_74 = __this->___targetFX_40;
		NullCheck(L_73);
		L_73->___targetFX_52 = L_74;
		// effect.targetFXColor = targetFXColor;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_75 = ___effect0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_76 = __this->___targetFXColor_42;
		NullCheck(L_75);
		L_75->___targetFXColor_54 = L_76;
		// effect.targetFXEndScale = targetFXEndScale;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_77 = ___effect0;
		float L_78 = __this->___targetFXEndScale_45;
		NullCheck(L_77);
		L_77->___targetFXEndScale_58 = L_78;
		// effect.targetFXInitialScale = targetFXInitialScale;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_79 = ___effect0;
		float L_80 = __this->___targetFXInitialScale_44;
		NullCheck(L_79);
		L_79->___targetFXInitialScale_57 = L_80;
		// effect.targetFXRotationSpeed = targetFXRotationSpeed;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_81 = ___effect0;
		float L_82 = __this->___targetFXRotationSpeed_43;
		NullCheck(L_81);
		L_81->___targetFXRotationSpeed_56 = L_82;
		// effect.targetFXStayDuration = targetFXStayDuration;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_83 = ___effect0;
		float L_84 = __this->___targetFXStayDuration_47;
		NullCheck(L_83);
		L_83->___targetFXStayDuration_60 = L_84;
		// effect.targetFXTexture = targetFXTexture;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_85 = ___effect0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_86 = __this->___targetFXTexture_41;
		NullCheck(L_85);
		L_85->___targetFXTexture_53 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&L_85->___targetFXTexture_53), (void*)L_86);
		// effect.targetFXTransitionDuration = targetFXTransitionDuration;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_87 = ___effect0;
		float L_88 = __this->___targetFXTransitionDuration_46;
		NullCheck(L_87);
		L_87->___targetFXTransitionDuration_59 = L_88;
		// effect.seeThrough = seeThrough;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_89 = ___effect0;
		int32_t L_90 = __this->___seeThrough_48;
		NullCheck(L_89);
		L_89->___seeThrough_65 = L_90;
		// effect.seeThroughIntensity = seeThroughIntensity;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_91 = ___effect0;
		float L_92 = __this->___seeThroughIntensity_49;
		NullCheck(L_91);
		L_91->___seeThroughIntensity_66 = L_92;
		// effect.seeThroughTintAlpha = seeThroughTintAlpha;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_93 = ___effect0;
		float L_94 = __this->___seeThroughTintAlpha_50;
		NullCheck(L_93);
		L_93->___seeThroughTintAlpha_67 = L_94;
		// effect.seeThroughTintColor = seeThroughTintColor;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_95 = ___effect0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_96 = __this->___seeThroughTintColor_51;
		NullCheck(L_95);
		L_95->___seeThroughTintColor_68 = L_96;
		// effect.seeThroughNoise = seeThroughNoise;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_97 = ___effect0;
		float L_98 = __this->___seeThroughNoise_52;
		NullCheck(L_97);
		L_97->___seeThroughNoise_69 = L_98;
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightProfile::Save(HighlightPlus.HighlightEffect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightProfile_Save_m5E746756E4CF4800BE3D9415E43BD1D50099B44C (HighlightProfile_t4149BE3C0201F863B4CA7CEDFEC447B696183CA2* __this, HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* ___effect0, const RuntimeMethod* method) 
{
	{
		// effectGroup = effect.effectGroup;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_0 = ___effect0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___effectGroup_7;
		__this->___effectGroup_4 = L_1;
		// effectGroupLayer = effect.effectGroupLayer;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_2 = ___effect0;
		NullCheck(L_2);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_3 = L_2->___effectGroupLayer_8;
		__this->___effectGroupLayer_5 = L_3;
		// alphaCutOff = effect.alphaCutOff;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_4 = ___effect0;
		NullCheck(L_4);
		float L_5 = L_4->___alphaCutOff_9;
		__this->___alphaCutOff_6 = L_5;
		// cullBackFaces = effect.cullBackFaces;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_6 = ___effect0;
		NullCheck(L_6);
		bool L_7 = L_6->___cullBackFaces_10;
		__this->___cullBackFaces_7 = L_7;
		// normalsOption = effect.normalsOption;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_8 = ___effect0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___normalsOption_14;
		__this->___normalsOption_8 = L_9;
		// fadeInDuration = effect.fadeInDuration;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_10 = ___effect0;
		NullCheck(L_10);
		float L_11 = L_10->___fadeInDuration_17;
		__this->___fadeInDuration_9 = L_11;
		// fadeOutDuration = effect.fadeOutDuration;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_12 = ___effect0;
		NullCheck(L_12);
		float L_13 = L_12->___fadeOutDuration_18;
		__this->___fadeOutDuration_10 = L_13;
		// constantWidth = effect.constantWidth;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_14 = ___effect0;
		NullCheck(L_14);
		bool L_15 = L_14->___constantWidth_20;
		__this->___constantWidth_11 = L_15;
		// overlay = effect.overlay;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_16 = ___effect0;
		NullCheck(L_16);
		float L_17 = L_16->___overlay_22;
		__this->___overlay_12 = L_17;
		// overlayColor = effect.overlayColor;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_18 = ___effect0;
		NullCheck(L_18);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = L_18->___overlayColor_23;
		__this->___overlayColor_13 = L_19;
		// overlayAnimationSpeed = effect.overlayAnimationSpeed;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_20 = ___effect0;
		NullCheck(L_20);
		float L_21 = L_20->___overlayAnimationSpeed_24;
		__this->___overlayAnimationSpeed_14 = L_21;
		// overlayMinIntensity = effect.overlayMinIntensity;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_22 = ___effect0;
		NullCheck(L_22);
		float L_23 = L_22->___overlayMinIntensity_25;
		__this->___overlayMinIntensity_15 = L_23;
		// overlayBlending = effect.overlayBlending;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_24 = ___effect0;
		NullCheck(L_24);
		float L_25 = L_24->___overlayBlending_26;
		__this->___overlayBlending_16 = L_25;
		// outline = effect.outline;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_26 = ___effect0;
		NullCheck(L_26);
		float L_27 = L_26->___outline_27;
		__this->___outline_17 = L_27;
		// outlineColor = effect.outlineColor;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_28 = ___effect0;
		NullCheck(L_28);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = L_28->___outlineColor_28;
		__this->___outlineColor_18 = L_29;
		// outlineWidth = effect.outlineWidth;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_30 = ___effect0;
		NullCheck(L_30);
		float L_31 = L_30->___outlineWidth_29;
		__this->___outlineWidth_19 = L_31;
		// outlineQuality = effect.outlineQuality;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_32 = ___effect0;
		NullCheck(L_32);
		int32_t L_33 = L_32->___outlineQuality_30;
		__this->___outlineQuality_20 = L_33;
		// outlineDownsampling = effect.outlineDownsampling;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_34 = ___effect0;
		NullCheck(L_34);
		int32_t L_35 = L_34->___outlineDownsampling_31;
		__this->___outlineDownsampling_21 = L_35;
		// outlineVisibility = effect.outlineVisibility;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_36 = ___effect0;
		NullCheck(L_36);
		int32_t L_37 = L_36->___outlineVisibility_32;
		__this->___outlineVisibility_22 = L_37;
		// outlineIndependent = effect.outlineIndependent;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_38 = ___effect0;
		NullCheck(L_38);
		bool L_39 = L_38->___outlineIndependent_34;
		__this->___outlineIndependent_23 = L_39;
		// glow = effect.glow;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_40 = ___effect0;
		NullCheck(L_40);
		float L_41 = L_40->___glow_35;
		__this->___glow_24 = L_41;
		// glowWidth = effect.glowWidth;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_42 = ___effect0;
		NullCheck(L_42);
		float L_43 = L_42->___glowWidth_36;
		__this->___glowWidth_25 = L_43;
		// glowQuality = effect.glowQuality;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_44 = ___effect0;
		NullCheck(L_44);
		int32_t L_45 = L_44->___glowQuality_37;
		__this->___glowQuality_26 = L_45;
		// glowDownsampling = effect.glowDownsampling;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_46 = ___effect0;
		NullCheck(L_46);
		int32_t L_47 = L_46->___glowDownsampling_38;
		__this->___glowDownsampling_27 = L_47;
		// glowHQColor = effect.glowHQColor;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_48 = ___effect0;
		NullCheck(L_48);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_49 = L_48->___glowHQColor_39;
		__this->___glowHQColor_28 = L_49;
		// glowDithering = effect.glowDithering;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_50 = ___effect0;
		NullCheck(L_50);
		bool L_51 = L_50->___glowDithering_40;
		__this->___glowDithering_29 = L_51;
		// glowMagicNumber1 = effect.glowMagicNumber1;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_52 = ___effect0;
		NullCheck(L_52);
		float L_53 = L_52->___glowMagicNumber1_41;
		__this->___glowMagicNumber1_30 = L_53;
		// glowMagicNumber2 = effect.glowMagicNumber2;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_54 = ___effect0;
		NullCheck(L_54);
		float L_55 = L_54->___glowMagicNumber2_42;
		__this->___glowMagicNumber2_31 = L_55;
		// glowAnimationSpeed = effect.glowAnimationSpeed;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_56 = ___effect0;
		NullCheck(L_56);
		float L_57 = L_56->___glowAnimationSpeed_43;
		__this->___glowAnimationSpeed_32 = L_57;
		// glowVisibility = effect.glowVisibility;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_58 = ___effect0;
		NullCheck(L_58);
		int32_t L_59 = L_58->___glowVisibility_44;
		__this->___glowVisibility_33 = L_59;
		// glowBlendPasses = effect.glowBlendPasses;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_60 = ___effect0;
		NullCheck(L_60);
		bool L_61 = L_60->___glowBlendPasses_46;
		__this->___glowBlendPasses_34 = L_61;
		// glowPasses = GetGlowPassesCopy (effect.glowPasses);
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_62 = ___effect0;
		NullCheck(L_62);
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_63 = L_62->___glowPasses_47;
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_64;
		L_64 = HighlightProfile_GetGlowPassesCopy_m3E742C02F915AD34CB66ABF67A26A1AF2EAF0893(__this, L_63, NULL);
		__this->___glowPasses_35 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___glowPasses_35), (void*)L_64);
		// innerGlow = effect.innerGlow;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_65 = ___effect0;
		NullCheck(L_65);
		float L_66 = L_65->___innerGlow_48;
		__this->___innerGlow_36 = L_66;
		// innerGlowWidth = effect.innerGlowWidth;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_67 = ___effect0;
		NullCheck(L_67);
		float L_68 = L_67->___innerGlowWidth_49;
		__this->___innerGlowWidth_37 = L_68;
		// innerGlowColor = effect.innerGlowColor;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_69 = ___effect0;
		NullCheck(L_69);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_70 = L_69->___innerGlowColor_50;
		__this->___innerGlowColor_38 = L_70;
		// innerGlowVisibility = effect.innerGlowVisibility;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_71 = ___effect0;
		NullCheck(L_71);
		int32_t L_72 = L_71->___innerGlowVisibility_51;
		__this->___innerGlowVisibility_39 = L_72;
		// targetFX = effect.targetFX;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_73 = ___effect0;
		NullCheck(L_73);
		bool L_74 = L_73->___targetFX_52;
		__this->___targetFX_40 = L_74;
		// targetFXColor = effect.targetFXColor;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_75 = ___effect0;
		NullCheck(L_75);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_76 = L_75->___targetFXColor_54;
		__this->___targetFXColor_42 = L_76;
		// targetFXEndScale = effect.targetFXEndScale;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_77 = ___effect0;
		NullCheck(L_77);
		float L_78 = L_77->___targetFXEndScale_58;
		__this->___targetFXEndScale_45 = L_78;
		// targetFXInitialScale = effect.targetFXInitialScale;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_79 = ___effect0;
		NullCheck(L_79);
		float L_80 = L_79->___targetFXInitialScale_57;
		__this->___targetFXInitialScale_44 = L_80;
		// targetFXRotationSpeed = effect.targetFXRotationSpeed;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_81 = ___effect0;
		NullCheck(L_81);
		float L_82 = L_81->___targetFXRotationSpeed_56;
		__this->___targetFXRotationSpeed_43 = L_82;
		// targetFXStayDuration = effect.targetFXStayDuration;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_83 = ___effect0;
		NullCheck(L_83);
		float L_84 = L_83->___targetFXStayDuration_60;
		__this->___targetFXStayDuration_47 = L_84;
		// targetFXTexture = effect.targetFXTexture;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_85 = ___effect0;
		NullCheck(L_85);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_86 = L_85->___targetFXTexture_53;
		__this->___targetFXTexture_41 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetFXTexture_41), (void*)L_86);
		// targetFXTransitionDuration = effect.targetFXTransitionDuration;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_87 = ___effect0;
		NullCheck(L_87);
		float L_88 = L_87->___targetFXTransitionDuration_59;
		__this->___targetFXTransitionDuration_46 = L_88;
		// seeThrough = effect.seeThrough;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_89 = ___effect0;
		NullCheck(L_89);
		int32_t L_90 = L_89->___seeThrough_65;
		__this->___seeThrough_48 = L_90;
		// seeThroughIntensity = effect.seeThroughIntensity;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_91 = ___effect0;
		NullCheck(L_91);
		float L_92 = L_91->___seeThroughIntensity_66;
		__this->___seeThroughIntensity_49 = L_92;
		// seeThroughTintAlpha = effect.seeThroughTintAlpha;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_93 = ___effect0;
		NullCheck(L_93);
		float L_94 = L_93->___seeThroughTintAlpha_67;
		__this->___seeThroughTintAlpha_50 = L_94;
		// seeThroughTintColor = effect.seeThroughTintColor;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_95 = ___effect0;
		NullCheck(L_95);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_96 = L_95->___seeThroughTintColor_68;
		__this->___seeThroughTintColor_51 = L_96;
		// seeThroughNoise = effect.seeThroughNoise;
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_97 = ___effect0;
		NullCheck(L_97);
		float L_98 = L_97->___seeThroughNoise_69;
		__this->___seeThroughNoise_52 = L_98;
		// }
		return;
	}
}
// HighlightPlus.GlowPassData[] HighlightPlus.HighlightProfile::GetGlowPassesCopy(HighlightPlus.GlowPassData[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* HighlightProfile_GetGlowPassesCopy_m3E742C02F915AD34CB66ABF67A26A1AF2EAF0893 (HighlightProfile_t4149BE3C0201F863B4CA7CEDFEC447B696183CA2* __this, GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* ___glowPasses0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (glowPasses == null) {
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_0 = ___glowPasses0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return new GlowPassData[0];
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_1 = (GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F*)(GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F*)SZArrayNew(GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_1;
	}

IL_000a:
	{
		// GlowPassData[] pd = new GlowPassData[glowPasses.Length];
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_2 = ___glowPasses0;
		NullCheck(L_2);
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_3 = (GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F*)(GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F*)SZArrayNew(GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		V_0 = L_3;
		// for (int k = 0; k < glowPasses.Length; k++) {
		V_1 = 0;
		goto IL_0063;
	}

IL_0017:
	{
		// pd [k].alpha = glowPasses [k].alpha;
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_6 = ___glowPasses0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		float L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___alpha_1;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___alpha_1 = L_8;
		// pd [k].color = glowPasses [k].color;
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_11 = ___glowPasses0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___color_2;
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___color_2 = L_13;
		// pd [k].offset = glowPasses [k].offset;
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_16 = ___glowPasses0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		float L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___offset_0;
		((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___offset_0 = L_18;
		// for (int k = 0; k < glowPasses.Length; k++) {
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0063:
	{
		// for (int k = 0; k < glowPasses.Length; k++) {
		int32_t L_20 = V_1;
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_21 = ___glowPasses0;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		// return pd;
		GlowPassDataU5BU5D_t4804B65D6D333D7A1DBDE058F910F8B68AAD380F* L_22 = V_0;
		return L_22;
	}
}
// System.Void HighlightPlus.HighlightProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightProfile__ctor_mFAD8A8C724C2157347D0A90F2EA2C3799B55CA72 (HighlightProfile_t4149BE3C0201F863B4CA7CEDFEC447B696183CA2* __this, const RuntimeMethod* method) 
{
	{
		// public LayerMask effectGroupLayer = -1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0;
		L_0 = LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922((-1), NULL);
		__this->___effectGroupLayer_5 = L_0;
		// public bool cullBackFaces = true;
		__this->___cullBackFaces_7 = (bool)1;
		// public bool constantWidth = true;
		__this->___constantWidth_11 = (bool)1;
		// public float overlay = 0.5f;
		__this->___overlay_12 = (0.5f);
		// [ColorUsage(true, true)] public Color overlayColor = Color.yellow;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_yellow_m1EF7276EF58050DFBA8921E2383F0249C08D346F_inline(NULL);
		__this->___overlayColor_13 = L_1;
		// public float overlayAnimationSpeed = 1f;
		__this->___overlayAnimationSpeed_14 = (1.0f);
		// public float overlayMinIntensity = 0.5f;
		__this->___overlayMinIntensity_15 = (0.5f);
		// public float overlayBlending = 1.0f;
		__this->___overlayBlending_16 = (1.0f);
		// public float outline = 1f;
		__this->___outline_17 = (1.0f);
		// [ColorUsage(true, true)] public Color outlineColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		__this->___outlineColor_18 = L_2;
		// public float outlineWidth = 0.45f;
		__this->___outlineWidth_19 = (0.449999988f);
		// public QualityLevel outlineQuality = QualityLevel.High;
		__this->___outlineQuality_20 = 1;
		// public int outlineDownsampling = 2;
		__this->___outlineDownsampling_21 = 2;
		// public float glow = 1f;
		__this->___glow_24 = (1.0f);
		// public float glowWidth = 0.4f;
		__this->___glowWidth_25 = (0.400000006f);
		// public QualityLevel glowQuality = QualityLevel.High;
		__this->___glowQuality_26 = 1;
		// public int glowDownsampling = 2;
		__this->___glowDownsampling_27 = 2;
		// [ColorUsage(true, true)] public Color glowHQColor = new Color (0.64f, 1f, 0f, 1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_3), (0.639999986f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___glowHQColor_28 = L_3;
		// public bool glowDithering = true;
		__this->___glowDithering_29 = (bool)1;
		// public float glowMagicNumber1 = 0.75f;
		__this->___glowMagicNumber1_30 = (0.75f);
		// public float glowMagicNumber2 = 0.5f;
		__this->___glowMagicNumber2_31 = (0.5f);
		// public float glowAnimationSpeed = 1f;
		__this->___glowAnimationSpeed_32 = (1.0f);
		// public bool glowBlendPasses = true;
		__this->___glowBlendPasses_34 = (bool)1;
		// public float innerGlowWidth = 1f;
		__this->___innerGlowWidth_37 = (1.0f);
		// [ColorUsage(true, true)] public Color innerGlowColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___innerGlowColor_38 = L_4;
		// [ColorUsage(true, true)] public Color targetFXColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->___targetFXColor_42 = L_5;
		// public float targetFXRotationSpeed = 50f;
		__this->___targetFXRotationSpeed_43 = (50.0f);
		// public float targetFXInitialScale = 4f;
		__this->___targetFXInitialScale_44 = (4.0f);
		// public float targetFXEndScale = 1.5f;
		__this->___targetFXEndScale_45 = (1.5f);
		// public float targetFXTransitionDuration = 0.5f;
		__this->___targetFXTransitionDuration_46 = (0.5f);
		// public float targetFXStayDuration = 1.5f;
		__this->___targetFXStayDuration_47 = (1.5f);
		// public float seeThroughIntensity = 0.8f;
		__this->___seeThroughIntensity_49 = (0.800000012f);
		// public float seeThroughTintAlpha = 0.5f;
		__this->___seeThroughTintAlpha_50 = (0.5f);
		// [ColorUsage(true, true)] public Color seeThroughTintColor = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		__this->___seeThroughTintColor_51 = L_6;
		// public float seeThroughNoise = 1f;
		__this->___seeThroughNoise_52 = (1.0f);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// Conversion methods for marshalling of: HighlightPlus.MeshData
IL2CPP_EXTERN_C void MeshData_tB7B04F2B6CC400BB80D211CBDE8F84C422A0A803_marshal_pinvoke(const MeshData_tB7B04F2B6CC400BB80D211CBDE8F84C422A0A803& unmarshaled, MeshData_tB7B04F2B6CC400BB80D211CBDE8F84C422A0A803_marshaled_pinvoke& marshaled)
{
	Exception_t* ___renderer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'renderer' of type 'MeshData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___renderer_0Exception, NULL);
}
IL2CPP_EXTERN_C void MeshData_tB7B04F2B6CC400BB80D211CBDE8F84C422A0A803_marshal_pinvoke_back(const MeshData_tB7B04F2B6CC400BB80D211CBDE8F84C422A0A803_marshaled_pinvoke& marshaled, MeshData_tB7B04F2B6CC400BB80D211CBDE8F84C422A0A803& unmarshaled)
{
	Exception_t* ___renderer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'renderer' of type 'MeshData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___renderer_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: HighlightPlus.MeshData
IL2CPP_EXTERN_C void MeshData_tB7B04F2B6CC400BB80D211CBDE8F84C422A0A803_marshal_pinvoke_cleanup(MeshData_tB7B04F2B6CC400BB80D211CBDE8F84C422A0A803_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: HighlightPlus.MeshData
IL2CPP_EXTERN_C void MeshData_tB7B04F2B6CC400BB80D211CBDE8F84C422A0A803_marshal_com(const MeshData_tB7B04F2B6CC400BB80D211CBDE8F84C422A0A803& unmarshaled, MeshData_tB7B04F2B6CC400BB80D211CBDE8F84C422A0A803_marshaled_com& marshaled)
{
	Exception_t* ___renderer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'renderer' of type 'MeshData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___renderer_0Exception, NULL);
}
IL2CPP_EXTERN_C void MeshData_tB7B04F2B6CC400BB80D211CBDE8F84C422A0A803_marshal_com_back(const MeshData_tB7B04F2B6CC400BB80D211CBDE8F84C422A0A803_marshaled_com& marshaled, MeshData_tB7B04F2B6CC400BB80D211CBDE8F84C422A0A803& unmarshaled)
{
	Exception_t* ___renderer_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'renderer' of type 'MeshData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___renderer_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: HighlightPlus.MeshData
IL2CPP_EXTERN_C void MeshData_tB7B04F2B6CC400BB80D211CBDE8F84C422A0A803_marshal_com_cleanup(MeshData_tB7B04F2B6CC400BB80D211CBDE8F84C422A0A803_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HighlightPlus.HighlightSeeThroughOccluder::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightSeeThroughOccluder_OnEnable_m077743B7738AAEE9F9C1EB2D0B03A0051F0B42DE (HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* __this, const RuntimeMethod* method) 
{
	{
		// if (gameObject.activeInHierarchy) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Init();
		HighlightSeeThroughOccluder_Init_mD9CFF9659AD22D9FF128285099A7DDEFCBC4489A(__this, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightSeeThroughOccluder::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightSeeThroughOccluder_Init_mD9CFF9659AD22D9FF128285099A7DDEFCBC4489A (HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mBBF8A68E10A9B71E580782A0FF65484595D61966_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshDataU5BU5D_t8BC3C6C8513F1E989D460DAAEB565E4A3FA13A70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* V_2 = NULL;
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* V_3 = NULL;
	{
		// if (detectionMethod == DetectionMethod.RayCast) {
		int32_t L_0 = __this->___detectionMethod_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0010;
		}
	}
	{
		// HighlightEffect.RegisterOccluder(this);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		HighlightEffect_RegisterOccluder_mD55882B9F47DE93BAAE0E48FB43CDBA9AEAD0430(__this, NULL);
		// return;
		return;
	}

IL_0010:
	{
		// if (rr == null) {
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_1 = __this->___rr_6;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		// rr = new List<Renderer>();
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_2 = (List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93*)il2cpp_codegen_object_new(List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE(L_2, List_1__ctor_m803E10F7A50EB22BF82C0C1AB251D5407B4496DE_RuntimeMethod_var);
		__this->___rr_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rr_6), (void*)L_2);
		goto IL_0030;
	}

IL_0025:
	{
		// rr.Clear();
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_3 = __this->___rr_6;
		NullCheck(L_3);
		List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_inline(L_3, List_1_Clear_m2015A321C3FE1E88A4A285CC4C0890648746A0A5_RuntimeMethod_var);
	}

IL_0030:
	{
		// GetComponentsInChildren<Renderer>(rr);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_4 = __this->___rr_6;
		Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mBBF8A68E10A9B71E580782A0FF65484595D61966(__this, L_4, Component_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mBBF8A68E10A9B71E580782A0FF65484595D61966_RuntimeMethod_var);
		// int rrCount = rr.Count;
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_5 = __this->___rr_6;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_inline(L_5, List_1_get_Count_mEDD6D3CBA7B18AB7F0E8E301BF83BF3C114E5C70_RuntimeMethod_var);
		V_0 = L_6;
		// meshData = new MeshData[rrCount];
		int32_t L_7 = V_0;
		MeshDataU5BU5D_t8BC3C6C8513F1E989D460DAAEB565E4A3FA13A70* L_8 = (MeshDataU5BU5D_t8BC3C6C8513F1E989D460DAAEB565E4A3FA13A70*)(MeshDataU5BU5D_t8BC3C6C8513F1E989D460DAAEB565E4A3FA13A70*)SZArrayNew(MeshDataU5BU5D_t8BC3C6C8513F1E989D460DAAEB565E4A3FA13A70_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->___meshData_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshData_5), (void*)L_8);
		// for (int k = 0; k < rrCount; k++) {
		V_1 = 0;
		goto IL_0129;
	}

IL_005b:
	{
		// meshData[k].renderer = rr[k];
		MeshDataU5BU5D_t8BC3C6C8513F1E989D460DAAEB565E4A3FA13A70* L_9 = __this->___meshData_5;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_11 = __this->___rr_6;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_13;
		L_13 = List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2(L_11, L_12, List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2_RuntimeMethod_var);
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___renderer_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___renderer_0), (void*)L_13);
		// meshData[k].subMeshCount = 1;
		MeshDataU5BU5D_t8BC3C6C8513F1E989D460DAAEB565E4A3FA13A70* L_14 = __this->___meshData_5;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___subMeshCount_1 = 1;
		// if (rr[k] is MeshRenderer) {
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_16 = __this->___rr_6;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_18;
		L_18 = List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2(L_16, L_17, List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2_RuntimeMethod_var);
		if (!((MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE*)IsInstClass((RuntimeObject*)L_18, MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_il2cpp_TypeInfo_var)))
		{
			goto IL_00e4;
		}
	}
	{
		// MeshFilter mf = rr[k].GetComponent<MeshFilter>();
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_19 = __this->___rr_6;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_21;
		L_21 = List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2(L_19, L_20, List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2_RuntimeMethod_var);
		NullCheck(L_21);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_22;
		L_22 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(L_21, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		V_2 = L_22;
		// if (mf != null && mf.sharedMesh != null) {
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_23 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_24)
		{
			goto IL_0125;
		}
	}
	{
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_25 = V_2;
		NullCheck(L_25);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_26;
		L_26 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_0125;
		}
	}
	{
		// meshData[k].subMeshCount = mf.sharedMesh.subMeshCount;
		MeshDataU5BU5D_t8BC3C6C8513F1E989D460DAAEB565E4A3FA13A70* L_28 = __this->___meshData_5;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_30 = V_2;
		NullCheck(L_30);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_31;
		L_31 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C(L_30, NULL);
		NullCheck(L_31);
		int32_t L_32;
		L_32 = Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B(L_31, NULL);
		((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___subMeshCount_1 = L_32;
		goto IL_0125;
	}

IL_00e4:
	{
		// } else if (rr[k] is SkinnedMeshRenderer) {
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_33 = __this->___rr_6;
		int32_t L_34 = V_1;
		NullCheck(L_33);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_35;
		L_35 = List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2(L_33, L_34, List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2_RuntimeMethod_var);
		if (!((SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E*)IsInstClass((RuntimeObject*)L_35, SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_il2cpp_TypeInfo_var)))
		{
			goto IL_0125;
		}
	}
	{
		// SkinnedMeshRenderer smr = (SkinnedMeshRenderer)rr[k];
		List_1_tD435DCC2A88E36DFC551EA5392CE0182F0C50E93* L_36 = __this->___rr_6;
		int32_t L_37 = V_1;
		NullCheck(L_36);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_38;
		L_38 = List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2(L_36, L_37, List_1_get_Item_m2A866E5FF9CD642C76D27133D3FCEC2F15033DA2_RuntimeMethod_var);
		V_3 = ((SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E*)CastclassClass((RuntimeObject*)L_38, SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_il2cpp_TypeInfo_var));
		// meshData[k].subMeshCount = smr.sharedMesh.subMeshCount;
		MeshDataU5BU5D_t8BC3C6C8513F1E989D460DAAEB565E4A3FA13A70* L_39 = __this->___meshData_5;
		int32_t L_40 = V_1;
		NullCheck(L_39);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_41 = V_3;
		NullCheck(L_41);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_42;
		L_42 = SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302(L_41, NULL);
		NullCheck(L_42);
		int32_t L_43;
		L_43 = Mesh_get_subMeshCount_mC0141293D0F339D8D721CCA2612B32E6FD7E3F8B(L_42, NULL);
		((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___subMeshCount_1 = L_43;
	}

IL_0125:
	{
		// for (int k = 0; k < rrCount; k++) {
		int32_t L_44 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_0129:
	{
		// for (int k = 0; k < rrCount; k++) {
		int32_t L_45 = V_1;
		int32_t L_46 = V_0;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_005b;
		}
	}
	{
		// if (rrCount > 0) {
		int32_t L_47 = V_0;
		if ((((int32_t)L_47) <= ((int32_t)0)))
		{
			goto IL_013a;
		}
	}
	{
		// HighlightEffect.RegisterOccluder(this);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		HighlightEffect_RegisterOccluder_mD55882B9F47DE93BAAE0E48FB43CDBA9AEAD0430(__this, NULL);
	}

IL_013a:
	{
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightSeeThroughOccluder::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightSeeThroughOccluder_OnDisable_m3FC8F66ECE94EA29E3359799F080C379C00F1FA3 (HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HighlightEffect.UnregisterOccluder(this);
		il2cpp_codegen_runtime_class_init_inline(HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_il2cpp_TypeInfo_var);
		HighlightEffect_UnregisterOccluder_m3D8A5F77B2FA604CCA5B43D08869B533949747B3(__this, NULL);
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightSeeThroughOccluder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightSeeThroughOccluder__ctor_m2BE9D5FC343EA9D46241F05F4336E270C77E90E0 (HighlightSeeThroughOccluder_t3ECB87B7AFB6A5E665E3DFEF729A04D535679236* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void HighlightPlus.HighlightTrigger::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightTrigger_OnEnable_m42DA80BA1F651F25B66229F7CF5AC0771A2F534C (HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* __this, const RuntimeMethod* method) 
{
	{
		// Init();
		HighlightTrigger_Init_m5140449532326607F95E90A107E3EEE8D1250F4E(__this, NULL);
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightTrigger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightTrigger_Start_mC0937ABA363BD8E0776CABE8E99F47D92B6D0EEF (HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFE0E36B3C1670C308B04C39EDC76838DD59826B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A30941431F0D4C7D06A2C25AFAA93156F13DB33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCBC87E0E465F7BE4CC1A31564E634C8C7F68060);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (triggerMode == TriggerMode.RaycastOnThisObjectAndChildren) {
		int32_t L_0 = __this->___triggerMode_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_007a;
		}
	}
	{
		// if (raycastCamera == null) {
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___raycastCamera_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_004f;
		}
	}
	{
		// raycastCamera = HighlightManager.GetCamera();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = HighlightManager_GetCamera_m26F0D1288DF912768015149DCBB8F33D499A30EF(NULL);
		__this->___raycastCamera_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___raycastCamera_5), (void*)L_3);
		// if (raycastCamera == null) {
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___raycastCamera_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		// Debug.LogError("Highlight Trigger on " + gameObject.name + ": no camera found!");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralBCBC87E0E465F7BE4CC1A31564E634C8C7F68060, L_7, _stringLiteral6A30941431F0D4C7D06A2C25AFAA93156F13DB33, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_8, NULL);
	}

IL_004f:
	{
		// if (colliders != null && colliders.Length > 0) {
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_9 = __this->___colliders_10;
		if (!L_9)
		{
			goto IL_00a2;
		}
	}
	{
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_10 = __this->___colliders_10;
		NullCheck(L_10);
		if (!(((RuntimeArray*)L_10)->max_length))
		{
			goto IL_00a2;
		}
	}
	{
		// hits = new RaycastHit[MAX_RAYCAST_HITS];
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_11 = (RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)(RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)SZArrayNew(RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8_il2cpp_TypeInfo_var, (uint32_t)((int32_t)100));
		((HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913_StaticFields*)il2cpp_codegen_static_fields_for(HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913_il2cpp_TypeInfo_var))->___hits_12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913_StaticFields*)il2cpp_codegen_static_fields_for(HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913_il2cpp_TypeInfo_var))->___hits_12), (void*)L_11);
		// StartCoroutine(DoRayCast());
		RuntimeObject* L_12;
		L_12 = HighlightTrigger_DoRayCast_mE539910444E8929A4E84CF8331E0D92BF9C6E7C8(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_12, NULL);
		return;
	}

IL_007a:
	{
		// Collider collider = GetComponent<Collider>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_14;
		L_14 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		// if (collider == null) {
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_00a2;
		}
	}
	{
		// if (GetComponent<MeshFilter>() != null) {
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_16;
		L_16 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(__this, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_17)
		{
			goto IL_00a2;
		}
	}
	{
		// gameObject.AddComponent<MeshCollider>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_18);
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_19;
		L_19 = GameObject_AddComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFE0E36B3C1670C308B04C39EDC76838DD59826B7(L_18, GameObject_AddComponent_TisMeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455_mFE0E36B3C1670C308B04C39EDC76838DD59826B7_RuntimeMethod_var);
	}

IL_00a2:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator HighlightPlus.HighlightTrigger::DoRayCast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HighlightTrigger_DoRayCast_mE539910444E8929A4E84CF8331E0D92BF9C6E7C8 (HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDoRayCastU3Ed__11_t64A74AF467E9FE0DBF76E3532C8E0A7CE704FC37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDoRayCastU3Ed__11_t64A74AF467E9FE0DBF76E3532C8E0A7CE704FC37* L_0 = (U3CDoRayCastU3Ed__11_t64A74AF467E9FE0DBF76E3532C8E0A7CE704FC37*)il2cpp_codegen_object_new(U3CDoRayCastU3Ed__11_t64A74AF467E9FE0DBF76E3532C8E0A7CE704FC37_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDoRayCastU3Ed__11__ctor_m0C33B00FB10CBD08B440842B0E69A626722E951B(L_0, 0, NULL);
		U3CDoRayCastU3Ed__11_t64A74AF467E9FE0DBF76E3532C8E0A7CE704FC37* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void HighlightPlus.HighlightTrigger::SwitchCollider(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightTrigger_SwitchCollider_mFF25DB4A90C3E29589CCF539854BE224E9376250 (HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___newCollider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentCollider = newCollider;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___newCollider0;
		__this->___currentCollider_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentCollider_11), (void*)L_0);
		// if (currentCollider != null) {
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = __this->___currentCollider_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// Highlight(true);
		HighlightTrigger_Highlight_mC7DBF2ADC4C95CF0493C76796D3F96943DB4DCAB(__this, (bool)1, NULL);
		return;
	}

IL_001d:
	{
		// Highlight(false);
		HighlightTrigger_Highlight_mC7DBF2ADC4C95CF0493C76796D3F96943DB4DCAB(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightTrigger::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightTrigger_OnMouseDown_m215D1358F5A7F7D84F32F57DC14D4ED05510406A (HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* __this, const RuntimeMethod* method) 
{
	{
		// if (isActiveAndEnabled && triggerMode == TriggerMode.ColliderEventsOnlyOnThisObject) {
		bool L_0;
		L_0 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(__this, NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = __this->___triggerMode_4;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Highlight(true);
		HighlightTrigger_Highlight_mC7DBF2ADC4C95CF0493C76796D3F96943DB4DCAB(__this, (bool)1, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightTrigger::OnMouseEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightTrigger_OnMouseEnter_m151AFD3E63D5E33A5B668F0DF561E0BD1B2D43B0 (HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* __this, const RuntimeMethod* method) 
{
	{
		// if (isActiveAndEnabled && triggerMode == TriggerMode.ColliderEventsOnlyOnThisObject) {
		bool L_0;
		L_0 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(__this, NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = __this->___triggerMode_4;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Highlight(true);
		HighlightTrigger_Highlight_mC7DBF2ADC4C95CF0493C76796D3F96943DB4DCAB(__this, (bool)1, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightTrigger::OnMouseExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightTrigger_OnMouseExit_m26F56C69BCC1A340D557CADD77882DFC6D91C2F1 (HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* __this, const RuntimeMethod* method) 
{
	{
		// if (isActiveAndEnabled && triggerMode == TriggerMode.ColliderEventsOnlyOnThisObject) {
		bool L_0;
		L_0 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(__this, NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = __this->___triggerMode_4;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Highlight(false);
		HighlightTrigger_Highlight_mC7DBF2ADC4C95CF0493C76796D3F96943DB4DCAB(__this, (bool)0, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightTrigger::Highlight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightTrigger_Highlight_mC7DBF2ADC4C95CF0493C76796D3F96943DB4DCAB (HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* __this, bool ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_m8739CFB57B40043E52DEBE91B09BFA6342DE9255_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_mF86F84555AEC1D85DD09B9C341C91FFD1BF94F0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* V_0 = NULL;
	{
		// HighlightEffect hb = transform.GetComponent<HighlightEffect>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_1;
		L_1 = Component_GetComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_m8739CFB57B40043E52DEBE91B09BFA6342DE9255(L_0, Component_GetComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_m8739CFB57B40043E52DEBE91B09BFA6342DE9255_RuntimeMethod_var);
		V_0 = L_1;
		// if (hb == null && state) {
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		bool L_4 = ___state0;
		if (!((int32_t)((int32_t)L_3&(int32_t)L_4)))
		{
			goto IL_0023;
		}
	}
	{
		// hb = gameObject.AddComponent<HighlightEffect>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_6;
		L_6 = GameObject_AddComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_mF86F84555AEC1D85DD09B9C341C91FFD1BF94F0C(L_5, GameObject_AddComponent_TisHighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130_mF86F84555AEC1D85DD09B9C341C91FFD1BF94F0C_RuntimeMethod_var);
		V_0 = L_6;
	}

IL_0023:
	{
		// if (hb != null) {
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		// hb.SetHighlighted(state);
		HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* L_9 = V_0;
		bool L_10 = ___state0;
		NullCheck(L_9);
		HighlightEffect_SetHighlighted_m0E7796EB34B79F2BD65D6ADC618CEF5661CD1E46(L_9, L_10, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightTrigger::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightTrigger_Init_m5140449532326607F95E90A107E3EEE8D1250F4E (HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (raycastCamera == null) {
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___raycastCamera_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// raycastCamera = HighlightManager.GetCamera();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = HighlightManager_GetCamera_m26F0D1288DF912768015149DCBB8F33D499A30EF(NULL);
		__this->___raycastCamera_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___raycastCamera_5), (void*)L_2);
	}

IL_0019:
	{
		// if (triggerMode == TriggerMode.RaycastOnThisObjectAndChildren) {
		int32_t L_3 = __this->___triggerMode_4;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_002e;
		}
	}
	{
		// colliders = GetComponentsInChildren<Collider>();
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_4;
		L_4 = Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB(__this, Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var);
		__this->___colliders_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colliders_10), (void*)L_4);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightTrigger::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightTrigger_OnTriggerEnter_mFF3282A7303E70FA2B372140DF125C0A1A6EEE7E (HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	{
		// if (triggerMode == TriggerMode.Volume) {
		int32_t L_0 = __this->___triggerMode_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_002e;
		}
	}
	{
		// if ((volumeLayerMask & (1 << other.gameObject.layer)) != 0) {
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1 = __this->___volumeLayerMask_8;
		int32_t L_2;
		L_2 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_1, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_4, NULL);
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_5&((int32_t)31))))))))
		{
			goto IL_002e;
		}
	}
	{
		// Highlight(true);
		HighlightTrigger_Highlight_mC7DBF2ADC4C95CF0493C76796D3F96943DB4DCAB(__this, (bool)1, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightTrigger::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightTrigger_OnTriggerExit_mA33AA223BB5BC90892F97B7D880DD6CBC9C934BF (HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	{
		// if (triggerMode == TriggerMode.Volume) {
		int32_t L_0 = __this->___triggerMode_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_002e;
		}
	}
	{
		// if ((volumeLayerMask & (1 << other.gameObject.layer)) != 0) {
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1 = __this->___volumeLayerMask_8;
		int32_t L_2;
		L_2 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_1, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_4, NULL);
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_5&((int32_t)31))))))))
		{
			goto IL_002e;
		}
	}
	{
		// Highlight(false);
		HighlightTrigger_Highlight_mC7DBF2ADC4C95CF0493C76796D3F96943DB4DCAB(__this, (bool)0, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void HighlightPlus.HighlightTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightTrigger__ctor_m55B10561A79D15D40ED280D5BD7CBAAA73D6F41B (HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void HighlightPlus.HighlightTrigger/<DoRayCast>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoRayCastU3Ed__11__ctor_m0C33B00FB10CBD08B440842B0E69A626722E951B (U3CDoRayCastU3Ed__11_t64A74AF467E9FE0DBF76E3532C8E0A7CE704FC37* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void HighlightPlus.HighlightTrigger/<DoRayCast>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoRayCastU3Ed__11_System_IDisposable_Dispose_mC6033C1F80B43E4BC430B9CCD94A91CEBBAD1021 (U3CDoRayCastU3Ed__11_t64A74AF467E9FE0DBF76E3532C8E0A7CE704FC37* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean HighlightPlus.HighlightTrigger/<DoRayCast>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDoRayCastU3Ed__11_MoveNext_m6AFCD0C18C4AE3BEF6358535DDD71BAA84296CBA (U3CDoRayCastU3Ed__11_t64A74AF467E9FE0DBF76E3532C8E0A7CE704FC37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* V_1 = NULL;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_6 = NULL;
	int32_t V_7 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_013d;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0144;
	}

IL_0026:
	{
		// if (raycastCamera != null) {
		HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* L_4 = V_1;
		NullCheck(L_4);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = L_4->___raycastCamera_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_012d;
		}
	}
	{
		// if (raycastSource == RayCastSource.MousePosition) {
		HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->___raycastSource_6;
		if (L_8)
		{
			goto IL_0052;
		}
	}
	{
		// ray = raycastCamera.ScreenPointToRay(Input.mousePosition);
		HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* L_9 = V_1;
		NullCheck(L_9);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = L_9->___raycastCamera_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		NullCheck(L_10);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_12;
		L_12 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_10, L_11, NULL);
		V_2 = L_12;
		goto IL_0079;
	}

IL_0052:
	{
		// ray = new Ray(raycastCamera.transform.position, raycastCamera.transform.forward);
		HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* L_13 = V_1;
		NullCheck(L_13);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = L_13->___raycastCamera_5;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* L_17 = V_1;
		NullCheck(L_17);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = L_17->___raycastCamera_5;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_19, NULL);
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&V_2), L_16, L_20, NULL);
	}

IL_0079:
	{
		// if (maxDistance > 0) {
		HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* L_21 = V_1;
		NullCheck(L_21);
		float L_22 = L_21->___maxDistance_7;
		if ((!(((float)L_22) > ((float)(0.0f)))))
		{
			goto IL_009a;
		}
	}
	{
		// hitCount = Physics.RaycastNonAlloc(ray, hits, maxDistance);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_23 = V_2;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_24 = ((HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913_StaticFields*)il2cpp_codegen_static_fields_for(HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913_il2cpp_TypeInfo_var))->___hits_12;
		HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* L_25 = V_1;
		NullCheck(L_25);
		float L_26 = L_25->___maxDistance_7;
		int32_t L_27;
		L_27 = Physics_RaycastNonAlloc_mAE03085BE7D7DF23D88E330C8C6C7ABA7AFD48DE(L_23, L_24, L_26, NULL);
		V_3 = L_27;
		goto IL_00a6;
	}

IL_009a:
	{
		// hitCount = Physics.RaycastNonAlloc(ray, hits);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_28 = V_2;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_29 = ((HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913_StaticFields*)il2cpp_codegen_static_fields_for(HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913_il2cpp_TypeInfo_var))->___hits_12;
		int32_t L_30;
		L_30 = Physics_RaycastNonAlloc_m6FF218093B5910E12EE77682906C6D41ECD205B7(L_28, L_29, NULL);
		V_3 = L_30;
	}

IL_00a6:
	{
		// bool hit = false;
		V_4 = (bool)0;
		// for (int k = 0; k < hitCount; k++) {
		V_5 = 0;
		goto IL_010f;
	}

IL_00ae:
	{
		// Collider theCollider = hits[k].collider;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_31 = ((HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913_StaticFields*)il2cpp_codegen_static_fields_for(HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913_il2cpp_TypeInfo_var))->___hits_12;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_33;
		L_33 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32))), NULL);
		V_6 = L_33;
		// for (int c = 0; c < colliders.Length; c++) {
		V_7 = 0;
		goto IL_00fd;
	}

IL_00c6:
	{
		// if (colliders[c] == theCollider) {
		HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* L_34 = V_1;
		NullCheck(L_34);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_35 = L_34->___colliders_10;
		int32_t L_36 = V_7;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_39 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_38, L_39, NULL);
		if (!L_40)
		{
			goto IL_00f7;
		}
	}
	{
		// hit = true;
		V_4 = (bool)1;
		// if (theCollider != currentCollider) {
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_41 = V_6;
		HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* L_42 = V_1;
		NullCheck(L_42);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_43 = L_42->___currentCollider_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_41, L_43, NULL);
		if (!L_44)
		{
			goto IL_00f7;
		}
	}
	{
		// SwitchCollider(theCollider);
		HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* L_45 = V_1;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_46 = V_6;
		NullCheck(L_45);
		HighlightTrigger_SwitchCollider_mFF25DB4A90C3E29589CCF539854BE224E9376250(L_45, L_46, NULL);
		// k = hitCount;
		int32_t L_47 = V_3;
		V_5 = L_47;
		// break;
		goto IL_0109;
	}

IL_00f7:
	{
		// for (int c = 0; c < colliders.Length; c++) {
		int32_t L_48 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00fd:
	{
		// for (int c = 0; c < colliders.Length; c++) {
		int32_t L_49 = V_7;
		HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* L_50 = V_1;
		NullCheck(L_50);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_51 = L_50->___colliders_10;
		NullCheck(L_51);
		if ((((int32_t)L_49) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
		{
			goto IL_00c6;
		}
	}

IL_0109:
	{
		// for (int k = 0; k < hitCount; k++) {
		int32_t L_52 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_010f:
	{
		// for (int k = 0; k < hitCount; k++) {
		int32_t L_53 = V_5;
		int32_t L_54 = V_3;
		if ((((int32_t)L_53) < ((int32_t)L_54)))
		{
			goto IL_00ae;
		}
	}
	{
		// if (!hit && currentCollider != null) {
		bool L_55 = V_4;
		if (L_55)
		{
			goto IL_012d;
		}
	}
	{
		HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* L_56 = V_1;
		NullCheck(L_56);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_57 = L_56->___currentCollider_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_58;
		L_58 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_57, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_58)
		{
			goto IL_012d;
		}
	}
	{
		// SwitchCollider(null);
		HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* L_59 = V_1;
		NullCheck(L_59);
		HighlightTrigger_SwitchCollider_mFF25DB4A90C3E29589CCF539854BE224E9376250(L_59, (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76*)NULL, NULL);
	}

IL_012d:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_013d:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0144:
	{
		// while (triggerMode == TriggerMode.RaycastOnThisObjectAndChildren) {
		HighlightTrigger_t67B04CA4BE6E8E285494E723BC38F7109E9B6913* L_60 = V_1;
		NullCheck(L_60);
		int32_t L_61 = L_60->___triggerMode_4;
		if ((((int32_t)L_61) == ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object HighlightPlus.HighlightTrigger/<DoRayCast>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoRayCastU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m79CC10D6D0B5AD4A635337F243093FFDAC748A04 (U3CDoRayCastU3Ed__11_t64A74AF467E9FE0DBF76E3532C8E0A7CE704FC37* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void HighlightPlus.HighlightTrigger/<DoRayCast>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoRayCastU3Ed__11_System_Collections_IEnumerator_Reset_m032B5454371294FB0C5014F89AC1FA563839D943 (U3CDoRayCastU3Ed__11_t64A74AF467E9FE0DBF76E3532C8E0A7CE704FC37* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDoRayCastU3Ed__11_System_Collections_IEnumerator_Reset_m032B5454371294FB0C5014F89AC1FA563839D943_RuntimeMethod_var)));
	}
}
// System.Object HighlightPlus.HighlightTrigger/<DoRayCast>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoRayCastU3Ed__11_System_Collections_IEnumerator_get_Current_m39432AD74250FE6525DCBBDAFA532AF0C2D017E3 (U3CDoRayCastU3Ed__11_t64A74AF467E9FE0DBF76E3532C8E0A7CE704FC37* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void HighlightPlus.ShaderParams::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderParams__cctor_mC3D446A7C8FA1C9513C754B7E983FD4FDF614CAF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00976D4B6B8B09FDE83FAF103A558B8E7E5649A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17E861409735E76469AAA432AC85057B52A0546D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20205C80F44E832330753E566D890CA7994A43F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral302B7CA4FEA9A905B76ADACDB7E584B9F385C54D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36AF1BE80C97B2D83C812C7AAB43703DAA26B715);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39E3629B886CB412720ADA081113F5133F78CE75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43AD1BD6C27526D7893DD88B86511D1C248720D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48DFDC8C33A0AF1CBEE6B4C3F550E629E667C311);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60208702E3C26366B11B2A1D6389AA63A1E090BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67BEC592386C17C68CF044FFB14169A1073AC7EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F8E51D85E067917148A712F8E56CF44F8E30C4E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral815F9B82280FB931D808B67ED0F0A9F3165BC88B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E90A4CCFA75561F75488FC4B2DFA99A3431C1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FA5E1703139EC5624F0E8FE4D0D7B4D00BFD97C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral963825F4E386826F5183358E6D6875214068ED50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A0E07956661BE92156BA01A49D3BE4CA8774CD5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA71E57745058D60F269DB1627BE11D82F41FBD77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE1E6BA53790886823A3F537B19A3A1AB302558E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4F78CE90CE16BABB60B82B9B7E3B20575EE5183);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC262CD37555BC29491C76457667D00F708E20977);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE5CDEC86E604948D547E530FD8FCD7A52576D5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD585E57680D3C1E5598B6C5D183D469B6AA2C913);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE066DD3CA3CA9295CC83FA394543BA7B03B848BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE87CFD8323D21F3055725F0A2C033CBBD0F74888);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA6F0091C0F4C6C5BD7271CF1420AE410D38DFAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF50A055213A92FD57A98E40FB266BE0889696DE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA7345BB53C18C51F2F2D9023F9980E61A3B56D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC47B489AF3EC18C22208208283F839984ACE798);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int StereoRendering = Shader.PropertyToID("_StereoRendering");
		int32_t L_0;
		L_0 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteralA71E57745058D60F269DB1627BE11D82F41FBD77, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___StereoRendering_0 = L_0;
		// public static int Cull = Shader.PropertyToID("_Cull");
		int32_t L_1;
		L_1 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral181BB4565C7AA61CC8716A421960A53BA01AEE22, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___Cull_1 = L_1;
		// public static int BlurScale = Shader.PropertyToID("_BlurScale");
		int32_t L_2;
		L_2 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral963825F4E386826F5183358E6D6875214068ED50, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___BlurScale_2 = L_2;
		// public static int Speed = Shader.PropertyToID("_Speed");
		int32_t L_3;
		L_3 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral39E3629B886CB412720ADA081113F5133F78CE75, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___Speed_3 = L_3;
		// public static int ConstantWidth = Shader.PropertyToID("_ConstantWidth");
		int32_t L_4;
		L_4 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral17E861409735E76469AAA432AC85057B52A0546D, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___ConstantWidth_4 = L_4;
		// public static int CutOff = Shader.PropertyToID("_CutOff");
		int32_t L_5;
		L_5 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral9A0E07956661BE92156BA01A49D3BE4CA8774CD5, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___CutOff_5 = L_5;
		// public static int ZTest = Shader.PropertyToID("_ZTest");
		int32_t L_6;
		L_6 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral3C73394BEFC13A1F539275C77FA59F83301065F5, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___ZTest_6 = L_6;
		// public static int Flip = Shader.PropertyToID("_Flip");
		int32_t L_7;
		L_7 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral00976D4B6B8B09FDE83FAF103A558B8E7E5649A5, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___Flip_7 = L_7;
		// public static int Debug = Shader.PropertyToID("_Debug");
		int32_t L_8;
		L_8 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteralCE5CDEC86E604948D547E530FD8FCD7A52576D5B, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___Debug_8 = L_8;
		// public static int Color = Shader.PropertyToID("_Color");
		int32_t L_9;
		L_9 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___Color_9 = L_9;
		// public static int MainTex = Shader.PropertyToID("_MainTex");
		int32_t L_10;
		L_10 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___MainTex_10 = L_10;
		// public static int BaseMap = Shader.PropertyToID("_BaseMap");
		int32_t L_11;
		L_11 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral67BEC592386C17C68CF044FFB14169A1073AC7EB, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___BaseMap_11 = L_11;
		// public static int OutlineWidth = Shader.PropertyToID("_OutlineWidth");
		int32_t L_12;
		L_12 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral444E2030643CA3A0D71BCD4D131FEB0C15E77257, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___OutlineWidth_12 = L_12;
		// public static int OutlineZTest = Shader.PropertyToID("_OutlineZTest");
		int32_t L_13;
		L_13 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteralD585E57680D3C1E5598B6C5D183D469B6AA2C913, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___OutlineZTest_13 = L_13;
		// public static int OutlineDirection = Shader.PropertyToID("_OutlineDirection");
		int32_t L_14;
		L_14 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteralFC47B489AF3EC18C22208208283F839984ACE798, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___OutlineDirection_14 = L_14;
		// public static int OutlineColor = Shader.PropertyToID("_OutlineColor");
		int32_t L_15;
		L_15 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteralD1418B66EFD4F2E84F8EE977170F5ACBF35CE35C, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___OutlineColor_15 = L_15;
		// public static int GlowZTest = Shader.PropertyToID("_GlowZTest");
		int32_t L_16;
		L_16 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteralE87CFD8323D21F3055725F0A2C033CBBD0F74888, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___GlowZTest_16 = L_16;
		// public static int GlowStencilOp = Shader.PropertyToID("_GlowStencilOp");
		int32_t L_17;
		L_17 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral87E90A4CCFA75561F75488FC4B2DFA99A3431C1B, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___GlowStencilOp_17 = L_17;
		// public static int GlowDirection = Shader.PropertyToID("_GlowDirection");
		int32_t L_18;
		L_18 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral48DFDC8C33A0AF1CBEE6B4C3F550E629E667C311, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___GlowDirection_18 = L_18;
		// public static int Glow = Shader.PropertyToID("_Glow");
		int32_t L_19;
		L_19 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteralEA6F0091C0F4C6C5BD7271CF1420AE410D38DFAB, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___Glow_19 = L_19;
		// public static int GlowColor = Shader.PropertyToID("_GlowColor");
		int32_t L_20;
		L_20 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteralE066DD3CA3CA9295CC83FA394543BA7B03B848BE, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___GlowColor_20 = L_20;
		// public static int Glow2 = Shader.PropertyToID("_Glow2");
		int32_t L_21;
		L_21 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral815F9B82280FB931D808B67ED0F0A9F3165BC88B, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___Glow2_21 = L_21;
		// public static int SeeThrough = Shader.PropertyToID("_SeeThrough");
		int32_t L_22;
		L_22 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral36AF1BE80C97B2D83C812C7AAB43703DAA26B715, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___SeeThrough_22 = L_22;
		// public static int SeeThroughNoise = Shader.PropertyToID("_SeeThroughNoise");
		int32_t L_23;
		L_23 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral302B7CA4FEA9A905B76ADACDB7E584B9F385C54D, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___SeeThroughNoise_23 = L_23;
		// public static int SeeThroughBorderWidth = Shader.PropertyToID("_SeeThroughBorderWidth");
		int32_t L_24;
		L_24 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteralC262CD37555BC29491C76457667D00F708E20977, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___SeeThroughBorderWidth_24 = L_24;
		// public static int SeeThroughBorderConstantWidth = Shader.PropertyToID("_SeeThroughBorderConstantWidth");
		int32_t L_25;
		L_25 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteralFA7345BB53C18C51F2F2D9023F9980E61A3B56D9, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___SeeThroughBorderConstantWidth_25 = L_25;
		// public static int SeeThroughTintColor = Shader.PropertyToID("_SeeThroughTintColor");
		int32_t L_26;
		L_26 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral20205C80F44E832330753E566D890CA7994A43F2, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___SeeThroughTintColor_26 = L_26;
		// public static int SeeThroughBorderColor = Shader.PropertyToID("_SeeThroughBorderColor");
		int32_t L_27;
		L_27 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral8FA5E1703139EC5624F0E8FE4D0D7B4D00BFD97C, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___SeeThroughBorderColor_27 = L_27;
		// public static int SeeThroughStencilRef = Shader.PropertyToID("_SeeThroughStencilRef");
		int32_t L_28;
		L_28 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteralAE1E6BA53790886823A3F537B19A3A1AB302558E, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___SeeThroughStencilRef_28 = L_28;
		// public static int SeeThroughStencilComp = Shader.PropertyToID("_SeeThroughStencilComp");
		int32_t L_29;
		L_29 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral60208702E3C26366B11B2A1D6389AA63A1E090BE, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___SeeThroughStencilComp_29 = L_29;
		// public static int InnerGlowWidth = Shader.PropertyToID("_InnerGlowWidth");
		int32_t L_30;
		L_30 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteralF50A055213A92FD57A98E40FB266BE0889696DE0, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___InnerGlowWidth_30 = L_30;
		// public static int InnerGlowZTest = Shader.PropertyToID("_InnerGlowZTest");
		int32_t L_31;
		L_31 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral6F8E51D85E067917148A712F8E56CF44F8E30C4E, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___InnerGlowZTest_31 = L_31;
		// public static int OverlayData = Shader.PropertyToID("_OverlayData");
		int32_t L_32;
		L_32 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral43AD1BD6C27526D7893DD88B86511D1C248720D2, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___OverlayData_32 = L_32;
		// public static int OverlayBackColor = Shader.PropertyToID("_OverlayBackColor");
		int32_t L_33;
		L_33 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteralB4F78CE90CE16BABB60B82B9B7E3B20575EE5183, NULL);
		((ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_StaticFields*)il2cpp_codegen_static_fields_for(ShaderParams_t7ADA8F7861702C68FB564E9DD5FE29094E01F6A4_il2cpp_TypeInfo_var))->___OverlayBackColor_33 = L_33;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_mA75C525C1E78B5BB99E9B7A63EF68C731043FE18_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_mB05287DC52FC87A756AB80E837E1EC22FEEB3937_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___v0;
		float L_5 = L_4.___z_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_6), L_1, L_3, L_5, (0.0f), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnObjectHighlightEndEvent_Invoke_m7EBAEDB3E40C6587FFE7808B8953D8A534B36993_inline (OnObjectHighlightEndEvent_t4658B6BC0892AE2C120C0EEB4E74809050FFAC4F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___a0;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___b1;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___r_0;
		float L_8 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___b1;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___a0;
		float L_14 = L_13.___g_1;
		float L_15 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___a0;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___b1;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___a0;
		float L_21 = L_20.___b_2;
		float L_22 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___a0;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___b1;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___a0;
		float L_28 = L_27.___a_3;
		float L_29 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnTargetAnimatesEvent_Invoke_m45D255781DC043D4C6EADAFC94D73ADFEF74E5D1_inline (OnTargetAnimatesEvent_t9FD8D97C3A432DA1148BD0C2D27BC8BC8B5F9066* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___center0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rotation1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___scale2, float ___t3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___center0, ___rotation1, ___scale2, ___t3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_volumeDepth_mEF9610D1C14182417A01B7243DEE6B559A13B34D_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CvolumeDepthU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_msaaSamples_m6910E09489372746391B14FBAF59A7237539D6C4_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CmsaaSamplesU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_vrUsage_m061FAE1190A623B9DEE133F1506ADB23C983F6B0_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CvrUsageU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_vrUsage_m994CB3D4B250A70BE005D9FDFD24D868E07A52F0_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CvrUsageU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_width_m3B2494007BFE3AD4D14403407C9B24F5045E7E10_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CwidthU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_height_m1FE41111472DAA9B5E80FFAF3445004D72A3CFA5_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CheightU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OnObjectHighlightStartEvent_Invoke_m9BACA4A0E81A3843B0872B6F8475386C5FBEC742_inline (OnObjectHighlightStartEvent_t005227692BA822937A4C445654A2B3F20B4C6497* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HighlightEffect_get_highlighted_m377F5C74676DAE438F36EF0C24444FB7314EC741_inline (HighlightEffect_tF2F835F140D6497E164A39305BBA44B2BDD3A130* __this, const RuntimeMethod* method) 
{
	{
		// public bool highlighted { get { return _highlighted; } set { SetHighlighted(value); } }
		bool L_0 = __this->____highlighted_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OnRendererHighlightEvent_Invoke_m2BBFCFC882793839F1CE2591B2963B0B28701B52_inline (OnRendererHighlightEvent_t1B78323173FB22769D42B5558DCE5BE33F55C8E6* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___renderer0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___renderer0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m1EF7276EF58050DFBA8921E2383F0249C08D346F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m6C27D2DB91485CF3C5992CD0234BA828E8C53275_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_3 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m65F0731FF2C839C25530522F74BE029D34851222_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___item0, const RuntimeMethod* method) 
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_8);
		return;
	}

IL_0034:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___item0;
		((  void (*) (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m970BE5CCB1F05BAF033736206A0C3142930127B0_gshared_inline (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___item0;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
