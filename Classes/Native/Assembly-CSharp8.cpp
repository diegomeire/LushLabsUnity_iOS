#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.UI.Graphic[]>
struct Dictionary_2_tEC74ABC77DE2191EAA2A4EB5A912338BE92BE07B;
// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>>
struct Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412;
// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE;
// System.Func`2<System.Reflection.FieldInfo,System.Int32>
struct Func_2_tA71E659021C95E54328A443283A7154D558E9411;
// System.Func`2<UnityEngine.RaycastHit,DevionGames.ISelectable>
struct Func_2_t0DBD644746C44FF469960CDEFE148C2157CD6AB3;
// System.Func`2<System.Type,System.String>
struct Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t5C4FADAE1CD0985640B2EDB887FE74A475EDEEDB;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct List_1_t2E0A11B5F89515389093E72BC4B6064918E20E62;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<DevionGames.UIWidgets.MenuItem>
struct List_1_tE34D6EF7BC1D9A2025003B510DF58B7F75875402;
// System.Collections.Generic.List`1<DevionGames.UIWidgets.StringPairSlot>
struct List_1_tE1508694D84A41B11BEBC98959DF5921C47215EB;
// System.Collections.Generic.List`1<Water2D.microSpawn>
struct List_1_t4639AF81C95F55F41008D2F43A3D15291C216931;
// System.Collections.Generic.List`1<DevionGames.CallbackHandler/Entry>
struct List_1_t0E29E57C81CF75B366B808396089CFC7F6D18F7B;
// System.Collections.Generic.List`1<DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect>
struct List_1_t458D63D243891843DA4B6612E427915103F7CB7C;
// System.Predicate`1<DevionGames.UIWidgets.MenuItem>
struct Predicate_1_tDCF7CD53A83758ADC976EEF350AF598300DE21F6;
// DevionGames.UIWidgets.TweenRunner`1<DevionGames.UIWidgets.FloatTween>
struct TweenRunner_1_t0078029DEDBB2A1E346C6CEE967712F882D88226;
// DevionGames.UIWidgets.TweenRunner`1<DevionGames.UIWidgets.Vector3Tween>
struct TweenRunner_1_t322058F435959F195B0693EEAA2C3ADBD3B84128;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>
struct UnityEvent_1_t0D27852CE4491ECD77DB83CDC47BEFDE77503829;
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>[]
struct KeyValuePair_2U5BU5D_t9A79A7EED5838CECDC32AB2E0A4C369A6D9DF123;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// OtherWorld/Visualizer[]
struct VisualizerU5BU5D_tC5921398D3FDABEEA249BC021EDF7A133781918E;
// UnityStandardAssets.CinematicEffects.SMAA/QualitySettings[]
struct QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296;
// DevionGames.UIWidgets.TooltipTrigger/StringPair[]
struct StringPairU5BU5D_t0B11877F1405DB017D087FE1D23017C1AC1463AC;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.Reflection.Assembly
struct Assembly_t;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F;
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// DevionGames.ISelectable
struct ISelectable_t7F312FFA8BEAC50F25A42430ABD841CB04B7CBAF;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// DevionGames.UIWidgets.MenuItem
struct MenuItem_t9A0F1062D5BE94BB34ED0DAECF0027E7D0ECA124;
// MetaballParticleClass
struct MetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// OtherWorld
struct OtherWorld_tB727BB284D250D1C80B503FC078EF2447876516B;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// Portal
struct Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052;
// DevionGames.PropertyBinding
struct PropertyBinding_t273EDABE3A995B2B49B72C6E2ED0E83BF73F3FF1;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// DevionGames.UIWidgets.RadialMenu
struct RadialMenu_tEA5D73346C7A0510CB219509A1763DD979921975;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SceneLoader
struct SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D;
// UnityEngine.UI.ScrollRect
struct ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap
struct SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257;
// DevionGames.UIWidgets.Spinner
struct Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// DevionGames.UIWidgets.StringPairSlot
struct StringPairSlot_tF2A89DED7932A44AB1FB627D19A768FC0FE0E16E;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95;
// DevionGames.UIWidgets.Tooltip
struct Tooltip_t4189AB3769FB49D03A96EFE511A956E3884B7F58;
// DevionGames.UIWidgets.TooltipTrigger
struct TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250;
// UnityEngine.TrailRenderer
struct TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// DevionGames.UIWidgets.UIWidget
struct UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// Water2D.Water2D_Spawner
struct Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C;
// DevionGames.UIWidgets.FloatTween/FloatTweenCallback
struct FloatTweenCallback_t4D72521CC9CAB1E6370AE18D84EC5BF99B9029A2;
// DevionGames.UIWidgets.FloatTween/FloatTweenFinishCallback
struct FloatTweenFinishCallback_tD71B2F82F5D04C6FD0D854914D14D80014F6036C;
// OtherWorld/<WaitAndDeactivate>d__9
struct U3CWaitAndDeactivateU3Ed__9_tEDEFB4CA79E9F6B7D6D69D4C241E6E1C5C06C541;
// ParticleSea/<WaitAndUpdate>d__17
struct U3CWaitAndUpdateU3Ed__17_tBCC8380530BB68ACBABD946456C99924D27E7ABE;
// DevionGames.PropertyBinding/<IntervalUpdate>d__8
struct U3CIntervalUpdateU3Ed__8_tA09793DC2F32C3CA771B6F2CD2AF26A4B985975B;
// DevionGames.PropertyBinding/PropertyRef
struct PropertyRef_tBDFE709DEBDDC6FAD63FFDEDACADAB3E4328ED7E;
// DevionGames.UIWidgets.RadialMenu/<>c
struct U3CU3Ec_t9B0E684BA3104C2A6B21CED6AECF6A08A4CA927E;
// DevionGames.UIWidgets.RadialMenu/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t460817D95B7673B8E654B3D2DA6095D4EE08AD2E;
// DevionGames.UIWidgets.RadialMenu/<>c__DisplayClass5_1
struct U3CU3Ec__DisplayClass5_1_tC9D5502A4A5D130A7489546F81E3C8C7BEF3A65C;
// RadialMenuTrigger/<>c
struct U3CU3Ec_t25AB60471E084307081EBC615C7D87324F3A651D;
// DevionGames.ReflectionUtility/<>c
struct U3CU3Ec_t045AC806888EFD4E8508D8DC26128AC831820FF0;
// DevionGames.ReflectionUtility/<BaseTypes>d__8
struct U3CBaseTypesU3Ed__8_tD5C05A218261CD6C6EBD00C72C95D6B857C2E93A;
// DevionGames.ReflectionUtility/<BaseTypesAndSelf>d__7
struct U3CBaseTypesAndSelfU3Ed__7_t2FEF19550A52910BE32ECB2DFE7642215A2B1DDC;
// RippleEffect/Droplet
struct Droplet_tB38F5D6E236CE375FE37BB6D2DE5CB9802EDDDDB;
// UnityStandardAssets.CinematicEffects.SMAA/ExperimentalGroup
struct ExperimentalGroup_t7C7B327F01DC40E7E7B30E43B7A3E88A403FEB93;
// UnityStandardAssets.CinematicEffects.SMAA/SettingsGroup
struct SettingsGroup_t4D6A850FDDA2DE9F66716B684EC48F9A7BC94B7B;
// UnityStandardAssets.CinematicEffects.SMAA/TopLevelSettings
struct TopLevelSettings_tB734750836CD2B08679356BD51D96457BB5658B9;
// SceneLoader/<LoadNewScene>d__7
struct U3CLoadNewSceneU3Ed__7_tE2C0C421103C28E35872925BB4DF73D0E16B3D5C;
// UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/ReflectionSettings
struct ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1;
// DevionGames.SelectionHandler/<>c
struct U3CU3Ec_t9C90EFC120B73E67C0781C272253507C12FF9469;
// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/<>c__DisplayClass88_0
struct U3CU3Ec__DisplayClass88_0_t71A2AD52D9F126499C639D05D5B330C8EDB8A08D;
// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect
struct TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA;
// DevionGames.UIWidgets.Spinner/<Decrease>d__16
struct U3CDecreaseU3Ed__16_tFD60E6E10A72C519CE4134147CE2ED4E53F94BF9;
// DevionGames.UIWidgets.Spinner/<Increase>d__15
struct U3CIncreaseU3Ed__15_t91B32DDF8A6BD9F2C57D972B6CBF24B394BA73AC;
// DevionGames.UIWidgets.Spinner/SpinnerEvent
struct SpinnerEvent_tA26213AF983D08EC23570344A216BDD9450D540E;
// DevionGames.UIWidgets.Spinner/SpinnerTextEvent
struct SpinnerTextEvent_tBD023BBE00BF8572757F8246043BC278C9EB6EF8;
// DevionGames.UIWidgets.Tab/TabEvent
struct TabEvent_t76A44A6361E5D7485A54DAF31AB97CFC3B67D5A2;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075;
// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ChannelMixer
struct ChannelMixer_t400A30E42EF3713FEBAC135F5692468FE39A7A12;
// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ChannelMixerSettings
struct ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744;
// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorWheelGroup
struct ColorWheelGroup_t73EA317646791651AE5D09C5FDCEC01721257738;
// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/Curve
struct Curve_t71297F13C46D62254E298F5879F6EEB871CC24AD;
// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/IndentedGroup
struct IndentedGroup_t1A22E882DC9E620A401D8EA437C6653101218B4E;
// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/SettingsGroup
struct SettingsGroup_tE37D2D1B1E9DF1E978D0F800765D91143CA9B4C1;
// DevionGames.UIWidgets.TooltipTrigger/<DelayTooltip>d__14
struct U3CDelayTooltipU3Ed__14_t468E94EBCCF55D8B92F6C78E45440AD307754FE7;
// DevionGames.UIWidgets.TooltipTrigger/StringPair
struct StringPair_tECA752B4600BBB8DF0DE2F973CCB4319CCCE7DA5;
// DevionGames.TypeUtility/<>c
struct U3CU3Ec_t485C5B2655F18E6B77C5AFD264AE4BB1BD013E9A;
// DevionGames.TypeUtility/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t1434B44CCC24BF452CBCA1463DF0E5A440F89014;
// DevionGames.UIWidgets.UIWidget/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_t0EA311E0579D20F111699FF6723A2B078B9820D1;
// DevionGames.UIWidgets.UIWidget/<OnDelayedStart>d__27
struct U3COnDelayedStartU3Ed__27_t954F9FDFF1EF1ACA1804A80BBC261A4C18A30E8A;
// DevionGames.UIWidgets.UIWidget/WidgetEvent
struct WidgetEvent_tB4620AD81E6501F79A226F2B03C5B6660F007F2E;
// DevionGames.UIWidgets.Vector3Tween/Vector3TweenCallback
struct Vector3TweenCallback_tD6CA155C8C3A31A8D18A0841A689B8550FF69A7F;
// DevionGames.UIWidgets.Vector3Tween/Vector3TweenFinishCallback
struct Vector3TweenFinishCallback_tF20A493CCE0A022D6B06C726E7A807F37E486B4B;
// Water2D.Water2D_Spawner/<loop>d__52
struct U3CloopU3Ed__52_tC16AB621C0032FFEA99927B669C25D97F81483AD;
// UnityStandardAssets.CinematicEffects.FXAA/Preset/LayoutAttribute
struct LayoutAttribute_t4A19CE9A56C91763A69A8981B8E519C5B25F4522;
// UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings/LayoutAttribute
struct LayoutAttribute_t87E11BB1A8C6EE93216FEAF5B4B3F7504E8B95C1;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AttributeUtility_t36CF6089FCFBFA0BC8E6FF3ED72340A28F6D32F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionUtility_t8DC7D068B30A12DDB8780C90EDFE9DCDCA7C4755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBaseTypesAndSelfU3Ed__7_t2FEF19550A52910BE32ECB2DFE7642215A2B1DDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBaseTypesU3Ed__8_tD5C05A218261CD6C6EBD00C72C95D6B857C2E93A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t045AC806888EFD4E8508D8DC26128AC831820FF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t25AB60471E084307081EBC615C7D87324F3A651D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t485C5B2655F18E6B77C5AFD264AE4BB1BD013E9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9B0E684BA3104C2A6B21CED6AECF6A08A4CA927E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9C90EFC120B73E67C0781C272253507C12FF9469_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WidgetUtility_t124B1BB3D09986FF1DCA8F0EC1EBDE02B6A93AFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral53D3AA67CEBED08F08A91248EA669401ABF66242;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisISelectable_t7F312FFA8BEAC50F25A42430ABD841CB04B7CBAF_mD2000FFB92048614032F133E6893FF6E22C327DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisType_t_mA57AE3CB9D37B60DA716D9E9C34A0A23154B7241_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9_mCC7649DDC10A23AFC09C1C6611B15FFFF513064F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBaseTypesAndSelfU3Ed__7_System_Collections_IEnumerator_Reset_mD6B328152E5086A05DFF6A0C2CF647CC21F75341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBaseTypesU3Ed__8_System_Collections_IEnumerator_Reset_m3DFD40BFBDB7DA0892C755DE1C6B860A2C6E2FA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDecreaseU3Ed__16_System_Collections_IEnumerator_Reset_m8D5FBE32C07FB8C3018577E453973F951E134FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayTooltipU3Ed__14_System_Collections_IEnumerator_Reset_mDB2AC97B2408A7098C9FD651C18923B61B253A8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CIncreaseU3Ed__15_System_Collections_IEnumerator_Reset_m34D0717334FD291C8138B4B9F971265797F4FFE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CIntervalUpdateU3Ed__8_System_Collections_IEnumerator_Reset_m27DF6A4155E068B25F6EE6BC23FB98790875C190_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadNewSceneU3Ed__7_System_Collections_IEnumerator_Reset_m5EDF519FA0AB8A4C63362461D9ECD298E5EA50C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnDelayedStartU3Ed__27_System_Collections_IEnumerator_Reset_m0E23141DD822E95EC1ED31BBE77E26FE2B7FC018_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitAndDeactivateU3Ed__9_System_Collections_IEnumerator_Reset_m62B796843F795BE874CBE5B5499352D0FFD4F58B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitAndUpdateU3Ed__17_System_Collections_IEnumerator_Reset_m8EF718DF94E6C5C4C7A9B260C4443FAE41D95865_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CloopU3Ed__52_System_Collections_IEnumerator_Reset_mA0D5E5BB243A9E1CE43691477C87840B9CD66291_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mC58365ECDF3275B845B1D16FAACD109627B507F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* NonSerializedAttribute_t44DC3D6520AC139B22FC692C3480F8A67C38FC12_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25_0_0_0_var;
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;;
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com;
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com;;
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke;
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke;;
struct ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744;;
struct ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshaled_com;
struct ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshaled_com;;
struct ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshaled_pinvoke;
struct ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1;;
struct ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshaled_com;
struct ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshaled_com;;
struct ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshaled_pinvoke;
struct ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshaled_pinvoke;;
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct VisualizerU5BU5D_tC5921398D3FDABEEA249BC021EDF7A133781918E;
struct QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct List_1_t2E0A11B5F89515389093E72BC4B6064918E20E62  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t9A79A7EED5838CECDC32AB2E0A4C369A6D9DF123* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2E0A11B5F89515389093E72BC4B6064918E20E62, ____items_1)); }
	inline KeyValuePair_2U5BU5D_t9A79A7EED5838CECDC32AB2E0A4C369A6D9DF123* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_t9A79A7EED5838CECDC32AB2E0A4C369A6D9DF123** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_t9A79A7EED5838CECDC32AB2E0A4C369A6D9DF123* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2E0A11B5F89515389093E72BC4B6064918E20E62, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2E0A11B5F89515389093E72BC4B6064918E20E62, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2E0A11B5F89515389093E72BC4B6064918E20E62, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2E0A11B5F89515389093E72BC4B6064918E20E62_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_t9A79A7EED5838CECDC32AB2E0A4C369A6D9DF123* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2E0A11B5F89515389093E72BC4B6064918E20E62_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_t9A79A7EED5838CECDC32AB2E0A4C369A6D9DF123* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_t9A79A7EED5838CECDC32AB2E0A4C369A6D9DF123** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_t9A79A7EED5838CECDC32AB2E0A4C369A6D9DF123* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


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


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// OtherWorld/<WaitAndDeactivate>d__9
struct U3CWaitAndDeactivateU3Ed__9_tEDEFB4CA79E9F6B7D6D69D4C241E6E1C5C06C541  : public RuntimeObject
{
public:
	// System.Int32 OtherWorld/<WaitAndDeactivate>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OtherWorld/<WaitAndDeactivate>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single OtherWorld/<WaitAndDeactivate>d__9::waitTime
	float ___waitTime_2;
	// OtherWorld OtherWorld/<WaitAndDeactivate>d__9::<>4__this
	OtherWorld_tB727BB284D250D1C80B503FC078EF2447876516B * ___U3CU3E4__this_3;
	// System.Int32 OtherWorld/<WaitAndDeactivate>d__9::indexToDeactivate
	int32_t ___indexToDeactivate_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitAndDeactivateU3Ed__9_tEDEFB4CA79E9F6B7D6D69D4C241E6E1C5C06C541, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitAndDeactivateU3Ed__9_tEDEFB4CA79E9F6B7D6D69D4C241E6E1C5C06C541, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_waitTime_2() { return static_cast<int32_t>(offsetof(U3CWaitAndDeactivateU3Ed__9_tEDEFB4CA79E9F6B7D6D69D4C241E6E1C5C06C541, ___waitTime_2)); }
	inline float get_waitTime_2() const { return ___waitTime_2; }
	inline float* get_address_of_waitTime_2() { return &___waitTime_2; }
	inline void set_waitTime_2(float value)
	{
		___waitTime_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CWaitAndDeactivateU3Ed__9_tEDEFB4CA79E9F6B7D6D69D4C241E6E1C5C06C541, ___U3CU3E4__this_3)); }
	inline OtherWorld_tB727BB284D250D1C80B503FC078EF2447876516B * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline OtherWorld_tB727BB284D250D1C80B503FC078EF2447876516B ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(OtherWorld_tB727BB284D250D1C80B503FC078EF2447876516B * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_indexToDeactivate_4() { return static_cast<int32_t>(offsetof(U3CWaitAndDeactivateU3Ed__9_tEDEFB4CA79E9F6B7D6D69D4C241E6E1C5C06C541, ___indexToDeactivate_4)); }
	inline int32_t get_indexToDeactivate_4() const { return ___indexToDeactivate_4; }
	inline int32_t* get_address_of_indexToDeactivate_4() { return &___indexToDeactivate_4; }
	inline void set_indexToDeactivate_4(int32_t value)
	{
		___indexToDeactivate_4 = value;
	}
};


// ParticleSea/<WaitAndUpdate>d__17
struct U3CWaitAndUpdateU3Ed__17_tBCC8380530BB68ACBABD946456C99924D27E7ABE  : public RuntimeObject
{
public:
	// System.Int32 ParticleSea/<WaitAndUpdate>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ParticleSea/<WaitAndUpdate>d__17::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single ParticleSea/<WaitAndUpdate>d__17::waitTime
	float ___waitTime_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitAndUpdateU3Ed__17_tBCC8380530BB68ACBABD946456C99924D27E7ABE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitAndUpdateU3Ed__17_tBCC8380530BB68ACBABD946456C99924D27E7ABE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_waitTime_2() { return static_cast<int32_t>(offsetof(U3CWaitAndUpdateU3Ed__17_tBCC8380530BB68ACBABD946456C99924D27E7ABE, ___waitTime_2)); }
	inline float get_waitTime_2() const { return ___waitTime_2; }
	inline float* get_address_of_waitTime_2() { return &___waitTime_2; }
	inline void set_waitTime_2(float value)
	{
		___waitTime_2 = value;
	}
};


// DevionGames.PropertyBinding/<IntervalUpdate>d__8
struct U3CIntervalUpdateU3Ed__8_tA09793DC2F32C3CA771B6F2CD2AF26A4B985975B  : public RuntimeObject
{
public:
	// System.Int32 DevionGames.PropertyBinding/<IntervalUpdate>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DevionGames.PropertyBinding/<IntervalUpdate>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DevionGames.PropertyBinding DevionGames.PropertyBinding/<IntervalUpdate>d__8::<>4__this
	PropertyBinding_t273EDABE3A995B2B49B72C6E2ED0E83BF73F3FF1 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CIntervalUpdateU3Ed__8_tA09793DC2F32C3CA771B6F2CD2AF26A4B985975B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CIntervalUpdateU3Ed__8_tA09793DC2F32C3CA771B6F2CD2AF26A4B985975B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CIntervalUpdateU3Ed__8_tA09793DC2F32C3CA771B6F2CD2AF26A4B985975B, ___U3CU3E4__this_2)); }
	inline PropertyBinding_t273EDABE3A995B2B49B72C6E2ED0E83BF73F3FF1 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PropertyBinding_t273EDABE3A995B2B49B72C6E2ED0E83BF73F3FF1 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PropertyBinding_t273EDABE3A995B2B49B72C6E2ED0E83BF73F3FF1 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// DevionGames.PropertyBinding/PropertyRef
struct PropertyRef_tBDFE709DEBDDC6FAD63FFDEDACADAB3E4328ED7E  : public RuntimeObject
{
public:
	// UnityEngine.Component DevionGames.PropertyBinding/PropertyRef::m_Component
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Component_0;
	// System.Reflection.FieldInfo DevionGames.PropertyBinding/PropertyRef::m_Field
	FieldInfo_t * ___m_Field_1;
	// System.Reflection.PropertyInfo DevionGames.PropertyBinding/PropertyRef::m_Property
	PropertyInfo_t * ___m_Property_2;
	// System.String DevionGames.PropertyBinding/PropertyRef::m_PropertyPath
	String_t* ___m_PropertyPath_3;

public:
	inline static int32_t get_offset_of_m_Component_0() { return static_cast<int32_t>(offsetof(PropertyRef_tBDFE709DEBDDC6FAD63FFDEDACADAB3E4328ED7E, ___m_Component_0)); }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * get_m_Component_0() const { return ___m_Component_0; }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 ** get_address_of_m_Component_0() { return &___m_Component_0; }
	inline void set_m_Component_0(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * value)
	{
		___m_Component_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Component_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Field_1() { return static_cast<int32_t>(offsetof(PropertyRef_tBDFE709DEBDDC6FAD63FFDEDACADAB3E4328ED7E, ___m_Field_1)); }
	inline FieldInfo_t * get_m_Field_1() const { return ___m_Field_1; }
	inline FieldInfo_t ** get_address_of_m_Field_1() { return &___m_Field_1; }
	inline void set_m_Field_1(FieldInfo_t * value)
	{
		___m_Field_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Field_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Property_2() { return static_cast<int32_t>(offsetof(PropertyRef_tBDFE709DEBDDC6FAD63FFDEDACADAB3E4328ED7E, ___m_Property_2)); }
	inline PropertyInfo_t * get_m_Property_2() const { return ___m_Property_2; }
	inline PropertyInfo_t ** get_address_of_m_Property_2() { return &___m_Property_2; }
	inline void set_m_Property_2(PropertyInfo_t * value)
	{
		___m_Property_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Property_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PropertyPath_3() { return static_cast<int32_t>(offsetof(PropertyRef_tBDFE709DEBDDC6FAD63FFDEDACADAB3E4328ED7E, ___m_PropertyPath_3)); }
	inline String_t* get_m_PropertyPath_3() const { return ___m_PropertyPath_3; }
	inline String_t** get_address_of_m_PropertyPath_3() { return &___m_PropertyPath_3; }
	inline void set_m_PropertyPath_3(String_t* value)
	{
		___m_PropertyPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PropertyPath_3), (void*)value);
	}
};


// DevionGames.UIWidgets.RadialMenu/<>c
struct U3CU3Ec_t9B0E684BA3104C2A6B21CED6AECF6A08A4CA927E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t9B0E684BA3104C2A6B21CED6AECF6A08A4CA927E_StaticFields
{
public:
	// DevionGames.UIWidgets.RadialMenu/<>c DevionGames.UIWidgets.RadialMenu/<>c::<>9
	U3CU3Ec_t9B0E684BA3104C2A6B21CED6AECF6A08A4CA927E * ___U3CU3E9_0;
	// System.Predicate`1<DevionGames.UIWidgets.MenuItem> DevionGames.UIWidgets.RadialMenu/<>c::<>9__7_0
	Predicate_1_tDCF7CD53A83758ADC976EEF350AF598300DE21F6 * ___U3CU3E9__7_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9B0E684BA3104C2A6B21CED6AECF6A08A4CA927E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t9B0E684BA3104C2A6B21CED6AECF6A08A4CA927E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t9B0E684BA3104C2A6B21CED6AECF6A08A4CA927E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t9B0E684BA3104C2A6B21CED6AECF6A08A4CA927E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9B0E684BA3104C2A6B21CED6AECF6A08A4CA927E_StaticFields, ___U3CU3E9__7_0_1)); }
	inline Predicate_1_tDCF7CD53A83758ADC976EEF350AF598300DE21F6 * get_U3CU3E9__7_0_1() const { return ___U3CU3E9__7_0_1; }
	inline Predicate_1_tDCF7CD53A83758ADC976EEF350AF598300DE21F6 ** get_address_of_U3CU3E9__7_0_1() { return &___U3CU3E9__7_0_1; }
	inline void set_U3CU3E9__7_0_1(Predicate_1_tDCF7CD53A83758ADC976EEF350AF598300DE21F6 * value)
	{
		___U3CU3E9__7_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_0_1), (void*)value);
	}
};


// DevionGames.UIWidgets.RadialMenu/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t460817D95B7673B8E654B3D2DA6095D4EE08AD2E  : public RuntimeObject
{
public:
	// DevionGames.UIWidgets.RadialMenu DevionGames.UIWidgets.RadialMenu/<>c__DisplayClass5_0::<>4__this
	RadialMenu_tEA5D73346C7A0510CB219509A1763DD979921975 * ___U3CU3E4__this_0;
	// UnityEngine.Events.UnityAction`1<System.Int32> DevionGames.UIWidgets.RadialMenu/<>c__DisplayClass5_0::result
	UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___result_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t460817D95B7673B8E654B3D2DA6095D4EE08AD2E, ___U3CU3E4__this_0)); }
	inline RadialMenu_tEA5D73346C7A0510CB219509A1763DD979921975 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline RadialMenu_tEA5D73346C7A0510CB219509A1763DD979921975 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(RadialMenu_tEA5D73346C7A0510CB219509A1763DD979921975 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t460817D95B7673B8E654B3D2DA6095D4EE08AD2E, ___result_1)); }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * get_result_1() const { return ___result_1; }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 ** get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * value)
	{
		___result_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_1), (void*)value);
	}
};


// DevionGames.UIWidgets.RadialMenu/<>c__DisplayClass5_1
struct U3CU3Ec__DisplayClass5_1_tC9D5502A4A5D130A7489546F81E3C8C7BEF3A65C  : public RuntimeObject
{
public:
	// System.Int32 DevionGames.UIWidgets.RadialMenu/<>c__DisplayClass5_1::index
	int32_t ___index_0;
	// DevionGames.UIWidgets.RadialMenu/<>c__DisplayClass5_0 DevionGames.UIWidgets.RadialMenu/<>c__DisplayClass5_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass5_0_t460817D95B7673B8E654B3D2DA6095D4EE08AD2E * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_1_tC9D5502A4A5D130A7489546F81E3C8C7BEF3A65C, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_1_tC9D5502A4A5D130A7489546F81E3C8C7BEF3A65C, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass5_0_t460817D95B7673B8E654B3D2DA6095D4EE08AD2E * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass5_0_t460817D95B7673B8E654B3D2DA6095D4EE08AD2E ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass5_0_t460817D95B7673B8E654B3D2DA6095D4EE08AD2E * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// RadialMenuTrigger/<>c
struct U3CU3Ec_t25AB60471E084307081EBC615C7D87324F3A651D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t25AB60471E084307081EBC615C7D87324F3A651D_StaticFields
{
public:
	// RadialMenuTrigger/<>c RadialMenuTrigger/<>c::<>9
	U3CU3Ec_t25AB60471E084307081EBC615C7D87324F3A651D * ___U3CU3E9_0;
	// UnityEngine.Events.UnityAction`1<System.Int32> RadialMenuTrigger/<>c::<>9__3_0
	UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___U3CU3E9__3_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t25AB60471E084307081EBC615C7D87324F3A651D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t25AB60471E084307081EBC615C7D87324F3A651D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t25AB60471E084307081EBC615C7D87324F3A651D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t25AB60471E084307081EBC615C7D87324F3A651D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t25AB60471E084307081EBC615C7D87324F3A651D_StaticFields, ___U3CU3E9__3_0_1)); }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}
};


// DevionGames.ReflectionUtility/<>c
struct U3CU3Ec_t045AC806888EFD4E8508D8DC26128AC831820FF0  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t045AC806888EFD4E8508D8DC26128AC831820FF0_StaticFields
{
public:
	// DevionGames.ReflectionUtility/<>c DevionGames.ReflectionUtility/<>c::<>9
	U3CU3Ec_t045AC806888EFD4E8508D8DC26128AC831820FF0 * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.FieldInfo,System.Int32> DevionGames.ReflectionUtility/<>c::<>9__5_0
	Func_2_tA71E659021C95E54328A443283A7154D558E9411 * ___U3CU3E9__5_0_1;
	// System.Func`2<System.Reflection.FieldInfo,System.Boolean> DevionGames.ReflectionUtility/<>c::<>9__6_0
	Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * ___U3CU3E9__6_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t045AC806888EFD4E8508D8DC26128AC831820FF0_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t045AC806888EFD4E8508D8DC26128AC831820FF0 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t045AC806888EFD4E8508D8DC26128AC831820FF0 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t045AC806888EFD4E8508D8DC26128AC831820FF0 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t045AC806888EFD4E8508D8DC26128AC831820FF0_StaticFields, ___U3CU3E9__5_0_1)); }
	inline Func_2_tA71E659021C95E54328A443283A7154D558E9411 * get_U3CU3E9__5_0_1() const { return ___U3CU3E9__5_0_1; }
	inline Func_2_tA71E659021C95E54328A443283A7154D558E9411 ** get_address_of_U3CU3E9__5_0_1() { return &___U3CU3E9__5_0_1; }
	inline void set_U3CU3E9__5_0_1(Func_2_tA71E659021C95E54328A443283A7154D558E9411 * value)
	{
		___U3CU3E9__5_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t045AC806888EFD4E8508D8DC26128AC831820FF0_StaticFields, ___U3CU3E9__6_0_2)); }
	inline Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * get_U3CU3E9__6_0_2() const { return ___U3CU3E9__6_0_2; }
	inline Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE ** get_address_of_U3CU3E9__6_0_2() { return &___U3CU3E9__6_0_2; }
	inline void set_U3CU3E9__6_0_2(Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * value)
	{
		___U3CU3E9__6_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_0_2), (void*)value);
	}
};


// DevionGames.ReflectionUtility/<BaseTypes>d__8
struct U3CBaseTypesU3Ed__8_tD5C05A218261CD6C6EBD00C72C95D6B857C2E93A  : public RuntimeObject
{
public:
	// System.Int32 DevionGames.ReflectionUtility/<BaseTypes>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Type DevionGames.ReflectionUtility/<BaseTypes>d__8::<>2__current
	Type_t * ___U3CU3E2__current_1;
	// System.Int32 DevionGames.ReflectionUtility/<BaseTypes>d__8::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Type DevionGames.ReflectionUtility/<BaseTypes>d__8::type
	Type_t * ___type_3;
	// System.Type DevionGames.ReflectionUtility/<BaseTypes>d__8::<>3__type
	Type_t * ___U3CU3E3__type_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBaseTypesU3Ed__8_tD5C05A218261CD6C6EBD00C72C95D6B857C2E93A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBaseTypesU3Ed__8_tD5C05A218261CD6C6EBD00C72C95D6B857C2E93A, ___U3CU3E2__current_1)); }
	inline Type_t * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Type_t ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Type_t * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CBaseTypesU3Ed__8_tD5C05A218261CD6C6EBD00C72C95D6B857C2E93A, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(U3CBaseTypesU3Ed__8_tD5C05A218261CD6C6EBD00C72C95D6B857C2E93A, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__type_4() { return static_cast<int32_t>(offsetof(U3CBaseTypesU3Ed__8_tD5C05A218261CD6C6EBD00C72C95D6B857C2E93A, ___U3CU3E3__type_4)); }
	inline Type_t * get_U3CU3E3__type_4() const { return ___U3CU3E3__type_4; }
	inline Type_t ** get_address_of_U3CU3E3__type_4() { return &___U3CU3E3__type_4; }
	inline void set_U3CU3E3__type_4(Type_t * value)
	{
		___U3CU3E3__type_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__type_4), (void*)value);
	}
};


// DevionGames.ReflectionUtility/<BaseTypesAndSelf>d__7
struct U3CBaseTypesAndSelfU3Ed__7_t2FEF19550A52910BE32ECB2DFE7642215A2B1DDC  : public RuntimeObject
{
public:
	// System.Int32 DevionGames.ReflectionUtility/<BaseTypesAndSelf>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Type DevionGames.ReflectionUtility/<BaseTypesAndSelf>d__7::<>2__current
	Type_t * ___U3CU3E2__current_1;
	// System.Int32 DevionGames.ReflectionUtility/<BaseTypesAndSelf>d__7::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Type DevionGames.ReflectionUtility/<BaseTypesAndSelf>d__7::type
	Type_t * ___type_3;
	// System.Type DevionGames.ReflectionUtility/<BaseTypesAndSelf>d__7::<>3__type
	Type_t * ___U3CU3E3__type_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBaseTypesAndSelfU3Ed__7_t2FEF19550A52910BE32ECB2DFE7642215A2B1DDC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBaseTypesAndSelfU3Ed__7_t2FEF19550A52910BE32ECB2DFE7642215A2B1DDC, ___U3CU3E2__current_1)); }
	inline Type_t * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Type_t ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Type_t * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CBaseTypesAndSelfU3Ed__7_t2FEF19550A52910BE32ECB2DFE7642215A2B1DDC, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(U3CBaseTypesAndSelfU3Ed__7_t2FEF19550A52910BE32ECB2DFE7642215A2B1DDC, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__type_4() { return static_cast<int32_t>(offsetof(U3CBaseTypesAndSelfU3Ed__7_t2FEF19550A52910BE32ECB2DFE7642215A2B1DDC, ___U3CU3E3__type_4)); }
	inline Type_t * get_U3CU3E3__type_4() const { return ___U3CU3E3__type_4; }
	inline Type_t ** get_address_of_U3CU3E3__type_4() { return &___U3CU3E3__type_4; }
	inline void set_U3CU3E3__type_4(Type_t * value)
	{
		___U3CU3E3__type_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__type_4), (void*)value);
	}
};


// SceneLoader/<LoadNewScene>d__7
struct U3CLoadNewSceneU3Ed__7_tE2C0C421103C28E35872925BB4DF73D0E16B3D5C  : public RuntimeObject
{
public:
	// System.Int32 SceneLoader/<LoadNewScene>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SceneLoader/<LoadNewScene>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// SceneLoader SceneLoader/<LoadNewScene>d__7::<>4__this
	SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * ___U3CU3E4__this_2;
	// UnityEngine.AsyncOperation SceneLoader/<LoadNewScene>d__7::<async>5__2
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___U3CasyncU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadNewSceneU3Ed__7_tE2C0C421103C28E35872925BB4DF73D0E16B3D5C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadNewSceneU3Ed__7_tE2C0C421103C28E35872925BB4DF73D0E16B3D5C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadNewSceneU3Ed__7_tE2C0C421103C28E35872925BB4DF73D0E16B3D5C, ___U3CU3E4__this_2)); }
	inline SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CasyncU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CLoadNewSceneU3Ed__7_tE2C0C421103C28E35872925BB4DF73D0E16B3D5C, ___U3CasyncU3E5__2_3)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get_U3CasyncU3E5__2_3() const { return ___U3CasyncU3E5__2_3; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of_U3CasyncU3E5__2_3() { return &___U3CasyncU3E5__2_3; }
	inline void set_U3CasyncU3E5__2_3(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		___U3CasyncU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CasyncU3E5__2_3), (void*)value);
	}
};


// DevionGames.SelectionHandler/<>c
struct U3CU3Ec_t9C90EFC120B73E67C0781C272253507C12FF9469  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t9C90EFC120B73E67C0781C272253507C12FF9469_StaticFields
{
public:
	// DevionGames.SelectionHandler/<>c DevionGames.SelectionHandler/<>c::<>9
	U3CU3Ec_t9C90EFC120B73E67C0781C272253507C12FF9469 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.RaycastHit,DevionGames.ISelectable> DevionGames.SelectionHandler/<>c::<>9__17_0
	Func_2_t0DBD644746C44FF469960CDEFE148C2157CD6AB3 * ___U3CU3E9__17_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9C90EFC120B73E67C0781C272253507C12FF9469_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t9C90EFC120B73E67C0781C272253507C12FF9469 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t9C90EFC120B73E67C0781C272253507C12FF9469 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t9C90EFC120B73E67C0781C272253507C12FF9469 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__17_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9C90EFC120B73E67C0781C272253507C12FF9469_StaticFields, ___U3CU3E9__17_0_1)); }
	inline Func_2_t0DBD644746C44FF469960CDEFE148C2157CD6AB3 * get_U3CU3E9__17_0_1() const { return ___U3CU3E9__17_0_1; }
	inline Func_2_t0DBD644746C44FF469960CDEFE148C2157CD6AB3 ** get_address_of_U3CU3E9__17_0_1() { return &___U3CU3E9__17_0_1; }
	inline void set_U3CU3E9__17_0_1(Func_2_t0DBD644746C44FF469960CDEFE148C2157CD6AB3 * value)
	{
		___U3CU3E9__17_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__17_0_1), (void*)value);
	}
};


// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/<>c__DisplayClass88_0
struct U3CU3Ec__DisplayClass88_0_t71A2AD52D9F126499C639D05D5B330C8EDB8A08D  : public RuntimeObject
{
public:
	// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/<>c__DisplayClass88_0::panelNum
	int32_t ___panelNum_0;
	// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/<>c__DisplayClass88_0::<>4__this
	SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_panelNum_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass88_0_t71A2AD52D9F126499C639D05D5B330C8EDB8A08D, ___panelNum_0)); }
	inline int32_t get_panelNum_0() const { return ___panelNum_0; }
	inline int32_t* get_address_of_panelNum_0() { return &___panelNum_0; }
	inline void set_panelNum_0(int32_t value)
	{
		___panelNum_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass88_0_t71A2AD52D9F126499C639D05D5B330C8EDB8A08D, ___U3CU3E4__this_1)); }
	inline SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect
struct TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA  : public RuntimeObject
{
public:
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::minDisplacement
	float ___minDisplacement_0;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::maxDisplacement
	float ___maxDisplacement_1;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::minValue
	float ___minValue_2;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::maxValue
	float ___maxValue_3;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::defaultMinValue
	float ___defaultMinValue_4;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::defaultMaxValue
	float ___defaultMaxValue_5;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::defaultMinDisplacement
	float ___defaultMinDisplacement_6;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::defaultMaxDisplacement
	float ___defaultMaxDisplacement_7;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::showPanel
	bool ___showPanel_8;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::showDisplacement
	bool ___showDisplacement_9;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::showValue
	bool ___showValue_10;
	// System.String DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::label
	String_t* ___label_11;
	// UnityEngine.AnimationCurve DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::function
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___function_12;
	// UnityEngine.AnimationCurve DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::defaultFunction
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___defaultFunction_13;
	// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::simpleScrollSnap
	SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257 * ___simpleScrollSnap_14;

public:
	inline static int32_t get_offset_of_minDisplacement_0() { return static_cast<int32_t>(offsetof(TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA, ___minDisplacement_0)); }
	inline float get_minDisplacement_0() const { return ___minDisplacement_0; }
	inline float* get_address_of_minDisplacement_0() { return &___minDisplacement_0; }
	inline void set_minDisplacement_0(float value)
	{
		___minDisplacement_0 = value;
	}

	inline static int32_t get_offset_of_maxDisplacement_1() { return static_cast<int32_t>(offsetof(TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA, ___maxDisplacement_1)); }
	inline float get_maxDisplacement_1() const { return ___maxDisplacement_1; }
	inline float* get_address_of_maxDisplacement_1() { return &___maxDisplacement_1; }
	inline void set_maxDisplacement_1(float value)
	{
		___maxDisplacement_1 = value;
	}

	inline static int32_t get_offset_of_minValue_2() { return static_cast<int32_t>(offsetof(TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA, ___minValue_2)); }
	inline float get_minValue_2() const { return ___minValue_2; }
	inline float* get_address_of_minValue_2() { return &___minValue_2; }
	inline void set_minValue_2(float value)
	{
		___minValue_2 = value;
	}

	inline static int32_t get_offset_of_maxValue_3() { return static_cast<int32_t>(offsetof(TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA, ___maxValue_3)); }
	inline float get_maxValue_3() const { return ___maxValue_3; }
	inline float* get_address_of_maxValue_3() { return &___maxValue_3; }
	inline void set_maxValue_3(float value)
	{
		___maxValue_3 = value;
	}

	inline static int32_t get_offset_of_defaultMinValue_4() { return static_cast<int32_t>(offsetof(TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA, ___defaultMinValue_4)); }
	inline float get_defaultMinValue_4() const { return ___defaultMinValue_4; }
	inline float* get_address_of_defaultMinValue_4() { return &___defaultMinValue_4; }
	inline void set_defaultMinValue_4(float value)
	{
		___defaultMinValue_4 = value;
	}

	inline static int32_t get_offset_of_defaultMaxValue_5() { return static_cast<int32_t>(offsetof(TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA, ___defaultMaxValue_5)); }
	inline float get_defaultMaxValue_5() const { return ___defaultMaxValue_5; }
	inline float* get_address_of_defaultMaxValue_5() { return &___defaultMaxValue_5; }
	inline void set_defaultMaxValue_5(float value)
	{
		___defaultMaxValue_5 = value;
	}

	inline static int32_t get_offset_of_defaultMinDisplacement_6() { return static_cast<int32_t>(offsetof(TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA, ___defaultMinDisplacement_6)); }
	inline float get_defaultMinDisplacement_6() const { return ___defaultMinDisplacement_6; }
	inline float* get_address_of_defaultMinDisplacement_6() { return &___defaultMinDisplacement_6; }
	inline void set_defaultMinDisplacement_6(float value)
	{
		___defaultMinDisplacement_6 = value;
	}

	inline static int32_t get_offset_of_defaultMaxDisplacement_7() { return static_cast<int32_t>(offsetof(TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA, ___defaultMaxDisplacement_7)); }
	inline float get_defaultMaxDisplacement_7() const { return ___defaultMaxDisplacement_7; }
	inline float* get_address_of_defaultMaxDisplacement_7() { return &___defaultMaxDisplacement_7; }
	inline void set_defaultMaxDisplacement_7(float value)
	{
		___defaultMaxDisplacement_7 = value;
	}

	inline static int32_t get_offset_of_showPanel_8() { return static_cast<int32_t>(offsetof(TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA, ___showPanel_8)); }
	inline bool get_showPanel_8() const { return ___showPanel_8; }
	inline bool* get_address_of_showPanel_8() { return &___showPanel_8; }
	inline void set_showPanel_8(bool value)
	{
		___showPanel_8 = value;
	}

	inline static int32_t get_offset_of_showDisplacement_9() { return static_cast<int32_t>(offsetof(TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA, ___showDisplacement_9)); }
	inline bool get_showDisplacement_9() const { return ___showDisplacement_9; }
	inline bool* get_address_of_showDisplacement_9() { return &___showDisplacement_9; }
	inline void set_showDisplacement_9(bool value)
	{
		___showDisplacement_9 = value;
	}

	inline static int32_t get_offset_of_showValue_10() { return static_cast<int32_t>(offsetof(TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA, ___showValue_10)); }
	inline bool get_showValue_10() const { return ___showValue_10; }
	inline bool* get_address_of_showValue_10() { return &___showValue_10; }
	inline void set_showValue_10(bool value)
	{
		___showValue_10 = value;
	}

	inline static int32_t get_offset_of_label_11() { return static_cast<int32_t>(offsetof(TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA, ___label_11)); }
	inline String_t* get_label_11() const { return ___label_11; }
	inline String_t** get_address_of_label_11() { return &___label_11; }
	inline void set_label_11(String_t* value)
	{
		___label_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___label_11), (void*)value);
	}

	inline static int32_t get_offset_of_function_12() { return static_cast<int32_t>(offsetof(TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA, ___function_12)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_function_12() const { return ___function_12; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_function_12() { return &___function_12; }
	inline void set_function_12(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___function_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___function_12), (void*)value);
	}

	inline static int32_t get_offset_of_defaultFunction_13() { return static_cast<int32_t>(offsetof(TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA, ___defaultFunction_13)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_defaultFunction_13() const { return ___defaultFunction_13; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_defaultFunction_13() { return &___defaultFunction_13; }
	inline void set_defaultFunction_13(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___defaultFunction_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultFunction_13), (void*)value);
	}

	inline static int32_t get_offset_of_simpleScrollSnap_14() { return static_cast<int32_t>(offsetof(TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA, ___simpleScrollSnap_14)); }
	inline SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257 * get_simpleScrollSnap_14() const { return ___simpleScrollSnap_14; }
	inline SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257 ** get_address_of_simpleScrollSnap_14() { return &___simpleScrollSnap_14; }
	inline void set_simpleScrollSnap_14(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257 * value)
	{
		___simpleScrollSnap_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___simpleScrollSnap_14), (void*)value);
	}
};


// DevionGames.UIWidgets.Spinner/<Decrease>d__16
struct U3CDecreaseU3Ed__16_tFD60E6E10A72C519CE4134147CE2ED4E53F94BF9  : public RuntimeObject
{
public:
	// System.Int32 DevionGames.UIWidgets.Spinner/<Decrease>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DevionGames.UIWidgets.Spinner/<Decrease>d__16::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DevionGames.UIWidgets.Spinner DevionGames.UIWidgets.Spinner/<Decrease>d__16::<>4__this
	Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDecreaseU3Ed__16_tFD60E6E10A72C519CE4134147CE2ED4E53F94BF9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDecreaseU3Ed__16_tFD60E6E10A72C519CE4134147CE2ED4E53F94BF9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDecreaseU3Ed__16_tFD60E6E10A72C519CE4134147CE2ED4E53F94BF9, ___U3CU3E4__this_2)); }
	inline Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// DevionGames.UIWidgets.Spinner/<Increase>d__15
struct U3CIncreaseU3Ed__15_t91B32DDF8A6BD9F2C57D972B6CBF24B394BA73AC  : public RuntimeObject
{
public:
	// System.Int32 DevionGames.UIWidgets.Spinner/<Increase>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DevionGames.UIWidgets.Spinner/<Increase>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DevionGames.UIWidgets.Spinner DevionGames.UIWidgets.Spinner/<Increase>d__15::<>4__this
	Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CIncreaseU3Ed__15_t91B32DDF8A6BD9F2C57D972B6CBF24B394BA73AC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CIncreaseU3Ed__15_t91B32DDF8A6BD9F2C57D972B6CBF24B394BA73AC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CIncreaseU3Ed__15_t91B32DDF8A6BD9F2C57D972B6CBF24B394BA73AC, ___U3CU3E4__this_2)); }
	inline Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// DevionGames.UIWidgets.TooltipTrigger/<DelayTooltip>d__14
struct U3CDelayTooltipU3Ed__14_t468E94EBCCF55D8B92F6C78E45440AD307754FE7  : public RuntimeObject
{
public:
	// System.Int32 DevionGames.UIWidgets.TooltipTrigger/<DelayTooltip>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DevionGames.UIWidgets.TooltipTrigger/<DelayTooltip>d__14::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single DevionGames.UIWidgets.TooltipTrigger/<DelayTooltip>d__14::delay
	float ___delay_2;
	// DevionGames.UIWidgets.TooltipTrigger DevionGames.UIWidgets.TooltipTrigger/<DelayTooltip>d__14::<>4__this
	TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250 * ___U3CU3E4__this_3;
	// System.Single DevionGames.UIWidgets.TooltipTrigger/<DelayTooltip>d__14::<time>5__2
	float ___U3CtimeU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayTooltipU3Ed__14_t468E94EBCCF55D8B92F6C78E45440AD307754FE7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayTooltipU3Ed__14_t468E94EBCCF55D8B92F6C78E45440AD307754FE7, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CDelayTooltipU3Ed__14_t468E94EBCCF55D8B92F6C78E45440AD307754FE7, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CDelayTooltipU3Ed__14_t468E94EBCCF55D8B92F6C78E45440AD307754FE7, ___U3CU3E4__this_3)); }
	inline TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimeU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CDelayTooltipU3Ed__14_t468E94EBCCF55D8B92F6C78E45440AD307754FE7, ___U3CtimeU3E5__2_4)); }
	inline float get_U3CtimeU3E5__2_4() const { return ___U3CtimeU3E5__2_4; }
	inline float* get_address_of_U3CtimeU3E5__2_4() { return &___U3CtimeU3E5__2_4; }
	inline void set_U3CtimeU3E5__2_4(float value)
	{
		___U3CtimeU3E5__2_4 = value;
	}
};


// DevionGames.UIWidgets.TooltipTrigger/StringPair
struct StringPair_tECA752B4600BBB8DF0DE2F973CCB4319CCCE7DA5  : public RuntimeObject
{
public:
	// System.String DevionGames.UIWidgets.TooltipTrigger/StringPair::key
	String_t* ___key_0;
	// System.String DevionGames.UIWidgets.TooltipTrigger/StringPair::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(StringPair_tECA752B4600BBB8DF0DE2F973CCB4319CCCE7DA5, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(StringPair_tECA752B4600BBB8DF0DE2F973CCB4319CCCE7DA5, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// DevionGames.TypeUtility/<>c
struct U3CU3Ec_t485C5B2655F18E6B77C5AFD264AE4BB1BD013E9A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t485C5B2655F18E6B77C5AFD264AE4BB1BD013E9A_StaticFields
{
public:
	// DevionGames.TypeUtility/<>c DevionGames.TypeUtility/<>c::<>9
	U3CU3Ec_t485C5B2655F18E6B77C5AFD264AE4BB1BD013E9A * ___U3CU3E9_0;
	// System.Func`2<System.Type,System.String> DevionGames.TypeUtility/<>c::<>9__4_0
	Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 * ___U3CU3E9__4_0_1;
	// System.Func`2<System.Reflection.Assembly,System.Collections.Generic.IEnumerable`1<System.Type>> DevionGames.TypeUtility/<>c::<>9__5_0
	Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 * ___U3CU3E9__5_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t485C5B2655F18E6B77C5AFD264AE4BB1BD013E9A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t485C5B2655F18E6B77C5AFD264AE4BB1BD013E9A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t485C5B2655F18E6B77C5AFD264AE4BB1BD013E9A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t485C5B2655F18E6B77C5AFD264AE4BB1BD013E9A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t485C5B2655F18E6B77C5AFD264AE4BB1BD013E9A_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t485C5B2655F18E6B77C5AFD264AE4BB1BD013E9A_StaticFields, ___U3CU3E9__5_0_2)); }
	inline Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 * get_U3CU3E9__5_0_2() const { return ___U3CU3E9__5_0_2; }
	inline Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 ** get_address_of_U3CU3E9__5_0_2() { return &___U3CU3E9__5_0_2; }
	inline void set_U3CU3E9__5_0_2(Func_2_tE0DBF080012BEFCAB3A265240B5CD35BD3519412 * value)
	{
		___U3CU3E9__5_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_0_2), (void*)value);
	}
};


// DevionGames.TypeUtility/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t1434B44CCC24BF452CBCA1463DF0E5A440F89014  : public RuntimeObject
{
public:
	// System.Type DevionGames.TypeUtility/<>c__DisplayClass5_0::baseType
	Type_t * ___baseType_0;

public:
	inline static int32_t get_offset_of_baseType_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t1434B44CCC24BF452CBCA1463DF0E5A440F89014, ___baseType_0)); }
	inline Type_t * get_baseType_0() const { return ___baseType_0; }
	inline Type_t ** get_address_of_baseType_0() { return &___baseType_0; }
	inline void set_baseType_0(Type_t * value)
	{
		___baseType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseType_0), (void*)value);
	}
};


// DevionGames.UIWidgets.UIWidget/<OnDelayedStart>d__27
struct U3COnDelayedStartU3Ed__27_t954F9FDFF1EF1ACA1804A80BBC261A4C18A30E8A  : public RuntimeObject
{
public:
	// System.Int32 DevionGames.UIWidgets.UIWidget/<OnDelayedStart>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DevionGames.UIWidgets.UIWidget/<OnDelayedStart>d__27::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DevionGames.UIWidgets.UIWidget DevionGames.UIWidgets.UIWidget/<OnDelayedStart>d__27::<>4__this
	UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COnDelayedStartU3Ed__27_t954F9FDFF1EF1ACA1804A80BBC261A4C18A30E8A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3COnDelayedStartU3Ed__27_t954F9FDFF1EF1ACA1804A80BBC261A4C18A30E8A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3COnDelayedStartU3Ed__27_t954F9FDFF1EF1ACA1804A80BBC261A4C18A30E8A, ___U3CU3E4__this_2)); }
	inline UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>
struct UnityEvent_1_t0D27852CE4491ECD77DB83CDC47BEFDE77503829  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t0D27852CE4491ECD77DB83CDC47BEFDE77503829, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
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


// UnityEngine.Keyframe
struct Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};


// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
public:

public:
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// OtherWorld/Visualizer
struct Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61 
{
public:
	// System.Single OtherWorld/Visualizer::StartTime
	float ___StartTime_0;
	// System.Single OtherWorld/Visualizer::EndTime
	float ___EndTime_1;
	// UnityEngine.GameObject OtherWorld/Visualizer::visualizerObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___visualizerObject_2;

public:
	inline static int32_t get_offset_of_StartTime_0() { return static_cast<int32_t>(offsetof(Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61, ___StartTime_0)); }
	inline float get_StartTime_0() const { return ___StartTime_0; }
	inline float* get_address_of_StartTime_0() { return &___StartTime_0; }
	inline void set_StartTime_0(float value)
	{
		___StartTime_0 = value;
	}

	inline static int32_t get_offset_of_EndTime_1() { return static_cast<int32_t>(offsetof(Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61, ___EndTime_1)); }
	inline float get_EndTime_1() const { return ___EndTime_1; }
	inline float* get_address_of_EndTime_1() { return &___EndTime_1; }
	inline void set_EndTime_1(float value)
	{
		___EndTime_1 = value;
	}

	inline static int32_t get_offset_of_visualizerObject_2() { return static_cast<int32_t>(offsetof(Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61, ___visualizerObject_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_visualizerObject_2() const { return ___visualizerObject_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_visualizerObject_2() { return &___visualizerObject_2; }
	inline void set_visualizerObject_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___visualizerObject_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visualizerObject_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of OtherWorld/Visualizer
struct Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61_marshaled_pinvoke
{
	float ___StartTime_0;
	float ___EndTime_1;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___visualizerObject_2;
};
// Native definition for COM marshalling of OtherWorld/Visualizer
struct Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61_marshaled_com
{
	float ___StartTime_0;
	float ___EndTime_1;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___visualizerObject_2;
};

// UnityStandardAssets.CinematicEffects.SMAA/ExperimentalGroup
struct ExperimentalGroup_t7C7B327F01DC40E7E7B30E43B7A3E88A403FEB93  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings
struct PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D 
{
public:
	// System.Boolean UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings::enabled
	bool ___enabled_0;
	// System.Single UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings::threshold
	float ___threshold_1;
	// System.Single UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings::scale
	float ___scale_2;
	// System.Single UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings::strength
	float ___strength_3;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_threshold_1() { return static_cast<int32_t>(offsetof(PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D, ___threshold_1)); }
	inline float get_threshold_1() const { return ___threshold_1; }
	inline float* get_address_of_threshold_1() { return &___threshold_1; }
	inline void set_threshold_1(float value)
	{
		___threshold_1 = value;
	}

	inline static int32_t get_offset_of_scale_2() { return static_cast<int32_t>(offsetof(PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D, ___scale_2)); }
	inline float get_scale_2() const { return ___scale_2; }
	inline float* get_address_of_scale_2() { return &___scale_2; }
	inline void set_scale_2(float value)
	{
		___scale_2 = value;
	}

	inline static int32_t get_offset_of_strength_3() { return static_cast<int32_t>(offsetof(PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D, ___strength_3)); }
	inline float get_strength_3() const { return ___strength_3; }
	inline float* get_address_of_strength_3() { return &___strength_3; }
	inline void set_strength_3(float value)
	{
		___strength_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings
struct PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshaled_pinvoke
{
	int32_t ___enabled_0;
	float ___threshold_1;
	float ___scale_2;
	float ___strength_3;
};
// Native definition for COM marshalling of UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings
struct PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshaled_com
{
	int32_t ___enabled_0;
	float ___threshold_1;
	float ___scale_2;
	float ___strength_3;
};

// UnityStandardAssets.CinematicEffects.SMAA/QualitySettings
struct QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F 
{
public:
	// System.Boolean UnityStandardAssets.CinematicEffects.SMAA/QualitySettings::diagonalDetection
	bool ___diagonalDetection_0;
	// System.Boolean UnityStandardAssets.CinematicEffects.SMAA/QualitySettings::cornerDetection
	bool ___cornerDetection_1;
	// System.Single UnityStandardAssets.CinematicEffects.SMAA/QualitySettings::threshold
	float ___threshold_2;
	// System.Single UnityStandardAssets.CinematicEffects.SMAA/QualitySettings::depthThreshold
	float ___depthThreshold_3;
	// System.Int32 UnityStandardAssets.CinematicEffects.SMAA/QualitySettings::maxSearchSteps
	int32_t ___maxSearchSteps_4;
	// System.Int32 UnityStandardAssets.CinematicEffects.SMAA/QualitySettings::maxDiagonalSearchSteps
	int32_t ___maxDiagonalSearchSteps_5;
	// System.Int32 UnityStandardAssets.CinematicEffects.SMAA/QualitySettings::cornerRounding
	int32_t ___cornerRounding_6;
	// System.Single UnityStandardAssets.CinematicEffects.SMAA/QualitySettings::localContrastAdaptationFactor
	float ___localContrastAdaptationFactor_7;

public:
	inline static int32_t get_offset_of_diagonalDetection_0() { return static_cast<int32_t>(offsetof(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F, ___diagonalDetection_0)); }
	inline bool get_diagonalDetection_0() const { return ___diagonalDetection_0; }
	inline bool* get_address_of_diagonalDetection_0() { return &___diagonalDetection_0; }
	inline void set_diagonalDetection_0(bool value)
	{
		___diagonalDetection_0 = value;
	}

	inline static int32_t get_offset_of_cornerDetection_1() { return static_cast<int32_t>(offsetof(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F, ___cornerDetection_1)); }
	inline bool get_cornerDetection_1() const { return ___cornerDetection_1; }
	inline bool* get_address_of_cornerDetection_1() { return &___cornerDetection_1; }
	inline void set_cornerDetection_1(bool value)
	{
		___cornerDetection_1 = value;
	}

	inline static int32_t get_offset_of_threshold_2() { return static_cast<int32_t>(offsetof(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F, ___threshold_2)); }
	inline float get_threshold_2() const { return ___threshold_2; }
	inline float* get_address_of_threshold_2() { return &___threshold_2; }
	inline void set_threshold_2(float value)
	{
		___threshold_2 = value;
	}

	inline static int32_t get_offset_of_depthThreshold_3() { return static_cast<int32_t>(offsetof(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F, ___depthThreshold_3)); }
	inline float get_depthThreshold_3() const { return ___depthThreshold_3; }
	inline float* get_address_of_depthThreshold_3() { return &___depthThreshold_3; }
	inline void set_depthThreshold_3(float value)
	{
		___depthThreshold_3 = value;
	}

	inline static int32_t get_offset_of_maxSearchSteps_4() { return static_cast<int32_t>(offsetof(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F, ___maxSearchSteps_4)); }
	inline int32_t get_maxSearchSteps_4() const { return ___maxSearchSteps_4; }
	inline int32_t* get_address_of_maxSearchSteps_4() { return &___maxSearchSteps_4; }
	inline void set_maxSearchSteps_4(int32_t value)
	{
		___maxSearchSteps_4 = value;
	}

	inline static int32_t get_offset_of_maxDiagonalSearchSteps_5() { return static_cast<int32_t>(offsetof(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F, ___maxDiagonalSearchSteps_5)); }
	inline int32_t get_maxDiagonalSearchSteps_5() const { return ___maxDiagonalSearchSteps_5; }
	inline int32_t* get_address_of_maxDiagonalSearchSteps_5() { return &___maxDiagonalSearchSteps_5; }
	inline void set_maxDiagonalSearchSteps_5(int32_t value)
	{
		___maxDiagonalSearchSteps_5 = value;
	}

	inline static int32_t get_offset_of_cornerRounding_6() { return static_cast<int32_t>(offsetof(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F, ___cornerRounding_6)); }
	inline int32_t get_cornerRounding_6() const { return ___cornerRounding_6; }
	inline int32_t* get_address_of_cornerRounding_6() { return &___cornerRounding_6; }
	inline void set_cornerRounding_6(int32_t value)
	{
		___cornerRounding_6 = value;
	}

	inline static int32_t get_offset_of_localContrastAdaptationFactor_7() { return static_cast<int32_t>(offsetof(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F, ___localContrastAdaptationFactor_7)); }
	inline float get_localContrastAdaptationFactor_7() const { return ___localContrastAdaptationFactor_7; }
	inline float* get_address_of_localContrastAdaptationFactor_7() { return &___localContrastAdaptationFactor_7; }
	inline void set_localContrastAdaptationFactor_7(float value)
	{
		___localContrastAdaptationFactor_7 = value;
	}
};

struct QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_StaticFields
{
public:
	// UnityStandardAssets.CinematicEffects.SMAA/QualitySettings[] UnityStandardAssets.CinematicEffects.SMAA/QualitySettings::presetQualitySettings
	QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296* ___presetQualitySettings_8;

public:
	inline static int32_t get_offset_of_presetQualitySettings_8() { return static_cast<int32_t>(offsetof(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_StaticFields, ___presetQualitySettings_8)); }
	inline QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296* get_presetQualitySettings_8() const { return ___presetQualitySettings_8; }
	inline QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296** get_address_of_presetQualitySettings_8() { return &___presetQualitySettings_8; }
	inline void set_presetQualitySettings_8(QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296* value)
	{
		___presetQualitySettings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___presetQualitySettings_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityStandardAssets.CinematicEffects.SMAA/QualitySettings
struct QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshaled_pinvoke
{
	int32_t ___diagonalDetection_0;
	int32_t ___cornerDetection_1;
	float ___threshold_2;
	float ___depthThreshold_3;
	int32_t ___maxSearchSteps_4;
	int32_t ___maxDiagonalSearchSteps_5;
	int32_t ___cornerRounding_6;
	float ___localContrastAdaptationFactor_7;
};
// Native definition for COM marshalling of UnityStandardAssets.CinematicEffects.SMAA/QualitySettings
struct QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshaled_com
{
	int32_t ___diagonalDetection_0;
	int32_t ___cornerDetection_1;
	float ___threshold_2;
	float ___depthThreshold_3;
	int32_t ___maxSearchSteps_4;
	int32_t ___maxDiagonalSearchSteps_5;
	int32_t ___cornerRounding_6;
	float ___localContrastAdaptationFactor_7;
};

// UnityStandardAssets.CinematicEffects.SMAA/SettingsGroup
struct SettingsGroup_t4D6A850FDDA2DE9F66716B684EC48F9A7BC94B7B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings
struct TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0 
{
public:
	// System.Boolean UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings::enabled
	bool ___enabled_0;
	// System.Single UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings::fuzzSize
	float ___fuzzSize_1;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_fuzzSize_1() { return static_cast<int32_t>(offsetof(TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0, ___fuzzSize_1)); }
	inline float get_fuzzSize_1() const { return ___fuzzSize_1; }
	inline float* get_address_of_fuzzSize_1() { return &___fuzzSize_1; }
	inline void set_fuzzSize_1(float value)
	{
		___fuzzSize_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings
struct TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshaled_pinvoke
{
	int32_t ___enabled_0;
	float ___fuzzSize_1;
};
// Native definition for COM marshalling of UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings
struct TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshaled_com
{
	int32_t ___enabled_0;
	float ___fuzzSize_1;
};

// UnityStandardAssets.CinematicEffects.SMAA/TopLevelSettings
struct TopLevelSettings_tB734750836CD2B08679356BD51D96457BB5658B9  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/IntensitySettings
struct IntensitySettings_t8B6AAA0BEBDE793FDB08D59A6C6784CF85AD8C38 
{
public:
	// System.Single UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/IntensitySettings::reflectionMultiplier
	float ___reflectionMultiplier_0;
	// System.Single UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/IntensitySettings::fadeDistance
	float ___fadeDistance_1;
	// System.Single UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/IntensitySettings::fresnelFade
	float ___fresnelFade_2;
	// System.Single UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/IntensitySettings::fresnelFadePower
	float ___fresnelFadePower_3;

public:
	inline static int32_t get_offset_of_reflectionMultiplier_0() { return static_cast<int32_t>(offsetof(IntensitySettings_t8B6AAA0BEBDE793FDB08D59A6C6784CF85AD8C38, ___reflectionMultiplier_0)); }
	inline float get_reflectionMultiplier_0() const { return ___reflectionMultiplier_0; }
	inline float* get_address_of_reflectionMultiplier_0() { return &___reflectionMultiplier_0; }
	inline void set_reflectionMultiplier_0(float value)
	{
		___reflectionMultiplier_0 = value;
	}

	inline static int32_t get_offset_of_fadeDistance_1() { return static_cast<int32_t>(offsetof(IntensitySettings_t8B6AAA0BEBDE793FDB08D59A6C6784CF85AD8C38, ___fadeDistance_1)); }
	inline float get_fadeDistance_1() const { return ___fadeDistance_1; }
	inline float* get_address_of_fadeDistance_1() { return &___fadeDistance_1; }
	inline void set_fadeDistance_1(float value)
	{
		___fadeDistance_1 = value;
	}

	inline static int32_t get_offset_of_fresnelFade_2() { return static_cast<int32_t>(offsetof(IntensitySettings_t8B6AAA0BEBDE793FDB08D59A6C6784CF85AD8C38, ___fresnelFade_2)); }
	inline float get_fresnelFade_2() const { return ___fresnelFade_2; }
	inline float* get_address_of_fresnelFade_2() { return &___fresnelFade_2; }
	inline void set_fresnelFade_2(float value)
	{
		___fresnelFade_2 = value;
	}

	inline static int32_t get_offset_of_fresnelFadePower_3() { return static_cast<int32_t>(offsetof(IntensitySettings_t8B6AAA0BEBDE793FDB08D59A6C6784CF85AD8C38, ___fresnelFadePower_3)); }
	inline float get_fresnelFadePower_3() const { return ___fresnelFadePower_3; }
	inline float* get_address_of_fresnelFadePower_3() { return &___fresnelFadePower_3; }
	inline void set_fresnelFadePower_3(float value)
	{
		___fresnelFadePower_3 = value;
	}
};


// UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/ScreenEdgeMask
struct ScreenEdgeMask_tAEAF832C1E0D10F6853A9E09463D468BE70A0A6D 
{
public:
	// System.Single UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/ScreenEdgeMask::intensity
	float ___intensity_0;

public:
	inline static int32_t get_offset_of_intensity_0() { return static_cast<int32_t>(offsetof(ScreenEdgeMask_tAEAF832C1E0D10F6853A9E09463D468BE70A0A6D, ___intensity_0)); }
	inline float get_intensity_0() const { return ___intensity_0; }
	inline float* get_address_of_intensity_0() { return &___intensity_0; }
	inline void set_intensity_0(float value)
	{
		___intensity_0 = value;
	}
};


// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/BasicsSettings
struct BasicsSettings_tCD0CFD2C3C62C6A9E002B8E4CD4CAAB56BBDF04F 
{
public:
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/BasicsSettings::temperatureShift
	float ___temperatureShift_0;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/BasicsSettings::tint
	float ___tint_1;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/BasicsSettings::hue
	float ___hue_2;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/BasicsSettings::saturation
	float ___saturation_3;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/BasicsSettings::vibrance
	float ___vibrance_4;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/BasicsSettings::value
	float ___value_5;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/BasicsSettings::contrast
	float ___contrast_6;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/BasicsSettings::gain
	float ___gain_7;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/BasicsSettings::gamma
	float ___gamma_8;

public:
	inline static int32_t get_offset_of_temperatureShift_0() { return static_cast<int32_t>(offsetof(BasicsSettings_tCD0CFD2C3C62C6A9E002B8E4CD4CAAB56BBDF04F, ___temperatureShift_0)); }
	inline float get_temperatureShift_0() const { return ___temperatureShift_0; }
	inline float* get_address_of_temperatureShift_0() { return &___temperatureShift_0; }
	inline void set_temperatureShift_0(float value)
	{
		___temperatureShift_0 = value;
	}

	inline static int32_t get_offset_of_tint_1() { return static_cast<int32_t>(offsetof(BasicsSettings_tCD0CFD2C3C62C6A9E002B8E4CD4CAAB56BBDF04F, ___tint_1)); }
	inline float get_tint_1() const { return ___tint_1; }
	inline float* get_address_of_tint_1() { return &___tint_1; }
	inline void set_tint_1(float value)
	{
		___tint_1 = value;
	}

	inline static int32_t get_offset_of_hue_2() { return static_cast<int32_t>(offsetof(BasicsSettings_tCD0CFD2C3C62C6A9E002B8E4CD4CAAB56BBDF04F, ___hue_2)); }
	inline float get_hue_2() const { return ___hue_2; }
	inline float* get_address_of_hue_2() { return &___hue_2; }
	inline void set_hue_2(float value)
	{
		___hue_2 = value;
	}

	inline static int32_t get_offset_of_saturation_3() { return static_cast<int32_t>(offsetof(BasicsSettings_tCD0CFD2C3C62C6A9E002B8E4CD4CAAB56BBDF04F, ___saturation_3)); }
	inline float get_saturation_3() const { return ___saturation_3; }
	inline float* get_address_of_saturation_3() { return &___saturation_3; }
	inline void set_saturation_3(float value)
	{
		___saturation_3 = value;
	}

	inline static int32_t get_offset_of_vibrance_4() { return static_cast<int32_t>(offsetof(BasicsSettings_tCD0CFD2C3C62C6A9E002B8E4CD4CAAB56BBDF04F, ___vibrance_4)); }
	inline float get_vibrance_4() const { return ___vibrance_4; }
	inline float* get_address_of_vibrance_4() { return &___vibrance_4; }
	inline void set_vibrance_4(float value)
	{
		___vibrance_4 = value;
	}

	inline static int32_t get_offset_of_value_5() { return static_cast<int32_t>(offsetof(BasicsSettings_tCD0CFD2C3C62C6A9E002B8E4CD4CAAB56BBDF04F, ___value_5)); }
	inline float get_value_5() const { return ___value_5; }
	inline float* get_address_of_value_5() { return &___value_5; }
	inline void set_value_5(float value)
	{
		___value_5 = value;
	}

	inline static int32_t get_offset_of_contrast_6() { return static_cast<int32_t>(offsetof(BasicsSettings_tCD0CFD2C3C62C6A9E002B8E4CD4CAAB56BBDF04F, ___contrast_6)); }
	inline float get_contrast_6() const { return ___contrast_6; }
	inline float* get_address_of_contrast_6() { return &___contrast_6; }
	inline void set_contrast_6(float value)
	{
		___contrast_6 = value;
	}

	inline static int32_t get_offset_of_gain_7() { return static_cast<int32_t>(offsetof(BasicsSettings_tCD0CFD2C3C62C6A9E002B8E4CD4CAAB56BBDF04F, ___gain_7)); }
	inline float get_gain_7() const { return ___gain_7; }
	inline float* get_address_of_gain_7() { return &___gain_7; }
	inline void set_gain_7(float value)
	{
		___gain_7 = value;
	}

	inline static int32_t get_offset_of_gamma_8() { return static_cast<int32_t>(offsetof(BasicsSettings_tCD0CFD2C3C62C6A9E002B8E4CD4CAAB56BBDF04F, ___gamma_8)); }
	inline float get_gamma_8() const { return ___gamma_8; }
	inline float* get_address_of_gamma_8() { return &___gamma_8; }
	inline void set_gamma_8(float value)
	{
		___gamma_8 = value;
	}
};


// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ChannelMixerSettings
struct ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744 
{
public:
	// System.Int32 UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ChannelMixerSettings::currentChannel
	int32_t ___currentChannel_0;
	// UnityEngine.Vector3[] UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ChannelMixerSettings::channels
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___channels_1;

public:
	inline static int32_t get_offset_of_currentChannel_0() { return static_cast<int32_t>(offsetof(ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744, ___currentChannel_0)); }
	inline int32_t get_currentChannel_0() const { return ___currentChannel_0; }
	inline int32_t* get_address_of_currentChannel_0() { return &___currentChannel_0; }
	inline void set_currentChannel_0(int32_t value)
	{
		___currentChannel_0 = value;
	}

	inline static int32_t get_offset_of_channels_1() { return static_cast<int32_t>(offsetof(ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744, ___channels_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_channels_1() const { return ___channels_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_channels_1() { return &___channels_1; }
	inline void set_channels_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___channels_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channels_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ChannelMixerSettings
struct ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshaled_pinvoke
{
	int32_t ___currentChannel_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___channels_1;
};
// Native definition for COM marshalling of UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ChannelMixerSettings
struct ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshaled_com
{
	int32_t ___currentChannel_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___channels_1;
};

// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/CurvesSettings
struct CurvesSettings_t451DB71CD864FD8AECCB77D60CA7AF61781C287D 
{
public:
	// UnityEngine.AnimationCurve UnityStandardAssets.CinematicEffects.TonemappingColorGrading/CurvesSettings::master
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___master_0;
	// UnityEngine.AnimationCurve UnityStandardAssets.CinematicEffects.TonemappingColorGrading/CurvesSettings::red
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___red_1;
	// UnityEngine.AnimationCurve UnityStandardAssets.CinematicEffects.TonemappingColorGrading/CurvesSettings::green
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___green_2;
	// UnityEngine.AnimationCurve UnityStandardAssets.CinematicEffects.TonemappingColorGrading/CurvesSettings::blue
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___blue_3;

public:
	inline static int32_t get_offset_of_master_0() { return static_cast<int32_t>(offsetof(CurvesSettings_t451DB71CD864FD8AECCB77D60CA7AF61781C287D, ___master_0)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_master_0() const { return ___master_0; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_master_0() { return &___master_0; }
	inline void set_master_0(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___master_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___master_0), (void*)value);
	}

	inline static int32_t get_offset_of_red_1() { return static_cast<int32_t>(offsetof(CurvesSettings_t451DB71CD864FD8AECCB77D60CA7AF61781C287D, ___red_1)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_red_1() const { return ___red_1; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_red_1() { return &___red_1; }
	inline void set_red_1(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___red_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___red_1), (void*)value);
	}

	inline static int32_t get_offset_of_green_2() { return static_cast<int32_t>(offsetof(CurvesSettings_t451DB71CD864FD8AECCB77D60CA7AF61781C287D, ___green_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_green_2() const { return ___green_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_green_2() { return &___green_2; }
	inline void set_green_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___green_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___green_2), (void*)value);
	}

	inline static int32_t get_offset_of_blue_3() { return static_cast<int32_t>(offsetof(CurvesSettings_t451DB71CD864FD8AECCB77D60CA7AF61781C287D, ___blue_3)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_blue_3() const { return ___blue_3; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_blue_3() { return &___blue_3; }
	inline void set_blue_3(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___blue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blue_3), (void*)value);
	}
};


// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/EyeAdaptationSettings
struct EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD 
{
public:
	// System.Boolean UnityStandardAssets.CinematicEffects.TonemappingColorGrading/EyeAdaptationSettings::enabled
	bool ___enabled_0;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/EyeAdaptationSettings::middleGrey
	float ___middleGrey_1;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/EyeAdaptationSettings::min
	float ___min_2;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/EyeAdaptationSettings::max
	float ___max_3;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/EyeAdaptationSettings::speed
	float ___speed_4;
	// System.Boolean UnityStandardAssets.CinematicEffects.TonemappingColorGrading/EyeAdaptationSettings::showDebug
	bool ___showDebug_5;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_middleGrey_1() { return static_cast<int32_t>(offsetof(EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD, ___middleGrey_1)); }
	inline float get_middleGrey_1() const { return ___middleGrey_1; }
	inline float* get_address_of_middleGrey_1() { return &___middleGrey_1; }
	inline void set_middleGrey_1(float value)
	{
		___middleGrey_1 = value;
	}

	inline static int32_t get_offset_of_min_2() { return static_cast<int32_t>(offsetof(EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD, ___min_2)); }
	inline float get_min_2() const { return ___min_2; }
	inline float* get_address_of_min_2() { return &___min_2; }
	inline void set_min_2(float value)
	{
		___min_2 = value;
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD, ___max_3)); }
	inline float get_max_3() const { return ___max_3; }
	inline float* get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(float value)
	{
		___max_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_showDebug_5() { return static_cast<int32_t>(offsetof(EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD, ___showDebug_5)); }
	inline bool get_showDebug_5() const { return ___showDebug_5; }
	inline bool* get_address_of_showDebug_5() { return &___showDebug_5; }
	inline void set_showDebug_5(bool value)
	{
		___showDebug_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityStandardAssets.CinematicEffects.TonemappingColorGrading/EyeAdaptationSettings
struct EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD_marshaled_pinvoke
{
	int32_t ___enabled_0;
	float ___middleGrey_1;
	float ___min_2;
	float ___max_3;
	float ___speed_4;
	int32_t ___showDebug_5;
};
// Native definition for COM marshalling of UnityStandardAssets.CinematicEffects.TonemappingColorGrading/EyeAdaptationSettings
struct EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD_marshaled_com
{
	int32_t ___enabled_0;
	float ___middleGrey_1;
	float ___min_2;
	float ___max_3;
	float ___speed_4;
	int32_t ___showDebug_5;
};

// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/LUTSettings
struct LUTSettings_tF860810D4933F78C183A535EC67C9E104DD9E8CA 
{
public:
	// System.Boolean UnityStandardAssets.CinematicEffects.TonemappingColorGrading/LUTSettings::enabled
	bool ___enabled_0;
	// UnityEngine.Texture UnityStandardAssets.CinematicEffects.TonemappingColorGrading/LUTSettings::texture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture_1;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/LUTSettings::contribution
	float ___contribution_2;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(LUTSettings_tF860810D4933F78C183A535EC67C9E104DD9E8CA, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_texture_1() { return static_cast<int32_t>(offsetof(LUTSettings_tF860810D4933F78C183A535EC67C9E104DD9E8CA, ___texture_1)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_texture_1() const { return ___texture_1; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_texture_1() { return &___texture_1; }
	inline void set_texture_1(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___texture_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___texture_1), (void*)value);
	}

	inline static int32_t get_offset_of_contribution_2() { return static_cast<int32_t>(offsetof(LUTSettings_tF860810D4933F78C183A535EC67C9E104DD9E8CA, ___contribution_2)); }
	inline float get_contribution_2() const { return ___contribution_2; }
	inline float* get_address_of_contribution_2() { return &___contribution_2; }
	inline void set_contribution_2(float value)
	{
		___contribution_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityStandardAssets.CinematicEffects.TonemappingColorGrading/LUTSettings
struct LUTSettings_tF860810D4933F78C183A535EC67C9E104DD9E8CA_marshaled_pinvoke
{
	int32_t ___enabled_0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture_1;
	float ___contribution_2;
};
// Native definition for COM marshalling of UnityStandardAssets.CinematicEffects.TonemappingColorGrading/LUTSettings
struct LUTSettings_tF860810D4933F78C183A535EC67C9E104DD9E8CA_marshaled_com
{
	int32_t ___enabled_0;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture_1;
	float ___contribution_2;
};

// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/SettingsGroup
struct SettingsGroup_tE37D2D1B1E9DF1E978D0F800765D91143CA9B4C1  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
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

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// DevionGames.UIWidgets.EasingEquations/EaseType
struct EaseType_t7A76F35E17E8ED9034AB2B0635952C7030F320B3 
{
public:
	// System.Int32 DevionGames.UIWidgets.EasingEquations/EaseType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EaseType_t7A76F35E17E8ED9034AB2B0635952C7030F320B3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Phyllotaxis/_audioColorSetting
struct _audioColorSetting_t7AAB2909750EBFF4D87D99913C98D36034DAC370 
{
public:
	// System.Int32 Phyllotaxis/_audioColorSetting::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(_audioColorSetting_t7AAB2909750EBFF4D87D99913C98D36034DAC370, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Phyllotaxis/_audioLerpPosSetting
struct _audioLerpPosSetting_t49A3EDEE36E73F71A9C50920A4324F7B40350A3F 
{
public:
	// System.Int32 Phyllotaxis/_audioLerpPosSetting::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(_audioLerpPosSetting_t49A3EDEE36E73F71A9C50920A4324F7B40350A3F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Phyllotaxis/_audioScaleSetting
struct _audioScaleSetting_t4D16EF64A07687C5DCAA62F3657024BE756B70C6 
{
public:
	// System.Int32 Phyllotaxis/_audioScaleSetting::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(_audioScaleSetting_t4D16EF64A07687C5DCAA62F3657024BE756B70C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DevionGames.PropertyBinding/Execution
struct Execution_t4BE3418282A335E01B303E12CC2C8ED063DDC572 
{
public:
	// System.Int32 DevionGames.PropertyBinding/Execution::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Execution_t4BE3418282A335E01B303E12CC2C8ED063DDC572, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// RippleEffect/Droplet
struct Droplet_tB38F5D6E236CE375FE37BB6D2DE5CB9802EDDDDB  : public RuntimeObject
{
public:
	// UnityEngine.Vector2 RippleEffect/Droplet::position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position_0;
	// System.Single RippleEffect/Droplet::time
	float ___time_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Droplet_tB38F5D6E236CE375FE37BB6D2DE5CB9802EDDDDB, ___position_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_position_0() const { return ___position_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(Droplet_tB38F5D6E236CE375FE37BB6D2DE5CB9802EDDDDB, ___time_1)); }
	inline float get_time_1() const { return ___time_1; }
	inline float* get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(float value)
	{
		___time_1 = value;
	}
};


// Rotater/RotaterAxis
struct RotaterAxis_t1466C367EA876DF96189CD8AE49A171FCAA24DC5 
{
public:
	// System.Int32 Rotater/RotaterAxis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RotaterAxis_t1466C367EA876DF96189CD8AE49A171FCAA24DC5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CinematicEffects.SMAA/DebugPass
struct DebugPass_t835D611250EF49DC013CF21C8411961737646035 
{
public:
	// System.Int32 UnityStandardAssets.CinematicEffects.SMAA/DebugPass::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugPass_t835D611250EF49DC013CF21C8411961737646035, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CinematicEffects.SMAA/EdgeDetectionMethod
struct EdgeDetectionMethod_t6F48B69229C4DA152B55205E85F49A47D2187F16 
{
public:
	// System.Int32 UnityStandardAssets.CinematicEffects.SMAA/EdgeDetectionMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EdgeDetectionMethod_t6F48B69229C4DA152B55205E85F49A47D2187F16, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CinematicEffects.SMAA/QualityPreset
struct QualityPreset_t008737739C456CED4CBE733461599D75A1465571 
{
public:
	// System.Int32 UnityStandardAssets.CinematicEffects.SMAA/QualityPreset::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QualityPreset_t008737739C456CED4CBE733461599D75A1465571, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.ScreenOverlay/OverlayBlendMode
struct OverlayBlendMode_t9A18E4CA6DAA32E24DF693277ACE351A42DF0D94 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenOverlay/OverlayBlendMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OverlayBlendMode_t9A18E4CA6DAA32E24DF693277ACE351A42DF0D94, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion/SSAOSamples
struct SSAOSamples_t2E8CFF1FBE4AB19D2014BEF81327380F895B1594 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion/SSAOSamples::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SSAOSamples_t2E8CFF1FBE4AB19D2014BEF81327380F895B1594, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/PassIndex
struct PassIndex_tDD70140E521C29652B76CE1FF1C2614E0DCCF512 
{
public:
	// System.Int32 UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/PassIndex::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PassIndex_tDD70140E521C29652B76CE1FF1C2614E0DCCF512, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRReflectionBlendType
struct SSRReflectionBlendType_t8DAF0A4BF8B7B8C39DA9702691102089117EE370 
{
public:
	// System.Int32 UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRReflectionBlendType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SSRReflectionBlendType_t8DAF0A4BF8B7B8C39DA9702691102089117EE370, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRResolution
struct SSRResolution_tE3BF7808C3454CE5836838BEA2AC364E8B53A6AA 
{
public:
	// System.Int32 UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRResolution::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SSRResolution_tE3BF7808C3454CE5836838BEA2AC364E8B53A6AA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DevionGames.SelectionHandler/DeselectionInputType
struct DeselectionInputType_tC3913E1B89E3DCDE4CA84EA40C21B15982D4F6AD 
{
public:
	// System.Int32 DevionGames.SelectionHandler/DeselectionInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeselectionInputType_tC3913E1B89E3DCDE4CA84EA40C21B15982D4F6AD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DevionGames.SelectionHandler/SelectionInputType
struct SelectionInputType_t7118FC0F87064CCAA5E10EBCEE0E8EBAC64B234B 
{
public:
	// System.Int32 DevionGames.SelectionHandler/SelectionInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SelectionInputType_t7118FC0F87064CCAA5E10EBCEE0E8EBAC64B234B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DevionGames.Settings/TextureQuality
struct TextureQuality_tDEF278C7561A2F68BB5781AC93D9193EDED795EB 
{
public:
	// System.Int32 DevionGames.Settings/TextureQuality::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureQuality_tDEF278C7561A2F68BB5781AC93D9193EDED795EB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/Direction
struct Direction_t3BA2AFC53CB1C0639C1A64452A6CB585DB3E241F 
{
public:
	// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_t3BA2AFC53CB1C0639C1A64452A6CB585DB3E241F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/MovementAxis
struct MovementAxis_t9DD873FFFF40E924F18E2EAEB1964D9D752FA8EF 
{
public:
	// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/MovementAxis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MovementAxis_t9DD873FFFF40E924F18E2EAEB1964D9D752FA8EF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/MovementType
struct MovementType_tB30CCC721CC38348BECD8B9F6D24EC048000EA62 
{
public:
	// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/MovementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MovementType_tB30CCC721CC38348BECD8B9F6D24EC048000EA62, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/SizeControl
struct SizeControl_t6749C179E2EC62BDEFBD2A585910223C16FD75E1 
{
public:
	// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/SizeControl::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SizeControl_t6749C179E2EC62BDEFBD2A585910223C16FD75E1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/SnapTarget
struct SnapTarget_t6C1DA43D1948F68C024887D788F81DC6178D1C2A 
{
public:
	// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/SnapTarget::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SnapTarget_t6C1DA43D1948F68C024887D788F81DC6178D1C2A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SnowFairyCauldron/SnowFairyCauldronState
struct SnowFairyCauldronState_tDA52CA32FA6BF6A742A1817988E274A893FA82D6 
{
public:
	// System.Int32 SnowFairyCauldron/SnowFairyCauldronState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SnowFairyCauldronState_tDA52CA32FA6BF6A742A1817988E274A893FA82D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SnowFairyCauldron/SnowFairyChoice
struct SnowFairyChoice_t3BBD894260E037949EEE7C5289B2951514819384 
{
public:
	// System.Int32 SnowFairyCauldron/SnowFairyChoice::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SnowFairyChoice_t3BBD894260E037949EEE7C5289B2951514819384, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SnowFairyCauldron_v2/SnowFairyCauldronState
struct SnowFairyCauldronState_t114BFE442612A18F484833ECDB84E66741C974F8 
{
public:
	// System.Int32 SnowFairyCauldron_v2/SnowFairyCauldronState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SnowFairyCauldronState_t114BFE442612A18F484833ECDB84E66741C974F8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SnowFairyCauldron_v2/SnowFairyChoice
struct SnowFairyChoice_tC0E8FD6EC1BF64DF5ACED51EF0F745FD0A5BB644 
{
public:
	// System.Int32 SnowFairyCauldron_v2/SnowFairyChoice::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SnowFairyChoice_tC0E8FD6EC1BF64DF5ACED51EF0F745FD0A5BB644, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SnowFairyMirrorController/LiquidType
struct LiquidType_tD155D5CBF59AD0B4D752E6F959152558DF297918 
{
public:
	// System.Int32 SnowFairyMirrorController/LiquidType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LiquidType_tD155D5CBF59AD0B4D752E6F959152558DF297918, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SnowFairyMirrorController/SnowFairyChoice
struct SnowFairyChoice_tC794A15BC87C41C4326FF8BFDC86138D0ABAA121 
{
public:
	// System.Int32 SnowFairyMirrorController/SnowFairyChoice::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SnowFairyChoice_tC794A15BC87C41C4326FF8BFDC86138D0ABAA121, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SnowFairyMirrorController/SnowFairyMirrorState
struct SnowFairyMirrorState_tC8ED6C28344D63D29321F1776675590C8A3EB880 
{
public:
	// System.Int32 SnowFairyMirrorController/SnowFairyMirrorState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SnowFairyMirrorState_tC8ED6C28344D63D29321F1776675590C8A3EB880, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Source/Mode
struct Mode_t353611E2E9BC13F8540F8B0D66A37330BBBC23C0 
{
public:
	// System.Int32 Source/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t353611E2E9BC13F8540F8B0D66A37330BBBC23C0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DevionGames.UIWidgets.Spinner/SpinnerEvent
struct SpinnerEvent_tA26213AF983D08EC23570344A216BDD9450D540E  : public UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC
{
public:

public:
};


// DevionGames.UIWidgets.Spinner/SpinnerTextEvent
struct SpinnerTextEvent_tBD023BBE00BF8572757F8246043BC278C9EB6EF8  : public UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0
{
public:

public:
};


// UnityStandardAssets.ImageEffects.SunShafts/ShaftsScreenBlendMode
struct ShaftsScreenBlendMode_tCF5C48273C6AC4213465B69B3F040CAEFC98B668 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.SunShafts/ShaftsScreenBlendMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShaftsScreenBlendMode_tCF5C48273C6AC4213465B69B3F040CAEFC98B668, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.SunShafts/SunShaftsResolution
struct SunShaftsResolution_t6C3971C37DC56772080D6690AD5AEE2DE775C549 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.SunShafts/SunShaftsResolution::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SunShaftsResolution_t6C3971C37DC56772080D6690AD5AEE2DE775C549, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DevionGames.UIWidgets.Tab/TabEvent
struct TabEvent_t76A44A6361E5D7485A54DAF31AB97CFC3B67D5A2  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftMode
struct TiltShiftMode_tE6D7CE7C68F5A6FAE068BED43149622FEBA9A5FC 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.TiltShift/TiltShiftMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TiltShiftMode_tE6D7CE7C68F5A6FAE068BED43149622FEBA9A5FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.TiltShift/TiltShiftQuality
struct TiltShiftQuality_t627CB86BE53F680A3AB16478DF16591525F7D45C 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.TiltShift/TiltShiftQuality::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TiltShiftQuality_t627CB86BE53F680A3AB16478DF16591525F7D45C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Toggle/ToggleTransition
struct ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167 
{
public:
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize
struct AdaptiveTexSize_tDD777ABBFE1FB57736D5D9A2067ABCEE78963FC8 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AdaptiveTexSize_tDD777ABBFE1FB57736D5D9A2067ABCEE78963FC8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType
struct TonemapperType_t041C13F6F82D14111893DD38E1FD4109815AA496 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TonemapperType_t041C13F6F82D14111893DD38E1FD4109815AA496, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ChannelMixer
struct ChannelMixer_t400A30E42EF3713FEBAC135F5692468FE39A7A12  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:

public:
};


// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorGradingPrecision
struct ColorGradingPrecision_tA268F67D5ED33D20F88FDCCD64EDC89AD29A9676 
{
public:
	// System.Int32 UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorGradingPrecision::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorGradingPrecision_tA268F67D5ED33D20F88FDCCD64EDC89AD29A9676, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorWheelGroup
struct ColorWheelGroup_t73EA317646791651AE5D09C5FDCEC01721257738  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// System.Int32 UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorWheelGroup::minSizePerWheel
	int32_t ___minSizePerWheel_0;
	// System.Int32 UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorWheelGroup::maxSizePerWheel
	int32_t ___maxSizePerWheel_1;

public:
	inline static int32_t get_offset_of_minSizePerWheel_0() { return static_cast<int32_t>(offsetof(ColorWheelGroup_t73EA317646791651AE5D09C5FDCEC01721257738, ___minSizePerWheel_0)); }
	inline int32_t get_minSizePerWheel_0() const { return ___minSizePerWheel_0; }
	inline int32_t* get_address_of_minSizePerWheel_0() { return &___minSizePerWheel_0; }
	inline void set_minSizePerWheel_0(int32_t value)
	{
		___minSizePerWheel_0 = value;
	}

	inline static int32_t get_offset_of_maxSizePerWheel_1() { return static_cast<int32_t>(offsetof(ColorWheelGroup_t73EA317646791651AE5D09C5FDCEC01721257738, ___maxSizePerWheel_1)); }
	inline int32_t get_maxSizePerWheel_1() const { return ___maxSizePerWheel_1; }
	inline int32_t* get_address_of_maxSizePerWheel_1() { return &___maxSizePerWheel_1; }
	inline void set_maxSizePerWheel_1(int32_t value)
	{
		___maxSizePerWheel_1 = value;
	}
};


// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorWheelsSettings
struct ColorWheelsSettings_tA1F7B01E603F94472F1DECDE81F9F0C09DAA7DC9 
{
public:
	// UnityEngine.Color UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorWheelsSettings::shadows
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___shadows_0;
	// UnityEngine.Color UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorWheelsSettings::midtones
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___midtones_1;
	// UnityEngine.Color UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorWheelsSettings::highlights
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___highlights_2;

public:
	inline static int32_t get_offset_of_shadows_0() { return static_cast<int32_t>(offsetof(ColorWheelsSettings_tA1F7B01E603F94472F1DECDE81F9F0C09DAA7DC9, ___shadows_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_shadows_0() const { return ___shadows_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_shadows_0() { return &___shadows_0; }
	inline void set_shadows_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___shadows_0 = value;
	}

	inline static int32_t get_offset_of_midtones_1() { return static_cast<int32_t>(offsetof(ColorWheelsSettings_tA1F7B01E603F94472F1DECDE81F9F0C09DAA7DC9, ___midtones_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_midtones_1() const { return ___midtones_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_midtones_1() { return &___midtones_1; }
	inline void set_midtones_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___midtones_1 = value;
	}

	inline static int32_t get_offset_of_highlights_2() { return static_cast<int32_t>(offsetof(ColorWheelsSettings_tA1F7B01E603F94472F1DECDE81F9F0C09DAA7DC9, ___highlights_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_highlights_2() const { return ___highlights_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_highlights_2() { return &___highlights_2; }
	inline void set_highlights_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___highlights_2 = value;
	}
};


// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/Curve
struct Curve_t71297F13C46D62254E298F5879F6EEB871CC24AD  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:
	// UnityEngine.Color UnityStandardAssets.CinematicEffects.TonemappingColorGrading/Curve::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_0;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(Curve_t71297F13C46D62254E298F5879F6EEB871CC24AD, ___color_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_0() const { return ___color_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_0 = value;
	}
};


// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/IndentedGroup
struct IndentedGroup_t1A22E882DC9E620A401D8EA437C6653101218B4E  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:

public:
};


// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/Pass
struct Pass_tB88409CC087C267EC7B997138290766EB9EA4B7C 
{
public:
	// System.Int32 UnityStandardAssets.CinematicEffects.TonemappingColorGrading/Pass::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Pass_tB88409CC087C267EC7B997138290766EB9EA4B7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/Tonemapper
struct Tonemapper_t39B41A9D9273B8FB02E7A31327DCA498030B151F 
{
public:
	// System.Int32 UnityStandardAssets.CinematicEffects.TonemappingColorGrading/Tonemapper::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Tonemapper_t39B41A9D9273B8FB02E7A31327DCA498030B151F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DevionGames.UIWidgets.UIWidget/WidgetEvent
struct WidgetEvent_tB4620AD81E6501F79A226F2B03C5B6660F007F2E  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// DevionGames.UIWidgets.Vector3Tween/Vector3TweenCallback
struct Vector3TweenCallback_tD6CA155C8C3A31A8D18A0841A689B8550FF69A7F  : public UnityEvent_1_t0D27852CE4491ECD77DB83CDC47BEFDE77503829
{
public:

public:
};


// DevionGames.UIWidgets.Vector3Tween/Vector3TweenFinishCallback
struct Vector3TweenFinishCallback_tF20A493CCE0A022D6B06C726E7A807F37E486B4B  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration/AberrationMode
struct AberrationMode_t67FC2015EB23AAD6BD6DA9FB88A670B418939BE9 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration/AberrationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AberrationMode_t67FC2015EB23AAD6BD6DA9FB88A670B418939BE9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.Water.Water/WaterMode
struct WaterMode_t66AAD26D11AA59BC6140AC587DCAC149ED3B4832 
{
public:
	// System.Int32 UnityStandardAssets.Water.Water/WaterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WaterMode_t66AAD26D11AA59BC6140AC587DCAC149ED3B4832, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Water2D.Water2D_Spawner/<loop>d__52
struct U3CloopU3Ed__52_tC16AB621C0032FFEA99927B669C25D97F81483AD  : public RuntimeObject
{
public:
	// System.Int32 Water2D.Water2D_Spawner/<loop>d__52::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Water2D.Water2D_Spawner/<loop>d__52::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Water2D.Water2D_Spawner/<loop>d__52::delay
	float ___delay_2;
	// Water2D.Water2D_Spawner Water2D.Water2D_Spawner/<loop>d__52::<>4__this
	Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * ___U3CU3E4__this_3;
	// UnityEngine.Vector2 Water2D.Water2D_Spawner/<loop>d__52::_initSpeed
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____initSpeed_4;
	// System.Int32 Water2D.Water2D_Spawner/<loop>d__52::count
	int32_t ___count_5;
	// System.Boolean Water2D.Water2D_Spawner/<loop>d__52::waitBetweenDropSpawn
	bool ___waitBetweenDropSpawn_6;
	// System.Int32 Water2D.Water2D_Spawner/<loop>d__52::<auxCount>5__2
	int32_t ___U3CauxCountU3E5__2_7;
	// System.Int32 Water2D.Water2D_Spawner/<loop>d__52::<i>5__3
	int32_t ___U3CiU3E5__3_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CloopU3Ed__52_tC16AB621C0032FFEA99927B669C25D97F81483AD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CloopU3Ed__52_tC16AB621C0032FFEA99927B669C25D97F81483AD, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CloopU3Ed__52_tC16AB621C0032FFEA99927B669C25D97F81483AD, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CloopU3Ed__52_tC16AB621C0032FFEA99927B669C25D97F81483AD, ___U3CU3E4__this_3)); }
	inline Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of__initSpeed_4() { return static_cast<int32_t>(offsetof(U3CloopU3Ed__52_tC16AB621C0032FFEA99927B669C25D97F81483AD, ____initSpeed_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__initSpeed_4() const { return ____initSpeed_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__initSpeed_4() { return &____initSpeed_4; }
	inline void set__initSpeed_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____initSpeed_4 = value;
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(U3CloopU3Ed__52_tC16AB621C0032FFEA99927B669C25D97F81483AD, ___count_5)); }
	inline int32_t get_count_5() const { return ___count_5; }
	inline int32_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(int32_t value)
	{
		___count_5 = value;
	}

	inline static int32_t get_offset_of_waitBetweenDropSpawn_6() { return static_cast<int32_t>(offsetof(U3CloopU3Ed__52_tC16AB621C0032FFEA99927B669C25D97F81483AD, ___waitBetweenDropSpawn_6)); }
	inline bool get_waitBetweenDropSpawn_6() const { return ___waitBetweenDropSpawn_6; }
	inline bool* get_address_of_waitBetweenDropSpawn_6() { return &___waitBetweenDropSpawn_6; }
	inline void set_waitBetweenDropSpawn_6(bool value)
	{
		___waitBetweenDropSpawn_6 = value;
	}

	inline static int32_t get_offset_of_U3CauxCountU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CloopU3Ed__52_tC16AB621C0032FFEA99927B669C25D97F81483AD, ___U3CauxCountU3E5__2_7)); }
	inline int32_t get_U3CauxCountU3E5__2_7() const { return ___U3CauxCountU3E5__2_7; }
	inline int32_t* get_address_of_U3CauxCountU3E5__2_7() { return &___U3CauxCountU3E5__2_7; }
	inline void set_U3CauxCountU3E5__2_7(int32_t value)
	{
		___U3CauxCountU3E5__2_7 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_8() { return static_cast<int32_t>(offsetof(U3CloopU3Ed__52_tC16AB621C0032FFEA99927B669C25D97F81483AD, ___U3CiU3E5__3_8)); }
	inline int32_t get_U3CiU3E5__3_8() const { return ___U3CiU3E5__3_8; }
	inline int32_t* get_address_of_U3CiU3E5__3_8() { return &___U3CiU3E5__3_8; }
	inline void set_U3CiU3E5__3_8(int32_t value)
	{
		___U3CiU3E5__3_8 = value;
	}
};


// UnityStandardAssets.CinematicEffects.FXAA/Preset/LayoutAttribute
struct LayoutAttribute_t4A19CE9A56C91763A69A8981B8E519C5B25F4522  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:

public:
};


// DevionGames.MiniJSON/Parser/TOKEN
struct TOKEN_tEDB7AEED729652D4E2BDC783DE53BC58597AE895 
{
public:
	// System.Int32 DevionGames.MiniJSON/Parser/TOKEN::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TOKEN_tEDB7AEED729652D4E2BDC783DE53BC58597AE895, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings/LayoutAttribute
struct LayoutAttribute_t87E11BB1A8C6EE93216FEAF5B4B3F7504E8B95C1  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:

public:
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// DevionGames.UIWidgets.FloatTween
struct FloatTween_t7814382C59A52975DDE91625A0B93AF25E34D858 
{
public:
	// DevionGames.UIWidgets.FloatTween/FloatTweenCallback DevionGames.UIWidgets.FloatTween::m_Target
	FloatTweenCallback_t4D72521CC9CAB1E6370AE18D84EC5BF99B9029A2 * ___m_Target_0;
	// DevionGames.UIWidgets.FloatTween/FloatTweenFinishCallback DevionGames.UIWidgets.FloatTween::m_OnFinish
	FloatTweenFinishCallback_tD71B2F82F5D04C6FD0D854914D14D80014F6036C * ___m_OnFinish_1;
	// DevionGames.UIWidgets.EasingEquations/EaseType DevionGames.UIWidgets.FloatTween::m_EaseType
	int32_t ___m_EaseType_2;
	// System.Single DevionGames.UIWidgets.FloatTween::m_StartValue
	float ___m_StartValue_3;
	// System.Single DevionGames.UIWidgets.FloatTween::m_TargetValue
	float ___m_TargetValue_4;
	// System.Single DevionGames.UIWidgets.FloatTween::m_Duration
	float ___m_Duration_5;
	// System.Boolean DevionGames.UIWidgets.FloatTween::m_IgnoreTimeScale
	bool ___m_IgnoreTimeScale_6;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(FloatTween_t7814382C59A52975DDE91625A0B93AF25E34D858, ___m_Target_0)); }
	inline FloatTweenCallback_t4D72521CC9CAB1E6370AE18D84EC5BF99B9029A2 * get_m_Target_0() const { return ___m_Target_0; }
	inline FloatTweenCallback_t4D72521CC9CAB1E6370AE18D84EC5BF99B9029A2 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(FloatTweenCallback_t4D72521CC9CAB1E6370AE18D84EC5BF99B9029A2 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFinish_1() { return static_cast<int32_t>(offsetof(FloatTween_t7814382C59A52975DDE91625A0B93AF25E34D858, ___m_OnFinish_1)); }
	inline FloatTweenFinishCallback_tD71B2F82F5D04C6FD0D854914D14D80014F6036C * get_m_OnFinish_1() const { return ___m_OnFinish_1; }
	inline FloatTweenFinishCallback_tD71B2F82F5D04C6FD0D854914D14D80014F6036C ** get_address_of_m_OnFinish_1() { return &___m_OnFinish_1; }
	inline void set_m_OnFinish_1(FloatTweenFinishCallback_tD71B2F82F5D04C6FD0D854914D14D80014F6036C * value)
	{
		___m_OnFinish_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFinish_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_EaseType_2() { return static_cast<int32_t>(offsetof(FloatTween_t7814382C59A52975DDE91625A0B93AF25E34D858, ___m_EaseType_2)); }
	inline int32_t get_m_EaseType_2() const { return ___m_EaseType_2; }
	inline int32_t* get_address_of_m_EaseType_2() { return &___m_EaseType_2; }
	inline void set_m_EaseType_2(int32_t value)
	{
		___m_EaseType_2 = value;
	}

	inline static int32_t get_offset_of_m_StartValue_3() { return static_cast<int32_t>(offsetof(FloatTween_t7814382C59A52975DDE91625A0B93AF25E34D858, ___m_StartValue_3)); }
	inline float get_m_StartValue_3() const { return ___m_StartValue_3; }
	inline float* get_address_of_m_StartValue_3() { return &___m_StartValue_3; }
	inline void set_m_StartValue_3(float value)
	{
		___m_StartValue_3 = value;
	}

	inline static int32_t get_offset_of_m_TargetValue_4() { return static_cast<int32_t>(offsetof(FloatTween_t7814382C59A52975DDE91625A0B93AF25E34D858, ___m_TargetValue_4)); }
	inline float get_m_TargetValue_4() const { return ___m_TargetValue_4; }
	inline float* get_address_of_m_TargetValue_4() { return &___m_TargetValue_4; }
	inline void set_m_TargetValue_4(float value)
	{
		___m_TargetValue_4 = value;
	}

	inline static int32_t get_offset_of_m_Duration_5() { return static_cast<int32_t>(offsetof(FloatTween_t7814382C59A52975DDE91625A0B93AF25E34D858, ___m_Duration_5)); }
	inline float get_m_Duration_5() const { return ___m_Duration_5; }
	inline float* get_address_of_m_Duration_5() { return &___m_Duration_5; }
	inline void set_m_Duration_5(float value)
	{
		___m_Duration_5 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreTimeScale_6() { return static_cast<int32_t>(offsetof(FloatTween_t7814382C59A52975DDE91625A0B93AF25E34D858, ___m_IgnoreTimeScale_6)); }
	inline bool get_m_IgnoreTimeScale_6() const { return ___m_IgnoreTimeScale_6; }
	inline bool* get_address_of_m_IgnoreTimeScale_6() { return &___m_IgnoreTimeScale_6; }
	inline void set_m_IgnoreTimeScale_6(bool value)
	{
		___m_IgnoreTimeScale_6 = value;
	}
};

// Native definition for P/Invoke marshalling of DevionGames.UIWidgets.FloatTween
struct FloatTween_t7814382C59A52975DDE91625A0B93AF25E34D858_marshaled_pinvoke
{
	FloatTweenCallback_t4D72521CC9CAB1E6370AE18D84EC5BF99B9029A2 * ___m_Target_0;
	FloatTweenFinishCallback_tD71B2F82F5D04C6FD0D854914D14D80014F6036C * ___m_OnFinish_1;
	int32_t ___m_EaseType_2;
	float ___m_StartValue_3;
	float ___m_TargetValue_4;
	float ___m_Duration_5;
	int32_t ___m_IgnoreTimeScale_6;
};
// Native definition for COM marshalling of DevionGames.UIWidgets.FloatTween
struct FloatTween_t7814382C59A52975DDE91625A0B93AF25E34D858_marshaled_com
{
	FloatTweenCallback_t4D72521CC9CAB1E6370AE18D84EC5BF99B9029A2 * ___m_Target_0;
	FloatTweenFinishCallback_tD71B2F82F5D04C6FD0D854914D14D80014F6036C * ___m_OnFinish_1;
	int32_t ___m_EaseType_2;
	float ___m_StartValue_3;
	float ___m_TargetValue_4;
	float ___m_Duration_5;
	int32_t ___m_IgnoreTimeScale_6;
};

// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityStandardAssets.CinematicEffects.SMAA/GlobalSettings
struct GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE 
{
public:
	// UnityStandardAssets.CinematicEffects.SMAA/DebugPass UnityStandardAssets.CinematicEffects.SMAA/GlobalSettings::debugPass
	int32_t ___debugPass_0;
	// UnityStandardAssets.CinematicEffects.SMAA/QualityPreset UnityStandardAssets.CinematicEffects.SMAA/GlobalSettings::quality
	int32_t ___quality_1;
	// UnityStandardAssets.CinematicEffects.SMAA/EdgeDetectionMethod UnityStandardAssets.CinematicEffects.SMAA/GlobalSettings::edgeDetectionMethod
	int32_t ___edgeDetectionMethod_2;

public:
	inline static int32_t get_offset_of_debugPass_0() { return static_cast<int32_t>(offsetof(GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE, ___debugPass_0)); }
	inline int32_t get_debugPass_0() const { return ___debugPass_0; }
	inline int32_t* get_address_of_debugPass_0() { return &___debugPass_0; }
	inline void set_debugPass_0(int32_t value)
	{
		___debugPass_0 = value;
	}

	inline static int32_t get_offset_of_quality_1() { return static_cast<int32_t>(offsetof(GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE, ___quality_1)); }
	inline int32_t get_quality_1() const { return ___quality_1; }
	inline int32_t* get_address_of_quality_1() { return &___quality_1; }
	inline void set_quality_1(int32_t value)
	{
		___quality_1 = value;
	}

	inline static int32_t get_offset_of_edgeDetectionMethod_2() { return static_cast<int32_t>(offsetof(GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE, ___edgeDetectionMethod_2)); }
	inline int32_t get_edgeDetectionMethod_2() const { return ___edgeDetectionMethod_2; }
	inline int32_t* get_address_of_edgeDetectionMethod_2() { return &___edgeDetectionMethod_2; }
	inline void set_edgeDetectionMethod_2(int32_t value)
	{
		___edgeDetectionMethod_2 = value;
	}
};


// UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/ReflectionSettings
struct ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1 
{
public:
	// UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRReflectionBlendType UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/ReflectionSettings::blendType
	int32_t ___blendType_0;
	// UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRResolution UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/ReflectionSettings::reflectionQuality
	int32_t ___reflectionQuality_1;
	// System.Single UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/ReflectionSettings::maxDistance
	float ___maxDistance_2;
	// System.Int32 UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/ReflectionSettings::iterationCount
	int32_t ___iterationCount_3;
	// System.Int32 UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/ReflectionSettings::stepSize
	int32_t ___stepSize_4;
	// System.Single UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/ReflectionSettings::widthModifier
	float ___widthModifier_5;
	// System.Single UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/ReflectionSettings::reflectionBlur
	float ___reflectionBlur_6;
	// System.Boolean UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/ReflectionSettings::reflectBackfaces
	bool ___reflectBackfaces_7;

public:
	inline static int32_t get_offset_of_blendType_0() { return static_cast<int32_t>(offsetof(ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1, ___blendType_0)); }
	inline int32_t get_blendType_0() const { return ___blendType_0; }
	inline int32_t* get_address_of_blendType_0() { return &___blendType_0; }
	inline void set_blendType_0(int32_t value)
	{
		___blendType_0 = value;
	}

	inline static int32_t get_offset_of_reflectionQuality_1() { return static_cast<int32_t>(offsetof(ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1, ___reflectionQuality_1)); }
	inline int32_t get_reflectionQuality_1() const { return ___reflectionQuality_1; }
	inline int32_t* get_address_of_reflectionQuality_1() { return &___reflectionQuality_1; }
	inline void set_reflectionQuality_1(int32_t value)
	{
		___reflectionQuality_1 = value;
	}

	inline static int32_t get_offset_of_maxDistance_2() { return static_cast<int32_t>(offsetof(ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1, ___maxDistance_2)); }
	inline float get_maxDistance_2() const { return ___maxDistance_2; }
	inline float* get_address_of_maxDistance_2() { return &___maxDistance_2; }
	inline void set_maxDistance_2(float value)
	{
		___maxDistance_2 = value;
	}

	inline static int32_t get_offset_of_iterationCount_3() { return static_cast<int32_t>(offsetof(ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1, ___iterationCount_3)); }
	inline int32_t get_iterationCount_3() const { return ___iterationCount_3; }
	inline int32_t* get_address_of_iterationCount_3() { return &___iterationCount_3; }
	inline void set_iterationCount_3(int32_t value)
	{
		___iterationCount_3 = value;
	}

	inline static int32_t get_offset_of_stepSize_4() { return static_cast<int32_t>(offsetof(ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1, ___stepSize_4)); }
	inline int32_t get_stepSize_4() const { return ___stepSize_4; }
	inline int32_t* get_address_of_stepSize_4() { return &___stepSize_4; }
	inline void set_stepSize_4(int32_t value)
	{
		___stepSize_4 = value;
	}

	inline static int32_t get_offset_of_widthModifier_5() { return static_cast<int32_t>(offsetof(ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1, ___widthModifier_5)); }
	inline float get_widthModifier_5() const { return ___widthModifier_5; }
	inline float* get_address_of_widthModifier_5() { return &___widthModifier_5; }
	inline void set_widthModifier_5(float value)
	{
		___widthModifier_5 = value;
	}

	inline static int32_t get_offset_of_reflectionBlur_6() { return static_cast<int32_t>(offsetof(ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1, ___reflectionBlur_6)); }
	inline float get_reflectionBlur_6() const { return ___reflectionBlur_6; }
	inline float* get_address_of_reflectionBlur_6() { return &___reflectionBlur_6; }
	inline void set_reflectionBlur_6(float value)
	{
		___reflectionBlur_6 = value;
	}

	inline static int32_t get_offset_of_reflectBackfaces_7() { return static_cast<int32_t>(offsetof(ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1, ___reflectBackfaces_7)); }
	inline bool get_reflectBackfaces_7() const { return ___reflectBackfaces_7; }
	inline bool* get_address_of_reflectBackfaces_7() { return &___reflectBackfaces_7; }
	inline void set_reflectBackfaces_7(bool value)
	{
		___reflectBackfaces_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/ReflectionSettings
struct ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshaled_pinvoke
{
	int32_t ___blendType_0;
	int32_t ___reflectionQuality_1;
	float ___maxDistance_2;
	int32_t ___iterationCount_3;
	int32_t ___stepSize_4;
	float ___widthModifier_5;
	float ___reflectionBlur_6;
	int32_t ___reflectBackfaces_7;
};
// Native definition for COM marshalling of UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/ReflectionSettings
struct ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshaled_com
{
	int32_t ___blendType_0;
	int32_t ___reflectionQuality_1;
	float ___maxDistance_2;
	int32_t ___iterationCount_3;
	int32_t ___stepSize_4;
	float ___widthModifier_5;
	float ___reflectionBlur_6;
	int32_t ___reflectBackfaces_7;
};

// SnowFairyCauldron/ChoicePhrase
struct ChoicePhrase_t7C05E60215F75758BA3A4ABEF5F5FB2E6B393C53 
{
public:
	// SnowFairyCauldron/SnowFairyChoice SnowFairyCauldron/ChoicePhrase::choice
	int32_t ___choice_0;
	// System.String SnowFairyCauldron/ChoicePhrase::phrase
	String_t* ___phrase_1;

public:
	inline static int32_t get_offset_of_choice_0() { return static_cast<int32_t>(offsetof(ChoicePhrase_t7C05E60215F75758BA3A4ABEF5F5FB2E6B393C53, ___choice_0)); }
	inline int32_t get_choice_0() const { return ___choice_0; }
	inline int32_t* get_address_of_choice_0() { return &___choice_0; }
	inline void set_choice_0(int32_t value)
	{
		___choice_0 = value;
	}

	inline static int32_t get_offset_of_phrase_1() { return static_cast<int32_t>(offsetof(ChoicePhrase_t7C05E60215F75758BA3A4ABEF5F5FB2E6B393C53, ___phrase_1)); }
	inline String_t* get_phrase_1() const { return ___phrase_1; }
	inline String_t** get_address_of_phrase_1() { return &___phrase_1; }
	inline void set_phrase_1(String_t* value)
	{
		___phrase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___phrase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of SnowFairyCauldron/ChoicePhrase
struct ChoicePhrase_t7C05E60215F75758BA3A4ABEF5F5FB2E6B393C53_marshaled_pinvoke
{
	int32_t ___choice_0;
	char* ___phrase_1;
};
// Native definition for COM marshalling of SnowFairyCauldron/ChoicePhrase
struct ChoicePhrase_t7C05E60215F75758BA3A4ABEF5F5FB2E6B393C53_marshaled_com
{
	int32_t ___choice_0;
	Il2CppChar* ___phrase_1;
};

// SnowFairyCauldron_v2/ChoicePhrase
struct ChoicePhrase_tCEE30AE4523CD12B954B4493B0B514CF46926AB2 
{
public:
	// SnowFairyCauldron_v2/SnowFairyChoice SnowFairyCauldron_v2/ChoicePhrase::choice
	int32_t ___choice_0;
	// System.String SnowFairyCauldron_v2/ChoicePhrase::phrase
	String_t* ___phrase_1;

public:
	inline static int32_t get_offset_of_choice_0() { return static_cast<int32_t>(offsetof(ChoicePhrase_tCEE30AE4523CD12B954B4493B0B514CF46926AB2, ___choice_0)); }
	inline int32_t get_choice_0() const { return ___choice_0; }
	inline int32_t* get_address_of_choice_0() { return &___choice_0; }
	inline void set_choice_0(int32_t value)
	{
		___choice_0 = value;
	}

	inline static int32_t get_offset_of_phrase_1() { return static_cast<int32_t>(offsetof(ChoicePhrase_tCEE30AE4523CD12B954B4493B0B514CF46926AB2, ___phrase_1)); }
	inline String_t* get_phrase_1() const { return ___phrase_1; }
	inline String_t** get_address_of_phrase_1() { return &___phrase_1; }
	inline void set_phrase_1(String_t* value)
	{
		___phrase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___phrase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of SnowFairyCauldron_v2/ChoicePhrase
struct ChoicePhrase_tCEE30AE4523CD12B954B4493B0B514CF46926AB2_marshaled_pinvoke
{
	int32_t ___choice_0;
	char* ___phrase_1;
};
// Native definition for COM marshalling of SnowFairyCauldron_v2/ChoicePhrase
struct ChoicePhrase_tCEE30AE4523CD12B954B4493B0B514CF46926AB2_marshaled_com
{
	int32_t ___choice_0;
	Il2CppChar* ___phrase_1;
};

// SnowFairyMirrorController/ChoicePhrase
struct ChoicePhrase_t96AFA26823C3EA543E8E9B235929FAE81BD75DEA 
{
public:
	// SnowFairyMirrorController/SnowFairyChoice SnowFairyMirrorController/ChoicePhrase::choice
	int32_t ___choice_0;
	// System.String SnowFairyMirrorController/ChoicePhrase::phrase
	String_t* ___phrase_1;

public:
	inline static int32_t get_offset_of_choice_0() { return static_cast<int32_t>(offsetof(ChoicePhrase_t96AFA26823C3EA543E8E9B235929FAE81BD75DEA, ___choice_0)); }
	inline int32_t get_choice_0() const { return ___choice_0; }
	inline int32_t* get_address_of_choice_0() { return &___choice_0; }
	inline void set_choice_0(int32_t value)
	{
		___choice_0 = value;
	}

	inline static int32_t get_offset_of_phrase_1() { return static_cast<int32_t>(offsetof(ChoicePhrase_t96AFA26823C3EA543E8E9B235929FAE81BD75DEA, ___phrase_1)); }
	inline String_t* get_phrase_1() const { return ___phrase_1; }
	inline String_t** get_address_of_phrase_1() { return &___phrase_1; }
	inline void set_phrase_1(String_t* value)
	{
		___phrase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___phrase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of SnowFairyMirrorController/ChoicePhrase
struct ChoicePhrase_t96AFA26823C3EA543E8E9B235929FAE81BD75DEA_marshaled_pinvoke
{
	int32_t ___choice_0;
	char* ___phrase_1;
};
// Native definition for COM marshalling of SnowFairyMirrorController/ChoicePhrase
struct ChoicePhrase_t96AFA26823C3EA543E8E9B235929FAE81BD75DEA_marshaled_com
{
	int32_t ___choice_0;
	Il2CppChar* ___phrase_1;
};

// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorGradingSettings
struct ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F 
{
public:
	// System.Boolean UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorGradingSettings::enabled
	bool ___enabled_0;
	// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorGradingPrecision UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorGradingSettings::precision
	int32_t ___precision_1;
	// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorWheelsSettings UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorGradingSettings::colorWheels
	ColorWheelsSettings_tA1F7B01E603F94472F1DECDE81F9F0C09DAA7DC9  ___colorWheels_2;
	// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/BasicsSettings UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorGradingSettings::basics
	BasicsSettings_tCD0CFD2C3C62C6A9E002B8E4CD4CAAB56BBDF04F  ___basics_3;
	// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ChannelMixerSettings UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorGradingSettings::channelMixer
	ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744  ___channelMixer_4;
	// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/CurvesSettings UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorGradingSettings::curves
	CurvesSettings_t451DB71CD864FD8AECCB77D60CA7AF61781C287D  ___curves_5;
	// System.Boolean UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorGradingSettings::useDithering
	bool ___useDithering_6;
	// System.Boolean UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorGradingSettings::showDebug
	bool ___showDebug_7;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_precision_1() { return static_cast<int32_t>(offsetof(ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F, ___precision_1)); }
	inline int32_t get_precision_1() const { return ___precision_1; }
	inline int32_t* get_address_of_precision_1() { return &___precision_1; }
	inline void set_precision_1(int32_t value)
	{
		___precision_1 = value;
	}

	inline static int32_t get_offset_of_colorWheels_2() { return static_cast<int32_t>(offsetof(ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F, ___colorWheels_2)); }
	inline ColorWheelsSettings_tA1F7B01E603F94472F1DECDE81F9F0C09DAA7DC9  get_colorWheels_2() const { return ___colorWheels_2; }
	inline ColorWheelsSettings_tA1F7B01E603F94472F1DECDE81F9F0C09DAA7DC9 * get_address_of_colorWheels_2() { return &___colorWheels_2; }
	inline void set_colorWheels_2(ColorWheelsSettings_tA1F7B01E603F94472F1DECDE81F9F0C09DAA7DC9  value)
	{
		___colorWheels_2 = value;
	}

	inline static int32_t get_offset_of_basics_3() { return static_cast<int32_t>(offsetof(ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F, ___basics_3)); }
	inline BasicsSettings_tCD0CFD2C3C62C6A9E002B8E4CD4CAAB56BBDF04F  get_basics_3() const { return ___basics_3; }
	inline BasicsSettings_tCD0CFD2C3C62C6A9E002B8E4CD4CAAB56BBDF04F * get_address_of_basics_3() { return &___basics_3; }
	inline void set_basics_3(BasicsSettings_tCD0CFD2C3C62C6A9E002B8E4CD4CAAB56BBDF04F  value)
	{
		___basics_3 = value;
	}

	inline static int32_t get_offset_of_channelMixer_4() { return static_cast<int32_t>(offsetof(ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F, ___channelMixer_4)); }
	inline ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744  get_channelMixer_4() const { return ___channelMixer_4; }
	inline ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744 * get_address_of_channelMixer_4() { return &___channelMixer_4; }
	inline void set_channelMixer_4(ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744  value)
	{
		___channelMixer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___channelMixer_4))->___channels_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_curves_5() { return static_cast<int32_t>(offsetof(ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F, ___curves_5)); }
	inline CurvesSettings_t451DB71CD864FD8AECCB77D60CA7AF61781C287D  get_curves_5() const { return ___curves_5; }
	inline CurvesSettings_t451DB71CD864FD8AECCB77D60CA7AF61781C287D * get_address_of_curves_5() { return &___curves_5; }
	inline void set_curves_5(CurvesSettings_t451DB71CD864FD8AECCB77D60CA7AF61781C287D  value)
	{
		___curves_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___curves_5))->___master_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___curves_5))->___red_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___curves_5))->___green_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___curves_5))->___blue_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_useDithering_6() { return static_cast<int32_t>(offsetof(ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F, ___useDithering_6)); }
	inline bool get_useDithering_6() const { return ___useDithering_6; }
	inline bool* get_address_of_useDithering_6() { return &___useDithering_6; }
	inline void set_useDithering_6(bool value)
	{
		___useDithering_6 = value;
	}

	inline static int32_t get_offset_of_showDebug_7() { return static_cast<int32_t>(offsetof(ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F, ___showDebug_7)); }
	inline bool get_showDebug_7() const { return ___showDebug_7; }
	inline bool* get_address_of_showDebug_7() { return &___showDebug_7; }
	inline void set_showDebug_7(bool value)
	{
		___showDebug_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorGradingSettings
struct ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F_marshaled_pinvoke
{
	int32_t ___enabled_0;
	int32_t ___precision_1;
	ColorWheelsSettings_tA1F7B01E603F94472F1DECDE81F9F0C09DAA7DC9  ___colorWheels_2;
	BasicsSettings_tCD0CFD2C3C62C6A9E002B8E4CD4CAAB56BBDF04F  ___basics_3;
	ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshaled_pinvoke ___channelMixer_4;
	CurvesSettings_t451DB71CD864FD8AECCB77D60CA7AF61781C287D  ___curves_5;
	int32_t ___useDithering_6;
	int32_t ___showDebug_7;
};
// Native definition for COM marshalling of UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorGradingSettings
struct ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F_marshaled_com
{
	int32_t ___enabled_0;
	int32_t ___precision_1;
	ColorWheelsSettings_tA1F7B01E603F94472F1DECDE81F9F0C09DAA7DC9  ___colorWheels_2;
	BasicsSettings_tCD0CFD2C3C62C6A9E002B8E4CD4CAAB56BBDF04F  ___basics_3;
	ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshaled_com ___channelMixer_4;
	CurvesSettings_t451DB71CD864FD8AECCB77D60CA7AF61781C287D  ___curves_5;
	int32_t ___useDithering_6;
	int32_t ___showDebug_7;
};

// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings
struct TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F 
{
public:
	// System.Boolean UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings::enabled
	bool ___enabled_0;
	// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/Tonemapper UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings::tonemapper
	int32_t ___tonemapper_1;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings::exposure
	float ___exposure_2;
	// UnityEngine.AnimationCurve UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings::curve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___curve_3;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings::neutralBlackIn
	float ___neutralBlackIn_4;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings::neutralWhiteIn
	float ___neutralWhiteIn_5;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings::neutralBlackOut
	float ___neutralBlackOut_6;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings::neutralWhiteOut
	float ___neutralWhiteOut_7;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings::neutralWhiteLevel
	float ___neutralWhiteLevel_8;
	// System.Single UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings::neutralWhiteClip
	float ___neutralWhiteClip_9;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_tonemapper_1() { return static_cast<int32_t>(offsetof(TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F, ___tonemapper_1)); }
	inline int32_t get_tonemapper_1() const { return ___tonemapper_1; }
	inline int32_t* get_address_of_tonemapper_1() { return &___tonemapper_1; }
	inline void set_tonemapper_1(int32_t value)
	{
		___tonemapper_1 = value;
	}

	inline static int32_t get_offset_of_exposure_2() { return static_cast<int32_t>(offsetof(TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F, ___exposure_2)); }
	inline float get_exposure_2() const { return ___exposure_2; }
	inline float* get_address_of_exposure_2() { return &___exposure_2; }
	inline void set_exposure_2(float value)
	{
		___exposure_2 = value;
	}

	inline static int32_t get_offset_of_curve_3() { return static_cast<int32_t>(offsetof(TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F, ___curve_3)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_curve_3() const { return ___curve_3; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_curve_3() { return &___curve_3; }
	inline void set_curve_3(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___curve_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___curve_3), (void*)value);
	}

	inline static int32_t get_offset_of_neutralBlackIn_4() { return static_cast<int32_t>(offsetof(TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F, ___neutralBlackIn_4)); }
	inline float get_neutralBlackIn_4() const { return ___neutralBlackIn_4; }
	inline float* get_address_of_neutralBlackIn_4() { return &___neutralBlackIn_4; }
	inline void set_neutralBlackIn_4(float value)
	{
		___neutralBlackIn_4 = value;
	}

	inline static int32_t get_offset_of_neutralWhiteIn_5() { return static_cast<int32_t>(offsetof(TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F, ___neutralWhiteIn_5)); }
	inline float get_neutralWhiteIn_5() const { return ___neutralWhiteIn_5; }
	inline float* get_address_of_neutralWhiteIn_5() { return &___neutralWhiteIn_5; }
	inline void set_neutralWhiteIn_5(float value)
	{
		___neutralWhiteIn_5 = value;
	}

	inline static int32_t get_offset_of_neutralBlackOut_6() { return static_cast<int32_t>(offsetof(TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F, ___neutralBlackOut_6)); }
	inline float get_neutralBlackOut_6() const { return ___neutralBlackOut_6; }
	inline float* get_address_of_neutralBlackOut_6() { return &___neutralBlackOut_6; }
	inline void set_neutralBlackOut_6(float value)
	{
		___neutralBlackOut_6 = value;
	}

	inline static int32_t get_offset_of_neutralWhiteOut_7() { return static_cast<int32_t>(offsetof(TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F, ___neutralWhiteOut_7)); }
	inline float get_neutralWhiteOut_7() const { return ___neutralWhiteOut_7; }
	inline float* get_address_of_neutralWhiteOut_7() { return &___neutralWhiteOut_7; }
	inline void set_neutralWhiteOut_7(float value)
	{
		___neutralWhiteOut_7 = value;
	}

	inline static int32_t get_offset_of_neutralWhiteLevel_8() { return static_cast<int32_t>(offsetof(TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F, ___neutralWhiteLevel_8)); }
	inline float get_neutralWhiteLevel_8() const { return ___neutralWhiteLevel_8; }
	inline float* get_address_of_neutralWhiteLevel_8() { return &___neutralWhiteLevel_8; }
	inline void set_neutralWhiteLevel_8(float value)
	{
		___neutralWhiteLevel_8 = value;
	}

	inline static int32_t get_offset_of_neutralWhiteClip_9() { return static_cast<int32_t>(offsetof(TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F, ___neutralWhiteClip_9)); }
	inline float get_neutralWhiteClip_9() const { return ___neutralWhiteClip_9; }
	inline float* get_address_of_neutralWhiteClip_9() { return &___neutralWhiteClip_9; }
	inline void set_neutralWhiteClip_9(float value)
	{
		___neutralWhiteClip_9 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings
struct TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F_marshaled_pinvoke
{
	int32_t ___enabled_0;
	int32_t ___tonemapper_1;
	float ___exposure_2;
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke ___curve_3;
	float ___neutralBlackIn_4;
	float ___neutralWhiteIn_5;
	float ___neutralBlackOut_6;
	float ___neutralWhiteOut_7;
	float ___neutralWhiteLevel_8;
	float ___neutralWhiteClip_9;
};
// Native definition for COM marshalling of UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings
struct TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F_marshaled_com
{
	int32_t ___enabled_0;
	int32_t ___tonemapper_1;
	float ___exposure_2;
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com* ___curve_3;
	float ___neutralBlackIn_4;
	float ___neutralWhiteIn_5;
	float ___neutralBlackOut_6;
	float ___neutralWhiteOut_7;
	float ___neutralWhiteLevel_8;
	float ___neutralWhiteClip_9;
};

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79  : public MulticastDelegate_t
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


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings
struct SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F 
{
public:
	// UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/ReflectionSettings UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings::reflectionSettings
	ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1  ___reflectionSettings_0;
	// UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/IntensitySettings UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings::intensitySettings
	IntensitySettings_t8B6AAA0BEBDE793FDB08D59A6C6784CF85AD8C38  ___intensitySettings_1;
	// UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/ScreenEdgeMask UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings::screenEdgeMask
	ScreenEdgeMask_tAEAF832C1E0D10F6853A9E09463D468BE70A0A6D  ___screenEdgeMask_2;

public:
	inline static int32_t get_offset_of_reflectionSettings_0() { return static_cast<int32_t>(offsetof(SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F, ___reflectionSettings_0)); }
	inline ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1  get_reflectionSettings_0() const { return ___reflectionSettings_0; }
	inline ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1 * get_address_of_reflectionSettings_0() { return &___reflectionSettings_0; }
	inline void set_reflectionSettings_0(ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1  value)
	{
		___reflectionSettings_0 = value;
	}

	inline static int32_t get_offset_of_intensitySettings_1() { return static_cast<int32_t>(offsetof(SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F, ___intensitySettings_1)); }
	inline IntensitySettings_t8B6AAA0BEBDE793FDB08D59A6C6784CF85AD8C38  get_intensitySettings_1() const { return ___intensitySettings_1; }
	inline IntensitySettings_t8B6AAA0BEBDE793FDB08D59A6C6784CF85AD8C38 * get_address_of_intensitySettings_1() { return &___intensitySettings_1; }
	inline void set_intensitySettings_1(IntensitySettings_t8B6AAA0BEBDE793FDB08D59A6C6784CF85AD8C38  value)
	{
		___intensitySettings_1 = value;
	}

	inline static int32_t get_offset_of_screenEdgeMask_2() { return static_cast<int32_t>(offsetof(SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F, ___screenEdgeMask_2)); }
	inline ScreenEdgeMask_tAEAF832C1E0D10F6853A9E09463D468BE70A0A6D  get_screenEdgeMask_2() const { return ___screenEdgeMask_2; }
	inline ScreenEdgeMask_tAEAF832C1E0D10F6853A9E09463D468BE70A0A6D * get_address_of_screenEdgeMask_2() { return &___screenEdgeMask_2; }
	inline void set_screenEdgeMask_2(ScreenEdgeMask_tAEAF832C1E0D10F6853A9E09463D468BE70A0A6D  value)
	{
		___screenEdgeMask_2 = value;
	}
};

struct SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F_StaticFields
{
public:
	// UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings::s_Default
	SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F  ___s_Default_3;

public:
	inline static int32_t get_offset_of_s_Default_3() { return static_cast<int32_t>(offsetof(SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F_StaticFields, ___s_Default_3)); }
	inline SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F  get_s_Default_3() const { return ___s_Default_3; }
	inline SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F * get_address_of_s_Default_3() { return &___s_Default_3; }
	inline void set_s_Default_3(SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F  value)
	{
		___s_Default_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings
struct SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F_marshaled_pinvoke
{
	ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshaled_pinvoke ___reflectionSettings_0;
	IntensitySettings_t8B6AAA0BEBDE793FDB08D59A6C6784CF85AD8C38  ___intensitySettings_1;
	ScreenEdgeMask_tAEAF832C1E0D10F6853A9E09463D468BE70A0A6D  ___screenEdgeMask_2;
};
// Native definition for COM marshalling of UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings
struct SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F_marshaled_com
{
	ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshaled_com ___reflectionSettings_0;
	IntensitySettings_t8B6AAA0BEBDE793FDB08D59A6C6784CF85AD8C38  ___intensitySettings_1;
	ScreenEdgeMask_tAEAF832C1E0D10F6853A9E09463D468BE70A0A6D  ___screenEdgeMask_2;
};

// DevionGames.UIWidgets.UIWidget/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_t0EA311E0579D20F111699FF6723A2B078B9820D1  : public RuntimeObject
{
public:
	// DevionGames.UIWidgets.UIWidget DevionGames.UIWidgets.UIWidget/<>c__DisplayClass30_0::<>4__this
	UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229 * ___U3CU3E4__this_0;
	// DevionGames.UIWidgets.FloatTween DevionGames.UIWidgets.UIWidget/<>c__DisplayClass30_0::alphaTween
	FloatTween_t7814382C59A52975DDE91625A0B93AF25E34D858  ___alphaTween_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_0_t0EA311E0579D20F111699FF6723A2B078B9820D1, ___U3CU3E4__this_0)); }
	inline UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_alphaTween_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_0_t0EA311E0579D20F111699FF6723A2B078B9820D1, ___alphaTween_1)); }
	inline FloatTween_t7814382C59A52975DDE91625A0B93AF25E34D858  get_alphaTween_1() const { return ___alphaTween_1; }
	inline FloatTween_t7814382C59A52975DDE91625A0B93AF25E34D858 * get_address_of_alphaTween_1() { return &___alphaTween_1; }
	inline void set_alphaTween_1(FloatTween_t7814382C59A52975DDE91625A0B93AF25E34D858  value)
	{
		___alphaTween_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___alphaTween_1))->___m_Target_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___alphaTween_1))->___m_OnFinish_1), (void*)NULL);
		#endif
	}
};


// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// DevionGames.CallbackHandler
struct CallbackHandler_t5024E3525A6B28D3DF7B3ECE316C1CD8ECC3A6E6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<DevionGames.CallbackHandler/Entry> DevionGames.CallbackHandler::delegates
	List_1_t0E29E57C81CF75B366B808396089CFC7F6D18F7B * ___delegates_4;

public:
	inline static int32_t get_offset_of_delegates_4() { return static_cast<int32_t>(offsetof(CallbackHandler_t5024E3525A6B28D3DF7B3ECE316C1CD8ECC3A6E6, ___delegates_4)); }
	inline List_1_t0E29E57C81CF75B366B808396089CFC7F6D18F7B * get_delegates_4() const { return ___delegates_4; }
	inline List_1_t0E29E57C81CF75B366B808396089CFC7F6D18F7B ** get_address_of_delegates_4() { return &___delegates_4; }
	inline void set_delegates_4(List_1_t0E29E57C81CF75B366B808396089CFC7F6D18F7B * value)
	{
		___delegates_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_4), (void*)value);
	}
};


// MetaballParticleClass
struct MetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject MetaballParticleClass::MObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___MObject_4;
	// System.Single MetaballParticleClass::LifeTime
	float ___LifeTime_5;
	// System.Boolean MetaballParticleClass::witinTarget
	bool ___witinTarget_6;
	// System.Boolean MetaballParticleClass::_active
	bool ____active_7;
	// System.Single MetaballParticleClass::delta
	float ___delta_8;
	// UnityEngine.Rigidbody2D MetaballParticleClass::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_9;
	// UnityEngine.TrailRenderer MetaballParticleClass::tr
	TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01 * ___tr_10;

public:
	inline static int32_t get_offset_of_MObject_4() { return static_cast<int32_t>(offsetof(MetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9, ___MObject_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_MObject_4() const { return ___MObject_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_MObject_4() { return &___MObject_4; }
	inline void set_MObject_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___MObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MObject_4), (void*)value);
	}

	inline static int32_t get_offset_of_LifeTime_5() { return static_cast<int32_t>(offsetof(MetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9, ___LifeTime_5)); }
	inline float get_LifeTime_5() const { return ___LifeTime_5; }
	inline float* get_address_of_LifeTime_5() { return &___LifeTime_5; }
	inline void set_LifeTime_5(float value)
	{
		___LifeTime_5 = value;
	}

	inline static int32_t get_offset_of_witinTarget_6() { return static_cast<int32_t>(offsetof(MetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9, ___witinTarget_6)); }
	inline bool get_witinTarget_6() const { return ___witinTarget_6; }
	inline bool* get_address_of_witinTarget_6() { return &___witinTarget_6; }
	inline void set_witinTarget_6(bool value)
	{
		___witinTarget_6 = value;
	}

	inline static int32_t get_offset_of__active_7() { return static_cast<int32_t>(offsetof(MetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9, ____active_7)); }
	inline bool get__active_7() const { return ____active_7; }
	inline bool* get_address_of__active_7() { return &____active_7; }
	inline void set__active_7(bool value)
	{
		____active_7 = value;
	}

	inline static int32_t get_offset_of_delta_8() { return static_cast<int32_t>(offsetof(MetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9, ___delta_8)); }
	inline float get_delta_8() const { return ___delta_8; }
	inline float* get_address_of_delta_8() { return &___delta_8; }
	inline void set_delta_8(float value)
	{
		___delta_8 = value;
	}

	inline static int32_t get_offset_of_rb_9() { return static_cast<int32_t>(offsetof(MetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9, ___rb_9)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_9() const { return ___rb_9; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_9() { return &___rb_9; }
	inline void set_rb_9(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_9), (void*)value);
	}

	inline static int32_t get_offset_of_tr_10() { return static_cast<int32_t>(offsetof(MetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9, ___tr_10)); }
	inline TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01 * get_tr_10() const { return ___tr_10; }
	inline TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01 ** get_address_of_tr_10() { return &___tr_10; }
	inline void set_tr_10(TrailRenderer_t219A9B1F6C4B984AE4BEEC40F90665D122056A01 * value)
	{
		___tr_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tr_10), (void*)value);
	}
};


// OtherWorld
struct OtherWorld_tB727BB284D250D1C80B503FC078EF2447876516B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// OtherWorld/Visualizer[] OtherWorld::visualizers
	VisualizerU5BU5D_tC5921398D3FDABEEA249BC021EDF7A133781918E* ___visualizers_4;
	// System.Boolean OtherWorld::isSwitchingVisualizers
	bool ___isSwitchingVisualizers_5;
	// System.Collections.IEnumerator OtherWorld::activationCoroutine
	RuntimeObject* ___activationCoroutine_6;
	// System.Collections.IEnumerator OtherWorld::deactivationCoroutine
	RuntimeObject* ___deactivationCoroutine_7;
	// Portal OtherWorld::portal
	Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * ___portal_8;

public:
	inline static int32_t get_offset_of_visualizers_4() { return static_cast<int32_t>(offsetof(OtherWorld_tB727BB284D250D1C80B503FC078EF2447876516B, ___visualizers_4)); }
	inline VisualizerU5BU5D_tC5921398D3FDABEEA249BC021EDF7A133781918E* get_visualizers_4() const { return ___visualizers_4; }
	inline VisualizerU5BU5D_tC5921398D3FDABEEA249BC021EDF7A133781918E** get_address_of_visualizers_4() { return &___visualizers_4; }
	inline void set_visualizers_4(VisualizerU5BU5D_tC5921398D3FDABEEA249BC021EDF7A133781918E* value)
	{
		___visualizers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visualizers_4), (void*)value);
	}

	inline static int32_t get_offset_of_isSwitchingVisualizers_5() { return static_cast<int32_t>(offsetof(OtherWorld_tB727BB284D250D1C80B503FC078EF2447876516B, ___isSwitchingVisualizers_5)); }
	inline bool get_isSwitchingVisualizers_5() const { return ___isSwitchingVisualizers_5; }
	inline bool* get_address_of_isSwitchingVisualizers_5() { return &___isSwitchingVisualizers_5; }
	inline void set_isSwitchingVisualizers_5(bool value)
	{
		___isSwitchingVisualizers_5 = value;
	}

	inline static int32_t get_offset_of_activationCoroutine_6() { return static_cast<int32_t>(offsetof(OtherWorld_tB727BB284D250D1C80B503FC078EF2447876516B, ___activationCoroutine_6)); }
	inline RuntimeObject* get_activationCoroutine_6() const { return ___activationCoroutine_6; }
	inline RuntimeObject** get_address_of_activationCoroutine_6() { return &___activationCoroutine_6; }
	inline void set_activationCoroutine_6(RuntimeObject* value)
	{
		___activationCoroutine_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activationCoroutine_6), (void*)value);
	}

	inline static int32_t get_offset_of_deactivationCoroutine_7() { return static_cast<int32_t>(offsetof(OtherWorld_tB727BB284D250D1C80B503FC078EF2447876516B, ___deactivationCoroutine_7)); }
	inline RuntimeObject* get_deactivationCoroutine_7() const { return ___deactivationCoroutine_7; }
	inline RuntimeObject** get_address_of_deactivationCoroutine_7() { return &___deactivationCoroutine_7; }
	inline void set_deactivationCoroutine_7(RuntimeObject* value)
	{
		___deactivationCoroutine_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deactivationCoroutine_7), (void*)value);
	}

	inline static int32_t get_offset_of_portal_8() { return static_cast<int32_t>(offsetof(OtherWorld_tB727BB284D250D1C80B503FC078EF2447876516B, ___portal_8)); }
	inline Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * get_portal_8() const { return ___portal_8; }
	inline Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E ** get_address_of_portal_8() { return &___portal_8; }
	inline void set_portal_8(Portal_t355BC086AE7B4F5E476064C8805CA0830E0CA48E * value)
	{
		___portal_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___portal_8), (void*)value);
	}
};


// DevionGames.PropertyBinding
struct PropertyBinding_t273EDABE3A995B2B49B72C6E2ED0E83BF73F3FF1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// DevionGames.PropertyBinding/PropertyRef DevionGames.PropertyBinding::m_Source
	PropertyRef_tBDFE709DEBDDC6FAD63FFDEDACADAB3E4328ED7E * ___m_Source_4;
	// DevionGames.PropertyBinding/PropertyRef DevionGames.PropertyBinding::m_Target
	PropertyRef_tBDFE709DEBDDC6FAD63FFDEDACADAB3E4328ED7E * ___m_Target_5;
	// DevionGames.PropertyBinding/Execution DevionGames.PropertyBinding::m_Execution
	int32_t ___m_Execution_6;
	// System.Single DevionGames.PropertyBinding::m_Interval
	float ___m_Interval_7;

public:
	inline static int32_t get_offset_of_m_Source_4() { return static_cast<int32_t>(offsetof(PropertyBinding_t273EDABE3A995B2B49B72C6E2ED0E83BF73F3FF1, ___m_Source_4)); }
	inline PropertyRef_tBDFE709DEBDDC6FAD63FFDEDACADAB3E4328ED7E * get_m_Source_4() const { return ___m_Source_4; }
	inline PropertyRef_tBDFE709DEBDDC6FAD63FFDEDACADAB3E4328ED7E ** get_address_of_m_Source_4() { return &___m_Source_4; }
	inline void set_m_Source_4(PropertyRef_tBDFE709DEBDDC6FAD63FFDEDACADAB3E4328ED7E * value)
	{
		___m_Source_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Source_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Target_5() { return static_cast<int32_t>(offsetof(PropertyBinding_t273EDABE3A995B2B49B72C6E2ED0E83BF73F3FF1, ___m_Target_5)); }
	inline PropertyRef_tBDFE709DEBDDC6FAD63FFDEDACADAB3E4328ED7E * get_m_Target_5() const { return ___m_Target_5; }
	inline PropertyRef_tBDFE709DEBDDC6FAD63FFDEDACADAB3E4328ED7E ** get_address_of_m_Target_5() { return &___m_Target_5; }
	inline void set_m_Target_5(PropertyRef_tBDFE709DEBDDC6FAD63FFDEDACADAB3E4328ED7E * value)
	{
		___m_Target_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Target_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Execution_6() { return static_cast<int32_t>(offsetof(PropertyBinding_t273EDABE3A995B2B49B72C6E2ED0E83BF73F3FF1, ___m_Execution_6)); }
	inline int32_t get_m_Execution_6() const { return ___m_Execution_6; }
	inline int32_t* get_address_of_m_Execution_6() { return &___m_Execution_6; }
	inline void set_m_Execution_6(int32_t value)
	{
		___m_Execution_6 = value;
	}

	inline static int32_t get_offset_of_m_Interval_7() { return static_cast<int32_t>(offsetof(PropertyBinding_t273EDABE3A995B2B49B72C6E2ED0E83BF73F3FF1, ___m_Interval_7)); }
	inline float get_m_Interval_7() const { return ___m_Interval_7; }
	inline float* get_address_of_m_Interval_7() { return &___m_Interval_7; }
	inline void set_m_Interval_7(float value)
	{
		___m_Interval_7 = value;
	}
};


// SceneLoader
struct SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean SceneLoader::loadScene
	bool ___loadScene_4;
	// System.Int32 SceneLoader::scene
	int32_t ___scene_5;
	// UnityEngine.UI.Text SceneLoader::loadingText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___loadingText_6;
	// UnityEngine.GameObject SceneLoader::buttonsMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___buttonsMenu_7;
	// UnityEngine.UI.Text SceneLoader::title
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___title_8;

public:
	inline static int32_t get_offset_of_loadScene_4() { return static_cast<int32_t>(offsetof(SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D, ___loadScene_4)); }
	inline bool get_loadScene_4() const { return ___loadScene_4; }
	inline bool* get_address_of_loadScene_4() { return &___loadScene_4; }
	inline void set_loadScene_4(bool value)
	{
		___loadScene_4 = value;
	}

	inline static int32_t get_offset_of_scene_5() { return static_cast<int32_t>(offsetof(SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D, ___scene_5)); }
	inline int32_t get_scene_5() const { return ___scene_5; }
	inline int32_t* get_address_of_scene_5() { return &___scene_5; }
	inline void set_scene_5(int32_t value)
	{
		___scene_5 = value;
	}

	inline static int32_t get_offset_of_loadingText_6() { return static_cast<int32_t>(offsetof(SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D, ___loadingText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_loadingText_6() const { return ___loadingText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_loadingText_6() { return &___loadingText_6; }
	inline void set_loadingText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___loadingText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadingText_6), (void*)value);
	}

	inline static int32_t get_offset_of_buttonsMenu_7() { return static_cast<int32_t>(offsetof(SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D, ___buttonsMenu_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_buttonsMenu_7() const { return ___buttonsMenu_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_buttonsMenu_7() { return &___buttonsMenu_7; }
	inline void set_buttonsMenu_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___buttonsMenu_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonsMenu_7), (void*)value);
	}

	inline static int32_t get_offset_of_title_8() { return static_cast<int32_t>(offsetof(SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D, ___title_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_title_8() const { return ___title_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_title_8() { return &___title_8; }
	inline void set_title_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___title_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_8), (void*)value);
	}
};


// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap
struct SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/MovementType DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::movementType
	int32_t ___movementType_4;
	// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/MovementAxis DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::movementAxis
	int32_t ___movementAxis_5;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::automaticallyLayout
	bool ___automaticallyLayout_6;
	// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/SizeControl DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::sizeControl
	int32_t ___sizeControl_7;
	// UnityEngine.Vector2 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size_8;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::automaticLayoutSpacing
	float ___automaticLayoutSpacing_9;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::leftMargin
	float ___leftMargin_10;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::rightMargin
	float ___rightMargin_11;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::topMargin
	float ___topMargin_12;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::bottomMargin
	float ___bottomMargin_13;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::infinitelyScroll
	bool ___infinitelyScroll_14;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::infiniteScrollingEndSpacing
	float ___infiniteScrollingEndSpacing_15;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::useOcclusionCulling
	bool ___useOcclusionCulling_16;
	// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::startingPanel
	int32_t ___startingPanel_17;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::swipeGestures
	bool ___swipeGestures_18;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::minimumSwipeSpeed
	float ___minimumSwipeSpeed_19;
	// UnityEngine.UI.Button DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::previousButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___previousButton_20;
	// UnityEngine.UI.Button DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::nextButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___nextButton_21;
	// UnityEngine.GameObject DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::pagination
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pagination_22;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::toggleNavigation
	bool ___toggleNavigation_23;
	// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/SnapTarget DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::snapTarget
	int32_t ___snapTarget_24;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::snappingSpeed
	float ___snappingSpeed_25;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::thresholdSnappingSpeed
	float ___thresholdSnappingSpeed_26;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::hardSnap
	bool ___hardSnap_27;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::useUnscaledTime
	bool ___useUnscaledTime_28;
	// UnityEngine.Events.UnityEvent DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::onPanelChanged
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onPanelChanged_29;
	// UnityEngine.Events.UnityEvent DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::onPanelSelecting
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onPanelSelecting_30;
	// UnityEngine.Events.UnityEvent DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::onPanelSelected
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onPanelSelected_31;
	// UnityEngine.Events.UnityEvent DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::onPanelChanging
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onPanelChanging_32;
	// System.Collections.Generic.List`1<DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect> DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::transitionEffects
	List_1_t458D63D243891843DA4B6612E427915103F7CB7C * ___transitionEffects_33;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::dragging
	bool ___dragging_34;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::selected
	bool ___selected_35;
	// System.Boolean DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::pressing
	bool ___pressing_36;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::releaseSpeed
	float ___releaseSpeed_37;
	// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::contentLength
	float ___contentLength_38;
	// DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/Direction DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::releaseDirection
	int32_t ___releaseDirection_39;
	// UnityEngine.Canvas DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___canvas_40;
	// UnityEngine.RectTransform DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::canvasRectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___canvasRectTransform_41;
	// UnityEngine.UI.CanvasScaler DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::canvasScaler
	CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1 * ___canvasScaler_42;
	// UnityEngine.UI.ScrollRect DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::scrollRect
	ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * ___scrollRect_43;
	// UnityEngine.Vector2 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::previousContentAnchoredPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___previousContentAnchoredPosition_44;
	// UnityEngine.Vector2 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::velocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___velocity_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.UI.Graphic[]> DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::panelGraphics
	Dictionary_2_tEC74ABC77DE2191EAA2A4EB5A912338BE92BE07B * ___panelGraphics_46;
	// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::<CurrentPanel>k__BackingField
	int32_t ___U3CCurrentPanelU3Ek__BackingField_47;
	// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::<TargetPanel>k__BackingField
	int32_t ___U3CTargetPanelU3Ek__BackingField_48;
	// System.Int32 DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::<NearestPanel>k__BackingField
	int32_t ___U3CNearestPanelU3Ek__BackingField_49;
	// UnityEngine.RectTransform[] DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::<PanelsRT>k__BackingField
	RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* ___U3CPanelsRTU3Ek__BackingField_50;
	// UnityEngine.GameObject[] DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::<Panels>k__BackingField
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___U3CPanelsU3Ek__BackingField_51;
	// UnityEngine.UI.Toggle[] DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::<Toggles>k__BackingField
	ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* ___U3CTogglesU3Ek__BackingField_52;

public:
	inline static int32_t get_offset_of_movementType_4() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___movementType_4)); }
	inline int32_t get_movementType_4() const { return ___movementType_4; }
	inline int32_t* get_address_of_movementType_4() { return &___movementType_4; }
	inline void set_movementType_4(int32_t value)
	{
		___movementType_4 = value;
	}

	inline static int32_t get_offset_of_movementAxis_5() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___movementAxis_5)); }
	inline int32_t get_movementAxis_5() const { return ___movementAxis_5; }
	inline int32_t* get_address_of_movementAxis_5() { return &___movementAxis_5; }
	inline void set_movementAxis_5(int32_t value)
	{
		___movementAxis_5 = value;
	}

	inline static int32_t get_offset_of_automaticallyLayout_6() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___automaticallyLayout_6)); }
	inline bool get_automaticallyLayout_6() const { return ___automaticallyLayout_6; }
	inline bool* get_address_of_automaticallyLayout_6() { return &___automaticallyLayout_6; }
	inline void set_automaticallyLayout_6(bool value)
	{
		___automaticallyLayout_6 = value;
	}

	inline static int32_t get_offset_of_sizeControl_7() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___sizeControl_7)); }
	inline int32_t get_sizeControl_7() const { return ___sizeControl_7; }
	inline int32_t* get_address_of_sizeControl_7() { return &___sizeControl_7; }
	inline void set_sizeControl_7(int32_t value)
	{
		___sizeControl_7 = value;
	}

	inline static int32_t get_offset_of_size_8() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___size_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_size_8() const { return ___size_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_size_8() { return &___size_8; }
	inline void set_size_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___size_8 = value;
	}

	inline static int32_t get_offset_of_automaticLayoutSpacing_9() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___automaticLayoutSpacing_9)); }
	inline float get_automaticLayoutSpacing_9() const { return ___automaticLayoutSpacing_9; }
	inline float* get_address_of_automaticLayoutSpacing_9() { return &___automaticLayoutSpacing_9; }
	inline void set_automaticLayoutSpacing_9(float value)
	{
		___automaticLayoutSpacing_9 = value;
	}

	inline static int32_t get_offset_of_leftMargin_10() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___leftMargin_10)); }
	inline float get_leftMargin_10() const { return ___leftMargin_10; }
	inline float* get_address_of_leftMargin_10() { return &___leftMargin_10; }
	inline void set_leftMargin_10(float value)
	{
		___leftMargin_10 = value;
	}

	inline static int32_t get_offset_of_rightMargin_11() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___rightMargin_11)); }
	inline float get_rightMargin_11() const { return ___rightMargin_11; }
	inline float* get_address_of_rightMargin_11() { return &___rightMargin_11; }
	inline void set_rightMargin_11(float value)
	{
		___rightMargin_11 = value;
	}

	inline static int32_t get_offset_of_topMargin_12() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___topMargin_12)); }
	inline float get_topMargin_12() const { return ___topMargin_12; }
	inline float* get_address_of_topMargin_12() { return &___topMargin_12; }
	inline void set_topMargin_12(float value)
	{
		___topMargin_12 = value;
	}

	inline static int32_t get_offset_of_bottomMargin_13() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___bottomMargin_13)); }
	inline float get_bottomMargin_13() const { return ___bottomMargin_13; }
	inline float* get_address_of_bottomMargin_13() { return &___bottomMargin_13; }
	inline void set_bottomMargin_13(float value)
	{
		___bottomMargin_13 = value;
	}

	inline static int32_t get_offset_of_infinitelyScroll_14() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___infinitelyScroll_14)); }
	inline bool get_infinitelyScroll_14() const { return ___infinitelyScroll_14; }
	inline bool* get_address_of_infinitelyScroll_14() { return &___infinitelyScroll_14; }
	inline void set_infinitelyScroll_14(bool value)
	{
		___infinitelyScroll_14 = value;
	}

	inline static int32_t get_offset_of_infiniteScrollingEndSpacing_15() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___infiniteScrollingEndSpacing_15)); }
	inline float get_infiniteScrollingEndSpacing_15() const { return ___infiniteScrollingEndSpacing_15; }
	inline float* get_address_of_infiniteScrollingEndSpacing_15() { return &___infiniteScrollingEndSpacing_15; }
	inline void set_infiniteScrollingEndSpacing_15(float value)
	{
		___infiniteScrollingEndSpacing_15 = value;
	}

	inline static int32_t get_offset_of_useOcclusionCulling_16() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___useOcclusionCulling_16)); }
	inline bool get_useOcclusionCulling_16() const { return ___useOcclusionCulling_16; }
	inline bool* get_address_of_useOcclusionCulling_16() { return &___useOcclusionCulling_16; }
	inline void set_useOcclusionCulling_16(bool value)
	{
		___useOcclusionCulling_16 = value;
	}

	inline static int32_t get_offset_of_startingPanel_17() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___startingPanel_17)); }
	inline int32_t get_startingPanel_17() const { return ___startingPanel_17; }
	inline int32_t* get_address_of_startingPanel_17() { return &___startingPanel_17; }
	inline void set_startingPanel_17(int32_t value)
	{
		___startingPanel_17 = value;
	}

	inline static int32_t get_offset_of_swipeGestures_18() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___swipeGestures_18)); }
	inline bool get_swipeGestures_18() const { return ___swipeGestures_18; }
	inline bool* get_address_of_swipeGestures_18() { return &___swipeGestures_18; }
	inline void set_swipeGestures_18(bool value)
	{
		___swipeGestures_18 = value;
	}

	inline static int32_t get_offset_of_minimumSwipeSpeed_19() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___minimumSwipeSpeed_19)); }
	inline float get_minimumSwipeSpeed_19() const { return ___minimumSwipeSpeed_19; }
	inline float* get_address_of_minimumSwipeSpeed_19() { return &___minimumSwipeSpeed_19; }
	inline void set_minimumSwipeSpeed_19(float value)
	{
		___minimumSwipeSpeed_19 = value;
	}

	inline static int32_t get_offset_of_previousButton_20() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___previousButton_20)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_previousButton_20() const { return ___previousButton_20; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_previousButton_20() { return &___previousButton_20; }
	inline void set_previousButton_20(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___previousButton_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousButton_20), (void*)value);
	}

	inline static int32_t get_offset_of_nextButton_21() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___nextButton_21)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_nextButton_21() const { return ___nextButton_21; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_nextButton_21() { return &___nextButton_21; }
	inline void set_nextButton_21(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___nextButton_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextButton_21), (void*)value);
	}

	inline static int32_t get_offset_of_pagination_22() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___pagination_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pagination_22() const { return ___pagination_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pagination_22() { return &___pagination_22; }
	inline void set_pagination_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pagination_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pagination_22), (void*)value);
	}

	inline static int32_t get_offset_of_toggleNavigation_23() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___toggleNavigation_23)); }
	inline bool get_toggleNavigation_23() const { return ___toggleNavigation_23; }
	inline bool* get_address_of_toggleNavigation_23() { return &___toggleNavigation_23; }
	inline void set_toggleNavigation_23(bool value)
	{
		___toggleNavigation_23 = value;
	}

	inline static int32_t get_offset_of_snapTarget_24() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___snapTarget_24)); }
	inline int32_t get_snapTarget_24() const { return ___snapTarget_24; }
	inline int32_t* get_address_of_snapTarget_24() { return &___snapTarget_24; }
	inline void set_snapTarget_24(int32_t value)
	{
		___snapTarget_24 = value;
	}

	inline static int32_t get_offset_of_snappingSpeed_25() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___snappingSpeed_25)); }
	inline float get_snappingSpeed_25() const { return ___snappingSpeed_25; }
	inline float* get_address_of_snappingSpeed_25() { return &___snappingSpeed_25; }
	inline void set_snappingSpeed_25(float value)
	{
		___snappingSpeed_25 = value;
	}

	inline static int32_t get_offset_of_thresholdSnappingSpeed_26() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___thresholdSnappingSpeed_26)); }
	inline float get_thresholdSnappingSpeed_26() const { return ___thresholdSnappingSpeed_26; }
	inline float* get_address_of_thresholdSnappingSpeed_26() { return &___thresholdSnappingSpeed_26; }
	inline void set_thresholdSnappingSpeed_26(float value)
	{
		___thresholdSnappingSpeed_26 = value;
	}

	inline static int32_t get_offset_of_hardSnap_27() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___hardSnap_27)); }
	inline bool get_hardSnap_27() const { return ___hardSnap_27; }
	inline bool* get_address_of_hardSnap_27() { return &___hardSnap_27; }
	inline void set_hardSnap_27(bool value)
	{
		___hardSnap_27 = value;
	}

	inline static int32_t get_offset_of_useUnscaledTime_28() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___useUnscaledTime_28)); }
	inline bool get_useUnscaledTime_28() const { return ___useUnscaledTime_28; }
	inline bool* get_address_of_useUnscaledTime_28() { return &___useUnscaledTime_28; }
	inline void set_useUnscaledTime_28(bool value)
	{
		___useUnscaledTime_28 = value;
	}

	inline static int32_t get_offset_of_onPanelChanged_29() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___onPanelChanged_29)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onPanelChanged_29() const { return ___onPanelChanged_29; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onPanelChanged_29() { return &___onPanelChanged_29; }
	inline void set_onPanelChanged_29(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onPanelChanged_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPanelChanged_29), (void*)value);
	}

	inline static int32_t get_offset_of_onPanelSelecting_30() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___onPanelSelecting_30)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onPanelSelecting_30() const { return ___onPanelSelecting_30; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onPanelSelecting_30() { return &___onPanelSelecting_30; }
	inline void set_onPanelSelecting_30(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onPanelSelecting_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPanelSelecting_30), (void*)value);
	}

	inline static int32_t get_offset_of_onPanelSelected_31() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___onPanelSelected_31)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onPanelSelected_31() const { return ___onPanelSelected_31; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onPanelSelected_31() { return &___onPanelSelected_31; }
	inline void set_onPanelSelected_31(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onPanelSelected_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPanelSelected_31), (void*)value);
	}

	inline static int32_t get_offset_of_onPanelChanging_32() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___onPanelChanging_32)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onPanelChanging_32() const { return ___onPanelChanging_32; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onPanelChanging_32() { return &___onPanelChanging_32; }
	inline void set_onPanelChanging_32(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onPanelChanging_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPanelChanging_32), (void*)value);
	}

	inline static int32_t get_offset_of_transitionEffects_33() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___transitionEffects_33)); }
	inline List_1_t458D63D243891843DA4B6612E427915103F7CB7C * get_transitionEffects_33() const { return ___transitionEffects_33; }
	inline List_1_t458D63D243891843DA4B6612E427915103F7CB7C ** get_address_of_transitionEffects_33() { return &___transitionEffects_33; }
	inline void set_transitionEffects_33(List_1_t458D63D243891843DA4B6612E427915103F7CB7C * value)
	{
		___transitionEffects_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transitionEffects_33), (void*)value);
	}

	inline static int32_t get_offset_of_dragging_34() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___dragging_34)); }
	inline bool get_dragging_34() const { return ___dragging_34; }
	inline bool* get_address_of_dragging_34() { return &___dragging_34; }
	inline void set_dragging_34(bool value)
	{
		___dragging_34 = value;
	}

	inline static int32_t get_offset_of_selected_35() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___selected_35)); }
	inline bool get_selected_35() const { return ___selected_35; }
	inline bool* get_address_of_selected_35() { return &___selected_35; }
	inline void set_selected_35(bool value)
	{
		___selected_35 = value;
	}

	inline static int32_t get_offset_of_pressing_36() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___pressing_36)); }
	inline bool get_pressing_36() const { return ___pressing_36; }
	inline bool* get_address_of_pressing_36() { return &___pressing_36; }
	inline void set_pressing_36(bool value)
	{
		___pressing_36 = value;
	}

	inline static int32_t get_offset_of_releaseSpeed_37() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___releaseSpeed_37)); }
	inline float get_releaseSpeed_37() const { return ___releaseSpeed_37; }
	inline float* get_address_of_releaseSpeed_37() { return &___releaseSpeed_37; }
	inline void set_releaseSpeed_37(float value)
	{
		___releaseSpeed_37 = value;
	}

	inline static int32_t get_offset_of_contentLength_38() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___contentLength_38)); }
	inline float get_contentLength_38() const { return ___contentLength_38; }
	inline float* get_address_of_contentLength_38() { return &___contentLength_38; }
	inline void set_contentLength_38(float value)
	{
		___contentLength_38 = value;
	}

	inline static int32_t get_offset_of_releaseDirection_39() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___releaseDirection_39)); }
	inline int32_t get_releaseDirection_39() const { return ___releaseDirection_39; }
	inline int32_t* get_address_of_releaseDirection_39() { return &___releaseDirection_39; }
	inline void set_releaseDirection_39(int32_t value)
	{
		___releaseDirection_39 = value;
	}

	inline static int32_t get_offset_of_canvas_40() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___canvas_40)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_canvas_40() const { return ___canvas_40; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_canvas_40() { return &___canvas_40; }
	inline void set_canvas_40(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___canvas_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_40), (void*)value);
	}

	inline static int32_t get_offset_of_canvasRectTransform_41() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___canvasRectTransform_41)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_canvasRectTransform_41() const { return ___canvasRectTransform_41; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_canvasRectTransform_41() { return &___canvasRectTransform_41; }
	inline void set_canvasRectTransform_41(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___canvasRectTransform_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvasRectTransform_41), (void*)value);
	}

	inline static int32_t get_offset_of_canvasScaler_42() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___canvasScaler_42)); }
	inline CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1 * get_canvasScaler_42() const { return ___canvasScaler_42; }
	inline CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1 ** get_address_of_canvasScaler_42() { return &___canvasScaler_42; }
	inline void set_canvasScaler_42(CanvasScaler_t8EF50255FD2913C31BD62B14476C994F64D711F1 * value)
	{
		___canvasScaler_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvasScaler_42), (void*)value);
	}

	inline static int32_t get_offset_of_scrollRect_43() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___scrollRect_43)); }
	inline ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * get_scrollRect_43() const { return ___scrollRect_43; }
	inline ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA ** get_address_of_scrollRect_43() { return &___scrollRect_43; }
	inline void set_scrollRect_43(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * value)
	{
		___scrollRect_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scrollRect_43), (void*)value);
	}

	inline static int32_t get_offset_of_previousContentAnchoredPosition_44() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___previousContentAnchoredPosition_44)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_previousContentAnchoredPosition_44() const { return ___previousContentAnchoredPosition_44; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_previousContentAnchoredPosition_44() { return &___previousContentAnchoredPosition_44; }
	inline void set_previousContentAnchoredPosition_44(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___previousContentAnchoredPosition_44 = value;
	}

	inline static int32_t get_offset_of_velocity_45() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___velocity_45)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_velocity_45() const { return ___velocity_45; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_velocity_45() { return &___velocity_45; }
	inline void set_velocity_45(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___velocity_45 = value;
	}

	inline static int32_t get_offset_of_panelGraphics_46() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___panelGraphics_46)); }
	inline Dictionary_2_tEC74ABC77DE2191EAA2A4EB5A912338BE92BE07B * get_panelGraphics_46() const { return ___panelGraphics_46; }
	inline Dictionary_2_tEC74ABC77DE2191EAA2A4EB5A912338BE92BE07B ** get_address_of_panelGraphics_46() { return &___panelGraphics_46; }
	inline void set_panelGraphics_46(Dictionary_2_tEC74ABC77DE2191EAA2A4EB5A912338BE92BE07B * value)
	{
		___panelGraphics_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panelGraphics_46), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentPanelU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___U3CCurrentPanelU3Ek__BackingField_47)); }
	inline int32_t get_U3CCurrentPanelU3Ek__BackingField_47() const { return ___U3CCurrentPanelU3Ek__BackingField_47; }
	inline int32_t* get_address_of_U3CCurrentPanelU3Ek__BackingField_47() { return &___U3CCurrentPanelU3Ek__BackingField_47; }
	inline void set_U3CCurrentPanelU3Ek__BackingField_47(int32_t value)
	{
		___U3CCurrentPanelU3Ek__BackingField_47 = value;
	}

	inline static int32_t get_offset_of_U3CTargetPanelU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___U3CTargetPanelU3Ek__BackingField_48)); }
	inline int32_t get_U3CTargetPanelU3Ek__BackingField_48() const { return ___U3CTargetPanelU3Ek__BackingField_48; }
	inline int32_t* get_address_of_U3CTargetPanelU3Ek__BackingField_48() { return &___U3CTargetPanelU3Ek__BackingField_48; }
	inline void set_U3CTargetPanelU3Ek__BackingField_48(int32_t value)
	{
		___U3CTargetPanelU3Ek__BackingField_48 = value;
	}

	inline static int32_t get_offset_of_U3CNearestPanelU3Ek__BackingField_49() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___U3CNearestPanelU3Ek__BackingField_49)); }
	inline int32_t get_U3CNearestPanelU3Ek__BackingField_49() const { return ___U3CNearestPanelU3Ek__BackingField_49; }
	inline int32_t* get_address_of_U3CNearestPanelU3Ek__BackingField_49() { return &___U3CNearestPanelU3Ek__BackingField_49; }
	inline void set_U3CNearestPanelU3Ek__BackingField_49(int32_t value)
	{
		___U3CNearestPanelU3Ek__BackingField_49 = value;
	}

	inline static int32_t get_offset_of_U3CPanelsRTU3Ek__BackingField_50() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___U3CPanelsRTU3Ek__BackingField_50)); }
	inline RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* get_U3CPanelsRTU3Ek__BackingField_50() const { return ___U3CPanelsRTU3Ek__BackingField_50; }
	inline RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5** get_address_of_U3CPanelsRTU3Ek__BackingField_50() { return &___U3CPanelsRTU3Ek__BackingField_50; }
	inline void set_U3CPanelsRTU3Ek__BackingField_50(RectTransformU5BU5D_tA38C18F6D88709B30F107C43E0669847172879D5* value)
	{
		___U3CPanelsRTU3Ek__BackingField_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPanelsRTU3Ek__BackingField_50), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPanelsU3Ek__BackingField_51() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___U3CPanelsU3Ek__BackingField_51)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_U3CPanelsU3Ek__BackingField_51() const { return ___U3CPanelsU3Ek__BackingField_51; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_U3CPanelsU3Ek__BackingField_51() { return &___U3CPanelsU3Ek__BackingField_51; }
	inline void set_U3CPanelsU3Ek__BackingField_51(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___U3CPanelsU3Ek__BackingField_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPanelsU3Ek__BackingField_51), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTogglesU3Ek__BackingField_52() { return static_cast<int32_t>(offsetof(SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257, ___U3CTogglesU3Ek__BackingField_52)); }
	inline ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* get_U3CTogglesU3Ek__BackingField_52() const { return ___U3CTogglesU3Ek__BackingField_52; }
	inline ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF** get_address_of_U3CTogglesU3Ek__BackingField_52() { return &___U3CTogglesU3Ek__BackingField_52; }
	inline void set_U3CTogglesU3Ek__BackingField_52(ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* value)
	{
		___U3CTogglesU3Ek__BackingField_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTogglesU3Ek__BackingField_52), (void*)value);
	}
};


// DevionGames.UIWidgets.Spinner
struct Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single DevionGames.UIWidgets.Spinner::changeDelay
	float ___changeDelay_4;
	// System.Single DevionGames.UIWidgets.Spinner::m_Current
	float ___m_Current_5;
	// System.Single DevionGames.UIWidgets.Spinner::step
	float ___step_6;
	// System.Single DevionGames.UIWidgets.Spinner::min
	float ___min_7;
	// System.Single DevionGames.UIWidgets.Spinner::max
	float ___max_8;
	// DevionGames.UIWidgets.Spinner/SpinnerEvent DevionGames.UIWidgets.Spinner::onChange
	SpinnerEvent_tA26213AF983D08EC23570344A216BDD9450D540E * ___onChange_9;
	// DevionGames.UIWidgets.Spinner/SpinnerTextEvent DevionGames.UIWidgets.Spinner::m_OnChange
	SpinnerTextEvent_tBD023BBE00BF8572757F8246043BC278C9EB6EF8 * ___m_OnChange_10;
	// System.Collections.IEnumerator DevionGames.UIWidgets.Spinner::coroutine
	RuntimeObject* ___coroutine_11;

public:
	inline static int32_t get_offset_of_changeDelay_4() { return static_cast<int32_t>(offsetof(Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A, ___changeDelay_4)); }
	inline float get_changeDelay_4() const { return ___changeDelay_4; }
	inline float* get_address_of_changeDelay_4() { return &___changeDelay_4; }
	inline void set_changeDelay_4(float value)
	{
		___changeDelay_4 = value;
	}

	inline static int32_t get_offset_of_m_Current_5() { return static_cast<int32_t>(offsetof(Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A, ___m_Current_5)); }
	inline float get_m_Current_5() const { return ___m_Current_5; }
	inline float* get_address_of_m_Current_5() { return &___m_Current_5; }
	inline void set_m_Current_5(float value)
	{
		___m_Current_5 = value;
	}

	inline static int32_t get_offset_of_step_6() { return static_cast<int32_t>(offsetof(Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A, ___step_6)); }
	inline float get_step_6() const { return ___step_6; }
	inline float* get_address_of_step_6() { return &___step_6; }
	inline void set_step_6(float value)
	{
		___step_6 = value;
	}

	inline static int32_t get_offset_of_min_7() { return static_cast<int32_t>(offsetof(Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A, ___min_7)); }
	inline float get_min_7() const { return ___min_7; }
	inline float* get_address_of_min_7() { return &___min_7; }
	inline void set_min_7(float value)
	{
		___min_7 = value;
	}

	inline static int32_t get_offset_of_max_8() { return static_cast<int32_t>(offsetof(Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A, ___max_8)); }
	inline float get_max_8() const { return ___max_8; }
	inline float* get_address_of_max_8() { return &___max_8; }
	inline void set_max_8(float value)
	{
		___max_8 = value;
	}

	inline static int32_t get_offset_of_onChange_9() { return static_cast<int32_t>(offsetof(Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A, ___onChange_9)); }
	inline SpinnerEvent_tA26213AF983D08EC23570344A216BDD9450D540E * get_onChange_9() const { return ___onChange_9; }
	inline SpinnerEvent_tA26213AF983D08EC23570344A216BDD9450D540E ** get_address_of_onChange_9() { return &___onChange_9; }
	inline void set_onChange_9(SpinnerEvent_tA26213AF983D08EC23570344A216BDD9450D540E * value)
	{
		___onChange_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onChange_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnChange_10() { return static_cast<int32_t>(offsetof(Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A, ___m_OnChange_10)); }
	inline SpinnerTextEvent_tBD023BBE00BF8572757F8246043BC278C9EB6EF8 * get_m_OnChange_10() const { return ___m_OnChange_10; }
	inline SpinnerTextEvent_tBD023BBE00BF8572757F8246043BC278C9EB6EF8 ** get_address_of_m_OnChange_10() { return &___m_OnChange_10; }
	inline void set_m_OnChange_10(SpinnerTextEvent_tBD023BBE00BF8572757F8246043BC278C9EB6EF8 * value)
	{
		___m_OnChange_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnChange_10), (void*)value);
	}

	inline static int32_t get_offset_of_coroutine_11() { return static_cast<int32_t>(offsetof(Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A, ___coroutine_11)); }
	inline RuntimeObject* get_coroutine_11() const { return ___coroutine_11; }
	inline RuntimeObject** get_address_of_coroutine_11() { return &___coroutine_11; }
	inline void set_coroutine_11(RuntimeObject* value)
	{
		___coroutine_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coroutine_11), (void*)value);
	}
};


// DevionGames.UIWidgets.TooltipTrigger
struct TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String DevionGames.UIWidgets.TooltipTrigger::instanceName
	String_t* ___instanceName_4;
	// System.Boolean DevionGames.UIWidgets.TooltipTrigger::showBackground
	bool ___showBackground_5;
	// System.Single DevionGames.UIWidgets.TooltipTrigger::width
	float ___width_6;
	// UnityEngine.Color DevionGames.UIWidgets.TooltipTrigger::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_7;
	// System.String DevionGames.UIWidgets.TooltipTrigger::tooltipTitle
	String_t* ___tooltipTitle_8;
	// System.String DevionGames.UIWidgets.TooltipTrigger::tooltip
	String_t* ___tooltip_9;
	// UnityEngine.Sprite DevionGames.UIWidgets.TooltipTrigger::icon
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___icon_10;
	// DevionGames.UIWidgets.TooltipTrigger/StringPair[] DevionGames.UIWidgets.TooltipTrigger::properties
	StringPairU5BU5D_t0B11877F1405DB017D087FE1D23017C1AC1463AC* ___properties_11;
	// DevionGames.UIWidgets.Tooltip DevionGames.UIWidgets.TooltipTrigger::instance
	Tooltip_t4189AB3769FB49D03A96EFE511A956E3884B7F58 * ___instance_12;
	// UnityEngine.Coroutine DevionGames.UIWidgets.TooltipTrigger::m_DelayTooltipCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DelayTooltipCoroutine_13;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> DevionGames.UIWidgets.TooltipTrigger::m_PropertyPairs
	List_1_t2E0A11B5F89515389093E72BC4B6064918E20E62 * ___m_PropertyPairs_14;

public:
	inline static int32_t get_offset_of_instanceName_4() { return static_cast<int32_t>(offsetof(TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250, ___instanceName_4)); }
	inline String_t* get_instanceName_4() const { return ___instanceName_4; }
	inline String_t** get_address_of_instanceName_4() { return &___instanceName_4; }
	inline void set_instanceName_4(String_t* value)
	{
		___instanceName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instanceName_4), (void*)value);
	}

	inline static int32_t get_offset_of_showBackground_5() { return static_cast<int32_t>(offsetof(TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250, ___showBackground_5)); }
	inline bool get_showBackground_5() const { return ___showBackground_5; }
	inline bool* get_address_of_showBackground_5() { return &___showBackground_5; }
	inline void set_showBackground_5(bool value)
	{
		___showBackground_5 = value;
	}

	inline static int32_t get_offset_of_width_6() { return static_cast<int32_t>(offsetof(TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250, ___width_6)); }
	inline float get_width_6() const { return ___width_6; }
	inline float* get_address_of_width_6() { return &___width_6; }
	inline void set_width_6(float value)
	{
		___width_6 = value;
	}

	inline static int32_t get_offset_of_color_7() { return static_cast<int32_t>(offsetof(TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250, ___color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_7() const { return ___color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_7() { return &___color_7; }
	inline void set_color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_7 = value;
	}

	inline static int32_t get_offset_of_tooltipTitle_8() { return static_cast<int32_t>(offsetof(TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250, ___tooltipTitle_8)); }
	inline String_t* get_tooltipTitle_8() const { return ___tooltipTitle_8; }
	inline String_t** get_address_of_tooltipTitle_8() { return &___tooltipTitle_8; }
	inline void set_tooltipTitle_8(String_t* value)
	{
		___tooltipTitle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tooltipTitle_8), (void*)value);
	}

	inline static int32_t get_offset_of_tooltip_9() { return static_cast<int32_t>(offsetof(TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250, ___tooltip_9)); }
	inline String_t* get_tooltip_9() const { return ___tooltip_9; }
	inline String_t** get_address_of_tooltip_9() { return &___tooltip_9; }
	inline void set_tooltip_9(String_t* value)
	{
		___tooltip_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tooltip_9), (void*)value);
	}

	inline static int32_t get_offset_of_icon_10() { return static_cast<int32_t>(offsetof(TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250, ___icon_10)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_icon_10() const { return ___icon_10; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_icon_10() { return &___icon_10; }
	inline void set_icon_10(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___icon_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___icon_10), (void*)value);
	}

	inline static int32_t get_offset_of_properties_11() { return static_cast<int32_t>(offsetof(TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250, ___properties_11)); }
	inline StringPairU5BU5D_t0B11877F1405DB017D087FE1D23017C1AC1463AC* get_properties_11() const { return ___properties_11; }
	inline StringPairU5BU5D_t0B11877F1405DB017D087FE1D23017C1AC1463AC** get_address_of_properties_11() { return &___properties_11; }
	inline void set_properties_11(StringPairU5BU5D_t0B11877F1405DB017D087FE1D23017C1AC1463AC* value)
	{
		___properties_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___properties_11), (void*)value);
	}

	inline static int32_t get_offset_of_instance_12() { return static_cast<int32_t>(offsetof(TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250, ___instance_12)); }
	inline Tooltip_t4189AB3769FB49D03A96EFE511A956E3884B7F58 * get_instance_12() const { return ___instance_12; }
	inline Tooltip_t4189AB3769FB49D03A96EFE511A956E3884B7F58 ** get_address_of_instance_12() { return &___instance_12; }
	inline void set_instance_12(Tooltip_t4189AB3769FB49D03A96EFE511A956E3884B7F58 * value)
	{
		___instance_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_DelayTooltipCoroutine_13() { return static_cast<int32_t>(offsetof(TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250, ___m_DelayTooltipCoroutine_13)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DelayTooltipCoroutine_13() const { return ___m_DelayTooltipCoroutine_13; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DelayTooltipCoroutine_13() { return &___m_DelayTooltipCoroutine_13; }
	inline void set_m_DelayTooltipCoroutine_13(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DelayTooltipCoroutine_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelayTooltipCoroutine_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_PropertyPairs_14() { return static_cast<int32_t>(offsetof(TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250, ___m_PropertyPairs_14)); }
	inline List_1_t2E0A11B5F89515389093E72BC4B6064918E20E62 * get_m_PropertyPairs_14() const { return ___m_PropertyPairs_14; }
	inline List_1_t2E0A11B5F89515389093E72BC4B6064918E20E62 ** get_address_of_m_PropertyPairs_14() { return &___m_PropertyPairs_14; }
	inline void set_m_PropertyPairs_14(List_1_t2E0A11B5F89515389093E72BC4B6064918E20E62 * value)
	{
		___m_PropertyPairs_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PropertyPairs_14), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Water2D.Water2D_Spawner
struct Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform Water2D.Water2D_Spawner::contentTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___contentTransform_4;
	// UnityEngine.GameObject[] Water2D.Water2D_Spawner::WaterDropsObjects
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___WaterDropsObjects_5;
	// System.Single Water2D.Water2D_Spawner::size
	float ___size_6;
	// System.Single Water2D.Water2D_Spawner::LifeTime
	float ___LifeTime_7;
	// System.Boolean Water2D.Water2D_Spawner::InfiniteLife
	bool ___InfiniteLife_8;
	// System.Single Water2D.Water2D_Spawner::DelayBetweenParticles
	float ___DelayBetweenParticles_9;
	// UnityEngine.Material Water2D.Water2D_Spawner::WaterMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___WaterMaterial_10;
	// UnityEngine.Color Water2D.Water2D_Spawner::FillColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___FillColor_11;
	// UnityEngine.Color Water2D.Water2D_Spawner::StrokeColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___StrokeColor_12;
	// UnityEngine.Vector2 Water2D.Water2D_Spawner::initSpeed
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___initSpeed_13;
	// System.Boolean Water2D.Water2D_Spawner::DynamicChanges
	bool ___DynamicChanges_14;
	// System.Boolean Water2D.Water2D_Spawner::btn_0
	bool ___btn_0_15;
	// System.Boolean Water2D.Water2D_Spawner::btn_1
	bool ___btn_1_16;
	// System.Boolean Water2D.Water2D_Spawner::btn_2
	bool ___btn_2_17;
	// System.Boolean Water2D.Water2D_Spawner::btn
	bool ___btn_18;
	// System.Boolean Water2D.Water2D_Spawner::_dynamic
	bool ____dynamic_19;
	// System.Boolean Water2D.Water2D_Spawner::alreadySpawned
	bool ___alreadySpawned_20;
	// System.Int32 Water2D.Water2D_Spawner::<AllBallsCount>k__BackingField
	int32_t ___U3CAllBallsCountU3Ek__BackingField_21;
	// System.Boolean Water2D.Water2D_Spawner::<IsWaterInScene>k__BackingField
	bool ___U3CIsWaterInSceneU3Ek__BackingField_22;
	// System.Int32 Water2D.Water2D_Spawner::usableDropsCount
	int32_t ___usableDropsCount_23;
	// System.Int32 Water2D.Water2D_Spawner::DefaultCount
	int32_t ___DefaultCount_24;
	// System.Collections.Generic.List`1<Water2D.microSpawn> Water2D.Water2D_Spawner::microSpawns
	List_1_t4639AF81C95F55F41008D2F43A3D15291C216931 * ___microSpawns_25;
	// System.Boolean Water2D.Water2D_Spawner::_breakLoop
	bool ____breakLoop_26;
	// UnityEngine.GameObject Water2D.Water2D_Spawner::_parent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____parent_27;
	// UnityEngine.Vector2 Water2D.Water2D_Spawner::MinPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___MinPosition_28;
	// UnityEngine.Vector2 Water2D.Water2D_Spawner::MaxPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___MaxPosition_29;
	// UnityEngine.GameObject Water2D.Water2D_Spawner::dropPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___dropPrefab_30;

public:
	inline static int32_t get_offset_of_contentTransform_4() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ___contentTransform_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_contentTransform_4() const { return ___contentTransform_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_contentTransform_4() { return &___contentTransform_4; }
	inline void set_contentTransform_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___contentTransform_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contentTransform_4), (void*)value);
	}

	inline static int32_t get_offset_of_WaterDropsObjects_5() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ___WaterDropsObjects_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_WaterDropsObjects_5() const { return ___WaterDropsObjects_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_WaterDropsObjects_5() { return &___WaterDropsObjects_5; }
	inline void set_WaterDropsObjects_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___WaterDropsObjects_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WaterDropsObjects_5), (void*)value);
	}

	inline static int32_t get_offset_of_size_6() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ___size_6)); }
	inline float get_size_6() const { return ___size_6; }
	inline float* get_address_of_size_6() { return &___size_6; }
	inline void set_size_6(float value)
	{
		___size_6 = value;
	}

	inline static int32_t get_offset_of_LifeTime_7() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ___LifeTime_7)); }
	inline float get_LifeTime_7() const { return ___LifeTime_7; }
	inline float* get_address_of_LifeTime_7() { return &___LifeTime_7; }
	inline void set_LifeTime_7(float value)
	{
		___LifeTime_7 = value;
	}

	inline static int32_t get_offset_of_InfiniteLife_8() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ___InfiniteLife_8)); }
	inline bool get_InfiniteLife_8() const { return ___InfiniteLife_8; }
	inline bool* get_address_of_InfiniteLife_8() { return &___InfiniteLife_8; }
	inline void set_InfiniteLife_8(bool value)
	{
		___InfiniteLife_8 = value;
	}

	inline static int32_t get_offset_of_DelayBetweenParticles_9() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ___DelayBetweenParticles_9)); }
	inline float get_DelayBetweenParticles_9() const { return ___DelayBetweenParticles_9; }
	inline float* get_address_of_DelayBetweenParticles_9() { return &___DelayBetweenParticles_9; }
	inline void set_DelayBetweenParticles_9(float value)
	{
		___DelayBetweenParticles_9 = value;
	}

	inline static int32_t get_offset_of_WaterMaterial_10() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ___WaterMaterial_10)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_WaterMaterial_10() const { return ___WaterMaterial_10; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_WaterMaterial_10() { return &___WaterMaterial_10; }
	inline void set_WaterMaterial_10(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___WaterMaterial_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WaterMaterial_10), (void*)value);
	}

	inline static int32_t get_offset_of_FillColor_11() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ___FillColor_11)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_FillColor_11() const { return ___FillColor_11; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_FillColor_11() { return &___FillColor_11; }
	inline void set_FillColor_11(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___FillColor_11 = value;
	}

	inline static int32_t get_offset_of_StrokeColor_12() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ___StrokeColor_12)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_StrokeColor_12() const { return ___StrokeColor_12; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_StrokeColor_12() { return &___StrokeColor_12; }
	inline void set_StrokeColor_12(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___StrokeColor_12 = value;
	}

	inline static int32_t get_offset_of_initSpeed_13() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ___initSpeed_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_initSpeed_13() const { return ___initSpeed_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_initSpeed_13() { return &___initSpeed_13; }
	inline void set_initSpeed_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___initSpeed_13 = value;
	}

	inline static int32_t get_offset_of_DynamicChanges_14() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ___DynamicChanges_14)); }
	inline bool get_DynamicChanges_14() const { return ___DynamicChanges_14; }
	inline bool* get_address_of_DynamicChanges_14() { return &___DynamicChanges_14; }
	inline void set_DynamicChanges_14(bool value)
	{
		___DynamicChanges_14 = value;
	}

	inline static int32_t get_offset_of_btn_0_15() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ___btn_0_15)); }
	inline bool get_btn_0_15() const { return ___btn_0_15; }
	inline bool* get_address_of_btn_0_15() { return &___btn_0_15; }
	inline void set_btn_0_15(bool value)
	{
		___btn_0_15 = value;
	}

	inline static int32_t get_offset_of_btn_1_16() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ___btn_1_16)); }
	inline bool get_btn_1_16() const { return ___btn_1_16; }
	inline bool* get_address_of_btn_1_16() { return &___btn_1_16; }
	inline void set_btn_1_16(bool value)
	{
		___btn_1_16 = value;
	}

	inline static int32_t get_offset_of_btn_2_17() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ___btn_2_17)); }
	inline bool get_btn_2_17() const { return ___btn_2_17; }
	inline bool* get_address_of_btn_2_17() { return &___btn_2_17; }
	inline void set_btn_2_17(bool value)
	{
		___btn_2_17 = value;
	}

	inline static int32_t get_offset_of_btn_18() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ___btn_18)); }
	inline bool get_btn_18() const { return ___btn_18; }
	inline bool* get_address_of_btn_18() { return &___btn_18; }
	inline void set_btn_18(bool value)
	{
		___btn_18 = value;
	}

	inline static int32_t get_offset_of__dynamic_19() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ____dynamic_19)); }
	inline bool get__dynamic_19() const { return ____dynamic_19; }
	inline bool* get_address_of__dynamic_19() { return &____dynamic_19; }
	inline void set__dynamic_19(bool value)
	{
		____dynamic_19 = value;
	}

	inline static int32_t get_offset_of_alreadySpawned_20() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ___alreadySpawned_20)); }
	inline bool get_alreadySpawned_20() const { return ___alreadySpawned_20; }
	inline bool* get_address_of_alreadySpawned_20() { return &___alreadySpawned_20; }
	inline void set_alreadySpawned_20(bool value)
	{
		___alreadySpawned_20 = value;
	}

	inline static int32_t get_offset_of_U3CAllBallsCountU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ___U3CAllBallsCountU3Ek__BackingField_21)); }
	inline int32_t get_U3CAllBallsCountU3Ek__BackingField_21() const { return ___U3CAllBallsCountU3Ek__BackingField_21; }
	inline int32_t* get_address_of_U3CAllBallsCountU3Ek__BackingField_21() { return &___U3CAllBallsCountU3Ek__BackingField_21; }
	inline void set_U3CAllBallsCountU3Ek__BackingField_21(int32_t value)
	{
		___U3CAllBallsCountU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CIsWaterInSceneU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ___U3CIsWaterInSceneU3Ek__BackingField_22)); }
	inline bool get_U3CIsWaterInSceneU3Ek__BackingField_22() const { return ___U3CIsWaterInSceneU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CIsWaterInSceneU3Ek__BackingField_22() { return &___U3CIsWaterInSceneU3Ek__BackingField_22; }
	inline void set_U3CIsWaterInSceneU3Ek__BackingField_22(bool value)
	{
		___U3CIsWaterInSceneU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_usableDropsCount_23() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ___usableDropsCount_23)); }
	inline int32_t get_usableDropsCount_23() const { return ___usableDropsCount_23; }
	inline int32_t* get_address_of_usableDropsCount_23() { return &___usableDropsCount_23; }
	inline void set_usableDropsCount_23(int32_t value)
	{
		___usableDropsCount_23 = value;
	}

	inline static int32_t get_offset_of_DefaultCount_24() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ___DefaultCount_24)); }
	inline int32_t get_DefaultCount_24() const { return ___DefaultCount_24; }
	inline int32_t* get_address_of_DefaultCount_24() { return &___DefaultCount_24; }
	inline void set_DefaultCount_24(int32_t value)
	{
		___DefaultCount_24 = value;
	}

	inline static int32_t get_offset_of_microSpawns_25() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ___microSpawns_25)); }
	inline List_1_t4639AF81C95F55F41008D2F43A3D15291C216931 * get_microSpawns_25() const { return ___microSpawns_25; }
	inline List_1_t4639AF81C95F55F41008D2F43A3D15291C216931 ** get_address_of_microSpawns_25() { return &___microSpawns_25; }
	inline void set_microSpawns_25(List_1_t4639AF81C95F55F41008D2F43A3D15291C216931 * value)
	{
		___microSpawns_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___microSpawns_25), (void*)value);
	}

	inline static int32_t get_offset_of__breakLoop_26() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ____breakLoop_26)); }
	inline bool get__breakLoop_26() const { return ____breakLoop_26; }
	inline bool* get_address_of__breakLoop_26() { return &____breakLoop_26; }
	inline void set__breakLoop_26(bool value)
	{
		____breakLoop_26 = value;
	}

	inline static int32_t get_offset_of__parent_27() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ____parent_27)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__parent_27() const { return ____parent_27; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__parent_27() { return &____parent_27; }
	inline void set__parent_27(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____parent_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_27), (void*)value);
	}

	inline static int32_t get_offset_of_MinPosition_28() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ___MinPosition_28)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_MinPosition_28() const { return ___MinPosition_28; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_MinPosition_28() { return &___MinPosition_28; }
	inline void set_MinPosition_28(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___MinPosition_28 = value;
	}

	inline static int32_t get_offset_of_MaxPosition_29() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ___MaxPosition_29)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_MaxPosition_29() const { return ___MaxPosition_29; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_MaxPosition_29() { return &___MaxPosition_29; }
	inline void set_MaxPosition_29(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___MaxPosition_29 = value;
	}

	inline static int32_t get_offset_of_dropPrefab_30() { return static_cast<int32_t>(offsetof(Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C, ___dropPrefab_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_dropPrefab_30() const { return ___dropPrefab_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_dropPrefab_30() { return &___dropPrefab_30; }
	inline void set_dropPrefab_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___dropPrefab_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dropPrefab_30), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// DevionGames.UIWidgets.UIWidget
struct UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229  : public CallbackHandler_t5024E3525A6B28D3DF7B3ECE316C1CD8ECC3A6E6
{
public:
	// System.String DevionGames.UIWidgets.UIWidget::name
	String_t* ___name_5;
	// System.Int32 DevionGames.UIWidgets.UIWidget::priority
	int32_t ___priority_6;
	// UnityEngine.KeyCode DevionGames.UIWidgets.UIWidget::m_KeyCode
	int32_t ___m_KeyCode_7;
	// DevionGames.UIWidgets.EasingEquations/EaseType DevionGames.UIWidgets.UIWidget::m_EaseType
	int32_t ___m_EaseType_8;
	// System.Single DevionGames.UIWidgets.UIWidget::m_Duration
	float ___m_Duration_9;
	// UnityEngine.AudioClip DevionGames.UIWidgets.UIWidget::showSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___showSound_10;
	// UnityEngine.AudioClip DevionGames.UIWidgets.UIWidget::closeSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___closeSound_11;
	// System.Boolean DevionGames.UIWidgets.UIWidget::m_Focus
	bool ___m_Focus_12;
	// System.Boolean DevionGames.UIWidgets.UIWidget::m_DeactivateOnClose
	bool ___m_DeactivateOnClose_13;
	// DevionGames.UIWidgets.UIWidget/WidgetEvent DevionGames.UIWidgets.UIWidget::onShow
	WidgetEvent_tB4620AD81E6501F79A226F2B03C5B6660F007F2E * ___onShow_14;
	// DevionGames.UIWidgets.UIWidget/WidgetEvent DevionGames.UIWidgets.UIWidget::onClose
	WidgetEvent_tB4620AD81E6501F79A226F2B03C5B6660F007F2E * ___onClose_15;
	// UnityEngine.RectTransform DevionGames.UIWidgets.UIWidget::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_16;
	// UnityEngine.CanvasGroup DevionGames.UIWidgets.UIWidget::m_CanvasGroup
	CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___m_CanvasGroup_17;
	// DevionGames.UIWidgets.TweenRunner`1<DevionGames.UIWidgets.FloatTween> DevionGames.UIWidgets.UIWidget::m_AlphaTweenRunner
	TweenRunner_1_t0078029DEDBB2A1E346C6CEE967712F882D88226 * ___m_AlphaTweenRunner_18;
	// DevionGames.UIWidgets.TweenRunner`1<DevionGames.UIWidgets.Vector3Tween> DevionGames.UIWidgets.UIWidget::m_ScaleTweenRunner
	TweenRunner_1_t322058F435959F195B0693EEAA2C3ADBD3B84128 * ___m_ScaleTweenRunner_19;
	// System.Boolean DevionGames.UIWidgets.UIWidget::m_IsShowing
	bool ___m_IsShowing_20;

public:
	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229, ___name_5)); }
	inline String_t* get_name_5() const { return ___name_5; }
	inline String_t** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(String_t* value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_5), (void*)value);
	}

	inline static int32_t get_offset_of_priority_6() { return static_cast<int32_t>(offsetof(UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229, ___priority_6)); }
	inline int32_t get_priority_6() const { return ___priority_6; }
	inline int32_t* get_address_of_priority_6() { return &___priority_6; }
	inline void set_priority_6(int32_t value)
	{
		___priority_6 = value;
	}

	inline static int32_t get_offset_of_m_KeyCode_7() { return static_cast<int32_t>(offsetof(UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229, ___m_KeyCode_7)); }
	inline int32_t get_m_KeyCode_7() const { return ___m_KeyCode_7; }
	inline int32_t* get_address_of_m_KeyCode_7() { return &___m_KeyCode_7; }
	inline void set_m_KeyCode_7(int32_t value)
	{
		___m_KeyCode_7 = value;
	}

	inline static int32_t get_offset_of_m_EaseType_8() { return static_cast<int32_t>(offsetof(UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229, ___m_EaseType_8)); }
	inline int32_t get_m_EaseType_8() const { return ___m_EaseType_8; }
	inline int32_t* get_address_of_m_EaseType_8() { return &___m_EaseType_8; }
	inline void set_m_EaseType_8(int32_t value)
	{
		___m_EaseType_8 = value;
	}

	inline static int32_t get_offset_of_m_Duration_9() { return static_cast<int32_t>(offsetof(UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229, ___m_Duration_9)); }
	inline float get_m_Duration_9() const { return ___m_Duration_9; }
	inline float* get_address_of_m_Duration_9() { return &___m_Duration_9; }
	inline void set_m_Duration_9(float value)
	{
		___m_Duration_9 = value;
	}

	inline static int32_t get_offset_of_showSound_10() { return static_cast<int32_t>(offsetof(UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229, ___showSound_10)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_showSound_10() const { return ___showSound_10; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_showSound_10() { return &___showSound_10; }
	inline void set_showSound_10(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___showSound_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___showSound_10), (void*)value);
	}

	inline static int32_t get_offset_of_closeSound_11() { return static_cast<int32_t>(offsetof(UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229, ___closeSound_11)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_closeSound_11() const { return ___closeSound_11; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_closeSound_11() { return &___closeSound_11; }
	inline void set_closeSound_11(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___closeSound_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___closeSound_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focus_12() { return static_cast<int32_t>(offsetof(UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229, ___m_Focus_12)); }
	inline bool get_m_Focus_12() const { return ___m_Focus_12; }
	inline bool* get_address_of_m_Focus_12() { return &___m_Focus_12; }
	inline void set_m_Focus_12(bool value)
	{
		___m_Focus_12 = value;
	}

	inline static int32_t get_offset_of_m_DeactivateOnClose_13() { return static_cast<int32_t>(offsetof(UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229, ___m_DeactivateOnClose_13)); }
	inline bool get_m_DeactivateOnClose_13() const { return ___m_DeactivateOnClose_13; }
	inline bool* get_address_of_m_DeactivateOnClose_13() { return &___m_DeactivateOnClose_13; }
	inline void set_m_DeactivateOnClose_13(bool value)
	{
		___m_DeactivateOnClose_13 = value;
	}

	inline static int32_t get_offset_of_onShow_14() { return static_cast<int32_t>(offsetof(UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229, ___onShow_14)); }
	inline WidgetEvent_tB4620AD81E6501F79A226F2B03C5B6660F007F2E * get_onShow_14() const { return ___onShow_14; }
	inline WidgetEvent_tB4620AD81E6501F79A226F2B03C5B6660F007F2E ** get_address_of_onShow_14() { return &___onShow_14; }
	inline void set_onShow_14(WidgetEvent_tB4620AD81E6501F79A226F2B03C5B6660F007F2E * value)
	{
		___onShow_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onShow_14), (void*)value);
	}

	inline static int32_t get_offset_of_onClose_15() { return static_cast<int32_t>(offsetof(UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229, ___onClose_15)); }
	inline WidgetEvent_tB4620AD81E6501F79A226F2B03C5B6660F007F2E * get_onClose_15() const { return ___onClose_15; }
	inline WidgetEvent_tB4620AD81E6501F79A226F2B03C5B6660F007F2E ** get_address_of_onClose_15() { return &___onClose_15; }
	inline void set_onClose_15(WidgetEvent_tB4620AD81E6501F79A226F2B03C5B6660F007F2E * value)
	{
		___onClose_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onClose_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_RectTransform_16() { return static_cast<int32_t>(offsetof(UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229, ___m_RectTransform_16)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_16() const { return ___m_RectTransform_16; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_16() { return &___m_RectTransform_16; }
	inline void set_m_RectTransform_16(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasGroup_17() { return static_cast<int32_t>(offsetof(UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229, ___m_CanvasGroup_17)); }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * get_m_CanvasGroup_17() const { return ___m_CanvasGroup_17; }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** get_address_of_m_CanvasGroup_17() { return &___m_CanvasGroup_17; }
	inline void set_m_CanvasGroup_17(CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		___m_CanvasGroup_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroup_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaTweenRunner_18() { return static_cast<int32_t>(offsetof(UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229, ___m_AlphaTweenRunner_18)); }
	inline TweenRunner_1_t0078029DEDBB2A1E346C6CEE967712F882D88226 * get_m_AlphaTweenRunner_18() const { return ___m_AlphaTweenRunner_18; }
	inline TweenRunner_1_t0078029DEDBB2A1E346C6CEE967712F882D88226 ** get_address_of_m_AlphaTweenRunner_18() { return &___m_AlphaTweenRunner_18; }
	inline void set_m_AlphaTweenRunner_18(TweenRunner_1_t0078029DEDBB2A1E346C6CEE967712F882D88226 * value)
	{
		___m_AlphaTweenRunner_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AlphaTweenRunner_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScaleTweenRunner_19() { return static_cast<int32_t>(offsetof(UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229, ___m_ScaleTweenRunner_19)); }
	inline TweenRunner_1_t322058F435959F195B0693EEAA2C3ADBD3B84128 * get_m_ScaleTweenRunner_19() const { return ___m_ScaleTweenRunner_19; }
	inline TweenRunner_1_t322058F435959F195B0693EEAA2C3ADBD3B84128 ** get_address_of_m_ScaleTweenRunner_19() { return &___m_ScaleTweenRunner_19; }
	inline void set_m_ScaleTweenRunner_19(TweenRunner_1_t322058F435959F195B0693EEAA2C3ADBD3B84128 * value)
	{
		___m_ScaleTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScaleTweenRunner_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsShowing_20() { return static_cast<int32_t>(offsetof(UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229, ___m_IsShowing_20)); }
	inline bool get_m_IsShowing_20() const { return ___m_IsShowing_20; }
	inline bool* get_address_of_m_IsShowing_20() { return &___m_IsShowing_20; }
	inline void set_m_IsShowing_20(bool value)
	{
		___m_IsShowing_20 = value;
	}
};


// DevionGames.UIWidgets.MenuItem
struct MenuItem_t9A0F1062D5BE94BB34ED0DAECF0027E7D0ECA124  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.Events.UnityEvent DevionGames.UIWidgets.MenuItem::m_Trigger
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___m_Trigger_20;

public:
	inline static int32_t get_offset_of_m_Trigger_20() { return static_cast<int32_t>(offsetof(MenuItem_t9A0F1062D5BE94BB34ED0DAECF0027E7D0ECA124, ___m_Trigger_20)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_m_Trigger_20() const { return ___m_Trigger_20; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_m_Trigger_20() { return &___m_Trigger_20; }
	inline void set_m_Trigger_20(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___m_Trigger_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trigger_20), (void*)value);
	}
};


// DevionGames.UIWidgets.RadialMenu
struct RadialMenu_tEA5D73346C7A0510CB219509A1763DD979921975  : public UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229
{
public:
	// System.Single DevionGames.UIWidgets.RadialMenu::m_Radius
	float ___m_Radius_21;
	// System.Single DevionGames.UIWidgets.RadialMenu::m_Angle
	float ___m_Angle_22;
	// DevionGames.UIWidgets.MenuItem DevionGames.UIWidgets.RadialMenu::m_Item
	MenuItem_t9A0F1062D5BE94BB34ED0DAECF0027E7D0ECA124 * ___m_Item_23;
	// System.Collections.Generic.List`1<DevionGames.UIWidgets.MenuItem> DevionGames.UIWidgets.RadialMenu::itemCache
	List_1_tE34D6EF7BC1D9A2025003B510DF58B7F75875402 * ___itemCache_24;

public:
	inline static int32_t get_offset_of_m_Radius_21() { return static_cast<int32_t>(offsetof(RadialMenu_tEA5D73346C7A0510CB219509A1763DD979921975, ___m_Radius_21)); }
	inline float get_m_Radius_21() const { return ___m_Radius_21; }
	inline float* get_address_of_m_Radius_21() { return &___m_Radius_21; }
	inline void set_m_Radius_21(float value)
	{
		___m_Radius_21 = value;
	}

	inline static int32_t get_offset_of_m_Angle_22() { return static_cast<int32_t>(offsetof(RadialMenu_tEA5D73346C7A0510CB219509A1763DD979921975, ___m_Angle_22)); }
	inline float get_m_Angle_22() const { return ___m_Angle_22; }
	inline float* get_address_of_m_Angle_22() { return &___m_Angle_22; }
	inline void set_m_Angle_22(float value)
	{
		___m_Angle_22 = value;
	}

	inline static int32_t get_offset_of_m_Item_23() { return static_cast<int32_t>(offsetof(RadialMenu_tEA5D73346C7A0510CB219509A1763DD979921975, ___m_Item_23)); }
	inline MenuItem_t9A0F1062D5BE94BB34ED0DAECF0027E7D0ECA124 * get_m_Item_23() const { return ___m_Item_23; }
	inline MenuItem_t9A0F1062D5BE94BB34ED0DAECF0027E7D0ECA124 ** get_address_of_m_Item_23() { return &___m_Item_23; }
	inline void set_m_Item_23(MenuItem_t9A0F1062D5BE94BB34ED0DAECF0027E7D0ECA124 * value)
	{
		___m_Item_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item_23), (void*)value);
	}

	inline static int32_t get_offset_of_itemCache_24() { return static_cast<int32_t>(offsetof(RadialMenu_tEA5D73346C7A0510CB219509A1763DD979921975, ___itemCache_24)); }
	inline List_1_tE34D6EF7BC1D9A2025003B510DF58B7F75875402 * get_itemCache_24() const { return ___itemCache_24; }
	inline List_1_tE34D6EF7BC1D9A2025003B510DF58B7F75875402 ** get_address_of_itemCache_24() { return &___itemCache_24; }
	inline void set_itemCache_24(List_1_tE34D6EF7BC1D9A2025003B510DF58B7F75875402 * value)
	{
		___itemCache_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemCache_24), (void*)value);
	}
};


// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;

public:
	inline static int32_t get_offset_of_toggleTransition_20() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___toggleTransition_20)); }
	inline int32_t get_toggleTransition_20() const { return ___toggleTransition_20; }
	inline int32_t* get_address_of_toggleTransition_20() { return &___toggleTransition_20; }
	inline void set_toggleTransition_20(int32_t value)
	{
		___toggleTransition_20 = value;
	}

	inline static int32_t get_offset_of_graphic_21() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___graphic_21)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_graphic_21() const { return ___graphic_21; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_graphic_21() { return &___graphic_21; }
	inline void set_graphic_21(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___graphic_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphic_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Group_22() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_Group_22)); }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * get_m_Group_22() const { return ___m_Group_22; }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 ** get_address_of_m_Group_22() { return &___m_Group_22; }
	inline void set_m_Group_22(ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * value)
	{
		___m_Group_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Group_22), (void*)value);
	}

	inline static int32_t get_offset_of_onValueChanged_23() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___onValueChanged_23)); }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * get_onValueChanged_23() const { return ___onValueChanged_23; }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 ** get_address_of_onValueChanged_23() { return &___onValueChanged_23; }
	inline void set_onValueChanged_23(ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * value)
	{
		___onValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onValueChanged_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsOn_24() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_IsOn_24)); }
	inline bool get_m_IsOn_24() const { return ___m_IsOn_24; }
	inline bool* get_address_of_m_IsOn_24() { return &___m_IsOn_24; }
	inline void set_m_IsOn_24(bool value)
	{
		___m_IsOn_24 = value;
	}
};


// DevionGames.UIWidgets.Tooltip
struct Tooltip_t4189AB3769FB49D03A96EFE511A956E3884B7F58  : public UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229
{
public:
	// System.Boolean DevionGames.UIWidgets.Tooltip::m_UpdatePosition
	bool ___m_UpdatePosition_21;
	// UnityEngine.UI.Text DevionGames.UIWidgets.Tooltip::m_Title
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_Title_22;
	// UnityEngine.UI.Text DevionGames.UIWidgets.Tooltip::m_Text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_Text_23;
	// UnityEngine.UI.Image DevionGames.UIWidgets.Tooltip::m_Icon
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_Icon_24;
	// UnityEngine.UI.Image DevionGames.UIWidgets.Tooltip::m_Background
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_Background_25;
	// DevionGames.UIWidgets.StringPairSlot DevionGames.UIWidgets.Tooltip::m_SlotPrefab
	StringPairSlot_tF2A89DED7932A44AB1FB627D19A768FC0FE0E16E * ___m_SlotPrefab_26;
	// UnityEngine.Canvas DevionGames.UIWidgets.Tooltip::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_27;
	// UnityEngine.Transform DevionGames.UIWidgets.Tooltip::m_SlotParent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_SlotParent_28;
	// System.Single DevionGames.UIWidgets.Tooltip::m_Width
	float ___m_Width_29;
	// System.Collections.Generic.List`1<DevionGames.UIWidgets.StringPairSlot> DevionGames.UIWidgets.Tooltip::m_SlotCache
	List_1_tE1508694D84A41B11BEBC98959DF5921C47215EB * ___m_SlotCache_30;
	// System.Boolean DevionGames.UIWidgets.Tooltip::_updatePosition
	bool ____updatePosition_31;

public:
	inline static int32_t get_offset_of_m_UpdatePosition_21() { return static_cast<int32_t>(offsetof(Tooltip_t4189AB3769FB49D03A96EFE511A956E3884B7F58, ___m_UpdatePosition_21)); }
	inline bool get_m_UpdatePosition_21() const { return ___m_UpdatePosition_21; }
	inline bool* get_address_of_m_UpdatePosition_21() { return &___m_UpdatePosition_21; }
	inline void set_m_UpdatePosition_21(bool value)
	{
		___m_UpdatePosition_21 = value;
	}

	inline static int32_t get_offset_of_m_Title_22() { return static_cast<int32_t>(offsetof(Tooltip_t4189AB3769FB49D03A96EFE511A956E3884B7F58, ___m_Title_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_Title_22() const { return ___m_Title_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_Title_22() { return &___m_Title_22; }
	inline void set_m_Title_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_Title_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Title_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_23() { return static_cast<int32_t>(offsetof(Tooltip_t4189AB3769FB49D03A96EFE511A956E3884B7F58, ___m_Text_23)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_Text_23() const { return ___m_Text_23; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_Text_23() { return &___m_Text_23; }
	inline void set_m_Text_23(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_Text_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_Icon_24() { return static_cast<int32_t>(offsetof(Tooltip_t4189AB3769FB49D03A96EFE511A956E3884B7F58, ___m_Icon_24)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_Icon_24() const { return ___m_Icon_24; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_Icon_24() { return &___m_Icon_24; }
	inline void set_m_Icon_24(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_Icon_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Icon_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Background_25() { return static_cast<int32_t>(offsetof(Tooltip_t4189AB3769FB49D03A96EFE511A956E3884B7F58, ___m_Background_25)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_Background_25() const { return ___m_Background_25; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_Background_25() { return &___m_Background_25; }
	inline void set_m_Background_25(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_Background_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Background_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_SlotPrefab_26() { return static_cast<int32_t>(offsetof(Tooltip_t4189AB3769FB49D03A96EFE511A956E3884B7F58, ___m_SlotPrefab_26)); }
	inline StringPairSlot_tF2A89DED7932A44AB1FB627D19A768FC0FE0E16E * get_m_SlotPrefab_26() const { return ___m_SlotPrefab_26; }
	inline StringPairSlot_tF2A89DED7932A44AB1FB627D19A768FC0FE0E16E ** get_address_of_m_SlotPrefab_26() { return &___m_SlotPrefab_26; }
	inline void set_m_SlotPrefab_26(StringPairSlot_tF2A89DED7932A44AB1FB627D19A768FC0FE0E16E * value)
	{
		___m_SlotPrefab_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SlotPrefab_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_27() { return static_cast<int32_t>(offsetof(Tooltip_t4189AB3769FB49D03A96EFE511A956E3884B7F58, ___m_Canvas_27)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_27() const { return ___m_Canvas_27; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_27() { return &___m_Canvas_27; }
	inline void set_m_Canvas_27(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_SlotParent_28() { return static_cast<int32_t>(offsetof(Tooltip_t4189AB3769FB49D03A96EFE511A956E3884B7F58, ___m_SlotParent_28)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_SlotParent_28() const { return ___m_SlotParent_28; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_SlotParent_28() { return &___m_SlotParent_28; }
	inline void set_m_SlotParent_28(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_SlotParent_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SlotParent_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Width_29() { return static_cast<int32_t>(offsetof(Tooltip_t4189AB3769FB49D03A96EFE511A956E3884B7F58, ___m_Width_29)); }
	inline float get_m_Width_29() const { return ___m_Width_29; }
	inline float* get_address_of_m_Width_29() { return &___m_Width_29; }
	inline void set_m_Width_29(float value)
	{
		___m_Width_29 = value;
	}

	inline static int32_t get_offset_of_m_SlotCache_30() { return static_cast<int32_t>(offsetof(Tooltip_t4189AB3769FB49D03A96EFE511A956E3884B7F58, ___m_SlotCache_30)); }
	inline List_1_tE1508694D84A41B11BEBC98959DF5921C47215EB * get_m_SlotCache_30() const { return ___m_SlotCache_30; }
	inline List_1_tE1508694D84A41B11BEBC98959DF5921C47215EB ** get_address_of_m_SlotCache_30() { return &___m_SlotCache_30; }
	inline void set_m_SlotCache_30(List_1_tE1508694D84A41B11BEBC98959DF5921C47215EB * value)
	{
		___m_SlotCache_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SlotCache_30), (void*)value);
	}

	inline static int32_t get_offset_of__updatePosition_31() { return static_cast<int32_t>(offsetof(Tooltip_t4189AB3769FB49D03A96EFE511A956E3884B7F58, ____updatePosition_31)); }
	inline bool get__updatePosition_31() const { return ____updatePosition_31; }
	inline bool* get_address_of__updatePosition_31() { return &____updatePosition_31; }
	inline void set__updatePosition_31(bool value)
	{
		____updatePosition_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// OtherWorld/Visualizer[]
struct VisualizerU5BU5D_tC5921398D3FDABEEA249BC021EDF7A133781918E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61  m_Items[1];

public:
	inline Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___visualizerObject_2), (void*)NULL);
	}
	inline Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___visualizerObject_2), (void*)NULL);
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
// UnityStandardAssets.CinematicEffects.SMAA/QualitySettings[]
struct QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  m_Items[1];

public:
	inline QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * m_Items[1];

public:
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  m_Items[1];

public:
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		m_Items[index] = value;
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshal_pinvoke(const ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1& unmarshaled, ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshal_pinvoke_back(const ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshaled_pinvoke& marshaled, ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1& unmarshaled);
IL2CPP_EXTERN_C void ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshal_pinvoke_cleanup(ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshal_com(const ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1& unmarshaled, ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshaled_com& marshaled);
IL2CPP_EXTERN_C void ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshal_com_back(const ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshaled_com& marshaled, ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1& unmarshaled);
IL2CPP_EXTERN_C void ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshal_com_cleanup(ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshaled_com& marshaled);
IL2CPP_EXTERN_C void ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshal_pinvoke(const ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744& unmarshaled, ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshal_pinvoke_back(const ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshaled_pinvoke& marshaled, ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744& unmarshaled);
IL2CPP_EXTERN_C void ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshal_pinvoke_cleanup(ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshal_com(const ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744& unmarshaled, ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshaled_com& marshaled);
IL2CPP_EXTERN_C void ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshal_com_back(const ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshaled_com& marshaled, ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744& unmarshaled);
IL2CPP_EXTERN_C void ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshal_com_cleanup(ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshaled_com& marshaled);
IL2CPP_EXTERN_C void AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke(const AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03& unmarshaled, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke_back(const AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke& marshaled, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03& unmarshaled);
IL2CPP_EXTERN_C void AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke_cleanup(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_com(const AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03& unmarshaled, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com& marshaled);
IL2CPP_EXTERN_C void AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_com_back(const AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com& marshaled, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03& unmarshaled);
IL2CPP_EXTERN_C void AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_com_cleanup(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com& marshaled);

// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, int32_t ___arg00, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisRuntimeObject_mF35F8B37C78D02C08BB4F806038CA6EDE548A6B5_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED_gshared (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mC58365ECDF3275B845B1D16FAACD109627B507F8_gshared (UnityEvent_1_t0D27852CE4491ECD77DB83CDC47BEFDE77503829 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void DevionGames.PropertyBinding::UpdateTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBinding_UpdateTarget_mD84C51AED2353632C51ED1F33A68F90087453352 (PropertyBinding_t273EDABE3A995B2B49B72C6E2ED0E83BF73F3FF1 * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::op_Equality(System.Reflection.FieldInfo,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_op_Equality_m317FBF38CA6FD67D08400CC9A15FEC250E5D4751 (FieldInfo_t * ___left0, FieldInfo_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Reflection.PropertyInfo::op_Equality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Equality_m94A58A417AD82DA8ABCE4B0DCAA3019A586D5B16 (PropertyInfo_t * ___left0, PropertyInfo_t * ___right1, const RuntimeMethod* method);
// System.Boolean DevionGames.PropertyBinding/PropertyRef::CacheProperty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyRef_CacheProperty_mCE9DC256B93665F11CE8E7647B480AFFFD655A8D (PropertyRef_tBDFE709DEBDDC6FAD63FFDEDACADAB3E4328ED7E * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.PropertyInfo::op_Inequality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Inequality_mB4C6169DC83174E7712055F0973BC55469AD9962 (PropertyInfo_t * ___left0, PropertyInfo_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::op_Inequality(System.Reflection.FieldInfo,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_op_Inequality_m5E2B5FF4334B861A92933D078C4B06FA11AA731A (FieldInfo_t * ___left0, FieldInfo_t * ___right1, const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C (FieldInfo_t * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Reflection.FieldInfo System.Type::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t * Type_GetField_m7E0197C80896690B5F5DBCCE44E3354FFDA13D2C (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t * Type_GetProperty_mF9677E24A43BADE21DE5E45E0BD0CB881BAB4C89 (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void DevionGames.UIWidgets.RadialMenu/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEEDDCF368ADB4E59DF199FD3ADACF219115DE971 (U3CU3Ec_t9B0E684BA3104C2A6B21CED6AECF6A08A4CA927E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(!0)
inline void UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *, int32_t, const RuntimeMethod*))UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared)(__this, ___arg00, method);
}
// System.Void RadialMenuTrigger/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAA65F6C755ACEB885C87397052C4B1378A9D5EA0 (U3CU3Ec_t25AB60471E084307081EBC615C7D87324F3A651D * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void DevionGames.ReflectionUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m327EDB0C32CDEB6B7BDA1EEA8B6572D8766C4A49 (U3CU3Ec_t045AC806888EFD4E8508D8DC26128AC831820FF0 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Type> DevionGames.ReflectionUtility::BaseTypesAndSelf(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtility_BaseTypesAndSelf_mB8D9C065846FC8566D8A17394670A4A9552A9B21 (Type_t * ___type0, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>)
inline int32_t Enumerable_Count_TisType_t_mA57AE3CB9D37B60DA716D9E9C34A0A23154B7241 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisRuntimeObject_mF35F8B37C78D02C08BB4F806038CA6EDE548A6B5_gshared)(___source0, method);
}
// System.Boolean System.Reflection.FieldInfo::get_IsPublic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsPublic_mA7FB5E40024835CA07195F3E1BFCBD41E9E013BD (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean DevionGames.AttributeUtility::HasAttribute(System.Reflection.FieldInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AttributeUtility_HasAttribute_m4DDC34671E5B16C142DFC3001F6F1251042E3453 (FieldInfo_t * ___field0, Type_t * ___attributeType1, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void DevionGames.ReflectionUtility/<BaseTypes>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBaseTypesU3Ed__8__ctor_m082B4C1DD8CE94935F4EBC1E48A4D4516EDFF7F9 (U3CBaseTypesU3Ed__8_tD5C05A218261CD6C6EBD00C72C95D6B857C2E93A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Type> DevionGames.ReflectionUtility/<BaseTypes>d__8::System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBaseTypesU3Ed__8_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_mBC32E3C0F74F9FA598477EC74FF61BF0B9C147A9 (U3CBaseTypesU3Ed__8_tD5C05A218261CD6C6EBD00C72C95D6B857C2E93A * __this, const RuntimeMethod* method);
// System.Void DevionGames.ReflectionUtility/<BaseTypesAndSelf>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBaseTypesAndSelfU3Ed__7__ctor_mC225D29072C28BAD70481B49E5CB896729A9B0F6 (U3CBaseTypesAndSelfU3Ed__7_t2FEF19550A52910BE32ECB2DFE7642215A2B1DDC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<System.Type> DevionGames.ReflectionUtility/<BaseTypesAndSelf>d__7::System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBaseTypesAndSelfU3Ed__7_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_m8503A328D334CEC2F7D61B9856C9A3A425333162 (U3CBaseTypesAndSelfU3Ed__7_t2FEF19550A52910BE32ECB2DFE7642215A2B1DDC * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void RippleEffect/Droplet::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Droplet_Reset_m918E5EE205702D087FED663E076B95B90996A226 (Droplet_tB38F5D6E236CE375FE37BB6D2DE5CB9802EDDDDB * __this, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings::UseTemporal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TemporalSettings_UseTemporal_m5886365B7FC63514FCF9A6C10CF96B5A827239DF_inline (TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0 * __this, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * SceneManager_LoadSceneAsync_mAB22F675FE16C405CBEC2CEF405493DBB6F0284E (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// System.Void DevionGames.SelectionHandler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDFDB153783C6B396C71C7BE16404D4842439AEA9 (U3CU3Ec_t9C90EFC120B73E67C0781C272253507C12FF9469 * __this, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<DevionGames.ISelectable>()
inline RuntimeObject* Component_GetComponent_TisISelectable_t7F312FFA8BEAC50F25A42430ABD841CB04B7CBAF_mD2000FFB92048614032F133E6893FF6E22C327DF (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.UI.Toggle[] DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::get_Toggles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* SimpleScrollSnap_get_Toggles_m68B3D8EECE325FDB7AE3F9E41EFAC83FB2D7584C_inline (SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, const RuntimeMethod* method);
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap::GoToPanel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleScrollSnap_GoToPanel_mCF45C7E388B917C01C9BA91FA55DB00798CB43E2 (SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257 * __this, int32_t ___panelNumber0, const RuntimeMethod* method);
// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::get_MinValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransitionEffect_get_MinValue_m84CE49CC8E59945D2DD5CEC845276C48476A0720 (TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA * __this, const RuntimeMethod* method);
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::SetDefaultValues(System.Single,System.Single,System.Single,System.Single,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEffect_SetDefaultValues_m681EFF284683ACC2122EEC4A681E6F386B45F2B1 (TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA * __this, float ___minValue0, float ___maxValue1, float ___minDisplacement2, float ___maxDisplacement3, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___function4, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// System.Void SnowFairyCauldron/ChoicePhrase::.ctor(SnowFairyCauldron/SnowFairyChoice,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoicePhrase__ctor_mAED528B92A6653F4CB920DC7FB4DDEDA3F1D19EA (ChoicePhrase_t7C05E60215F75758BA3A4ABEF5F5FB2E6B393C53 * __this, int32_t ___choice0, String_t* ___phrase1, const RuntimeMethod* method);
// System.Void SnowFairyCauldron_v2/ChoicePhrase::.ctor(SnowFairyCauldron_v2/SnowFairyChoice,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoicePhrase__ctor_m7F7603C26EBBD3242AB146A14A686EFB46814B8A (ChoicePhrase_tCEE30AE4523CD12B954B4493B0B514CF46926AB2 * __this, int32_t ___choice0, String_t* ___phrase1, const RuntimeMethod* method);
// System.Void SnowFairyMirrorController/ChoicePhrase::.ctor(SnowFairyMirrorController/SnowFairyChoice,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoicePhrase__ctor_mC60BEF08902829C1F7E4A54003D22DB1618E9DC8 (ChoicePhrase_t96AFA26823C3EA543E8E9B235929FAE81BD75DEA * __this, int32_t ___choice0, String_t* ___phrase1, const RuntimeMethod* method);
// System.Single DevionGames.UIWidgets.Spinner::get_current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Spinner_get_current_mA9512C84E9F64BF491A81AB348A026905FF78C17_inline (Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void DevionGames.UIWidgets.Spinner::set_current(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spinner_set_current_mE13F69A6B53AFA858BB01BE7857CB2C6E0A29094 (Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
inline void UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t84B4EA1A2A00DEAC63B85AFAA89EBF67CA749DBC *, const RuntimeMethod*))UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
inline void UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8 (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t208A952325F66BFCB1EDEECEFEF5F1C7A16298A0 *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7 (PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorWheelsSettings UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorWheelsSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorWheelsSettings_tA1F7B01E603F94472F1DECDE81F9F0C09DAA7DC9  ColorWheelsSettings_get_defaultSettings_mE8E6B25AC82213A670CDCF4C94B4B80E404A6391 (const RuntimeMethod* method);
// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/BasicsSettings UnityStandardAssets.CinematicEffects.TonemappingColorGrading/BasicsSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BasicsSettings_tCD0CFD2C3C62C6A9E002B8E4CD4CAAB56BBDF04F  BasicsSettings_get_defaultSettings_m06FB3E1264A8BA305B98C0E9512281CB3C419AFE (const RuntimeMethod* method);
// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ChannelMixerSettings UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ChannelMixerSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744  ChannelMixerSettings_get_defaultSettings_m6B810343A0A0BC8825D26C4695B61871DC421778 (const RuntimeMethod* method);
// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/CurvesSettings UnityStandardAssets.CinematicEffects.TonemappingColorGrading/CurvesSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CurvesSettings_t451DB71CD864FD8AECCB77D60CA7AF61781C287D  CurvesSettings_get_defaultSettings_m95A3156D81C15151E8663E4C5343DFE2B03DE96F (const RuntimeMethod* method);
// System.Void UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorGradingSettings::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorGradingSettings_Reset_m39775B4F33C24CDD6E383AD985EC286FF3C3B5A5 (ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// UnityEngine.AnimationCurve UnityStandardAssets.CinematicEffects.TonemappingColorGrading/CurvesSettings::get_defaultCurve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * CurvesSettings_get_defaultCurve_m5CC8FC3F5B7F2FF9437DFB8D854375DE098FC98D (const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_m572CCEE06F612003F939F3FF439B15F89E8C1D54 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, float ___time0, float ___value1, float ___inTangent2, float ___outTangent3, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* ___keys0, const RuntimeMethod* method);
// System.String DevionGames.UIWidgets.WidgetUtility::ColorString(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WidgetUtility_ColorString_m6FC1F4EC0A5B9C880826C40A72C993EE5166ABFE (String_t* ___value0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color1, const RuntimeMethod* method);
// System.Void DevionGames.TypeUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m97E069E6A4CF1782534BF261147EE3B76BBB8495 (U3CU3Ec_t485C5B2655F18E6B77C5AFD264AE4BB1BD013E9A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53 (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * __this, float ___value0, const RuntimeMethod* method);
// System.Single DevionGames.UIWidgets.FloatTween::get_startValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FloatTween_get_startValue_m32E95475B22C9EF8D6A616B7CF82D328DEAEE277_inline (FloatTween_t7814382C59A52975DDE91625A0B93AF25E34D858 * __this, const RuntimeMethod* method);
// System.Single DevionGames.UIWidgets.FloatTween::get_targetValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FloatTween_get_targetValue_m76F3543807DBBCA2C4D4F48EE0328B816ABE6869_inline (FloatTween_t7814382C59A52975DDE91625A0B93AF25E34D858 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean DevionGames.UIWidgets.UIWidget::get_IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIWidget_get_IsVisible_mB29F1A27603743F212AFAB0845A18EA90D32AE33 (UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::.ctor()
inline void UnityEvent_1__ctor_mC58365ECDF3275B845B1D16FAACD109627B507F8 (UnityEvent_1_t0D27852CE4491ECD77DB83CDC47BEFDE77503829 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t0D27852CE4491ECD77DB83CDC47BEFDE77503829 *, const RuntimeMethod*))UnityEvent_1__ctor_mC58365ECDF3275B845B1D16FAACD109627B507F8_gshared)(__this, method);
}
// System.Void Water2D.Water2D_Spawner::set_IsWaterInScene(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Water2D_Spawner_set_IsWaterInScene_mB61A4CE20BF75E0A324D937CFDB0BD75F780536F_inline (Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<MetaballParticleClass>()
inline MetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9 * GameObject_GetComponent_TisMetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9_mCC7649DDC10A23AFC09C1C6611B15FFFF513064F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean MetaballParticleClass::get_Active()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MetaballParticleClass_get_Active_m7AD104B4EAA39081494B342095C0BC4891881E10_inline (MetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void MetaballParticleClass::set_Active(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaballParticleClass_set_Active_m6A521634E6AFE0474EC57E19C2438F03416BBF42 (MetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Water2D.Water2D_Spawner::SetWaterColor(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Water2D_Spawner_SetWaterColor_mDA35DC9D51545989B959FBA477FA4686BB289009 (Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___fill0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___stroke1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Boolean Water2D.Water2D_Spawner::get_Dynamic()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Water2D_Spawner_get_Dynamic_m5BFA77611B907079B63DAD04A17961045529FA78_inline (Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OtherWorld/<WaitAndDeactivate>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAndDeactivateU3Ed__9__ctor_m21CCABDB4BCD4A8A9AC9296E4E745DC433E484EF (U3CWaitAndDeactivateU3Ed__9_tEDEFB4CA79E9F6B7D6D69D4C241E6E1C5C06C541 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void OtherWorld/<WaitAndDeactivate>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAndDeactivateU3Ed__9_System_IDisposable_Dispose_m3C7F367783938843F2E6321464FE0E4A95C440AB (U3CWaitAndDeactivateU3Ed__9_tEDEFB4CA79E9F6B7D6D69D4C241E6E1C5C06C541 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean OtherWorld/<WaitAndDeactivate>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitAndDeactivateU3Ed__9_MoveNext_m37CA2ED3629C7F9FA6D001BD86AA0A72FF13097E (U3CWaitAndDeactivateU3Ed__9_tEDEFB4CA79E9F6B7D6D69D4C241E6E1C5C06C541 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OtherWorld_tB727BB284D250D1C80B503FC078EF2447876516B * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		OtherWorld_tB727BB284D250D1C80B503FC078EF2447876516B * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(waitTime);
		float L_4 = __this->get_waitTime_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// visualizers[indexToDeactivate].visualizerObject.SetActive(false);
		OtherWorld_tB727BB284D250D1C80B503FC078EF2447876516B * L_6 = V_1;
		NullCheck(L_6);
		VisualizerU5BU5D_tC5921398D3FDABEEA249BC021EDF7A133781918E* L_7 = L_6->get_visualizers_4();
		int32_t L_8 = __this->get_indexToDeactivate_4();
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->get_visualizerObject_2();
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object OtherWorld/<WaitAndDeactivate>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitAndDeactivateU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mED72904215DE8F04907E2C4C1AE659A706D20C4E (U3CWaitAndDeactivateU3Ed__9_tEDEFB4CA79E9F6B7D6D69D4C241E6E1C5C06C541 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void OtherWorld/<WaitAndDeactivate>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAndDeactivateU3Ed__9_System_Collections_IEnumerator_Reset_m62B796843F795BE874CBE5B5499352D0FFD4F58B (U3CWaitAndDeactivateU3Ed__9_tEDEFB4CA79E9F6B7D6D69D4C241E6E1C5C06C541 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitAndDeactivateU3Ed__9_System_Collections_IEnumerator_Reset_m62B796843F795BE874CBE5B5499352D0FFD4F58B_RuntimeMethod_var)));
	}
}
// System.Object OtherWorld/<WaitAndDeactivate>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitAndDeactivateU3Ed__9_System_Collections_IEnumerator_get_Current_mD955B309B43FA7A98C5D6FC9648854081D8A9D65 (U3CWaitAndDeactivateU3Ed__9_tEDEFB4CA79E9F6B7D6D69D4C241E6E1C5C06C541 * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: OtherWorld/Visualizer
IL2CPP_EXTERN_C void Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61_marshal_pinvoke(const Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61& unmarshaled, Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61_marshaled_pinvoke& marshaled)
{
	Exception_t* ___visualizerObject_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'visualizerObject' of type 'Visualizer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___visualizerObject_2Exception, NULL);
}
IL2CPP_EXTERN_C void Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61_marshal_pinvoke_back(const Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61_marshaled_pinvoke& marshaled, Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61& unmarshaled)
{
	Exception_t* ___visualizerObject_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'visualizerObject' of type 'Visualizer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___visualizerObject_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: OtherWorld/Visualizer
IL2CPP_EXTERN_C void Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61_marshal_pinvoke_cleanup(Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: OtherWorld/Visualizer
IL2CPP_EXTERN_C void Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61_marshal_com(const Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61& unmarshaled, Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61_marshaled_com& marshaled)
{
	Exception_t* ___visualizerObject_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'visualizerObject' of type 'Visualizer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___visualizerObject_2Exception, NULL);
}
IL2CPP_EXTERN_C void Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61_marshal_com_back(const Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61_marshaled_com& marshaled, Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61& unmarshaled)
{
	Exception_t* ___visualizerObject_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'visualizerObject' of type 'Visualizer': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___visualizerObject_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: OtherWorld/Visualizer
IL2CPP_EXTERN_C void Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61_marshal_com_cleanup(Visualizer_tC02662601FAA5ACB5A3D921B7D5AD19978606C61_marshaled_com& marshaled)
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
// System.Void ParticleSea/<WaitAndUpdate>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAndUpdateU3Ed__17__ctor_mEC85816BC4E4452737A0E6C795AE24D1F8EFECB7 (U3CWaitAndUpdateU3Ed__17_tBCC8380530BB68ACBABD946456C99924D27E7ABE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ParticleSea/<WaitAndUpdate>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAndUpdateU3Ed__17_System_IDisposable_Dispose_m3068C1ACE73EDCEE0843B5D2D4997FB5F0406AB0 (U3CWaitAndUpdateU3Ed__17_tBCC8380530BB68ACBABD946456C99924D27E7ABE * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ParticleSea/<WaitAndUpdate>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitAndUpdateU3Ed__17_MoveNext_m2F4CFDF249C1E3AD137B932ABED33E0B68CE21A1 (U3CWaitAndUpdateU3Ed__17_tBCC8380530BB68ACBABD946456C99924D27E7ABE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0017:
	{
		// yield return new WaitForSeconds(waitTime);
		float L_3 = __this->get_waitTime_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0031:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_0017;
	}
}
// System.Object ParticleSea/<WaitAndUpdate>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitAndUpdateU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3C7D3513D1D4EA3F4DA6D3AB43289B24C3DE1DA9 (U3CWaitAndUpdateU3Ed__17_tBCC8380530BB68ACBABD946456C99924D27E7ABE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ParticleSea/<WaitAndUpdate>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAndUpdateU3Ed__17_System_Collections_IEnumerator_Reset_m8EF718DF94E6C5C4C7A9B260C4443FAE41D95865 (U3CWaitAndUpdateU3Ed__17_tBCC8380530BB68ACBABD946456C99924D27E7ABE * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitAndUpdateU3Ed__17_System_Collections_IEnumerator_Reset_m8EF718DF94E6C5C4C7A9B260C4443FAE41D95865_RuntimeMethod_var)));
	}
}
// System.Object ParticleSea/<WaitAndUpdate>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitAndUpdateU3Ed__17_System_Collections_IEnumerator_get_Current_m006498DD375541804C294DCC3ADC1BC8D402EB8F (U3CWaitAndUpdateU3Ed__17_tBCC8380530BB68ACBABD946456C99924D27E7ABE * __this, const RuntimeMethod* method)
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
// System.Void DevionGames.PropertyBinding/<IntervalUpdate>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIntervalUpdateU3Ed__8__ctor_m9A75C33E956B922382EC8CAEA8027DB12EB8B4C8 (U3CIntervalUpdateU3Ed__8_tA09793DC2F32C3CA771B6F2CD2AF26A4B985975B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DevionGames.PropertyBinding/<IntervalUpdate>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIntervalUpdateU3Ed__8_System_IDisposable_Dispose_m402ABBA92312117257989E738DF90326F781FBA2 (U3CIntervalUpdateU3Ed__8_tA09793DC2F32C3CA771B6F2CD2AF26A4B985975B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DevionGames.PropertyBinding/<IntervalUpdate>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CIntervalUpdateU3Ed__8_MoveNext_m7C04A1BD9A6AC0599273F84CFA1D7AEDA43052CC (U3CIntervalUpdateU3Ed__8_tA09793DC2F32C3CA771B6F2CD2AF26A4B985975B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PropertyBinding_t273EDABE3A995B2B49B72C6E2ED0E83BF73F3FF1 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PropertyBinding_t273EDABE3A995B2B49B72C6E2ED0E83BF73F3FF1 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// yield return new WaitForSeconds(m_Interval);
		PropertyBinding_t273EDABE3A995B2B49B72C6E2ED0E83BF73F3FF1 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_m_Interval_7();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// UpdateTarget();
		PropertyBinding_t273EDABE3A995B2B49B72C6E2ED0E83BF73F3FF1 * L_7 = V_1;
		NullCheck(L_7);
		PropertyBinding_UpdateTarget_mD84C51AED2353632C51ED1F33A68F90087453352(L_7, /*hidden argument*/NULL);
		// while (true) {
		goto IL_001e;
	}
}
// System.Object DevionGames.PropertyBinding/<IntervalUpdate>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIntervalUpdateU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m842A50D2146EF2DEE67442516FE451A841F1B897 (U3CIntervalUpdateU3Ed__8_tA09793DC2F32C3CA771B6F2CD2AF26A4B985975B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DevionGames.PropertyBinding/<IntervalUpdate>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIntervalUpdateU3Ed__8_System_Collections_IEnumerator_Reset_m27DF6A4155E068B25F6EE6BC23FB98790875C190 (U3CIntervalUpdateU3Ed__8_tA09793DC2F32C3CA771B6F2CD2AF26A4B985975B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CIntervalUpdateU3Ed__8_System_Collections_IEnumerator_Reset_m27DF6A4155E068B25F6EE6BC23FB98790875C190_RuntimeMethod_var)));
	}
}
// System.Object DevionGames.PropertyBinding/<IntervalUpdate>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIntervalUpdateU3Ed__8_System_Collections_IEnumerator_get_Current_mF2EECE2439EF6B7211D8F4C154AED73BB0F878FD (U3CIntervalUpdateU3Ed__8_tA09793DC2F32C3CA771B6F2CD2AF26A4B985975B * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Component DevionGames.PropertyBinding/PropertyRef::get_component()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * PropertyRef_get_component_m83AEE7214731802C32E2682C6796ABCAE7439E63 (PropertyRef_tBDFE709DEBDDC6FAD63FFDEDACADAB3E4328ED7E * __this, const RuntimeMethod* method)
{
	{
		// return this.m_Component;
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_0 = __this->get_m_Component_0();
		return L_0;
	}
}
// System.String DevionGames.PropertyBinding/PropertyRef::get_propertyPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyRef_get_propertyPath_m56709D8543248CB79A099183AE007E24D2FCDE30 (PropertyRef_tBDFE709DEBDDC6FAD63FFDEDACADAB3E4328ED7E * __this, const RuntimeMethod* method)
{
	{
		// return this.m_PropertyPath;
		String_t* L_0 = __this->get_m_PropertyPath_3();
		return L_0;
	}
}
// System.Object DevionGames.PropertyBinding/PropertyRef::GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PropertyRef_GetValue_mE7E68A7D6A7DDA1B9C49363B5FB1C4D486A89749 (PropertyRef_tBDFE709DEBDDC6FAD63FFDEDACADAB3E4328ED7E * __this, const RuntimeMethod* method)
{
	{
		// if (this.m_Field == null && this.m_Property == null) {
		FieldInfo_t * L_0 = __this->get_m_Field_1();
		bool L_1;
		L_1 = FieldInfo_op_Equality_m317FBF38CA6FD67D08400CC9A15FEC250E5D4751(L_0, (FieldInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		PropertyInfo_t * L_2 = __this->get_m_Property_2();
		bool L_3;
		L_3 = PropertyInfo_op_Equality_m94A58A417AD82DA8ABCE4B0DCAA3019A586D5B16(L_2, (PropertyInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// CacheProperty();
		bool L_4;
		L_4 = PropertyRef_CacheProperty_mCE9DC256B93665F11CE8E7647B480AFFFD655A8D(__this, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// if (this.m_Property != null)
		PropertyInfo_t * L_5 = __this->get_m_Property_2();
		bool L_6;
		L_6 = PropertyInfo_op_Inequality_mB4C6169DC83174E7712055F0973BC55469AD9962(L_5, (PropertyInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		// if (this.m_Property.CanRead)
		PropertyInfo_t * L_7 = __this->get_m_Property_2();
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_7);
		if (!L_8)
		{
			goto IL_0071;
		}
	}
	{
		// return this.m_Property.GetValue(this.m_Component, null);
		PropertyInfo_t * L_9 = __this->get_m_Property_2();
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_10 = __this->get_m_Component_0();
		NullCheck(L_9);
		RuntimeObject * L_11;
		L_11 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(24 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_9, L_10, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		return L_11;
	}

IL_0051:
	{
		// else if (this.m_Field != null)
		FieldInfo_t * L_12 = __this->get_m_Field_1();
		bool L_13;
		L_13 = FieldInfo_op_Inequality_m5E2B5FF4334B861A92933D078C4B06FA11AA731A(L_12, (FieldInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0071;
		}
	}
	{
		// return this.m_Field.GetValue(this.m_Component);
		FieldInfo_t * L_14 = __this->get_m_Field_1();
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_15 = __this->get_m_Component_0();
		NullCheck(L_14);
		RuntimeObject * L_16;
		L_16 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_14, L_15);
		return L_16;
	}

IL_0071:
	{
		// return null;
		return NULL;
	}
}
// System.Boolean DevionGames.PropertyBinding/PropertyRef::SetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyRef_SetValue_m7631D12BAA0444AECA32192485D85C6221231AC1 (PropertyRef_tBDFE709DEBDDC6FAD63FFDEDACADAB3E4328ED7E * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// if (this.m_Field == null && this.m_Property == null && !CacheProperty()) {
		FieldInfo_t * L_0 = __this->get_m_Field_1();
		bool L_1;
		L_1 = FieldInfo_op_Equality_m317FBF38CA6FD67D08400CC9A15FEC250E5D4751(L_0, (FieldInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		PropertyInfo_t * L_2 = __this->get_m_Property_2();
		bool L_3;
		L_3 = PropertyInfo_op_Equality_m94A58A417AD82DA8ABCE4B0DCAA3019A586D5B16(L_2, (PropertyInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		bool L_4;
		L_4 = PropertyRef_CacheProperty_mCE9DC256B93665F11CE8E7647B480AFFFD655A8D(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0026:
	{
		// if (this.m_Field != null){
		FieldInfo_t * L_5 = __this->get_m_Field_1();
		bool L_6;
		L_6 = FieldInfo_op_Inequality_m5E2B5FF4334B861A92933D078C4B06FA11AA731A(L_5, (FieldInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		// this.m_Field.SetValue(this.m_Component, value);
		FieldInfo_t * L_7 = __this->get_m_Field_1();
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_8 = __this->get_m_Component_0();
		RuntimeObject * L_9 = ___value0;
		NullCheck(L_7);
		FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(L_7, L_8, L_9, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_0048:
	{
		// }else if (this.m_Property.CanWrite){
		PropertyInfo_t * L_10 = __this->get_m_Property_2();
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_10);
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		// this.m_Property.SetValue(this.m_Component, value, null);
		PropertyInfo_t * L_12 = __this->get_m_Property_2();
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_13 = __this->get_m_Component_0();
		RuntimeObject * L_14 = ___value0;
		NullCheck(L_12);
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(26 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_12, L_13, L_14, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		// return true;
		return (bool)1;
	}

IL_006a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean DevionGames.PropertyBinding/PropertyRef::CacheProperty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyRef_CacheProperty_mCE9DC256B93665F11CE8E7647B480AFFFD655A8D (PropertyRef_tBDFE709DEBDDC6FAD63FFDEDACADAB3E4328ED7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		// if (this.m_Component != null && !string.IsNullOrEmpty(this.m_PropertyPath))
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_0 = __this->get_m_Component_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		String_t* L_2 = __this->get_m_PropertyPath_3();
		bool L_3;
		L_3 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_004d;
		}
	}
	{
		// Type type = this.m_Component.GetType();
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_4 = __this->get_m_Component_0();
		NullCheck(L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// this.m_Field = type.GetField(this.m_PropertyPath);
		Type_t * L_6 = V_0;
		String_t* L_7 = __this->get_m_PropertyPath_3();
		NullCheck(L_6);
		FieldInfo_t * L_8;
		L_8 = Type_GetField_m7E0197C80896690B5F5DBCCE44E3354FFDA13D2C(L_6, L_7, /*hidden argument*/NULL);
		__this->set_m_Field_1(L_8);
		// this.m_Property = type.GetProperty(this.m_PropertyPath);
		Type_t * L_9 = V_0;
		String_t* L_10 = __this->get_m_PropertyPath_3();
		NullCheck(L_9);
		PropertyInfo_t * L_11;
		L_11 = Type_GetProperty_mF9677E24A43BADE21DE5E45E0BD0CB881BAB4C89(L_9, L_10, /*hidden argument*/NULL);
		__this->set_m_Property_2(L_11);
		// }
		goto IL_005b;
	}

IL_004d:
	{
		// this.m_Field = null;
		__this->set_m_Field_1((FieldInfo_t *)NULL);
		// this.m_Property = null;
		__this->set_m_Property_2((PropertyInfo_t *)NULL);
	}

IL_005b:
	{
		// return (this.m_Field != null || this.m_Property != null);
		FieldInfo_t * L_12 = __this->get_m_Field_1();
		bool L_13;
		L_13 = FieldInfo_op_Inequality_m5E2B5FF4334B861A92933D078C4B06FA11AA731A(L_12, (FieldInfo_t *)NULL, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0076;
		}
	}
	{
		PropertyInfo_t * L_14 = __this->get_m_Property_2();
		bool L_15;
		L_15 = PropertyInfo_op_Inequality_mB4C6169DC83174E7712055F0973BC55469AD9962(L_14, (PropertyInfo_t *)NULL, /*hidden argument*/NULL);
		return L_15;
	}

IL_0076:
	{
		return (bool)1;
	}
}
// System.Void DevionGames.PropertyBinding/PropertyRef::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyRef__ctor_m2C3CDA72D22655EEFCFD4B7091A6D8F94FB1A491 (PropertyRef_tBDFE709DEBDDC6FAD63FFDEDACADAB3E4328ED7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string m_PropertyPath=string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_m_PropertyPath_3(L_0);
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
// System.Void DevionGames.UIWidgets.RadialMenu/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE95D7E9948D44351C186D59AC3D649EDE0FC0140 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9B0E684BA3104C2A6B21CED6AECF6A08A4CA927E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9B0E684BA3104C2A6B21CED6AECF6A08A4CA927E * L_0 = (U3CU3Ec_t9B0E684BA3104C2A6B21CED6AECF6A08A4CA927E *)il2cpp_codegen_object_new(U3CU3Ec_t9B0E684BA3104C2A6B21CED6AECF6A08A4CA927E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mEEDDCF368ADB4E59DF199FD3ADACF219115DE971(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t9B0E684BA3104C2A6B21CED6AECF6A08A4CA927E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B0E684BA3104C2A6B21CED6AECF6A08A4CA927E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void DevionGames.UIWidgets.RadialMenu/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEEDDCF368ADB4E59DF199FD3ADACF219115DE971 (U3CU3Ec_t9B0E684BA3104C2A6B21CED6AECF6A08A4CA927E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean DevionGames.UIWidgets.RadialMenu/<>c::<AddMenuItem>b__7_0(DevionGames.UIWidgets.MenuItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CAddMenuItemU3Eb__7_0_m29A26B0C38EF70993DD6BDB85D64196C490FA032 (U3CU3Ec_t9B0E684BA3104C2A6B21CED6AECF6A08A4CA927E * __this, MenuItem_t9A0F1062D5BE94BB34ED0DAECF0027E7D0ECA124 * ___x0, const RuntimeMethod* method)
{
	{
		// MenuItem item = itemCache.Find (x => !x.isActiveAndEnabled);
		MenuItem_t9A0F1062D5BE94BB34ED0DAECF0027E7D0ECA124 * L_0 = ___x0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.Void DevionGames.UIWidgets.RadialMenu/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m1A64D8800CDF48587D1EA8C95C89B721C21AB63E (U3CU3Ec__DisplayClass5_0_t460817D95B7673B8E654B3D2DA6095D4EE08AD2E * __this, const RuntimeMethod* method)
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
// System.Void DevionGames.UIWidgets.RadialMenu/<>c__DisplayClass5_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_1__ctor_mCEADBE25B75E9ABCA57E8E8771E67919AACAF059 (U3CU3Ec__DisplayClass5_1_tC9D5502A4A5D130A7489546F81E3C8C7BEF3A65C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DevionGames.UIWidgets.RadialMenu/<>c__DisplayClass5_1::<Show>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_1_U3CShowU3Eb__0_mCF49E8D38C73C667E0453F541EF1C900EB469B0D (U3CU3Ec__DisplayClass5_1_tC9D5502A4A5D130A7489546F81E3C8C7BEF3A65C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Close ();
		U3CU3Ec__DisplayClass5_0_t460817D95B7673B8E654B3D2DA6095D4EE08AD2E * L_0 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_0);
		RadialMenu_tEA5D73346C7A0510CB219509A1763DD979921975 * L_1 = L_0->get_U3CU3E4__this_0();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(8 /* System.Void DevionGames.UIWidgets.UIWidget::Close() */, L_1);
		// if (result != null) {
		U3CU3Ec__DisplayClass5_0_t460817D95B7673B8E654B3D2DA6095D4EE08AD2E * L_2 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_2);
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_3 = L_2->get_result_1();
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// result.Invoke (index);
		U3CU3Ec__DisplayClass5_0_t460817D95B7673B8E654B3D2DA6095D4EE08AD2E * L_4 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_4);
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_5 = L_4->get_result_1();
		int32_t L_6 = __this->get_index_0();
		NullCheck(L_5);
		UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D(L_5, L_6, /*hidden argument*/UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_RuntimeMethod_var);
	}

IL_0033:
	{
		// });
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
// System.Void RadialMenuTrigger/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m27166B1B5806CE83D7CD897698CEE24A4A093C8F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t25AB60471E084307081EBC615C7D87324F3A651D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t25AB60471E084307081EBC615C7D87324F3A651D * L_0 = (U3CU3Ec_t25AB60471E084307081EBC615C7D87324F3A651D *)il2cpp_codegen_object_new(U3CU3Ec_t25AB60471E084307081EBC615C7D87324F3A651D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mAA65F6C755ACEB885C87397052C4B1378A9D5EA0(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t25AB60471E084307081EBC615C7D87324F3A651D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t25AB60471E084307081EBC615C7D87324F3A651D_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void RadialMenuTrigger/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAA65F6C755ACEB885C87397052C4B1378A9D5EA0 (U3CU3Ec_t25AB60471E084307081EBC615C7D87324F3A651D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void RadialMenuTrigger/<>c::<OnPointerDown>b__3_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnPointerDownU3Eb__3_0_m2FD2813119F6B3CC2C65B8AC43BFB6E38838C070 (U3CU3Ec_t25AB60471E084307081EBC615C7D87324F3A651D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53D3AA67CEBED08F08A91248EA669401ABF66242);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.m_RadialMenu.Show(menuIcons, delegate(int index) { Debug.Log("Used index - " + index); });
		String_t* L_0;
		L_0 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___index0), /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral53D3AA67CEBED08F08A91248EA669401ABF66242, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// this.m_RadialMenu.Show(menuIcons, delegate(int index) { Debug.Log("Used index - " + index); });
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
// System.Void DevionGames.ReflectionUtility/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2DBED0DF4001433FC8C8B69405E891A1E8BC26D5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t045AC806888EFD4E8508D8DC26128AC831820FF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t045AC806888EFD4E8508D8DC26128AC831820FF0 * L_0 = (U3CU3Ec_t045AC806888EFD4E8508D8DC26128AC831820FF0 *)il2cpp_codegen_object_new(U3CU3Ec_t045AC806888EFD4E8508D8DC26128AC831820FF0_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m327EDB0C32CDEB6B7BDA1EEA8B6572D8766C4A49(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t045AC806888EFD4E8508D8DC26128AC831820FF0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t045AC806888EFD4E8508D8DC26128AC831820FF0_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void DevionGames.ReflectionUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m327EDB0C32CDEB6B7BDA1EEA8B6572D8766C4A49 (U3CU3Ec_t045AC806888EFD4E8508D8DC26128AC831820FF0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 DevionGames.ReflectionUtility/<>c::<GetAllSerializedFields>b__5_0(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetAllSerializedFieldsU3Eb__5_0_mD3E436CFF3B66476EAA58DBE4CFD2AF3A2A59433 (U3CU3Ec_t045AC806888EFD4E8508D8DC26128AC831820FF0 * __this, FieldInfo_t * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisType_t_mA57AE3CB9D37B60DA716D9E9C34A0A23154B7241_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtility_t8DC7D068B30A12DDB8780C90EDFE9DCDCA7C4755_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fields = fields.OrderBy(x => x.DeclaringType.BaseTypesAndSelf().Count()).ToArray();
		FieldInfo_t * L_0 = ___x0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtility_t8DC7D068B30A12DDB8780C90EDFE9DCDCA7C4755_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = ReflectionUtility_BaseTypesAndSelf_mB8D9C065846FC8566D8A17394670A4A9552A9B21(L_1, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Enumerable_Count_TisType_t_mA57AE3CB9D37B60DA716D9E9C34A0A23154B7241(L_2, /*hidden argument*/Enumerable_Count_TisType_t_mA57AE3CB9D37B60DA716D9E9C34A0A23154B7241_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean DevionGames.ReflectionUtility/<>c::<GetSerializedFields>b__6_0(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetSerializedFieldsU3Eb__6_0_m6727E3BCC033EFF190B05E70402561843BC58980 (U3CU3Ec_t045AC806888EFD4E8508D8DC26128AC831820FF0 * __this, FieldInfo_t * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AttributeUtility_t36CF6089FCFBFA0BC8E6FF3ED72340A28F6D32F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NonSerializedAttribute_t44DC3D6520AC139B22FC692C3480F8A67C38FC12_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fields = type.GetFields(BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance).Where(x => x.IsPublic && !x.HasAttribute(typeof(NonSerializedAttribute)) || x.HasAttribute(typeof(SerializeField))).ToArray();
		FieldInfo_t * L_0 = ___x0;
		NullCheck(L_0);
		bool L_1;
		L_1 = FieldInfo_get_IsPublic_mA7FB5E40024835CA07195F3E1BFCBD41E9E013BD(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		FieldInfo_t * L_2 = ___x0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (NonSerializedAttribute_t44DC3D6520AC139B22FC692C3480F8A67C38FC12_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AttributeUtility_t36CF6089FCFBFA0BC8E6FF3ED72340A28F6D32F2_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = AttributeUtility_HasAttribute_m4DDC34671E5B16C142DFC3001F6F1251042E3453(L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}

IL_001a:
	{
		FieldInfo_t * L_6 = ___x0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AttributeUtility_t36CF6089FCFBFA0BC8E6FF3ED72340A28F6D32F2_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = AttributeUtility_HasAttribute_m4DDC34671E5B16C142DFC3001F6F1251042E3453(L_6, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_002b:
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
// System.Void DevionGames.ReflectionUtility/<BaseTypes>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBaseTypesU3Ed__8__ctor_m082B4C1DD8CE94935F4EBC1E48A4D4516EDFF7F9 (U3CBaseTypesU3Ed__8_tD5C05A218261CD6C6EBD00C72C95D6B857C2E93A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void DevionGames.ReflectionUtility/<BaseTypes>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBaseTypesU3Ed__8_System_IDisposable_Dispose_m2612FA3E5325A811879BF15A0EB873006BE29816 (U3CBaseTypesU3Ed__8_tD5C05A218261CD6C6EBD00C72C95D6B857C2E93A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DevionGames.ReflectionUtility/<BaseTypes>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBaseTypesU3Ed__8_MoveNext_mC5667AA432F9D17CD68F594C5AE9AE769BD75EA0 (U3CBaseTypesU3Ed__8_tD5C05A218261CD6C6EBD00C72C95D6B857C2E93A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0046;
	}

IL_0019:
	{
		// type = type.BaseType;
		Type_t * L_3 = __this->get_type_3();
		NullCheck(L_3);
		Type_t * L_4;
		L_4 = VirtFuncInvoker0< Type_t * >::Invoke(30 /* System.Type System.Type::get_BaseType() */, L_3);
		__this->set_type_3(L_4);
		// yield return type;
		Type_t * L_5 = __this->get_type_3();
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003f:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0046:
	{
		// while (type != null)
		Type_t * L_6 = __this->get_type_3();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_6, (Type_t *)NULL, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0019;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Type DevionGames.ReflectionUtility/<BaseTypes>d__8::System.Collections.Generic.IEnumerator<System.Type>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CBaseTypesU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_TypeU3E_get_Current_mCF47E2E5C64CABAEBC50312D59F8D128CE48A25E (U3CBaseTypesU3Ed__8_tD5C05A218261CD6C6EBD00C72C95D6B857C2E93A * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DevionGames.ReflectionUtility/<BaseTypes>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBaseTypesU3Ed__8_System_Collections_IEnumerator_Reset_m3DFD40BFBDB7DA0892C755DE1C6B860A2C6E2FA0 (U3CBaseTypesU3Ed__8_tD5C05A218261CD6C6EBD00C72C95D6B857C2E93A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBaseTypesU3Ed__8_System_Collections_IEnumerator_Reset_m3DFD40BFBDB7DA0892C755DE1C6B860A2C6E2FA0_RuntimeMethod_var)));
	}
}
// System.Object DevionGames.ReflectionUtility/<BaseTypes>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBaseTypesU3Ed__8_System_Collections_IEnumerator_get_Current_mE4875CFE26B1F65B7342147575A6A8A53EC3A490 (U3CBaseTypesU3Ed__8_tD5C05A218261CD6C6EBD00C72C95D6B857C2E93A * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Type> DevionGames.ReflectionUtility/<BaseTypes>d__8::System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBaseTypesU3Ed__8_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_mBC32E3C0F74F9FA598477EC74FF61BF0B9C147A9 (U3CBaseTypesU3Ed__8_tD5C05A218261CD6C6EBD00C72C95D6B857C2E93A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBaseTypesU3Ed__8_tD5C05A218261CD6C6EBD00C72C95D6B857C2E93A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CBaseTypesU3Ed__8_tD5C05A218261CD6C6EBD00C72C95D6B857C2E93A * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CBaseTypesU3Ed__8_tD5C05A218261CD6C6EBD00C72C95D6B857C2E93A * L_3 = (U3CBaseTypesU3Ed__8_tD5C05A218261CD6C6EBD00C72C95D6B857C2E93A *)il2cpp_codegen_object_new(U3CBaseTypesU3Ed__8_tD5C05A218261CD6C6EBD00C72C95D6B857C2E93A_il2cpp_TypeInfo_var);
		U3CBaseTypesU3Ed__8__ctor_m082B4C1DD8CE94935F4EBC1E48A4D4516EDFF7F9(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CBaseTypesU3Ed__8_tD5C05A218261CD6C6EBD00C72C95D6B857C2E93A * L_4 = V_0;
		Type_t * L_5 = __this->get_U3CU3E3__type_4();
		NullCheck(L_4);
		L_4->set_type_3(L_5);
		U3CBaseTypesU3Ed__8_tD5C05A218261CD6C6EBD00C72C95D6B857C2E93A * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator DevionGames.ReflectionUtility/<BaseTypes>d__8::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBaseTypesU3Ed__8_System_Collections_IEnumerable_GetEnumerator_m873EC189FDB99230D3F26DC5B8F25E6143E19B23 (U3CBaseTypesU3Ed__8_tD5C05A218261CD6C6EBD00C72C95D6B857C2E93A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CBaseTypesU3Ed__8_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_mBC32E3C0F74F9FA598477EC74FF61BF0B9C147A9(__this, /*hidden argument*/NULL);
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
// System.Void DevionGames.ReflectionUtility/<BaseTypesAndSelf>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBaseTypesAndSelfU3Ed__7__ctor_mC225D29072C28BAD70481B49E5CB896729A9B0F6 (U3CBaseTypesAndSelfU3Ed__7_t2FEF19550A52910BE32ECB2DFE7642215A2B1DDC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void DevionGames.ReflectionUtility/<BaseTypesAndSelf>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBaseTypesAndSelfU3Ed__7_System_IDisposable_Dispose_m80874074CCCF2D7A50CB7C1C2CFD59B2E71E6146 (U3CBaseTypesAndSelfU3Ed__7_t2FEF19550A52910BE32ECB2DFE7642215A2B1DDC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DevionGames.ReflectionUtility/<BaseTypesAndSelf>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBaseTypesAndSelfU3Ed__7_MoveNext_m3A79FEEF3C3CE5FAB8C6220410C235FFCBD0F9DA (U3CBaseTypesAndSelfU3Ed__7_t2FEF19550A52910BE32ECB2DFE7642215A2B1DDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0046;
	}

IL_0019:
	{
		// yield return type;
		Type_t * L_3 = __this->get_type_3();
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_002e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// type = type.BaseType;
		Type_t * L_4 = __this->get_type_3();
		NullCheck(L_4);
		Type_t * L_5;
		L_5 = VirtFuncInvoker0< Type_t * >::Invoke(30 /* System.Type System.Type::get_BaseType() */, L_4);
		__this->set_type_3(L_5);
	}

IL_0046:
	{
		// while (type != null)
		Type_t * L_6 = __this->get_type_3();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_6, (Type_t *)NULL, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0019;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Type DevionGames.ReflectionUtility/<BaseTypesAndSelf>d__7::System.Collections.Generic.IEnumerator<System.Type>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CBaseTypesAndSelfU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_TypeU3E_get_Current_m64158916F6770D2B69E8FFAC6CC585FEF5A7F928 (U3CBaseTypesAndSelfU3Ed__7_t2FEF19550A52910BE32ECB2DFE7642215A2B1DDC * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DevionGames.ReflectionUtility/<BaseTypesAndSelf>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBaseTypesAndSelfU3Ed__7_System_Collections_IEnumerator_Reset_mD6B328152E5086A05DFF6A0C2CF647CC21F75341 (U3CBaseTypesAndSelfU3Ed__7_t2FEF19550A52910BE32ECB2DFE7642215A2B1DDC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBaseTypesAndSelfU3Ed__7_System_Collections_IEnumerator_Reset_mD6B328152E5086A05DFF6A0C2CF647CC21F75341_RuntimeMethod_var)));
	}
}
// System.Object DevionGames.ReflectionUtility/<BaseTypesAndSelf>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CBaseTypesAndSelfU3Ed__7_System_Collections_IEnumerator_get_Current_m6988E6CA73233CB9B99E373B61C022BF50A9FFFB (U3CBaseTypesAndSelfU3Ed__7_t2FEF19550A52910BE32ECB2DFE7642215A2B1DDC * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Type> DevionGames.ReflectionUtility/<BaseTypesAndSelf>d__7::System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBaseTypesAndSelfU3Ed__7_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_m8503A328D334CEC2F7D61B9856C9A3A425333162 (U3CBaseTypesAndSelfU3Ed__7_t2FEF19550A52910BE32ECB2DFE7642215A2B1DDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBaseTypesAndSelfU3Ed__7_t2FEF19550A52910BE32ECB2DFE7642215A2B1DDC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CBaseTypesAndSelfU3Ed__7_t2FEF19550A52910BE32ECB2DFE7642215A2B1DDC * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CBaseTypesAndSelfU3Ed__7_t2FEF19550A52910BE32ECB2DFE7642215A2B1DDC * L_3 = (U3CBaseTypesAndSelfU3Ed__7_t2FEF19550A52910BE32ECB2DFE7642215A2B1DDC *)il2cpp_codegen_object_new(U3CBaseTypesAndSelfU3Ed__7_t2FEF19550A52910BE32ECB2DFE7642215A2B1DDC_il2cpp_TypeInfo_var);
		U3CBaseTypesAndSelfU3Ed__7__ctor_mC225D29072C28BAD70481B49E5CB896729A9B0F6(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CBaseTypesAndSelfU3Ed__7_t2FEF19550A52910BE32ECB2DFE7642215A2B1DDC * L_4 = V_0;
		Type_t * L_5 = __this->get_U3CU3E3__type_4();
		NullCheck(L_4);
		L_4->set_type_3(L_5);
		U3CBaseTypesAndSelfU3Ed__7_t2FEF19550A52910BE32ECB2DFE7642215A2B1DDC * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator DevionGames.ReflectionUtility/<BaseTypesAndSelf>d__7::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBaseTypesAndSelfU3Ed__7_System_Collections_IEnumerable_GetEnumerator_mBB4610A0FD27270BA4ED9CA57CD9C7840157480F (U3CBaseTypesAndSelfU3Ed__7_t2FEF19550A52910BE32ECB2DFE7642215A2B1DDC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CBaseTypesAndSelfU3Ed__7_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_m8503A328D334CEC2F7D61B9856C9A3A425333162(__this, /*hidden argument*/NULL);
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
// System.Void RippleEffect/Droplet::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Droplet_Reset_m918E5EE205702D087FED663E076B95B90996A226 (Droplet_tB38F5D6E236CE375FE37BB6D2DE5CB9802EDDDDB * __this, const RuntimeMethod* method)
{
	{
		// time = 0;
		__this->set_time_1((0.0f));
		// }
		return;
	}
}
// System.Void RippleEffect/Droplet::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Droplet_Update_m25F35F2511B9F372203AEAB6D671F420F7B39630 (Droplet_tB38F5D6E236CE375FE37BB6D2DE5CB9802EDDDDB * __this, const RuntimeMethod* method)
{
	{
		// time += Time.deltaTime;
		float L_0 = __this->get_time_1();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_time_1(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// }
		return;
	}
}
// UnityEngine.Vector4 RippleEffect/Droplet::MakeShaderParameter(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Droplet_MakeShaderParameter_m28957F3C9B110DB1EBC7B52103EE9A7EA4F0AF08 (Droplet_tB38F5D6E236CE375FE37BB6D2DE5CB9802EDDDDB * __this, float ___aspect0, const RuntimeMethod* method)
{
	{
		// return new Vector4(position.x * aspect, position.y, time, 0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_0 = __this->get_address_of_position_0();
		float L_1 = L_0->get_x_0();
		float L_2 = ___aspect0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_3 = __this->get_address_of_position_0();
		float L_4 = L_3->get_y_1();
		float L_5 = __this->get_time_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), L_4, L_5, (0.0f), /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void RippleEffect/Droplet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Droplet__ctor_m54C5908F6D85B22E032054B81FFB3E205B6FA8D4 (Droplet_tB38F5D6E236CE375FE37BB6D2DE5CB9802EDDDDB * __this, const RuntimeMethod* method)
{
	{
		// public Droplet(){
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Reset();
		Droplet_Reset_m918E5EE205702D087FED663E076B95B90996A226(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RippleEffect/Droplet::.ctor(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Droplet__ctor_mBF4605AAE8E3AA4E96474D6842E7482088DFB3D1 (Droplet_tB38F5D6E236CE375FE37BB6D2DE5CB9802EDDDDB * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method)
{
	{
		// public Droplet(Vector2 position){
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// time = 1000;
		__this->set_time_1((1000.0f));
		// this.position = position;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___position0;
		__this->set_position_0(L_0);
		// Reset();
		Droplet_Reset_m918E5EE205702D087FED663E076B95B90996A226(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CinematicEffects.SMAA/ExperimentalGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExperimentalGroup__ctor_m606A712DF821140580120F5669EAE97A15DDDEFE (ExperimentalGroup_t7C7B327F01DC40E7E7B30E43B7A3E88A403FEB93 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// UnityStandardAssets.CinematicEffects.SMAA/GlobalSettings UnityStandardAssets.CinematicEffects.SMAA/GlobalSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE  GlobalSettings_get_defaultSettings_m85E900E383D040C4AE3CACDF13F1234B920E1719 (const RuntimeMethod* method)
{
	GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new GlobalSettings
		// {
		//     debugPass = DebugPass.Off,
		//     quality = QualityPreset.High,
		//     edgeDetectionMethod = EdgeDetectionMethod.Color
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE ));
		(&V_0)->set_debugPass_0(0);
		(&V_0)->set_quality_1(2);
		(&V_0)->set_edgeDetectionMethod_2(2);
		GlobalSettings_tD637A2AFE0565BC930DDF32722BD1B87C1587DFE  L_0 = V_0;
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
// Conversion methods for marshalling of: UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings
IL2CPP_EXTERN_C void PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshal_pinvoke(const PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D& unmarshaled, PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshaled_pinvoke& marshaled)
{
	marshaled.___enabled_0 = static_cast<int32_t>(unmarshaled.get_enabled_0());
	marshaled.___threshold_1 = unmarshaled.get_threshold_1();
	marshaled.___scale_2 = unmarshaled.get_scale_2();
	marshaled.___strength_3 = unmarshaled.get_strength_3();
}
IL2CPP_EXTERN_C void PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshal_pinvoke_back(const PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshaled_pinvoke& marshaled, PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D& unmarshaled)
{
	bool unmarshaled_enabled_temp_0 = false;
	unmarshaled_enabled_temp_0 = static_cast<bool>(marshaled.___enabled_0);
	unmarshaled.set_enabled_0(unmarshaled_enabled_temp_0);
	float unmarshaled_threshold_temp_1 = 0.0f;
	unmarshaled_threshold_temp_1 = marshaled.___threshold_1;
	unmarshaled.set_threshold_1(unmarshaled_threshold_temp_1);
	float unmarshaled_scale_temp_2 = 0.0f;
	unmarshaled_scale_temp_2 = marshaled.___scale_2;
	unmarshaled.set_scale_2(unmarshaled_scale_temp_2);
	float unmarshaled_strength_temp_3 = 0.0f;
	unmarshaled_strength_temp_3 = marshaled.___strength_3;
	unmarshaled.set_strength_3(unmarshaled_strength_temp_3);
}
// Conversion method for clean up from marshalling of: UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings
IL2CPP_EXTERN_C void PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshal_pinvoke_cleanup(PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings
IL2CPP_EXTERN_C void PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshal_com(const PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D& unmarshaled, PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshaled_com& marshaled)
{
	marshaled.___enabled_0 = static_cast<int32_t>(unmarshaled.get_enabled_0());
	marshaled.___threshold_1 = unmarshaled.get_threshold_1();
	marshaled.___scale_2 = unmarshaled.get_scale_2();
	marshaled.___strength_3 = unmarshaled.get_strength_3();
}
IL2CPP_EXTERN_C void PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshal_com_back(const PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshaled_com& marshaled, PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D& unmarshaled)
{
	bool unmarshaled_enabled_temp_0 = false;
	unmarshaled_enabled_temp_0 = static_cast<bool>(marshaled.___enabled_0);
	unmarshaled.set_enabled_0(unmarshaled_enabled_temp_0);
	float unmarshaled_threshold_temp_1 = 0.0f;
	unmarshaled_threshold_temp_1 = marshaled.___threshold_1;
	unmarshaled.set_threshold_1(unmarshaled_threshold_temp_1);
	float unmarshaled_scale_temp_2 = 0.0f;
	unmarshaled_scale_temp_2 = marshaled.___scale_2;
	unmarshaled.set_scale_2(unmarshaled_scale_temp_2);
	float unmarshaled_strength_temp_3 = 0.0f;
	unmarshaled_strength_temp_3 = marshaled.___strength_3;
	unmarshaled.set_strength_3(unmarshaled_strength_temp_3);
}
// Conversion method for clean up from marshalling of: UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings
IL2CPP_EXTERN_C void PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshal_com_cleanup(PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D_marshaled_com& marshaled)
{
}
// UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings UnityStandardAssets.CinematicEffects.SMAA/PredicationSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D  PredicationSettings_get_defaultSettings_m4B5D6EC28014F4DB9BE982F667C6C61E25CB1151 (const RuntimeMethod* method)
{
	PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new PredicationSettings
		// {
		//     enabled = false,
		//     threshold = 0.01f,
		//     scale = 2f,
		//     strength = 0.4f
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D ));
		(&V_0)->set_enabled_0((bool)0);
		(&V_0)->set_threshold_1((0.00999999978f));
		(&V_0)->set_scale_2((2.0f));
		(&V_0)->set_strength_3((0.400000006f));
		PredicationSettings_t837B18C98D87638FCE69600E1BE778A5CF3F837D  L_0 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityStandardAssets.CinematicEffects.SMAA/QualitySettings
IL2CPP_EXTERN_C void QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshal_pinvoke(const QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F& unmarshaled, QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshaled_pinvoke& marshaled)
{
	marshaled.___diagonalDetection_0 = static_cast<int32_t>(unmarshaled.get_diagonalDetection_0());
	marshaled.___cornerDetection_1 = static_cast<int32_t>(unmarshaled.get_cornerDetection_1());
	marshaled.___threshold_2 = unmarshaled.get_threshold_2();
	marshaled.___depthThreshold_3 = unmarshaled.get_depthThreshold_3();
	marshaled.___maxSearchSteps_4 = unmarshaled.get_maxSearchSteps_4();
	marshaled.___maxDiagonalSearchSteps_5 = unmarshaled.get_maxDiagonalSearchSteps_5();
	marshaled.___cornerRounding_6 = unmarshaled.get_cornerRounding_6();
	marshaled.___localContrastAdaptationFactor_7 = unmarshaled.get_localContrastAdaptationFactor_7();
}
IL2CPP_EXTERN_C void QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshal_pinvoke_back(const QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshaled_pinvoke& marshaled, QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F& unmarshaled)
{
	bool unmarshaled_diagonalDetection_temp_0 = false;
	unmarshaled_diagonalDetection_temp_0 = static_cast<bool>(marshaled.___diagonalDetection_0);
	unmarshaled.set_diagonalDetection_0(unmarshaled_diagonalDetection_temp_0);
	bool unmarshaled_cornerDetection_temp_1 = false;
	unmarshaled_cornerDetection_temp_1 = static_cast<bool>(marshaled.___cornerDetection_1);
	unmarshaled.set_cornerDetection_1(unmarshaled_cornerDetection_temp_1);
	float unmarshaled_threshold_temp_2 = 0.0f;
	unmarshaled_threshold_temp_2 = marshaled.___threshold_2;
	unmarshaled.set_threshold_2(unmarshaled_threshold_temp_2);
	float unmarshaled_depthThreshold_temp_3 = 0.0f;
	unmarshaled_depthThreshold_temp_3 = marshaled.___depthThreshold_3;
	unmarshaled.set_depthThreshold_3(unmarshaled_depthThreshold_temp_3);
	int32_t unmarshaled_maxSearchSteps_temp_4 = 0;
	unmarshaled_maxSearchSteps_temp_4 = marshaled.___maxSearchSteps_4;
	unmarshaled.set_maxSearchSteps_4(unmarshaled_maxSearchSteps_temp_4);
	int32_t unmarshaled_maxDiagonalSearchSteps_temp_5 = 0;
	unmarshaled_maxDiagonalSearchSteps_temp_5 = marshaled.___maxDiagonalSearchSteps_5;
	unmarshaled.set_maxDiagonalSearchSteps_5(unmarshaled_maxDiagonalSearchSteps_temp_5);
	int32_t unmarshaled_cornerRounding_temp_6 = 0;
	unmarshaled_cornerRounding_temp_6 = marshaled.___cornerRounding_6;
	unmarshaled.set_cornerRounding_6(unmarshaled_cornerRounding_temp_6);
	float unmarshaled_localContrastAdaptationFactor_temp_7 = 0.0f;
	unmarshaled_localContrastAdaptationFactor_temp_7 = marshaled.___localContrastAdaptationFactor_7;
	unmarshaled.set_localContrastAdaptationFactor_7(unmarshaled_localContrastAdaptationFactor_temp_7);
}
// Conversion method for clean up from marshalling of: UnityStandardAssets.CinematicEffects.SMAA/QualitySettings
IL2CPP_EXTERN_C void QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshal_pinvoke_cleanup(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityStandardAssets.CinematicEffects.SMAA/QualitySettings
IL2CPP_EXTERN_C void QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshal_com(const QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F& unmarshaled, QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshaled_com& marshaled)
{
	marshaled.___diagonalDetection_0 = static_cast<int32_t>(unmarshaled.get_diagonalDetection_0());
	marshaled.___cornerDetection_1 = static_cast<int32_t>(unmarshaled.get_cornerDetection_1());
	marshaled.___threshold_2 = unmarshaled.get_threshold_2();
	marshaled.___depthThreshold_3 = unmarshaled.get_depthThreshold_3();
	marshaled.___maxSearchSteps_4 = unmarshaled.get_maxSearchSteps_4();
	marshaled.___maxDiagonalSearchSteps_5 = unmarshaled.get_maxDiagonalSearchSteps_5();
	marshaled.___cornerRounding_6 = unmarshaled.get_cornerRounding_6();
	marshaled.___localContrastAdaptationFactor_7 = unmarshaled.get_localContrastAdaptationFactor_7();
}
IL2CPP_EXTERN_C void QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshal_com_back(const QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshaled_com& marshaled, QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F& unmarshaled)
{
	bool unmarshaled_diagonalDetection_temp_0 = false;
	unmarshaled_diagonalDetection_temp_0 = static_cast<bool>(marshaled.___diagonalDetection_0);
	unmarshaled.set_diagonalDetection_0(unmarshaled_diagonalDetection_temp_0);
	bool unmarshaled_cornerDetection_temp_1 = false;
	unmarshaled_cornerDetection_temp_1 = static_cast<bool>(marshaled.___cornerDetection_1);
	unmarshaled.set_cornerDetection_1(unmarshaled_cornerDetection_temp_1);
	float unmarshaled_threshold_temp_2 = 0.0f;
	unmarshaled_threshold_temp_2 = marshaled.___threshold_2;
	unmarshaled.set_threshold_2(unmarshaled_threshold_temp_2);
	float unmarshaled_depthThreshold_temp_3 = 0.0f;
	unmarshaled_depthThreshold_temp_3 = marshaled.___depthThreshold_3;
	unmarshaled.set_depthThreshold_3(unmarshaled_depthThreshold_temp_3);
	int32_t unmarshaled_maxSearchSteps_temp_4 = 0;
	unmarshaled_maxSearchSteps_temp_4 = marshaled.___maxSearchSteps_4;
	unmarshaled.set_maxSearchSteps_4(unmarshaled_maxSearchSteps_temp_4);
	int32_t unmarshaled_maxDiagonalSearchSteps_temp_5 = 0;
	unmarshaled_maxDiagonalSearchSteps_temp_5 = marshaled.___maxDiagonalSearchSteps_5;
	unmarshaled.set_maxDiagonalSearchSteps_5(unmarshaled_maxDiagonalSearchSteps_temp_5);
	int32_t unmarshaled_cornerRounding_temp_6 = 0;
	unmarshaled_cornerRounding_temp_6 = marshaled.___cornerRounding_6;
	unmarshaled.set_cornerRounding_6(unmarshaled_cornerRounding_temp_6);
	float unmarshaled_localContrastAdaptationFactor_temp_7 = 0.0f;
	unmarshaled_localContrastAdaptationFactor_temp_7 = marshaled.___localContrastAdaptationFactor_7;
	unmarshaled.set_localContrastAdaptationFactor_7(unmarshaled_localContrastAdaptationFactor_temp_7);
}
// Conversion method for clean up from marshalling of: UnityStandardAssets.CinematicEffects.SMAA/QualitySettings
IL2CPP_EXTERN_C void QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshal_com_cleanup(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_marshaled_com& marshaled)
{
}
// System.Void UnityStandardAssets.CinematicEffects.SMAA/QualitySettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings__cctor_m1FDCF94880EE1860F0779F4E4DF96E631DC2A234 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static QualitySettings[] presetQualitySettings =
		// {
		//     // Low
		//     new QualitySettings
		//     {
		//         diagonalDetection = false,
		//         cornerDetection = false,
		//         threshold = 0.15f,
		//         depthThreshold = 0.01f,
		//         maxSearchSteps = 4,
		//         maxDiagonalSearchSteps = 8,
		//         cornerRounding = 25,
		//         localContrastAdaptationFactor = 2f
		//     },
		// 
		//     // Medium
		//     new QualitySettings
		//     {
		//         diagonalDetection = false,
		//         cornerDetection = false,
		//         threshold = 0.1f,
		//         depthThreshold = 0.01f,
		//         maxSearchSteps = 8,
		//         maxDiagonalSearchSteps = 8,
		//         cornerRounding = 25,
		//         localContrastAdaptationFactor = 2f
		//     },
		// 
		//     // High
		//     new QualitySettings
		//     {
		//         diagonalDetection = true,
		//         cornerDetection = true,
		//         threshold = 0.1f,
		//         depthThreshold = 0.01f,
		//         maxSearchSteps = 16,
		//         maxDiagonalSearchSteps = 8,
		//         cornerRounding = 25,
		//         localContrastAdaptationFactor = 2f
		//     },
		// 
		//     // Ultra
		//     new QualitySettings
		//     {
		//         diagonalDetection = true,
		//         cornerDetection = true,
		//         threshold = 0.05f,
		//         depthThreshold = 0.01f,
		//         maxSearchSteps = 32,
		//         maxDiagonalSearchSteps = 16,
		//         cornerRounding = 25,
		//         localContrastAdaptationFactor = 2f
		//     },
		// };
		QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296* L_0 = (QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296*)(QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296*)SZArrayNew(QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296_il2cpp_TypeInfo_var, (uint32_t)4);
		QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296* L_1 = L_0;
		il2cpp_codegen_initobj((&V_0), sizeof(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F ));
		(&V_0)->set_diagonalDetection_0((bool)0);
		(&V_0)->set_cornerDetection_1((bool)0);
		(&V_0)->set_threshold_2((0.150000006f));
		(&V_0)->set_depthThreshold_3((0.00999999978f));
		(&V_0)->set_maxSearchSteps_4(4);
		(&V_0)->set_maxDiagonalSearchSteps_5(8);
		(&V_0)->set_cornerRounding_6(((int32_t)25));
		(&V_0)->set_localContrastAdaptationFactor_7((2.0f));
		QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  L_2 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F )L_2);
		QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296* L_3 = L_1;
		il2cpp_codegen_initobj((&V_0), sizeof(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F ));
		(&V_0)->set_diagonalDetection_0((bool)0);
		(&V_0)->set_cornerDetection_1((bool)0);
		(&V_0)->set_threshold_2((0.100000001f));
		(&V_0)->set_depthThreshold_3((0.00999999978f));
		(&V_0)->set_maxSearchSteps_4(8);
		(&V_0)->set_maxDiagonalSearchSteps_5(8);
		(&V_0)->set_cornerRounding_6(((int32_t)25));
		(&V_0)->set_localContrastAdaptationFactor_7((2.0f));
		QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  L_4 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F )L_4);
		QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296* L_5 = L_3;
		il2cpp_codegen_initobj((&V_0), sizeof(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F ));
		(&V_0)->set_diagonalDetection_0((bool)1);
		(&V_0)->set_cornerDetection_1((bool)1);
		(&V_0)->set_threshold_2((0.100000001f));
		(&V_0)->set_depthThreshold_3((0.00999999978f));
		(&V_0)->set_maxSearchSteps_4(((int32_t)16));
		(&V_0)->set_maxDiagonalSearchSteps_5(8);
		(&V_0)->set_cornerRounding_6(((int32_t)25));
		(&V_0)->set_localContrastAdaptationFactor_7((2.0f));
		QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  L_6 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F )L_6);
		QualitySettingsU5BU5D_t37201C2ABB3778F1BE0983298ADDB3DFAF790296* L_7 = L_5;
		il2cpp_codegen_initobj((&V_0), sizeof(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F ));
		(&V_0)->set_diagonalDetection_0((bool)1);
		(&V_0)->set_cornerDetection_1((bool)1);
		(&V_0)->set_threshold_2((0.0500000007f));
		(&V_0)->set_depthThreshold_3((0.00999999978f));
		(&V_0)->set_maxSearchSteps_4(((int32_t)32));
		(&V_0)->set_maxDiagonalSearchSteps_5(((int32_t)16));
		(&V_0)->set_cornerRounding_6(((int32_t)25));
		(&V_0)->set_localContrastAdaptationFactor_7((2.0f));
		QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F  L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F )L_8);
		((QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_StaticFields*)il2cpp_codegen_static_fields_for(QualitySettings_tB7F7E0497CB6DC80612BF740313CF9622D46F52F_il2cpp_TypeInfo_var))->set_presetQualitySettings_8(L_7);
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
// System.Void UnityStandardAssets.CinematicEffects.SMAA/SettingsGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsGroup__ctor_mEC67CA8F14F04A7A5E93E10DF2C316C5EC61726B (SettingsGroup_t4D6A850FDDA2DE9F66716B684EC48F9A7BC94B7B * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings
IL2CPP_EXTERN_C void TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshal_pinvoke(const TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0& unmarshaled, TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshaled_pinvoke& marshaled)
{
	marshaled.___enabled_0 = static_cast<int32_t>(unmarshaled.get_enabled_0());
	marshaled.___fuzzSize_1 = unmarshaled.get_fuzzSize_1();
}
IL2CPP_EXTERN_C void TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshal_pinvoke_back(const TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshaled_pinvoke& marshaled, TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0& unmarshaled)
{
	bool unmarshaled_enabled_temp_0 = false;
	unmarshaled_enabled_temp_0 = static_cast<bool>(marshaled.___enabled_0);
	unmarshaled.set_enabled_0(unmarshaled_enabled_temp_0);
	float unmarshaled_fuzzSize_temp_1 = 0.0f;
	unmarshaled_fuzzSize_temp_1 = marshaled.___fuzzSize_1;
	unmarshaled.set_fuzzSize_1(unmarshaled_fuzzSize_temp_1);
}
// Conversion method for clean up from marshalling of: UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings
IL2CPP_EXTERN_C void TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshal_pinvoke_cleanup(TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings
IL2CPP_EXTERN_C void TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshal_com(const TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0& unmarshaled, TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshaled_com& marshaled)
{
	marshaled.___enabled_0 = static_cast<int32_t>(unmarshaled.get_enabled_0());
	marshaled.___fuzzSize_1 = unmarshaled.get_fuzzSize_1();
}
IL2CPP_EXTERN_C void TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshal_com_back(const TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshaled_com& marshaled, TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0& unmarshaled)
{
	bool unmarshaled_enabled_temp_0 = false;
	unmarshaled_enabled_temp_0 = static_cast<bool>(marshaled.___enabled_0);
	unmarshaled.set_enabled_0(unmarshaled_enabled_temp_0);
	float unmarshaled_fuzzSize_temp_1 = 0.0f;
	unmarshaled_fuzzSize_temp_1 = marshaled.___fuzzSize_1;
	unmarshaled.set_fuzzSize_1(unmarshaled_fuzzSize_temp_1);
}
// Conversion method for clean up from marshalling of: UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings
IL2CPP_EXTERN_C void TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshal_com_cleanup(TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0_marshaled_com& marshaled)
{
}
// System.Boolean UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings::UseTemporal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TemporalSettings_UseTemporal_m5886365B7FC63514FCF9A6C10CF96B5A827239DF (TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0 * __this, const RuntimeMethod* method)
{
	{
		// return enabled;
		bool L_0 = __this->get_enabled_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TemporalSettings_UseTemporal_m5886365B7FC63514FCF9A6C10CF96B5A827239DF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0 * _thisAdjusted = reinterpret_cast<TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TemporalSettings_UseTemporal_m5886365B7FC63514FCF9A6C10CF96B5A827239DF_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings UnityStandardAssets.CinematicEffects.SMAA/TemporalSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0  TemporalSettings_get_defaultSettings_m1054DAE951E9EC6DEA217F7F8F46460FF073CE47 (const RuntimeMethod* method)
{
	TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new TemporalSettings
		// {
		//     enabled = false,
		//     fuzzSize = 2f
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0 ));
		(&V_0)->set_enabled_0((bool)0);
		(&V_0)->set_fuzzSize_1((2.0f));
		TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0  L_0 = V_0;
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
// System.Void UnityStandardAssets.CinematicEffects.SMAA/TopLevelSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TopLevelSettings__ctor_mCE66EF28864BEDC1A3BC695975DA31C6BA23E0D9 (TopLevelSettings_tB734750836CD2B08679356BD51D96457BB5658B9 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void SceneLoader/<LoadNewScene>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadNewSceneU3Ed__7__ctor_mFB3A728A400B2B0C233D7F4468C59D0D54745BBD (U3CLoadNewSceneU3Ed__7_tE2C0C421103C28E35872925BB4DF73D0E16B3D5C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SceneLoader/<LoadNewScene>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadNewSceneU3Ed__7_System_IDisposable_Dispose_m25D90E0B00165476666BE789127D6A4F2AA31663 (U3CLoadNewSceneU3Ed__7_tE2C0C421103C28E35872925BB4DF73D0E16B3D5C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SceneLoader/<LoadNewScene>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadNewSceneU3Ed__7_MoveNext_m81CEEC041E411525EE4F96A9400404D529381E85 (U3CLoadNewSceneU3Ed__7_tE2C0C421103C28E35872925BB4DF73D0E16B3D5C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_006c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(3);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (3.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0042:
	{
		__this->set_U3CU3E1__state_0((-1));
		// AsyncOperation async = SceneManager.LoadSceneAsync(scene);
		SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_scene_5();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_6;
		L_6 = SceneManager_LoadSceneAsync_mAB22F675FE16C405CBEC2CEF405493DBB6F0284E(L_5, /*hidden argument*/NULL);
		__this->set_U3CasyncU3E5__2_3(L_6);
		goto IL_0073;
	}

IL_005c:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_006c:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0073:
	{
		// while (!async.isDone)
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_7 = __this->get_U3CasyncU3E5__2_3();
		NullCheck(L_7);
		bool L_8;
		L_8 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005c;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object SceneLoader/<LoadNewScene>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadNewSceneU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0F260B9D0FF69C3A8465DA23A77B9015ED7E3351 (U3CLoadNewSceneU3Ed__7_tE2C0C421103C28E35872925BB4DF73D0E16B3D5C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SceneLoader/<LoadNewScene>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadNewSceneU3Ed__7_System_Collections_IEnumerator_Reset_m5EDF519FA0AB8A4C63362461D9ECD298E5EA50C8 (U3CLoadNewSceneU3Ed__7_tE2C0C421103C28E35872925BB4DF73D0E16B3D5C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadNewSceneU3Ed__7_System_Collections_IEnumerator_Reset_m5EDF519FA0AB8A4C63362461D9ECD298E5EA50C8_RuntimeMethod_var)));
	}
}
// System.Object SceneLoader/<LoadNewScene>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadNewSceneU3Ed__7_System_Collections_IEnumerator_get_Current_m612CF3B58DA92201048F08B7294B617A91DE3382 (U3CLoadNewSceneU3Ed__7_tE2C0C421103C28E35872925BB4DF73D0E16B3D5C * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/ReflectionSettings
IL2CPP_EXTERN_C void ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshal_pinvoke(const ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1& unmarshaled, ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshaled_pinvoke& marshaled)
{
	marshaled.___blendType_0 = unmarshaled.get_blendType_0();
	marshaled.___reflectionQuality_1 = unmarshaled.get_reflectionQuality_1();
	marshaled.___maxDistance_2 = unmarshaled.get_maxDistance_2();
	marshaled.___iterationCount_3 = unmarshaled.get_iterationCount_3();
	marshaled.___stepSize_4 = unmarshaled.get_stepSize_4();
	marshaled.___widthModifier_5 = unmarshaled.get_widthModifier_5();
	marshaled.___reflectionBlur_6 = unmarshaled.get_reflectionBlur_6();
	marshaled.___reflectBackfaces_7 = static_cast<int32_t>(unmarshaled.get_reflectBackfaces_7());
}
IL2CPP_EXTERN_C void ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshal_pinvoke_back(const ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshaled_pinvoke& marshaled, ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1& unmarshaled)
{
	int32_t unmarshaled_blendType_temp_0 = 0;
	unmarshaled_blendType_temp_0 = marshaled.___blendType_0;
	unmarshaled.set_blendType_0(unmarshaled_blendType_temp_0);
	int32_t unmarshaled_reflectionQuality_temp_1 = 0;
	unmarshaled_reflectionQuality_temp_1 = marshaled.___reflectionQuality_1;
	unmarshaled.set_reflectionQuality_1(unmarshaled_reflectionQuality_temp_1);
	float unmarshaled_maxDistance_temp_2 = 0.0f;
	unmarshaled_maxDistance_temp_2 = marshaled.___maxDistance_2;
	unmarshaled.set_maxDistance_2(unmarshaled_maxDistance_temp_2);
	int32_t unmarshaled_iterationCount_temp_3 = 0;
	unmarshaled_iterationCount_temp_3 = marshaled.___iterationCount_3;
	unmarshaled.set_iterationCount_3(unmarshaled_iterationCount_temp_3);
	int32_t unmarshaled_stepSize_temp_4 = 0;
	unmarshaled_stepSize_temp_4 = marshaled.___stepSize_4;
	unmarshaled.set_stepSize_4(unmarshaled_stepSize_temp_4);
	float unmarshaled_widthModifier_temp_5 = 0.0f;
	unmarshaled_widthModifier_temp_5 = marshaled.___widthModifier_5;
	unmarshaled.set_widthModifier_5(unmarshaled_widthModifier_temp_5);
	float unmarshaled_reflectionBlur_temp_6 = 0.0f;
	unmarshaled_reflectionBlur_temp_6 = marshaled.___reflectionBlur_6;
	unmarshaled.set_reflectionBlur_6(unmarshaled_reflectionBlur_temp_6);
	bool unmarshaled_reflectBackfaces_temp_7 = false;
	unmarshaled_reflectBackfaces_temp_7 = static_cast<bool>(marshaled.___reflectBackfaces_7);
	unmarshaled.set_reflectBackfaces_7(unmarshaled_reflectBackfaces_temp_7);
}
// Conversion method for clean up from marshalling of: UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/ReflectionSettings
IL2CPP_EXTERN_C void ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshal_pinvoke_cleanup(ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/ReflectionSettings
IL2CPP_EXTERN_C void ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshal_com(const ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1& unmarshaled, ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshaled_com& marshaled)
{
	marshaled.___blendType_0 = unmarshaled.get_blendType_0();
	marshaled.___reflectionQuality_1 = unmarshaled.get_reflectionQuality_1();
	marshaled.___maxDistance_2 = unmarshaled.get_maxDistance_2();
	marshaled.___iterationCount_3 = unmarshaled.get_iterationCount_3();
	marshaled.___stepSize_4 = unmarshaled.get_stepSize_4();
	marshaled.___widthModifier_5 = unmarshaled.get_widthModifier_5();
	marshaled.___reflectionBlur_6 = unmarshaled.get_reflectionBlur_6();
	marshaled.___reflectBackfaces_7 = static_cast<int32_t>(unmarshaled.get_reflectBackfaces_7());
}
IL2CPP_EXTERN_C void ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshal_com_back(const ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshaled_com& marshaled, ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1& unmarshaled)
{
	int32_t unmarshaled_blendType_temp_0 = 0;
	unmarshaled_blendType_temp_0 = marshaled.___blendType_0;
	unmarshaled.set_blendType_0(unmarshaled_blendType_temp_0);
	int32_t unmarshaled_reflectionQuality_temp_1 = 0;
	unmarshaled_reflectionQuality_temp_1 = marshaled.___reflectionQuality_1;
	unmarshaled.set_reflectionQuality_1(unmarshaled_reflectionQuality_temp_1);
	float unmarshaled_maxDistance_temp_2 = 0.0f;
	unmarshaled_maxDistance_temp_2 = marshaled.___maxDistance_2;
	unmarshaled.set_maxDistance_2(unmarshaled_maxDistance_temp_2);
	int32_t unmarshaled_iterationCount_temp_3 = 0;
	unmarshaled_iterationCount_temp_3 = marshaled.___iterationCount_3;
	unmarshaled.set_iterationCount_3(unmarshaled_iterationCount_temp_3);
	int32_t unmarshaled_stepSize_temp_4 = 0;
	unmarshaled_stepSize_temp_4 = marshaled.___stepSize_4;
	unmarshaled.set_stepSize_4(unmarshaled_stepSize_temp_4);
	float unmarshaled_widthModifier_temp_5 = 0.0f;
	unmarshaled_widthModifier_temp_5 = marshaled.___widthModifier_5;
	unmarshaled.set_widthModifier_5(unmarshaled_widthModifier_temp_5);
	float unmarshaled_reflectionBlur_temp_6 = 0.0f;
	unmarshaled_reflectionBlur_temp_6 = marshaled.___reflectionBlur_6;
	unmarshaled.set_reflectionBlur_6(unmarshaled_reflectionBlur_temp_6);
	bool unmarshaled_reflectBackfaces_temp_7 = false;
	unmarshaled_reflectBackfaces_temp_7 = static_cast<bool>(marshaled.___reflectBackfaces_7);
	unmarshaled.set_reflectBackfaces_7(unmarshaled_reflectBackfaces_temp_7);
}
// Conversion method for clean up from marshalling of: UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/ReflectionSettings
IL2CPP_EXTERN_C void ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshal_com_cleanup(ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshaled_com& marshaled)
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


// Conversion methods for marshalling of: UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings
IL2CPP_EXTERN_C void SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F_marshal_pinvoke(const SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F& unmarshaled, SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F_marshaled_pinvoke& marshaled)
{
	ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshal_pinvoke(unmarshaled.get_reflectionSettings_0(), marshaled.___reflectionSettings_0);
	marshaled.___intensitySettings_1 = unmarshaled.get_intensitySettings_1();
	marshaled.___screenEdgeMask_2 = unmarshaled.get_screenEdgeMask_2();
}
IL2CPP_EXTERN_C void SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F_marshal_pinvoke_back(const SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F_marshaled_pinvoke& marshaled, SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F& unmarshaled)
{
	ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1  unmarshaled_reflectionSettings_temp_0;
	memset((&unmarshaled_reflectionSettings_temp_0), 0, sizeof(unmarshaled_reflectionSettings_temp_0));
	ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshal_pinvoke_back(marshaled.___reflectionSettings_0, unmarshaled_reflectionSettings_temp_0);
	unmarshaled.set_reflectionSettings_0(unmarshaled_reflectionSettings_temp_0);
	IntensitySettings_t8B6AAA0BEBDE793FDB08D59A6C6784CF85AD8C38  unmarshaled_intensitySettings_temp_1;
	memset((&unmarshaled_intensitySettings_temp_1), 0, sizeof(unmarshaled_intensitySettings_temp_1));
	unmarshaled_intensitySettings_temp_1 = marshaled.___intensitySettings_1;
	unmarshaled.set_intensitySettings_1(unmarshaled_intensitySettings_temp_1);
	ScreenEdgeMask_tAEAF832C1E0D10F6853A9E09463D468BE70A0A6D  unmarshaled_screenEdgeMask_temp_2;
	memset((&unmarshaled_screenEdgeMask_temp_2), 0, sizeof(unmarshaled_screenEdgeMask_temp_2));
	unmarshaled_screenEdgeMask_temp_2 = marshaled.___screenEdgeMask_2;
	unmarshaled.set_screenEdgeMask_2(unmarshaled_screenEdgeMask_temp_2);
}
// Conversion method for clean up from marshalling of: UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings
IL2CPP_EXTERN_C void SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F_marshal_pinvoke_cleanup(SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F_marshaled_pinvoke& marshaled)
{
	ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshal_pinvoke_cleanup(marshaled.___reflectionSettings_0);
}


// Conversion methods for marshalling of: UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings
IL2CPP_EXTERN_C void SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F_marshal_com(const SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F& unmarshaled, SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F_marshaled_com& marshaled)
{
	ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshal_com(unmarshaled.get_reflectionSettings_0(), marshaled.___reflectionSettings_0);
	marshaled.___intensitySettings_1 = unmarshaled.get_intensitySettings_1();
	marshaled.___screenEdgeMask_2 = unmarshaled.get_screenEdgeMask_2();
}
IL2CPP_EXTERN_C void SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F_marshal_com_back(const SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F_marshaled_com& marshaled, SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F& unmarshaled)
{
	ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1  unmarshaled_reflectionSettings_temp_0;
	memset((&unmarshaled_reflectionSettings_temp_0), 0, sizeof(unmarshaled_reflectionSettings_temp_0));
	ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshal_com_back(marshaled.___reflectionSettings_0, unmarshaled_reflectionSettings_temp_0);
	unmarshaled.set_reflectionSettings_0(unmarshaled_reflectionSettings_temp_0);
	IntensitySettings_t8B6AAA0BEBDE793FDB08D59A6C6784CF85AD8C38  unmarshaled_intensitySettings_temp_1;
	memset((&unmarshaled_intensitySettings_temp_1), 0, sizeof(unmarshaled_intensitySettings_temp_1));
	unmarshaled_intensitySettings_temp_1 = marshaled.___intensitySettings_1;
	unmarshaled.set_intensitySettings_1(unmarshaled_intensitySettings_temp_1);
	ScreenEdgeMask_tAEAF832C1E0D10F6853A9E09463D468BE70A0A6D  unmarshaled_screenEdgeMask_temp_2;
	memset((&unmarshaled_screenEdgeMask_temp_2), 0, sizeof(unmarshaled_screenEdgeMask_temp_2));
	unmarshaled_screenEdgeMask_temp_2 = marshaled.___screenEdgeMask_2;
	unmarshaled.set_screenEdgeMask_2(unmarshaled_screenEdgeMask_temp_2);
}
// Conversion method for clean up from marshalling of: UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings
IL2CPP_EXTERN_C void SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F_marshal_com_cleanup(SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F_marshaled_com& marshaled)
{
	ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1_marshal_com_cleanup(marshaled.___reflectionSettings_0);
}
// UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F  SSRSettings_get_defaultSettings_m12DB84A239488C90761A065C9EB773092648D740 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_Default;
		IL2CPP_RUNTIME_CLASS_INIT(SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F_il2cpp_TypeInfo_var);
		SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F  L_0 = ((SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F_StaticFields*)il2cpp_codegen_static_fields_for(SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F_il2cpp_TypeInfo_var))->get_s_Default_3();
		return L_0;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SSRSettings__cctor_mFA6EC02472CA2604F63027694A89BCD6023DF94F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	IntensitySettings_t8B6AAA0BEBDE793FDB08D59A6C6784CF85AD8C38  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ScreenEdgeMask_tAEAF832C1E0D10F6853A9E09463D468BE70A0A6D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// private static readonly SSRSettings s_Default = new SSRSettings
		// {
		//     reflectionSettings = new ReflectionSettings
		//     {
		//         blendType = SSRReflectionBlendType.PhysicallyBased,
		//         reflectionQuality = SSRResolution.High,
		//         maxDistance = 100.0f,
		//         iterationCount = 256,
		//         stepSize = 3,
		//         widthModifier = 0.5f,
		//         reflectionBlur = 1.0f,
		//         reflectBackfaces = true
		//     },
		// 
		//     intensitySettings = new IntensitySettings
		//     {
		//         reflectionMultiplier = 1.0f,
		//         fadeDistance = 100.0f,
		// 
		//         fresnelFade = 1.0f,
		//         fresnelFadePower = 1.0f,
		//     },
		// 
		//     screenEdgeMask = new ScreenEdgeMask
		//     {
		//         intensity = 0.03f
		//     }
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F ));
		il2cpp_codegen_initobj((&V_1), sizeof(ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1 ));
		(&V_1)->set_blendType_0(0);
		(&V_1)->set_reflectionQuality_1(0);
		(&V_1)->set_maxDistance_2((100.0f));
		(&V_1)->set_iterationCount_3(((int32_t)256));
		(&V_1)->set_stepSize_4(3);
		(&V_1)->set_widthModifier_5((0.5f));
		(&V_1)->set_reflectionBlur_6((1.0f));
		(&V_1)->set_reflectBackfaces_7((bool)1);
		ReflectionSettings_t6960753CA8B0C61FFD4324B60362E2E3BB0301C1  L_0 = V_1;
		(&V_0)->set_reflectionSettings_0(L_0);
		il2cpp_codegen_initobj((&V_2), sizeof(IntensitySettings_t8B6AAA0BEBDE793FDB08D59A6C6784CF85AD8C38 ));
		(&V_2)->set_reflectionMultiplier_0((1.0f));
		(&V_2)->set_fadeDistance_1((100.0f));
		(&V_2)->set_fresnelFade_2((1.0f));
		(&V_2)->set_fresnelFadePower_3((1.0f));
		IntensitySettings_t8B6AAA0BEBDE793FDB08D59A6C6784CF85AD8C38  L_1 = V_2;
		(&V_0)->set_intensitySettings_1(L_1);
		il2cpp_codegen_initobj((&V_3), sizeof(ScreenEdgeMask_tAEAF832C1E0D10F6853A9E09463D468BE70A0A6D ));
		(&V_3)->set_intensity_0((0.0299999993f));
		ScreenEdgeMask_tAEAF832C1E0D10F6853A9E09463D468BE70A0A6D  L_2 = V_3;
		(&V_0)->set_screenEdgeMask_2(L_2);
		SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F  L_3 = V_0;
		((SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F_StaticFields*)il2cpp_codegen_static_fields_for(SSRSettings_tF1006A7CD2576428C9BBEE8F2C614239C616999F_il2cpp_TypeInfo_var))->set_s_Default_3(L_3);
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
// System.Void DevionGames.SelectionHandler/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m06D252F7C6F95EC428D0222528A0376FA31937BF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9C90EFC120B73E67C0781C272253507C12FF9469_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9C90EFC120B73E67C0781C272253507C12FF9469 * L_0 = (U3CU3Ec_t9C90EFC120B73E67C0781C272253507C12FF9469 *)il2cpp_codegen_object_new(U3CU3Ec_t9C90EFC120B73E67C0781C272253507C12FF9469_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mDFDB153783C6B396C71C7BE16404D4842439AEA9(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t9C90EFC120B73E67C0781C272253507C12FF9469_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9C90EFC120B73E67C0781C272253507C12FF9469_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void DevionGames.SelectionHandler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDFDB153783C6B396C71C7BE16404D4842439AEA9 (U3CU3Ec_t9C90EFC120B73E67C0781C272253507C12FF9469 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// DevionGames.ISelectable DevionGames.SelectionHandler/<>c::<Update>b__17_0(UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CUpdateU3Eb__17_0_m6CCF7C497854DEED9C5610147F8602C324F0D6E5 (U3CU3Ec_t9C90EFC120B73E67C0781C272253507C12FF9469 * __this, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisISelectable_t7F312FFA8BEAC50F25A42430ABD841CB04B7CBAF_mD2000FFB92048614032F133E6893FF6E22C327DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ISelectable selectable = GetBestSelectable(hits.Select(x => x.collider.GetComponent<ISelectable>()).OfType<ISelectable>());
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0;
		L_0 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&___x0), /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Component_GetComponent_TisISelectable_t7F312FFA8BEAC50F25A42430ABD841CB04B7CBAF_mD2000FFB92048614032F133E6893FF6E22C327DF(L_0, /*hidden argument*/Component_GetComponent_TisISelectable_t7F312FFA8BEAC50F25A42430ABD841CB04B7CBAF_mD2000FFB92048614032F133E6893FF6E22C327DF_RuntimeMethod_var);
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
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/<>c__DisplayClass88_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass88_0__ctor_m572A8BCB7E0D6BF1A535DB64EB352F14E0EB7497 (U3CU3Ec__DisplayClass88_0_t71A2AD52D9F126499C639D05D5B330C8EDB8A08D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/<>c__DisplayClass88_0::<Setup>b__0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass88_0_U3CSetupU3Eb__0_mAD890F74F01B1875DB460F009AA8E135193CC127 (U3CU3Ec__DisplayClass88_0_t71A2AD52D9F126499C639D05D5B330C8EDB8A08D * __this, bool ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// if (Toggles[panelNum].isOn && toggleNavigation)
		SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257 * L_0 = __this->get_U3CU3E4__this_1();
		NullCheck(L_0);
		ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* L_1;
		L_1 = SimpleScrollSnap_get_Toggles_m68B3D8EECE325FDB7AE3F9E41EFAC83FB2D7584C_inline(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_panelNum_0();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		bool L_5;
		L_5 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257 * L_6 = __this->get_U3CU3E4__this_1();
		NullCheck(L_6);
		bool L_7 = L_6->get_toggleNavigation_23();
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		// GoToPanel(panelNum);
		SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257 * L_8 = __this->get_U3CU3E4__this_1();
		int32_t L_9 = __this->get_panelNum_0();
		NullCheck(L_8);
		SimpleScrollSnap_GoToPanel_mCF45C7E388B917C01C9BA91FA55DB00798CB43E2(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// });
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::get_Label()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TransitionEffect_get_Label_m7C1D184CCC57334AC47039614586E1B3248416E3 (TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA * __this, const RuntimeMethod* method)
{
	{
		// get { return label; }
		String_t* L_0 = __this->get_label_11();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::set_Label(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEffect_set_Label_m945A2786795A4F216041B490FDE4487BD6FDEB0E (TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// set { label = value; }
		String_t* L_0 = ___value0;
		__this->set_label_11(L_0);
		// set { label = value; }
		return;
	}
}
// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::get_MinValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransitionEffect_get_MinValue_m84CE49CC8E59945D2DD5CEC845276C48476A0720 (TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA * __this, const RuntimeMethod* method)
{
	{
		// get { return MinValue; }
		float L_0;
		L_0 = TransitionEffect_get_MinValue_m84CE49CC8E59945D2DD5CEC845276C48476A0720(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::set_MinValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEffect_set_MinValue_mAEFE4D5762E4B7BA9A46B51B943528A9FE248C11 (TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { minValue = value; }
		float L_0 = ___value0;
		__this->set_minValue_2(L_0);
		// set { minValue = value; }
		return;
	}
}
// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::get_MaxValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransitionEffect_get_MaxValue_m7F18015473B07E974FC5D1BBD7AE73827F73F0F7 (TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA * __this, const RuntimeMethod* method)
{
	{
		// get { return maxValue; }
		float L_0 = __this->get_maxValue_3();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::set_MaxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEffect_set_MaxValue_m2091B9DB5B168DD4D9198EF38BBFC9F764735BD7 (TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { maxValue = value; }
		float L_0 = ___value0;
		__this->set_maxValue_3(L_0);
		// set { maxValue = value; }
		return;
	}
}
// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::get_MinDisplacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransitionEffect_get_MinDisplacement_m34B4347121881CB5D4957CA62DE0D2E830CAB33C (TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA * __this, const RuntimeMethod* method)
{
	{
		// get { return minDisplacement; }
		float L_0 = __this->get_minDisplacement_0();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::set_MinDisplacement(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEffect_set_MinDisplacement_m29CA69139D1A741F966315F08230B5D19BFF0D7C (TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { minDisplacement = value; }
		float L_0 = ___value0;
		__this->set_minDisplacement_0(L_0);
		// set { minDisplacement = value; }
		return;
	}
}
// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::get_MaxDisplacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransitionEffect_get_MaxDisplacement_mD7087528C0A4BCFFE692A6C08B57A7FB1450FE79 (TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA * __this, const RuntimeMethod* method)
{
	{
		// get { return maxDisplacement; }
		float L_0 = __this->get_maxDisplacement_1();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::set_MaxDisplacement(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEffect_set_MaxDisplacement_mE75811C295DD9F6E82BF483C3B490ED4A8D2B5B8 (TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { maxDisplacement = value; }
		float L_0 = ___value0;
		__this->set_maxDisplacement_1(L_0);
		// set { maxDisplacement = value; }
		return;
	}
}
// UnityEngine.AnimationCurve DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::get_Function()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * TransitionEffect_get_Function_mB952EA7C4EC6327BF8C5AE719C15D9FA54530C7E (TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA * __this, const RuntimeMethod* method)
{
	{
		// get { return function; }
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = __this->get_function_12();
		return L_0;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::set_Function(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEffect_set_Function_m8A11736E8724BEFD9B70315539077D9CCFA48FDA (TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA * __this, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___value0, const RuntimeMethod* method)
{
	{
		// set { function = value; }
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = ___value0;
		__this->set_function_12(L_0);
		// set { function = value; }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::.ctor(System.String,System.Single,System.Single,System.Single,System.Single,UnityEngine.AnimationCurve,DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEffect__ctor_mD7B5325F2C0026F7AB6D663737E45F3CB3ABC45B (TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA * __this, String_t* ___label0, float ___minValue1, float ___maxValue2, float ___minDisplacement3, float ___maxDisplacement4, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___function5, SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257 * ___simpleScrollSnap6, const RuntimeMethod* method)
{
	{
		// public TransitionEffect(string label, float minValue, float maxValue, float minDisplacement, float maxDisplacement, AnimationCurve function, SimpleScrollSnap simpleScrollSnap)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.label = label;
		String_t* L_0 = ___label0;
		__this->set_label_11(L_0);
		// this.simpleScrollSnap = simpleScrollSnap;
		SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257 * L_1 = ___simpleScrollSnap6;
		__this->set_simpleScrollSnap_14(L_1);
		// this.minValue = minValue;
		float L_2 = ___minValue1;
		__this->set_minValue_2(L_2);
		// this.maxValue = maxValue;
		float L_3 = ___maxValue2;
		__this->set_maxValue_3(L_3);
		// this.minDisplacement = minDisplacement;
		float L_4 = ___minDisplacement3;
		__this->set_minDisplacement_0(L_4);
		// this.maxDisplacement = maxDisplacement;
		float L_5 = ___maxDisplacement4;
		__this->set_maxDisplacement_1(L_5);
		// this.function = function;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_6 = ___function5;
		__this->set_function_12(L_6);
		// SetDefaultValues(minValue, maxValue, minDisplacement, maxDisplacement, function);
		float L_7 = ___minValue1;
		float L_8 = ___maxValue2;
		float L_9 = ___minDisplacement3;
		float L_10 = ___maxDisplacement4;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_11 = ___function5;
		TransitionEffect_SetDefaultValues_m681EFF284683ACC2122EEC4A681E6F386B45F2B1(__this, L_7, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::SetDefaultValues(System.Single,System.Single,System.Single,System.Single,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEffect_SetDefaultValues_m681EFF284683ACC2122EEC4A681E6F386B45F2B1 (TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA * __this, float ___minValue0, float ___maxValue1, float ___minDisplacement2, float ___maxDisplacement3, AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___function4, const RuntimeMethod* method)
{
	{
		// defaultMinValue = minValue;
		float L_0 = ___minValue0;
		__this->set_defaultMinValue_4(L_0);
		// defaultMaxValue = maxValue;
		float L_1 = ___maxValue1;
		__this->set_defaultMaxValue_5(L_1);
		// defaultMinDisplacement = minDisplacement;
		float L_2 = ___minDisplacement2;
		__this->set_defaultMinDisplacement_6(L_2);
		// defaultMaxDisplacement = maxDisplacement;
		float L_3 = ___maxDisplacement3;
		__this->set_defaultMaxDisplacement_7(L_3);
		// defaultFunction = function;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = ___function4;
		__this->set_defaultFunction_13(L_4);
		// }
		return;
	}
}
// System.Void DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionEffect_Reset_mB117DC950BF6A5D39DAB05E2C46513A52040E4C7 (TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA * __this, const RuntimeMethod* method)
{
	{
		// minValue = defaultMinValue;
		float L_0 = __this->get_defaultMinValue_4();
		__this->set_minValue_2(L_0);
		// maxValue = defaultMaxValue;
		float L_1 = __this->get_defaultMaxValue_5();
		__this->set_maxValue_3(L_1);
		// minDisplacement = defaultMinDisplacement;
		float L_2 = __this->get_defaultMinDisplacement_6();
		__this->set_minDisplacement_0(L_2);
		// maxDisplacement = defaultMaxDisplacement;
		float L_3 = __this->get_defaultMaxDisplacement_7();
		__this->set_maxDisplacement_1(L_3);
		// function = defaultFunction;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_4 = __this->get_defaultFunction_13();
		__this->set_function_12(L_4);
		// }
		return;
	}
}
// System.Single DanielLochner.Assets.SimpleScrollSnap.SimpleScrollSnap/TransitionEffect::GetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TransitionEffect_GetValue_mE084DA988FC64D19B92B0D31D5649D7A19195B7F (TransitionEffect_tA661EC4BE983A672C2D9F06D0BF5C75D1C30ADCA * __this, float ___displacement0, const RuntimeMethod* method)
{
	{
		// return (function != null) ? function.Evaluate(displacement) : 0f;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = __this->get_function_12();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return (0.0f);
	}

IL_000e:
	{
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1 = __this->get_function_12();
		float L_2 = ___displacement0;
		NullCheck(L_1);
		float L_3;
		L_3 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// Conversion methods for marshalling of: SnowFairyCauldron/ChoicePhrase
IL2CPP_EXTERN_C void ChoicePhrase_t7C05E60215F75758BA3A4ABEF5F5FB2E6B393C53_marshal_pinvoke(const ChoicePhrase_t7C05E60215F75758BA3A4ABEF5F5FB2E6B393C53& unmarshaled, ChoicePhrase_t7C05E60215F75758BA3A4ABEF5F5FB2E6B393C53_marshaled_pinvoke& marshaled)
{
	marshaled.___choice_0 = unmarshaled.get_choice_0();
	marshaled.___phrase_1 = il2cpp_codegen_marshal_string(unmarshaled.get_phrase_1());
}
IL2CPP_EXTERN_C void ChoicePhrase_t7C05E60215F75758BA3A4ABEF5F5FB2E6B393C53_marshal_pinvoke_back(const ChoicePhrase_t7C05E60215F75758BA3A4ABEF5F5FB2E6B393C53_marshaled_pinvoke& marshaled, ChoicePhrase_t7C05E60215F75758BA3A4ABEF5F5FB2E6B393C53& unmarshaled)
{
	int32_t unmarshaled_choice_temp_0 = 0;
	unmarshaled_choice_temp_0 = marshaled.___choice_0;
	unmarshaled.set_choice_0(unmarshaled_choice_temp_0);
	unmarshaled.set_phrase_1(il2cpp_codegen_marshal_string_result(marshaled.___phrase_1));
}
// Conversion method for clean up from marshalling of: SnowFairyCauldron/ChoicePhrase
IL2CPP_EXTERN_C void ChoicePhrase_t7C05E60215F75758BA3A4ABEF5F5FB2E6B393C53_marshal_pinvoke_cleanup(ChoicePhrase_t7C05E60215F75758BA3A4ABEF5F5FB2E6B393C53_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___phrase_1);
	marshaled.___phrase_1 = NULL;
}
// Conversion methods for marshalling of: SnowFairyCauldron/ChoicePhrase
IL2CPP_EXTERN_C void ChoicePhrase_t7C05E60215F75758BA3A4ABEF5F5FB2E6B393C53_marshal_com(const ChoicePhrase_t7C05E60215F75758BA3A4ABEF5F5FB2E6B393C53& unmarshaled, ChoicePhrase_t7C05E60215F75758BA3A4ABEF5F5FB2E6B393C53_marshaled_com& marshaled)
{
	marshaled.___choice_0 = unmarshaled.get_choice_0();
	marshaled.___phrase_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_phrase_1());
}
IL2CPP_EXTERN_C void ChoicePhrase_t7C05E60215F75758BA3A4ABEF5F5FB2E6B393C53_marshal_com_back(const ChoicePhrase_t7C05E60215F75758BA3A4ABEF5F5FB2E6B393C53_marshaled_com& marshaled, ChoicePhrase_t7C05E60215F75758BA3A4ABEF5F5FB2E6B393C53& unmarshaled)
{
	int32_t unmarshaled_choice_temp_0 = 0;
	unmarshaled_choice_temp_0 = marshaled.___choice_0;
	unmarshaled.set_choice_0(unmarshaled_choice_temp_0);
	unmarshaled.set_phrase_1(il2cpp_codegen_marshal_bstring_result(marshaled.___phrase_1));
}
// Conversion method for clean up from marshalling of: SnowFairyCauldron/ChoicePhrase
IL2CPP_EXTERN_C void ChoicePhrase_t7C05E60215F75758BA3A4ABEF5F5FB2E6B393C53_marshal_com_cleanup(ChoicePhrase_t7C05E60215F75758BA3A4ABEF5F5FB2E6B393C53_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___phrase_1);
	marshaled.___phrase_1 = NULL;
}
// System.Void SnowFairyCauldron/ChoicePhrase::.ctor(SnowFairyCauldron/SnowFairyChoice,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoicePhrase__ctor_mAED528B92A6653F4CB920DC7FB4DDEDA3F1D19EA (ChoicePhrase_t7C05E60215F75758BA3A4ABEF5F5FB2E6B393C53 * __this, int32_t ___choice0, String_t* ___phrase1, const RuntimeMethod* method)
{
	{
		// this.choice = choice;
		int32_t L_0 = ___choice0;
		__this->set_choice_0(L_0);
		// this.phrase = phrase;
		String_t* L_1 = ___phrase1;
		__this->set_phrase_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ChoicePhrase__ctor_mAED528B92A6653F4CB920DC7FB4DDEDA3F1D19EA_AdjustorThunk (RuntimeObject * __this, int32_t ___choice0, String_t* ___phrase1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ChoicePhrase_t7C05E60215F75758BA3A4ABEF5F5FB2E6B393C53 * _thisAdjusted = reinterpret_cast<ChoicePhrase_t7C05E60215F75758BA3A4ABEF5F5FB2E6B393C53 *>(__this + _offset);
	ChoicePhrase__ctor_mAED528B92A6653F4CB920DC7FB4DDEDA3F1D19EA(_thisAdjusted, ___choice0, ___phrase1, method);
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
// Conversion methods for marshalling of: SnowFairyCauldron_v2/ChoicePhrase
IL2CPP_EXTERN_C void ChoicePhrase_tCEE30AE4523CD12B954B4493B0B514CF46926AB2_marshal_pinvoke(const ChoicePhrase_tCEE30AE4523CD12B954B4493B0B514CF46926AB2& unmarshaled, ChoicePhrase_tCEE30AE4523CD12B954B4493B0B514CF46926AB2_marshaled_pinvoke& marshaled)
{
	marshaled.___choice_0 = unmarshaled.get_choice_0();
	marshaled.___phrase_1 = il2cpp_codegen_marshal_string(unmarshaled.get_phrase_1());
}
IL2CPP_EXTERN_C void ChoicePhrase_tCEE30AE4523CD12B954B4493B0B514CF46926AB2_marshal_pinvoke_back(const ChoicePhrase_tCEE30AE4523CD12B954B4493B0B514CF46926AB2_marshaled_pinvoke& marshaled, ChoicePhrase_tCEE30AE4523CD12B954B4493B0B514CF46926AB2& unmarshaled)
{
	int32_t unmarshaled_choice_temp_0 = 0;
	unmarshaled_choice_temp_0 = marshaled.___choice_0;
	unmarshaled.set_choice_0(unmarshaled_choice_temp_0);
	unmarshaled.set_phrase_1(il2cpp_codegen_marshal_string_result(marshaled.___phrase_1));
}
// Conversion method for clean up from marshalling of: SnowFairyCauldron_v2/ChoicePhrase
IL2CPP_EXTERN_C void ChoicePhrase_tCEE30AE4523CD12B954B4493B0B514CF46926AB2_marshal_pinvoke_cleanup(ChoicePhrase_tCEE30AE4523CD12B954B4493B0B514CF46926AB2_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___phrase_1);
	marshaled.___phrase_1 = NULL;
}
// Conversion methods for marshalling of: SnowFairyCauldron_v2/ChoicePhrase
IL2CPP_EXTERN_C void ChoicePhrase_tCEE30AE4523CD12B954B4493B0B514CF46926AB2_marshal_com(const ChoicePhrase_tCEE30AE4523CD12B954B4493B0B514CF46926AB2& unmarshaled, ChoicePhrase_tCEE30AE4523CD12B954B4493B0B514CF46926AB2_marshaled_com& marshaled)
{
	marshaled.___choice_0 = unmarshaled.get_choice_0();
	marshaled.___phrase_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_phrase_1());
}
IL2CPP_EXTERN_C void ChoicePhrase_tCEE30AE4523CD12B954B4493B0B514CF46926AB2_marshal_com_back(const ChoicePhrase_tCEE30AE4523CD12B954B4493B0B514CF46926AB2_marshaled_com& marshaled, ChoicePhrase_tCEE30AE4523CD12B954B4493B0B514CF46926AB2& unmarshaled)
{
	int32_t unmarshaled_choice_temp_0 = 0;
	unmarshaled_choice_temp_0 = marshaled.___choice_0;
	unmarshaled.set_choice_0(unmarshaled_choice_temp_0);
	unmarshaled.set_phrase_1(il2cpp_codegen_marshal_bstring_result(marshaled.___phrase_1));
}
// Conversion method for clean up from marshalling of: SnowFairyCauldron_v2/ChoicePhrase
IL2CPP_EXTERN_C void ChoicePhrase_tCEE30AE4523CD12B954B4493B0B514CF46926AB2_marshal_com_cleanup(ChoicePhrase_tCEE30AE4523CD12B954B4493B0B514CF46926AB2_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___phrase_1);
	marshaled.___phrase_1 = NULL;
}
// System.Void SnowFairyCauldron_v2/ChoicePhrase::.ctor(SnowFairyCauldron_v2/SnowFairyChoice,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoicePhrase__ctor_m7F7603C26EBBD3242AB146A14A686EFB46814B8A (ChoicePhrase_tCEE30AE4523CD12B954B4493B0B514CF46926AB2 * __this, int32_t ___choice0, String_t* ___phrase1, const RuntimeMethod* method)
{
	{
		// this.choice = choice;
		int32_t L_0 = ___choice0;
		__this->set_choice_0(L_0);
		// this.phrase = phrase;
		String_t* L_1 = ___phrase1;
		__this->set_phrase_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ChoicePhrase__ctor_m7F7603C26EBBD3242AB146A14A686EFB46814B8A_AdjustorThunk (RuntimeObject * __this, int32_t ___choice0, String_t* ___phrase1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ChoicePhrase_tCEE30AE4523CD12B954B4493B0B514CF46926AB2 * _thisAdjusted = reinterpret_cast<ChoicePhrase_tCEE30AE4523CD12B954B4493B0B514CF46926AB2 *>(__this + _offset);
	ChoicePhrase__ctor_m7F7603C26EBBD3242AB146A14A686EFB46814B8A(_thisAdjusted, ___choice0, ___phrase1, method);
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
// Conversion methods for marshalling of: SnowFairyMirrorController/ChoicePhrase
IL2CPP_EXTERN_C void ChoicePhrase_t96AFA26823C3EA543E8E9B235929FAE81BD75DEA_marshal_pinvoke(const ChoicePhrase_t96AFA26823C3EA543E8E9B235929FAE81BD75DEA& unmarshaled, ChoicePhrase_t96AFA26823C3EA543E8E9B235929FAE81BD75DEA_marshaled_pinvoke& marshaled)
{
	marshaled.___choice_0 = unmarshaled.get_choice_0();
	marshaled.___phrase_1 = il2cpp_codegen_marshal_string(unmarshaled.get_phrase_1());
}
IL2CPP_EXTERN_C void ChoicePhrase_t96AFA26823C3EA543E8E9B235929FAE81BD75DEA_marshal_pinvoke_back(const ChoicePhrase_t96AFA26823C3EA543E8E9B235929FAE81BD75DEA_marshaled_pinvoke& marshaled, ChoicePhrase_t96AFA26823C3EA543E8E9B235929FAE81BD75DEA& unmarshaled)
{
	int32_t unmarshaled_choice_temp_0 = 0;
	unmarshaled_choice_temp_0 = marshaled.___choice_0;
	unmarshaled.set_choice_0(unmarshaled_choice_temp_0);
	unmarshaled.set_phrase_1(il2cpp_codegen_marshal_string_result(marshaled.___phrase_1));
}
// Conversion method for clean up from marshalling of: SnowFairyMirrorController/ChoicePhrase
IL2CPP_EXTERN_C void ChoicePhrase_t96AFA26823C3EA543E8E9B235929FAE81BD75DEA_marshal_pinvoke_cleanup(ChoicePhrase_t96AFA26823C3EA543E8E9B235929FAE81BD75DEA_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___phrase_1);
	marshaled.___phrase_1 = NULL;
}
// Conversion methods for marshalling of: SnowFairyMirrorController/ChoicePhrase
IL2CPP_EXTERN_C void ChoicePhrase_t96AFA26823C3EA543E8E9B235929FAE81BD75DEA_marshal_com(const ChoicePhrase_t96AFA26823C3EA543E8E9B235929FAE81BD75DEA& unmarshaled, ChoicePhrase_t96AFA26823C3EA543E8E9B235929FAE81BD75DEA_marshaled_com& marshaled)
{
	marshaled.___choice_0 = unmarshaled.get_choice_0();
	marshaled.___phrase_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_phrase_1());
}
IL2CPP_EXTERN_C void ChoicePhrase_t96AFA26823C3EA543E8E9B235929FAE81BD75DEA_marshal_com_back(const ChoicePhrase_t96AFA26823C3EA543E8E9B235929FAE81BD75DEA_marshaled_com& marshaled, ChoicePhrase_t96AFA26823C3EA543E8E9B235929FAE81BD75DEA& unmarshaled)
{
	int32_t unmarshaled_choice_temp_0 = 0;
	unmarshaled_choice_temp_0 = marshaled.___choice_0;
	unmarshaled.set_choice_0(unmarshaled_choice_temp_0);
	unmarshaled.set_phrase_1(il2cpp_codegen_marshal_bstring_result(marshaled.___phrase_1));
}
// Conversion method for clean up from marshalling of: SnowFairyMirrorController/ChoicePhrase
IL2CPP_EXTERN_C void ChoicePhrase_t96AFA26823C3EA543E8E9B235929FAE81BD75DEA_marshal_com_cleanup(ChoicePhrase_t96AFA26823C3EA543E8E9B235929FAE81BD75DEA_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___phrase_1);
	marshaled.___phrase_1 = NULL;
}
// System.Void SnowFairyMirrorController/ChoicePhrase::.ctor(SnowFairyMirrorController/SnowFairyChoice,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoicePhrase__ctor_mC60BEF08902829C1F7E4A54003D22DB1618E9DC8 (ChoicePhrase_t96AFA26823C3EA543E8E9B235929FAE81BD75DEA * __this, int32_t ___choice0, String_t* ___phrase1, const RuntimeMethod* method)
{
	{
		// this.choice = choice;
		int32_t L_0 = ___choice0;
		__this->set_choice_0(L_0);
		// this.phrase = phrase;
		String_t* L_1 = ___phrase1;
		__this->set_phrase_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ChoicePhrase__ctor_mC60BEF08902829C1F7E4A54003D22DB1618E9DC8_AdjustorThunk (RuntimeObject * __this, int32_t ___choice0, String_t* ___phrase1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ChoicePhrase_t96AFA26823C3EA543E8E9B235929FAE81BD75DEA * _thisAdjusted = reinterpret_cast<ChoicePhrase_t96AFA26823C3EA543E8E9B235929FAE81BD75DEA *>(__this + _offset);
	ChoicePhrase__ctor_mC60BEF08902829C1F7E4A54003D22DB1618E9DC8(_thisAdjusted, ___choice0, ___phrase1, method);
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
// System.Void DevionGames.UIWidgets.Spinner/<Decrease>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDecreaseU3Ed__16__ctor_m79C7844D2F716AD97BCB6C3FBC417A74BD563184 (U3CDecreaseU3Ed__16_tFD60E6E10A72C519CE4134147CE2ED4E53F94BF9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DevionGames.UIWidgets.Spinner/<Decrease>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDecreaseU3Ed__16_System_IDisposable_Dispose_m7D2758AF104C990C0053B7B2D4749B6D02A7E384 (U3CDecreaseU3Ed__16_tFD60E6E10A72C519CE4134147CE2ED4E53F94BF9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DevionGames.UIWidgets.Spinner/<Decrease>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDecreaseU3Ed__16_MoveNext_m47189646D43F5868073F32A549BF1EDCBF95CF74 (U3CDecreaseU3Ed__16_tFD60E6E10A72C519CE4134147CE2ED4E53F94BF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// current = Mathf.Clamp (current-step, min, max);
		Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A * L_4 = V_1;
		Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A * L_5 = V_1;
		NullCheck(L_5);
		float L_6;
		L_6 = Spinner_get_current_mA9512C84E9F64BF491A81AB348A026905FF78C17_inline(L_5, /*hidden argument*/NULL);
		Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A * L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->get_step_6();
		Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A * L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->get_min_7();
		Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A * L_11 = V_1;
		NullCheck(L_11);
		float L_12 = L_11->get_max_8();
		float L_13;
		L_13 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)L_6, (float)L_8)), L_10, L_12, /*hidden argument*/NULL);
		NullCheck(L_4);
		Spinner_set_current_mE13F69A6B53AFA858BB01BE7857CB2C6E0A29094(L_4, L_13, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(changeDelay);
		Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A * L_14 = V_1;
		NullCheck(L_14);
		float L_15 = L_14->get_changeDelay_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_16 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_16, L_15, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_16);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true) {
		goto IL_001e;
	}
}
// System.Object DevionGames.UIWidgets.Spinner/<Decrease>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDecreaseU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA4381B54247B588B8354405B6B555FDDA9DED275 (U3CDecreaseU3Ed__16_tFD60E6E10A72C519CE4134147CE2ED4E53F94BF9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DevionGames.UIWidgets.Spinner/<Decrease>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDecreaseU3Ed__16_System_Collections_IEnumerator_Reset_m8D5FBE32C07FB8C3018577E453973F951E134FFD (U3CDecreaseU3Ed__16_tFD60E6E10A72C519CE4134147CE2ED4E53F94BF9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDecreaseU3Ed__16_System_Collections_IEnumerator_Reset_m8D5FBE32C07FB8C3018577E453973F951E134FFD_RuntimeMethod_var)));
	}
}
// System.Object DevionGames.UIWidgets.Spinner/<Decrease>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDecreaseU3Ed__16_System_Collections_IEnumerator_get_Current_mD968B0F31C0D4943E2799F94FD953373669351EE (U3CDecreaseU3Ed__16_tFD60E6E10A72C519CE4134147CE2ED4E53F94BF9 * __this, const RuntimeMethod* method)
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
// System.Void DevionGames.UIWidgets.Spinner/<Increase>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIncreaseU3Ed__15__ctor_mFF9C5AD19CC8C3B3E38E0B3A16CC535BA5F810AE (U3CIncreaseU3Ed__15_t91B32DDF8A6BD9F2C57D972B6CBF24B394BA73AC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DevionGames.UIWidgets.Spinner/<Increase>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIncreaseU3Ed__15_System_IDisposable_Dispose_m2930D11C1D9E5701B8437D77CB7168C5000D1377 (U3CIncreaseU3Ed__15_t91B32DDF8A6BD9F2C57D972B6CBF24B394BA73AC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DevionGames.UIWidgets.Spinner/<Increase>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CIncreaseU3Ed__15_MoveNext_mD518A8DB01F61D25B6A5D14C7A5D6CBD1FEBA438 (U3CIncreaseU3Ed__15_t91B32DDF8A6BD9F2C57D972B6CBF24B394BA73AC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// current = Mathf.Clamp (current+step, min, max);
		Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A * L_4 = V_1;
		Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A * L_5 = V_1;
		NullCheck(L_5);
		float L_6;
		L_6 = Spinner_get_current_mA9512C84E9F64BF491A81AB348A026905FF78C17_inline(L_5, /*hidden argument*/NULL);
		Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A * L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->get_step_6();
		Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A * L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->get_min_7();
		Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A * L_11 = V_1;
		NullCheck(L_11);
		float L_12 = L_11->get_max_8();
		float L_13;
		L_13 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)L_6, (float)L_8)), L_10, L_12, /*hidden argument*/NULL);
		NullCheck(L_4);
		Spinner_set_current_mE13F69A6B53AFA858BB01BE7857CB2C6E0A29094(L_4, L_13, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(changeDelay);
		Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A * L_14 = V_1;
		NullCheck(L_14);
		float L_15 = L_14->get_changeDelay_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_16 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_16, L_15, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_16);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true) {
		goto IL_001e;
	}
}
// System.Object DevionGames.UIWidgets.Spinner/<Increase>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIncreaseU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAE7AC5DDE0977CE74EFE728C709376DD2EED3885 (U3CIncreaseU3Ed__15_t91B32DDF8A6BD9F2C57D972B6CBF24B394BA73AC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DevionGames.UIWidgets.Spinner/<Increase>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIncreaseU3Ed__15_System_Collections_IEnumerator_Reset_m34D0717334FD291C8138B4B9F971265797F4FFE0 (U3CIncreaseU3Ed__15_t91B32DDF8A6BD9F2C57D972B6CBF24B394BA73AC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CIncreaseU3Ed__15_System_Collections_IEnumerator_Reset_m34D0717334FD291C8138B4B9F971265797F4FFE0_RuntimeMethod_var)));
	}
}
// System.Object DevionGames.UIWidgets.Spinner/<Increase>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIncreaseU3Ed__15_System_Collections_IEnumerator_get_Current_mE033049BA8C1D5B23109C754E1082E4D55A659DA (U3CIncreaseU3Ed__15_t91B32DDF8A6BD9F2C57D972B6CBF24B394BA73AC * __this, const RuntimeMethod* method)
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
// System.Void DevionGames.UIWidgets.Spinner/SpinnerEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinnerEvent__ctor_m99C20DB2712D4334BBC3399CDF63B809D72FCD2C (SpinnerEvent_tA26213AF983D08EC23570344A216BDD9450D540E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED(__this, /*hidden argument*/UnityEvent_1__ctor_m246DC0A35C4C4D26AD4DCE093E231B72C66C86ED_RuntimeMethod_var);
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
// System.Void DevionGames.UIWidgets.Spinner/SpinnerTextEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinnerTextEvent__ctor_mBBE9FE5092CDA52B1CAC4FD9CF3E81031FC77D5B (SpinnerTextEvent_tBD023BBE00BF8572757F8246043BC278C9EB6EF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8(__this, /*hidden argument*/UnityEvent_1__ctor_mD50FDA7FD92E5D18A75BF906A19D113AB769CDA8_RuntimeMethod_var);
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
// System.Void DevionGames.UIWidgets.Tab/TabEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabEvent__ctor_m37331E87B052A84B9F3CB58776AA643E990DCEBE (TabEvent_t76A44A6361E5D7485A54DAF31AB97CFC3B67D5A2 * __this, const RuntimeMethod* method)
{
	{
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(__this, /*hidden argument*/NULL);
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
// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/BasicsSettings UnityStandardAssets.CinematicEffects.TonemappingColorGrading/BasicsSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BasicsSettings_tCD0CFD2C3C62C6A9E002B8E4CD4CAAB56BBDF04F  BasicsSettings_get_defaultSettings_m06FB3E1264A8BA305B98C0E9512281CB3C419AFE (const RuntimeMethod* method)
{
	BasicsSettings_tCD0CFD2C3C62C6A9E002B8E4CD4CAAB56BBDF04F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new BasicsSettings
		// {
		//     temperatureShift = 0f,
		//     tint = 0f,
		//     contrast = 1f,
		//     hue = 0f,
		//     saturation = 1f,
		//     value = 1f,
		//     vibrance = 0f,
		//     gain = 1f,
		//     gamma = 1f
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(BasicsSettings_tCD0CFD2C3C62C6A9E002B8E4CD4CAAB56BBDF04F ));
		(&V_0)->set_temperatureShift_0((0.0f));
		(&V_0)->set_tint_1((0.0f));
		(&V_0)->set_contrast_6((1.0f));
		(&V_0)->set_hue_2((0.0f));
		(&V_0)->set_saturation_3((1.0f));
		(&V_0)->set_value_5((1.0f));
		(&V_0)->set_vibrance_4((0.0f));
		(&V_0)->set_gain_7((1.0f));
		(&V_0)->set_gamma_8((1.0f));
		BasicsSettings_tCD0CFD2C3C62C6A9E002B8E4CD4CAAB56BBDF04F  L_0 = V_0;
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
// System.Void UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ChannelMixer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelMixer__ctor_mFE0234CB5275EF16DCE9B8C165B85FBEA3649860 (ChannelMixer_t400A30E42EF3713FEBAC135F5692468FE39A7A12 * __this, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ChannelMixerSettings
IL2CPP_EXTERN_C void ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshal_pinvoke(const ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744& unmarshaled, ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshaled_pinvoke& marshaled)
{
	marshaled.___currentChannel_0 = unmarshaled.get_currentChannel_0();
	if (unmarshaled.get_channels_1() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_channels_Length = (unmarshaled.get_channels_1())->max_length;
		marshaled.___channels_1 = il2cpp_codegen_marshal_allocate_array<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E >(_unmarshaled_channels_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_channels_Length); i++)
		{
			(marshaled.___channels_1)[i] = (unmarshaled.get_channels_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___channels_1 = NULL;
	}
}
IL2CPP_EXTERN_C void ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshal_pinvoke_back(const ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshaled_pinvoke& marshaled, ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_currentChannel_temp_0 = 0;
	unmarshaled_currentChannel_temp_0 = marshaled.___currentChannel_0;
	unmarshaled.set_currentChannel_0(unmarshaled_currentChannel_temp_0);
	if (marshaled.___channels_1 != NULL)
	{
		if (unmarshaled.get_channels_1() == NULL)
		{
			unmarshaled.set_channels_1(reinterpret_cast<Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*>((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_channels_1())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_channels_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___channels_1)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ChannelMixerSettings
IL2CPP_EXTERN_C void ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshal_pinvoke_cleanup(ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshaled_pinvoke& marshaled)
{
	if (marshaled.___channels_1 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___channels_1);
		marshaled.___channels_1 = NULL;
	}
}
// Conversion methods for marshalling of: UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ChannelMixerSettings
IL2CPP_EXTERN_C void ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshal_com(const ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744& unmarshaled, ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshaled_com& marshaled)
{
	marshaled.___currentChannel_0 = unmarshaled.get_currentChannel_0();
	if (unmarshaled.get_channels_1() != NULL)
	{
		il2cpp_array_size_t _unmarshaled_channels_Length = (unmarshaled.get_channels_1())->max_length;
		marshaled.___channels_1 = il2cpp_codegen_marshal_allocate_array<Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E >(_unmarshaled_channels_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled_channels_Length); i++)
		{
			(marshaled.___channels_1)[i] = (unmarshaled.get_channels_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	else
	{
		marshaled.___channels_1 = NULL;
	}
}
IL2CPP_EXTERN_C void ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshal_com_back(const ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshaled_com& marshaled, ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_currentChannel_temp_0 = 0;
	unmarshaled_currentChannel_temp_0 = marshaled.___currentChannel_0;
	unmarshaled.set_currentChannel_0(unmarshaled_currentChannel_temp_0);
	if (marshaled.___channels_1 != NULL)
	{
		if (unmarshaled.get_channels_1() == NULL)
		{
			unmarshaled.set_channels_1(reinterpret_cast<Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*>((Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get_channels_1())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get_channels_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___channels_1)[i]);
		}
	}
}
// Conversion method for clean up from marshalling of: UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ChannelMixerSettings
IL2CPP_EXTERN_C void ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshal_com_cleanup(ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshaled_com& marshaled)
{
	if (marshaled.___channels_1 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.___channels_1);
		marshaled.___channels_1 = NULL;
	}
}
// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ChannelMixerSettings UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ChannelMixerSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744  ChannelMixerSettings_get_defaultSettings_m6B810343A0A0BC8825D26C4695B61871DC421778 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new ChannelMixerSettings
		// {
		//     currentChannel = 0,
		//     channels = new[]
		//     {
		//         new Vector3(1f, 0f, 0f),
		//         new Vector3(0f, 1f, 0f),
		//         new Vector3(0f, 0f, 1f)
		//     }
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744 ));
		(&V_0)->set_currentChannel_0(0);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)3);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = L_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_5 = L_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_6);
		(&V_0)->set_channels_1(L_5);
		ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744  L_7 = V_0;
		return L_7;
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


// Conversion methods for marshalling of: UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorGradingSettings
IL2CPP_EXTERN_C void ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F_marshal_pinvoke(const ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F& unmarshaled, ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F_marshaled_pinvoke& marshaled)
{
	marshaled.___enabled_0 = static_cast<int32_t>(unmarshaled.get_enabled_0());
	marshaled.___precision_1 = unmarshaled.get_precision_1();
	marshaled.___colorWheels_2 = unmarshaled.get_colorWheels_2();
	marshaled.___basics_3 = unmarshaled.get_basics_3();
	ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshal_pinvoke(unmarshaled.get_channelMixer_4(), marshaled.___channelMixer_4);
	marshaled.___curves_5 = unmarshaled.get_curves_5();
	marshaled.___useDithering_6 = static_cast<int32_t>(unmarshaled.get_useDithering_6());
	marshaled.___showDebug_7 = static_cast<int32_t>(unmarshaled.get_showDebug_7());
}
IL2CPP_EXTERN_C void ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F_marshal_pinvoke_back(const ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F_marshaled_pinvoke& marshaled, ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F& unmarshaled)
{
	bool unmarshaled_enabled_temp_0 = false;
	unmarshaled_enabled_temp_0 = static_cast<bool>(marshaled.___enabled_0);
	unmarshaled.set_enabled_0(unmarshaled_enabled_temp_0);
	int32_t unmarshaled_precision_temp_1 = 0;
	unmarshaled_precision_temp_1 = marshaled.___precision_1;
	unmarshaled.set_precision_1(unmarshaled_precision_temp_1);
	ColorWheelsSettings_tA1F7B01E603F94472F1DECDE81F9F0C09DAA7DC9  unmarshaled_colorWheels_temp_2;
	memset((&unmarshaled_colorWheels_temp_2), 0, sizeof(unmarshaled_colorWheels_temp_2));
	unmarshaled_colorWheels_temp_2 = marshaled.___colorWheels_2;
	unmarshaled.set_colorWheels_2(unmarshaled_colorWheels_temp_2);
	BasicsSettings_tCD0CFD2C3C62C6A9E002B8E4CD4CAAB56BBDF04F  unmarshaled_basics_temp_3;
	memset((&unmarshaled_basics_temp_3), 0, sizeof(unmarshaled_basics_temp_3));
	unmarshaled_basics_temp_3 = marshaled.___basics_3;
	unmarshaled.set_basics_3(unmarshaled_basics_temp_3);
	ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744  unmarshaled_channelMixer_temp_4;
	memset((&unmarshaled_channelMixer_temp_4), 0, sizeof(unmarshaled_channelMixer_temp_4));
	ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshal_pinvoke_back(marshaled.___channelMixer_4, unmarshaled_channelMixer_temp_4);
	unmarshaled.set_channelMixer_4(unmarshaled_channelMixer_temp_4);
	CurvesSettings_t451DB71CD864FD8AECCB77D60CA7AF61781C287D  unmarshaled_curves_temp_5;
	memset((&unmarshaled_curves_temp_5), 0, sizeof(unmarshaled_curves_temp_5));
	unmarshaled_curves_temp_5 = marshaled.___curves_5;
	unmarshaled.set_curves_5(unmarshaled_curves_temp_5);
	bool unmarshaled_useDithering_temp_6 = false;
	unmarshaled_useDithering_temp_6 = static_cast<bool>(marshaled.___useDithering_6);
	unmarshaled.set_useDithering_6(unmarshaled_useDithering_temp_6);
	bool unmarshaled_showDebug_temp_7 = false;
	unmarshaled_showDebug_temp_7 = static_cast<bool>(marshaled.___showDebug_7);
	unmarshaled.set_showDebug_7(unmarshaled_showDebug_temp_7);
}
// Conversion method for clean up from marshalling of: UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorGradingSettings
IL2CPP_EXTERN_C void ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F_marshal_pinvoke_cleanup(ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F_marshaled_pinvoke& marshaled)
{
	ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshal_pinvoke_cleanup(marshaled.___channelMixer_4);
}


// Conversion methods for marshalling of: UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorGradingSettings
IL2CPP_EXTERN_C void ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F_marshal_com(const ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F& unmarshaled, ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F_marshaled_com& marshaled)
{
	marshaled.___enabled_0 = static_cast<int32_t>(unmarshaled.get_enabled_0());
	marshaled.___precision_1 = unmarshaled.get_precision_1();
	marshaled.___colorWheels_2 = unmarshaled.get_colorWheels_2();
	marshaled.___basics_3 = unmarshaled.get_basics_3();
	ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshal_com(unmarshaled.get_channelMixer_4(), marshaled.___channelMixer_4);
	marshaled.___curves_5 = unmarshaled.get_curves_5();
	marshaled.___useDithering_6 = static_cast<int32_t>(unmarshaled.get_useDithering_6());
	marshaled.___showDebug_7 = static_cast<int32_t>(unmarshaled.get_showDebug_7());
}
IL2CPP_EXTERN_C void ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F_marshal_com_back(const ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F_marshaled_com& marshaled, ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F& unmarshaled)
{
	bool unmarshaled_enabled_temp_0 = false;
	unmarshaled_enabled_temp_0 = static_cast<bool>(marshaled.___enabled_0);
	unmarshaled.set_enabled_0(unmarshaled_enabled_temp_0);
	int32_t unmarshaled_precision_temp_1 = 0;
	unmarshaled_precision_temp_1 = marshaled.___precision_1;
	unmarshaled.set_precision_1(unmarshaled_precision_temp_1);
	ColorWheelsSettings_tA1F7B01E603F94472F1DECDE81F9F0C09DAA7DC9  unmarshaled_colorWheels_temp_2;
	memset((&unmarshaled_colorWheels_temp_2), 0, sizeof(unmarshaled_colorWheels_temp_2));
	unmarshaled_colorWheels_temp_2 = marshaled.___colorWheels_2;
	unmarshaled.set_colorWheels_2(unmarshaled_colorWheels_temp_2);
	BasicsSettings_tCD0CFD2C3C62C6A9E002B8E4CD4CAAB56BBDF04F  unmarshaled_basics_temp_3;
	memset((&unmarshaled_basics_temp_3), 0, sizeof(unmarshaled_basics_temp_3));
	unmarshaled_basics_temp_3 = marshaled.___basics_3;
	unmarshaled.set_basics_3(unmarshaled_basics_temp_3);
	ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744  unmarshaled_channelMixer_temp_4;
	memset((&unmarshaled_channelMixer_temp_4), 0, sizeof(unmarshaled_channelMixer_temp_4));
	ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshal_com_back(marshaled.___channelMixer_4, unmarshaled_channelMixer_temp_4);
	unmarshaled.set_channelMixer_4(unmarshaled_channelMixer_temp_4);
	CurvesSettings_t451DB71CD864FD8AECCB77D60CA7AF61781C287D  unmarshaled_curves_temp_5;
	memset((&unmarshaled_curves_temp_5), 0, sizeof(unmarshaled_curves_temp_5));
	unmarshaled_curves_temp_5 = marshaled.___curves_5;
	unmarshaled.set_curves_5(unmarshaled_curves_temp_5);
	bool unmarshaled_useDithering_temp_6 = false;
	unmarshaled_useDithering_temp_6 = static_cast<bool>(marshaled.___useDithering_6);
	unmarshaled.set_useDithering_6(unmarshaled_useDithering_temp_6);
	bool unmarshaled_showDebug_temp_7 = false;
	unmarshaled_showDebug_temp_7 = static_cast<bool>(marshaled.___showDebug_7);
	unmarshaled.set_showDebug_7(unmarshaled_showDebug_temp_7);
}
// Conversion method for clean up from marshalling of: UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorGradingSettings
IL2CPP_EXTERN_C void ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F_marshal_com_cleanup(ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F_marshaled_com& marshaled)
{
	ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744_marshal_com_cleanup(marshaled.___channelMixer_4);
}
// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorGradingSettings UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorGradingSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F  ColorGradingSettings_get_defaultSettings_m778A52D14E0382D47CF76843AB018FBC4C137C02 (const RuntimeMethod* method)
{
	ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new ColorGradingSettings
		// {
		//     enabled = false,
		//     useDithering = false,
		//     showDebug = false,
		//     precision = ColorGradingPrecision.Normal,
		//     colorWheels = ColorWheelsSettings.defaultSettings,
		//     basics = BasicsSettings.defaultSettings,
		//     channelMixer = ChannelMixerSettings.defaultSettings,
		//     curves = CurvesSettings.defaultSettings
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F ));
		(&V_0)->set_enabled_0((bool)0);
		(&V_0)->set_useDithering_6((bool)0);
		(&V_0)->set_showDebug_7((bool)0);
		(&V_0)->set_precision_1(((int32_t)16));
		ColorWheelsSettings_tA1F7B01E603F94472F1DECDE81F9F0C09DAA7DC9  L_0;
		L_0 = ColorWheelsSettings_get_defaultSettings_mE8E6B25AC82213A670CDCF4C94B4B80E404A6391(/*hidden argument*/NULL);
		(&V_0)->set_colorWheels_2(L_0);
		BasicsSettings_tCD0CFD2C3C62C6A9E002B8E4CD4CAAB56BBDF04F  L_1;
		L_1 = BasicsSettings_get_defaultSettings_m06FB3E1264A8BA305B98C0E9512281CB3C419AFE(/*hidden argument*/NULL);
		(&V_0)->set_basics_3(L_1);
		ChannelMixerSettings_t0B2A16D39ECA81C3090F06E0AC88F92CD1749744  L_2;
		L_2 = ChannelMixerSettings_get_defaultSettings_m6B810343A0A0BC8825D26C4695B61871DC421778(/*hidden argument*/NULL);
		(&V_0)->set_channelMixer_4(L_2);
		CurvesSettings_t451DB71CD864FD8AECCB77D60CA7AF61781C287D  L_3;
		L_3 = CurvesSettings_get_defaultSettings_m95A3156D81C15151E8663E4C5343DFE2B03DE96F(/*hidden argument*/NULL);
		(&V_0)->set_curves_5(L_3);
		ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F  L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorGradingSettings::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorGradingSettings_Reset_m39775B4F33C24CDD6E383AD985EC286FF3C3B5A5 (ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F * __this, const RuntimeMethod* method)
{
	{
		// curves = CurvesSettings.defaultSettings;
		CurvesSettings_t451DB71CD864FD8AECCB77D60CA7AF61781C287D  L_0;
		L_0 = CurvesSettings_get_defaultSettings_m95A3156D81C15151E8663E4C5343DFE2B03DE96F(/*hidden argument*/NULL);
		__this->set_curves_5(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ColorGradingSettings_Reset_m39775B4F33C24CDD6E383AD985EC286FF3C3B5A5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F * _thisAdjusted = reinterpret_cast<ColorGradingSettings_t9D3C6CCF0664ED6A0AB66CC50E0DB84BC0B53D7F *>(__this + _offset);
	ColorGradingSettings_Reset_m39775B4F33C24CDD6E383AD985EC286FF3C3B5A5(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorWheelGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorWheelGroup__ctor_m8FF2A98515A440574C9F4BC9ADBB27074F8E9A93 (ColorWheelGroup_t73EA317646791651AE5D09C5FDCEC01721257738 * __this, const RuntimeMethod* method)
{
	{
		// public int minSizePerWheel = 60;
		__this->set_minSizePerWheel_0(((int32_t)60));
		// public int maxSizePerWheel = 150;
		__this->set_maxSizePerWheel_1(((int32_t)150));
		// public ColorWheelGroup()
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
		// {}
		return;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorWheelGroup::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorWheelGroup__ctor_m5154003C61A48F5257B77EC2114C73C8139AC9F5 (ColorWheelGroup_t73EA317646791651AE5D09C5FDCEC01721257738 * __this, int32_t ___minSizePerWheel0, int32_t ___maxSizePerWheel1, const RuntimeMethod* method)
{
	{
		// public int minSizePerWheel = 60;
		__this->set_minSizePerWheel_0(((int32_t)60));
		// public int maxSizePerWheel = 150;
		__this->set_maxSizePerWheel_1(((int32_t)150));
		// public ColorWheelGroup(int minSizePerWheel, int maxSizePerWheel)
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
		// this.minSizePerWheel = minSizePerWheel;
		int32_t L_0 = ___minSizePerWheel0;
		__this->set_minSizePerWheel_0(L_0);
		// this.maxSizePerWheel = maxSizePerWheel;
		int32_t L_1 = ___maxSizePerWheel1;
		__this->set_maxSizePerWheel_1(L_1);
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
// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorWheelsSettings UnityStandardAssets.CinematicEffects.TonemappingColorGrading/ColorWheelsSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorWheelsSettings_tA1F7B01E603F94472F1DECDE81F9F0C09DAA7DC9  ColorWheelsSettings_get_defaultSettings_mE8E6B25AC82213A670CDCF4C94B4B80E404A6391 (const RuntimeMethod* method)
{
	ColorWheelsSettings_tA1F7B01E603F94472F1DECDE81F9F0C09DAA7DC9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new ColorWheelsSettings
		// {
		//     shadows = Color.white,
		//     midtones = Color.white,
		//     highlights = Color.white
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(ColorWheelsSettings_tA1F7B01E603F94472F1DECDE81F9F0C09DAA7DC9 ));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		(&V_0)->set_shadows_0(L_0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		(&V_0)->set_midtones_1(L_1);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		(&V_0)->set_highlights_2(L_2);
		ColorWheelsSettings_tA1F7B01E603F94472F1DECDE81F9F0C09DAA7DC9  L_3 = V_0;
		return L_3;
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
// System.Void UnityStandardAssets.CinematicEffects.TonemappingColorGrading/Curve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Curve__ctor_m8C54BF964A6F1B07906A3048F745A08D22CEC784 (Curve_t71297F13C46D62254E298F5879F6EEB871CC24AD * __this, const RuntimeMethod* method)
{
	{
		// public Color color = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		__this->set_color_0(L_0);
		// public Curve()
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
		// {}
		return;
	}
}
// System.Void UnityStandardAssets.CinematicEffects.TonemappingColorGrading/Curve::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Curve__ctor_mCCDE05C11D933D0175E99A0EB4040A4160A1E597 (Curve_t71297F13C46D62254E298F5879F6EEB871CC24AD * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method)
{
	{
		// public Color color = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		__this->set_color_0(L_0);
		// public Curve(float r, float g, float b, float a) // Can't pass a struct in an attribute
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
		// color = new Color(r, g, b, a);
		float L_1 = ___r0;
		float L_2 = ___g1;
		float L_3 = ___b2;
		float L_4 = ___a3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_5), L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		__this->set_color_0(L_5);
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
// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/CurvesSettings UnityStandardAssets.CinematicEffects.TonemappingColorGrading/CurvesSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CurvesSettings_t451DB71CD864FD8AECCB77D60CA7AF61781C287D  CurvesSettings_get_defaultSettings_m95A3156D81C15151E8663E4C5343DFE2B03DE96F (const RuntimeMethod* method)
{
	CurvesSettings_t451DB71CD864FD8AECCB77D60CA7AF61781C287D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new CurvesSettings
		// {
		//     master = defaultCurve,
		//     red = defaultCurve,
		//     green = defaultCurve,
		//     blue = defaultCurve
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(CurvesSettings_t451DB71CD864FD8AECCB77D60CA7AF61781C287D ));
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0;
		L_0 = CurvesSettings_get_defaultCurve_m5CC8FC3F5B7F2FF9437DFB8D854375DE098FC98D(/*hidden argument*/NULL);
		(&V_0)->set_master_0(L_0);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_1;
		L_1 = CurvesSettings_get_defaultCurve_m5CC8FC3F5B7F2FF9437DFB8D854375DE098FC98D(/*hidden argument*/NULL);
		(&V_0)->set_red_1(L_1);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_2;
		L_2 = CurvesSettings_get_defaultCurve_m5CC8FC3F5B7F2FF9437DFB8D854375DE098FC98D(/*hidden argument*/NULL);
		(&V_0)->set_green_2(L_2);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_3;
		L_3 = CurvesSettings_get_defaultCurve_m5CC8FC3F5B7F2FF9437DFB8D854375DE098FC98D(/*hidden argument*/NULL);
		(&V_0)->set_blue_3(L_3);
		CurvesSettings_t451DB71CD864FD8AECCB77D60CA7AF61781C287D  L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.AnimationCurve UnityStandardAssets.CinematicEffects.TonemappingColorGrading/CurvesSettings::get_defaultCurve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * CurvesSettings_get_defaultCurve_m5CC8FC3F5B7F2FF9437DFB8D854375DE098FC98D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return new AnimationCurve(new Keyframe(0f, 0f, 1f, 1f), new Keyframe(1f, 1f, 1f, 1f)); }
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_0 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_1 = L_0;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_m572CCEE06F612003F939F3FF439B15F89E8C1D54((&L_2), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_3 = L_1;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_m572CCEE06F612003F939F3FF439B15F89E8C1D54((&L_4), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_4);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_5 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0(L_5, L_3, /*hidden argument*/NULL);
		return L_5;
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
// Conversion methods for marshalling of: UnityStandardAssets.CinematicEffects.TonemappingColorGrading/EyeAdaptationSettings
IL2CPP_EXTERN_C void EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD_marshal_pinvoke(const EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD& unmarshaled, EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD_marshaled_pinvoke& marshaled)
{
	marshaled.___enabled_0 = static_cast<int32_t>(unmarshaled.get_enabled_0());
	marshaled.___middleGrey_1 = unmarshaled.get_middleGrey_1();
	marshaled.___min_2 = unmarshaled.get_min_2();
	marshaled.___max_3 = unmarshaled.get_max_3();
	marshaled.___speed_4 = unmarshaled.get_speed_4();
	marshaled.___showDebug_5 = static_cast<int32_t>(unmarshaled.get_showDebug_5());
}
IL2CPP_EXTERN_C void EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD_marshal_pinvoke_back(const EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD_marshaled_pinvoke& marshaled, EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD& unmarshaled)
{
	bool unmarshaled_enabled_temp_0 = false;
	unmarshaled_enabled_temp_0 = static_cast<bool>(marshaled.___enabled_0);
	unmarshaled.set_enabled_0(unmarshaled_enabled_temp_0);
	float unmarshaled_middleGrey_temp_1 = 0.0f;
	unmarshaled_middleGrey_temp_1 = marshaled.___middleGrey_1;
	unmarshaled.set_middleGrey_1(unmarshaled_middleGrey_temp_1);
	float unmarshaled_min_temp_2 = 0.0f;
	unmarshaled_min_temp_2 = marshaled.___min_2;
	unmarshaled.set_min_2(unmarshaled_min_temp_2);
	float unmarshaled_max_temp_3 = 0.0f;
	unmarshaled_max_temp_3 = marshaled.___max_3;
	unmarshaled.set_max_3(unmarshaled_max_temp_3);
	float unmarshaled_speed_temp_4 = 0.0f;
	unmarshaled_speed_temp_4 = marshaled.___speed_4;
	unmarshaled.set_speed_4(unmarshaled_speed_temp_4);
	bool unmarshaled_showDebug_temp_5 = false;
	unmarshaled_showDebug_temp_5 = static_cast<bool>(marshaled.___showDebug_5);
	unmarshaled.set_showDebug_5(unmarshaled_showDebug_temp_5);
}
// Conversion method for clean up from marshalling of: UnityStandardAssets.CinematicEffects.TonemappingColorGrading/EyeAdaptationSettings
IL2CPP_EXTERN_C void EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD_marshal_pinvoke_cleanup(EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityStandardAssets.CinematicEffects.TonemappingColorGrading/EyeAdaptationSettings
IL2CPP_EXTERN_C void EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD_marshal_com(const EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD& unmarshaled, EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD_marshaled_com& marshaled)
{
	marshaled.___enabled_0 = static_cast<int32_t>(unmarshaled.get_enabled_0());
	marshaled.___middleGrey_1 = unmarshaled.get_middleGrey_1();
	marshaled.___min_2 = unmarshaled.get_min_2();
	marshaled.___max_3 = unmarshaled.get_max_3();
	marshaled.___speed_4 = unmarshaled.get_speed_4();
	marshaled.___showDebug_5 = static_cast<int32_t>(unmarshaled.get_showDebug_5());
}
IL2CPP_EXTERN_C void EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD_marshal_com_back(const EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD_marshaled_com& marshaled, EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD& unmarshaled)
{
	bool unmarshaled_enabled_temp_0 = false;
	unmarshaled_enabled_temp_0 = static_cast<bool>(marshaled.___enabled_0);
	unmarshaled.set_enabled_0(unmarshaled_enabled_temp_0);
	float unmarshaled_middleGrey_temp_1 = 0.0f;
	unmarshaled_middleGrey_temp_1 = marshaled.___middleGrey_1;
	unmarshaled.set_middleGrey_1(unmarshaled_middleGrey_temp_1);
	float unmarshaled_min_temp_2 = 0.0f;
	unmarshaled_min_temp_2 = marshaled.___min_2;
	unmarshaled.set_min_2(unmarshaled_min_temp_2);
	float unmarshaled_max_temp_3 = 0.0f;
	unmarshaled_max_temp_3 = marshaled.___max_3;
	unmarshaled.set_max_3(unmarshaled_max_temp_3);
	float unmarshaled_speed_temp_4 = 0.0f;
	unmarshaled_speed_temp_4 = marshaled.___speed_4;
	unmarshaled.set_speed_4(unmarshaled_speed_temp_4);
	bool unmarshaled_showDebug_temp_5 = false;
	unmarshaled_showDebug_temp_5 = static_cast<bool>(marshaled.___showDebug_5);
	unmarshaled.set_showDebug_5(unmarshaled_showDebug_temp_5);
}
// Conversion method for clean up from marshalling of: UnityStandardAssets.CinematicEffects.TonemappingColorGrading/EyeAdaptationSettings
IL2CPP_EXTERN_C void EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD_marshal_com_cleanup(EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD_marshaled_com& marshaled)
{
}
// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/EyeAdaptationSettings UnityStandardAssets.CinematicEffects.TonemappingColorGrading/EyeAdaptationSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD  EyeAdaptationSettings_get_defaultSettings_m2055E3059B6247F123106B0FFE03B63E9D8CA8FA (const RuntimeMethod* method)
{
	EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new EyeAdaptationSettings
		// {
		//     enabled = false,
		//     showDebug = false,
		//     middleGrey = 0.5f,
		//     min = -3f,
		//     max = 3f,
		//     speed = 1.5f
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD ));
		(&V_0)->set_enabled_0((bool)0);
		(&V_0)->set_showDebug_5((bool)0);
		(&V_0)->set_middleGrey_1((0.5f));
		(&V_0)->set_min_2((-3.0f));
		(&V_0)->set_max_3((3.0f));
		(&V_0)->set_speed_4((1.5f));
		EyeAdaptationSettings_tB5D80B9B1DC45FAEC8DE6A5E06E34D037ACA67BD  L_0 = V_0;
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
// System.Void UnityStandardAssets.CinematicEffects.TonemappingColorGrading/IndentedGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndentedGroup__ctor_m6DE36819CD4A739FE7B0013DDF58A3CCC72DDF0A (IndentedGroup_t1A22E882DC9E620A401D8EA437C6653101218B4E * __this, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityStandardAssets.CinematicEffects.TonemappingColorGrading/LUTSettings
IL2CPP_EXTERN_C void LUTSettings_tF860810D4933F78C183A535EC67C9E104DD9E8CA_marshal_pinvoke(const LUTSettings_tF860810D4933F78C183A535EC67C9E104DD9E8CA& unmarshaled, LUTSettings_tF860810D4933F78C183A535EC67C9E104DD9E8CA_marshaled_pinvoke& marshaled)
{
	Exception_t* ___texture_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'texture' of type 'LUTSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___texture_1Exception, NULL);
}
IL2CPP_EXTERN_C void LUTSettings_tF860810D4933F78C183A535EC67C9E104DD9E8CA_marshal_pinvoke_back(const LUTSettings_tF860810D4933F78C183A535EC67C9E104DD9E8CA_marshaled_pinvoke& marshaled, LUTSettings_tF860810D4933F78C183A535EC67C9E104DD9E8CA& unmarshaled)
{
	Exception_t* ___texture_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'texture' of type 'LUTSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___texture_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityStandardAssets.CinematicEffects.TonemappingColorGrading/LUTSettings
IL2CPP_EXTERN_C void LUTSettings_tF860810D4933F78C183A535EC67C9E104DD9E8CA_marshal_pinvoke_cleanup(LUTSettings_tF860810D4933F78C183A535EC67C9E104DD9E8CA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityStandardAssets.CinematicEffects.TonemappingColorGrading/LUTSettings
IL2CPP_EXTERN_C void LUTSettings_tF860810D4933F78C183A535EC67C9E104DD9E8CA_marshal_com(const LUTSettings_tF860810D4933F78C183A535EC67C9E104DD9E8CA& unmarshaled, LUTSettings_tF860810D4933F78C183A535EC67C9E104DD9E8CA_marshaled_com& marshaled)
{
	Exception_t* ___texture_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'texture' of type 'LUTSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___texture_1Exception, NULL);
}
IL2CPP_EXTERN_C void LUTSettings_tF860810D4933F78C183A535EC67C9E104DD9E8CA_marshal_com_back(const LUTSettings_tF860810D4933F78C183A535EC67C9E104DD9E8CA_marshaled_com& marshaled, LUTSettings_tF860810D4933F78C183A535EC67C9E104DD9E8CA& unmarshaled)
{
	Exception_t* ___texture_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'texture' of type 'LUTSettings': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___texture_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityStandardAssets.CinematicEffects.TonemappingColorGrading/LUTSettings
IL2CPP_EXTERN_C void LUTSettings_tF860810D4933F78C183A535EC67C9E104DD9E8CA_marshal_com_cleanup(LUTSettings_tF860810D4933F78C183A535EC67C9E104DD9E8CA_marshaled_com& marshaled)
{
}
// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/LUTSettings UnityStandardAssets.CinematicEffects.TonemappingColorGrading/LUTSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LUTSettings_tF860810D4933F78C183A535EC67C9E104DD9E8CA  LUTSettings_get_defaultSettings_m70EC38F4A2C6A60D25A31CFAFCC7D1BC3E29DEE6 (const RuntimeMethod* method)
{
	LUTSettings_tF860810D4933F78C183A535EC67C9E104DD9E8CA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new LUTSettings
		// {
		//     enabled = false,
		//     texture = null,
		//     contribution = 1f
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(LUTSettings_tF860810D4933F78C183A535EC67C9E104DD9E8CA ));
		(&V_0)->set_enabled_0((bool)0);
		(&V_0)->set_texture_1((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)NULL);
		(&V_0)->set_contribution_2((1.0f));
		LUTSettings_tF860810D4933F78C183A535EC67C9E104DD9E8CA  L_0 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.CinematicEffects.TonemappingColorGrading/SettingsGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsGroup__ctor_mF96EDCE2CA7EB70FDBCE4266839A07CC699CBBF8 (SettingsGroup_tE37D2D1B1E9DF1E978D0F800765D91143CA9B4C1 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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


// Conversion methods for marshalling of: UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings
IL2CPP_EXTERN_C void TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F_marshal_pinvoke(const TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F& unmarshaled, TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F_marshaled_pinvoke& marshaled)
{
	marshaled.___enabled_0 = static_cast<int32_t>(unmarshaled.get_enabled_0());
	marshaled.___tonemapper_1 = unmarshaled.get_tonemapper_1();
	marshaled.___exposure_2 = unmarshaled.get_exposure_2();
	if (unmarshaled.get_curve_3() != NULL)
	{
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke(*unmarshaled.get_curve_3(), marshaled.___curve_3);
	}
	marshaled.___neutralBlackIn_4 = unmarshaled.get_neutralBlackIn_4();
	marshaled.___neutralWhiteIn_5 = unmarshaled.get_neutralWhiteIn_5();
	marshaled.___neutralBlackOut_6 = unmarshaled.get_neutralBlackOut_6();
	marshaled.___neutralWhiteOut_7 = unmarshaled.get_neutralWhiteOut_7();
	marshaled.___neutralWhiteLevel_8 = unmarshaled.get_neutralWhiteLevel_8();
	marshaled.___neutralWhiteClip_9 = unmarshaled.get_neutralWhiteClip_9();
}
IL2CPP_EXTERN_C void TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F_marshal_pinvoke_back(const TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F_marshaled_pinvoke& marshaled, TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool unmarshaled_enabled_temp_0 = false;
	unmarshaled_enabled_temp_0 = static_cast<bool>(marshaled.___enabled_0);
	unmarshaled.set_enabled_0(unmarshaled_enabled_temp_0);
	int32_t unmarshaled_tonemapper_temp_1 = 0;
	unmarshaled_tonemapper_temp_1 = marshaled.___tonemapper_1;
	unmarshaled.set_tonemapper_1(unmarshaled_tonemapper_temp_1);
	float unmarshaled_exposure_temp_2 = 0.0f;
	unmarshaled_exposure_temp_2 = marshaled.___exposure_2;
	unmarshaled.set_exposure_2(unmarshaled_exposure_temp_2);
	unmarshaled.set_curve_3((AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03*)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var));
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke_back(marshaled.___curve_3, *unmarshaled.get_curve_3());
	float unmarshaled_neutralBlackIn_temp_4 = 0.0f;
	unmarshaled_neutralBlackIn_temp_4 = marshaled.___neutralBlackIn_4;
	unmarshaled.set_neutralBlackIn_4(unmarshaled_neutralBlackIn_temp_4);
	float unmarshaled_neutralWhiteIn_temp_5 = 0.0f;
	unmarshaled_neutralWhiteIn_temp_5 = marshaled.___neutralWhiteIn_5;
	unmarshaled.set_neutralWhiteIn_5(unmarshaled_neutralWhiteIn_temp_5);
	float unmarshaled_neutralBlackOut_temp_6 = 0.0f;
	unmarshaled_neutralBlackOut_temp_6 = marshaled.___neutralBlackOut_6;
	unmarshaled.set_neutralBlackOut_6(unmarshaled_neutralBlackOut_temp_6);
	float unmarshaled_neutralWhiteOut_temp_7 = 0.0f;
	unmarshaled_neutralWhiteOut_temp_7 = marshaled.___neutralWhiteOut_7;
	unmarshaled.set_neutralWhiteOut_7(unmarshaled_neutralWhiteOut_temp_7);
	float unmarshaled_neutralWhiteLevel_temp_8 = 0.0f;
	unmarshaled_neutralWhiteLevel_temp_8 = marshaled.___neutralWhiteLevel_8;
	unmarshaled.set_neutralWhiteLevel_8(unmarshaled_neutralWhiteLevel_temp_8);
	float unmarshaled_neutralWhiteClip_temp_9 = 0.0f;
	unmarshaled_neutralWhiteClip_temp_9 = marshaled.___neutralWhiteClip_9;
	unmarshaled.set_neutralWhiteClip_9(unmarshaled_neutralWhiteClip_temp_9);
}
// Conversion method for clean up from marshalling of: UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings
IL2CPP_EXTERN_C void TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F_marshal_pinvoke_cleanup(TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F_marshaled_pinvoke& marshaled)
{
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_pinvoke_cleanup(marshaled.___curve_3);
}


// Conversion methods for marshalling of: UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings
IL2CPP_EXTERN_C void TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F_marshal_com(const TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F& unmarshaled, TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F_marshaled_com& marshaled)
{
	marshaled.___enabled_0 = static_cast<int32_t>(unmarshaled.get_enabled_0());
	marshaled.___tonemapper_1 = unmarshaled.get_tonemapper_1();
	marshaled.___exposure_2 = unmarshaled.get_exposure_2();
	if (unmarshaled.get_curve_3() != NULL)
	{
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_com(*unmarshaled.get_curve_3(), *marshaled.___curve_3);
	}
	marshaled.___neutralBlackIn_4 = unmarshaled.get_neutralBlackIn_4();
	marshaled.___neutralWhiteIn_5 = unmarshaled.get_neutralWhiteIn_5();
	marshaled.___neutralBlackOut_6 = unmarshaled.get_neutralBlackOut_6();
	marshaled.___neutralWhiteOut_7 = unmarshaled.get_neutralWhiteOut_7();
	marshaled.___neutralWhiteLevel_8 = unmarshaled.get_neutralWhiteLevel_8();
	marshaled.___neutralWhiteClip_9 = unmarshaled.get_neutralWhiteClip_9();
}
IL2CPP_EXTERN_C void TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F_marshal_com_back(const TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F_marshaled_com& marshaled, TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F& unmarshaled)
{
	bool unmarshaled_enabled_temp_0 = false;
	unmarshaled_enabled_temp_0 = static_cast<bool>(marshaled.___enabled_0);
	unmarshaled.set_enabled_0(unmarshaled_enabled_temp_0);
	int32_t unmarshaled_tonemapper_temp_1 = 0;
	unmarshaled_tonemapper_temp_1 = marshaled.___tonemapper_1;
	unmarshaled.set_tonemapper_1(unmarshaled_tonemapper_temp_1);
	float unmarshaled_exposure_temp_2 = 0.0f;
	unmarshaled_exposure_temp_2 = marshaled.___exposure_2;
	unmarshaled.set_exposure_2(unmarshaled_exposure_temp_2);
	if (unmarshaled.get_curve_3() != NULL)
	{
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_com_back(*marshaled.___curve_3, *unmarshaled.get_curve_3());
	}
	float unmarshaled_neutralBlackIn_temp_4 = 0.0f;
	unmarshaled_neutralBlackIn_temp_4 = marshaled.___neutralBlackIn_4;
	unmarshaled.set_neutralBlackIn_4(unmarshaled_neutralBlackIn_temp_4);
	float unmarshaled_neutralWhiteIn_temp_5 = 0.0f;
	unmarshaled_neutralWhiteIn_temp_5 = marshaled.___neutralWhiteIn_5;
	unmarshaled.set_neutralWhiteIn_5(unmarshaled_neutralWhiteIn_temp_5);
	float unmarshaled_neutralBlackOut_temp_6 = 0.0f;
	unmarshaled_neutralBlackOut_temp_6 = marshaled.___neutralBlackOut_6;
	unmarshaled.set_neutralBlackOut_6(unmarshaled_neutralBlackOut_temp_6);
	float unmarshaled_neutralWhiteOut_temp_7 = 0.0f;
	unmarshaled_neutralWhiteOut_temp_7 = marshaled.___neutralWhiteOut_7;
	unmarshaled.set_neutralWhiteOut_7(unmarshaled_neutralWhiteOut_temp_7);
	float unmarshaled_neutralWhiteLevel_temp_8 = 0.0f;
	unmarshaled_neutralWhiteLevel_temp_8 = marshaled.___neutralWhiteLevel_8;
	unmarshaled.set_neutralWhiteLevel_8(unmarshaled_neutralWhiteLevel_temp_8);
	float unmarshaled_neutralWhiteClip_temp_9 = 0.0f;
	unmarshaled_neutralWhiteClip_temp_9 = marshaled.___neutralWhiteClip_9;
	unmarshaled.set_neutralWhiteClip_9(unmarshaled_neutralWhiteClip_temp_9);
}
// Conversion method for clean up from marshalling of: UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings
IL2CPP_EXTERN_C void TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F_marshal_com_cleanup(TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F_marshaled_com& marshaled)
{
	if (marshaled.___curve_3 != NULL)
	{
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshal_com_cleanup(*marshaled.___curve_3);
	}
}
// UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings UnityStandardAssets.CinematicEffects.TonemappingColorGrading/TonemappingSettings::get_defaultSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F  TonemappingSettings_get_defaultSettings_mA7E08658D727CEC6AAB78837904A3776C5944E17 (const RuntimeMethod* method)
{
	TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new TonemappingSettings
		// {
		//     enabled = false,
		//     tonemapper = Tonemapper.Neutral,
		//     exposure = 1f,
		//     curve = CurvesSettings.defaultCurve,
		//     neutralBlackIn = 0.02f,
		//     neutralWhiteIn = 10f,
		//     neutralBlackOut = 0f,
		//     neutralWhiteOut = 10f,
		//     neutralWhiteLevel = 5.3f,
		//     neutralWhiteClip = 10f
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F ));
		(&V_0)->set_enabled_0((bool)0);
		(&V_0)->set_tonemapper_1(6);
		(&V_0)->set_exposure_2((1.0f));
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0;
		L_0 = CurvesSettings_get_defaultCurve_m5CC8FC3F5B7F2FF9437DFB8D854375DE098FC98D(/*hidden argument*/NULL);
		(&V_0)->set_curve_3(L_0);
		(&V_0)->set_neutralBlackIn_4((0.0199999996f));
		(&V_0)->set_neutralWhiteIn_5((10.0f));
		(&V_0)->set_neutralBlackOut_6((0.0f));
		(&V_0)->set_neutralWhiteOut_7((10.0f));
		(&V_0)->set_neutralWhiteLevel_8((5.30000019f));
		(&V_0)->set_neutralWhiteClip_9((10.0f));
		TonemappingSettings_t36607111643B76855A95B17DCCFBBCD03702C80F  L_1 = V_0;
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
// System.Void DevionGames.UIWidgets.TooltipTrigger/<DelayTooltip>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayTooltipU3Ed__14__ctor_m0EE91FEC3D925A20A0AA03AB6109E32E59FE0B52 (U3CDelayTooltipU3Ed__14_t468E94EBCCF55D8B92F6C78E45440AD307754FE7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DevionGames.UIWidgets.TooltipTrigger/<DelayTooltip>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayTooltipU3Ed__14_System_IDisposable_Dispose_mE7B04EDC9BF73AB4D4C3F4A1E0F64C517944DA78 (U3CDelayTooltipU3Ed__14_t468E94EBCCF55D8B92F6C78E45440AD307754FE7 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DevionGames.UIWidgets.TooltipTrigger/<DelayTooltip>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayTooltipU3Ed__14_MoveNext_mD92424BCEBBF073D4968D731EA293955A0C61F12 (U3CDelayTooltipU3Ed__14_t468E94EBCCF55D8B92F6C78E45440AD307754FE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WidgetUtility_t124B1BB3D09986FF1DCA8F0EC1EBDE02B6A93AFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_0079;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float time = 0.0f;
		__this->set_U3CtimeU3E5__2_4((0.0f));
		// yield return true;
		bool L_3 = ((bool)1);
		RuntimeObject * L_4 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_3);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0049:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0080;
	}

IL_0052:
	{
		// time += Time.deltaTime;
		float L_5 = __this->get_U3CtimeU3E5__2_4();
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CtimeU3E5__2_4(((float)il2cpp_codegen_add((float)L_5, (float)L_6)));
		// yield return true;
		bool L_7 = ((bool)1);
		RuntimeObject * L_8 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_7);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0079:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0080:
	{
		// while (time < delay)
		float L_9 = __this->get_U3CtimeU3E5__2_4();
		float L_10 = __this->get_delay_2();
		if ((((float)L_9) < ((float)L_10)))
		{
			goto IL_0052;
		}
	}
	{
		// instance.Show(WidgetUtility.ColorString(tooltipTitle, color), WidgetUtility.ColorString(tooltip, color), icon, m_PropertyPairs, width, showBackground);
		TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250 * L_11 = V_1;
		NullCheck(L_11);
		Tooltip_t4189AB3769FB49D03A96EFE511A956E3884B7F58 * L_12 = L_11->get_instance_12();
		TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250 * L_13 = V_1;
		NullCheck(L_13);
		String_t* L_14 = L_13->get_tooltipTitle_8();
		TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250 * L_15 = V_1;
		NullCheck(L_15);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16 = L_15->get_color_7();
		IL2CPP_RUNTIME_CLASS_INIT(WidgetUtility_t124B1BB3D09986FF1DCA8F0EC1EBDE02B6A93AFF_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = WidgetUtility_ColorString_m6FC1F4EC0A5B9C880826C40A72C993EE5166ABFE(L_14, L_16, /*hidden argument*/NULL);
		TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250 * L_18 = V_1;
		NullCheck(L_18);
		String_t* L_19 = L_18->get_tooltip_9();
		TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250 * L_20 = V_1;
		NullCheck(L_20);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21 = L_20->get_color_7();
		String_t* L_22;
		L_22 = WidgetUtility_ColorString_m6FC1F4EC0A5B9C880826C40A72C993EE5166ABFE(L_19, L_21, /*hidden argument*/NULL);
		TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250 * L_23 = V_1;
		NullCheck(L_23);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_24 = L_23->get_icon_10();
		TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250 * L_25 = V_1;
		NullCheck(L_25);
		List_1_t2E0A11B5F89515389093E72BC4B6064918E20E62 * L_26 = L_25->get_m_PropertyPairs_14();
		TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250 * L_27 = V_1;
		NullCheck(L_27);
		float L_28 = L_27->get_width_6();
		TooltipTrigger_t69318FB8048BE61AB634EC3DA4E9CC1D25477250 * L_29 = V_1;
		NullCheck(L_29);
		bool L_30 = L_29->get_showBackground_5();
		NullCheck(L_12);
		VirtActionInvoker6< String_t*, String_t*, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *, List_1_t2E0A11B5F89515389093E72BC4B6064918E20E62 *, float, bool >::Invoke(15 /* System.Void DevionGames.UIWidgets.Tooltip::Show(System.String,System.String,UnityEngine.Sprite,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.Single,System.Boolean) */, L_12, L_17, L_22, L_24, L_26, L_28, L_30);
		// }
		return (bool)0;
	}
}
// System.Object DevionGames.UIWidgets.TooltipTrigger/<DelayTooltip>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayTooltipU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m11D022A471B8D624EA4C707B454A2AEBF6B885F7 (U3CDelayTooltipU3Ed__14_t468E94EBCCF55D8B92F6C78E45440AD307754FE7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DevionGames.UIWidgets.TooltipTrigger/<DelayTooltip>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayTooltipU3Ed__14_System_Collections_IEnumerator_Reset_mDB2AC97B2408A7098C9FD651C18923B61B253A8E (U3CDelayTooltipU3Ed__14_t468E94EBCCF55D8B92F6C78E45440AD307754FE7 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayTooltipU3Ed__14_System_Collections_IEnumerator_Reset_mDB2AC97B2408A7098C9FD651C18923B61B253A8E_RuntimeMethod_var)));
	}
}
// System.Object DevionGames.UIWidgets.TooltipTrigger/<DelayTooltip>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayTooltipU3Ed__14_System_Collections_IEnumerator_get_Current_mD5E9F6ABE2C68B7491DE806D80707C49E52CD53E (U3CDelayTooltipU3Ed__14_t468E94EBCCF55D8B92F6C78E45440AD307754FE7 * __this, const RuntimeMethod* method)
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
// System.Void DevionGames.UIWidgets.TooltipTrigger/StringPair::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringPair__ctor_m5DFC6C67847FE25E4CFE8FB4A0A8283C25B42AD9 (StringPair_tECA752B4600BBB8DF0DE2F973CCB4319CCCE7DA5 * __this, const RuntimeMethod* method)
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
// System.Void DevionGames.TypeUtility/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m799F503C4177984B7D5814216F9616AC78C96DB7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t485C5B2655F18E6B77C5AFD264AE4BB1BD013E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t485C5B2655F18E6B77C5AFD264AE4BB1BD013E9A * L_0 = (U3CU3Ec_t485C5B2655F18E6B77C5AFD264AE4BB1BD013E9A *)il2cpp_codegen_object_new(U3CU3Ec_t485C5B2655F18E6B77C5AFD264AE4BB1BD013E9A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m97E069E6A4CF1782534BF261147EE3B76BBB8495(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t485C5B2655F18E6B77C5AFD264AE4BB1BD013E9A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t485C5B2655F18E6B77C5AFD264AE4BB1BD013E9A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void DevionGames.TypeUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m97E069E6A4CF1782534BF261147EE3B76BBB8495 (U3CU3Ec_t485C5B2655F18E6B77C5AFD264AE4BB1BD013E9A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String DevionGames.TypeUtility/<>c::<GetSubTypeNames>b__4_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetSubTypeNamesU3Eb__4_0_m14833AC234FA4D0BDEDB14DD1B32E8F4FBDB8199 (U3CU3Ec_t485C5B2655F18E6B77C5AFD264AE4BB1BD013E9A * __this, Type_t * ___x0, const RuntimeMethod* method)
{
	{
		// return GetSubTypes (baseType).Select (x => x.Name).ToArray();
		Type_t * L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Type> DevionGames.TypeUtility/<>c::<GetSubTypes>b__5_0(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CGetSubTypesU3Eb__5_0_mB4C088815355563C6E85D3A0AC1DC17B7272E4D0 (U3CU3Ec_t485C5B2655F18E6B77C5AFD264AE4BB1BD013E9A * __this, Assembly_t * ___assembly0, const RuntimeMethod* method)
{
	{
		// IEnumerable<Type> types= assembliesLookup.SelectMany(assembly => assembly.GetTypes()) .Where(type => type.IsSubclassOf(baseType));
		Assembly_t * L_0 = ___assembly0;
		NullCheck(L_0);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_1;
		L_1 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(13 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_0);
		return (RuntimeObject*)L_1;
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
// System.Void DevionGames.TypeUtility/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m168A0943FF6E492C732018ABF82130EDF3BE4E88 (U3CU3Ec__DisplayClass5_0_t1434B44CCC24BF452CBCA1463DF0E5A440F89014 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean DevionGames.TypeUtility/<>c__DisplayClass5_0::<GetSubTypes>b__1(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_0_U3CGetSubTypesU3Eb__1_mE98F3C0017AB72F5345D4E414BD32955D5DC677B (U3CU3Ec__DisplayClass5_0_t1434B44CCC24BF452CBCA1463DF0E5A440F89014 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		// IEnumerable<Type> types= assembliesLookup.SelectMany(assembly => assembly.GetTypes()) .Where(type => type.IsSubclassOf(baseType));
		Type_t * L_0 = ___type0;
		Type_t * L_1 = __this->get_baseType_0();
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtFuncInvoker1< bool, Type_t * >::Invoke(106 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_0, L_1);
		return L_2;
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
// System.Void DevionGames.UIWidgets.UIWidget/<>c__DisplayClass30_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0__ctor_mF62AF1D0FF1954AD2021269A39F17C3CBBFA1372 (U3CU3Ec__DisplayClass30_0_t0EA311E0579D20F111699FF6723A2B078B9820D1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DevionGames.UIWidgets.UIWidget/<>c__DisplayClass30_0::<TweenCanvasGroupAlpha>b__0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0_U3CTweenCanvasGroupAlphaU3Eb__0_mE1518EE4CA8ADA83B36965EB3D8F4E7D9E655003 (U3CU3Ec__DisplayClass30_0_t0EA311E0579D20F111699FF6723A2B078B9820D1 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// m_CanvasGroup.alpha = value;
		UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_1 = L_0->get_m_CanvasGroup_17();
		float L_2 = ___value0;
		NullCheck(L_1);
		CanvasGroup_set_alpha_m522B58BDF64D87252B0D43D254FF3A4D5993DC53(L_1, L_2, /*hidden argument*/NULL);
		// });
		return;
	}
}
// System.Void DevionGames.UIWidgets.UIWidget/<>c__DisplayClass30_0::<TweenCanvasGroupAlpha>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0_U3CTweenCanvasGroupAlphaU3Eb__1_m2A43B84C87AED717E58818182250CF2A6FF7F767 (U3CU3Ec__DisplayClass30_0_t0EA311E0579D20F111699FF6723A2B078B9820D1 * __this, const RuntimeMethod* method)
{
	{
		// if (alphaTween.startValue > alphaTween.targetValue) {
		FloatTween_t7814382C59A52975DDE91625A0B93AF25E34D858 * L_0 = __this->get_address_of_alphaTween_1();
		float L_1;
		L_1 = FloatTween_get_startValue_m32E95475B22C9EF8D6A616B7CF82D328DEAEE277_inline((FloatTween_t7814382C59A52975DDE91625A0B93AF25E34D858 *)L_0, /*hidden argument*/NULL);
		FloatTween_t7814382C59A52975DDE91625A0B93AF25E34D858 * L_2 = __this->get_address_of_alphaTween_1();
		float L_3;
		L_3 = FloatTween_get_targetValue_m76F3543807DBBCA2C4D4F48EE0328B816ABE6869_inline((FloatTween_t7814382C59A52975DDE91625A0B93AF25E34D858 *)L_2, /*hidden argument*/NULL);
		if ((!(((float)L_1) > ((float)L_3))))
		{
			goto IL_0043;
		}
	}
	{
		// if (m_DeactivateOnClose && !this.m_IsShowing) {
		UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229 * L_4 = __this->get_U3CU3E4__this_0();
		NullCheck(L_4);
		bool L_5 = L_4->get_m_DeactivateOnClose_13();
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229 * L_6 = __this->get_U3CU3E4__this_0();
		NullCheck(L_6);
		bool L_7 = L_6->get_m_IsShowing_20();
		if (L_7)
		{
			goto IL_0043;
		}
	}
	{
		// gameObject.SetActive (false);
		UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229 * L_8 = __this->get_U3CU3E4__this_0();
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// });
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
// System.Void DevionGames.UIWidgets.UIWidget/<OnDelayedStart>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnDelayedStartU3Ed__27__ctor_mBAD8AA9370E2E5E1BA3857CACBCDE436F443F7D5 (U3COnDelayedStartU3Ed__27_t954F9FDFF1EF1ACA1804A80BBC261A4C18A30E8A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DevionGames.UIWidgets.UIWidget/<OnDelayedStart>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnDelayedStartU3Ed__27_System_IDisposable_Dispose_m84F4FA48C2BA52B6E59819C83AACBF91F5881A85 (U3COnDelayedStartU3Ed__27_t954F9FDFF1EF1ACA1804A80BBC261A4C18A30E8A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DevionGames.UIWidgets.UIWidget/<OnDelayedStart>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnDelayedStartU3Ed__27_MoveNext_m820E5F232631F8ED39C8FC7D43FC60DAB756AB8D (U3COnDelayedStartU3Ed__27_t954F9FDFF1EF1ACA1804A80BBC261A4C18A30E8A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_002e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!IsVisible && m_DeactivateOnClose) {
		UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229 * L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = UIWidget_get_IsVisible_mB29F1A27603743F212AFAB0845A18EA90D32AE33(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229 * L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = L_6->get_m_DeactivateOnClose_13();
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		// gameObject.SetActive (false);
		UIWidget_t63C8DBEADF129847D686408F743BCB3FC85FB229 * L_8 = V_1;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
	}

IL_0051:
	{
		// }
		return (bool)0;
	}
}
// System.Object DevionGames.UIWidgets.UIWidget/<OnDelayedStart>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3COnDelayedStartU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m06E6D84F1F4DCDC59EBA11BA43DED3DE2AEA1C4E (U3COnDelayedStartU3Ed__27_t954F9FDFF1EF1ACA1804A80BBC261A4C18A30E8A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DevionGames.UIWidgets.UIWidget/<OnDelayedStart>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnDelayedStartU3Ed__27_System_Collections_IEnumerator_Reset_m0E23141DD822E95EC1ED31BBE77E26FE2B7FC018 (U3COnDelayedStartU3Ed__27_t954F9FDFF1EF1ACA1804A80BBC261A4C18A30E8A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnDelayedStartU3Ed__27_System_Collections_IEnumerator_Reset_m0E23141DD822E95EC1ED31BBE77E26FE2B7FC018_RuntimeMethod_var)));
	}
}
// System.Object DevionGames.UIWidgets.UIWidget/<OnDelayedStart>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3COnDelayedStartU3Ed__27_System_Collections_IEnumerator_get_Current_m1E987504EB5054FB0ED6C1BB871293EF690F9157 (U3COnDelayedStartU3Ed__27_t954F9FDFF1EF1ACA1804A80BBC261A4C18A30E8A * __this, const RuntimeMethod* method)
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
// System.Void DevionGames.UIWidgets.UIWidget/WidgetEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WidgetEvent__ctor_m2D8DA947510047240FD819867B543ED4874E9BB3 (WidgetEvent_tB4620AD81E6501F79A226F2B03C5B6660F007F2E * __this, const RuntimeMethod* method)
{
	{
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(__this, /*hidden argument*/NULL);
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
// System.Void DevionGames.UIWidgets.Vector3Tween/Vector3TweenCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3TweenCallback__ctor_mDD07B68A8B07AC1C2F4A720D1861EB1CF77C8C5E (Vector3TweenCallback_tD6CA155C8C3A31A8D18A0841A689B8550FF69A7F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mC58365ECDF3275B845B1D16FAACD109627B507F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3TweenCallback()
		UnityEvent_1__ctor_mC58365ECDF3275B845B1D16FAACD109627B507F8(__this, /*hidden argument*/UnityEvent_1__ctor_mC58365ECDF3275B845B1D16FAACD109627B507F8_RuntimeMethod_var);
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
// System.Void DevionGames.UIWidgets.Vector3Tween/Vector3TweenFinishCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3TweenFinishCallback__ctor_m4CDBC5B7C6E1E3B72EAF801957FBBA18C0FC0F4E (Vector3TweenFinishCallback_tF20A493CCE0A022D6B06C726E7A807F37E486B4B * __this, const RuntimeMethod* method)
{
	{
		// public Vector3TweenFinishCallback()
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(__this, /*hidden argument*/NULL);
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
// System.Void Water2D.Water2D_Spawner/<loop>d__52::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CloopU3Ed__52__ctor_m73F8F57C216C6972112ECBC52F53C37C4BD17F26 (U3CloopU3Ed__52_tC16AB621C0032FFEA99927B669C25D97F81483AD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Water2D.Water2D_Spawner/<loop>d__52::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CloopU3Ed__52_System_IDisposable_Dispose_m7163381DBB8DBB1DAFC4D945FDF196C880C0111B (U3CloopU3Ed__52_tC16AB621C0032FFEA99927B669C25D97F81483AD * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Water2D.Water2D_Spawner/<loop>d__52::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CloopU3Ed__52_MoveNext_m69E165E216D343661B1F3959A029FFD1D857A568 (U3CloopU3Ed__52_tC16AB621C0032FFEA99927B669C25D97F81483AD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9_mCC7649DDC10A23AFC09C1C6611B15FFFF513064F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * V_1 = NULL;
	MetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9 * V_2 = NULL;
	int32_t V_3 = 0;
	MetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9 * G_B10_0 = NULL;
	MetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9 * G_B9_0 = NULL;
	float G_B11_0 = 0.0f;
	MetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9 * G_B11_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_0219;
			}
			case 3:
			{
				goto IL_0257;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds (delay);
		float L_3 = __this->get_delay_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0047:
	{
		__this->set_U3CU3E1__state_0((-1));
		// _breakLoop = false;
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_5 = V_1;
		NullCheck(L_5);
		L_5->set__breakLoop_26((bool)0);
		// IsWaterInScene = true;
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_6 = V_1;
		NullCheck(L_6);
		Water2D_Spawner_set_IsWaterInScene_mB61A4CE20BF75E0A324D937CFDB0BD75F780536F_inline(L_6, (bool)1, /*hidden argument*/NULL);
		// int auxCount = 0;
		__this->set_U3CauxCountU3E5__2_7(0);
	}

IL_0063:
	{
		// for (int i = 0; i < WaterDropsObjects.Length; i++) {
		__this->set_U3CiU3E5__3_8(0);
		goto IL_0230;
	}

IL_006f:
	{
		// if (_breakLoop)
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_7 = V_1;
		NullCheck(L_7);
		bool L_8 = L_7->get__breakLoop_26();
		if (!L_8)
		{
			goto IL_0079;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0079:
	{
		// MetaballParticleClass MetaBall = WaterDropsObjects [i].GetComponent<MetaballParticleClass> ();
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_9 = V_1;
		NullCheck(L_9);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = L_9->get_WaterDropsObjects_5();
		int32_t L_11 = __this->get_U3CiU3E5__3_8();
		NullCheck(L_10);
		int32_t L_12 = L_11;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		MetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9 * L_14;
		L_14 = GameObject_GetComponent_TisMetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9_mCC7649DDC10A23AFC09C1C6611B15FFFF513064F(L_13, /*hidden argument*/GameObject_GetComponent_TisMetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9_mCC7649DDC10A23AFC09C1C6611B15FFFF513064F_RuntimeMethod_var);
		V_2 = L_14;
		// if (MetaBall.Active == true)
		MetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9 * L_15 = V_2;
		NullCheck(L_15);
		bool L_16;
		L_16 = MetaballParticleClass_get_Active_m7AD104B4EAA39081494B342095C0BC4891881E10_inline(L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0220;
		}
	}
	{
		// MetaBall.LifeTime = InfiniteLife ? float.PositiveInfinity : LifeTime;
		MetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9 * L_17 = V_2;
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_18 = V_1;
		NullCheck(L_18);
		bool L_19 = L_18->get_InfiniteLife_8();
		G_B9_0 = L_17;
		if (L_19)
		{
			G_B10_0 = L_17;
			goto IL_00a8;
		}
	}
	{
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_20 = V_1;
		NullCheck(L_20);
		float L_21 = L_20->get_LifeTime_7();
		G_B11_0 = L_21;
		G_B11_1 = G_B9_0;
		goto IL_00ad;
	}

IL_00a8:
	{
		G_B11_0 = (std::numeric_limits<float>::infinity());
		G_B11_1 = G_B10_0;
	}

IL_00ad:
	{
		NullCheck(G_B11_1);
		G_B11_1->set_LifeTime_5(G_B11_0);
		// WaterDropsObjects[i].transform.position = new Vector3(transform.position.x + Random.Range(MinPosition.x,MaxPosition.x), transform.position.y + Random.Range(MinPosition.y, MaxPosition.y), transform.position.z);
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_22 = V_1;
		NullCheck(L_22);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_23 = L_22->get_WaterDropsObjects_5();
		int32_t L_24 = __this->get_U3CiU3E5__3_8();
		NullCheck(L_23);
		int32_t L_25 = L_24;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_26, /*hidden argument*/NULL);
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_28 = V_1;
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_x_2();
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_32 = V_1;
		NullCheck(L_32);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_33 = L_32->get_address_of_MinPosition_28();
		float L_34 = L_33->get_x_0();
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_35 = V_1;
		NullCheck(L_35);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_36 = L_35->get_address_of_MaxPosition_29();
		float L_37 = L_36->get_x_0();
		float L_38;
		L_38 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_34, L_37, /*hidden argument*/NULL);
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_39 = V_1;
		NullCheck(L_39);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_40, /*hidden argument*/NULL);
		float L_42 = L_41.get_y_3();
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_43 = V_1;
		NullCheck(L_43);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_44 = L_43->get_address_of_MinPosition_28();
		float L_45 = L_44->get_y_1();
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_46 = V_1;
		NullCheck(L_46);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_47 = L_46->get_address_of_MaxPosition_29();
		float L_48 = L_47->get_y_1();
		float L_49;
		L_49 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_45, L_48, /*hidden argument*/NULL);
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_50 = V_1;
		NullCheck(L_50);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_51, /*hidden argument*/NULL);
		float L_53 = L_52.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_54), ((float)il2cpp_codegen_add((float)L_31, (float)L_38)), ((float)il2cpp_codegen_add((float)L_42, (float)L_49)), L_53, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_27, L_54, /*hidden argument*/NULL);
		// MetaBall.Active = true;
		MetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9 * L_55 = V_2;
		NullCheck(L_55);
		MetaballParticleClass_set_Active_m6A521634E6AFE0474EC57E19C2438F03416BBF42(L_55, (bool)1, /*hidden argument*/NULL);
		// MetaBall.witinTarget = false;
		MetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9 * L_56 = V_2;
		NullCheck(L_56);
		L_56->set_witinTarget_6((bool)0);
		// if (_initSpeed == Vector2.zero)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_57 = __this->get__initSpeed_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_58;
		L_58 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		bool L_59;
		L_59 = Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline(L_57, L_58, /*hidden argument*/NULL);
		if (!L_59)
		{
			goto IL_0162;
		}
	}
	{
		// _initSpeed = initSpeed;
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_60 = V_1;
		NullCheck(L_60);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_61 = L_60->get_initSpeed_13();
		__this->set__initSpeed_4(L_61);
	}

IL_0162:
	{
		// if (DynamicChanges) {
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_62 = V_1;
		NullCheck(L_62);
		bool L_63 = L_62->get_DynamicChanges_14();
		if (!L_63)
		{
			goto IL_01a9;
		}
	}
	{
		// _initSpeed = initSpeed;
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_64 = V_1;
		NullCheck(L_64);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_65 = L_64->get_initSpeed_13();
		__this->set__initSpeed_4(L_65);
		// MetaBall.transform.localScale = new Vector3 (size, size, 1f);
		MetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9 * L_66 = V_2;
		NullCheck(L_66);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_67;
		L_67 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_66, /*hidden argument*/NULL);
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_68 = V_1;
		NullCheck(L_68);
		float L_69 = L_68->get_size_6();
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_70 = V_1;
		NullCheck(L_70);
		float L_71 = L_70->get_size_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
		memset((&L_72), 0, sizeof(L_72));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_72), L_69, L_71, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_67);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_67, L_72, /*hidden argument*/NULL);
		// SetWaterColor (FillColor, StrokeColor);
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_73 = V_1;
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_74 = V_1;
		NullCheck(L_74);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_75 = L_74->get_FillColor_11();
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_76 = V_1;
		NullCheck(L_76);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_77 = L_76->get_StrokeColor_12();
		NullCheck(L_73);
		Water2D_Spawner_SetWaterColor_mDA35DC9D51545989B959FBA477FA4686BB289009(L_73, L_75, L_77, /*hidden argument*/NULL);
	}

IL_01a9:
	{
		// WaterDropsObjects [i].GetComponent<Rigidbody2D> ().velocity = _initSpeed;
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_78 = V_1;
		NullCheck(L_78);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_79 = L_78->get_WaterDropsObjects_5();
		int32_t L_80 = __this->get_U3CiU3E5__3_8();
		NullCheck(L_79);
		int32_t L_81 = L_80;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_82);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_83;
		L_83 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_82, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_84 = __this->get__initSpeed_4();
		NullCheck(L_83);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_83, L_84, /*hidden argument*/NULL);
		// if (count > -1) {
		int32_t L_85 = __this->get_count_5();
		if ((((int32_t)L_85) <= ((int32_t)(-1))))
		{
			goto IL_01f7;
		}
	}
	{
		// auxCount++;
		int32_t L_86 = __this->get_U3CauxCountU3E5__2_7();
		V_3 = L_86;
		int32_t L_87 = V_3;
		__this->set_U3CauxCountU3E5__2_7(((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1)));
		// if (auxCount >= count && !Dynamic) {
		int32_t L_88 = __this->get_U3CauxCountU3E5__2_7();
		int32_t L_89 = __this->get_count_5();
		if ((((int32_t)L_88) < ((int32_t)L_89)))
		{
			goto IL_01f7;
		}
	}
	{
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_90 = V_1;
		NullCheck(L_90);
		bool L_91;
		L_91 = Water2D_Spawner_get_Dynamic_m5BFA77611B907079B63DAD04A17961045529FA78_inline(L_90, /*hidden argument*/NULL);
		if (L_91)
		{
			goto IL_01f7;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_01f7:
	{
		// if(waitBetweenDropSpawn)
		bool L_92 = __this->get_waitBetweenDropSpawn_6();
		if (!L_92)
		{
			goto IL_0220;
		}
	}
	{
		// yield return new WaitForSeconds (DelayBetweenParticles);
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_93 = V_1;
		NullCheck(L_93);
		float L_94 = L_93->get_DelayBetweenParticles_9();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_95 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_95, L_94, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_95);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0219:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0220:
	{
		// for (int i = 0; i < WaterDropsObjects.Length; i++) {
		int32_t L_96 = __this->get_U3CiU3E5__3_8();
		V_3 = L_96;
		int32_t L_97 = V_3;
		__this->set_U3CiU3E5__3_8(((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1)));
	}

IL_0230:
	{
		// for (int i = 0; i < WaterDropsObjects.Length; i++) {
		int32_t L_98 = __this->get_U3CiU3E5__3_8();
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_99 = V_1;
		NullCheck(L_99);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_100 = L_99->get_WaterDropsObjects_5();
		NullCheck(L_100);
		if ((((int32_t)L_98) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_100)->max_length))))))
		{
			goto IL_006f;
		}
	}
	{
		// yield return new WaitForEndOfFrame ();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_101 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_101, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_101);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_0257:
	{
		__this->set_U3CU3E1__state_0((-1));
		// alreadySpawned = true;
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_102 = V_1;
		NullCheck(L_102);
		L_102->set_alreadySpawned_20((bool)1);
		// if (!Dynamic)
		Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * L_103 = V_1;
		NullCheck(L_103);
		bool L_104;
		L_104 = Water2D_Spawner_get_Dynamic_m5BFA77611B907079B63DAD04A17961045529FA78_inline(L_103, /*hidden argument*/NULL);
		if (L_104)
		{
			goto IL_0063;
		}
	}
	{
		// yield break;
		return (bool)0;
	}
}
// System.Object Water2D.Water2D_Spawner/<loop>d__52::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CloopU3Ed__52_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m42CCF1146A9965AFB1FCDF4A9A64BE62B3BE5F78 (U3CloopU3Ed__52_tC16AB621C0032FFEA99927B669C25D97F81483AD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Water2D.Water2D_Spawner/<loop>d__52::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CloopU3Ed__52_System_Collections_IEnumerator_Reset_mA0D5E5BB243A9E1CE43691477C87840B9CD66291 (U3CloopU3Ed__52_tC16AB621C0032FFEA99927B669C25D97F81483AD * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CloopU3Ed__52_System_Collections_IEnumerator_Reset_mA0D5E5BB243A9E1CE43691477C87840B9CD66291_RuntimeMethod_var)));
	}
}
// System.Object Water2D.Water2D_Spawner/<loop>d__52::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CloopU3Ed__52_System_Collections_IEnumerator_get_Current_m3DC791F83F46339D033A169E621D7D9D0C392E5D (U3CloopU3Ed__52_tC16AB621C0032FFEA99927B669C25D97F81483AD * __this, const RuntimeMethod* method)
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
// System.Void UnityStandardAssets.CinematicEffects.FXAA/Preset/LayoutAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutAttribute__ctor_mB464921B7C99769C43A4A29524D66D164713640B (LayoutAttribute_t4A19CE9A56C91763A69A8981B8E519C5B25F4522 * __this, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.CinematicEffects.ScreenSpaceReflection/SSRSettings/LayoutAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutAttribute__ctor_m05B7875D9F531105D9FC9E091341B741F500F3B0 (LayoutAttribute_t87E11BB1A8C6EE93216FEAF5B4B3F7504E8B95C1 * __this, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TemporalSettings_UseTemporal_m5886365B7FC63514FCF9A6C10CF96B5A827239DF_inline (TemporalSettings_tA6C0DD29BA465EE493EAFEBE57765D5E84E7D9E0 * __this, const RuntimeMethod* method)
{
	{
		// return enabled;
		bool L_0 = __this->get_enabled_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* SimpleScrollSnap_get_Toggles_m68B3D8EECE325FDB7AE3F9E41EFAC83FB2D7584C_inline (SimpleScrollSnap_tC27AA20908C5278006492835AD8B6226A1B00257 * __this, const RuntimeMethod* method)
{
	{
		// public Toggle[] Toggles { get; set; }
		ToggleU5BU5D_tA5358751F4D3BE44D4C7C9C8CA0E6FCCC78767CF* L_0 = __this->get_U3CTogglesU3Ek__BackingField_52();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->get_m_IsOn_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Spinner_get_current_mA9512C84E9F64BF491A81AB348A026905FF78C17_inline (Spinner_tE1EE534AAF85516F75507516B11AF09068F7406A * __this, const RuntimeMethod* method)
{
	{
		// return this.m_Current;
		float L_0 = __this->get_m_Current_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FloatTween_get_startValue_m32E95475B22C9EF8D6A616B7CF82D328DEAEE277_inline (FloatTween_t7814382C59A52975DDE91625A0B93AF25E34D858 * __this, const RuntimeMethod* method)
{
	{
		// get{return this.m_StartValue;}
		float L_0 = __this->get_m_StartValue_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FloatTween_get_targetValue_m76F3543807DBBCA2C4D4F48EE0328B816ABE6869_inline (FloatTween_t7814382C59A52975DDE91625A0B93AF25E34D858 * __this, const RuntimeMethod* method)
{
	{
		// get{return this.m_TargetValue;}
		float L_0 = __this->get_m_TargetValue_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Water2D_Spawner_set_IsWaterInScene_mB61A4CE20BF75E0A324D937CFDB0BD75F780536F_inline (Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsWaterInScene{ get; private set;}
		bool L_0 = ___value0;
		__this->set_U3CIsWaterInSceneU3Ek__BackingField_22(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MetaballParticleClass_get_Active_m7AD104B4EAA39081494B342095C0BC4891881E10_inline (MetaballParticleClass_t82E5320AC46271F783AC7A7AAC7E941205C1EEE9 * __this, const RuntimeMethod* method)
{
	{
		// get{ return _active;}
		bool L_0 = __this->get__active_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___rhs1;
		float L_3 = L_2.get_x_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___lhs0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___rhs1;
		float L_7 = L_6.get_y_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Water2D_Spawner_get_Dynamic_m5BFA77611B907079B63DAD04A17961045529FA78_inline (Water2D_Spawner_tFD7DC41938E0140664610CDF572E4ACB3AE3372C * __this, const RuntimeMethod* method)
{
	{
		// public bool Dynamic {get{return  _dynamic;}
		bool L_0 = __this->get__dynamic_19();
		return L_0;
	}
}
